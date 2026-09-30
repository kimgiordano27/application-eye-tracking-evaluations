/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<TracerBulletProvider.TracerMesh.Vertex>$$.cctor
ENTRY_POINT: 05e861c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<TracerBulletProvider_TracerMesh_Vertex>___cctor(uint param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  int iVar14;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  uint uVar15;
  undefined8 uVar16;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000020;
  
  lVar9 = *(long *)(unaff_x22 + 0x10);
  if (lVar9 != 0) {
    uVar8 = *(uint *)(lVar9 + 0x18);
    param_1 = param_1 & 0x7fffffff;
    iVar14 = 0;
    if (uVar8 != 0) {
      iVar14 = (int)param_1 / (int)uVar8;
    }
    uVar15 = param_1 - iVar14 * uVar8;
    if (uVar15 < uVar8) {
      piVar11 = (int *)(lVar9 + (ulong)uVar15 * 4 + 0x20);
      uVar8 = *piVar11 - 1;
      if (unaff_x25 == (long *)0x0) {
        if (unaff_x29 == 0) goto LAB_05e865c8;
        uVar16 = *(undefined8 *)(unaff_x29 + 0x18);
        uVar15 = (uint)uVar16;
        if (uVar8 < uVar15) {
          iVar14 = -1;
          do {
            lVar9 = (long)(int)uVar8;
            if (*(uint *)(unaff_x29 + lVar9 * 0x20 + 0x20) == param_1) {
              plVar6 = (long *)FUN_045b2df4(*(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18))
              ;
              if (*(uint *)(unaff_x29 + 0x18) <= uVar8) goto LAB_05e865bc;
              if (plVar6 == (long *)0x0) goto LAB_05e865c8;
              lVar7 = unaff_x29 + lVar9 * 0x20;
              uVar12 = (**(code **)(*plVar6 + 0x1b8))
                                 (plVar6,*(undefined8 *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x30)
                                 );
              if ((uVar12 & 1) != 0) {
                if (in_stack_00000000._4_1_ != '\x01') goto LAB_05e86548;
                if (uVar8 < *(uint *)(unaff_x29 + 0x18)) {
                  puVar5 = (undefined8 *)(unaff_x29 + lVar9 * 0x20 + 0x38);
                  *puVar5 = unaff_x19;
                  if (DAT_08908cd0 == 0) {
                    return 1;
                  }
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  return 1;
                }
                goto LAB_05e865bc;
              }
              uVar16 = *(undefined8 *)(unaff_x29 + 0x18);
            }
            uVar15 = (uint)uVar16;
            if (uVar15 <= uVar8) goto LAB_05e865bc;
            iVar14 = iVar14 + 1;
            if ((int)uVar15 <= iVar14) goto LAB_05e865c0;
            uVar8 = *(uint *)(unaff_x29 + lVar9 * 0x20 + 0x24);
          } while (uVar8 < uVar15);
        }
      }
      else {
        if (unaff_x29 == 0) goto LAB_05e865c8;
        uVar16 = *(undefined8 *)(unaff_x29 + 0x18);
        uVar15 = (uint)uVar16;
        if (uVar8 < uVar15) {
          iVar14 = 0;
          do {
            lVar9 = (long)(int)uVar8;
            if (*(uint *)(unaff_x29 + lVar9 * 0x20 + 0x20) == param_1) {
              lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_0338f618(lVar7);
              }
              lVar10 = *unaff_x25;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_05e86298;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_0338f71c();
LAB_05e86298:
              uVar12 = (*(code *)*puVar5)();
              if ((uVar12 & 1) != 0) {
                if (in_stack_00000000._4_1_ != '\x01') {
LAB_05e86548:
                  if (in_stack_00000000._4_1_ == '\x02') {
                    uVar16 = thunk_FUN_03398650(*(undefined8 *)
                                                 (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) +
                                                 0x70),&stack0x00000020);
                    /* WARNING: Subroutine does not return */
                    FUN_06851b14(uVar16,0);
                  }
                  return 0;
                }
                if (uVar8 < *(uint *)(unaff_x29 + 0x18)) {
                  puVar5 = (undefined8 *)(unaff_x29 + lVar9 * 0x20 + 0x38);
                  *puVar5 = unaff_x19;
                  if (DAT_08908cd0 == 0) {
                    return 1;
                  }
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  return 1;
                }
                goto LAB_05e865bc;
              }
              uVar16 = *(undefined8 *)(unaff_x29 + 0x18);
            }
            uVar15 = (uint)uVar16;
            if (uVar15 <= uVar8) goto LAB_05e865bc;
            if ((int)uVar15 <= iVar14) goto LAB_05e865c0;
            uVar8 = *(uint *)(unaff_x29 + lVar9 * 0x20 + 0x24);
            iVar14 = iVar14 + 1;
          } while (uVar8 < uVar15);
        }
      }
      if (*(int *)(unaff_x22 + 0x28) < 1) {
        uVar8 = *(uint *)(unaff_x22 + 0x20);
        if (uVar8 == uVar15) {
          FUN_05e86a0c();
          lVar9 = *(long *)(unaff_x22 + 0x10);
          *(uint *)(unaff_x22 + 0x20) = uVar15 + 1;
          if (lVar9 == 0) goto LAB_05e865c8;
          uVar15 = *(uint *)(lVar9 + 0x18);
          iVar14 = 0;
          if (uVar15 != 0) {
            iVar14 = (int)param_1 / (int)uVar15;
          }
          uVar2 = param_1 - iVar14 * uVar15;
          if (uVar15 <= uVar2) goto LAB_05e865bc;
          unaff_x29 = *(long *)(unaff_x22 + 0x18);
          piVar11 = (int *)(lVar9 + (ulong)uVar2 * 4 + 0x20);
        }
        else {
          unaff_x29 = *(long *)(unaff_x22 + 0x18);
          *(uint *)(unaff_x22 + 0x20) = uVar8 + 1;
        }
        if (unaff_x29 == 0) goto LAB_05e865c8;
        if (uVar8 < *(uint *)(unaff_x29 + 0x18)) {
          lVar9 = (long)(int)uVar8;
          goto 
          System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext;
        }
      }
      else {
        uVar8 = *(uint *)(unaff_x22 + 0x24);
        *(int *)(unaff_x22 + 0x28) = *(int *)(unaff_x22 + 0x28) + -1;
        if (uVar8 < uVar15) {
          lVar9 = (long)(int)uVar8;
          *(undefined4 *)(unaff_x22 + 0x24) = *(undefined4 *)(unaff_x29 + lVar9 * 0x20 + 0x24);
System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext:
          lVar9 = unaff_x29 + lVar9 * 0x20;
          *(uint *)(lVar9 + 0x20) = param_1;
          iVar14 = *piVar11;
          puVar5 = (undefined8 *)(lVar9 + 0x38);
          *puVar5 = unaff_x19;
          *(undefined8 *)(lVar9 + 0x28) = unaff_x21;
          *(undefined4 *)(lVar9 + 0x30) = unaff_w20;
          *(int *)(lVar9 + 0x24) = iVar14 + -1;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          *piVar11 = uVar8 + 1;
          return 1;
        }
      }
    }
LAB_05e865bc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  goto LAB_05e865c8;
LAB_05e865c0:
  FUN_06851c18(0);
LAB_05e865c8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


