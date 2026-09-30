/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<TracerBulletProvider.TracerMesh.Vertex>$$get_Current
ENTRY_POINT: 05e8615c
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
System_Array_EmptyInternalEnumerator<TracerBulletProvider_TracerMesh_Vertex>__get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  int *piVar12;
  ulong uVar13;
  int *in_x10;
  int *piVar14;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  int iVar15;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  uint uVar16;
  undefined8 uVar17;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000020;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_05e861ac;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_0338f71c();
LAB_05e861ac:
  uVar5 = (*(code *)*puVar6)();
  lVar10 = *(long *)(unaff_x22 + 0x10);
  if (lVar10 != 0) {
    uVar9 = *(uint *)(lVar10 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar15 = 0;
    if (uVar9 != 0) {
      iVar15 = (int)uVar5 / (int)uVar9;
    }
    uVar16 = uVar5 - iVar15 * uVar9;
    if (uVar16 < uVar9) {
      piVar12 = (int *)(lVar10 + (ulong)uVar16 * 4 + 0x20);
      uVar9 = *piVar12 - 1;
      if (unaff_x25 == (long *)0x0) {
        if (unaff_x29 == 0) goto LAB_05e865c8;
        uVar17 = *(undefined8 *)(unaff_x29 + 0x18);
        uVar16 = (uint)uVar17;
        if (uVar9 < uVar16) {
          iVar15 = -1;
          do {
            lVar10 = (long)(int)uVar9;
            if (*(uint *)(unaff_x29 + lVar10 * 0x20 + 0x20) == uVar5) {
              plVar7 = (long *)FUN_045b2df4(*(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18))
              ;
              if (*(uint *)(unaff_x29 + 0x18) <= uVar9) goto LAB_05e865bc;
              if (plVar7 == (long *)0x0) goto LAB_05e865c8;
              lVar8 = unaff_x29 + lVar10 * 0x20;
              uVar13 = (**(code **)(*plVar7 + 0x1b8))
                                 (plVar7,*(undefined8 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x30)
                                 );
              if ((uVar13 & 1) != 0) {
                if (in_stack_00000000._4_1_ != '\x01') goto LAB_05e86548;
                if (uVar9 < *(uint *)(unaff_x29 + 0x18)) {
                  puVar6 = (undefined8 *)(unaff_x29 + lVar10 * 0x20 + 0x38);
                  *puVar6 = unaff_x19;
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
                goto LAB_05e865bc;
              }
              uVar17 = *(undefined8 *)(unaff_x29 + 0x18);
            }
            uVar16 = (uint)uVar17;
            if (uVar16 <= uVar9) goto LAB_05e865bc;
            iVar15 = iVar15 + 1;
            if ((int)uVar16 <= iVar15) goto LAB_05e865c0;
            uVar9 = *(uint *)(unaff_x29 + lVar10 * 0x20 + 0x24);
          } while (uVar9 < uVar16);
        }
      }
      else {
        if (unaff_x29 == 0) goto LAB_05e865c8;
        uVar17 = *(undefined8 *)(unaff_x29 + 0x18);
        uVar16 = (uint)uVar17;
        if (uVar9 < uVar16) {
          iVar15 = 0;
          do {
            lVar10 = (long)(int)uVar9;
            if (*(uint *)(unaff_x29 + lVar10 * 0x20 + 0x20) == uVar5) {
              lVar8 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_0338f618(lVar8);
              }
              lVar11 = *unaff_x25;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar8) {
                    puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_05e86298;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar6 = (undefined8 *)FUN_0338f71c();
LAB_05e86298:
              uVar13 = (*(code *)*puVar6)();
              if ((uVar13 & 1) != 0) {
                if (in_stack_00000000._4_1_ != '\x01') {
LAB_05e86548:
                  if (in_stack_00000000._4_1_ == '\x02') {
                    uVar17 = thunk_FUN_03398650(*(undefined8 *)
                                                 (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) +
                                                 0x70),&stack0x00000020);
                    /* WARNING: Subroutine does not return */
                    FUN_06851b14(uVar17,0);
                  }
                  return 0;
                }
                if (uVar9 < *(uint *)(unaff_x29 + 0x18)) {
                  puVar6 = (undefined8 *)(unaff_x29 + lVar10 * 0x20 + 0x38);
                  *puVar6 = unaff_x19;
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
                goto LAB_05e865bc;
              }
              uVar17 = *(undefined8 *)(unaff_x29 + 0x18);
            }
            uVar16 = (uint)uVar17;
            if (uVar16 <= uVar9) goto LAB_05e865bc;
            if ((int)uVar16 <= iVar15) goto LAB_05e865c0;
            uVar9 = *(uint *)(unaff_x29 + lVar10 * 0x20 + 0x24);
            iVar15 = iVar15 + 1;
          } while (uVar9 < uVar16);
        }
      }
      if (*(int *)(unaff_x22 + 0x28) < 1) {
        uVar9 = *(uint *)(unaff_x22 + 0x20);
        if (uVar9 == uVar16) {
          FUN_05e86a0c();
          lVar10 = *(long *)(unaff_x22 + 0x10);
          *(uint *)(unaff_x22 + 0x20) = uVar16 + 1;
          if (lVar10 == 0) goto LAB_05e865c8;
          uVar16 = *(uint *)(lVar10 + 0x18);
          iVar15 = 0;
          if (uVar16 != 0) {
            iVar15 = (int)uVar5 / (int)uVar16;
          }
          uVar2 = uVar5 - iVar15 * uVar16;
          if (uVar16 <= uVar2) goto LAB_05e865bc;
          unaff_x29 = *(long *)(unaff_x22 + 0x18);
          piVar12 = (int *)(lVar10 + (ulong)uVar2 * 4 + 0x20);
        }
        else {
          unaff_x29 = *(long *)(unaff_x22 + 0x18);
          *(uint *)(unaff_x22 + 0x20) = uVar9 + 1;
        }
        if (unaff_x29 == 0) goto LAB_05e865c8;
        if (uVar9 < *(uint *)(unaff_x29 + 0x18)) {
          lVar10 = (long)(int)uVar9;
          goto 
          System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext;
        }
      }
      else {
        uVar9 = *(uint *)(unaff_x22 + 0x24);
        *(int *)(unaff_x22 + 0x28) = *(int *)(unaff_x22 + 0x28) + -1;
        if (uVar9 < uVar16) {
          lVar10 = (long)(int)uVar9;
          *(undefined4 *)(unaff_x22 + 0x24) = *(undefined4 *)(unaff_x29 + lVar10 * 0x20 + 0x24);
System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext:
          lVar10 = unaff_x29 + lVar10 * 0x20;
          *(uint *)(lVar10 + 0x20) = uVar5;
          iVar15 = *piVar12;
          puVar6 = (undefined8 *)(lVar10 + 0x38);
          *puVar6 = unaff_x19;
          *(undefined8 *)(lVar10 + 0x28) = unaff_x21;
          *(undefined4 *)(lVar10 + 0x30) = unaff_w20;
          *(int *)(lVar10 + 0x24) = iVar15 + -1;
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
          *piVar12 = uVar9 + 1;
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


