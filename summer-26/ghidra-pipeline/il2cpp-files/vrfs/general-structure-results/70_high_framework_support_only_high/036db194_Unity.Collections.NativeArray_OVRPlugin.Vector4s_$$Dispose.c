/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 036db194
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar3 = FUN_03ba8bc0(*(undefined8 *)(unaff_x21 + 0x88),*(undefined8 *)(unaff_x20 + 0x88),0);
  puVar5 = (undefined8 *)PTR_DAT_06da1628;
  if ((uVar3 & 1) != 0) {
    iVar1 = FUN_036effcc();
    iVar2 = FUN_036effcc();
    puVar5 = (undefined8 *)PTR_DAT_06dee128;
    if (iVar2 <= iVar1) {
      return 1;
    }
  }
  uVar4 = FUN_0474aec4(*puVar5,0);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
  thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar4);
  return 0;
}


