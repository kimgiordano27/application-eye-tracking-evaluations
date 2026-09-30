/*
FUNCTION_NAME: System.Array$$BinarySearch<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 045e1b24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 System_Array__BinarySearch<ProbeVolumeBakingSet_SerializedPerSceneCellList>(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x19;
  int iVar10;
  int iVar11;
  long unaff_x20;
  float fVar12;
  
  *(undefined1 *)(unaff_x20 + 0x57e) = 1;
                    /* try { // try from 045e1b2c to 046e1b3f has its CatchHandler @ 045e1c10 */
  if (((unaff_x19 == 0) || (*(long *)(unaff_x19 + 0x128) == 0)) ||
     (*(long *)(unaff_x19 + 0x120) == 0)) goto LAB_045e1c00;
  iVar1 = *(int *)(*(long *)(unaff_x19 + 0x128) + 0x18);
  if ((*(int *)(*(long *)(unaff_x19 + 0x120) + 0x18) == 0 && iVar1 == 0) &&
     (uVar6 = FUN_045e204c(), (uVar6 & 1) == 0)) {
    uVar8 = 0;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x101) = 1;
                    /* try { // try from 045e1b68 to 046e1b7b has its CatchHandler @ 045e1c0c */
    if (*(int *)(unaff_x19 + 0xa4) < 0) {
      fVar12 = INFINITY;
    }
    else {
      fVar12 = *(float *)(unaff_x19 + 0xa0) * (float)*(int *)(unaff_x19 + 0xa4);
    }
    *(float *)(unaff_x19 + 0x108) = fVar12;
    FUN_045e20ac(*(undefined8 *)(unaff_x19 + 0x128));
    puVar3 = PTR_DAT_09f23280;
    if (*(char *)(unaff_x19 + 0xb0) != '\0') {
      lVar7 = *(long *)(unaff_x19 + 0x120);
      if (lVar7 == 0) {
LAB_045e1c00:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
                    /* try { // try from 045e1ba0 to 046e1bb3 has its CatchHandler @ 045e1c08 */
      iVar11 = *(int *)(lVar7 + 0x18);
      if (0 < iVar11) {
        iVar10 = 0;
        do {
          FUN_05badb74(lVar7,iVar10,*(undefined8 *)puVar3);
          if (*(char *)(unaff_x19 + 0x99) == '\0') {
                    /* try { // try from 045e1bd8 to 046e1beb has its CatchHandler @ 045e1c04 */
            if ((*(long *)(unaff_x19 + 0x120) == 0) ||
               (lVar7 = FUN_05badb74(*(long *)(unaff_x19 + 0x120),iVar10,*(undefined8 *)puVar3),
               lVar7 == 0)) break;
            *(undefined1 *)(lVar7 + 0xb0) = 1;
          }
                    /* try { // try from 045e1bec to 046e1c7b has its CatchHandler @ 045e1814 */
          if (iVar11 + -1 == iVar10) goto LAB_045e1c04;
          lVar7 = *(long *)(unaff_x19 + 0x120);
          iVar10 = iVar10 + 1;
        } while (lVar7 != 0);
        goto LAB_045e1c00;
      }
    }
LAB_045e1c04:
    puVar5 = PTR_DAT_09f23288;
    puVar4 = PTR_DAT_09f23240;
    puVar3 = PTR_DAT_09f22fe0;
                    /* catch() { ... } // from try @ 045e1bd8 with catch @ 045e1c04 */
                    /* catch() { ... } // from try @ 045e1ba0 with catch @ 045e1c08 */
    uVar8 = 1;
                    /* catch() { ... } // from try @ 045e1b68 with catch @ 045e1c0c */
                    /* catch() { ... } // from try @ 045e1b2c with catch @ 045e1c10 */
    if ((*(char *)(unaff_x19 + 0x2d) != '\0') && (0 < iVar1)) {
                    /* catch() { ... } // from try @ 045e1a70 with catch @ 045e1c28 */
      iVar11 = 0;
                    /* catch() { ... } // from try @ 045e1ab4 with catch @ 045e1c34 */
      do {
                    /* catch() { ... } // from try @ 045e1a88 with catch @ 045e1c38 */
                    /* catch() { ... } // from try @ 045e1a7c with catch @ 045e1c4c */
        if ((*(long *)(unaff_x19 + 0x128) == 0) ||
           (plVar9 = (long *)FUN_05badb74(*(long *)(unaff_x19 + 0x128),iVar11,*(undefined8 *)puVar4)
           , plVar9 == (long *)0x0)) goto LAB_045e1c00;
        if ((int)plVar9[2] == 0) {
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
                    /* try { // try from 045e1c7c to 046e1daf has its CatchHandler @ 045e1c7c
                       catch() { ... } // from try @ 045e1c7c with catch @ 045e1c7c
                       catch() { ... } // from try @ 045e1dc8 with catch @ 045e1c7c
                       catch() { ... } // from try @ 045e1e98 with catch @ 045e1c7c */
          if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(plVar9);
          }
          fVar12 = *(float *)(plVar9 + 0x14);
          iVar10 = *(int *)((long)plVar9 + 0xa4);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_04612238(fVar12 * (float)iVar10,plVar9,0,3,0);
          *(undefined1 *)((long)plVar9 + 0x2d) = 1;
        }
        iVar11 = iVar11 + 1;
      } while (iVar1 != iVar11);
      uVar8 = 1;
    }
  }
  return uVar8;
}


