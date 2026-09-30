/*
FUNCTION_NAME: FUN_03e5bb60
ENTRY_POINT: 03e5bb60
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


void FUN_03e5bb60(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
                    /* try { // try from 03e5bb68 to 03f5bb6b has its CatchHandler @ 03e5bb78 */
                    /* try { // try from 03e5bb6c to 03f5bb6f has its CatchHandler @ 03e5bb74 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03e5bb28 with catch @ 03e5bb70
                       try { // try from 03e5bb70 to 03f5bb87 has its CatchHandler @ 03e5ba68 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03e5bb1c with catch @ 03e5bb74
                       catch(type#1 @ 06a5a440) { ... } // from try @ 03e5bb6c with catch @ 03e5bb74
                        */
  if ((bRam000000000723c2a8 & 1) == 0) {
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03e5bb0c with catch @ 03e5bb78
                       catch(type#1 @ 06a5a440) { ... } // from try @ 03e5bb68 with catch @ 03e5bb78
                        */
    thunk_FUN_0159f088(PTR_DAT_06e52cd8);
                    /* try { // try from 03e5bb88 to 03f5bb8b has its CatchHandler @ 03e5bba4 */
                    /* try { // try from 03e5bb8c to 03f5bbaf has its CatchHandler @ 03e5ba68 */
    thunk_FUN_0159f088(PTR_DAT_06e135f0);
    thunk_FUN_0159f088(PTR_DAT_06e61028);
                    /* catch() { ... } // from try @ 03e5bb88 with catch @ 03e5bba4 */
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
                    /* try { // try from 03e5bbb0 to 03f5bbb7 has its CatchHandler @ 03e5bbb8 */
    thunk_FUN_0159f088(PTR_DAT_06e5b850);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03e5bbb0 with catch @ 03e5bbb8
                        */
    bRam000000000723c2a8 = 1;
  }
  lVar4 = FUN_03e5ba5c(param_1);
  puVar1 = PTR_DAT_06d9fd78;
  if (lVar4 == 0) {
LAB_03e5bcb8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar5 = FUN_036e1620(lVar4,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar4);
  }
  uVar6 = FUN_051e0350(uVar5,0);
  puVar2 = PTR_DAT_06e5b850;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    puVar3 = PTR_DAT_06e61028;
    FUN_048662d8(*(undefined8 *)puVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar4 = FUN_01d66d78(*(undefined8 *)puVar3);
    uVar6 = FUN_051e0350(lVar4,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_03e5ba5c(param_1);
      if ((((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
          (lVar4 = FUN_051e516c(*(long *)(lVar4 + 0x28),0), lVar4 != 0)) &&
         (uVar5 = FUN_01a257e8(lVar4,*(undefined8 *)PTR_DAT_06e135f0), lVar7 != 0)) {
        Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                  (lVar7,uVar5,0);
        return;
      }
      goto LAB_03e5bcb8;
    }
  }
  return;
}


