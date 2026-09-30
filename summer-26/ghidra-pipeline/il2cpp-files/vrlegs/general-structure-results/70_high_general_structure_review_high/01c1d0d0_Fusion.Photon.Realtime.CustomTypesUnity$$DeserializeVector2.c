/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$DeserializeVector2
ENTRY_POINT: 01c1d0d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c1d24c) */

void Fusion_Photon_Realtime_CustomTypesUnity__DeserializeVector2
               (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
               long param_5,long param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar17 = param_4._4_4_;
  uVar16 = param_4._0_4_;
  uVar15 = param_3._4_4_;
  uVar14 = param_3._0_4_;
                    /* try { // try from 01c1d0d4 to 01d1d0d7 has its CatchHandler @ 01c1d0e4 */
                    /* try { // try from 01c1d0d8 to 01d1d0e7 has its CatchHandler @ 01c1d0c8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1d0d4 with catch @ 01c1d0e4
                        */
                    /* try { // try from 01c1d0e8 to 01d1d0eb has its CatchHandler @ 01c1d0f4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1d0e8 with catch @ 01c1d0f4
                        */
  if ((DAT_0411f672 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1d110 with catch @ 01c1d100
                        */
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    DAT_0411f672 = 1;
  }
  puVar1 = PTR_DAT_03cbdf88;
                    /* try { // try from 01c1d10c to 01d1d10f has its CatchHandler @ 01c1d11c */
  if (param_6 == 0) goto LAB_01c1d5f0;
                    /* try { // try from 01c1d110 to 01d1d11f has its CatchHandler @ 01c1d100 */
  uVar10 = *(undefined8 *)(param_6 + 0x30);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1d10c with catch @ 01c1d11c
                        */
                    /* try { // try from 01c1d120 to 01d1d123 has its CatchHandler @ 01c1d12c */
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1d120 with catch @ 01c1d12c
                        */
  uVar4 = FUN_036cee6c(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 01c1d244 with catch @ 01c1d200 */
    return;
  }
  uVar10 = *(undefined8 *)(param_6 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_036cee6c(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
                    /* catch() { ... } // from try @ 01c1d1b8 with catch @ 01c1d168 */
  iVar2 = FUN_03686798(0);
  iVar3 = FUN_036867c0(0);
  if (*(long *)(param_6 + 0x20) == 0) goto LAB_01c1d5f0;
  uVar10 = FUN_01c0519c(*(long *)(param_6 + 0x20),0);
                    /* try { // try from 01c1d1a0 to 01d1d1b7 has its CatchHandler @ 01c1d1ec */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
                    /* try { // try from 01c1d1b8 to 01d1d1ff has its CatchHandler @ 01c1d168 */
  uVar4 = FUN_036cee6c(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = (ulong)(uint)(float)iVar2;
    uVar20 = (ulong)(uint)(float)iVar3;
    param_2 = 0.0;
    fVar11 = 0.0;
  }
  else {
    if ((*(long *)(param_6 + 0x20) == 0) ||
       (lVar5 = FUN_01c0519c(*(long *)(param_6 + 0x20),0), lVar5 == 0)) goto LAB_01c1d5f0;
    fVar11 = (float)FUN_03674c50(lVar5,0);
    uVar4 = CONCAT44(uVar15,uVar14);
    uVar20 = CONCAT44(uVar17,uVar16);
                    /* catch() { ... } // from try @ 01c1d1a0 with catch @ 01c1d1ec */
  }
  iVar2 = FUN_03686798(0);
                    /* try { // try from 01c1d22c to 01d1d243 has its CatchHandler @ 01c1d278 */
  iVar3 = FUN_036867c0(0);
  fVar12 = *(float *)(param_5 + 0x68);
                    /* try { // try from 01c1d244 to 01d1d28b has its CatchHandler @ 01c1d200 */
  if (fVar12 < -1.0) {
    fVar12 = -1.0;
  }
  if (*(long *)(param_6 + 0x28) == 0) goto LAB_01c1d5f0;
  fVar18 = (float)uVar4;
                    /* catch() { ... } // from try @ 01c1d22c with catch @ 01c1d278 */
  fVar19 = (float)uVar20;
  fVar23 = fVar18 * -fVar12 * 0.5;
  FUN_036dbc2c((fVar18 * 0.5 + (fVar11 - (float)iVar2 * 0.5)) - fVar23,
               fVar19 * 0.5 + (param_2 - (float)iVar3 * 0.5),0,*(long *)(param_6 + 0x28),0);
  lVar5 = *(long *)(param_6 + 0x28);
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    DAT_0411f169 = '\x01';
  }
  if (lVar5 == 0) goto LAB_01c1d5f0;
  puVar8 = *(undefined4 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
  FUN_036dcf10(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar5,0);
  lVar5 = *(long *)(param_6 + 0x28);
  if (DAT_0411f16a == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f16a = '\x01';
  }
  if (lVar5 == 0) goto LAB_01c1d5f0;
  lVar9 = *(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  FUN_036dd4ac(*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
               *(undefined4 *)(lVar9 + 0x14),lVar5,0);
  if (*(long *)(param_6 + 0x28) == 0) goto LAB_01c1d5f0;
  FUN_036dc064(*(long *)(param_6 + 0x28),0);
  if (*(long *)(param_6 + 0x28) == 0) goto LAB_01c1d5f0;
  FUN_036db9c4((fVar18 + 1.0) - ABS(fVar18 * -fVar12),fVar19 + 1.0,*(long *)(param_6 + 0x28),0);
  if (DAT_0411f1e5 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbeb70);
    DAT_0411f1e5 = '\x01';
  }
  uVar10 = *(undefined8 *)(param_5 + 0x38);
  fVar12 = *(float *)(*(long *)(*(long *)PTR_DAT_03cbeb70 + 0xb8) + 8);
  fVar11 = *(float *)(*(long *)(*(long *)PTR_DAT_03cbeb70 + 0xb8) + 0xc);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036cee6c(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)(param_5 + 0x38);
    if (plVar7 == (long *)0x0) goto LAB_01c1d5f0;
    iVar2 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (0 < iVar2) {
      plVar7 = *(long **)(param_5 + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_01c1d5f0;
      iVar2 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (((0.0 < fVar19) && (0.0 < fVar18)) && (0 < iVar2)) {
        plVar7 = *(long **)(param_5 + 0x38);
        if (plVar7 == (long *)0x0) goto LAB_01c1d5f0;
        iVar2 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
        plVar7 = *(long **)(param_5 + 0x38);
        if (plVar7 == (long *)0x0) goto LAB_01c1d5f0;
        iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        fVar13 = (fVar19 * (float)iVar2) / (fVar18 * (float)iVar3);
        if (*(int *)(param_5 + 0x40) == 1) {
          if (fVar13 < 1.0) {
LAB_01c1d488:
            fVar11 = fVar11 / fVar13;
            goto LAB_01c1d48c;
          }
        }
        else {
          if (*(int *)(param_5 + 0x40) != 0) goto LAB_01c1d48c;
          if (1.0 <= fVar13) goto LAB_01c1d488;
        }
        fVar12 = fVar12 * fVar13;
      }
    }
  }
LAB_01c1d48c:
  lVar5 = 0x60;
  if (*(char *)(param_5 + 100) != '\0') {
    lVar5 = 0x5c;
  }
  if (*(long *)(param_6 + 0x30) != 0) {
    fVar13 = *(float *)(param_5 + 0x5c);
    fVar24 = *(float *)(param_5 + lVar5);
    FUN_0391d734(*(long *)(param_6 + 0x30),*(undefined8 *)(param_5 + 0x38),0);
    plVar7 = *(long **)(param_6 + 0x30);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,*(float *)(param_5 + 0x44) * param_1,plVar7,
                 *(undefined8 *)(*plVar7 + 0x2b0));
      if (*(long *)(param_6 + 0x30) != 0) {
        fVar21 = *(float *)(param_5 + 0x48);
        fVar22 = *(float *)(param_5 + 0x4c);
        lVar5 = FUN_037b4844(*(long *)(param_6 + 0x30),0);
        if (lVar5 != 0) {
          FUN_036dbc2c(fVar23 + fVar18 * fVar21,fVar19 * fVar22,0,lVar5,0);
          if (*(long *)(param_6 + 0x30) != 0) {
            lVar5 = FUN_037b4844(*(long *)(param_6 + 0x30),0);
            FUN_036c0af4(*(float *)(param_5 + 0x50) * DAT_00d38a10,
                         *(float *)(param_5 + 0x54) * DAT_00d38a10,
                         *(float *)(param_5 + 0x58) * DAT_00d38a10,0);
            if (lVar5 != 0) {
              FUN_036dcf10(lVar5,0);
              if ((*(long *)(param_6 + 0x30) != 0) &&
                 (lVar5 = FUN_037b4844(*(long *)(param_6 + 0x30),0), lVar5 != 0)) {
                FUN_036dd4ac(fVar12 * fVar13,fVar11 * fVar24,0,lVar5,0);
                if ((*(long *)(param_6 + 0x30) != 0) &&
                   (lVar5 = FUN_037b4844(*(long *)(param_6 + 0x30),0), lVar5 != 0)) {
                  FUN_036dc064(lVar5,0);
                  if ((*(long *)(param_6 + 0x30) != 0) &&
                     (lVar5 = FUN_037b4844(*(long *)(param_6 + 0x30),0), lVar5 != 0)) {
                    FUN_036db9c4(uVar4,uVar20,lVar5,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01c1d5f0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


