/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$AsReadOnly
ENTRY_POINT: 036dbf54
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__AsReadOnly(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x22;
  
  if ((param_1 != 0) && (iVar1 = FUN_03f054bc(param_1,0), unaff_x22 != (long *)0x0)) {
    lVar3 = (**(code **)(*unaff_x22 + 0x238))();
    if (lVar3 != 0) {
      iVar2 = FUN_03f054bc(lVar3,0);
      if (iVar2 < iVar1) {
        uVar4 = FUN_0474aec4(*(undefined8 *)PTR_DAT_06da6b80,0);
        *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
        thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar4);
        return 0;
      }
      lVar3 = (**(code **)(*unaff_x22 + 0x238))();
      if (lVar3 != 0) {
        uVar4 = FUN_036ddf44();
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


