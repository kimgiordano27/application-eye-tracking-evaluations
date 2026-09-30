/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetPositions
ENTRY_POINT: 06da7550
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetPositions(undefined4 param_1)

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
  undefined4 unaff_w23;
  long lVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined8 uVar9;
  long unaff_x25;
  ulong uVar10;
  long unaff_x26;
  long unaff_x28;
  undefined4 uVar11;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  while (uVar11 = FUN_06da8738(param_1), unaff_x25 != 0) {
    if (*(uint *)(unaff_x25 + 0x18) <= (uint)unaff_x24) goto LAB_06da78ac;
    *(undefined4 *)(unaff_x25 + unaff_x24 * 4 + 0x20) = uVar11;
    lVar3 = *(long *)(unaff_x20 + 0x188);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    lVar3 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
    uVar10 = (long)(int)(uint)unaff_x24 | 1;
    uVar11 = FUN_06da8738(uStack0000000000000038);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_06da78ac;
    unaff_x24 = unaff_x24 + 2;
    *(undefined4 *)(lVar3 + uVar10 * 4 + 0x20) = uVar11;
    if (unaff_x22 <= (long)unaff_x24) {
      lVar3 = *(long *)(unaff_x20 + 0x148);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_06da78ac;
        lVar3 = *(long *)(lVar3 + unaff_x28 * 8 + 0x20);
        if (lVar3 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar7 = *(long *)(unaff_x20 + 0xc0);
          if (lVar7 != 0) {
            iVar1 = *(int *)(lVar3 + unaff_x26 * 4 + 0x20);
            lVar3 = 0;
            iVar5 = (int)unaff_x24;
            in_stack_00000010 = (in_stack_00000008 - in_stack_00000018._4_4_) + in_stack_00000010;
            uVar10 = -((unaff_x24 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                     (unaff_x24 & 0xffffffff) << 2;
            goto LAB_06da764c;
          }
        }
      }
      break;
    }
    uVar9 = *(undefined8 *)(unaff_x20 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_08e8fc58 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_06d9d068(uVar9,unaff_w23,(long)&stack0x00000038 + 4,&stack0x00000038);
    lVar3 = *(long *)(unaff_x20 + 0x188);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    param_1 = uStack000000000000003c;
    unaff_x25 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
  }
  goto LAB_06da78a8;
  while( true ) {
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
    *(undefined4 *)(lVar7 + uVar10 + lVar3 * 4 + 0x20) = uVar11;
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
    *(undefined4 *)(lVar7 + uVar10 + lVar3 * 4 + 0x28) = uVar11;
    lVar7 = *(long *)(unaff_x20 + 0x188);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
    uVar11 = FUN_06da8738(uStack0000000000000038);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= iVar5 + iVar2 + 3U) goto LAB_06da78ac;
    *(undefined4 *)(lVar7 + uVar10 + lVar3 * 4 + 0x2c) = uVar11;
    lVar7 = *(long *)(unaff_x20 + 0xc0);
    lVar3 = lVar3 + 4;
    if (lVar7 == 0) break;
LAB_06da764c:
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
        if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
LAB_06da78ac:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_071245a8(*(undefined8 *)(lVar3 + unaff_x26 * 8 + 0x20),uVar6,0x243 - uVar6,0);
      }
      return;
    }
  }
LAB_06da78a8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


