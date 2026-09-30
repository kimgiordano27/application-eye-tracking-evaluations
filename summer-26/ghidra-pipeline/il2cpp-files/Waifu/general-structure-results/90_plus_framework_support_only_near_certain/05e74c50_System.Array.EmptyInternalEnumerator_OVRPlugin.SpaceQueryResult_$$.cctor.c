/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 05e74c50
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor
          (long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  int *in_x10;
  int *piVar13;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  uint uVar14;
  undefined8 uVar15;
  long unaff_x26;
  int *piVar16;
  int iVar17;
  uint uStack000000000000000c;
  undefined4 in_stack_00000018;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(in_x10[4] + 1) * 0x10 + 0x138);
      goto LAB_05e74c78;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar6 = (undefined8 *)FUN_0338f71c();
LAB_05e74c78:
  uVar5 = (*(code *)*puVar6)();
  lVar10 = *(long *)(unaff_x21 + 0x10);
  if (lVar10 != 0) {
    uVar9 = *(uint *)(lVar10 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar17 = 0;
    if (uVar9 != 0) {
      iVar17 = (int)uVar5 / (int)uVar9;
    }
    uVar14 = uVar5 - iVar17 * uVar9;
    if (uVar14 < uVar9) {
      piVar16 = (int *)(lVar10 + (ulong)uVar14 * 4 + 0x20);
      uVar9 = *piVar16 - 1;
      if (unaff_x24 == (long *)0x0) {
        if (unaff_x26 == 0) goto LAB_05e7508c;
        uVar15 = *(undefined8 *)(unaff_x26 + 0x18);
        uVar14 = (uint)uVar15;
        if (uVar9 < uVar14) {
          iVar17 = -1;
          do {
            lVar10 = (long)(int)uVar9;
            if (*(uint *)(unaff_x26 + (long)(int)uVar9 * 0x18 + 0x20) == uVar5) {
              plVar7 = (long *)FUN_05e733ac(*(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18))
              ;
              if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_05e75080;
              if (plVar7 == (long *)0x0) goto LAB_05e7508c;
              uVar12 = (**(code **)(*plVar7 + 0x1b8))
                                 (plVar7,*(undefined4 *)(unaff_x26 + lVar10 * 0x18 + 0x28),unaff_w20
                                  ,*(undefined8 *)(*plVar7 + 0x1c0));
              if ((uVar12 & 1) != 0) {
                if ((unaff_w23 & 0xff) == 1) {
                  if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
                    puVar6 = (undefined8 *)(unaff_x26 + lVar10 * 0x18 + 0x30);
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
                  goto LAB_05e75080;
                }
                if ((unaff_w23 & 0xff) != 2) {
                  return 0;
                }
                lVar10 = *(long *)(unaff_x22 + 0x20);
                puVar8 = (undefined4 *)&stack0x0000001c;
                goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___ctor;
              }
              uVar15 = *(undefined8 *)(unaff_x26 + 0x18);
            }
            uVar14 = (uint)uVar15;
            if (uVar14 <= uVar9) goto LAB_05e75080;
            iVar17 = iVar17 + 1;
            if ((int)uVar14 <= iVar17)
            goto 
            System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            ;
            uVar9 = *(uint *)(unaff_x26 + lVar10 * 0x18 + 0x24);
          } while (uVar9 < uVar14);
        }
      }
      else {
        if (unaff_x26 == 0) goto LAB_05e7508c;
        uVar15 = *(undefined8 *)(unaff_x26 + 0x18);
        uVar14 = (uint)uVar15;
        if (uVar9 < uVar14) {
          iVar17 = 0;
          uStack000000000000000c = unaff_w23;
          do {
            if (*(uint *)(unaff_x26 + (long)(int)uVar9 * 0x18 + 0x20) == uVar5) {
              lVar10 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_0338f618(lVar10);
              }
              lVar11 = *unaff_x24;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar10) {
                    puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__get_Current;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_0338f71c();
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__get_Current:
              uVar12 = (*(code *)*puVar6)();
              if ((uVar12 & 1) != 0) {
                if ((uStack000000000000000c & 0xff) != 1) {
                  if ((uStack000000000000000c & 0xff) != 2) {
                    return 0;
                  }
                  lVar10 = *(long *)(unaff_x22 + 0x20);
                  puVar8 = &stack0x00000018;
                  in_stack_00000018 = unaff_w20;
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___ctor:
                  uVar15 = thunk_FUN_03398650(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70),
                                              puVar8);
                    /* WARNING: Subroutine does not return */
                  FUN_06851b14(uVar15,0);
                }
                if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
                  puVar6 = (undefined8 *)(unaff_x26 + (long)(int)uVar9 * 0x18 + 0x30);
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
                goto LAB_05e75080;
              }
              uVar15 = *(undefined8 *)(unaff_x26 + 0x18);
            }
            uVar14 = (uint)uVar15;
            if (uVar14 <= uVar9) goto LAB_05e75080;
            if ((int)uVar14 <= iVar17)
            goto 
            System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            ;
            uVar9 = *(uint *)(unaff_x26 + (long)(int)uVar9 * 0x18 + 0x24);
            iVar17 = iVar17 + 1;
          } while (uVar9 < uVar14);
        }
      }
      if (*(int *)(unaff_x21 + 0x28) < 1) {
        uVar9 = *(uint *)(unaff_x21 + 0x20);
        if (uVar9 == uVar14) {
          FUN_05e754c4();
          lVar10 = *(long *)(unaff_x21 + 0x10);
          *(uint *)(unaff_x21 + 0x20) = uVar14 + 1;
          if (lVar10 == 0) goto LAB_05e7508c;
          uVar14 = *(uint *)(lVar10 + 0x18);
          iVar17 = 0;
          if (uVar14 != 0) {
            iVar17 = (int)uVar5 / (int)uVar14;
          }
          uVar2 = uVar5 - iVar17 * uVar14;
          if (uVar14 <= uVar2) goto LAB_05e75080;
          unaff_x26 = *(long *)(unaff_x21 + 0x18);
          piVar16 = (int *)(lVar10 + (ulong)uVar2 * 4 + 0x20);
        }
        else {
          unaff_x26 = *(long *)(unaff_x21 + 0x18);
          *(uint *)(unaff_x21 + 0x20) = uVar9 + 1;
        }
        if (unaff_x26 == 0) goto LAB_05e7508c;
        if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
          lVar10 = (long)(int)uVar9;
          goto LAB_05e74ee0;
        }
      }
      else {
        uVar9 = *(uint *)(unaff_x21 + 0x24);
        *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
        if (uVar9 < uVar14) {
          lVar10 = (long)(int)uVar9;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar10 * 0x18 + 0x24);
LAB_05e74ee0:
          lVar10 = unaff_x26 + lVar10 * 0x18;
          *(uint *)(lVar10 + 0x20) = uVar5;
          iVar17 = *piVar16;
          puVar6 = (undefined8 *)(lVar10 + 0x30);
          *puVar6 = unaff_x19;
          *(int *)(lVar10 + 0x24) = iVar17 + -1;
          *(undefined4 *)(lVar10 + 0x28) = unaff_w20;
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
          *piVar16 = uVar9 + 1;
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


