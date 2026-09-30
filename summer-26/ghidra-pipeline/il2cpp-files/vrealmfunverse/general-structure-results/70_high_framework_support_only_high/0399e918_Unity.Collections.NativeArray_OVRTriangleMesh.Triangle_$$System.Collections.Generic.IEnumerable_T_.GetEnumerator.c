/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRTriangleMesh.Triangle>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0399e918
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Unity_Collections_NativeArray<OVRTriangleMesh_Triangle>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  long lVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_04d9c908(0);
  if (unaff_w19 < 0) {
    FUN_04d9c54c(0x10,4,0);
  }
  if (*(int *)(unaff_x21 + 0x18) - unaff_w20 < unaff_w19) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(0x17,0);
  }
  if ((*(ushort *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  lVar1 = thunk_FUN_02b79644();
  Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
            (lVar1,unaff_w19,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148))
  ;
  if (lVar1 != 0) {
    FUN_04d9e334(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,
                 unaff_w19,0);
    *(int *)(lVar1 + 0x18) = unaff_w19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


