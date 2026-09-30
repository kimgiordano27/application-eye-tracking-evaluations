/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 070b5660
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined4 unaff_w23;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  uint unaff_w28;
  int iVar16;
  int *piVar17;
  undefined4 unaff_s8;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  FUN_070b553c(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10));
  plVar11 = *(long **)(unaff_x19 + 0x30);
  lVar15 = *(long *)(unaff_x19 + 0x18);
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (plVar11 == (long *)0x0) {
    uVar4 = FUN_07501be0((long)&stack0x00000028 + 4,*(undefined8 *)(lVar6 + 400));
  }
  else {
    lVar6 = *(long *)(lVar6 + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec(lVar6);
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto FUN_070b56f8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar11,lVar6,1);
FUN_070b56f8:
    uVar4 = (*(code *)*puVar5)(plVar11,unaff_w23,puVar5[1]);
  }
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) goto LAB_070b5a64;
  uVar13 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar16 = 0;
  if (uVar13 != 0) {
    iVar16 = (int)uVar4 / (int)uVar13;
  }
  uVar12 = uVar4 - iVar16 * uVar13;
  if (uVar13 <= uVar12) {
LAB_070b5a60:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  piVar17 = (int *)(lVar6 + (ulong)uVar12 * 4 + 0x20);
  uVar13 = *piVar17 - 1;
  uVar9 = (ulong)uVar13;
  if (plVar11 == (long *)0x0) {
    if (lVar15 == 0) goto LAB_070b5a64;
    uVar14 = *(undefined8 *)(lVar15 + 0x18);
    uVar12 = (uint)uVar14;
    if (uVar13 < uVar12) {
      iVar16 = 0;
      do {
        uVar13 = (uint)uVar14;
        uVar12 = (uint)uVar9;
        lVar6 = lVar15 + 0x20 + (long)(int)uVar12 * 0x10;
        if (*(uint *)(lVar15 + 0x20 + (-(uVar9 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4)) == uVar4
           ) {
          plVar11 = (long *)FUN_04ec3220(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_070b5a60;
          if (plVar11 == (long *)0x0) goto LAB_070b5a64;
          uVar9 = (**(code **)(*plVar11 + 0x1b8))
                            (plVar11,*(undefined4 *)(lVar6 + 8),uStack000000000000002c,
                             *(undefined8 *)(*plVar11 + 0x1c0));
          if ((uVar9 & 1) != 0) {
            if ((unaff_w28 & 0xff) == 2) {
              puVar5 = (undefined8 *)&stack0x00000028;
              lVar15 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              uStack0000000000000028 = uStack000000000000002c;
              goto System_Array_EmptyInternalEnumerator<OVRSpatialAnchor_UnboundAnchor>__MoveNext;
            }
            if ((unaff_w28 & 0xff) != 1) {
              return 0;
            }
            if (uVar12 < *(uint *)(lVar15 + 0x18)) {
              *(undefined4 *)(lVar6 + 0xc) = unaff_s8;
              return 1;
            }
            goto LAB_070b5a60;
          }
          uVar13 = *(uint *)(lVar15 + 0x18);
        }
        if (uVar13 <= uVar12) goto LAB_070b5a60;
        uVar2 = *(uint *)(lVar6 + 4);
        uVar9 = (ulong)uVar2;
        if ((int)uVar13 <= iVar16) {
          FUN_07506dec(0);
        }
        uVar14 = *(undefined8 *)(lVar15 + 0x18);
        iVar16 = iVar16 + 1;
        uVar12 = (uint)uVar14;
      } while (uVar2 < uVar12);
    }
  }
  else {
    if (lVar15 == 0) goto LAB_070b5a64;
    uVar14 = *(undefined8 *)(lVar15 + 0x18);
    uVar12 = (uint)uVar14;
    if (uVar13 < uVar12) {
      iVar16 = 0;
      uStack000000000000000c = unaff_w28;
      do {
        uVar3 = uStack000000000000002c;
        uVar13 = (uint)uVar14;
        uVar12 = (uint)uVar9;
        lVar6 = lVar15 + 0x20 + (long)(int)uVar12 * 0x10;
        if (*(uint *)(lVar15 + 0x20 + (-(uVar9 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4)) == uVar4
           ) {
          uVar1 = *(undefined4 *)(lVar6 + 8);
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0406aaec(lVar7);
          }
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_070b57e4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_0406ae20(plVar11,lVar7,0);
LAB_070b57e4:
          uVar9 = (*(code *)*puVar5)(plVar11,uVar1,uVar3,puVar5[1]);
          if ((uVar9 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
              puVar5 = (undefined8 *)((long)&stack0x00000018 + 4);
              lVar15 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              in_stack_00000018._4_4_ = uStack000000000000002c;
System_Array_EmptyInternalEnumerator<OVRSpatialAnchor_UnboundAnchor>__MoveNext:
              uVar14 = thunk_FUN_0406db0c(*(undefined8 *)(lVar15 + 0x70),puVar5);
              FUN_07506ce8(uVar14,0);
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar12 < *(uint *)(lVar15 + 0x18)) {
              *(undefined4 *)(lVar6 + 0xc) = unaff_s8;
              return 1;
            }
            goto LAB_070b5a60;
          }
          uVar13 = *(uint *)(lVar15 + 0x18);
        }
        if (uVar13 <= uVar12) goto LAB_070b5a60;
        uVar2 = *(uint *)(lVar6 + 4);
        uVar9 = (ulong)uVar2;
        if ((int)uVar13 <= iVar16) {
          FUN_07506dec(0);
        }
        uVar14 = *(undefined8 *)(lVar15 + 0x18);
        iVar16 = iVar16 + 1;
        uVar12 = (uint)uVar14;
      } while (uVar2 < uVar12);
    }
  }
  if (*(int *)(unaff_x19 + 0x28) < 1) {
    uVar13 = *(uint *)(unaff_x19 + 0x20);
    if (uVar13 == uVar12) {
      FUN_070b5dd0();
      lVar6 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = uVar12 + 1;
      if (lVar6 == 0) goto LAB_070b5a64;
      uVar12 = *(uint *)(lVar6 + 0x18);
      iVar16 = 0;
      if (uVar12 != 0) {
        iVar16 = (int)uVar4 / (int)uVar12;
      }
      uVar2 = uVar4 - iVar16 * uVar12;
      if (uVar12 <= uVar2) goto LAB_070b5a60;
      lVar15 = *(long *)(unaff_x19 + 0x18);
      piVar17 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar15 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar13 + 1;
    }
    if (lVar15 == 0) {
LAB_070b5a64:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_070b5a60;
    lVar15 = lVar15 + (long)(int)uVar13 * 0x10;
  }
  else {
    uVar13 = *(uint *)(unaff_x19 + 0x24);
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
    if (uVar12 <= uVar13) goto LAB_070b5a60;
    lVar15 = lVar15 + (long)(int)uVar13 * 0x10;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar15 + 0x24);
  }
  *(uint *)(lVar15 + 0x20) = uVar4;
  iVar16 = *piVar17;
  *(undefined4 *)(lVar15 + 0x2c) = unaff_s8;
  *(int *)(lVar15 + 0x24) = iVar16 + -1;
  *(undefined4 *)(lVar15 + 0x28) = uStack000000000000002c;
  *piVar17 = uVar13 + 1;
  return 1;
}


