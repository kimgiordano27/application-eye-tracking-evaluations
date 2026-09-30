/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$set_LineScaleFactor
ENTRY_POINT: 06da74a4
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__set_LineScaleFactor(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong in_x13;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x25;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x26;
  int unaff_w29;
  undefined4 uVar11;
  undefined4 uVar12;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  lVar4 = *(long *)(param_1 + unaff_x25 * 8 + 0x20);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_w19) {
LAB_06da78ac:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar4 = *(long *)(lVar4 + unaff_x26 * 8 + 0x20);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_06da78ac;
      if ((int)in_x13 < unaff_w29) {
        uVar12 = *(undefined4 *)(lVar4 + 0x28);
        uVar8 = (ulong)(int)in_x13;
        do {
          uVar9 = *(undefined8 *)(unaff_x20 + 0xc0);
          if (*(int *)(*(long *)PTR_DAT_08e8fc58 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_06d9d068(uVar9,uVar12,(long)&stack0x00000038 + 4,&stack0x00000038);
          lVar4 = *(long *)(unaff_x20 + 0x188);
          if (lVar4 == 0) goto LAB_06da78a8;
          if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar4 = *(long *)(lVar4 + unaff_x26 * 8 + 0x20);
          uVar11 = FUN_06da8738(uStack000000000000003c);
          if (lVar4 == 0) goto LAB_06da78a8;
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar8) goto LAB_06da78ac;
          *(undefined4 *)(lVar4 + uVar8 * 4 + 0x20) = uVar11;
          lVar4 = *(long *)(unaff_x20 + 0x188);
          if (lVar4 == 0) goto LAB_06da78a8;
          if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar4 = *(long *)(lVar4 + unaff_x26 * 8 + 0x20);
          uVar10 = (long)(int)(uint)uVar8 | 1;
          uVar11 = FUN_06da8738(uStack0000000000000038);
          if (lVar4 == 0) goto LAB_06da78a8;
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar10) goto LAB_06da78ac;
          uVar8 = uVar8 + 2;
          *(undefined4 *)(lVar4 + uVar10 * 4 + 0x20) = uVar11;
        } while ((long)uVar8 < (long)unaff_w29);
        in_x13 = uVar8 & 0xffffffff;
      }
      lVar4 = *(long *)(unaff_x20 + 0x148);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_06da78ac;
        lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
        if (lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_06da78ac;
          lVar7 = *(long *)(unaff_x20 + 0xc0);
          if (lVar7 != 0) {
            iVar1 = *(int *)(lVar4 + unaff_x26 * 4 + 0x20);
            iVar3 = (int)in_x13;
            lVar4 = 0;
            in_stack_00000010 = (in_stack_00000008 - in_stack_00000018._4_4_) + in_stack_00000010;
            uVar8 = -((in_x13 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                    (in_x13 & 0xffffffff) << 2;
            do {
              lVar5 = *(long *)(lVar7 + 0x28);
              iVar2 = (int)lVar4;
              if ((0x23c < iVar3 + lVar4) || (in_stack_00000010 <= lVar5)) {
                if (in_stack_00000010 < lVar5) {
                  FUN_06d9c2d8(lVar7,(int)lVar5 - (int)in_stack_00000010);
                  lVar7 = *(long *)(unaff_x20 + 0xc0);
                  if (lVar7 == 0) break;
                  uVar6 = (iVar3 + iVar2) - 4;
                  uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
                }
                else {
                  uVar6 = iVar2 + iVar3;
                }
                if (*(long *)(lVar7 + 0x28) < in_stack_00000010) {
                  FUN_06d9c0ec(lVar7,(int)in_stack_00000010 - (int)*(long *)(lVar7 + 0x28));
                }
                if ((int)uVar6 < 0x240) {
                  lVar4 = *(long *)(unaff_x20 + 0x188);
                  if (lVar4 == 0) break;
                  if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_06da78ac;
                  FUN_071245a8(*(undefined8 *)(lVar4 + unaff_x26 * 8 + 0x20),uVar6,0x243 - uVar6,0);
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
              uVar12 = FUN_06da8738(uStack0000000000000034);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= (uint)(iVar3 + iVar2)) goto LAB_06da78ac;
              *(undefined4 *)(lVar7 + uVar8 + lVar4 * 4 + 0x20) = uVar12;
              lVar7 = *(long *)(unaff_x20 + 0x188);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
              lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
              uVar10 = (long)(iVar3 + iVar2) | 1;
              uVar12 = FUN_06da8738(uStack0000000000000030);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar10) goto LAB_06da78ac;
              *(undefined4 *)(lVar7 + uVar10 * 4 + 0x20) = uVar12;
              lVar7 = *(long *)(unaff_x20 + 0x188);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
              lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
              uVar12 = FUN_06da8738(uStack000000000000003c);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= iVar3 + iVar2 + 2U) goto LAB_06da78ac;
              *(undefined4 *)(lVar7 + uVar8 + lVar4 * 4 + 0x28) = uVar12;
              lVar7 = *(long *)(unaff_x20 + 0x188);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da78ac;
              lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
              uVar12 = FUN_06da8738(uStack0000000000000038);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= iVar3 + iVar2 + 3U) goto LAB_06da78ac;
              *(undefined4 *)(lVar7 + uVar8 + lVar4 * 4 + 0x2c) = uVar12;
              lVar7 = *(long *)(unaff_x20 + 0xc0);
              lVar4 = lVar4 + 4;
            } while (lVar7 != 0);
          }
        }
      }
    }
  }
LAB_06da78a8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


