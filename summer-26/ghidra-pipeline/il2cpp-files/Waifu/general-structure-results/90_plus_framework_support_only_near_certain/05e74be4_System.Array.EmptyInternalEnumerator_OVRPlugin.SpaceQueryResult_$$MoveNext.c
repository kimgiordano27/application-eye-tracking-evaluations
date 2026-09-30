/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 05e74be4
PROGRAM: Waifu-libil2cpp.so
SCORE: 121
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext(void)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  uint uStack000000000000000c;
  uint in_stack_00000018;
  
  FUN_05e74a50();
  plVar15 = *(long **)(unaff_x21 + 0x30);
  lVar18 = *(long *)(unaff_x21 + 0x18);
  uVar6 = unaff_w20;
  if (plVar15 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618(lVar8);
    }
    lVar11 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_05e74c78;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0338f71c(plVar15,lVar8,1);
LAB_05e74c78:
    uVar6 = (*(code *)*puVar7)(plVar15,unaff_w20,puVar7[1]);
  }
  lVar8 = *(long *)(unaff_x21 + 0x10);
  if (lVar8 != 0) {
    uVar10 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar20 = 0;
    if (uVar10 != 0) {
      iVar20 = (int)uVar6 / (int)uVar10;
    }
    uVar16 = uVar6 - iVar20 * uVar10;
    if (uVar16 < uVar10) {
      piVar19 = (int *)(lVar8 + (ulong)uVar16 * 4 + 0x20);
      uVar10 = *piVar19 - 1;
      if (plVar15 == (long *)0x0) {
        if (lVar18 == 0) goto LAB_05e7508c;
        uVar17 = *(undefined8 *)(lVar18 + 0x18);
        uVar16 = (uint)uVar17;
        if (uVar10 < uVar16) {
          iVar20 = -1;
          do {
            lVar8 = (long)(int)uVar10;
            if (*(uint *)(lVar18 + (long)(int)uVar10 * 0x18 + 0x20) == uVar6) {
              plVar15 = (long *)FUN_05e733ac(*(undefined8 *)
                                              (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18)
                                            );
              if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_05e75080;
              if (plVar15 == (long *)0x0) goto LAB_05e7508c;
              uVar13 = (**(code **)(*plVar15 + 0x1b8))
                                 (plVar15,*(undefined4 *)(lVar18 + lVar8 * 0x18 + 0x28),unaff_w20,
                                  *(undefined8 *)(*plVar15 + 0x1c0));
              if ((uVar13 & 1) != 0) {
                if ((unaff_w23 & 0xff) == 1) {
                  if (uVar10 < *(uint *)(lVar18 + 0x18)) {
                    puVar7 = (undefined8 *)(lVar18 + lVar8 * 0x18 + 0x30);
                    *puVar7 = unaff_x19;
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
                  goto LAB_05e75080;
                }
                if ((unaff_w23 & 0xff) != 2) {
                  return 0;
                }
                lVar18 = *(long *)(unaff_x22 + 0x20);
                puVar9 = (undefined4 *)&stack0x0000001c;
                goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___ctor;
              }
              uVar17 = *(undefined8 *)(lVar18 + 0x18);
            }
            uVar16 = (uint)uVar17;
            if (uVar16 <= uVar10) goto LAB_05e75080;
            iVar20 = iVar20 + 1;
            if ((int)uVar16 <= iVar20)
            goto 
            System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            ;
            uVar10 = *(uint *)(lVar18 + lVar8 * 0x18 + 0x24);
          } while (uVar10 < uVar16);
        }
      }
      else {
        if (lVar18 == 0) goto LAB_05e7508c;
        uVar17 = *(undefined8 *)(lVar18 + 0x18);
        uVar16 = (uint)uVar17;
        if (uVar10 < uVar16) {
          iVar20 = 0;
          uStack000000000000000c = unaff_w23;
          do {
            lVar8 = (long)(int)uVar10;
            if (*(uint *)(lVar18 + (long)(int)uVar10 * 0x18 + 0x20) == uVar6) {
              lVar11 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
              uVar2 = *(undefined4 *)(lVar18 + lVar8 * 0x18 + 0x28);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_0338f618(lVar11);
              }
              lVar12 = *plVar15;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar11) {
                    puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                    goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__get_Current;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_0338f71c(plVar15,lVar11,0);
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__get_Current:
              uVar13 = (*(code *)*puVar7)(plVar15,uVar2,unaff_w20,puVar7[1]);
              if ((uVar13 & 1) != 0) {
                if ((uStack000000000000000c & 0xff) != 1) {
                  if ((uStack000000000000000c & 0xff) != 2) {
                    return 0;
                  }
                  lVar18 = *(long *)(unaff_x22 + 0x20);
                  puVar9 = &stack0x00000018;
                  in_stack_00000018 = unaff_w20;
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___ctor:
                  uVar17 = thunk_FUN_03398650(*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x70),
                                              puVar9);
                    /* WARNING: Subroutine does not return */
                  FUN_06851b14(uVar17,0);
                }
                if (uVar10 < *(uint *)(lVar18 + 0x18)) {
                  puVar7 = (undefined8 *)(lVar18 + lVar8 * 0x18 + 0x30);
                  *puVar7 = unaff_x19;
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
                goto LAB_05e75080;
              }
              uVar17 = *(undefined8 *)(lVar18 + 0x18);
            }
            uVar16 = (uint)uVar17;
            if (uVar16 <= uVar10) goto LAB_05e75080;
            if ((int)uVar16 <= iVar20)
            goto 
            System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            ;
            uVar10 = *(uint *)(lVar18 + lVar8 * 0x18 + 0x24);
            iVar20 = iVar20 + 1;
          } while (uVar10 < uVar16);
        }
      }
      if (*(int *)(unaff_x21 + 0x28) < 1) {
        uVar10 = *(uint *)(unaff_x21 + 0x20);
        if (uVar10 == uVar16) {
          FUN_05e754c4();
          lVar8 = *(long *)(unaff_x21 + 0x10);
          *(uint *)(unaff_x21 + 0x20) = uVar16 + 1;
          if (lVar8 == 0) goto LAB_05e7508c;
          uVar16 = *(uint *)(lVar8 + 0x18);
          iVar20 = 0;
          if (uVar16 != 0) {
            iVar20 = (int)uVar6 / (int)uVar16;
          }
          uVar3 = uVar6 - iVar20 * uVar16;
          if (uVar16 <= uVar3) goto LAB_05e75080;
          lVar18 = *(long *)(unaff_x21 + 0x18);
          piVar19 = (int *)(lVar8 + (ulong)uVar3 * 4 + 0x20);
        }
        else {
          lVar18 = *(long *)(unaff_x21 + 0x18);
          *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
        }
        if (lVar18 == 0) goto LAB_05e7508c;
        if (uVar10 < *(uint *)(lVar18 + 0x18)) {
          lVar8 = (long)(int)uVar10;
          goto LAB_05e74ee0;
        }
      }
      else {
        uVar10 = *(uint *)(unaff_x21 + 0x24);
        *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
        if (uVar10 < uVar16) {
          lVar8 = (long)(int)uVar10;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar18 + lVar8 * 0x18 + 0x24);
LAB_05e74ee0:
          lVar18 = lVar18 + lVar8 * 0x18;
          *(uint *)(lVar18 + 0x20) = uVar6;
          iVar20 = *piVar19;
          puVar7 = (undefined8 *)(lVar18 + 0x30);
          *puVar7 = unaff_x19;
          *(int *)(lVar18 + 0x24) = iVar20 + -1;
          *(uint *)(lVar18 + 0x28) = unaff_w20;
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
          *piVar19 = uVar10 + 1;
          return 1;
        }
      }
    }
LAB_05e75080:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_05e7508c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
  :
  FUN_06851c18(0);
  goto LAB_05e7508c;
}


