/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 03b2e630
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b2e750) */

void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>(void)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w24;
  int iVar7;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    if ((unaff_w24 != 9) && (unaff_w24 != 0)) {
      return;
    }
    iVar3 = FUN_069e8e08(unaff_x22,0);
    if (0 < iVar3) {
      iVar7 = 0;
      do {
        lVar5 = FUN_069e983c(unaff_x22,iVar7,0);
        if ((unaff_x20 & 1) == 0) {
          if ((lVar5 == 0) || (lVar6 = FUN_069d3b50(lVar5,0), lVar6 == 0)) goto LAB_03b2e74c;
          uVar4 = FUN_069d710c(lVar6,0);
          if ((uVar4 & 1) != 0) goto LAB_03b2e698;
        }
        else {
          if (lVar5 == 0) goto LAB_03b2e74c;
LAB_03b2e698:
          lVar6 = FUN_03a2d360(lVar5,*(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x80));
          if (lVar6 == 0) {
            lVar6 = *unaff_x26;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar6 = *unaff_x26;
            }
            if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_03b2e74c;
            FUN_0484e5dc(**(long **)(lVar6 + 0xb8),lVar5,*unaff_x27);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    lVar5 = *unaff_x26;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *unaff_x26;
    }
    lVar6 = **(long **)(lVar5 + 0xb8);
    if (lVar6 == 0) {
LAB_03b2e74c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(lVar6 + 0x20) < 1) {
      return;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar6 = **(long **)(*unaff_x26 + 0xb8);
      if (lVar6 == 0) goto LAB_03b2e74c;
    }
    unaff_x22 = FUN_0484e760(lVar6,*(undefined8 *)PTR_DAT_070f24e8);
    if (unaff_x21 == 0) goto LAB_03b2e74c;
    iVar3 = *(int *)(unaff_x21 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (0 < iVar3) {
      FUN_0595236c(*(undefined8 *)(unaff_x21 + 0x10),0,iVar3,0);
    }
    if (unaff_x22 == 0) goto LAB_03b2e74c;
    FUN_03a2dd30(unaff_x22);
    FUN_042e54fc(&stack0x00000008);
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000018;
    while (uVar4 = FUN_054518b4(&stack0x00000020,
                                *(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x70)),
          uVar2 = in_stack_00000030, (uVar4 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(in_stack_00000038 + 0x38) + 0x60);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4(lVar5);
      }
      lVar5 = thunk_FUN_031c3cac(uVar2,lVar5);
      if (lVar5 != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
        }
        else {
          FUN_042e4a64();
        }
      }
    }
    unaff_w24 = 9;
    FUN_054518b0(&stack0x00000020,*(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x78));
    in_stack_00000010 = unaff_x29;
    in_stack_00000018 = unaff_x28;
  } while( true );
}


