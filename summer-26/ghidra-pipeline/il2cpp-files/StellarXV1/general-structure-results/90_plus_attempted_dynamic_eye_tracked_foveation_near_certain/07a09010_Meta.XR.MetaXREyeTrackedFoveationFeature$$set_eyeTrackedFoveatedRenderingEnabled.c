/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07a09010
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 134
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  char cVar2;
  undefined1 in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar4;
  
  *(undefined1 *)(unaff_x20 + 0x4f1) = in_w8;
  cVar2 = DAT_098854f0;
  puVar1 = PTR_DAT_09285d60;
  lVar3 = *(long *)PTR_DAT_09285d60;
  uVar4 = *(undefined4 *)(*(undefined8 **)(lVar3 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x20) = **(undefined8 **)(lVar3 + 0xb8);
                    /* try { // try from 07a09038 to 07b091ff has its CatchHandler @ 07a09038
                       catch() { ... } // from try @ 07a09038 with catch @ 07a09038
                       catch() { ... } // from try @ 07a0920c with catch @ 07a09038
                       catch() { ... } // from try @ 07a09c28 with catch @ 07a09038
                       catch() { ... } // from try @ 07a09d74 with catch @ 07a09038
                       catch() { ... } // from try @ 07a09e64 with catch @ 07a09038
                       catch() { ... } // from try @ 07a09e8c with catch @ 07a09038 */
  *(undefined4 *)(unaff_x19 + 0x28) = uVar4;
  if (cVar2 == '\0') {
    FUN_04077588(puVar1);
    lVar3 = *(long *)puVar1;
    DAT_098854f0 = '\x01';
  }
  uVar4 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x14);
  *(undefined8 *)(unaff_x19 + 0x2c) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xc);
  *(undefined4 *)(unaff_x19 + 0x34) = uVar4;
  thunk_FUN_089c6ea4();
  return;
}


