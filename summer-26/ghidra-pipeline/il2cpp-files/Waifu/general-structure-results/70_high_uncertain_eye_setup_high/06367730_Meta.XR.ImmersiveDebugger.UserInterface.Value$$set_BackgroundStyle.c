/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Value$$set_BackgroundStyle
ENTRY_POINT: 06367730
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Value__set_BackgroundStyle(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  ulong uVar12;
  
  FUN_0335b6c8(param_1 + 0xb78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebb90,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebc10,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebc18,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x91a) = unaff_w22;
  if ((int)unaff_w19 < 0) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x110) != 0) {
    uVar9 = FUN_0438e518(*(long *)(unaff_x20 + 0x110),unaff_w19,DAT_083ebb70);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x110) != 0) {
      lVar10 = *(long *)(*(long *)(unaff_x20 + 0x110) + 0x10) + (ulong)unaff_w19 * 0x88;
      uVar2 = *(uint *)(lVar10 + 4);
      uVar3 = *(undefined4 *)(lVar10 + 0x60);
      uVar9 = *(ulong *)(lVar10 + 0x70);
      iVar4 = *(int *)(lVar10 + 0x78);
      if (-1 < (int)uVar2) {
        if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_06367a00;
        puVar1 = (undefined4 *)(*(long *)(*(long *)(unaff_x20 + 0xd0) + 0x10) + (ulong)uVar2 * 0x40)
        ;
        uVar5 = *puVar1;
        uVar6 = puVar1[3];
        iVar8 = puVar1[1] + -1;
        if (iVar8 == 0) {
          if (*(long *)(unaff_x20 + 0xe0) == 0) goto LAB_06367a00;
          uVar12 = *(ulong *)(puVar1 + 7);
          iVar8 = puVar1[9];
          uVar11 = *(undefined8 *)(puVar1 + 0xb);
          iVar7 = puVar1[0xd];
          FUN_042a5698(*(long *)(unaff_x20 + 0xe0),uVar6,DAT_083eb150);
          if (*(long *)(unaff_x20 + 0xe8) == 0) goto LAB_06367a00;
          FUN_042a5698(*(long *)(unaff_x20 + 0xe8),uVar6,DAT_083eb150);
          if (*(long *)(unaff_x20 + 0xf0) == 0) goto LAB_06367a00;
          FUN_042a64a4(*(long *)(unaff_x20 + 0xf0),uVar6,DAT_083eb198);
          if (0 < iVar8) {
            if (*(long *)(unaff_x20 + 0xf8) == 0) goto LAB_06367a00;
            FUN_0429c8a4(*(long *)(unaff_x20 + 0xf8),uVar12 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaf70 + 0x20) + 0xc0) + 0x60));
            if (*(long *)(unaff_x20 + 0x100) == 0) goto LAB_06367a00;
            FUN_0429e43c(*(long *)(unaff_x20 + 0x100),uVar12 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaff8 + 0x20) + 0xc0) + 0x60));
          }
          if (0 < iVar7) {
            if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_06367a00;
            FUN_0429bad8(*(long *)(unaff_x20 + 0x108),uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaf38 + 0x20) + 0xc0) + 0x60));
          }
          if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_06367a00;
          FUN_0438f394(*(long *)(unaff_x20 + 0xd0),uVar2,DAT_083ebbf8);
          if (*(long *)(unaff_x20 + 0xd8) == 0) goto LAB_06367a00;
          FUN_05cad404(*(long *)(unaff_x20 + 0xd8),uVar5,DAT_083e1ae8);
        }
        else {
          puVar1[1] = iVar8;
          puVar1[6] = puVar1[6];
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar1 + 4);
        }
      }
      if (*(long *)(unaff_x20 + 0x120) != 0) {
        FUN_042a1b6c(*(long *)(unaff_x20 + 0x120),uVar3,DAT_083eb0e8);
        if (*(long *)(unaff_x20 + 0x128) != 0) {
          FUN_042a5698(*(long *)(unaff_x20 + 0x128),uVar3,DAT_083eb150);
          if (*(long *)(unaff_x20 + 0x130) != 0) {
            FUN_042a5698(*(long *)(unaff_x20 + 0x130),uVar3,DAT_083eb150);
            if (*(long *)(unaff_x20 + 0x138) != 0) {
              FUN_042a64a4(*(long *)(unaff_x20 + 0x138),uVar3,DAT_083eb198);
              if (0 < iVar4) {
                if (*(long *)(unaff_x20 + 0x140) == 0) goto LAB_06367a00;
                FUN_0429bad8(*(long *)(unaff_x20 + 0x140),uVar9 & 0xffffffff,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083eaf38 + 0x20) + 0xc0) + 0x60));
              }
              if (*(long *)(unaff_x20 + 0x118) != 0) {
                FUN_05cb7290(*(long *)(unaff_x20 + 0x118),unaff_w19,DAT_083e2138);
                if (*(long *)(unaff_x20 + 0x110) != 0) {
                  FUN_0438e430(*(long *)(unaff_x20 + 0x110),unaff_w19,DAT_083ebb78);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06367a00:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


