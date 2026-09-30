/*
FUNCTION_NAME: FUN_05e58fd0
ENTRY_POINT: 05e58fd0
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_05e58fd0(long param_1,long param_2,undefined8 param_3,char param_4,long param_5)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  long local_78 [3];
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_05e58e80(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar13 = *(long **)(param_1 + 0x30);
  lVar16 = *(long *)(param_1 + 0x18);
  if (plVar13 == (long *)0x0) {
    local_78[0] = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(local_78[0] + 0x135) & 1) == 0) {
      local_78[0] = FUN_0338f618();
    }
    local_78[1] = 0xffffffffffffffff;
    local_78[2] = param_2;
    uVar5 = FUN_06891638(local_78,0);
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618(lVar7);
    }
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_05e590d8;
        }
        uVar11 = uVar11 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0338f71c(plVar13,lVar7,1);
LAB_05e590d8:
    uVar5 = (*(code *)*puVar6)(plVar13,param_2,puVar6[1]);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    uVar8 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar18 = 0;
    if (uVar8 != 0) {
      iVar18 = (int)uVar5 / (int)uVar8;
    }
    uVar14 = uVar5 - iVar18 * uVar8;
    if (uVar14 < uVar8) {
      piVar17 = (int *)(lVar7 + (ulong)uVar14 * 4 + 0x20);
      uVar8 = *piVar17 - 1;
      if (plVar13 == (long *)0x0) {
        if (lVar16 == 0) goto LAB_05e594d8;
        uVar15 = *(undefined8 *)(lVar16 + 0x18);
        uVar14 = (uint)uVar15;
        if (uVar8 < uVar14) {
          iVar18 = -1;
          do {
            lVar7 = (long)(int)uVar8;
            if (*(uint *)(lVar16 + (long)(int)uVar8 * 0x18 + 0x20) == uVar5) {
              plVar13 = (long *)FUN_05e5b3a4(*(undefined8 *)
                                              (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
              if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_05e594cc;
              if (plVar13 == (long *)0x0) goto LAB_05e594d8;
              uVar11 = (**(code **)(*plVar13 + 0x1b8))
                                 (plVar13,*(undefined8 *)(lVar16 + lVar7 * 0x18 + 0x28),param_2,
                                  *(undefined8 *)(*plVar13 + 0x1c0));
              if ((uVar11 & 1) != 0) {
                if (param_4 != '\x01') goto LAB_05e59454;
                if (uVar8 < *(uint *)(lVar16 + 0x18)) {
                  puVar6 = (undefined8 *)(lVar16 + lVar7 * 0x18 + 0x30);
                  *puVar6 = param_3;
                  if (DAT_08908cd0 == 0) {
                    return 1;
                  }
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  return 1;
                }
                goto LAB_05e594cc;
              }
              uVar15 = *(undefined8 *)(lVar16 + 0x18);
            }
            uVar14 = (uint)uVar15;
            if (uVar14 <= uVar8) goto LAB_05e594cc;
            iVar18 = iVar18 + 1;
            if ((int)uVar14 <= iVar18) goto LAB_05e594d0;
            uVar8 = *(uint *)(lVar16 + lVar7 * 0x18 + 0x24);
          } while (uVar8 < uVar14);
        }
      }
      else {
        if (lVar16 == 0) goto LAB_05e594d8;
        uVar15 = *(undefined8 *)(lVar16 + 0x18);
        uVar14 = (uint)uVar15;
        if (uVar8 < uVar14) {
          iVar18 = 0;
          do {
            lVar7 = (long)(int)uVar8;
            if (*(uint *)(lVar16 + (long)(int)uVar8 * 0x18 + 0x20) == uVar5) {
              lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
              uVar15 = *(undefined8 *)(lVar16 + lVar7 * 0x18 + 0x28);
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_0338f618(lVar9);
              }
              lVar10 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_05e591bc;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_0338f71c(plVar13,lVar9,0);
LAB_05e591bc:
              uVar11 = (*(code *)*puVar6)(plVar13,uVar15,param_2,puVar6[1]);
              if ((uVar11 & 1) != 0) {
                if (param_4 != '\x01') {
LAB_05e59454:
                  if (param_4 == '\x02') {
                    local_78[0] = param_2;
                    uVar15 = thunk_FUN_03398650(*(undefined8 *)
                                                 (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70
                                                 ),local_78);
                    /* WARNING: Subroutine does not return */
                    FUN_06851b14(uVar15,0);
                  }
                  return 0;
                }
                if (uVar8 < *(uint *)(lVar16 + 0x18)) {
                  puVar6 = (undefined8 *)(lVar16 + lVar7 * 0x18 + 0x30);
                  *puVar6 = param_3;
                  if (DAT_08908cd0 == 0) {
                    return 1;
                  }
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  return 1;
                }
                goto LAB_05e594cc;
              }
              uVar15 = *(undefined8 *)(lVar16 + 0x18);
            }
            uVar14 = (uint)uVar15;
            if (uVar14 <= uVar8) goto LAB_05e594cc;
            if ((int)uVar14 <= iVar18) goto LAB_05e594d0;
            uVar8 = *(uint *)(lVar16 + lVar7 * 0x18 + 0x24);
            iVar18 = iVar18 + 1;
          } while (uVar8 < uVar14);
        }
      }
      if (*(int *)(param_1 + 0x28) < 1) {
        uVar8 = *(uint *)(param_1 + 0x20);
        if (uVar8 == uVar14) {
          FUN_05e59910(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b0))
          ;
          lVar7 = *(long *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x20) = uVar14 + 1;
          if (lVar7 == 0) goto LAB_05e594d8;
          uVar14 = *(uint *)(lVar7 + 0x18);
          iVar18 = 0;
          if (uVar14 != 0) {
            iVar18 = (int)uVar5 / (int)uVar14;
          }
          uVar2 = uVar5 - iVar18 * uVar14;
          if (uVar14 <= uVar2) goto LAB_05e594cc;
          lVar16 = *(long *)(param_1 + 0x18);
          piVar17 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
        }
        else {
          lVar16 = *(long *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x20) = uVar8 + 1;
        }
        if (lVar16 == 0) goto LAB_05e594d8;
        if (uVar8 < *(uint *)(lVar16 + 0x18)) {
          lVar7 = (long)(int)uVar8;
          goto System_Array_EmptyInternalEnumerator<SerializedType>__Dispose;
        }
      }
      else {
        uVar8 = *(uint *)(param_1 + 0x24);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        if (uVar8 < uVar14) {
          lVar7 = (long)(int)uVar8;
          *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar16 + lVar7 * 0x18 + 0x24);
System_Array_EmptyInternalEnumerator<SerializedType>__Dispose:
          lVar16 = lVar16 + lVar7 * 0x18;
          *(uint *)(lVar16 + 0x20) = uVar5;
          iVar18 = *piVar17;
          puVar6 = (undefined8 *)(lVar16 + 0x30);
          *puVar6 = param_3;
          *(long *)(lVar16 + 0x28) = param_2;
          *(int *)(lVar16 + 0x24) = iVar18 + -1;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          *piVar17 = uVar8 + 1;
          return 1;
        }
      }
    }
LAB_05e594cc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_05e594d8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
LAB_05e594d0:
  FUN_06851c18(0);
  goto LAB_05e594d8;
}


