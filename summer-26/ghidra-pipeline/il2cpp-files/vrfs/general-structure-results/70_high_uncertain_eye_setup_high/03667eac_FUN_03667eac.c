/*
FUNCTION_NAME: FUN_03667eac
ENTRY_POINT: 03667eac
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_03667eac(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((bRam0000000007239705 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam0000000007239705 = 1;
  }
  lVar3 = System_Array__InternalArray__set_Item<GradientColorKey>(param_1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar3,0);
  puVar1 = PTR_DAT_06d9fd78;
  if (iVar2 == 0) {
    lVar3 = 0;
  }
  else {
    if (iVar2 == 1) {
                    /* try { // try from 03667f04 to 03767f07 has its CatchHandler @ 03667f10 */
                    /* try { // try from 03667f08 to 03767f2f has its CatchHandler @ 03667a70 */
      uVar4 = FUN_036e1620(lVar3,0);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03667f04 with catch @ 03667f10
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03667d80 with catch @ 03667f14
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03667dc0 with catch @ 03667f18
                        */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar1);
      }
                    /* try { // try from 03667f30 to 03767f33 has its CatchHandler @ 03667fb4 */
      uVar5 = FUN_051d94d4(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
    }
    lVar3 = FUN_036e1620(lVar3,0);
    if (lVar3 == 0) {
      lVar3 = FUN_051d85c4();
      return lVar3;
    }
  }
  return lVar3;
}


