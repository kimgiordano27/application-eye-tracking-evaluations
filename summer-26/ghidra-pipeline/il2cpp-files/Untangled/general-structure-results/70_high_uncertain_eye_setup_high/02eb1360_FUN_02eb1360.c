/*
FUNCTION_NAME: FUN_02eb1360
ENTRY_POINT: 02eb1360
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * FUN_02eb1360(uint param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined4 *puVar19;
  int *piVar20;
  long lVar21;
  undefined1 auStack_58 [8];
  
  lVar9 = DAT_071d7dc0;
  if (param_1 == 0xffffffff) {
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = *(long **)(DAT_071d7dc0 + (long)(int)param_1 * 8);
    DataMemoryBarrier(2,1);
    if (plVar17 == (long *)0x0) {
      lVar18 = (long)(int)param_1;
      FUN_02ea5460(auStack_58,Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__)
      ;
      plVar17 = *(long **)(lVar9 + lVar18 * 8);
      if (plVar17 == (long *)0x0) {
        lVar11 = DAT_071d7d98 + *(int *)(DAT_071d7da0 + 0xa0);
        piVar20 = (int *)(lVar11 + lVar18 * 0x58);
        puVar19 = *(undefined4 **)(*(long *)(DAT_071d7d90 + 0x68) + lVar18 * 8);
        plVar17 = HexabodyVR_PlayerController_Kinematics__SolveTimeToVelocity
                            (1,(ulong)*(ushort *)((long)piVar20 + 0x4a) * 0x10 + 0x138);
        plVar17[0xf] = (long)plVar17;
        uVar12 = (ulong)DAT_071d7da8;
        if (0 < (int)DAT_071d7da8) {
          plVar15 = (long *)(DAT_071d7db0 + 0x10);
          do {
            if (((int)plVar15[-2] <= (int)param_1) &&
               (lVar14 = *plVar15, param_1 < (uint)(*(int *)(lVar14 + 0x18) + (int)plVar15[-2])))
            goto LAB_02eb1450;
            uVar12 = uVar12 - 1;
            plVar15 = plVar15 + 3;
          } while (uVar12 != 0);
        }
        lVar14 = 0;
LAB_02eb1450:
        *plVar17 = lVar14;
        lVar8 = DAT_071d7da0;
        lVar21 = DAT_071d7d98;
        lVar14 = DAT_071d7d98 + *(int *)(DAT_071d7da0 + 0x18);
        plVar17[2] = lVar14 + *piVar20;
        lVar16 = lVar11 + lVar18 * 0x58;
        plVar17[3] = lVar14 + *(int *)(lVar16 + 4);
        iVar4 = *(int *)(lVar16 + 8);
        if (iVar4 == -1) {
          plVar15 = (long *)0x0;
        }
        else {
          plVar15 = *(long **)(*(long *)(DAT_071d7d90 + 0x38) + (long)iVar4 * 8);
        }
        lVar14 = *plVar15;
        plVar17[5] = plVar15[1];
        plVar17[4] = lVar14;
        lVar16 = plVar15[1];
        lVar14 = *plVar15;
        plVar17[0xd] = (long)piVar20;
        plVar17[7] = lVar16;
        plVar17[6] = lVar14;
        *(uint *)(plVar17 + 7) = *(uint *)(plVar17 + 7) & 0x7fffffff | 0x20000000;
        piVar20 = (int *)(lVar11 + lVar18 * 0x58 + 0x18);
        iVar4 = *piVar20;
        if (iVar4 == -1) {
          lVar14 = 0;
        }
        else {
          lVar14 = lVar21 + *(int *)(lVar8 + 0x78) + (long)iVar4 * 0x10;
        }
        plVar17[0x1e] = lVar14;
        uVar2 = *puVar19;
        lVar14 = lVar11 + lVar18 * 0x58;
        puVar1 = (ushort *)((long)plVar17 + 0x135);
        *(undefined4 *)(plVar17 + 0x1f) = uVar2;
        *(undefined4 *)(plVar17 + 0x20) = uVar2;
        plVar17[0x21] = *(long *)(puVar19 + 1);
        uVar2 = puVar19[3];
        *(undefined4 *)((long)plVar17 + 0x114) = 0xffffffff;
        *(undefined4 *)(plVar17 + 0x22) = uVar2;
        *(undefined4 *)(plVar17 + 0x23) = *(undefined4 *)(lVar14 + 0x1c);
        uVar3 = *puVar1;
        uVar7 = uVar3 & 3 | (*(byte *)(lVar14 + 0x50) >> 1 & 1) << 2;
        *puVar1 = uVar3 & 0xfff8 | uVar7;
        uVar7 = uVar3 & 8 | uVar7 | (ushort)(*piVar20 != -1) << 4;
        *puVar1 = uVar3 & 0xffe0 | uVar7;
        uVar7 = uVar3 & 0x1e0 | uVar7 | (*(byte *)(lVar14 + 0x50) >> 2 & 1) << 9;
        *puVar1 = uVar3 & 0xfc00 | uVar7;
        uVar6 = *(byte *)(lVar14 + 0x50) >> 3 & 1;
        uVar7 = uVar7 | (ushort)(uVar6 << 10);
        *puVar1 = uVar3 & 0xf800 | uVar7;
        *(uint *)(plVar17 + 0x1c) = uVar6 ^ 1;
        uVar7 = uVar7 | (*(byte *)(lVar14 + 0x50) >> 4 & 1) << 0xb;
        *puVar1 = uVar3 & 0xf000 | uVar7;
        uVar7 = uVar7 | (*(byte *)(lVar14 + 0x50) >> 5 & 1) << 0xc;
        *puVar1 = uVar3 & 0xe000 | uVar7;
        uVar6 = *(uint *)(lVar14 + 0x50);
        uVar5 = (uVar6 >> 6 & 0xf) - 1;
        uVar13 = (undefined1)(0x8040201008040201 >> (((ulong)uVar5 & 7) << 3));
        if (7 < uVar5) {
          uVar13 = 0;
        }
        *(undefined1 *)((long)plVar17 + 0x134) = uVar13;
        *puVar1 = uVar3 & 0xa000 | uVar7 | (ushort)((uVar6 >> 0x10 & 1) << 0xe);
        lVar21 = *(long *)(lVar14 + 0x40);
        plVar17[0x25] = *(long *)(lVar14 + 0x48);
        plVar17[0x24] = lVar21;
        *(undefined4 *)((long)plVar17 + 0x11c) = *(undefined4 *)(lVar14 + 0x54);
        lVar14 = FUN_02f23524(plVar17 + 4);
        plVar17[0xe] = lVar14;
        iVar4 = *(int *)(lVar11 + lVar18 * 0x58 + 0x10);
        if (iVar4 != -1) {
          lVar14 = FUN_02f1e62c(*(undefined8 *)(*(long *)(DAT_071d7d90 + 0x38) + (long)iVar4 * 8),1)
          ;
          plVar17[0xb] = lVar14;
        }
        iVar4 = *(int *)(lVar11 + lVar18 * 0x58 + 0xc);
        if (iVar4 != -1) {
          lVar14 = FUN_02f1e62c(*(undefined8 *)(*(long *)(DAT_071d7d90 + 0x38) + (long)iVar4 * 8),1)
          ;
          plVar17[10] = lVar14;
        }
        plVar17[8] = (long)plVar17;
        plVar17[9] = (long)plVar17;
        if ((*(byte *)puVar1 >> 2 & 1) != 0) {
          iVar4 = *(int *)(lVar11 + lVar18 * 0x58 + 0x14);
          if (iVar4 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined8 *)(*(long *)(DAT_071d7d90 + 0x38) + (long)iVar4 * 8);
          }
          lVar11 = FUN_02f1e62c(uVar10,1);
          plVar17[8] = lVar11;
          plVar17[9] = lVar11;
        }
        DataMemoryBarrier(2,3);
        *(long **)(lVar9 + lVar18 * 8) = plVar17;
      }
      FUN_02ea552c(auStack_58);
    }
  }
  return plVar17;
}


