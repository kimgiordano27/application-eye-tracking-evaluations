/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_enable_multiparty_text_get
ENTRY_POINT: 07888254
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_enable_multiparty_text_get(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000028;
  
  if (in_w8 < 1) {
    FUN_078c790c(*(undefined8 *)UnityEngine_InputSystem_InputControl<float>_TypeInfo,0);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    uVar3 = thunk_FUN_03ac74bc(*unaff_x19);
    FUN_078f6658(uVar3,uVar1,0);
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    uVar3 = thunk_FUN_03ac74bc(*unaff_x19);
    FUN_078f6658(uVar3,uVar1,0);
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_04de90b8(&stack0x00000018,*(long *)(unaff_x20 + 0x18),
                 *(undefined8 *)UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo);
    puVar2 = UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo;
    while (uVar4 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      FUN_07888380(in_stack_00000028,uVar3);
    }
    FUN_061c1960(&stack0x00000018,
                 *(undefined8 *)UnityEngine_UI_Collections_IndexedSet<IClipper>_TypeInfo);
  }
  return uVar3;
}


