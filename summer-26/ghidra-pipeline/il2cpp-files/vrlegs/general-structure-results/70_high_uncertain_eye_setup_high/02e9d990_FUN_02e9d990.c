/*
FUNCTION_NAME: FUN_02e9d990
ENTRY_POINT: 02e9d990
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


/* WARNING: Removing unreachable block (ram,0x02e9ded4) */

void FUN_02e9d990(long param_1,ulong param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  char local_44 [4];
  
  puVar4 = PTR_DAT_03d1f428;
  if ((DAT_0412a5f4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1f428);
    FUN_01ab69ac(PTR_DAT_03cbede8);
    DAT_0412a5f4 = 1;
  }
  lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  FUN_02ee7040(lVar7,0);
  if ((lVar7 == 0) || (lVar8 = *(long *)(param_1 + 0x10), lVar8 == 0)) goto LAB_02e9daec;
  uVar9 = *(uint *)(lVar8 + 0x10);
  *(short *)(lVar7 + 0x36) = (short)uVar9;
  puVar4 = PTR_DAT_03cbede8;
  uVar15 = param_2;
  if ((*(byte *)(param_1 + 0x33) & 1) != 0) goto LAB_02e9dc4c;
  uVar11 = (uint)param_2;
  if ((uVar11 >> 0x1d & 1) == 0) {
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar10 != 0)) {
      uVar9 = (uint)*(ushort *)(lVar10 + 0x10);
      do {
        uVar13 = (uVar9 & 0xffff) + 1;
        sVar5 = FUN_025b8a2c(lVar8,uVar9 & 0xffff,0);
        if (sVar5 == 0x3a) {
          if ((uVar11 >> 0x14 & 1) == 0) goto LAB_02e9dbcc;
          if (*(long *)(param_1 + 0x10) == 0) break;
          sVar5 = FUN_025b8a2c(*(long *)(param_1 + 0x10),uVar13 & 0xffff,0);
          if (sVar5 == 0x5c) {
LAB_02e9db38:
            uVar15 = 1;
          }
          else {
            if (*(long *)(param_1 + 0x10) == 0) break;
            sVar5 = FUN_025b8a2c(*(long *)(param_1 + 0x10),(uVar13 & 0xffff) + 1,0);
            if (sVar5 == 0x5c) goto LAB_02e9db38;
            uVar15 = 0;
          }
          uVar13 = uVar9 + 3;
          if ((param_2 & 0x100018000000) == 0) goto LAB_02e9dbd0;
          goto joined_r0x02e9dd38;
        }
        *(short *)(lVar7 + 0x28) = *(short *)(lVar7 + 0x28) + 1;
        lVar8 = *(long *)(param_1 + 0x10);
        uVar9 = uVar13;
      } while (lVar8 != 0);
    }
LAB_02e9daec:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((uVar9 & 0xffff) != 0) {
    uVar13 = 0;
    do {
      uVar15 = FUN_025b8a2c(lVar8,uVar13,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar4);
      }
      uVar9 = (uint)uVar15 & 0xffff;
      if (((0x20 < uVar9) || (0x20 < uVar9)) || ((1L << (uVar15 & 0x3f) & 0x100002600U) == 0))
      goto LAB_02e9db44;
      uVar13 = uVar13 + 1;
      *(short *)(lVar7 + 0x28) = *(short *)(lVar7 + 0x28) + 1;
      if (*(ushort *)(lVar7 + 0x36) <= uVar13) goto LAB_02e9db44;
      lVar8 = *(long *)(param_1 + 0x10);
    } while (lVar8 != 0);
    goto LAB_02e9daec;
  }
  uVar13 = 0;
LAB_02e9db44:
  if (*(int *)(*(long *)PTR_DAT_03cbede8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if ((uVar11 >> 0x1c & 1) != 0) {
    uVar13 = uVar13 + 2;
    uVar9 = uVar13 & 0xffff;
    if (uVar9 < (uVar11 & 0xffff)) {
      do {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_02e9daec;
        sVar5 = FUN_025b8a2c(*(long *)(param_1 + 0x10),uVar9,0);
        if (sVar5 != 0x2f) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_02e9daec;
          sVar5 = FUN_025b8a2c(*(long *)(param_1 + 0x10),uVar9,0);
          if (sVar5 != 0x5c) break;
        }
        uVar13 = uVar9 + 1;
        uVar9 = uVar13 & 0xffff;
      } while (uVar9 < (uVar11 & 0xffff));
    }
  }
LAB_02e9dbcc:
  uVar15 = 0;
LAB_02e9dbd0:
  uVar12 = (undefined2)uVar13;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e9daec;
  iVar6 = *(int *)(*(long *)(param_1 + 0x20) + 0x1c);
  if (iVar6 != -1) {
    *(short *)(lVar7 + 0x2e) = (short)iVar6;
  }
  uVar3 = (undefined2)param_2;
  if ((~uVar11 & 0x70000) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03cbede8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((uVar11 >> 0x1b & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x2a) = uVar12;
      if ((*(ulong *)(param_1 + 0x30) & 0x70000) == 0x50000) {
        *(undefined2 *)(lVar7 + 0x2c) = uVar12;
        *(undefined2 *)(lVar7 + 0x30) = uVar3;
        uVar15 = param_2 & 0xffffffffffff0000;
        goto LAB_02e9dc4c;
      }
      if ((uVar11 >> 0x15 & 1) != 0) {
        do {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_02e9daec;
          sVar5 = FUN_025b8a2c(*(long *)(param_1 + 0x10),uVar13 & 0xffff,0);
          uVar13 = uVar13 + 1;
          uVar12 = (undefined2)uVar13;
        } while (sVar5 != 0x40);
      }
      *(undefined2 *)(lVar7 + 0x2c) = uVar12;
      *(undefined2 *)(lVar7 + 0x30) = uVar3;
      if ((param_2 >> 0x26 & 1) == 0) {
        uVar9 = (uint)*(ushort *)(lVar7 + 0x36);
      }
      else {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_02e9daec;
        uVar9 = *(uint *)(*(long *)(param_1 + 0x18) + 0x10);
        *(short *)(lVar7 + 0x36) = (short)uVar9;
      }
      uVar15 = param_2 & 0xffffffbfffff0000 | uVar15;
      if ((uVar9 & 0xffff) <= (uVar11 & 0xffff)) goto LAB_02e9dc4c;
      lVar8 = 0x10;
      if ((param_2 & 0x4000000000) != 0) {
        lVar8 = 0x18;
      }
      lVar8 = *(long *)(param_1 + lVar8);
      if (lVar8 != 0) {
        iVar6 = thunk_FUN_01a5ddb0(0);
        lVar8 = lVar8 + iVar6;
      }
      if (*(short *)(((ulong)(uVar11 << 1) & 0x1fffe) + lVar8) != 0x3a) goto LAB_02e9dc4c;
      uVar1 = *(ushort *)(lVar7 + 0x36);
      uVar9 = (uVar11 & 0xffff) + 1;
      uVar12 = (undefined2)uVar9;
      uVar9 = uVar9 & 0xffff;
      if (uVar9 < uVar1) {
        uVar2 = *(ushort *)(lVar8 + (ulong)uVar9 * 2);
        if (0x2f < uVar2) {
          if (uVar2 != 0x3f) {
            if (uVar2 == 0x30) {
              uVar15 = uVar15 | 0x208;
            }
            goto LAB_02e9de50;
          }
          goto LAB_02e9deb8;
        }
        if ((uVar2 == 0x23) || (uVar2 == 0x2f)) goto LAB_02e9deb8;
LAB_02e9de50:
        uVar9 = uVar9 + 1;
        uVar12 = (undefined2)uVar9;
        uVar11 = uVar9 & 0xffff;
        sVar5 = uVar2 - 0x30;
        if (uVar11 < uVar1) {
          do {
            uVar12 = (undefined2)uVar9;
            uVar2 = *(ushort *)(lVar8 + (ulong)uVar11 * 2);
            if ((uVar2 < 0x40) && ((1L << ((ulong)uVar2 & 0x3f) & 0x8000800800000000U) != 0)) break;
            uVar9 = uVar11 + 1;
            uVar12 = (undefined2)uVar9;
            uVar11 = uVar9 & 0xffff;
            sVar5 = sVar5 * 10 + (uVar2 - 0x30);
          } while (uVar11 < uVar1);
        }
        if (*(short *)(lVar7 + 0x2e) == sVar5) goto LAB_02e9deb8;
        uVar15 = uVar15 | 0x800000;
        *(short *)(lVar7 + 0x2e) = sVar5;
      }
      else {
LAB_02e9deb8:
        uVar15 = uVar15 | 0x208;
      }
      *(undefined2 *)(lVar7 + 0x30) = uVar12;
      goto LAB_02e9dc4c;
    }
  }
  *(undefined2 *)(lVar7 + 0x2a) = uVar3;
  *(undefined2 *)(lVar7 + 0x2c) = uVar3;
  *(undefined2 *)(lVar7 + 0x30) = uVar3;
  uVar15 = param_2 & 0xffffffffffff0000 | uVar15;
LAB_02e9dc4c:
  *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(param_1 + 0x28);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar14,local_44,0);
  if ((*(byte *)(param_1 + 0x33) >> 6 & 1) == 0) {
    *(long *)(param_1 + 0x38) = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(param_1 + 0x38),lVar7);
    *(ulong *)(param_1 + 0x30) =
         uVar15 | *(ulong *)(param_1 + 0x30) & 0xffffffffffff0000 | 0x40000000;
  }
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar14,0);
  }
  return;
joined_r0x02e9dd38:
  if ((uVar11 & 0xffff) <= (uVar13 & 0xffff)) goto LAB_02e9dbd0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02e9daec;
  sVar5 = FUN_025b8a2c(*(long *)(param_1 + 0x10),uVar13 & 0xffff,0);
  if (sVar5 != 0x2f) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02e9daec;
    sVar5 = FUN_025b8a2c(*(long *)(param_1 + 0x10),uVar13 & 0xffff,0);
    if (sVar5 != 0x5c) goto LAB_02e9dbd0;
  }
  uVar13 = uVar13 + 1;
  uVar15 = 1;
  goto joined_r0x02e9dd38;
}


