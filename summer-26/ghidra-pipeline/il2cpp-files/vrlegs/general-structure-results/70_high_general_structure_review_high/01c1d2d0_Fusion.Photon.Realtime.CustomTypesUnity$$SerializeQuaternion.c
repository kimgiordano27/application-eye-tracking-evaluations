/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeQuaternion
ENTRY_POINT: 01c1d2d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__SerializeQuaternion(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x24;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s13;
  float unaff_s14;
  float fVar14;
  
  puVar5 = *(undefined4 **)(**(long **)(param_1 + 0xeb8) + 0xb8);
  FUN_036dcf10(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
  lVar7 = *(long *)(unaff_x19 + 0x28);
  if (DAT_0411f16a == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f16a = '\x01';
  }
  if (lVar7 == 0) goto LAB_01c1d5f0;
                    /* catch() { ... } // from try @ 01c1d378 with catch @ 01c1d328 */
  lVar6 = *(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  FUN_036dd4ac(*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
               *(undefined4 *)(lVar6 + 0x14),lVar7,0);
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01c1d5f0;
  FUN_036dc064(*(long *)(unaff_x19 + 0x28),0);
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01c1d5f0;
                    /* try { // try from 01c1d360 to 01d1d377 has its CatchHandler @ 01c1d3ac */
  FUN_036db9c4((unaff_s8 + 1.0) - ABS(unaff_s14),unaff_s9 + 1.0,*(long *)(unaff_x19 + 0x28),0);
                    /* try { // try from 01c1d378 to 01d1d3bf has its CatchHandler @ 01c1d328 */
  if (DAT_0411f1e5 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbeb70);
    DAT_0411f1e5 = '\x01';
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
                    /* catch() { ... } // from try @ 01c1d360 with catch @ 01c1d3ac */
  fVar13 = *(float *)(*(long *)(*(long *)PTR_DAT_03cbeb70 + 0xb8) + 8);
  fVar11 = *(float *)(*(long *)(*(long *)PTR_DAT_03cbeb70 + 0xb8) + 0xc);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
                    /* catch() { ... } // from try @ 01c1d404 with catch @ 01c1d3c0 */
  uVar3 = FUN_036cee6c(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = *(long **)(unaff_x20 + 0x38);
    if (plVar4 == (long *)0x0) goto LAB_01c1d5f0;
    iVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (0 < iVar1) {
      plVar4 = *(long **)(unaff_x20 + 0x38);
                    /* try { // try from 01c1d3ec to 01d1d403 has its CatchHandler @ 01c1d438 */
      if (plVar4 == (long *)0x0) goto LAB_01c1d5f0;
      iVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
                    /* try { // try from 01c1d404 to 01d1d44b has its CatchHandler @ 01c1d3c0 */
      if (((0.0 < unaff_s9) && (0.0 < unaff_s8)) && (0 < iVar1)) {
        plVar4 = *(long **)(unaff_x20 + 0x38);
        if (plVar4 == (long *)0x0) goto LAB_01c1d5f0;
        iVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
        plVar4 = *(long **)(unaff_x20 + 0x38);
        if (plVar4 == (long *)0x0) goto LAB_01c1d5f0;
                    /* catch() { ... } // from try @ 01c1d3ec with catch @ 01c1d438 */
        iVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        fVar9 = (unaff_s9 * (float)iVar1) / (unaff_s8 * (float)iVar2);
        if (*(int *)(unaff_x20 + 0x40) == 1) {
          if (fVar9 < 1.0) {
LAB_01c1d488:
            fVar11 = fVar11 / fVar9;
            goto LAB_01c1d48c;
          }
        }
        else {
          if (*(int *)(unaff_x20 + 0x40) != 0) goto LAB_01c1d48c;
          if (1.0 <= fVar9) goto LAB_01c1d488;
        }
        fVar13 = fVar13 * fVar9;
      }
    }
  }
LAB_01c1d48c:
  lVar7 = 0x60;
  if (*(char *)(unaff_x20 + 100) != '\0') {
    lVar7 = 0x5c;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar9 = *(float *)(unaff_x20 + 0x5c);
    fVar14 = *(float *)(unaff_x20 + lVar7);
    FUN_0391d734(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),0);
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,*(float *)(unaff_x20 + 0x44) * unaff_s10,plVar4,
                 *(undefined8 *)(*plVar4 + 0x2b0));
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        fVar10 = *(float *)(unaff_x20 + 0x48);
        fVar12 = *(float *)(unaff_x20 + 0x4c);
        lVar7 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0);
        if (lVar7 != 0) {
          FUN_036dbc2c(unaff_s13 + unaff_s8 * fVar10,unaff_s9 * fVar12,0,lVar7,0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            lVar7 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0);
            FUN_036c0af4(*(float *)(unaff_x20 + 0x50) * DAT_00d38a10,
                         *(float *)(unaff_x20 + 0x54) * DAT_00d38a10,
                         *(float *)(unaff_x20 + 0x58) * DAT_00d38a10,0);
            if (lVar7 != 0) {
              FUN_036dcf10(lVar7,0);
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (lVar7 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0), lVar7 != 0)) {
                FUN_036dd4ac(fVar13 * fVar9,fVar11 * fVar14,0,lVar7,0);
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   (lVar7 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0), lVar7 != 0)) {
                  FUN_036dc064(lVar7,0);
                  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                     (lVar7 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0), lVar7 != 0)) {
                    FUN_036db9c4(lVar7,0);
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


