/*
FUNCTION_NAME: FUN_044600e8
ENTRY_POINT: 044600e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_044600e8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((bRam000000000723df0c & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e3c8f0);
    thunk_FUN_0159f088(PTR_DAT_06e23cf8);
    thunk_FUN_0159f088(PTR_DAT_06e247c8);
                    /* try { // try from 0446012c to 0456017f has its CatchHandler @ 0446012c
                       catch() { ... } // from try @ 0446012c with catch @ 0446012c
                       catch() { ... } // from try @ 044601e4 with catch @ 0446012c
                       catch() { ... } // from try @ 04460214 with catch @ 0446012c
                       catch() { ... } // from try @ 04460290 with catch @ 0446012c */
    thunk_FUN_0159f088(PTR_DAT_06e633d8);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam000000000723df0c = 1;
  }
  lVar3 = FUN_051e516c(param_1,0);
  if (lVar3 != 0) {
    uVar4 = FUN_01a257e8(lVar3,*(undefined8 *)PTR_DAT_06e247c8);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_01656ef8();
    lVar3 = FUN_051e516c(param_1,0);
                    /* try { // try from 04460180 to 045601e3 has its CatchHandler @ 044601e4 */
    if (lVar3 != 0) {
      lVar3 = FUN_01a25960(lVar3,*(undefined8 *)PTR_DAT_06e23cf8);
      plVar5 = (long *)(param_1 + 0x38);
      *plVar5 = lVar3;
      thunk_FUN_01656ef8(plVar5,lVar3);
      if (*plVar5 != 0) {
        iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(*plVar5,0);
        if (iVar2 == 0) {
          *(undefined8 *)(param_1 + 0x40) = 0;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04460180 with catch @ 044601e4
                       try { // try from 044601e4 to 045601fb has its CatchHandler @ 0446012c */
          uVar4 = 0;
        }
        else {
          if (*plVar5 == 0) goto LAB_044602ac;
          uVar4 = FUN_036e1620(*plVar5,0);
          *(undefined8 *)(param_1 + 0x40) = uVar4;
        }
        thunk_FUN_01656ef8(param_1 + 0x40,uVar4);
        puVar1 = PTR_DAT_06e633d8;
        uVar4 = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 044601fc to 04560213 has its CatchHandler @ 04460288 */
        if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
                    /* try { // try from 04460214 to 04560277 has its CatchHandler @ 0446012c */
        lVar3 = FUN_01d675d4(uVar4,*(undefined8 *)puVar1);
        plVar5 = (long *)(param_1 + 0x20);
        *plVar5 = lVar3;
        thunk_FUN_01656ef8(plVar5,lVar3);
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar3 = *plVar5;
          uVar4 = FUN_051e5130(*(long *)(param_1 + 0x38),0);
          if (lVar3 != 0) {
            FUN_04f1b7a8(lVar3,uVar4,0,0);
            if (*plVar5 != 0) {
              uVar4 = FUN_0431af08(*plVar5,*(undefined8 *)PTR_DAT_06e3c8f0);
              *(undefined8 *)(param_1 + 0x28) = uVar4;
                    /* try { // try from 04460278 to 04560287 has its CatchHandler @ 04460288 */
              thunk_FUN_01656ef8((undefined8 *)(param_1 + 0x28),uVar4);
                    /* catch() { ... } // from try @ 044601fc with catch @ 04460288
                       catch() { ... } // from try @ 04460278 with catch @ 04460288 */
                    /* try { // try from 0446028c to 0456028f has its CatchHandler @ 04460298 */
                    /* try { // try from 04460290 to 0456029b has its CatchHandler @ 0446012c */
              if ((*(long *)(param_1 + 0x20) != 0) &&
                 (lVar3 = FUN_051e516c(*(long *)(param_1 + 0x20),0), lVar3 != 0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0446028c with catch @ 04460298
                        */
                FUN_051df8e4(lVar3,0,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_044602ac:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


