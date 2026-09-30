/*
FUNCTION_NAME: FUN_01e3d260
ENTRY_POINT: 01e3d260
PROGRAM: Lovesick-libil2cpp.so
SCORE: 191
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_01e3d260(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 01e3d264 to 01f3d267 has its CatchHandler @ 01e3d278 */
                    /* try { // try from 01e3d26c to 01f3d26f has its CatchHandler @ 01e3d274 */
                    /* try { // try from 01e3d270 to 01f3d2a7 has its CatchHandler @ 01e3cb60 */
                    /* catch() { ... } // from try @ 01e3d26c with catch @ 01e3d274 */
                    /* catch() { ... } // from try @ 01e3d264 with catch @ 01e3d278 */
  if ((DAT_0377fbf9 & 1) == 0) {
                    /* catch() { ... } // from try @ 01e3d25c with catch @ 01e3d27c */
                    /* catch() { ... } // from try @ 01e3d170 with catch @ 01e3d280 */
                    /* catch() { ... } // from try @ 01e3d160 with catch @ 01e3d284 */
    thunk_FUN_00d48444(Method_System_MarshalByRefObject_InitializeLifetimeService__);
                    /* catch() { ... } // from try @ 01e3d130 with catch @ 01e3d288 */
                    /* catch() { ... } // from try @ 01e3d0d4 with catch @ 01e3d28c */
                    /* catch() { ... } // from try @ 01e3d18c with catch @ 01e3d290 */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_103__);
    thunk_FUN_00d48444(StringLiteral_7286);
                    /* try { // try from 01e3d2a8 to 01f3d2ab has its CatchHandler @ 01e3d728 */
    thunk_FUN_00d48444(Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_TypeInfo);
                    /* try { // try from 01e3d2ac to 01f3d4f7 has its CatchHandler @ 01e3cb60 */
    DAT_0377fbf9 = 1;
  }
  FUN_017b46ec(param_1,0);
  *(long **)(param_1 + 0x10) = param_2;
  puVar1 = Method_System_MarshalByRefObject_InitializeLifetimeService__;
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_7286;
    if (lVar3 != 0) {
      System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>__Dispose
                (lVar3,0,*(undefined8 *)
                          Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_TypeInfo,0);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        FUN_0123e180(lVar4,lVar3,8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_103__);
        *(long *)(param_1 + 0x20) = lVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


