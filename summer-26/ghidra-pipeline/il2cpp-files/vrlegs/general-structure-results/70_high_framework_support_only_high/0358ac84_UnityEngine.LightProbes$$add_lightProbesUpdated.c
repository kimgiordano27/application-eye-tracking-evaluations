/*
FUNCTION_NAME: UnityEngine.LightProbes$$add_lightProbesUpdated
ENTRY_POINT: 0358ac84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 UnityEngine_LightProbes__add_lightProbesUpdated(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *plVar4;
  float fVar5;
  long in_stack_00000020;
  undefined4 in_stack_00000070;
  
  while( true ) {
    lVar2 = *(long *)(*param_1 + 0xb8);
    lVar3 = *(long *)(lVar2 + 0x88);
    if (lVar3 == 0) break;
    do {
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar3 = lVar3 + unaff_x23 * unaff_x20;
      in_stack_00000070 = 0;
      fVar5 = (float)FUN_03592a88(param_2,*(undefined8 *)(lVar2 + 0x80),
                                  *(undefined4 *)(lVar3 + 0x2c),*(undefined4 *)(lVar3 + 0x30),
                                  &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x5b0) = fVar5 != 0.0;
      plVar4 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      do {
        unaff_w19 = unaff_w19 + 1;
        param_2 = *plVar4;
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_2 = *plVar4;
        }
        lVar2 = *(long *)(param_2 + 0xb8);
        lVar3 = *(long *)(lVar2 + 0x88);
        if (lVar3 == 0) goto LAB_0358c010;
        if (*(int *)(lVar3 + 0x18) <= (int)unaff_w19) {
LAB_035870e8:
          FUN_0209ad50(in_stack_00000020 + 0x588,*(undefined8 *)(in_stack_00000020 + 0x580),
                       *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass3_0_TypeInfo)
          ;
          return 1;
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_2 = *plVar4;
          lVar2 = *(long *)(param_2 + 0xb8);
          lVar3 = *(long *)(lVar2 + 0x88);
          plVar4 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (lVar3 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_0358bfac;
        unaff_x23 = (long)(int)unaff_w19;
        if (*(int *)(lVar3 + unaff_x23 * unaff_x20 + 0x20) == 0) goto LAB_035870e8;
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_2 = *plVar4;
          lVar2 = *(long *)(param_2 + 0xb8);
          lVar3 = *(long *)(lVar2 + 0x88);
          plVar4 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (lVar3 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_0358bfac;
        iVar1 = *(int *)(lVar3 + unaff_x23 * unaff_x20 + 0x20);
      } while ((iVar1 != unaff_w21) && (iVar1 != unaff_w22));
    } while (*(int *)(param_2 + 0xe0) != 0);
    param_2 = thunk_FUN_01a58e78();
    param_1 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


