/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$.cctor
ENTRY_POINT: 013e0680
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>___cctor
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  uint unaff_w19;
  int iVar13;
  long unaff_x20;
  long *unaff_x23;
  uint uVar14;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar15;
  uint uStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  uVar2 = FUN_01d44634(param_2,*(undefined8 *)(param_1 + 0x168));
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (lVar7 == 0) goto LAB_013e0a8c;
  uVar14 = *(uint *)(lVar7 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar13 = 0;
  if (uVar14 != 0) {
    iVar13 = (int)uVar2 / (int)uVar14;
  }
  uVar6 = uVar2 - iVar13 * uVar14;
  if (uVar6 < uVar14) {
    piVar12 = (int *)(lVar7 + (ulong)uVar6 * 4 + 0x20);
    uVar14 = *piVar12 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x28 == 0) goto LAB_013e0a8c;
      uVar8 = *(undefined8 *)(unaff_x28 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar14 < uVar6) {
        iVar13 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar14;
          if (*(uint *)(unaff_x28 + (long)(int)uVar14 * 0x30 + 0x20) == uVar2) {
            plVar4 = (long *)FUN_012274ec(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(unaff_x28 + 0x18) <= uVar14) goto LAB_013e0a88;
            if (plVar4 == (long *)0x0) goto LAB_013e0a8c;
            lVar5 = unaff_x28 + lVar7 * 0x30;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30),
                                in_stack_00000040,in_stack_00000048,*(undefined8 *)(*plVar4 + 0x1c0)
                               );
            if ((uVar10 & 1) != 0) {
              if ((unaff_w19 & 0xff) == 2) {
                lVar7 = *(long *)(unaff_x27 + 0x20);
                goto LAB_013e0a68;
              }
              if ((unaff_w19 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000030 = unaff_x26[2];
              in_stack_00000028 = unaff_x26[1];
              in_stack_00000020 = *unaff_x26;
              if (uVar14 < *(uint *)(unaff_x28 + 0x18)) goto LAB_013e0a40;
              goto LAB_013e0a88;
            }
            uVar6 = *(uint *)(unaff_x28 + 0x18);
          }
          if (uVar6 <= uVar14) goto LAB_013e0a88;
          uVar14 = *(uint *)(unaff_x28 + lVar7 * 0x30 + 0x24);
          if ((int)uVar6 <= iVar13) {
            FUN_01d69580(0);
          }
          uVar8 = *(undefined8 *)(unaff_x28 + 0x18);
          iVar13 = iVar13 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar14 < uVar6);
      }
    }
    else {
      if (unaff_x28 == 0) goto LAB_013e0a8c;
      uVar8 = *(undefined8 *)(unaff_x28 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar14 < uVar6) {
        iVar13 = 0;
        uStack0000000000000004 = unaff_w19;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar14;
          if (*(uint *)(unaff_x28 + (long)(int)uVar14 * 0x30 + 0x20) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0103c244(lVar5);
            }
            lVar9 = *unaff_x23;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_013e0798;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_0103c348();
LAB_013e0798:
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
                lVar7 = *(long *)(unaff_x27 + 0x20);
LAB_013e0a68:
                in_stack_00000020 = in_stack_00000040;
                in_stack_00000028 = in_stack_00000048;
                uVar8 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70),
                                           &stack0x00000020);
                FUN_01d6947c(uVar8,0);
                return 0;
              }
              if ((uStack0000000000000004 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000030 = unaff_x26[2];
              in_stack_00000028 = unaff_x26[1];
              in_stack_00000020 = *unaff_x26;
              if (uVar14 < *(uint *)(unaff_x28 + 0x18)) {
LAB_013e0a40:
                lVar7 = unaff_x28 + lVar7 * 0x30;
                *(undefined8 *)(lVar7 + 0x48) = in_stack_00000030;
                *(undefined8 *)(lVar7 + 0x40) = in_stack_00000028;
                *(undefined8 *)(lVar7 + 0x38) = in_stack_00000020;
                return 1;
              }
              goto LAB_013e0a88;
            }
            uVar6 = *(uint *)(unaff_x28 + 0x18);
          }
          if (uVar6 <= uVar14) goto LAB_013e0a88;
          uVar14 = *(uint *)(unaff_x28 + lVar7 * 0x30 + 0x24);
          if ((int)uVar6 <= iVar13) {
            FUN_01d69580(0);
          }
          uVar8 = *(undefined8 *)(unaff_x28 + 0x18);
          iVar13 = iVar13 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar14 < uVar6);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar14 = *(uint *)(unaff_x20 + 0x20);
      if (uVar14 == uVar6) {
        FUN_013e0e44(unaff_x20,*(undefined8 *)(*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 400))
        ;
        lVar7 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
        if (lVar7 == 0) goto LAB_013e0a8c;
        uVar6 = *(uint *)(lVar7 + 0x18);
        iVar13 = 0;
        if (uVar6 != 0) {
          iVar13 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar13 * uVar6;
        if (uVar6 <= uVar1) goto LAB_013e0a88;
        unaff_x28 = *(long *)(unaff_x20 + 0x18);
        piVar12 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x28 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
      }
      if (unaff_x28 == 0) {
LAB_013e0a8c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(uint *)(unaff_x28 + 0x18) <= uVar14) goto LAB_013e0a88;
      lVar7 = (long)(int)uVar14;
    }
    else {
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      uVar14 = *(uint *)(unaff_x20 + 0x24);
      if (*(uint *)(unaff_x28 + 0x18) <= uVar14) goto LAB_013e0a88;
      lVar7 = (long)(int)uVar14;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x28 + lVar7 * 0x30 + 0x24);
    }
    lVar7 = unaff_x28 + lVar7 * 0x30;
    *(uint *)(lVar7 + 0x20) = uVar2;
    *(int *)(lVar7 + 0x24) = *piVar12 + -1;
    *(undefined8 *)(lVar7 + 0x30) = in_stack_00000048;
    *(undefined8 *)(lVar7 + 0x28) = in_stack_00000040;
    uVar15 = unaff_x26[1];
    uVar8 = *unaff_x26;
    *(undefined8 *)(lVar7 + 0x48) = unaff_x26[2];
    *(undefined8 *)(lVar7 + 0x40) = uVar15;
    *(undefined8 *)(lVar7 + 0x38) = uVar8;
    *piVar12 = uVar14 + 1;
    return 1;
  }
LAB_013e0a88:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


