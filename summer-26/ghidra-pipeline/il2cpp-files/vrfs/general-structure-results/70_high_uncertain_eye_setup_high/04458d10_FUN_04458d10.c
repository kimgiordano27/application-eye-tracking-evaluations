/*
FUNCTION_NAME: FUN_04458d10
ENTRY_POINT: 04458d10
PROGRAM: vrfs-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04458d10(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  if ((bRam000000000723dede & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e01990);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    thunk_FUN_0159f088(PTR_DAT_06dd6af8);
                    /* try { // try from 04458d6c to 04558d7b has its CatchHandler @ 04458d7c */
    thunk_FUN_0159f088(PTR_DAT_06da3078);
                    /* catch() { ... } // from try @ 04458cf0 with catch @ 04458d7c
                       catch() { ... } // from try @ 04458d6c with catch @ 04458d7c */
                    /* try { // try from 04458d80 to 04558d83 has its CatchHandler @ 04458d8c */
    thunk_FUN_0159f088(PTR_DAT_06dc9768);
                    /* try { // try from 04458d84 to 04558d8f has its CatchHandler @ 04458c20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04458d80 with catch @ 04458d8c
                        */
    thunk_FUN_0159f088(PTR_DAT_06daad18);
                    /* try { // try from 04458d90 to 0455909f has its CatchHandler @ 04458d90
                       catch() { ... } // from try @ 04458d90 with catch @ 04458d90
                       catch() { ... } // from try @ 04459164 with catch @ 04458d90
                       catch() { ... } // from try @ 04459228 with catch @ 04458d90
                       catch() { ... } // from try @ 044592c4 with catch @ 04458d90 */
    bRam000000000723dede = 1;
  }
  puVar3 = PTR_DAT_06daad18;
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_a0 = 0;
  uStack_120 = 0;
  uStack_170 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (DAT_0722a13e == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e50440);
    DAT_0722a13e = '\x01';
  }
  uVar14 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06e50440 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x80) = **(undefined8 **)(*(long *)PTR_DAT_06e50440 + 0xb8);
  *(undefined4 *)(param_1 + 0x88) = uVar14;
  uVar14 = FUN_0322c180(*(undefined8 *)puVar3,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar14;
  iVar5 = FUN_0322c7a8(0);
  uVar7 = FUN_0322c43c(0x130,0);
  if ((((uVar7 & 1) == 0) && (uVar7 = FUN_0322c43c(0x12f,0), iVar5 < 1)) && ((uVar7 & 1) == 0))
  goto LAB_044594c4;
  fVar19 = 10.0;
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) * 10.0;
  uVar7 = FUN_0322c478(0x69,0);
  if ((uVar7 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  uVar7 = FUN_0322c478(0x66,0);
  if ((uVar7 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  uVar7 = FUN_0322c478(0x73,0);
  if ((uVar7 & 1) != 0) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) ^ 1;
  }
  puVar4 = PTR_DAT_06dd6af8;
  puVar3 = PTR_DAT_06da3078;
  uVar7 = FUN_0322c2ac(1,0);
  if ((uVar7 & 1) != 0) {
    uVar14 = FUN_0322c180(*(undefined8 *)puVar4,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar14;
    fVar15 = (float)FUN_0322c180(*(undefined8 *)puVar3,0);
    fVar19 = DAT_0536a2e0;
    fVar20 = *(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x78) = fVar15;
    if ((fVar19 < fVar20) || (fVar20 < _UNK_053cde8c)) {
      fVar21 = *(float *)(param_1 + 0x3c) - fVar20 * *(float *)(param_1 + 0x5c);
      fVar20 = *(float *)(param_1 + 0x40);
      if (fVar21 <= *(float *)(param_1 + 0x40)) {
        fVar20 = fVar21;
      }
      if (fVar21 < *(float *)(param_1 + 0x44)) {
        fVar20 = *(float *)(param_1 + 0x44);
      }
      *(float *)(param_1 + 0x3c) = fVar20;
    }
    if ((fVar19 < fVar15) || (fVar19 = _UNK_053cde8c, fVar15 < _UNK_053cde8c)) {
      fVar20 = *(float *)(param_1 + 0x48) + fVar15 * *(float *)(param_1 + 0x5c);
      fVar19 = fVar20 + -360.0;
      *(float *)(param_1 + 0x48) = fVar20;
      fVar15 = fVar19;
      if ((360.0 < fVar20) || (fVar15 = fVar20, fVar20 < 0.0)) {
        fVar19 = fVar15 + 360.0;
        fVar20 = fVar19;
        if (0.0 <= fVar15) {
          fVar20 = fVar15;
        }
        *(float *)(param_1 + 0x48) = fVar20;
      }
    }
  }
  if (iVar5 == 1) {
    FUN_0322c388(&uStack_1f8,0,0);
    memcpy(&uStack_e0,&uStack_1f8,0x44);
    iVar6 = OVRPlugin__StartBodyTracking2(&uStack_e0,0);
    if (iVar6 == 1) {
      FUN_0322c388(&uStack_1f8,0,0);
      memcpy(&uStack_e0,&uStack_1f8,0x44);
      fVar20 = (float)FUN_0322bb8c(&uStack_e0,0);
      fVar15 = DAT_0536a2e0;
      if ((DAT_0536a2e0 < fVar19) || (fVar19 < _UNK_053cde8c)) {
        fVar21 = *(float *)(param_1 + 0x3c) + fVar19 * DAT_0536aa98;
        fVar19 = *(float *)(param_1 + 0x40);
        if (fVar21 <= *(float *)(param_1 + 0x40)) {
          fVar19 = fVar21;
        }
        if (fVar21 < *(float *)(param_1 + 0x44)) {
          fVar19 = *(float *)(param_1 + 0x44);
        }
        *(float *)(param_1 + 0x3c) = fVar19;
      }
      if ((fVar15 < fVar20) || (fVar19 = _UNK_053cde8c, fVar20 < _UNK_053cde8c)) {
        fVar20 = fVar20 * DAT_0534c250 + *(float *)(param_1 + 0x48);
        fVar19 = fVar20 + -360.0;
        *(float *)(param_1 + 0x48) = fVar20;
        fVar15 = fVar19;
        if ((360.0 < fVar20) || (fVar15 = fVar20, fVar20 < 0.0)) {
          fVar19 = fVar15 + 360.0;
          fVar20 = fVar19;
          if (0.0 <= fVar15) {
            fVar20 = fVar15;
          }
          *(float *)(param_1 + 0x48) = fVar20;
        }
      }
    }
  }
  puVar2 = PTR_DAT_06d9fd78;
  uVar7 = FUN_0322c2ac(0,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_051d85c4(0);
    FUN_0322c4f0(0);
    if (lVar8 == 0) goto LAB_04459534;
    FUN_051d81ac(&uStack_1f8,lVar8,0);
    uStack_200 = uStack_1e8;
    uStack_208 = uStack_1f0;
    uStack_210 = uStack_1f8;
    uVar7 = FUN_049a8b14(0x43960000,&uStack_210,&uStack_110,0x5c00,0);
    if ((uVar7 & 1) != 0) {
      uVar9 = System_Xml_DtdParser__get_LinePos(&uStack_110,0);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar2);
      }
      uVar7 = FUN_051d94d4(uVar9,uVar11,0);
      if ((uVar7 & 1) == 0) {
        uVar9 = System_Xml_DtdParser__get_LinePos(&uStack_110,0);
        *(undefined8 *)(param_1 + 0x28) = uVar9;
        thunk_FUN_01656ef8((undefined8 *)(param_1 + 0x28),uVar9);
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_1 + 0x52);
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
  }
  uVar7 = FUN_0322c2ac(2,0);
  if ((uVar7 & 1) != 0) {
    plVar10 = (long *)(param_1 + 0x20);
    lVar8 = *plVar10;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar7 = FUN_051d94d4(lVar8,0,0);
    if ((uVar7 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x28);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar7 = FUN_051d2ac0(uVar9,lVar8,0);
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0x28);
        if (lVar8 == 0) goto LAB_04459534;
        lVar13 = *plVar10;
        goto LAB_04459274;
      }
    }
    else {
      lVar8 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e01990);
      if (lVar8 == 0) goto LAB_04459534;
      FUN_051dfd8c(lVar8,*(undefined8 *)PTR_DAT_06dc9768,0);
      uVar9 = FUN_051df7a8(lVar8,0);
      *(undefined8 *)(param_1 + 0x20) = uVar9;
      thunk_FUN_01656ef8(plVar10,uVar9);
      lVar13 = *(long *)(param_1 + 0x20);
      lVar8 = *(long *)(param_1 + 0x28);
      if (lVar8 == 0) goto LAB_04459534;
LAB_04459274:
      plVar12 = (long *)(param_1 + 0x28);
      Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar8,0);
      if (lVar13 == 0) goto LAB_04459534;
      FUN_04f1aa00(lVar13,0);
      if (*plVar12 == 0) goto LAB_04459534;
      lVar8 = *plVar10;
      FUN_04f1adf8(*plVar12,0);
      if (lVar8 == 0) goto LAB_04459534;
      FUN_04f1ae7c(lVar8,0);
      *plVar12 = *plVar10;
      thunk_FUN_01656ef8(plVar12);
      uVar1 = *(undefined1 *)(param_1 + 0x50);
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x52) = uVar1;
    }
    uVar14 = FUN_0322c180(*(undefined8 *)puVar4,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar14;
    uVar14 = FUN_0322c180(*(undefined8 *)puVar3,0);
    *(undefined4 *)(param_1 + 0x78) = uVar14;
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_04459534:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    fVar19 = *(float *)(param_1 + 0x7c);
    fVar20 = 0.0;
    fVar15 = (float)thunk_FUN_04f1bbf4(*(long *)(param_1 + 0x18),0);
    *(float *)(param_1 + 0x80) = fVar15;
    *(float *)(param_1 + 0x84) = fVar19;
    *(float *)(param_1 + 0x88) = fVar20;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_04459534;
    fVar19 = -fVar19;
    FUN_04f1bb6c(-fVar15,fVar19,-fVar20,*(long *)(param_1 + 0x20),0,0);
  }
  if (iVar5 == 2) {
    FUN_0322c388(&uStack_1f8,0,0);
    memcpy(&uStack_160,&uStack_1f8,0x44);
    FUN_0322c388(&uStack_1f8,1,0);
    memcpy(&uStack_1b0,&uStack_1f8,0x44);
    fVar21 = (float)FUN_0322bb6c(&uStack_160,0);
    fVar15 = fVar19;
    fVar16 = (float)FUN_0322bb8c(&uStack_160,0);
    fVar19 = fVar19 - fVar15;
    fVar17 = (float)FUN_0322bb6c(&uStack_1b0,0);
    fVar20 = fVar15;
    fVar18 = (float)FUN_0322bb8c(&uStack_1b0,0);
    if (DAT_0722b9ee == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e1a840);
      DAT_0722b9ee = '\x01';
    }
    puVar3 = PTR_DAT_06e1a840;
    fVar21 = (fVar21 - fVar16) - (fVar17 - fVar18);
    fVar19 = fVar19 - (fVar15 - fVar20);
    if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    fVar19 = fVar19 * fVar19;
    fVar16 = fVar21 * fVar21 + fVar19;
    fVar20 = (float)FUN_0322bb6c(&uStack_160,0);
    fVar15 = fVar19;
    fVar21 = (float)FUN_0322bb6c(&uStack_1b0,0);
    if (DAT_0722b9ee == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e1a840);
      DAT_0722b9ee = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    fVar19 = SQRT(fVar16) -
             SQRT((fVar20 - fVar21) * (fVar20 - fVar21) + (fVar19 - fVar15) * (fVar19 - fVar15));
    if ((DAT_0536a2e0 < fVar19) || (fVar19 < _UNK_053cde8c)) {
      fVar15 = fVar19 * 0.25 + *(float *)(param_1 + 0x30);
      fVar19 = *(float *)(param_1 + 0x34);
      if (fVar15 <= *(float *)(param_1 + 0x34)) {
        fVar19 = fVar15;
      }
      if (fVar15 < *(float *)(param_1 + 0x38)) {
        fVar19 = *(float *)(param_1 + 0x38);
      }
      *(float *)(param_1 + 0x30) = fVar19;
    }
  }
LAB_044594c4:
  fVar19 = *(float *)(param_1 + 0x8c);
  if ((fVar19 < _UNK_053cde8c) || (DAT_0536a2e0 < fVar19)) {
    fVar15 = *(float *)(param_1 + 0x30) + fVar19 * -5.0;
    fVar19 = *(float *)(param_1 + 0x34);
    if (fVar15 <= *(float *)(param_1 + 0x34)) {
      fVar19 = fVar15;
    }
    if (fVar15 < *(float *)(param_1 + 0x38)) {
      fVar19 = *(float *)(param_1 + 0x38);
    }
    *(float *)(param_1 + 0x30) = fVar19;
  }
  return;
}


