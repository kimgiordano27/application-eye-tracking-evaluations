/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 05f80558
PROGRAM: vandalizer-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05f80734) */

void OVREyeGaze__CalculateEyeRotation(float param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05f80534 with catch @ 05f80560
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05f80530 with catch @ 05f80564
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05f80510 with catch @ 05f8056c
                       catch(type#1 @ 0718d318) { ... } // from try @ 05f80550 with catch @ 05f8056c
                        */
                    /* try { // try from 05f80574 to 06080577 has its CatchHandler @ 05f805ec */
                    /* try { // try from 05f80578 to 06080597 has its CatchHandler @ 05f80450 */
  fVar7 = SQRT((unaff_s10 - unaff_s13) * (unaff_s10 - unaff_s13) +
               param_1 * param_1 + (unaff_s9 - unaff_s12) * (unaff_s9 - unaff_s12));
  FUN_06e6b2fc(fVar7 * *(float *)(unaff_x19 + 0x68),fVar7 * *(float *)(unaff_x19 + 0x6c),
               fVar7 * *(float *)(unaff_x19 + 0x70),param_2,0);
                    /* try { // try from 05f80598 to 0608059b has its CatchHandler @ 05f805b0 */
  if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar1 = *(long *)(unaff_x19 + 0x88), lVar1 == 0))
  goto LAB_05f80794;
  if (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x84) == 2) {
                    /* catch() { ... } // from try @ 05f80598 with catch @ 05f805b0 */
    FUN_06e59c44(lVar1,1,0);
                    /* try { // try from 05f805bc to 060805d3 has its CatchHandler @ 05f805ec */
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05f80794;
                    /* try { // try from 05f805d4 to 060805e3 has its CatchHandler @ 05f80450 */
    thunk_FUN_06e1062c(DAT_014ba894,lVar1,*(undefined4 *)(unaff_x19 + 0x74),0);
                    /* try { // try from 05f805e4 to 060805eb has its CatchHandler @ 05f805ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f80574 with catch @ 05f805ec
                       catch(type#2 @ 00000000) { ... } // from try @ 05f805bc with catch @ 05f805ec
                       catch(type#2 @ 00000000) { ... } // from try @ 05f805e4 with catch @ 05f805ec
                        */
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05f80794;
    thunk_FUN_06e1062c(0x3f800000,lVar1,*(undefined4 *)(unaff_x19 + 0x78),0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05f80794;
    uVar3 = *(undefined4 *)(unaff_x19 + 0x7c);
    fVar8 = 1.0;
  }
  else {
    FUN_06e59c44(lVar1,0,0);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 == (long *)0x0) goto LAB_05f80794;
    lVar1 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f2fc8) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 0x10) * 0x10 + 0x138);
          goto LAB_05f806a4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075f2fc8,0x10);
LAB_05f806a4:
    uVar9 = (*(code *)*puVar2)(plVar6,1,puVar2[1]);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), fVar7 = DAT_014ba894, lVar1 == 0)
       ) goto LAB_05f80794;
    fVar10 = (float)uVar9;
    fVar8 = 1.0 - fVar10;
    if (1.0 - fVar10 <= DAT_014ba894) {
      fVar8 = DAT_014ba894;
    }
    thunk_FUN_06e1062c(fVar8,lVar1,*(undefined4 *)(unaff_x19 + 0x74),0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05f80794;
    thunk_FUN_06e1062c(uVar9,lVar1,*(undefined4 *)(unaff_x19 + 0x78),0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05f80794;
    uVar3 = *(undefined4 *)(unaff_x19 + 0x7c);
    fVar8 = fVar10 * DAT_014baf38 + fVar7;
    if (fVar10 < 0.0) {
      fVar8 = fVar7;
    }
  }
  thunk_FUN_06e1062c(fVar8,lVar1,uVar3,0);
  if ((*(long *)(unaff_x19 + 0x40) != 0) &&
     (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
    thunk_FUN_06e1073c(*(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                       *(undefined4 *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x54),lVar1,
                       *(undefined4 *)(unaff_x19 + 0x80),0);
    return;
  }
LAB_05f80794:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


