/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$get_Path
ENTRY_POINT: 06400fcc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__get_Path(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_091fe430;
  lVar3 = *(long *)(lVar4 + 0x38);
  if (lVar3 == 0) {
    FUN_03d8f2c8(lVar4);
    lVar3 = *(long *)(lVar4 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar1 = FUN_0719293c();
  if (*(int *)(*(long *)PTR_DAT_091fa330 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)PTR_DAT_091fa330);
  }
  uVar2 = FUN_0709bd60(0,uVar1,0);
  if ((uVar2 & 1) != 0) {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0)
    {
      FUN_03d8f26c();
    }
    uVar1 = thunk_FUN_03d2ef40();
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    FUN_054ae0e0(uVar1,0,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x40));
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar1);
    return;
  }
  return;
}


