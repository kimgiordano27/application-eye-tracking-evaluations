/*
FUNCTION_NAME: UnityEngine.QualitySettings$$get_desiredColorSpace
ENTRY_POINT: 0358ac00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 UnityEngine_QualitySettings__get_desiredColorSpace(long param_1,long param_2)

{
  int iVar1;
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long lVar2;
  long *plVar3;
  float fVar4;
  long in_stack_00000020;
  undefined4 in_stack_00000070;
  
  while (plVar3 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo, in_x9 != 0) {
    do {
      if (*(uint *)(in_x9 + 0x18) <= unaff_w19) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar2 = (long)(int)unaff_w19;
      if (*(int *)(in_x9 + lVar2 * unaff_x20 + 0x20) == 0) {
LAB_035870e8:
        FUN_0209ad50(in_stack_00000020 + 0x588,*(undefined8 *)(in_stack_00000020 + 0x580),
                     *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass3_0_TypeInfo);
        return 1;
      }
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_2 = *plVar3;
        param_1 = *(long *)(param_2 + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        plVar3 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (in_x9 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(in_x9 + 0x18) <= unaff_w19) goto LAB_0358bfac;
      iVar1 = *(int *)(in_x9 + lVar2 * unaff_x20 + 0x20);
      if ((iVar1 == unaff_w21) || (iVar1 == unaff_w22)) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          param_2 = thunk_FUN_01a58e78();
          param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(in_x9 + 0x18) <= unaff_w19) goto LAB_0358bfac;
        lVar2 = in_x9 + lVar2 * unaff_x20;
        in_stack_00000070 = 0;
        fVar4 = (float)FUN_03592a88(param_2,*(undefined8 *)(param_1 + 0x80),
                                    *(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x30),
                                    &stack0x00000070);
        *(bool *)(in_stack_00000020 + 0x5b0) = fVar4 != 0.0;
        plVar3 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      unaff_w19 = unaff_w19 + 1;
      param_2 = *plVar3;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_2 = *plVar3;
      }
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 0x88);
      if (in_x9 == 0) goto LAB_0358c010;
      if (*(int *)(in_x9 + 0x18) <= (int)unaff_w19) goto LAB_035870e8;
    } while (*(int *)(param_2 + 0xe0) != 0);
    thunk_FUN_01a58e78();
    param_2 = *plVar3;
    param_1 = *(long *)(param_2 + 0xb8);
    in_x9 = *(long *)(param_1 + 0x88);
  }
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


