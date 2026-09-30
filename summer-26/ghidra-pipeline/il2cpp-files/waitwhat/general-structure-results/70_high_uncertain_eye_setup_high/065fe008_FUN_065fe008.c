/*
FUNCTION_NAME: FUN_065fe008
ENTRY_POINT: 065fe008
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_065fe008(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  
  if ((DAT_07557930 & 1) == 0) {
                    /* try { // try from 065fe044 to 066fe117 has its CatchHandler @ 065fe044
                       catch() { ... } // from try @ 065fe044 with catch @ 065fe044
                       catch() { ... } // from try @ 065fe16c with catch @ 065fe044
                       catch() { ... } // from try @ 065fe198 with catch @ 065fe044
                       catch() { ... } // from try @ 065fe1c4 with catch @ 065fe044
                       catch() { ... } // from try @ 065fe1e8 with catch @ 065fe044 */
    FUN_03188a78(PTR_DAT_070f2fb0);
    FUN_03188a78(System_Collections_Immutable_AllocFreeConcurrentStack_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseTreeView_TypeInfo);
    DAT_07557930 = 1;
  }
  if (param_3 != 0) {
    if (0 < *(int *)(param_3 + 0x18)) {
      iVar3 = 0;
      do {
        puVar2 = UnityEngine_UIElements_BaseTreeView_TypeInfo;
        auVar7 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                           (param_3,iVar3,
                            *(undefined8 *)UnityEngine_UIElements_BaseTreeView_TypeInfo);
        if (param_4 == 0) goto LAB_065fe198;
        auVar8 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                           (param_4,iVar3 + param_5,*(undefined8 *)puVar2);
        iVar6 = 0;
        do {
          uVar5 = *(undefined8 *)(param_2 + 0x40);
          iVar1 = *(int *)(param_2 + 0x58) - auVar7._0_4_;
          uVar4 = *(undefined8 *)(param_1 + 0x58);
          if (0x1ff < iVar1) {
            iVar1 = 0x200;
          }
          if (*(int *)(*(long *)PTR_DAT_070f2fb0 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
                    /* try { // try from 065fe118 to 066fe11f has its CatchHandler @ 065fe1a4 */
                    /* try { // try from 065fe128 to 066fe12f has its CatchHandler @ 065fe1a0 */
          FUN_06999830(uVar5,auVar7._8_4_ + iVar6,0,auVar7._0_8_ & 0xffffffff,auVar7._0_8_ >> 0x20,
                       iVar1,4,uVar4,auVar8._8_4_ + iVar6,0,auVar8._0_4_,auVar8._4_4_,0);
          iVar6 = iVar6 + 1;
        } while (iVar6 != 4);
                    /* try { // try from 065fe164 to 066fe16b has its CatchHandler @ 065fe198 */
        iVar3 = iVar3 + 1;
                    /* try { // try from 065fe16c to 066fe193 has its CatchHandler @ 065fe044 */
      } while (iVar3 < *(int *)(param_3 + 0x18));
    }
                    /* try { // try from 065fe194 to 066fe197 has its CatchHandler @ 065fe19c */
    return;
  }
LAB_065fe198:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 065fe164 with catch @ 065fe198
                       try { // try from 065fe198 to 066fe1bf has its CatchHandler @ 065fe044 */
  FUN_03188cd8();
}


