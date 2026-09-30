/*
FUNCTION_NAME: FUN_028da600
ENTRY_POINT: 028da600
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
FUN_028da600(long param_1,undefined4 param_2,undefined8 *param_3,char param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_64;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  local_64 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext
              (param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar13 = *(long **)(param_1 + 0x30);
  lVar15 = *(long *)(param_1 + 0x18);
  if (plVar13 == (long *)0x0) {
    uVar4 = FUN_032cf300(&local_64,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    lVar8 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_028da6e8;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar13,lVar6,1);
LAB_028da6e8:
    uVar4 = (*(code *)*puVar5)(plVar13,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_028daabc;
  uVar14 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar17 = 0;
  if (uVar14 != 0) {
    iVar17 = (int)uVar4 / (int)uVar14;
  }
  uVar7 = uVar4 - iVar17 * uVar14;
  if (uVar14 <= uVar7) {
LAB_028daa8c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  piVar16 = (int *)(lVar6 + (ulong)uVar7 * 4 + 0x20);
  uVar14 = *piVar16 - 1;
  if (plVar13 == (long *)0x0) {
    if (lVar15 == 0) goto LAB_028daabc;
    uVar9 = *(undefined8 *)(lVar15 + 0x18);
    uVar7 = (uint)uVar9;
    if (uVar14 < uVar7) {
      iVar17 = 0;
      do {
        uVar7 = (uint)uVar9;
        lVar6 = (long)(int)uVar14;
        if (*(uint *)(lVar15 + (long)(int)uVar14 * 0x28 + 0x20) == uVar4) {
          plVar13 = (long *)FUN_022cb868(*(undefined8 *)
                                          (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_028daa8c;
          if (plVar13 == (long *)0x0) goto LAB_028daabc;
          uVar11 = (**(code **)(*plVar13 + 0x1b8))
                             (plVar13,*(undefined4 *)(lVar15 + lVar6 * 0x28 + 0x28),local_64,
                              *(undefined8 *)(*plVar13 + 0x1c0));
          if ((uVar11 & 1) != 0) {
            if (param_4 == '\x02') goto LAB_028daa90;
            if (param_4 != '\x01') {
              return 0;
            }
            local_70 = param_3[2];
            uStack_78 = param_3[1];
            local_80 = *param_3;
            if (uVar14 < *(uint *)(lVar15 + 0x18)) {
              lVar6 = lVar15 + lVar6 * 0x28;
              *(undefined8 *)(lVar6 + 0x40) = local_70;
              *(undefined8 *)(lVar6 + 0x38) = uStack_78;
              *(undefined8 *)(lVar6 + 0x30) = local_80;
              if (uVar14 < *(uint *)(lVar15 + 0x18)) {
                return 1;
              }
            }
            goto LAB_028daa8c;
          }
          uVar7 = *(uint *)(lVar15 + 0x18);
        }
        if (uVar7 <= uVar14) goto LAB_028daa8c;
        uVar14 = *(uint *)(lVar15 + lVar6 * 0x28 + 0x24);
        if ((int)uVar7 <= iVar17) {
          FUN_032f2aac(0);
        }
        uVar9 = *(undefined8 *)(lVar15 + 0x18);
        iVar17 = iVar17 + 1;
        uVar7 = (uint)uVar9;
      } while (uVar14 < uVar7);
    }
  }
  else {
    if (lVar15 == 0) goto LAB_028daabc;
    uVar9 = *(undefined8 *)(lVar15 + 0x18);
    uVar7 = (uint)uVar9;
    if (uVar14 < uVar7) {
      iVar17 = 0;
      do {
        uVar3 = local_64;
        uVar7 = (uint)uVar9;
        lVar6 = (long)(int)uVar14;
        if (*(uint *)(lVar15 + (long)(int)uVar14 * 0x28 + 0x20) == uVar4) {
          lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar15 + lVar6 * 0x28 + 0x28);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394(lVar8);
          }
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_028da7d8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01c72498(plVar13,lVar8,0);
LAB_028da7d8:
          uVar11 = (*(code *)*puVar5)(plVar13,uVar1,uVar3,puVar5[1]);
          if ((uVar11 & 1) != 0) {
            if (param_4 == '\x02') {
LAB_028daa90:
              local_80 = CONCAT44(local_80._4_4_,local_64);
              uVar9 = thunk_FUN_01c49334(*(undefined8 *)
                                          (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70),
                                         &local_80);
              FUN_032f29a8(uVar9,0);
              return 0;
            }
            if (param_4 != '\x01') {
              return 0;
            }
            local_70 = param_3[2];
            uStack_78 = param_3[1];
            local_80 = *param_3;
            if (uVar14 < *(uint *)(lVar15 + 0x18)) {
              lVar6 = lVar15 + lVar6 * 0x28;
              *(undefined8 *)(lVar6 + 0x40) = local_70;
              *(undefined8 *)(lVar6 + 0x38) = uStack_78;
              *(undefined8 *)(lVar6 + 0x30) = local_80;
              if (uVar14 < *(uint *)(lVar15 + 0x18)) {
                return 1;
              }
            }
            goto LAB_028daa8c;
          }
          uVar7 = *(uint *)(lVar15 + 0x18);
        }
        if (uVar7 <= uVar14) goto LAB_028daa8c;
        uVar14 = *(uint *)(lVar15 + lVar6 * 0x28 + 0x24);
        if ((int)uVar7 <= iVar17) {
          FUN_032f2aac(0);
        }
        uVar9 = *(undefined8 *)(lVar15 + 0x18);
        iVar17 = iVar17 + 1;
        uVar7 = (uint)uVar9;
      } while (uVar14 < uVar7);
    }
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar14 = *(uint *)(param_1 + 0x20);
    if (uVar14 == uVar7) {
      FUN_028dae4c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b0));
      lVar6 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x20) = uVar14 + 1;
      if (lVar6 == 0) goto LAB_028daabc;
      uVar7 = *(uint *)(lVar6 + 0x18);
      iVar17 = 0;
      if (uVar7 != 0) {
        iVar17 = (int)uVar4 / (int)uVar7;
      }
      uVar2 = uVar4 - iVar17 * uVar7;
      if (uVar7 <= uVar2) goto LAB_028daa8c;
      lVar15 = *(long *)(param_1 + 0x18);
      piVar16 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar15 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar14 + 1;
    }
    if (lVar15 == 0) {
LAB_028daabc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_028daa8c;
    lVar6 = (long)(int)uVar14;
  }
  else {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar14 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_028daa8c;
    lVar6 = (long)(int)uVar14;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar15 + lVar6 * 0x28 + 0x24);
  }
  lVar15 = lVar15 + lVar6 * 0x28;
  *(uint *)(lVar15 + 0x20) = uVar4;
  *(int *)(lVar15 + 0x24) = *piVar16 + -1;
  *(undefined4 *)(lVar15 + 0x28) = local_64;
  uVar18 = param_3[1];
  uVar9 = *param_3;
  *(undefined8 *)(lVar15 + 0x40) = param_3[2];
  *(undefined8 *)(lVar15 + 0x38) = uVar18;
  *(undefined8 *)(lVar15 + 0x30) = uVar9;
  *piVar16 = uVar14 + 1;
  return 1;
}


