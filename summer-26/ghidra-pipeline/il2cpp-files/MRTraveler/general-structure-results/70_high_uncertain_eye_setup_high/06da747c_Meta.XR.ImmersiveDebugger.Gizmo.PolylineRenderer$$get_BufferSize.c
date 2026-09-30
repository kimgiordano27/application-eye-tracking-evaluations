/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$get_BufferSize
ENTRY_POINT: 06da747c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__get_BufferSize(void)

{
  int iVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  long lVar3;
  int iVar4;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar5;
  long unaff_x22;
  int iVar6;
  ulong unaff_x23;
  long lVar7;
  ulong uVar8;
  undefined4 unaff_w24;
  undefined8 uVar9;
  ulong uVar10;
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
  
  while ((iVar6 = (int)unaff_x23, in_NG != in_OV && ((long)unaff_x23 < unaff_x22))) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_08e8fc58 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_06d9d068(uVar9,unaff_w24,(long)&stack0x00000038 + 4,&stack0x00000038);
    lVar2 = *(long *)(unaff_x20 + 0x188);
    if (lVar2 == 0) goto LAB_06da78a8;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    lVar2 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
    uVar12 = FUN_06da8738(uStack000000000000003c);
    if (lVar2 == 0) goto LAB_06da78a8;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_06da78ac;
    *(undefined4 *)(lVar2 + unaff_x23 * 4 + 0x20) = uVar12;
    lVar2 = *(long *)(unaff_x20 + 0x188);
    if (lVar2 == 0) goto LAB_06da78a8;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_06da78ac;
    lVar2 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
    uVar12 = FUN_06da8738(uStack0000000000000038);
    if (lVar2 == 0) goto LAB_06da78a8;
    if (*(uint *)(lVar2 + 0x18) <= (uint)((long)iVar6 | 1U)) goto LAB_06da78ac;
    unaff_x23 = unaff_x23 + 2;
    in_OV = SBORROW8(unaff_x23,unaff_x28);
    in_NG = (long)(unaff_x23 - unaff_x28) < 0;
    *(undefined4 *)(lVar2 + ((long)iVar6 | 1U) * 4 + 0x20) = uVar12;
  }
  lVar2 = *(long *)(unaff_x20 + 0x118);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= unaff_w21) {
LAB_06da78ac:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar2 = *(long *)(lVar2 + in_stack_00000028 * 8 + 0x20);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_06da78ac;
      lVar2 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_06da78ac;
        if (iVar6 < unaff_w29) {
          uVar12 = *(undefined4 *)(lVar2 + 0x28);
          unaff_x23 = (ulong)iVar6;
          do {
            uVar9 = *(undefined8 *)(unaff_x20 + 0xc0);
            if (*(int *)(*(long *)PTR_DAT_08e8fc58 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            FUN_06d9d068(uVar9,uVar12,(long)&stack0x00000038 + 4,&stack0x00000038);
            lVar2 = *(long *)(unaff_x20 + 0x188);
            if (lVar2 == 0) goto LAB_06da78a8;
            if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_06da78ac;
            lVar2 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
            uVar11 = FUN_06da8738(uStack000000000000003c);
            if (lVar2 == 0) goto LAB_06da78a8;
            if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x23) goto LAB_06da78ac;
            *(undefined4 *)(lVar2 + unaff_x23 * 4 + 0x20) = uVar11;
            lVar2 = *(long *)(unaff_x20 + 0x188);
            if (lVar2 == 0) goto LAB_06da78a8;
            if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_06da78ac;
            lVar2 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
            uVar10 = (long)(int)(uint)unaff_x23 | 1;
            uVar11 = FUN_06da8738(uStack0000000000000038);
            if (lVar2 == 0) goto LAB_06da78a8;
            if (*(uint *)(lVar2 + 0x18) <= (uint)uVar10) goto LAB_06da78ac;
            unaff_x23 = unaff_x23 + 2;
            *(undefined4 *)(lVar2 + uVar10 * 4 + 0x20) = uVar11;
          } while ((long)unaff_x23 < (long)unaff_w29);
        }
        lVar2 = *(long *)(unaff_x20 + 0x148);
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) <= unaff_w21) goto LAB_06da78ac;
          lVar2 = *(long *)(lVar2 + in_stack_00000028 * 8 + 0x20);
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_06da78ac;
            lVar7 = *(long *)(unaff_x20 + 0xc0);
            if (lVar7 != 0) {
              iVar6 = *(int *)(lVar2 + unaff_x26 * 4 + 0x20);
              lVar2 = 0;
              iVar4 = (int)unaff_x23;
              in_stack_00000010 = (in_stack_00000008 - in_stack_00000018._4_4_) + in_stack_00000010;
              uVar10 = -((unaff_x23 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                       (unaff_x23 & 0xffffffff) << 2;
              do {
                lVar3 = *(long *)(lVar7 + 0x28);
                iVar1 = (int)lVar2;
                if ((0x23c < iVar4 + lVar2) || (in_stack_00000010 <= lVar3)) {
                  if (in_stack_00000010 < lVar3) {
                    FUN_06d9c2d8(lVar7,(int)lVar3 - (int)in_stack_00000010);
                    lVar7 = *(long *)(unaff_x20 + 0xc0);
                    if (lVar7 == 0) break;
                    uVar5 = (iVar4 + iVar1) - 4;
                    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
                  }
                  else {
                    uVar5 = iVar1 + iVar4;
                  }
                  if (*(long *)(lVar7 + 0x28) < in_stack_00000010) {
                    FUN_06d9c0ec(lVar7,(int)in_stack_00000010 - (int)*(long *)(lVar7 + 0x28));
                  }
                  if ((int)uVar5 < 0x240) {
                    lVar2 = *(long *)(unaff_x20 + 0x188);
                    if (lVar2 == 0) break;
                    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_06da78ac;
                    FUN_071245a8(*(undefined8 *)(lVar2 + unaff_x26 * 8 + 0x20),uVar5,0x243 - uVar5,0
                                );
                  }
                  return;
                }
                if (*(int *)(*(long *)PTR_DAT_08e8fc58 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                FUN_06d9d384(lVar7,iVar6 + 0x20,(long)&stack0x00000038 + 4,&stack0x00000038,
                             (long)&stack0x00000030 + 4,&stack0x00000030);
                lVar7 = *(long *)(unaff_x20 + 0x188);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
                lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
                uVar12 = FUN_06da8738(uStack0000000000000034);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= (uint)(iVar4 + iVar1)) goto LAB_06da78ac;
                *(undefined4 *)(lVar7 + uVar10 + lVar2 * 4 + 0x20) = uVar12;
                lVar7 = *(long *)(unaff_x20 + 0x188);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
                lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
                uVar8 = (long)(iVar4 + iVar1) | 1;
                uVar12 = FUN_06da8738(uStack0000000000000030);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= (uint)uVar8) goto LAB_06da78ac;
                *(undefined4 *)(lVar7 + uVar8 * 4 + 0x20) = uVar12;
                lVar7 = *(long *)(unaff_x20 + 0x188);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
                lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
                uVar12 = FUN_06da8738(uStack000000000000003c);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= iVar4 + iVar1 + 2U) goto LAB_06da78ac;
                *(undefined4 *)(lVar7 + uVar10 + lVar2 * 4 + 0x28) = uVar12;
                lVar7 = *(long *)(unaff_x20 + 0x188);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
                lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
                uVar12 = FUN_06da8738(uStack0000000000000038);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= iVar4 + iVar1 + 3U) goto LAB_06da78ac;
                *(undefined4 *)(lVar7 + uVar10 + lVar2 * 4 + 0x2c) = uVar12;
                lVar7 = *(long *)(unaff_x20 + 0xc0);
                lVar2 = lVar2 + 4;
              } while (lVar7 != 0);
            }
          }
        }
      }
    }
  }
LAB_06da78a8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


