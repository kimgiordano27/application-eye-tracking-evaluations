/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<TrackerCoroutine>d__134$$System.IDisposable.Dispose
ENTRY_POINT: 04a89c54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<TrackerCoroutine>d__134__System_IDisposable_Dispose(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  lVar1 = thunk_FUN_02b79548();
  if (lVar1 == 0) {
LAB_04a89d3c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(unaff_x23,unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = lVar1;
  lVar1 = thunk_FUN_02b79548();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar1);
  if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  unaff_x23 = FUN_04d9e838(*(long *)(unaff_x21 + 0x18),0);
  unaff_x24 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
  if ((*(ushort *)(unaff_x24 + 0x135) & 1) == 0) {
    unaff_x24 = FUN_02b76218(unaff_x24);
  }
  if (unaff_x23 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_02b79548(unaff_x23,unaff_x24);
    if (lVar1 == 0) goto LAB_04a89d3c;
  }
  lVar2 = *(long *)(unaff_x22 + 0x20);
  *(long *)(unaff_x19 + 0x18) = lVar1;
  unaff_x24 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
  if ((*(ushort *)(unaff_x24 + 0x135) & 1) == 0) {
    unaff_x24 = FUN_02b76218(unaff_x24);
  }
  if (unaff_x23 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_02b79548(unaff_x23,unaff_x24);
    if (lVar1 == 0) goto LAB_04a89d3c;
  }
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar1);
  *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
  return;
}


