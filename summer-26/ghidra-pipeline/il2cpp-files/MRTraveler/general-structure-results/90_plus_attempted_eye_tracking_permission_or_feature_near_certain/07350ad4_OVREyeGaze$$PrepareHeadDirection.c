/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 07350ad4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07350ec4) */

void OVREyeGaze__PrepareHeadDirection(long param_1)

{
  undefined *puVar1;
  bool in_ZR;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  char cStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (in_ZR) {
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 != 0) {
LAB_07350db8:
      FUN_085deedc(lVar2,0,0);
      return;
    }
  }
  else {
    in_stack_00000028 = *(undefined8 *)(param_1 + 0x1b4);
    _cStack0000000000000020 = *(undefined8 *)(param_1 + 0x1ac);
    in_stack_00000038 = *(undefined8 *)(param_1 + 0x1c4);
    in_stack_00000030 = *(undefined8 *)(param_1 + 0x1bc);
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 != 0) {
      if (cStack0000000000000020 == '\0') goto LAB_07350db8;
      uVar3 = FUN_085def20(lVar2,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_07350f24;
        FUN_085deedc(*(long *)(unaff_x19 + 0x38),1,0);
      }
      puVar1 = PTR_DAT_08eb3850;
      lVar2 = *(long *)(unaff_x19 + 0x30);
      if (lVar2 != 0) {
        in_stack_00000028 = *(undefined8 *)(lVar2 + 0x1b4);
        _cStack0000000000000020 = *(undefined8 *)(lVar2 + 0x1ac);
        in_stack_00000038 = *(undefined8 *)(lVar2 + 0x1c4);
        in_stack_00000030 = *(undefined8 *)(lVar2 + 0x1bc);
                    /* try { // try from 07350b34 to 07450b5b has its CatchHandler @ 07350cc0 */
        FUN_056bd638(&stack0x00000020,*(undefined8 *)PTR_DAT_08eb3850);
        lVar2 = FUN_085dbb5c();
        lVar6 = *(long *)(unaff_x19 + 0x30);
        if ((lVar6 != 0) && (lVar2 != 0)) {
          fVar10 = *(float *)(unaff_x19 + 0x58);
          fVar12 = fStack0000000000000010 * fVar10 +
                   (float)((ulong)*(undefined8 *)(lVar6 + 0x1a0) >> 0x20);
          FUN_085eb238(CONCAT44(fVar12,in_stack_00000008._4_4_ * fVar10 +
                                       (float)*(undefined8 *)(lVar6 + 0x1a0)),fVar12,
                       fStack0000000000000014 * fVar10 + *(float *)(lVar6 + 0x1a8),lVar2,0);
          lVar2 = FUN_085dbb5c();
                    /* try { // try from 07350ba0 to 07450bc7 has its CatchHandler @ 07350cbc */
          lVar6 = *(long *)(unaff_x19 + 0x30);
          if (lVar6 != 0) {
            in_stack_00000028 = *(undefined8 *)(lVar6 + 0x1b4);
            _cStack0000000000000020 = *(undefined8 *)(lVar6 + 0x1ac);
            in_stack_00000038 = *(undefined8 *)(lVar6 + 0x1c4);
            in_stack_00000030 = *(undefined8 *)(lVar6 + 0x1bc);
            FUN_056bd638(&stack0x00000020,*(undefined8 *)puVar1);
            if (DAT_0940fefb == '\0') {
              FUN_03c8f898(PTR_DAT_08e68e18);
                    /* try { // try from 07350bec to 07450bf3 has its CatchHandler @ 07350cb4 */
              DAT_0940fefb = '\x01';
            }
                    /* try { // try from 07350c08 to 07450c0b has its CatchHandler @ 07350cb8 */
                    /* try { // try from 07350c0c to 07450c1f has its CatchHandler @ 07350c98 */
            lVar6 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
            FUN_085d28c8(in_stack_00000008._4_4_,fStack0000000000000010,fStack0000000000000014,
                         *(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                         *(undefined4 *)(lVar6 + 0x20),0);
            if (lVar2 != 0) {
              FUN_085eb410(lVar2,0);
                    /* try { // try from 07350c2c to 07450c33 has its CatchHandler @ 07350c88 */
              uVar8 = *(undefined8 *)(unaff_x19 + 0x60);
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar3 = FUN_085decd4(uVar8,0,0);
                    /* try { // try from 07350c58 to 07450c6b has its CatchHandler @ 07350c98 */
              if ((uVar3 & 1) != 0) {
                lVar2 = FUN_085dbb5c();
                if (lVar2 == 0) goto LAB_07350f24;
                    /* try { // try from 07350c70 to 07450c73 has its CatchHandler @ 07350cb0 */
                fVar10 = (float)FUN_085eb198(lVar2,0);
                    /* try { // try from 07350c74 to 07450c77 has its CatchHandler @ 07350cac */
                    /* try { // try from 07350c78 to 07450c7b has its CatchHandler @ 07350ca8 */
                if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_07350f24;
                fVar12 = fStack0000000000000010;
                fVar13 = fStack0000000000000014;
                    /* try { // try from 07350c7c to 07450c7f has its CatchHandler @ 07350c94 */
                    /* try { // try from 07350c80 to 07450c83 has its CatchHandler @ 07350c90 */
                    /* try { // try from 07350c84 to 07450c87 has its CatchHandler @ 07350c8c */
                    /* catch() { ... } // from try @ 07350c2c with catch @ 07350c88
                       try { // try from 07350c88 to 07450cd3 has its CatchHandler @ 07350894 */
                    /* catch() { ... } // from try @ 07350c84 with catch @ 07350c8c */
                fVar11 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x60),0);
                    /* catch() { ... } // from try @ 07350c80 with catch @ 07350c90 */
                    /* catch() { ... } // from try @ 07350c7c with catch @ 07350c94 */
                    /* catch() { ... } // from try @ 07350c0c with catch @ 07350c98
                       catch() { ... } // from try @ 07350c58 with catch @ 07350c98 */
                    /* catch() { ... } // from try @ 07350a58 with catch @ 07350c9c */
                    /* catch() { ... } // from try @ 073509ec with catch @ 07350ca0 */
                    /* catch() { ... } // from try @ 07350ab8 with catch @ 07350ca4 */
                if (DAT_09410538 == '\0') {
                    /* catch() { ... } // from try @ 07350c78 with catch @ 07350ca8 */
                    /* catch() { ... } // from try @ 07350c74 with catch @ 07350cac */
                    /* catch() { ... } // from try @ 07350c70 with catch @ 07350cb0 */
                  FUN_03c8f898(PTR_DAT_08e6a6b8);
                    /* catch() { ... } // from try @ 07350bec with catch @ 07350cb4 */
                    /* catch() { ... } // from try @ 07350c08 with catch @ 07350cb8 */
                  DAT_09410538 = '\x01';
                }
                    /* catch() { ... } // from try @ 07350ba0 with catch @ 07350cbc */
                    /* catch() { ... } // from try @ 07350b34 with catch @ 07350cc0 */
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                    /* try { // try from 07350cd4 to 07450cd7 has its CatchHandler @ 07350cf0 */
                    /* try { // try from 07350cd8 to 07450cfb has its CatchHandler @ 07350894 */
                lVar2 = FUN_085dbb5c();
                if (lVar2 == 0) goto LAB_07350f24;
                    /* catch() { ... } // from try @ 07350cd4 with catch @ 07350cf0 */
                    /* try { // try from 07350cfc to 07450d07 has its CatchHandler @ 07350d08 */
                    /* catch() { ... } // from try @ 07350cfc with catch @ 07350d08 */
                fVar10 = SQRT((fStack0000000000000014 - fVar13) * (fStack0000000000000014 - fVar13)
                              + (fVar10 - fVar11) * (fVar10 - fVar11) +
                                (fStack0000000000000010 - fVar12) *
                                (fStack0000000000000010 - fVar12));
                FUN_085eb934(fVar10 * *(float *)(unaff_x19 + 0x68),
                             fVar10 * *(float *)(unaff_x19 + 0x6c),
                             fVar10 * *(float *)(unaff_x19 + 0x70),lVar2,0);
              }
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (lVar2 = *(long *)(unaff_x19 + 0x88), lVar2 != 0)) {
                if (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x84) == 2) {
                  FUN_085deedc(lVar2,1,0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_07350f24;
                  FUN_085b7960(DAT_018b02f0,lVar2,*(undefined4 *)(unaff_x19 + 0x74),0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_07350f24;
                  FUN_085b7960(0x3f800000,lVar2,*(undefined4 *)(unaff_x19 + 0x78),0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_07350f24;
                  uVar5 = *(undefined4 *)(unaff_x19 + 0x7c);
                  fVar12 = 1.0;
                }
                else {
                  FUN_085deedc(lVar2,0,0);
                  plVar9 = *(long **)(unaff_x19 + 0x28);
                  if (plVar9 == (long *)0x0) goto LAB_07350f24;
                  lVar2 = *plVar9;
                  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                  if (uVar3 != 0) {
                    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e73668) {
                        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x10) * 0x10 + 0x138);
                        goto LAB_07350e34;
                      }
                      uVar3 = uVar3 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar3 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e73668,0x10);
LAB_07350e34:
                  uVar8 = (*(code *)*puVar4)(plVar9,1,puVar4[1]);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), fVar10 = DAT_018b02f0,
                     lVar2 == 0)) goto LAB_07350f24;
                  fVar13 = (float)uVar8;
                  fVar12 = 1.0 - fVar13;
                  if (1.0 - fVar13 <= DAT_018b02f0) {
                    fVar12 = DAT_018b02f0;
                  }
                  FUN_085b7960(fVar12,lVar2,*(undefined4 *)(unaff_x19 + 0x74),0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_07350f24;
                  FUN_085b7960(uVar8,lVar2,*(undefined4 *)(unaff_x19 + 0x78),0);
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar2 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0))
                  goto LAB_07350f24;
                  uVar5 = *(undefined4 *)(unaff_x19 + 0x7c);
                  fVar12 = fVar13 * DAT_018b1024 + fVar10;
                  if (fVar13 < 0.0) {
                    fVar12 = fVar10;
                  }
                }
                FUN_085b7960(fVar12,lVar2,uVar5,0);
                if ((*(long *)(unaff_x19 + 0x40) != 0) &&
                   (lVar2 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar2 != 0)) {
                  thunk_FUN_085b6d70(*(undefined4 *)(unaff_x19 + 0x48),
                                     *(undefined4 *)(unaff_x19 + 0x4c),
                                     *(undefined4 *)(unaff_x19 + 0x50),
                                     *(undefined4 *)(unaff_x19 + 0x54),lVar2,
                                     *(undefined4 *)(unaff_x19 + 0x80),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_07350f24:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


