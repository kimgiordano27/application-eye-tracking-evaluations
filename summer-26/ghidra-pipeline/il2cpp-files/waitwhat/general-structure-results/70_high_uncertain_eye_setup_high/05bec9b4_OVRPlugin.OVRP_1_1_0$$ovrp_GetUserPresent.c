/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserPresent
ENTRY_POINT: 05bec9b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserPresent
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(unaff_x20 + 0xd77) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2318);
    FUN_03188a78(PTR_DAT_070c1b68);
    *(undefined1 *)(unaff_x20 + 0xd77) = 1;
  }
  lVar10 = *(long *)(param_5 + 0x48);
  if (lVar10 != 0) {
    *(undefined2 *)(lVar10 + 0x10) = 0x101;
    *(undefined1 *)(lVar10 + 0x12) = 1;
    *(undefined1 *)(lVar10 + 0x40) = 1;
    *(undefined4 *)(lVar10 + 0x30) = 3;
    uVar4 = FUN_069d3a80(param_5,0);
    FUN_05b61c54(&stack0x00000000 + 4,uVar4,0,0);
    *(undefined8 *)(lVar10 + 0x28) = in_stack_00000018;
    *(ulong *)(lVar10 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    *(ulong *)(lVar10 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *(undefined8 *)(lVar10 + 0x14) = in_stack_00000000._4_8_;
    puVar3 = PTR_DAT_070ce558;
    puVar2 = PTR_DAT_070c2318;
    puVar1 = PTR_DAT_070c1b68;
    if (*(long *)(param_5 + 0x48) != 0) {
      uVar11 = 0;
      lVar10 = 0x20;
      *(undefined4 *)(*(long *)(param_5 + 0x48) + 0x60) = 0x3f800000;
      uVar13 = in_stack_00000000._4_8_;
      while (*(long *)(param_5 + 0x58) != 0) {
        lVar5 = FUN_042e47a4(*(long *)(param_5 + 0x58),uVar11 & 0xffffffff,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)puVar1);
        }
        uVar6 = FUN_069d8404(lVar5,0,0);
        lVar7 = *(long *)(param_5 + 0x48);
        if ((uVar6 & 1) == 0) {
          if ((lVar7 == 0) || (lVar5 == 0)) break;
          lVar7 = *(long *)(lVar7 + 0x38);
          lVar5 = FUN_069d3a80(lVar5,0);
          if ((lVar5 == 0) || (uVar12 = FUN_069e7314(lVar5,0), lVar7 == 0)) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_05becb6c;
          puVar9 = (undefined4 *)(lVar7 + lVar10);
          *puVar9 = uVar12;
        }
        else {
          if (lVar7 == 0) break;
          lVar5 = *(long *)(lVar7 + 0x38);
          if (DAT_07546bbe == '\0') {
            FUN_03188a78(puVar3);
            DAT_07546bbe = '\x01';
          }
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar11) {
LAB_05becb6c:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
          uVar13 = (ulong)(uint)puVar8[1];
          param_3 = puVar8[2];
          param_4 = puVar8[3];
          puVar9 = (undefined4 *)(lVar5 + uVar11 * 0x10 + 0x20);
          *(undefined4 *)(lVar5 + lVar10) = *puVar8;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x10;
        puVar9[1] = (int)uVar13;
        puVar9[2] = param_3;
        puVar9[3] = param_4;
        if (uVar11 == 0x18) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


