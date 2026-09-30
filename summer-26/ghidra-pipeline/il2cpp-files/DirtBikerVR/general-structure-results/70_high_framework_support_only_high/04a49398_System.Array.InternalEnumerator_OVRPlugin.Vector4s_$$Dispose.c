/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 04a49398
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__Dispose(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  int *unaff_x20;
  int iVar3;
  
  lVar1 = FUN_03ac4090();
  FUN_0403a050(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x80));
  if (0 < *unaff_x20) {
    iVar3 = 0;
    do {
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_04a48290();
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090(*(long *)(unaff_x19 + 0x20));
      }
      uVar2 = FUN_04a49240();
      if ((uVar2 & 1) == 0) {
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_04a486c4();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *unaff_x20);
  }
  return;
}


