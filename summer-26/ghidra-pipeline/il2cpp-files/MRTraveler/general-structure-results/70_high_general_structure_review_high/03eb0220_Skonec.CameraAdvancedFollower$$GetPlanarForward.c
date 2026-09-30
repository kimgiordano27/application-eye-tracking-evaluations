/*
FUNCTION_NAME: Skonec.CameraAdvancedFollower$$GetPlanarForward
ENTRY_POINT: 03eb0220
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Skonec_CameraAdvancedFollower__GetPlanarForward(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  float fVar9;
  undefined1 auVar10 [16];
  
  lVar3 = thunk_FUN_03cf5138();
  if (lVar3 == 0) goto LAB_03eb02fc;
  thunk_FUN_03d233cc();
  if (*(char *)(unaff_x25 + 0xff9) == '\0') {
    FUN_03c8f898(PTR_DAT_08e69b50);
    *(undefined1 *)(unaff_x25 + 0xff9) = 1;
  }
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 03eb0270 to 03fb02b3 has its CatchHandler @ 03eafdb4 */
    thunk_FUN_03cd7500();
    lVar3 = *unaff_x24;
  }
  puVar2 = PTR_DAT_08e70370;
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + 0x168);
    plVar6 = (long *)(lVar3 + 0x168);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e70370);
                    /* try { // try from 03eb02b4 to 03fb02bf has its CatchHandler @ 03eb0350 */
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              ();
    unaff_x21 = FUN_0714874c(uVar8,uVar4,0);
    if (unaff_x21 == 0) {
                    /* try { // try from 03eb0308 to 03fb030b has its CatchHandler @ 03eb033c */
      lVar3 = 0;
                    /* catch() { ... } // from try @ 03eb02f0 with catch @ 03eb030c
                       try { // try from 03eb030c to 03fb036f has its CatchHandler @ 03eafdb4 */
      *plVar6 = 0;
    }
    else {
      unaff_x22 = *(undefined8 *)puVar2;
                    /* try { // try from 03eb02d8 to 03fb02df has its CatchHandler @ 03eb0310 */
      lVar3 = thunk_FUN_03cf5138(unaff_x21,unaff_x22);
      if (lVar3 == 0) {
LAB_03eb02fc:
                    /* try { // try from 03eb0300 to 03fb0303 has its CatchHandler @ 03eb034c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03eb0304 to 03fb0307 has its CatchHandler @ 03eb0348 */
        FUN_03c8fecc(unaff_x21,unaff_x22);
      }
      *plVar6 = lVar3;
      unaff_x22 = *(undefined8 *)puVar2;
                    /* try { // try from 03eb02f0 to 03fb02fb has its CatchHandler @ 03eb030c */
      lVar3 = thunk_FUN_03cf5138(unaff_x21,unaff_x22);
      if (lVar3 == 0) goto LAB_03eb02fc;
    }
                    /* catch() { ... } // from try @ 03eb02d8 with catch @ 03eb0310 */
                    /* catch() { ... } // from try @ 03eb01b4 with catch @ 03eb0314 */
    thunk_FUN_03d233cc(plVar6,lVar3);
                    /* catch() { ... } // from try @ 03eb0088 with catch @ 03eb0318 */
                    /* catch() { ... } // from try @ 03eb0070 with catch @ 03eb031c */
    if (*(char *)(unaff_x25 + 0xff9) == '\0') {
                    /* catch() { ... } // from try @ 03eaffa8 with catch @ 03eb0320 */
                    /* catch() { ... } // from try @ 03eb004c with catch @ 03eb0324 */
                    /* catch() { ... } // from try @ 03eaffd4 with catch @ 03eb0328 */
      FUN_03c8f898(PTR_DAT_08e69b50);
                    /* catch() { ... } // from try @ 03eb01bc with catch @ 03eb032c */
                    /* catch() { ... } // from try @ 03eb018c with catch @ 03eb0330 */
      *(undefined1 *)(unaff_x25 + 0xff9) = 1;
    }
                    /* catch() { ... } // from try @ 03eb0010 with catch @ 03eb0334 */
    lVar3 = *unaff_x24;
                    /* catch() { ... } // from try @ 03eaffac with catch @ 03eb0338 */
                    /* catch() { ... } // from try @ 03eb0308 with catch @ 03eb033c */
    if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03eb0100 with catch @ 03eb0340 */
      thunk_FUN_03cd7500();
                    /* catch() { ... } // from try @ 03eb00f4 with catch @ 03eb0344 */
      lVar3 = *unaff_x24;
    }
    puVar2 = PTR_DAT_08e699b0;
                    /* catch() { ... } // from try @ 03eb0304 with catch @ 03eb0348 */
                    /* catch() { ... } // from try @ 03eb0300 with catch @ 03eb034c */
                    /* catch() { ... } // from try @ 03eb01dc with catch @ 03eb0350
                       catch() { ... } // from try @ 03eb02b4 with catch @ 03eb0350 */
    if (**(long **)(lVar3 + 0xb8) != 0) {
                    /* catch() { ... } // from try @ 03eaff30 with catch @ 03eb0354
                       catch() { ... } // from try @ 03eb00d4 with catch @ 03eb0354 */
                    /* catch() { ... } // from try @ 03eafe84 with catch @ 03eb0358
                       catch() { ... } // from try @ 03eaffcc with catch @ 03eb0358
                       catch() { ... } // from try @ 03eb00b4 with catch @ 03eb0358 */
      if (*(char *)(**(long **)(lVar3 + 0xb8) + 0x26) == '\0') {
        if (DAT_0940fff3 == '\0') {
          FUN_03c8f898(PTR_DAT_08e69730);
          DAT_0940fff3 = '\x01';
        }
        lVar3 = **(long **)(*(long *)PTR_DAT_08e69730 + 0xb8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (DAT_0940fff6 == '\0') {
          FUN_03c8f898(PTR_DAT_08e699b0);
          DAT_0940fff6 = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar5 = *(long *)puVar2;
        }
        if (((**(long **)(lVar5 + 0xb8) != 0) &&
            (lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x58), lVar5 != 0)) &&
           (lVar5 = Skonec_Dice__SetReleaseTimer(lVar5,0x15f91,0), puVar2 = PTR_DAT_08e703a8,
           lVar5 != 0)) {
          fVar9 = *(float *)(lVar5 + 0x14);
          lVar5 = *(long *)PTR_DAT_08e703a8;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar5 = *(long *)puVar2;
          }
          lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar7 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar5 = *(long *)puVar2;
            }
            uVar4 = **(undefined8 **)(lVar5 + 0xb8);
            lVar7 = thunk_FUN_03cf5234(*unaff_x23);
            FUN_07064478(lVar7,uVar4,*(undefined8 *)PTR_DAT_08e703a0,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar6 = lVar7;
            thunk_FUN_03d233cc(plVar6,lVar7);
          }
          if (lVar3 != 0) {
            auVar10 = FUN_03da6434(fVar9 * DAT_018b0f04,0x40000000,0,DAT_018b0398,lVar3,1,lVar7,0);
            goto LAB_03eb05b8;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_08e699b0 + 0xe0) == 0) {
                    /* try { // try from 03eb0370 to 03fb0387 has its CatchHandler @ 03eb0464 */
          thunk_FUN_03cd7500();
        }
        if (DAT_0940fff6 == '\0') {
                    /* try { // try from 03eb0388 to 03fb0453 has its CatchHandler @ 03eafdb4 */
          FUN_03c8f898(PTR_DAT_08e699b0);
          DAT_0940fff6 = '\x01';
        }
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar3 = *(long *)puVar2;
        }
        if (((**(long **)(lVar3 + 0xb8) != 0) &&
            (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x58), lVar3 != 0)) &&
           (lVar3 = Skonec_Dice__SetReleaseTimer(lVar3,0x15f91,0), lVar3 != 0)) {
          fVar9 = *(float *)(lVar3 + 0x14);
          if (*(int *)(*(long *)PTR_DAT_08e69640 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69640);
          }
          iVar1 = -0x80000000;
          if (fVar9 != INFINITY) {
            iVar1 = (int)fVar9;
          }
          auVar10 = FUN_07c93950(iVar1,0,8,0,0,0);
          uVar4 = thunk_FUN_03cf5234(*unaff_x23);
          FUN_07064478();
          auVar10 = FUN_07ca2ef4(auVar10._0_8_,auVar10._8_8_,uVar4,0);
LAB_03eb05b8:
          FUN_07ca2a30(auVar10._0_8_,auVar10._8_8_,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03eb05dc to 03fb05e7 has its CatchHandler @ 03eb09c0 */
  FUN_03c8fb30();
}


