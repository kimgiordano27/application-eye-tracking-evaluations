/*
FUNCTION_NAME: FUN_05e860b8
ENTRY_POINT: 05e860b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_05e860b8(long param_1,undefined8 param_2,int param_3,undefined8 param_4,char param_5,
            long param_6)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  long *plVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_70;
  int local_68;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_05e85f68(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
  }
  plVar16 = *(long **)(param_1 + 0x30);
  lVar19 = *(long *)(param_1 + 0x18);
  if (plVar16 == (long *)0x0) {
    iVar9 = (int)((ulong)param_2 >> 0x20);
    uVar6 = (uint)param_2 ^ param_3 >> 4 ^ param_3 << 0x1c ^ iVar9 << 4 ^ iVar9 >> 0x1c;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618(lVar8);
    }
    lVar11 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_05e861ac;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0338f71c(plVar16,lVar8,1);
LAB_05e861ac:
    uVar6 = (*(code *)*puVar7)(plVar16,param_2,param_3,puVar7[1]);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    uVar10 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar9 = 0;
    if (uVar10 != 0) {
      iVar9 = (int)uVar6 / (int)uVar10;
    }
    uVar17 = uVar6 - iVar9 * uVar10;
    if (uVar17 < uVar10) {
      piVar14 = (int *)(lVar8 + (ulong)uVar17 * 4 + 0x20);
      uVar10 = *piVar14 - 1;
      if (plVar16 == (long *)0x0) {
        if (lVar19 == 0) goto LAB_05e865c8;
        uVar18 = *(undefined8 *)(lVar19 + 0x18);
        uVar17 = (uint)uVar18;
        if (uVar10 < uVar17) {
          iVar9 = -1;
          do {
            lVar8 = (long)(int)uVar10;
            if (*(uint *)(lVar19 + lVar8 * 0x20 + 0x20) == uVar6) {
              plVar16 = (long *)FUN_045b2df4(*(undefined8 *)
                                              (*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x18));
              if (*(uint *)(lVar19 + 0x18) <= uVar10) goto LAB_05e865bc;
              if (plVar16 == (long *)0x0) goto LAB_05e865c8;
              lVar11 = lVar19 + lVar8 * 0x20;
              uVar13 = (**(code **)(*plVar16 + 0x1b8))
                                 (plVar16,*(undefined8 *)(lVar11 + 0x28),
                                  *(undefined4 *)(lVar11 + 0x30),param_2,param_3,
                                  *(undefined8 *)(*plVar16 + 0x1c0));
              if ((uVar13 & 1) != 0) {
                if (param_5 != '\x01') goto LAB_05e86548;
                if (uVar10 < *(uint *)(lVar19 + 0x18)) {
                  puVar7 = (undefined8 *)(lVar19 + lVar8 * 0x20 + 0x38);
                  *puVar7 = param_4;
                  if (DAT_08908cd0 == 0) {
                    return 1;
                  }
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  return 1;
                }
                goto LAB_05e865bc;
              }
              uVar18 = *(undefined8 *)(lVar19 + 0x18);
            }
            uVar17 = (uint)uVar18;
            if (uVar17 <= uVar10) goto LAB_05e865bc;
            iVar9 = iVar9 + 1;
            if ((int)uVar17 <= iVar9) goto LAB_05e865c0;
            uVar10 = *(uint *)(lVar19 + lVar8 * 0x20 + 0x24);
          } while (uVar10 < uVar17);
        }
      }
      else {
        if (lVar19 == 0) goto LAB_05e865c8;
        uVar18 = *(undefined8 *)(lVar19 + 0x18);
        uVar17 = (uint)uVar18;
        if (uVar10 < uVar17) {
          iVar9 = 0;
          do {
            lVar11 = (long)(int)uVar10;
            lVar8 = lVar19 + lVar11 * 0x20;
            if (*(uint *)(lVar8 + 0x20) == uVar6) {
              uVar18 = *(undefined8 *)(lVar8 + 0x28);
              uVar2 = *(undefined4 *)(lVar8 + 0x30);
              lVar8 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_0338f618(lVar8);
              }
              lVar12 = *plVar16;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar8) {
                    puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_05e86298;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_0338f71c(plVar16,lVar8,0);
LAB_05e86298:
              uVar13 = (*(code *)*puVar7)(plVar16,uVar18,uVar2,param_2,param_3,puVar7[1]);
              if ((uVar13 & 1) != 0) {
                if (param_5 != '\x01') {
LAB_05e86548:
                  if (param_5 == '\x02') {
                    local_70 = param_2;
                    local_68 = param_3;
                    uVar18 = thunk_FUN_03398650(*(undefined8 *)
                                                 (*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x70
                                                 ),&local_70);
                    /* WARNING: Subroutine does not return */
                    FUN_06851b14(uVar18,0);
                  }
                  return 0;
                }
                if (uVar10 < *(uint *)(lVar19 + 0x18)) {
                  puVar7 = (undefined8 *)(lVar19 + lVar11 * 0x20 + 0x38);
                  *puVar7 = param_4;
                  if (DAT_08908cd0 == 0) {
                    return 1;
                  }
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  return 1;
                }
                goto LAB_05e865bc;
              }
              uVar18 = *(undefined8 *)(lVar19 + 0x18);
            }
            uVar17 = (uint)uVar18;
            if (uVar17 <= uVar10) goto LAB_05e865bc;
            if ((int)uVar17 <= iVar9) goto LAB_05e865c0;
            uVar10 = *(uint *)(lVar19 + lVar11 * 0x20 + 0x24);
            iVar9 = iVar9 + 1;
          } while (uVar10 < uVar17);
        }
      }
      if (*(int *)(param_1 + 0x28) < 1) {
        uVar10 = *(uint *)(param_1 + 0x20);
        if (uVar10 == uVar17) {
          FUN_05e86a0c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x1b0))
          ;
          lVar8 = *(long *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x20) = uVar17 + 1;
          if (lVar8 == 0) goto LAB_05e865c8;
          uVar17 = *(uint *)(lVar8 + 0x18);
          iVar9 = 0;
          if (uVar17 != 0) {
            iVar9 = (int)uVar6 / (int)uVar17;
          }
          uVar3 = uVar6 - iVar9 * uVar17;
          if (uVar17 <= uVar3) goto LAB_05e865bc;
          lVar19 = *(long *)(param_1 + 0x18);
          piVar14 = (int *)(lVar8 + (ulong)uVar3 * 4 + 0x20);
        }
        else {
          lVar19 = *(long *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x20) = uVar10 + 1;
        }
        if (lVar19 == 0) goto LAB_05e865c8;
        if (uVar10 < *(uint *)(lVar19 + 0x18)) {
          lVar8 = (long)(int)uVar10;
          goto 
          System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext;
        }
      }
      else {
        uVar10 = *(uint *)(param_1 + 0x24);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        if (uVar10 < uVar17) {
          lVar8 = (long)(int)uVar10;
          *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar19 + lVar8 * 0x20 + 0x24);
System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext:
          lVar19 = lVar19 + lVar8 * 0x20;
          *(uint *)(lVar19 + 0x20) = uVar6;
          iVar9 = *piVar14;
          puVar7 = (undefined8 *)(lVar19 + 0x38);
          *puVar7 = param_4;
          *(undefined8 *)(lVar19 + 0x28) = param_2;
          *(int *)(lVar19 + 0x30) = param_3;
          *(int *)(lVar19 + 0x24) = iVar9 + -1;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          *piVar14 = uVar10 + 1;
          return 1;
        }
      }
    }
LAB_05e865bc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_05e865c8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
LAB_05e865c0:
  FUN_06851c18(0);
  goto LAB_05e865c8;
}


