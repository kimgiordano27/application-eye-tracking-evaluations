/*
FUNCTION_NAME: UnityEngine.LightmapSettings$$set_bakedColorSpace
ENTRY_POINT: 0358ac28
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 UnityEngine_LightmapSettings__set_bakedColorSpace(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  float fVar3;
  long in_stack_00000020;
  undefined4 in_stack_00000070;
  
  do {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_2 = *unaff_x24;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 0x88);
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (in_x9 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(in_x9 + 0x18) <= unaff_w19) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    iVar1 = *(int *)(in_x9 + unaff_x23 * unaff_x20 + 0x20);
    if ((iVar1 == unaff_w21) || (iVar1 == unaff_w22)) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01a58e78();
        param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(in_x9 + 0x18) <= unaff_w19) goto LAB_0358bfac;
      lVar2 = in_x9 + unaff_x23 * unaff_x20;
      in_stack_00000070 = 0;
      fVar3 = (float)FUN_03592a88(param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x30),
                                  &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x5b0) = fVar3 != 0.0;
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    unaff_w19 = unaff_w19 + 1;
    param_2 = *unaff_x24;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_2 = *unaff_x24;
    }
    param_1 = *(long *)(param_2 + 0xb8);
    in_x9 = *(long *)(param_1 + 0x88);
    if (in_x9 == 0) {
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(in_x9 + 0x18) <= (int)unaff_w19) break;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_2 = *unaff_x24;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 0x88);
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (in_x9 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(in_x9 + 0x18) <= unaff_w19) goto LAB_0358bfac;
    unaff_x23 = (long)(int)unaff_w19;
  } while (*(int *)(in_x9 + unaff_x23 * unaff_x20 + 0x20) != 0);
  FUN_0209ad50(in_stack_00000020 + 0x588,*(undefined8 *)(in_stack_00000020 + 0x580),
               *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass3_0_TypeInfo);
  return 1;
}


