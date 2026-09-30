/*
FUNCTION_NAME: FUN_03301958
ENTRY_POINT: 03301958
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long FUN_03301958(uint param_1)

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
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined4 *puVar18;
  int *piVar19;
  long lVar20;
  undefined1 auStack_58 [8];
  
  if (param_1 == 0xffffffff) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(DAT_076ec5c8 + (long)(int)param_1 * 8);
    if (lVar9 == 0) {
      lVar9 = (long)(int)param_1;
      FUN_03296828(auStack_58,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
      if (*(long *)(DAT_076ec5c8 + lVar9 * 8) == 0) {
        lVar12 = DAT_076ec5a0 + *(int *)(DAT_076ec5a8 + 0xa0);
        piVar19 = (int *)(lVar12 + lVar9 * 0x58);
        puVar18 = *(undefined4 **)(*(long *)(DAT_076ec598 + 0x68) + lVar9 * 8);
        plVar10 = calloc(1,(ulong)*(ushort *)((long)piVar19 + 0x4a) * 0x10 + 0x138);
        plVar10[0xf] = (long)plVar10;
        uVar13 = (ulong)DAT_076ec5b0;
        if (0 < (int)DAT_076ec5b0) {
          plVar16 = (long *)(DAT_076ec5b8 + 0x10);
          do {
            if (((int)plVar16[-2] <= (int)param_1) &&
               (lVar15 = *plVar16, param_1 < (uint)(*(int *)(lVar15 + 0x18) + (int)plVar16[-2])))
            goto LAB_03301a48;
            uVar13 = uVar13 - 1;
            plVar16 = plVar16 + 3;
          } while (uVar13 != 0);
        }
        lVar15 = 0;
LAB_03301a48:
        *plVar10 = lVar15;
        lVar8 = DAT_076ec5a8;
        lVar20 = DAT_076ec5a0;
        lVar15 = DAT_076ec5a0 + *(int *)(DAT_076ec5a8 + 0x18);
        plVar10[2] = lVar15 + *piVar19;
        lVar17 = lVar12 + lVar9 * 0x58;
        plVar10[3] = lVar15 + *(int *)(lVar17 + 4);
        iVar4 = *(int *)(lVar17 + 8);
        if (iVar4 == -1) {
          plVar16 = (long *)0x0;
        }
        else {
          plVar16 = *(long **)(*(long *)(DAT_076ec598 + 0x38) + (long)iVar4 * 8);
        }
        lVar15 = *plVar16;
        plVar10[5] = plVar16[1];
        plVar10[4] = lVar15;
        lVar17 = plVar16[1];
        lVar15 = *plVar16;
        plVar10[0xd] = (long)piVar19;
        plVar10[7] = lVar17;
        plVar10[6] = lVar15;
        *(uint *)(plVar10 + 7) = *(uint *)(plVar10 + 7) & 0x7fffffff | 0x20000000;
        piVar19 = (int *)(lVar12 + lVar9 * 0x58 + 0x18);
        iVar4 = *piVar19;
        if (iVar4 == -1) {
          lVar15 = 0;
        }
        else {
          lVar15 = lVar20 + *(int *)(lVar8 + 0x78) + (long)iVar4 * 0x10;
        }
        plVar10[0x1e] = lVar15;
        uVar2 = *puVar18;
        lVar15 = lVar12 + lVar9 * 0x58;
        puVar1 = (ushort *)((long)plVar10 + 0x135);
        *(undefined4 *)(plVar10 + 0x1f) = uVar2;
        *(undefined4 *)(plVar10 + 0x20) = uVar2;
        plVar10[0x21] = *(long *)(puVar18 + 1);
        uVar2 = puVar18[3];
        *(undefined4 *)((long)plVar10 + 0x114) = 0xffffffff;
        *(undefined4 *)(plVar10 + 0x22) = uVar2;
        *(undefined4 *)(plVar10 + 0x23) = *(undefined4 *)(lVar15 + 0x1c);
        uVar3 = *puVar1;
        uVar7 = uVar3 & 3 | (*(byte *)(lVar15 + 0x50) >> 1 & 1) << 2;
        *puVar1 = uVar3 & 0xfff8 | uVar7;
        uVar7 = uVar3 & 8 | uVar7 | (ushort)(*piVar19 != -1) << 4;
        *puVar1 = uVar3 & 0xffe0 | uVar7;
        uVar7 = uVar3 & 0x1e0 | uVar7 | (*(byte *)(lVar15 + 0x50) >> 2 & 1) << 9;
        *puVar1 = uVar3 & 0xfc00 | uVar7;
        uVar6 = *(byte *)(lVar15 + 0x50) >> 3 & 1;
        uVar7 = uVar7 | (ushort)(uVar6 << 10);
        *puVar1 = uVar3 & 0xf800 | uVar7;
        *(uint *)(plVar10 + 0x1c) = uVar6 ^ 1;
        uVar7 = uVar7 | (*(byte *)(lVar15 + 0x50) >> 4 & 1) << 0xb;
        *puVar1 = uVar3 & 0xf000 | uVar7;
        uVar7 = uVar7 | (*(byte *)(lVar15 + 0x50) >> 5 & 1) << 0xc;
        *puVar1 = uVar3 & 0xe000 | uVar7;
        uVar6 = *(uint *)(lVar15 + 0x50);
        uVar5 = (uVar6 >> 6 & 0xf) - 1;
        uVar14 = (undefined1)(0x8040201008040201 >> (((ulong)uVar5 & 7) << 3));
        if (7 < uVar5) {
          uVar14 = 0;
        }
        *(undefined1 *)((long)plVar10 + 0x134) = uVar14;
        *puVar1 = uVar3 & 0xa000 | uVar7 | (ushort)((uVar6 >> 0x10 & 1) << 0xe);
        lVar20 = *(long *)(lVar15 + 0x40);
        plVar10[0x25] = *(long *)(lVar15 + 0x48);
        plVar10[0x24] = lVar20;
        *(undefined4 *)((long)plVar10 + 0x11c) = *(undefined4 *)(lVar15 + 0x54);
        lVar15 = FUN_032e193c(plVar10 + 4);
        plVar10[0xe] = lVar15;
        iVar4 = *(int *)(lVar12 + lVar9 * 0x58 + 0x10);
        if (iVar4 != -1) {
          lVar15 = FUN_032dca64(*(undefined8 *)(*(long *)(DAT_076ec598 + 0x38) + (long)iVar4 * 8),1)
          ;
          plVar10[0xb] = lVar15;
        }
        iVar4 = *(int *)(lVar12 + lVar9 * 0x58 + 0xc);
        if (iVar4 != -1) {
          lVar15 = FUN_032dca64(*(undefined8 *)(*(long *)(DAT_076ec598 + 0x38) + (long)iVar4 * 8),1)
          ;
          plVar10[10] = lVar15;
        }
        plVar10[8] = (long)plVar10;
        plVar10[9] = (long)plVar10;
        if ((*(byte *)puVar1 >> 2 & 1) != 0) {
          iVar4 = *(int *)(lVar12 + lVar9 * 0x58 + 0x14);
          if (iVar4 == -1) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(*(long *)(DAT_076ec598 + 0x38) + (long)iVar4 * 8);
          }
          lVar12 = FUN_032dca64(uVar11,1);
          plVar10[8] = lVar12;
          plVar10[9] = lVar12;
        }
        *(long **)(DAT_076ec5c8 + lVar9 * 8) = plVar10;
      }
      FUN_03296ccc(auStack_58);
      lVar9 = *(long *)(DAT_076ec5c8 + lVar9 * 8);
    }
  }
  return lVar9;
}


