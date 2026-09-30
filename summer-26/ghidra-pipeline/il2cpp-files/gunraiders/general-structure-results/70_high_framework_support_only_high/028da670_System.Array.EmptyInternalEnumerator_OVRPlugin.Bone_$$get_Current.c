/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$get_Current
ENTRY_POINT: 028da670
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__get_Current(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar11;
  undefined8 *unaff_x25;
  long unaff_x26;
  int *piVar12;
  uint unaff_w29;
  int iVar13;
  undefined8 uVar14;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01c72394(lVar5);
  }
  lVar7 = *unaff_x23;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_028da6e8;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_028da6e8:
  uVar2 = (*(code *)*puVar3)();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) goto LAB_028daabc;
  uVar11 = *(uint *)(lVar5 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar13 = 0;
  if (uVar11 != 0) {
    iVar13 = (int)uVar2 / (int)uVar11;
  }
  uVar6 = uVar2 - iVar13 * uVar11;
  if (uVar11 <= uVar6) {
LAB_028daa8c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  piVar12 = (int *)(lVar5 + (ulong)uVar6 * 4 + 0x20);
  uVar11 = *piVar12 - 1;
  if (unaff_x23 == (long *)0x0) {
    if (unaff_x26 == 0) goto LAB_028daabc;
    uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar6 = (uint)uVar8;
    if (uVar11 < uVar6) {
      iVar13 = 0;
      do {
        uVar6 = (uint)uVar8;
        lVar5 = (long)(int)uVar11;
        if (*(uint *)(unaff_x26 + (long)(int)uVar11 * 0x28 + 0x20) == uVar2) {
          plVar4 = (long *)FUN_022cb868(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_028daa8c;
          if (plVar4 == (long *)0x0) goto LAB_028daabc;
          uVar9 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x28),
                             in_stack_00000028._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
          if ((uVar9 & 1) != 0) {
            if ((unaff_w29 & 0xff) == 2) goto LAB_028daa90;
            if ((unaff_w29 & 0xff) != 1) {
              return 0;
            }
            in_stack_00000020 = unaff_x25[2];
            in_stack_00000018 = unaff_x25[1];
            in_stack_00000010 = *unaff_x25;
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
              lVar5 = unaff_x26 + lVar5 * 0x28;
              *(undefined8 *)(lVar5 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar5 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar5 + 0x30) = in_stack_00000010;
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
                return 1;
              }
            }
            goto LAB_028daa8c;
          }
          uVar6 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar6 <= uVar11) goto LAB_028daa8c;
        uVar11 = *(uint *)(unaff_x26 + lVar5 * 0x28 + 0x24);
        if ((int)uVar6 <= iVar13) {
          FUN_032f2aac(0);
        }
        uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar13 = iVar13 + 1;
        uVar6 = (uint)uVar8;
      } while (uVar11 < uVar6);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_028daabc;
    uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar6 = (uint)uVar8;
    if (uVar11 < uVar6) {
      iVar13 = 0;
      uStack0000000000000004 = unaff_w29;
      do {
        uVar6 = (uint)uVar8;
        if (*(uint *)(unaff_x26 + (long)(int)uVar11 * 0x28 + 0x20) == uVar2) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01c72394(lVar5);
          }
          lVar7 = *unaff_x23;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_028da7d8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498();
LAB_028da7d8:
          uVar9 = (*(code *)*puVar3)();
          if ((uVar9 & 1) != 0) {
            if ((uStack0000000000000004 & 0xff) == 2) {
LAB_028daa90:
              in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
              uVar8 = thunk_FUN_01c49334(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                         &stack0x00000010);
              FUN_032f29a8(uVar8,0);
              return 0;
            }
            if ((uStack0000000000000004 & 0xff) != 1) {
              return 0;
            }
            in_stack_00000020 = unaff_x25[2];
            in_stack_00000018 = unaff_x25[1];
            in_stack_00000010 = *unaff_x25;
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
              lVar5 = unaff_x26 + (long)(int)uVar11 * 0x28;
              *(undefined8 *)(lVar5 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar5 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar5 + 0x30) = in_stack_00000010;
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
                return 1;
              }
            }
            goto LAB_028daa8c;
          }
          uVar6 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar6 <= uVar11) goto LAB_028daa8c;
        uVar11 = *(uint *)(unaff_x26 + (long)(int)uVar11 * 0x28 + 0x24);
        if ((int)uVar6 <= iVar13) {
          FUN_032f2aac(0);
        }
        uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar13 = iVar13 + 1;
        uVar6 = (uint)uVar8;
      } while (uVar11 < uVar6);
    }
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x20 + 0x20);
    if (uVar11 == uVar6) {
      FUN_028dae4c();
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      if (lVar5 == 0) goto LAB_028daabc;
      uVar6 = *(uint *)(lVar5 + 0x18);
      iVar13 = 0;
      if (uVar6 != 0) {
        iVar13 = (int)uVar2 / (int)uVar6;
      }
      uVar1 = uVar2 - iVar13 * uVar6;
      if (uVar6 <= uVar1) goto LAB_028daa8c;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      piVar12 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
    }
    if (unaff_x26 == 0) {
LAB_028daabc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_028daa8c;
    lVar5 = (long)(int)uVar11;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar11 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_028daa8c;
    lVar5 = (long)(int)uVar11;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x24);
  }
  lVar5 = unaff_x26 + lVar5 * 0x28;
  *(uint *)(lVar5 + 0x20) = uVar2;
  *(int *)(lVar5 + 0x24) = *piVar12 + -1;
  *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
  uVar14 = unaff_x25[1];
  uVar8 = *unaff_x25;
  *(undefined8 *)(lVar5 + 0x40) = unaff_x25[2];
  *(undefined8 *)(lVar5 + 0x38) = uVar14;
  *(undefined8 *)(lVar5 + 0x30) = uVar8;
  *piVar12 = uVar11 + 1;
  return 1;
}


