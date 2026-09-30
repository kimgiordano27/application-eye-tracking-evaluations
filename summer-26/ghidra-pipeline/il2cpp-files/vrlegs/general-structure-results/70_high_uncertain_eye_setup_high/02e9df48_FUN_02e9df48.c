/*
FUNCTION_NAME: FUN_02e9df48
ENTRY_POINT: 02e9df48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e9e970) */
/* WARNING: Removing unreachable block (ram,0x02e9e9a0) */

void FUN_02e9df48(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  char local_6c [4];
  ushort local_68 [2];
  ushort local_64 [2];
  
  if ((DAT_0412a5fa & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(PTR_DAT_03d1f430);
    FUN_01ab69ac(PTR_DAT_03cbede8);
    DAT_0412a5fa = 1;
  }
  local_64[0] = 0;
  local_6c[0] = '\0';
  uVar17 = *(ulong *)(param_1 + 0x30);
  if (((uint)uVar17 >> 0x1e & 1) == 0) {
    FUN_02e9d990(param_1);
    uVar17 = *(ulong *)(param_1 + 0x30);
  }
  if (((uint)uVar17 >> 0x18 & 1) != 0) {
    lVar23 = *(long *)(param_1 + 0x38);
    uVar17 = 0;
    goto LAB_02e9e924;
  }
  bVar6 = *(char *)(param_1 + 0x40) != '\0';
  bVar7 = (uVar17 & 0xa00000000) == 0x200000000;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_02e9e13c;
  uVar2 = *(ushort *)(*(long *)(param_1 + 0x38) + 0x28);
  plVar21 = (long *)(param_1 + 0x10);
  lVar23 = *plVar21;
  local_68[0] = uVar2;
  if ((lVar23 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_02e9e13c;
  uVar3 = *(ushort *)(lVar23 + 0x10);
  uVar22 = (ulong)uVar3;
  uVar14 = *(uint *)(*(long *)(param_1 + 0x20) + 0x10);
  iVar10 = thunk_FUN_01a5ddb0(0);
  puVar5 = PTR_DAT_03cbede8;
  lVar23 = lVar23 + iVar10;
  if ((uint)uVar2 <= (uint)uVar3 && (uint)uVar3 != (uint)uVar2) {
    uVar17 = uVar22 - 1;
    uVar3 = *(ushort *)(lVar23 + uVar17 * 2);
    if (*(int *)(*(long *)PTR_DAT_03cbede8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (((uVar3 < 0x21) && (uVar3 < 0x21)) && ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) != 0)) {
      uVar11 = (uint)uVar17;
      while (uVar12 = uVar11 & 0xffff, uVar11 = (uint)uVar17, uVar2 != uVar12) {
        uVar11 = ((uint)uVar17 & 0xffff) - 1;
        uVar17 = (ulong)uVar11;
        uVar3 = *(ushort *)(lVar23 + ((ulong)(uVar11 * 2) & 0x1fffe));
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (((0x20 < uVar3) || (0x20 < uVar3)) ||
           ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) break;
      }
      uVar22 = (ulong)((uVar11 & 0xffff) + 1);
    }
  }
  uVar11 = (uint)*(undefined8 *)(param_1 + 0x30);
  if ((uVar11 >> 0x1d & 1) == 0) {
    lVar19 = *(long *)(param_1 + 0x20);
    if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_02e9e13c;
    uVar12 = (uint)*(ushort *)(*(long *)(lVar19 + 0x20) + 0x10);
    if (uVar12 != 0) {
      uVar17 = 0;
      uVar13 = 0;
      do {
        if (*(long *)(lVar19 + 0x20) == 0) break;
        sVar9 = FUN_025b8a2c(*(long *)(lVar19 + 0x20),uVar13,0);
        uVar20 = (ulong)uVar13;
        uVar13 = uVar13 + 1 & 0xffff;
        uVar17 = uVar17 | *(short *)(lVar23 + (uVar2 + uVar20) * 2) != sVar9;
        if (uVar12 <= uVar13) {
          uVar11 = (uint)*(undefined8 *)(param_1 + 0x30);
          goto joined_r0x02e9e158;
        }
        lVar19 = *(long *)(param_1 + 0x20);
      } while (lVar19 != 0);
      goto LAB_02e9e13c;
    }
    uVar17 = 0;
    uVar13 = 0;
joined_r0x02e9e158:
    if (((uVar11 >> 0x14 & 1) != 0) &&
       (((lVar19 = (ulong)uVar2 + (ulong)uVar13, ((uint)uVar22 & 0xffff) <= (int)lVar19 + 3U ||
         (*(short *)(lVar23 + lVar19 * 2 + 2) != 0x2f)) ||
        (*(short *)(lVar23 + lVar19 * 2 + 4) != 0x2f)))) {
      uVar17 = 1;
    }
  }
  else {
    uVar17 = 1;
  }
  if ((uVar11 >> 0x15 & 1) != 0) {
    lVar19 = *(long *)(param_1 + 0x38);
    if (lVar19 == 0) goto LAB_02e9e13c;
    local_68[0] = *(ushort *)(lVar19 + 0x2a);
    uVar11 = FUN_02ea5f94(param_1,lVar23,local_68,*(undefined2 *)(lVar19 + 0x2c),0x40);
    uVar20 = uVar17 | ~uVar11 & 2;
    if ((uVar11 & 0x11) != 1) {
      uVar20 = uVar20 | 0x80;
    }
    uVar17 = uVar20 | 0x8000000000;
    if ((uVar11 & 0x5b) != 10 || *(char *)(param_1 + 0x40) == '\0') {
      uVar17 = uVar20;
    }
  }
  puVar5 = PTR_DAT_03cbede8;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_02e9e13c;
  local_68[0] = *(ushort *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar11 = (uint)local_68[0];
  local_64[0] = local_68[0];
  if (bVar7 && bVar6) {
    uVar12 = (uint)*(undefined8 *)(param_1 + 0x30);
    if ((uVar12 >> 0x1b & 1) != 0) {
      if ((uVar12 >> 0x1d & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e9e13c;
        uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
        lVar23 = *(long *)PTR_DAT_03cbede8;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar5;
        }
        lVar23 = FUN_025b1328(uVar16,*(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x60),0);
      }
      else {
        lVar23 = **(long **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
      }
      *plVar21 = lVar23;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21);
    }
    if ((*(long *)(param_1 + 0x38) == 0) || (*plVar21 == 0)) goto LAB_02e9e13c;
    local_68[0] = *(ushort *)(*plVar21 + 0x10);
    *(ushort *)(*(long *)(param_1 + 0x38) + 0x30) = local_68[0];
    lVar23 = *(long *)(param_1 + 0x18);
    if (lVar23 == 0) goto LAB_02e9e13c;
    uVar1 = *(undefined4 *)(lVar23 + 0x10);
    uVar18 = 0xffff;
    if (((uVar14 & 0x60) != 0) && (((uint)*(undefined8 *)(param_1 + 0x30) >> 0x1d & 1) == 0)) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e9e13c;
      bVar8 = FUN_02ee5290(*(long *)(param_1 + 0x20),0x20,0);
      if ((bVar8 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e9e13c;
        uVar22 = FUN_02ee5290(*(long *)(param_1 + 0x20),0x40,0);
        uVar18 = 0x23;
        if ((uVar22 & 1) == 0) {
          uVar18 = 0xfffffffe;
        }
        if ((param_1 != 0 & (bVar8 ^ 0xff)) == 0) goto LAB_02e9e13c;
      }
      else {
        uVar18 = 0x3f;
      }
    }
    uVar16 = FUN_02ea7edc(param_1,lVar23,local_64,uVar1,uVar18);
    uVar12 = (uint)local_64[0];
    lVar23 = FUN_02ea7f30(uVar16,*(undefined8 *)(param_1 + 0x18),uVar11,uVar12,0x10);
    if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
    }
    uVar22 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
    lVar19 = *plVar21;
    if ((uVar22 & 1) == 0) {
      lVar23 = FUN_025b1328(lVar19,lVar23,0);
      *plVar21 = lVar23;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21);
    }
    else {
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar16 = FUN_025c5de8(lVar23,1,0);
      lVar23 = FUN_025b1328(lVar19,uVar16,0);
      *plVar21 = lVar23;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21);
    }
    lVar23 = *plVar21;
    if (lVar23 == 0) goto LAB_02e9e13c;
    uVar22 = (ulong)*(uint *)(lVar23 + 0x10);
    uVar11 = uVar12;
LAB_02e9e3fc:
    iVar10 = thunk_FUN_01a5ddb0(0);
    lVar23 = lVar23 + iVar10;
  }
  else {
    lVar23 = *plVar21;
    if (lVar23 != 0) goto LAB_02e9e3fc;
    lVar23 = 0;
  }
  uVar18 = 0xffff;
  if (((uVar14 & 0x60) != 0) && (((uint)*(undefined8 *)(param_1 + 0x30) >> 0x1d & 1) == 0)) {
    if ((uVar14 >> 5 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e9e13c;
      uVar20 = FUN_02ee5290(*(long *)(param_1 + 0x20),0x40,0);
      uVar18 = 0x23;
      if ((uVar20 & 1) == 0) {
        uVar18 = 0xfffffffe;
      }
      if ((param_1 == 0) || ((uVar14 >> 5 & 1) != 0)) goto LAB_02e9e13c;
    }
    else {
      uVar18 = 0x3f;
    }
  }
  uVar12 = FUN_02ea5f94(param_1,lVar23,local_68,uVar22,uVar18);
  uVar13 = (uint)*(undefined8 *)(param_1 + 0x30);
  if (((uVar14 >> 0x15 & 1) != 0) && ((uVar13 >> 0x14 & 1) != 0)) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_02e9e13c;
    uVar2 = *(ushort *)(*(long *)(param_1 + 0x38) + 0x30);
    if (((uint)uVar2 == ((uint)uVar22 & 0xffff)) ||
       ((sVar9 = *(short *)(lVar23 + (ulong)uVar2 * 2), sVar9 != 0x2f && (sVar9 != 0x5c)))) {
      uVar17 = uVar17 | 0x4000;
    }
  }
  uVar20 = uVar17;
  if ((uVar13 >> 0x1b & 1) == 0) {
    if ((uVar13 >> 0x14 & 1) != 0) {
      if ((uVar14 & 0xc00000) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e9e13c;
        uVar15 = FUN_02ee5290(*(long *)(param_1 + 0x20),0x2000000,0);
        if ((uVar15 & 1) == 0) goto LAB_02e9e4ac;
      }
      goto LAB_02e9e4e0;
    }
LAB_02e9e4ac:
    uVar13 = (uVar12 & 0x10) >> 4;
    if ((uVar12 & 0x10) != 0) {
      uVar20 = uVar17 | 0x400;
    }
  }
  else {
LAB_02e9e4e0:
    if ((uVar12 >> 7 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e9e13c;
      uVar13 = FUN_02ee5290(*(long *)(param_1 + 0x20),0x2000000,0);
      uVar20 = uVar17 | 0x410;
      if ((uVar13 & 1) == 0) {
        uVar20 = uVar17;
      }
    }
    uVar4 = (uint)((uVar14 & 0x400000) == 0 || (uVar12 & 0x10) == 0);
    uVar13 = uVar13 | uVar4 ^ 1;
    if (uVar4 == 0) {
      uVar20 = uVar20 | 0x410;
    }
    if (((uVar14 >> 0x17 & 1) != 0) && ((uVar20 & 0x400) != 0 || (uVar12 & 4) != 0)) {
      uVar20 = uVar20 | 0x2000;
    }
    if ((uVar12 & 0x10) != 0) {
      uVar20 = uVar20 | 0x8000;
    }
  }
  uVar17 = *(ulong *)(param_1 + 0x30) & 0x20000000;
  if ((uVar12 >> 1 & 1) == 0) {
    if (((uVar17 == 0) || ((uVar12 >> 5 & 1) != 0)) ||
       (((uint)*(ulong *)(param_1 + 0x30) >> 0x13 & 1) != 0)) {
      uVar20 = uVar20 | 0x10;
      uVar13 = 1;
    }
    else {
      uVar17 = 1;
    }
  }
  if (uVar17 != 0 && (uVar12 & 0x21) != 0) {
    uVar12 = uVar12 & 0xfffffffe;
  }
  uVar15 = uVar20 | 0x400;
  if ((uVar12 & 1) != 0) {
    uVar15 = uVar20;
  }
  uVar17 = uVar15;
  if ((*(char *)(param_1 + 0x40) != '\0') &&
     (uVar17 = uVar15 | 0x10000000000, ((uint)((uVar12 & 0x4b) == 10) & (uVar13 ^ 1)) == 0)) {
    uVar17 = uVar15;
  }
  uVar12 = uVar11;
  if (bVar7 && bVar6) {
    lVar23 = *(long *)(param_1 + 0x18);
    if (lVar23 == 0) goto LAB_02e9e13c;
    if (((int)uVar11 < *(int *)(lVar23 + 0x10)) &&
       (sVar9 = FUN_025b8a2c(lVar23,uVar11,0), sVar9 == 0x3f)) {
      local_64[0] = (short)uVar11 + 1;
      lVar23 = *(long *)(param_1 + 0x18);
      if (lVar23 == 0) goto LAB_02e9e13c;
      uVar18 = 0xfffffffe;
      if ((uVar14 & 0x40) != 0) {
        uVar18 = 0x23;
      }
      uVar16 = FUN_02ea7edc(param_1,lVar23,local_64,*(undefined4 *)(lVar23 + 0x10),uVar18);
      uVar12 = (uint)local_64[0];
      lVar23 = FUN_02ea7f30(uVar16,*(undefined8 *)(param_1 + 0x18),uVar11,local_64[0],0x20);
      if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
      }
      uVar22 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
      lVar19 = *plVar21;
      if ((uVar22 & 1) == 0) {
        lVar23 = FUN_025b1328(lVar19,lVar23,0);
        *plVar21 = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21);
      }
      else {
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar16 = FUN_025c5de8(lVar23,1,0);
        lVar23 = FUN_025b1328(lVar19,uVar16,0);
        *plVar21 = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21);
      }
      if (*plVar21 == 0) goto LAB_02e9e13c;
      uVar22 = (ulong)*(uint *)(*plVar21 + 0x10);
    }
  }
  uVar2 = local_68[0];
  uVar11 = (uint)uVar22;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_02e9e13c;
  uVar20 = (ulong)local_68[0];
  uVar13 = (uint)local_68[0];
  *(ushort *)(*(long *)(param_1 + 0x38) + 0x32) = local_68[0];
  lVar23 = *plVar21;
  if (lVar23 != 0) {
    iVar10 = thunk_FUN_01a5ddb0(0);
    lVar23 = lVar23 + iVar10;
  }
  if ((uVar13 < (uVar11 & 0xffff)) && (*(short *)(lVar23 + uVar20 * 2) == 0x3f)) {
    local_68[0] = uVar2 + 1;
    uVar18 = 0xfffffffe;
    if ((uVar14 & 0x40) != 0) {
      uVar18 = 0x23;
    }
    uVar14 = FUN_02ea5f94(param_1,lVar23,local_68,uVar22,uVar18);
    uVar22 = uVar17 | 0x20;
    if ((uVar14 & 2) != 0) {
      uVar22 = uVar17;
    }
    if ((uVar14 & 0x11) != 1) {
      uVar22 = uVar22 | 0x800;
    }
    uVar17 = uVar22 | 0x20000000000;
    if ((uVar14 & 0x5b) != 10 || *(char *)(param_1 + 0x40) == '\0') {
      uVar17 = uVar22;
    }
  }
  if (bVar7 && bVar6) {
    lVar23 = *(long *)(param_1 + 0x18);
    if (lVar23 == 0) goto LAB_02e9e13c;
    if (((int)uVar12 < *(int *)(lVar23 + 0x10)) &&
       (sVar9 = FUN_025b8a2c(lVar23,uVar12,0), sVar9 == 0x23)) {
      local_64[0] = (short)uVar12 + 1;
      lVar23 = *(long *)(param_1 + 0x18);
      if (lVar23 == 0) goto LAB_02e9e13c;
      uVar16 = FUN_02ea7edc(param_1,lVar23,local_64,*(undefined4 *)(lVar23 + 0x10),0xfffe);
      lVar23 = FUN_02ea7f30(uVar16,*(undefined8 *)(param_1 + 0x18),uVar12,local_64[0],0x40);
      if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
      }
      uVar22 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
      lVar19 = *plVar21;
      if ((uVar22 & 1) == 0) {
        lVar23 = FUN_025b1328(lVar19,lVar23,0);
        *plVar21 = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21);
      }
      else {
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar16 = FUN_025c5de8(lVar23,1,0);
        lVar23 = FUN_025b1328(lVar19,uVar16,0);
        *plVar21 = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21);
      }
      if (*plVar21 == 0) goto LAB_02e9e13c;
      uVar11 = *(uint *)(*plVar21 + 0x10);
    }
  }
  uVar2 = local_68[0];
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar22 = (ulong)local_68[0];
    uVar14 = (uint)local_68[0];
    *(ushort *)(*(long *)(param_1 + 0x38) + 0x34) = local_68[0];
    lVar23 = *plVar21;
    if (lVar23 != 0) {
      iVar10 = thunk_FUN_01a5ddb0(0);
      lVar23 = lVar23 + iVar10;
    }
    if ((uVar14 < (uVar11 & 0xffff)) && (*(short *)(lVar23 + uVar22 * 2) == 0x23)) {
      local_68[0] = uVar2 + 1;
      uVar14 = FUN_02ea5f94(param_1,lVar23,local_68,uVar11,0xfffe);
      uVar22 = uVar17 | 0x40;
      if ((uVar14 & 2) != 0) {
        uVar22 = uVar17;
      }
      if ((uVar14 & 0x11) != 1) {
        uVar22 = uVar22 | 0x1000;
      }
      uVar17 = uVar22 | 0x40000000000;
      if ((uVar14 & 0x5b) != 10 || *(char *)(param_1 + 0x40) == '\0') {
        uVar17 = uVar22;
      }
    }
    lVar23 = *(long *)(param_1 + 0x38);
    if (lVar23 != 0) {
      *(ushort *)(lVar23 + 0x36) = local_68[0];
LAB_02e9e924:
      local_6c[0] = '\0';
      FUN_027e0bd8(lVar23,local_6c,0);
      *(ulong *)(param_1 + 0x30) = uVar17 | *(ulong *)(param_1 + 0x30) | 0x80000000;
      if (local_6c[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar23,0);
      }
      *(ulong *)(param_1 + 0x30) = *(ulong *)(param_1 + 0x30) | 0x800000000;
      return;
    }
  }
LAB_02e9e13c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


