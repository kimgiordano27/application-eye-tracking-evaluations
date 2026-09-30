/*
FUNCTION_NAME: FUN_06afd6d4
ENTRY_POINT: 06afd6d4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06afd6d4(undefined8 param_1,long param_2,byte param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [12];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_073ab381 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9b768);
    FUN_02fe925c(PTR_DAT_06f99df0);
    FUN_02fe925c(OVRPlugin_OVRP_1_42_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_43_0_TypeInfo);
    DAT_073ab381 = 1;
  }
  local_e8 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x2b8) == 0)) goto LAB_06afddfc;
  fVar17 = (float)FUN_069eab74(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_06afddfc;
  fVar18 = (float)FUN_069eabb0(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_06afddfc;
  fVar19 = (float)FUN_069eac64(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_06afddfc;
  fVar20 = (float)FUN_069eaca0(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_06afddfc;
  fVar21 = (float)FUN_069e9eb8(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_06afddfc;
  fVar22 = (float)FUN_069e9eb8(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_06afddfc;
  fVar23 = (float)FUN_069e9f38(*(long *)(param_2 + 0x2b8),0);
  puVar4 = PTR_DAT_06f99df0;
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_06afddfc;
  fVar24 = (float)FUN_069e9f78(*(long *)(param_2 + 0x2b8),0);
  fVar29 = *(float *)(param_2 + 100);
  fVar26 = *(float *)(param_2 + 0x68);
  fVar32 = *(float *)(param_2 + 0x6c);
  fVar33 = *(float *)(param_2 + 0x70);
  fVar30 = *(float *)(param_2 + 0x74);
  fVar27 = *(float *)(param_2 + 0x78);
  fVar31 = *(float *)(param_2 + 0x7c);
  fVar28 = *(float *)(param_2 + 0x80);
  fVar35 = fVar19 - (fVar21 + fVar23);
  fVar36 = fVar20 - (fVar22 + fVar24);
  FUN_06b0d124(param_2,0);
  fVar23 = DAT_01369900;
  fVar24 = fVar32 - fVar19;
  fVar25 = fVar33 - fVar20;
  fVar31 = fVar31 - fVar35;
  fVar28 = fVar28 - fVar36;
  fVar34 = fVar24 * fVar24 + fVar25 * fVar25;
  fVar24 = fVar17 - fVar29;
  fVar25 = fVar18 - fVar26;
  fVar30 = fVar21 - fVar30;
  fVar27 = fVar22 - fVar27;
  fVar24 = fVar24 * fVar24 + fVar25 * fVar25;
  bVar5 = false;
  if ((fVar31 * fVar31 + fVar28 * fVar28 < DAT_01369900) &&
     (bVar5 = false, !NAN(fVar34) && !NAN(DAT_01369900))) {
    bVar5 = fVar34 < DAT_01369900;
  }
  uVar12 = 0xc00;
  if (bVar5) {
    uVar12 = 0;
  }
  bVar5 = false;
  if ((fVar30 * fVar30 + fVar27 * fVar27 < DAT_01369900) &&
     (bVar5 = false, !NAN(fVar24) && !NAN(DAT_01369900))) {
    bVar5 = fVar24 < DAT_01369900;
  }
  uVar2 = uVar12 | 0x200;
  uVar1 = uVar2;
  if (bVar5) {
    uVar1 = uVar12;
  }
  uVar12 = uVar1;
  if ((uVar1 & 0x600) == 0x400) {
    uVar7 = FUN_06b0a440(param_2,0);
    FUN_06ae2eb4(&local_c0,uVar7,0);
    if ((float)local_c0 == 0.0) {
      uVar7 = FUN_06b0a440(param_2,0);
      auVar37 = FUN_06ae2f1c(uVar7,0);
      if (DAT_0738e666 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e666 = '\x01';
      }
      uVar7 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8) + 0x10);
      fVar25 = auVar37._0_4_ - *(float *)(*(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8) + 0xc);
      fVar27 = auVar37._4_4_ - (float)uVar7;
      fVar28 = auVar37._8_4_ - (float)((ulong)uVar7 >> 0x20);
      if (fVar28 * fVar28 + fVar25 * fVar25 + fVar27 * fVar27 < fVar23) goto LAB_06afdb5c;
    }
    plVar8 = (long *)FUN_06b0a430(param_2,0);
    if (plVar8 == (long *)0x0) goto LAB_06afddfc;
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x23) * 0x10 + 0x138);
          goto LAB_06afda10;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)puVar4,0x23);
LAB_06afda10:
    fVar25 = (float)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (DAT_0738eca2 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6e7c0);
      DAT_0738eca2 = '\x01';
    }
    puVar3 = PTR_DAT_06f6e7c0;
    fVar27 = DAT_0136a264;
    fVar28 = ABS(fVar25);
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    fVar31 = ABS(0.0 - fVar25);
    fVar30 = **(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) * 8.0;
    fVar25 = fVar28 * DAT_0136a264;
    if (fVar28 * DAT_0136a264 <= fVar30) {
      fVar25 = fVar30;
    }
    uVar12 = uVar2;
    if (fVar31 < fVar25) {
      plVar8 = (long *)FUN_06b0a430(param_2,0);
      if (plVar8 == (long *)0x0) goto LAB_06afddfc;
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x23) * 0x10 + 0x138);
            goto LAB_06afdaf4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)puVar4,0x23);
LAB_06afdaf4:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (DAT_0738eca2 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6e7c0);
        DAT_0738eca2 = '\x01';
      }
      fVar25 = ABS(fVar31);
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      fVar30 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
      fVar28 = fVar25 * fVar27;
      if (fVar25 * fVar27 <= fVar30) {
        fVar28 = fVar30;
      }
      uVar12 = uVar1;
      if (fVar28 <= ABS(0.0 - fVar31)) {
        uVar12 = uVar2;
      }
    }
  }
LAB_06afdb5c:
  plVar8 = (long *)FUN_06b0a430(param_2,0);
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0xf) * 0x10 + 0x138);
          goto LAB_06afdbc0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)puVar4,0xf);
LAB_06afdbc0:
    iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    param_3 = iVar6 != 1 & param_3;
    FUN_06b0d130(param_2,param_3,0);
    if (uVar12 != 0) {
      FUN_06b0d1e0(param_2,uVar12,0);
    }
    *(float *)(param_2 + 100) = fVar17;
    *(float *)(param_2 + 0x68) = fVar18;
    *(float *)(param_2 + 0x6c) = fVar19;
    *(float *)(param_2 + 0x70) = fVar20;
    *(float *)(param_2 + 0x74) = fVar21;
    *(float *)(param_2 + 0x78) = fVar22;
    *(float *)(param_2 + 0x7c) = fVar35;
    *(float *)(param_2 + 0x80) = fVar36;
    if (*(long *)(param_2 + 0x2b8) != 0) {
      uVar13 = FUN_069ea3a4(*(long *)(param_2 + 0x2b8),0);
      if ((uVar13 & 1) != 0) {
        local_e8 = *(undefined8 *)(param_2 + 0x378);
        iVar6 = FUN_06b18610(&local_e8,0);
        if (0 < iVar6) {
          iVar16 = 0;
          do {
            local_e8 = *(undefined8 *)(param_2 + 0x378);
            lVar11 = FUN_06b18550(&local_e8,iVar16,0);
            if ((lVar11 == 0) || (*(long *)(lVar11 + 0x2b8) == 0)) goto LAB_06afddfc;
            uVar10 = FUN_069ea3a4(*(long *)(lVar11 + 0x2b8),0);
            if ((uVar10 & 1) != 0) {
              FUN_06afd6d4(param_1,lVar11,param_3,param_4);
            }
            iVar16 = iVar16 + 1;
          } while (iVar6 != iVar16);
        }
      }
      puVar4 = PTR_DAT_06f9b768;
      if ((fVar23 <= fVar24) || (fVar23 <= fVar34)) {
        lVar11 = *(long *)PTR_DAT_06f9b768;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar11 = *(long *)puVar4;
        }
        uVar10 = FUN_06b130ec(param_2,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x10),0);
        if ((uVar10 & 1) != 0) {
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          FUN_04241054(fVar29,fVar26,fVar32,fVar33,&local_100,param_2,
                       *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo);
          if (param_4 == 0) goto LAB_06afddfc;
          uStack_d8 = uStack_f8;
          local_e0 = local_100;
          local_d0 = local_f0;
          lVar11 = *(long *)(param_4 + 0x10);
          lVar15 = *(long *)OVRPlugin_OVRP_1_43_0_TypeInfo;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_06afddfc;
          uVar12 = *(uint *)(param_4 + 0x18);
          if (uVar12 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(param_4 + 0x18) = uVar12 + 1;
            lVar11 = lVar11 + (long)(int)uVar12 * 0x18;
            *(undefined8 *)(lVar11 + 0x30) = local_f0;
            *(undefined8 *)(lVar11 + 0x28) = uStack_f8;
            *(undefined8 *)(lVar11 + 0x20) = local_100;
            thunk_FUN_03048534((undefined8 *)(lVar11 + 0x30),0);
          }
          else {
            uStack_b8 = uStack_f8;
            local_c0 = local_100;
            local_b0 = local_f0;
            FUN_0428f944(param_4,&local_c0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      if ((uVar13 & 1) != 0) {
        if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_06afddfc;
        FUN_069ead6c(*(long *)(param_2 + 0x2b8),0);
      }
      return;
    }
  }
LAB_06afddfc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


