/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$set_PillStyle
ENTRY_POINT: 06364d74
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


void Meta_XR_ImmersiveDebugger_UserInterface_Member__set_PillStyle(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebc50,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebc98,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06364db0 to 06464db7 has its CatchHandler @ 06364e48 */
  FUN_0335b6c8(&DAT_083ebc58,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x8f8) = unaff_w22;
  if ((int)unaff_w19 < 0) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
                    /* try { // try from 06364dd0 to 06464de3 has its CatchHandler @ 06364e58 */
    uVar14 = FUN_043903b4(*(long *)(unaff_x20 + 0x58),unaff_w19,DAT_083ebc78);
    if ((uVar14 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      lVar15 = *(long *)(*(long *)(unaff_x20 + 0x58) + 0x10) + (ulong)unaff_w19 * 0x44;
      uVar1 = *(uint *)(lVar15 + 4);
      uVar2 = *(undefined4 *)(lVar15 + 0x10);
      uVar3 = *(undefined4 *)(lVar15 + 0x20);
      uVar4 = *(undefined4 *)(lVar15 + 0x30);
      iVar5 = *(int *)(lVar15 + 0x38);
      uVar6 = *(undefined4 *)(lVar15 + 0x40);
      if (-1 < (int)uVar1) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_063650b8;
        puVar16 = (undefined4 *)
                  (*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) + (ulong)uVar1 * 0x50);
        uVar7 = *puVar16;
        uVar8 = puVar16[4];
        iVar13 = puVar16[1] + -1;
        uVar12 = puVar16[8];
        if (iVar13 == 0) {
          if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_063650b8;
          uVar9 = puVar16[0xc];
          iVar13 = puVar16[0xe];
          uVar10 = puVar16[0x10];
          iVar11 = puVar16[0x12];
          FUN_042a1b6c(*(long *)(unaff_x20 + 0x30),uVar8,DAT_083eb0e8);
          if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_063650b8;
          FUN_042b3978(*(long *)(unaff_x20 + 0x38),uVar12,DAT_083eb438);
          if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_063650b8;
          FUN_042a48a0(*(long *)(unaff_x20 + 0x28),uVar8,DAT_083eb118);
          if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_063650b8;
          FUN_042a1b6c(*(long *)(unaff_x20 + 0x48),uVar8,DAT_083eb0e8);
          if (0 < iVar13) {
            if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_063650b8;
            FUN_0429e43c(*(long *)(unaff_x20 + 0x40),uVar9,DAT_083eb000);
          }
          if (0 < iVar11) {
            if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_063650b8;
            FUN_0429e43c(*(long *)(unaff_x20 + 0x50),uVar10,DAT_083eb000);
          }
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_063650b8;
          FUN_0438fb20(*(long *)(unaff_x20 + 0x18),uVar1,DAT_083ebc38);
          if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_063650b8;
          FUN_05cad404(*(long *)(unaff_x20 + 0x20),uVar7,DAT_083e1ae8);
        }
        else {
          puVar16[1] = iVar13;
          puVar16[7] = puVar16[7];
          *(undefined8 *)(puVar16 + 5) = *(undefined8 *)(puVar16 + 5);
          puVar16[0xb] = puVar16[0xb];
          *(undefined8 *)(puVar16 + 9) = *(undefined8 *)(puVar16 + 9);
        }
      }
      if (*(long *)(unaff_x20 + 0x60) != 0) {
        FUN_0429d670(*(long *)(unaff_x20 + 0x60),uVar2,DAT_083eafc0);
        if (*(long *)(unaff_x20 + 0x68) != 0) {
          FUN_0429c8a4(*(long *)(unaff_x20 + 0x68),uVar2,DAT_083eaf78);
          if (*(long *)(unaff_x20 + 0x70) != 0) {
            FUN_0429c8a4(*(long *)(unaff_x20 + 0x70),uVar2,DAT_083eaf78);
            if (*(long *)(unaff_x20 + 0x78) != 0) {
              FUN_0429c8a4(*(long *)(unaff_x20 + 0x78),uVar2,DAT_083eaf78);
              if (*(long *)(unaff_x20 + 0x80) != 0) {
                FUN_042a5698(*(long *)(unaff_x20 + 0x80),uVar2,DAT_083eb150);
                if (*(long *)(unaff_x20 + 0x88) != 0) {
                  FUN_042a8130(*(long *)(unaff_x20 + 0x88),uVar2,DAT_083eb210);
                  if (*(long *)(unaff_x20 + 0x90) != 0) {
                    FUN_0429e43c(*(long *)(unaff_x20 + 0x90),uVar3,DAT_083eb000);
                    if (0 < iVar5) {
                      if (*(long *)(unaff_x20 + 0x98) == 0) goto LAB_063650b8;
                      FUN_042a5698(*(long *)(unaff_x20 + 0x98),uVar4,DAT_083eb150);
                      if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_063650b8;
                      FUN_042a5698(*(long *)(unaff_x20 + 0xa0),uVar4,DAT_083eb150);
                      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_063650b8;
                      FUN_042a0da0(*(long *)(unaff_x20 + 0xa8),uVar4,DAT_083eb0b0);
                    }
                    if ((*(long *)(unaff_x20 + 0x10) != 0) &&
                       (lVar15 = FUN_063178b4(*(long *)(unaff_x20 + 0x10),0), lVar15 != 0)) {
                      FUN_0635a090(lVar15,uVar6,0xffffffff);
                      if (*(long *)(unaff_x20 + 0x58) != 0) {
                        FUN_043902c8(*(long *)(unaff_x20 + 0x58),unaff_w19,DAT_083ebc80);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_063650b8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


