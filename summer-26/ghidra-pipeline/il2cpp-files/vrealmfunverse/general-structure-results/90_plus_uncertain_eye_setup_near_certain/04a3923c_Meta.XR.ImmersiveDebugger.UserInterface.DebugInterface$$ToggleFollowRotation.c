/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$ToggleFollowRotation
ENTRY_POINT: 04a3923c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__ToggleFollowRotation(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_06313588;
  if (param_1 == 0) {
    lVar2 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    lVar3 = *(long *)PTR_DAT_06313588;
    lVar2 = thunk_FUN_02b79548(param_1,lVar3);
    if (lVar2 == 0) goto LAB_04a39338;
    uVar4 = *(undefined8 *)puVar1;
    *(long *)(unaff_x19 + 0x10) = lVar2;
    lVar2 = thunk_FUN_02b79548(param_1,uVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(param_1,uVar4);
    }
  }
  thunk_FUN_02bb0e9c(unaff_x19 + 0x10,lVar2);
  if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  param_1 = FUN_04d9e838(*(long *)(unaff_x21 + 0x18),0);
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_02b79548(param_1,lVar3);
    if (lVar2 == 0) goto LAB_04a39338;
  }
  lVar3 = *(long *)(unaff_x22 + 0x20);
  *(long *)(unaff_x19 + 0x18) = lVar2;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_02b79548(param_1,lVar3);
    if (lVar2 == 0) {
LAB_04a39338:
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(param_1,lVar3);
    }
  }
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar2);
  *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
  return;
}


