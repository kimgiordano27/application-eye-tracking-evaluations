/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01a1d8a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ray_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;ray_or_cast_sink_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined4 uVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  thunk_FUN_00d48444(Method_UnityEngine_Mesh_MeshDataArray_ApplyToMeshAndDispose__);
  thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033eff30);
  thunk_FUN_00d48444(StringLiteral_2953);
                    /* try { // try from 01a1d8dc to 01b1d90b has its CatchHandler @ 01a1e044 */
  thunk_FUN_00d48444(Newtonsoft_Json_Linq_JTokenType___TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x9e2) = 1;
  uVar1 = FUN_0267bd34(*unaff_x24,0);
  **(undefined4 **)(*unaff_x19 + 0xb8) = uVar1;
  uVar1 = FUN_0267bd34(*unaff_x22,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 4) = uVar1;
  uVar1 = FUN_0267bd34(*unaff_x21,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 8) = uVar1;
  uVar1 = FUN_0267bd34(*unaff_x20,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xc) = uVar1;
                    /* try { // try from 01a1d948 to 01b1d983 has its CatchHandler @ 01a1e038 */
  return;
}


