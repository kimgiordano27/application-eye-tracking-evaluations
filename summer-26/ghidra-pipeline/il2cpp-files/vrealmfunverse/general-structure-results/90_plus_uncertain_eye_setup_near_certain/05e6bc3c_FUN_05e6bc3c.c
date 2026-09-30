/*
FUNCTION_NAME: FUN_05e6bc3c
ENTRY_POINT: 05e6bc3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05e6bc3c(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 ,float *param_7)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *plVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float local_554;
  float local_550;
  undefined1 auStack_518 [312];
  undefined1 auStack_3e0 [312];
  undefined1 auStack_2a8 [312];
  long local_170;
  double *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  double *pdStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  double *pdStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  ulong local_c8;
  double *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  
  lVar17 = tpidr_el0;
  local_a8 = *(long *)(lVar17 + 0x28);
  if (DAT_066dc68b == '\0') {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_77__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_78__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_79__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_8__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_80__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_81__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_82__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_83__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_84__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_85__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_86__);
    FUN_02b3c81c(PTR_DAT_06312c90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_87__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_88__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_89__);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066dc68b = '\x01';
  }
  local_c8 = 0;
  plVar20 = (long *)(param_6 + 0x18);
  lVar16 = *plVar20;
  local_d0 = 0.0;
  fStack_cc = 0.0;
  local_b0 = 0;
  local_c0 = (double *)0x0;
  uStack_b8 = 0;
  pdStack_128 = (double *)0x0;
  local_130 = 0.0;
  local_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  pdStack_f8 = (double *)0x0;
  local_100 = 0.0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (lVar16 == 0) {
    lVar16 = FUN_02b3c908(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_79__,2);
    *plVar20 = lVar16;
    thunk_FUN_02bb0e9c(plVar20,lVar16);
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_86__;
    plVar23 = (long *)*plVar20;
    lVar16 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_86__);
    puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_82__;
    FUN_038dfc18(lVar16,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_82__);
    if (plVar23 == (long *)0x0) goto LAB_05e6d278;
    if ((lVar16 != 0) &&
       (lVar19 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar23 + 0x40)), lVar19 == 0)) {
LAB_05e6d2a0:
      if (*(long *)(lVar17 + 0x28) == local_a8) {
        uVar22 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar22,0);
      }
      goto LAB_05e6d348;
    }
    if ((int)plVar23[3] != 0) {
      plVar23[4] = lVar16;
      thunk_FUN_02bb0e9c(plVar23 + 4,lVar16);
      plVar23 = (long *)*plVar20;
      lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
      FUN_038dfc18(lVar16,*(undefined8 *)puVar9);
      if (plVar23 == (long *)0x0) goto LAB_05e6d278;
      if ((lVar16 != 0) &&
         (lVar19 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar23 + 0x40)), lVar19 == 0))
      goto LAB_05e6d2a0;
      if ((*(uint *)(plVar23 + 3) & 0xfffffffe) != 0) {
        plVar23[5] = lVar16;
        thunk_FUN_02bb0e9c(plVar23 + 5,lVar16);
        goto LAB_05e6beb4;
      }
    }
LAB_05e6d280:
    lVar17 = *(long *)(lVar17 + 0x28);
  }
  else {
    iVar12 = *(int *)(lVar16 + 0x18);
    if (iVar12 == 0) goto LAB_05e6d280;
    lVar19 = *(long *)(lVar16 + 0x20);
    if (lVar19 == 0) {
LAB_05e6d278:
      lVar17 = *(long *)(lVar17 + 0x28);
LAB_05e6d1ec:
      if (lVar17 == local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e6d348;
    }
    *(undefined4 *)(lVar19 + 0x18) = 0;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (iVar12 == 1) goto LAB_05e6d280;
    lVar16 = *(long *)(lVar16 + 0x28);
    if (lVar16 == 0) goto LAB_05e6d278;
    *(undefined4 *)(lVar16 + 0x18) = 0;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
LAB_05e6beb4:
    local_554 = *param_7;
    local_550 = param_7[1];
    fVar35 = param_7[2];
    fVar30 = param_7[3];
    iVar12 = FUN_05d9d030(param_7 + 0x20,0);
    fVar36 = fVar35;
    fVar25 = fVar30;
    if (iVar12 == 0) {
      local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
      uVar14 = FUN_05e0ab80(&local_c8,0);
      if ((uVar14 & 1) != 0) {
        local_c8 = FUN_05d9d0a0(param_7 + 0x20,0);
        uVar14 = FUN_05e0ab80(&local_c8,0);
        if ((uVar14 & 1) != 0) goto LAB_05e6c0dc;
      }
      local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
      uVar14 = FUN_05e0ab80(&local_c8,0);
      if ((uVar14 & 1) == 0) {
        local_c8 = FUN_05d9d0a0(param_7 + 0x20,0);
        uVar14 = FUN_05e0ab70(&local_c8,0);
        if ((uVar14 & 1) != 0) {
          uVar14 = FUN_05d9d08c(param_7 + 0x20,0);
          local_c8 = uVar14;
          local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
          if (uVar14 >> 0x20 == 1) {
            fVar36 = (param_3 * (float)local_c8) / 100.0;
          }
          else {
            if (local_c8 >> 0x20 != 0) goto LAB_05e6c0dc;
            local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
            fVar36 = (float)local_c8;
          }
          fVar25 = (fVar30 * fVar36) / fVar35;
          goto LAB_05e6c0dc;
        }
      }
      local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
      uVar14 = FUN_05e0ab80(&local_c8,0);
      if ((uVar14 & 1) == 0) {
        local_c8 = FUN_05d9d0a0(param_7 + 0x20,0);
        uVar14 = FUN_05e0ab80(&local_c8,0);
        if ((uVar14 & 1) == 0) {
          local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
          uVar14 = FUN_05e0ab70(&local_c8,0);
          if ((uVar14 & 1) == 0) {
            uVar14 = FUN_05d9d08c(param_7 + 0x20,0);
            local_c8 = uVar14;
            local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
            if (uVar14 >> 0x20 == 1) {
              fVar36 = (param_3 * (float)local_c8) / 100.0;
            }
            else if (local_c8 >> 0x20 == 0) {
              local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
              fVar36 = (float)local_c8;
            }
          }
          local_c8 = FUN_05d9d0a0(param_7 + 0x20,0);
          uVar14 = FUN_05e0ab70(&local_c8,0);
          if ((uVar14 & 1) == 0) {
            uVar14 = FUN_05d9d0a0(param_7 + 0x20,0);
            local_c8 = uVar14;
            local_c8 = FUN_05d9d0a0(param_7 + 0x20,0);
            if (uVar14 >> 0x20 == 1) {
              fVar25 = (param_4 * (float)local_c8) / 100.0;
            }
            else if (local_c8 >> 0x20 == 0) {
              local_c8 = FUN_05d9d0a0(param_7 + 0x20,0);
              fVar25 = (float)local_c8;
            }
            local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
            uVar14 = FUN_05e0ab70(&local_c8,0);
            if ((uVar14 & 1) != 0) goto LAB_05e6bff8;
          }
        }
      }
    }
    else {
      iVar12 = FUN_05d9d030(param_7 + 0x20,0);
      if (iVar12 == 2) {
        fVar25 = param_4;
        if (param_4 / fVar30 <= param_3 / fVar35) {
LAB_05e6bff8:
          fVar36 = (fVar25 * fVar35) / fVar30;
        }
        else {
LAB_05e6bef4:
          fVar36 = param_3;
          fVar25 = (param_3 * fVar30) / fVar35;
        }
      }
      else {
        iVar12 = FUN_05d9d030(param_7 + 0x20,0);
        if (iVar12 == 1) {
          fVar25 = param_4;
          if (param_3 / fVar35 <= param_4 / fVar30) goto LAB_05e6bff8;
          goto LAB_05e6bef4;
        }
      }
    }
LAB_05e6c0dc:
    fVar30 = DAT_010321cc;
    if ((((fVar36 <= DAT_010321cc) || (fVar25 <= DAT_010321cc)) || (param_3 <= DAT_010321cc)) ||
       (param_4 <= DAT_010321cc)) {
LAB_05e6d0c4:
      if (*(long *)(lVar17 + 0x28) == local_a8) {
        return;
      }
      goto LAB_05e6d348;
    }
    local_c8 = FUN_05d9d08c(param_7 + 0x20,0);
    uVar14 = FUN_05e0ab70(&local_c8,0);
    if (((uVar14 & 1) == 0) || (param_7[0x1f] != 2.8026e-45)) {
      local_c8 = FUN_05d9d0a0(param_7 + 0x20,0);
      uVar14 = FUN_05e0ab70(&local_c8,0);
      if (((uVar14 & 1) != 0) && (param_7[0x1e] == 2.8026e-45)) {
        fVar35 = 1.0 / fVar36;
        fVar36 = param_3 * fVar35 + 0.5;
        iVar12 = -0x80000000;
        if (fVar36 != INFINITY) {
          iVar12 = (int)fVar36;
        }
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar12 = FUN_04d7c48c(iVar12,1,0);
        fVar36 = param_3 / (float)iVar12;
        fVar25 = fVar35 * fVar25 * fVar36;
        goto LAB_05e6c240;
      }
    }
    else {
      fVar35 = 1.0 / fVar25;
      fVar25 = param_4 * fVar35 + 0.5;
      iVar12 = -0x80000000;
      if (fVar25 != INFINITY) {
        iVar12 = (int)fVar25;
      }
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar12 = FUN_04d7c48c(iVar12,1,0);
      fVar25 = param_4 / (float)iVar12;
      fVar36 = fVar35 * fVar36 * fVar25;
LAB_05e6c240:
      local_550 = 0.0;
      local_554 = 0.0;
    }
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_85__;
    puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_84__;
    uVar7 = _UNK_01032d88;
    uVar22 = _DAT_01032d80;
    fVar35 = DAT_010328d0;
    uVar14 = 0;
    bVar11 = true;
    do {
      bVar6 = bVar11;
      fVar29 = 0.0;
      lVar16 = 0x78;
      if (!bVar6) {
        lVar16 = 0x7c;
      }
      uVar2 = *(uint *)((long)param_7 + lVar16);
      lVar16 = 0x60;
      if (!bVar6) {
        lVar16 = 0x6c;
      }
      lVar19 = 0x68;
      if (!bVar6) {
        lVar19 = 0x74;
      }
      iVar12 = *(int *)((long)param_7 + lVar16);
      lVar16 = 100;
      if (!bVar6) {
        lVar16 = 0x70;
      }
      iVar3 = *(int *)((long)param_7 + lVar19);
      fVar33 = *(float *)((long)param_7 + lVar16);
      if ((int)uVar2 < 2) {
        if (uVar2 == 0) {
          lVar16 = *plVar20;
          fVar29 = fVar36;
          if (!bVar6) {
            fVar29 = fVar25;
          }
          if (lVar16 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_05e6d1fc;
          lVar16 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
          if (lVar16 == 0) goto LAB_05e6d1e4;
          lVar19 = *(long *)(lVar16 + 0x10);
          lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05e6d1e4;
          uVar5 = *(uint *)(lVar16 + 0x18);
          if (uVar5 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)uVar5 * 0x20;
            *(uint *)(lVar16 + 0x18) = uVar5 + 1;
            *(float *)(lVar19 + 0x20) = local_554;
            *(float *)(lVar19 + 0x24) = local_550;
            *(float *)(lVar19 + 0x28) = fVar36;
            *(float *)(lVar19 + 0x2c) = fVar25;
            *(undefined8 *)(lVar19 + 0x38) = uVar7;
            *(undefined8 *)(lVar19 + 0x30) = uVar22;
          }
          else {
            local_160 = (double)CONCAT44(local_550,local_554);
            uStack_158 = (double *)CONCAT44(fVar25,fVar36);
            uStack_148 = uVar7;
            uStack_150 = uVar22;
            FUN_038e04ec(lVar16,&local_160,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        else if (uVar2 == 1) {
          fVar34 = fVar36;
          fVar26 = param_3;
          if (!bVar6) {
            fVar34 = fVar25;
            fVar26 = param_4;
          }
          uVar5 = 0x80000000;
          if (fVar26 / fVar34 != INFINITY) {
            uVar5 = (int)(fVar26 / fVar34);
          }
          if (-1 < (int)uVar5) {
            lVar16 = *plVar20;
            if (lVar16 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_05e6d1fc;
            lVar16 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
            if (lVar16 == 0) goto LAB_05e6d1e4;
            lVar19 = *(long *)(lVar16 + 0x10);
            lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05e6d1e4;
            uVar13 = *(uint *)(lVar16 + 0x18);
            if (uVar13 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar13 * 0x20;
              *(uint *)(lVar16 + 0x18) = uVar13 + 1;
              *(float *)(lVar19 + 0x20) = local_554;
              *(float *)(lVar19 + 0x24) = local_550;
              *(float *)(lVar19 + 0x28) = fVar36;
              *(float *)(lVar19 + 0x2c) = fVar25;
              *(undefined8 *)(lVar19 + 0x38) = uVar7;
              *(undefined8 *)(lVar19 + 0x30) = uVar22;
            }
            else {
              local_160 = (double)CONCAT44(local_550,local_554);
              uStack_158 = (double *)CONCAT44(fVar25,fVar36);
              uStack_148 = uVar7;
              uStack_150 = uVar22;
              FUN_038e04ec(lVar16,&local_160,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            fVar29 = fVar34;
            if (1 < uVar5) {
              lVar16 = *plVar20;
              fVar32 = local_550;
              fVar31 = param_3 - fVar36;
              if (!bVar6) {
                fVar32 = param_4 - fVar25;
                fVar31 = local_554;
              }
              if (lVar16 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_05e6d1fc;
              lVar16 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
              if (lVar16 == 0) goto LAB_05e6d1e4;
              lVar19 = *(long *)(lVar16 + 0x10);
              lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_05e6d1e4;
              uVar13 = *(uint *)(lVar16 + 0x18);
              if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                lVar19 = lVar19 + (long)(int)uVar13 * 0x20;
                *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                *(float *)(lVar19 + 0x20) = fVar31;
                *(float *)(lVar19 + 0x24) = fVar32;
                *(float *)(lVar19 + 0x28) = fVar36;
                *(float *)(lVar19 + 0x2c) = fVar25;
                *(undefined8 *)(lVar19 + 0x38) = uVar7;
                *(undefined8 *)(lVar19 + 0x30) = uVar22;
              }
              else {
                local_160 = (double)CONCAT44(fVar32,fVar31);
                uStack_158 = (double *)CONCAT44(fVar25,fVar36);
                uStack_148 = uVar7;
                uStack_150 = uVar22;
                FUN_038e04ec(lVar16,&local_160,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              fVar29 = fVar26;
              if (uVar5 != 2) {
                iVar24 = 0;
                pfVar1 = &fStack_cc;
                if (!bVar6) {
                  pfVar1 = &local_d0;
                }
                fVar28 = fVar36;
                if (!bVar6) {
                  fVar28 = fVar25;
                }
                do {
                  iVar24 = iVar24 + 1;
                  lVar16 = *plVar20;
                  local_d0 = fVar32;
                  fStack_cc = fVar31;
                  *pfVar1 = (fVar28 + (fVar26 - fVar34 * (float)(int)uVar5) /
                                      (float)(int)(uVar5 - 1)) * (float)iVar24;
                  fVar31 = fStack_cc;
                  fVar32 = local_d0;
                  if (lVar16 == 0) goto LAB_05e6d1e4;
                  if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_05e6d1fc;
                  lVar16 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
                  if (lVar16 == 0) goto LAB_05e6d1e4;
                  lVar19 = *(long *)(lVar16 + 0x10);
                  lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_05e6d1e4;
                  uVar13 = *(uint *)(lVar16 + 0x18);
                  if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                    lVar19 = lVar19 + (long)(int)uVar13 * 0x20;
                    *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                    *(float *)(lVar19 + 0x20) = fStack_cc;
                    *(float *)(lVar19 + 0x24) = local_d0;
                    *(float *)(lVar19 + 0x28) = fVar36;
                    *(float *)(lVar19 + 0x2c) = fVar25;
                    *(undefined8 *)(lVar19 + 0x38) = uVar7;
                    *(undefined8 *)(lVar19 + 0x30) = uVar22;
                  }
                  else {
                    local_160 = (double)CONCAT44(local_d0,fStack_cc);
                    uStack_158 = (double *)CONCAT44(fVar25,fVar36);
                    uStack_148 = uVar7;
                    uStack_150 = uVar22;
                    FUN_038e04ec(lVar16,&local_160,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                } while (iVar24 < (int)(uVar5 - 2));
              }
            }
          }
        }
      }
      else if (uVar2 == 2) {
        fVar34 = param_3;
        fVar26 = fVar36;
        if (!bVar6) {
          fVar34 = param_4;
          fVar26 = fVar25;
        }
        fVar26 = (fVar34 + fVar26 * 0.5) / fVar26;
        iVar24 = -0x80000000;
        if (fVar26 != INFINITY) {
          iVar24 = (int)fVar26;
        }
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar13 = FUN_04d7c48c(iVar24,1,0);
        uVar5 = uVar13 | 1;
        if ((uVar13 & 1) != 0) {
          uVar5 = uVar13 + 2;
        }
        if (iVar12 != 0) {
          uVar5 = uVar13 + 1;
        }
        fVar34 = fVar34 / (float)(int)uVar13;
        fVar26 = fVar34;
        if (!bVar6) {
          fVar25 = fVar34;
          fVar26 = fVar36;
        }
        fVar36 = fVar26;
        if (0 < (int)uVar5) {
          fVar29 = 0.0;
          uVar13 = 0;
          fVar26 = local_554;
          fVar32 = local_550;
          do {
            lVar16 = *plVar20;
            fVar31 = fVar34 * (float)(int)uVar13;
            if (!bVar6) {
              fVar32 = fVar34 * (float)(int)uVar13;
              fVar31 = fVar26;
            }
            fVar26 = fVar31;
            if (lVar16 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_05e6d1fc;
            lVar16 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
            if (lVar16 == 0) goto LAB_05e6d1e4;
            lVar19 = *(long *)(lVar16 + 0x10);
            lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05e6d1e4;
            uVar4 = *(uint *)(lVar16 + 0x18);
            if (uVar4 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar4 * 0x20;
              *(uint *)(lVar16 + 0x18) = uVar4 + 1;
              *(float *)(lVar19 + 0x20) = fVar26;
              *(float *)(lVar19 + 0x24) = fVar32;
              *(float *)(lVar19 + 0x28) = fVar36;
              *(float *)(lVar19 + 0x2c) = fVar25;
              *(undefined8 *)(lVar19 + 0x38) = uVar7;
              *(undefined8 *)(lVar19 + 0x30) = uVar22;
            }
            else {
              local_160 = (double)CONCAT44(fVar32,fVar26);
              uStack_158 = (double *)CONCAT44(fVar25,fVar36);
              uStack_148 = uVar7;
              uStack_150 = uVar22;
              FUN_038e04ec(lVar16,&local_160,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            fVar29 = fVar34 + fVar29;
            uVar13 = uVar13 + 1;
          } while (uVar5 != uVar13);
        }
      }
      else if (uVar2 == 3) {
        fVar34 = fVar36;
        fVar26 = param_3;
        if (!bVar6) {
          fVar34 = fVar25;
          fVar26 = param_4;
        }
        fVar26 = (1.0 / param_5 + fVar26) / fVar34;
        uVar5 = 0x80000000;
        if (fVar26 != INFINITY) {
          uVar5 = (int)fVar26;
        }
        uVar13 = uVar5 | 1;
        if ((uVar5 & 1) != 0) {
          uVar13 = uVar5 + 2;
        }
        uVar5 = uVar5 + 2;
        if (iVar12 == 0) {
          uVar5 = uVar13;
        }
        if (0 < (int)uVar5) {
          uVar13 = 0;
          fVar32 = local_554;
          fVar26 = local_550;
          do {
            lVar16 = *plVar20;
            fVar31 = fVar36 * (float)(int)uVar13;
            if (!bVar6) {
              fVar31 = fVar32;
              fVar26 = fVar25 * (float)(int)uVar13;
            }
            fVar32 = fVar31;
            if (lVar16 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_05e6d1fc;
            lVar16 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
            if (lVar16 == 0) goto LAB_05e6d1e4;
            lVar19 = *(long *)(lVar16 + 0x10);
            lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05e6d1e4;
            uVar4 = *(uint *)(lVar16 + 0x18);
            if (uVar4 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar4 * 0x20;
              *(uint *)(lVar16 + 0x18) = uVar4 + 1;
              *(float *)(lVar19 + 0x20) = fVar32;
              *(float *)(lVar19 + 0x24) = fVar26;
              *(float *)(lVar19 + 0x28) = fVar36;
              *(float *)(lVar19 + 0x2c) = fVar25;
              *(undefined8 *)(lVar19 + 0x38) = uVar7;
              *(undefined8 *)(lVar19 + 0x30) = uVar22;
            }
            else {
              local_160 = (double)CONCAT44(fVar26,fVar32);
              uStack_158 = (double *)CONCAT44(fVar25,fVar36);
              uStack_148 = uVar7;
              uStack_150 = uVar22;
              FUN_038e04ec(lVar16,&local_160,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            fVar29 = fVar29 + fVar34;
            uVar13 = uVar13 + 1;
          } while (uVar5 != uVar13);
        }
      }
      if (iVar12 == 0) {
        fVar33 = param_3;
        if (!bVar6) {
          fVar33 = param_4;
        }
        fVar34 = (fVar33 - fVar29) * 0.5;
LAB_05e6c8bc:
        uVar21 = *(undefined8 *)(param_7 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar15 = FUN_05c8e378(uVar21,0,0);
        if ((uVar15 & 1) != 0) {
          uVar21 = *(undefined8 *)(param_7 + 0x2a);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar15 = FUN_05c8e378(uVar21,0,0);
          if ((uVar15 & 1) != 0) {
            fVar29 = fVar36;
            if (!bVar6) {
              fVar29 = fVar25;
            }
            fVar29 = fVar29 * param_5;
            dVar27 = modf((double)fVar29,(double *)&local_160);
            if (0.0 <= fVar29) {
              if (dVar27 == 0.5) {
                fVar33 = 1.0;
                goto LAB_05e6caf0;
              }
              fVar26 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar27 == -0.5) {
              fVar33 = -1.0;
LAB_05e6caf0:
              fVar26 = (float)local_160;
              if (((long)local_160 & 1U) != 0) {
                fVar26 = (float)local_160 + fVar33;
              }
            }
            else {
              fVar26 = (float)(int)(fVar29 + -0.5);
            }
            if (ABS(fVar26 - fVar29) < fVar35) {
              fVar34 = (float)FUN_05d9b054(fVar34,param_5,DAT_01031fc8,0);
            }
          }
        }
LAB_05e6c96c:
        if ((uVar2 & 0xfffffffe) == 2) {
          fVar29 = fVar36;
          if (!bVar6) {
            fVar29 = fVar25;
          }
          if (fVar30 < fVar29) {
            if (fVar34 < -fVar29) {
              fVar33 = -2.1474836e+09;
              if (-fVar34 / fVar29 != INFINITY) {
                fVar33 = (float)(int)(-fVar34 / fVar29);
              }
              fVar34 = fVar34 + fVar29 * fVar33;
            }
            if (0.0 < fVar34) {
              fVar33 = -2.1474836e+09;
              if (fVar34 / fVar29 != INFINITY) {
                fVar33 = (float)((int)(fVar34 / fVar29) + 1);
              }
              fVar34 = fVar34 - fVar29 * fVar33;
            }
          }
        }
      }
      else {
        fVar34 = 0.0;
        if (uVar2 != 1) {
          if (iVar3 == 0) {
LAB_05e6c88c:
            bVar11 = false;
          }
          else {
            if (iVar3 != 1) {
              fVar33 = 0.0;
              goto LAB_05e6c88c;
            }
            fVar26 = fVar36;
            fVar34 = param_3;
            if (!bVar6) {
              fVar26 = fVar25;
              fVar34 = param_4;
            }
            bVar11 = true;
            fVar33 = (fVar33 * (fVar34 - fVar26)) / 100.0;
          }
          if ((iVar12 == 4) || (fVar34 = fVar33, iVar12 == 2)) {
            fVar34 = param_3;
            if (!bVar6) {
              fVar34 = param_4;
            }
            fVar34 = (fVar34 - fVar29) - fVar33;
          }
          if (bVar11) goto LAB_05e6c8bc;
          goto LAB_05e6c96c;
        }
      }
      lVar16 = *plVar20;
      if (lVar16 == 0) goto LAB_05e6d1e4;
      iVar12 = 0;
      while( true ) {
        puVar10 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_05e6d1fc;
        lVar19 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05e6d1e4;
        if (*(int *)(lVar19 + 0x18) <= iVar12) break;
        FUN_038e01b0(&local_160,lVar19,iVar12,*(undefined8 *)puVar9);
        lVar16 = *plVar20;
        fVar29 = (float)local_160;
        if (!bVar6) {
          fVar29 = local_160._4_4_;
        }
        uStack_b8 = uStack_150;
        local_c0 = uStack_158;
        local_b0 = uStack_148;
        fVar33 = local_160._4_4_;
        fVar26 = fVar34 + fVar29;
        if (!bVar6) {
          fVar33 = fVar34 + fVar29;
          fVar26 = (float)local_160;
        }
        if (lVar16 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_05e6d1fc;
        lVar16 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_05e6d1e4;
        local_160 = (double)CONCAT44(fVar33,fVar26);
        FUN_038e0210(lVar16,iVar12,&local_160,*(undefined8 *)puVar8);
        lVar16 = *plVar20;
        iVar12 = iVar12 + 1;
        if (lVar16 == 0) goto LAB_05e6d1e4;
      }
      uVar14 = 1;
      bVar11 = false;
    } while (bVar6);
    if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
      if ((*(long *)(lVar16 + 0x28) != 0) && (*(long *)(lVar16 + 0x20) != 0)) {
        if (1 < *(int *)(*(long *)(lVar16 + 0x20) + 0x18) *
                *(int *)(*(long *)(lVar16 + 0x28) + 0x18)) {
          uVar22 = *(undefined8 *)(param_7 + 0x2a);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar14 = FUN_05c8e378(uVar22,0,0);
          if ((uVar14 & 1) != 0) {
            plVar23 = (long *)(param_6 + 0x20);
            lVar16 = *plVar23;
            if (lVar16 == 0) {
              lVar16 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
              FUN_03abe564(lVar16,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
              *plVar23 = lVar16;
              thunk_FUN_02bb0e9c(plVar23,lVar16);
              lVar16 = *plVar23;
            }
            *(long *)(param_7 + 0x14) = lVar16;
            thunk_FUN_02bb0e9c();
            if (*plVar23 == 0) goto LAB_05e6d1e4;
            fVar36 = (float)FUN_03abe980(*plVar23,*(undefined8 *)puVar10);
            param_7[0x16] = fVar36;
          }
        }
        puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
        lVar16 = *plVar20;
        if (lVar16 != 0) {
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
          if (*(long *)(lVar16 + 0x28) != 0) {
            FUN_038e10a8(&local_160,*(long *)(lVar16 + 0x28),
                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
            puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
            local_168 = &local_100;
            iVar12 = 0;
            pdStack_f8 = uStack_158;
            local_100 = local_160;
            uStack_e8 = uStack_148;
            local_f0 = uStack_150;
            uStack_d8 = uStack_138;
            local_e0 = local_140;
            local_170 = 0;
            while (uVar14 = FUN_0476420c(&local_100,*(undefined8 *)puVar8), lVar16 = local_170,
                  (uVar14 & 1) != 0) {
              fVar36 = local_f0._4_4_;
              fVar25 = uStack_e8._4_4_;
              if (local_f0._4_4_ < param_2) {
                fVar36 = param_2;
                fVar25 = uStack_e8._4_4_ - (param_2 - local_f0._4_4_);
              }
              if (param_4 + param_2 < fVar25 + fVar36) {
                fVar25 = fVar25 - ((fVar25 + fVar36) - (param_4 + param_2));
              }
              uVar22 = *(undefined8 *)(param_7 + 0x2a);
              if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c8e378(uVar22,0,0);
              lVar16 = *plVar20;
              if (lVar16 == 0) {
                if (*(long *)(lVar17 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e6d348;
              }
              if (*(int *)(lVar16 + 0x18) == 0) {
                if (*(long *)(lVar17 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                goto LAB_05e6d348;
              }
              if (*(long *)(lVar16 + 0x20) == 0) {
                if (*(long *)(lVar17 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e6d348;
              }
              FUN_038e10a8(&local_160,*(long *)(lVar16 + 0x20),*(undefined8 *)puVar9);
              local_130 = local_160;
              local_160 = 0.0;
              pdStack_128 = uStack_158;
              local_118 = uStack_148;
              local_120 = uStack_150;
              uStack_108 = uStack_138;
              local_110 = local_140;
              uStack_158 = &local_130;
              while (uVar14 = FUN_0476420c(&local_130,*(undefined8 *)puVar8), (uVar14 & 1) != 0) {
                fVar30 = (float)local_120;
                fVar35 = (float)local_118;
                if ((float)local_120 < param_1) {
                  fVar30 = param_1;
                  fVar35 = (float)local_118 - (param_1 - (float)local_120);
                }
                if (param_3 + param_1 < fVar35 + fVar30) {
                  fVar35 = fVar35 - ((fVar35 + fVar30) - (param_3 + param_1));
                }
                memcpy(auStack_2a8,param_7,0x138);
                FUN_05e6359c(fVar30,fVar36,fVar35,fVar25,param_1,param_2,param_3,param_4,param_6,
                             auStack_2a8,param_7 + 0x14);
                iVar12 = iVar12 + 1;
                if ((0x3c < iVar12) && (*(long *)(param_7 + 0x14) != 0)) {
                  if (*(long *)(param_6 + 0x20) == 0) {
                    if (*(long *)(lVar17 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e6d348;
                  }
                  fVar30 = (float)FUN_03abe980(*(long *)(param_6 + 0x20),*(undefined8 *)puVar10);
                  param_7[0x17] = fVar30;
                  memcpy(auStack_3e0,param_7,0x138);
                  FUN_05e618b0(param_6,auStack_3e0);
                  iVar12 = 0;
                  param_7[0x16] = param_7[0x17];
                }
              }
              FUN_04764208(&local_130,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
            }
            FUN_04764208(local_168,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
            if (lVar16 != 0) {
              if (*(long *)(lVar17 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cabc(lVar16);
              }
              goto LAB_05e6d348;
            }
            if ((*(long *)(param_7 + 0x14) != 0) && (0 < iVar12)) {
              if (*(long *)(param_6 + 0x20) == 0) goto LAB_05e6d278;
              fVar36 = (float)FUN_03abe980(*(long *)(param_6 + 0x20),*(undefined8 *)puVar10);
              param_7[0x17] = fVar36;
              memcpy(auStack_518,param_7,0x138);
              FUN_05e618b0(param_6,auStack_518);
            }
            goto LAB_05e6d0c4;
          }
        }
      }
LAB_05e6d1e4:
      lVar17 = *(long *)(lVar17 + 0x28);
      goto LAB_05e6d1ec;
    }
LAB_05e6d1fc:
    lVar17 = *(long *)(lVar17 + 0x28);
  }
  if (lVar17 == local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


