/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0193d074
PROGRAM: sharks-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xeca) = 1;
  if (unaff_x20 != 0) {
    puVar3 = *(undefined4 **)(*(long *)PTR_DAT_037f2bb0 + 0xb8);
    FUN_033f3020(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    lVar4 = *(long *)(unaff_x19 + 0x58);
    if (*(char *)(unaff_x21 + 0xeca) == '\0') {
      FUN_017fc350(PTR_DAT_037f2bb0);
      *(undefined1 *)(unaff_x21 + 0xeca) = 1;
    }
    puVar1 = PTR_DAT_037f2b88;
    if (lVar4 != 0) {
      FUN_03434134(lVar4,0);
                    /* try { // try from 0193d0fc to 01a3d103 has its CatchHandler @ 0193d108 */
      lVar4 = FUN_033e6c58();
                    /* try { // try from 0193d104 to 01a3d13b has its CatchHandler @ 0193cc58 */
                    /* catch() { ... } // from try @ 0193d0fc with catch @ 0193d108 */
                    /* catch() { ... } // from try @ 0193cecc with catch @ 0193d10c */
                    /* catch() { ... } // from try @ 0193cf48 with catch @ 0193d118 */
      uVar2 = thunk_FUN_018617ec(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 0193cea4 with catch @ 0193d128
                       catch() { ... } // from try @ 0193cf3c with catch @ 0193d128 */
        FUN_033e980c(lVar4,*(undefined8 *)PTR_DAT_037f4de8,uVar2,1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


