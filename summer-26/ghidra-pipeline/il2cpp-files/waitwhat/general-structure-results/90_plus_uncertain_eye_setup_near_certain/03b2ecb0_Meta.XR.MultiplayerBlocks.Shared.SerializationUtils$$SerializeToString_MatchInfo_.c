/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<MatchInfo>
ENTRY_POINT: 03b2ecb0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b2ec1c) */
/* WARNING: Removing unreachable block (ram,0x03b2ed98) */
/* WARNING: Removing unreachable block (ram,0x03b2edac) */

void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<MatchInfo>(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 uVar8;
  int unaff_w25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  
  do {
    uVar3 = FUN_03188c88(*(undefined8 *)(param_1 + 0x88));
    if ((uVar3 & 1) == 0) {
      lVar4 = *unaff_x28;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar4 = *unaff_x28;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_03b2ed80:
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
LAB_03b2eddc:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      FUN_0484e5dc(**(long **)(lVar4 + 0xb8),unaff_x26,*unaff_x27);
    }
    do {
      unaff_w25 = unaff_w25 + 1;
      if (unaff_w24 == unaff_w25) {
        do {
          lVar4 = *unaff_x28;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar4 = *unaff_x28;
          }
          lVar6 = **(long **)(lVar4 + 0xb8);
          if (lVar6 == 0) goto LAB_03b2ed80;
          if (*(int *)(lVar6 + 0x20) < 1) {
            if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
              return;
            }
            goto LAB_03b2eddc;
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar6 = **(long **)(*unaff_x28 + 0xb8);
            if (lVar6 == 0) goto LAB_03b2ed80;
          }
          unaff_x23 = FUN_0484e760(lVar6,*(undefined8 *)PTR_DAT_070f24e8);
          if (unaff_x22 == 0) goto LAB_03b2ed80;
          iVar1 = *(int *)(unaff_x22 + 0x18);
          *(undefined4 *)(unaff_x22 + 0x18) = 0;
          *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0595236c(*(undefined8 *)(unaff_x22 + 0x10),0,iVar1,0);
          }
          if (unaff_x23 == 0) goto LAB_03b2ed80;
          FUN_03a2dd30(unaff_x23);
          FUN_042e54fc(unaff_x29 + -0x48);
          uVar9 = *(undefined8 *)(unaff_x29 + -0x40);
          uVar8 = *(undefined8 *)(unaff_x29 + -0x48);
          *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
          *(undefined8 *)(unaff_x29 + -0x48) = 0;
          *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x30;
          *(undefined8 *)(unaff_x29 + -0x28) = uVar9;
          *(undefined8 *)(unaff_x29 + -0x30) = uVar8;
          *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x10;
          while (uVar3 = FUN_054518b4(unaff_x29 + -0x30,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x70)),
                (uVar3 & 1) != 0) {
            uVar8 = *(undefined8 *)(unaff_x29 + -0x20);
            lVar4 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x60);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_031c09d4(lVar4);
            }
            lVar4 = thunk_FUN_031c3cac(uVar8,lVar4);
            if (lVar4 != 0) {
              lVar6 = *(long *)(unaff_x19 + 0x10);
              *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
              if (lVar6 == 0) {
                if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                goto LAB_03b2eddc;
              }
              uVar2 = *(uint *)(unaff_x19 + 0x18);
              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
              }
              else {
                FUN_042e4a64();
              }
            }
          }
          FUN_054518b0(unaff_x29 + -0x30,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x78));
          unaff_w24 = FUN_069e8e08(unaff_x23,0);
        } while (unaff_w24 < 1);
        unaff_w25 = 0;
      }
      unaff_x26 = FUN_069e983c(unaff_x23,unaff_w25,0);
      if ((unaff_x20 & 1) != 0) {
        if (unaff_x26 == 0) goto LAB_03b2ed80;
        break;
      }
      if ((unaff_x26 == 0) || (lVar4 = FUN_069d3b50(unaff_x26,0), lVar4 == 0)) goto LAB_03b2ed80;
      uVar3 = FUN_069d710c(lVar4,0);
    } while ((uVar3 & 1) == 0);
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x10) + 0x38) + 0x80);
    uVar8 = *puVar5;
    pcVar7 = (code *)puVar5[2];
    *(undefined8 *)(unaff_x29 + -0x48) = unaff_x21;
    (*pcVar7)(uVar8,puVar5,unaff_x26,unaff_x29 + -0x48);
    param_1 = *(long *)(*(long *)(unaff_x29 + -0x10) + 0x38);
  } while( true );
}


