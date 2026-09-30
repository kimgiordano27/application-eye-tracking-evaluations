/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 028da6b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
          (void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
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
  
  puVar3 = (undefined8 *)FUN_01c72498();
  uVar2 = (*(code *)*puVar3)();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_028daabc;
  uVar11 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar13 = 0;
  if (uVar11 != 0) {
    iVar13 = (int)uVar2 / (int)uVar11;
  }
  uVar5 = uVar2 - iVar13 * uVar11;
  if (uVar11 <= uVar5) {
LAB_028daa8c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  piVar12 = (int *)(lVar6 + (ulong)uVar5 * 4 + 0x20);
  uVar11 = *piVar12 - 1;
  if (unaff_x23 == (long *)0x0) {
    if (unaff_x26 == 0) goto LAB_028daabc;
    uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar7;
    if (uVar11 < uVar5) {
      iVar13 = 0;
      do {
        uVar5 = (uint)uVar7;
        lVar6 = (long)(int)uVar11;
        if (*(uint *)(unaff_x26 + (long)(int)uVar11 * 0x28 + 0x20) == uVar2) {
          plVar4 = (long *)FUN_022cb868(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_028daa8c;
          if (plVar4 == (long *)0x0) goto LAB_028daabc;
          uVar9 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined4 *)(unaff_x26 + lVar6 * 0x28 + 0x28),
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
              lVar6 = unaff_x26 + lVar6 * 0x28;
              *(undefined8 *)(lVar6 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar6 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar6 + 0x30) = in_stack_00000010;
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
                return 1;
              }
            }
            goto LAB_028daa8c;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar11) goto LAB_028daa8c;
        uVar11 = *(uint *)(unaff_x26 + lVar6 * 0x28 + 0x24);
        if ((int)uVar5 <= iVar13) {
          FUN_032f2aac(0);
        }
        uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar13 = iVar13 + 1;
        uVar5 = (uint)uVar7;
      } while (uVar11 < uVar5);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_028daabc;
    uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar7;
    if (uVar11 < uVar5) {
      iVar13 = 0;
      uStack0000000000000004 = unaff_w29;
      do {
        uVar5 = (uint)uVar7;
        if (*(uint *)(unaff_x26 + (long)(int)uVar11 * 0x28 + 0x20) == uVar2) {
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394(lVar6);
          }
          lVar8 = *unaff_x23;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
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
              uVar7 = thunk_FUN_01c49334(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                         &stack0x00000010);
              FUN_032f29a8(uVar7,0);
              return 0;
            }
            if ((uStack0000000000000004 & 0xff) != 1) {
              return 0;
            }
            in_stack_00000020 = unaff_x25[2];
            in_stack_00000018 = unaff_x25[1];
            in_stack_00000010 = *unaff_x25;
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
              lVar6 = unaff_x26 + (long)(int)uVar11 * 0x28;
              *(undefined8 *)(lVar6 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar6 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar6 + 0x30) = in_stack_00000010;
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
                return 1;
              }
            }
            goto LAB_028daa8c;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar11) goto LAB_028daa8c;
        uVar11 = *(uint *)(unaff_x26 + (long)(int)uVar11 * 0x28 + 0x24);
        if ((int)uVar5 <= iVar13) {
          FUN_032f2aac(0);
        }
        uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar13 = iVar13 + 1;
        uVar5 = (uint)uVar7;
      } while (uVar11 < uVar5);
    }
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x20 + 0x20);
    if (uVar11 == uVar5) {
      FUN_028dae4c();
      lVar6 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      if (lVar6 == 0) goto LAB_028daabc;
      uVar5 = *(uint *)(lVar6 + 0x18);
      iVar13 = 0;
      if (uVar5 != 0) {
        iVar13 = (int)uVar2 / (int)uVar5;
      }
      uVar1 = uVar2 - iVar13 * uVar5;
      if (uVar5 <= uVar1) goto LAB_028daa8c;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      piVar12 = (int *)(lVar6 + (ulong)uVar1 * 4 + 0x20);
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
    lVar6 = (long)(int)uVar11;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar11 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_028daa8c;
    lVar6 = (long)(int)uVar11;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x28 + 0x24);
  }
  lVar6 = unaff_x26 + lVar6 * 0x28;
  *(uint *)(lVar6 + 0x20) = uVar2;
  *(int *)(lVar6 + 0x24) = *piVar12 + -1;
  *(undefined4 *)(lVar6 + 0x28) = in_stack_00000028._4_4_;
  uVar14 = unaff_x25[1];
  uVar7 = *unaff_x25;
  *(undefined8 *)(lVar6 + 0x40) = unaff_x25[2];
  *(undefined8 *)(lVar6 + 0x38) = uVar14;
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  *piVar12 = uVar11 + 1;
  return 1;
}


