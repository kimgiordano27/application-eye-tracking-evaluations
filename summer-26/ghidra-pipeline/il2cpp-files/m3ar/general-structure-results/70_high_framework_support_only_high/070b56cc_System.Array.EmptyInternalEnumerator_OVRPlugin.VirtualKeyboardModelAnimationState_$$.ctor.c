/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.ctor
ENTRY_POINT: 070b56cc
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor
          (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x25;
  uint unaff_w28;
  int iVar13;
  int *piVar14;
  undefined4 unaff_s8;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  puVar3 = (undefined8 *)FUN_0406ae20(param_1,param_2,1);
  uVar2 = (*(code *)*puVar3)();
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) goto LAB_070b5a64;
  uVar10 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar13 = 0;
  if (uVar10 != 0) {
    iVar13 = (int)uVar2 / (int)uVar10;
  }
  uVar9 = uVar2 - iVar13 * uVar10;
  if (uVar10 <= uVar9) {
LAB_070b5a60:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  piVar14 = (int *)(lVar6 + (ulong)uVar9 * 4 + 0x20);
  uVar10 = *piVar14 - 1;
  uVar12 = (ulong)uVar10;
  if (unaff_x22 == (long *)0x0) {
    if (unaff_x25 == 0) goto LAB_070b5a64;
    uVar11 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar9 = (uint)uVar11;
    if (uVar10 < uVar9) {
      iVar13 = 0;
      do {
        uVar10 = (uint)uVar11;
        uVar9 = (uint)uVar12;
        lVar6 = unaff_x25 + 0x20 + (long)(int)uVar9 * 0x10;
        if (*(uint *)(unaff_x25 + 0x20 + (-(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4)) ==
            uVar2) {
          plVar4 = (long *)FUN_04ec3220(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x25 + 0x18) <= uVar9) goto LAB_070b5a60;
          if (plVar4 == (long *)0x0) goto LAB_070b5a64;
          uVar12 = (**(code **)(*plVar4 + 0x1b8))
                             (plVar4,*(undefined4 *)(lVar6 + 8),uStack000000000000002c,
                              *(undefined8 *)(*plVar4 + 0x1c0));
          if ((uVar12 & 1) != 0) {
            if ((unaff_w28 & 0xff) == 2) {
              puVar3 = (undefined8 *)&stack0x00000028;
              lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              uStack0000000000000028 = uStack000000000000002c;
              goto System_Array_EmptyInternalEnumerator<OVRSpatialAnchor_UnboundAnchor>__MoveNext;
            }
            if ((unaff_w28 & 0xff) != 1) {
              return 0;
            }
            if (uVar9 < *(uint *)(unaff_x25 + 0x18)) {
              *(undefined4 *)(lVar6 + 0xc) = unaff_s8;
              return 1;
            }
            goto LAB_070b5a60;
          }
          uVar10 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar10 <= uVar9) goto LAB_070b5a60;
        uVar1 = *(uint *)(lVar6 + 4);
        uVar12 = (ulong)uVar1;
        if ((int)uVar10 <= iVar13) {
          FUN_07506dec(0);
        }
        uVar11 = *(undefined8 *)(unaff_x25 + 0x18);
        iVar13 = iVar13 + 1;
        uVar9 = (uint)uVar11;
      } while (uVar1 < uVar9);
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_070b5a64;
    uVar11 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar9 = (uint)uVar11;
    if (uVar10 < uVar9) {
      iVar13 = 0;
      uStack000000000000000c = unaff_w28;
      do {
        uVar10 = (uint)uVar11;
        uVar9 = (uint)uVar12;
        lVar6 = unaff_x25 + 0x20 + (long)(int)uVar9 * 0x10;
        if (*(uint *)(unaff_x25 + 0x20 + (-(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4)) ==
            uVar2) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0406aaec(lVar5);
          }
          lVar7 = *unaff_x22;
          uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar12 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_070b57e4;
              }
              uVar12 = uVar12 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)FUN_0406ae20();
LAB_070b57e4:
          uVar12 = (*(code *)*puVar3)();
          if ((uVar12 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
              puVar3 = (undefined8 *)((long)&stack0x00000018 + 4);
              lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              in_stack_00000018._4_4_ = uStack000000000000002c;
System_Array_EmptyInternalEnumerator<OVRSpatialAnchor_UnboundAnchor>__MoveNext:
              uVar11 = thunk_FUN_0406db0c(*(undefined8 *)(lVar6 + 0x70),puVar3);
              FUN_07506ce8(uVar11,0);
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar9 < *(uint *)(unaff_x25 + 0x18)) {
              *(undefined4 *)(lVar6 + 0xc) = unaff_s8;
              return 1;
            }
            goto LAB_070b5a60;
          }
          uVar10 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar10 <= uVar9) goto LAB_070b5a60;
        uVar1 = *(uint *)(lVar6 + 4);
        uVar12 = (ulong)uVar1;
        if ((int)uVar10 <= iVar13) {
          FUN_07506dec(0);
        }
        uVar11 = *(undefined8 *)(unaff_x25 + 0x18);
        iVar13 = iVar13 + 1;
        uVar9 = (uint)uVar11;
      } while (uVar1 < uVar9);
    }
  }
  if (*(int *)(unaff_x19 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x19 + 0x20);
    if (uVar10 == uVar9) {
      FUN_070b5dd0();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = uVar9 + 1;
      if (lVar5 == 0) goto LAB_070b5a64;
      uVar9 = *(uint *)(lVar5 + 0x18);
      iVar13 = 0;
      if (uVar9 != 0) {
        iVar13 = (int)uVar2 / (int)uVar9;
      }
      uVar1 = uVar2 - iVar13 * uVar9;
      if (uVar9 <= uVar1) goto LAB_070b5a60;
      lVar6 = *(long *)(unaff_x19 + 0x18);
      piVar14 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar10 + 1;
    }
    if (lVar6 == 0) {
LAB_070b5a64:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_070b5a60;
    lVar6 = lVar6 + (long)(int)uVar10 * 0x10;
  }
  else {
    uVar10 = *(uint *)(unaff_x19 + 0x24);
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
    if (uVar9 <= uVar10) goto LAB_070b5a60;
    lVar6 = unaff_x25 + (long)(int)uVar10 * 0x10;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
  }
  *(uint *)(lVar6 + 0x20) = uVar2;
  iVar13 = *piVar14;
  *(undefined4 *)(lVar6 + 0x2c) = unaff_s8;
  *(int *)(lVar6 + 0x24) = iVar13 + -1;
  *(undefined4 *)(lVar6 + 0x28) = uStack000000000000002c;
  *piVar14 = uVar10 + 1;
  return 1;
}


