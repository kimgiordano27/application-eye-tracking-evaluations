/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 06da73f8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long unaff_x22;
  ulong unaff_x23;
  long lVar7;
  ulong uVar8;
  undefined4 unaff_w24;
  long unaff_x25;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x26;
  long unaff_x28;
  int unaff_w29;
  undefined4 uVar11;
  undefined4 uVar12;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  while (uVar11 = FUN_06da8738(param_1), unaff_x25 != 0) {
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x23) goto LAB_06da78ac;
    *(undefined4 *)(unaff_x25 + unaff_x23 * 4 + 0x20) = uVar11;
    lVar3 = *(long *)(unaff_x20 + 0x188);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    lVar3 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
    uVar9 = (long)(int)unaff_x23 | 1;
    uVar11 = FUN_06da8738(uStack0000000000000038);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= (uint)uVar9) goto LAB_06da78ac;
    unaff_x23 = unaff_x23 + 2;
    *(undefined4 *)(lVar3 + uVar9 * 4 + 0x20) = uVar11;
    if ((unaff_x28 <= (long)unaff_x23) || (unaff_x22 <= (long)unaff_x23)) {
      lVar3 = *(long *)(unaff_x20 + 0x118);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_06da78ac;
        lVar3 = *(long *)(lVar3 + in_stack_00000028 * 8 + 0x20);
        if (lVar3 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar3 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
          if (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_06da78ac;
            if (unaff_w29 <= (int)unaff_x23) goto LAB_06da75d8;
            uVar11 = *(undefined4 *)(lVar3 + 0x28);
            unaff_x23 = (ulong)(int)unaff_x23;
            goto LAB_06da74f0;
          }
        }
      }
      break;
    }
    uVar10 = *(undefined8 *)(unaff_x20 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_08e8fc58 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_06d9d068(uVar10,unaff_w24,(long)&stack0x00000038 + 4,&stack0x00000038);
    lVar3 = *(long *)(unaff_x20 + 0x188);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    param_1 = uStack000000000000003c;
    unaff_x25 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
  }
  goto LAB_06da78a8;
  while( true ) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    lVar3 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
    uVar12 = FUN_06da8738(uStack000000000000003c);
    if (lVar3 == 0) goto LAB_06da78a8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x23) goto LAB_06da78ac;
    *(undefined4 *)(lVar3 + unaff_x23 * 4 + 0x20) = uVar12;
    lVar3 = *(long *)(unaff_x20 + 0x188);
    if (lVar3 == 0) goto LAB_06da78a8;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    lVar3 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
    uVar9 = (long)(int)(uint)unaff_x23 | 1;
    uVar12 = FUN_06da8738(uStack0000000000000038);
    if (lVar3 == 0) goto LAB_06da78a8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)uVar9) goto LAB_06da78ac;
    unaff_x23 = unaff_x23 + 2;
    *(undefined4 *)(lVar3 + uVar9 * 4 + 0x20) = uVar12;
    if ((long)unaff_w29 <= (long)unaff_x23) break;
LAB_06da74f0:
    uVar10 = *(undefined8 *)(unaff_x20 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_08e8fc58 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_06d9d068(uVar10,uVar11,(long)&stack0x00000038 + 4,&stack0x00000038);
    lVar3 = *(long *)(unaff_x20 + 0x188);
    if (lVar3 == 0) goto LAB_06da78a8;
  }
LAB_06da75d8:
  lVar3 = *(long *)(unaff_x20 + 0x148);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) {
LAB_06da78ac:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar3 = *(long *)(lVar3 + in_stack_00000028 * 8 + 0x20);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
      lVar7 = *(long *)(unaff_x20 + 0xc0);
      if (lVar7 != 0) {
        iVar1 = *(int *)(lVar3 + unaff_x26 * 4 + 0x20);
        lVar3 = 0;
        iVar5 = (int)unaff_x23;
        in_stack_00000010 = (in_stack_00000008 - in_stack_00000018._4_4_) + in_stack_00000010;
        uVar9 = -((unaff_x23 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                (unaff_x23 & 0xffffffff) << 2;
        do {
          lVar4 = *(long *)(lVar7 + 0x28);
          iVar2 = (int)lVar3;
          if ((0x23c < iVar5 + lVar3) || (in_stack_00000010 <= lVar4)) {
            if (in_stack_00000010 < lVar4) {
              FUN_06d9c2d8(lVar7,(int)lVar4 - (int)in_stack_00000010);
              lVar7 = *(long *)(unaff_x20 + 0xc0);
              if (lVar7 == 0) break;
              uVar6 = (iVar5 + iVar2) - 4;
              uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
            }
            else {
              uVar6 = iVar2 + iVar5;
            }
            if (*(long *)(lVar7 + 0x28) < in_stack_00000010) {
              FUN_06d9c0ec(lVar7,(int)in_stack_00000010 - (int)*(long *)(lVar7 + 0x28));
            }
            if ((int)uVar6 < 0x240) {
              lVar3 = *(long *)(unaff_x20 + 0x188);
              if (lVar3 == 0) break;
              if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
              FUN_071245a8(*(undefined8 *)(lVar3 + unaff_x26 * 8 + 0x20),uVar6,0x243 - uVar6,0);
            }
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_08e8fc58 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_06d9d384(lVar7,iVar1 + 0x20,(long)&stack0x00000038 + 4,&stack0x00000038,
                       (long)&stack0x00000030 + 4,&stack0x00000030);
          lVar7 = *(long *)(unaff_x20 + 0x188);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
          uVar11 = FUN_06da8738(uStack0000000000000034);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= (uint)(iVar5 + iVar2)) goto LAB_06da78ac;
          *(undefined4 *)(lVar7 + uVar9 + lVar3 * 4 + 0x20) = uVar11;
          lVar7 = *(long *)(unaff_x20 + 0x188);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
          uVar8 = (long)(iVar5 + iVar2) | 1;
          uVar11 = FUN_06da8738(uStack0000000000000030);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= (uint)uVar8) goto LAB_06da78ac;
          *(undefined4 *)(lVar7 + uVar8 * 4 + 0x20) = uVar11;
          lVar7 = *(long *)(unaff_x20 + 0x188);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
          uVar11 = FUN_06da8738(uStack000000000000003c);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= iVar5 + iVar2 + 2U) goto LAB_06da78ac;
          *(undefined4 *)(lVar7 + uVar9 + lVar3 * 4 + 0x28) = uVar11;
          lVar7 = *(long *)(unaff_x20 + 0x188);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
          uVar11 = FUN_06da8738(uStack0000000000000038);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= iVar5 + iVar2 + 3U) goto LAB_06da78ac;
          *(undefined4 *)(lVar7 + uVar9 + lVar3 * 4 + 0x2c) = uVar11;
          lVar7 = *(long *)(unaff_x20 + 0xc0);
          lVar3 = lVar3 + 4;
        } while (lVar7 != 0);
      }
    }
  }
LAB_06da78a8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


