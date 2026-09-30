/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__84$$System.IDisposable.Dispose
ENTRY_POINT: 06df716c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__84__System_IDisposable_Dispose
              (void)

{
  int iVar1;
  int in_w3;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (in_w8 - in_w3 <= unaff_w20) {
    unaff_w20 = in_w8 - in_w3;
  }
  FUN_0712485c();
  iVar1 = unaff_w20 + *(int *)(unaff_x19 + 0x40);
  *(int *)(unaff_x19 + 0x40) = iVar1;
  if (0x10 < iVar1) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_08e91cc8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    auVar3 = FUN_06df73a8(uVar2,0);
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar3;
  }
  return unaff_w20;
}


