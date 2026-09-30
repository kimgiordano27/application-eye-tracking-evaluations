/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 05beca18
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long unaff_x19;
  long unaff_x20;
  ulong uVar9;
  char unaff_w23;
  long lVar10;
  undefined4 uVar11;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  FUN_05b61c54(param_5,param_6,0);
  *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + 0x20) = _uStack0000000000000010;
  *(ulong *)(unaff_x20 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
  *(undefined8 *)(unaff_x20 + 0x14) = in_stack_00000000._4_8_;
  puVar3 = PTR_DAT_070ce558;
  puVar2 = PTR_DAT_070c2318;
  puVar1 = PTR_DAT_070c1b68;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    uVar9 = 0;
    lVar10 = 0x20;
    *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x60) = 0x3f800000;
    while (*(long *)(unaff_x19 + 0x58) != 0) {
      lVar4 = FUN_042e47a4(*(long *)(unaff_x19 + 0x58),uVar9 & 0xffffffff,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)puVar1);
      }
      uVar5 = FUN_069d8404(lVar4,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x48);
      if ((uVar5 & 1) == 0) {
        if ((lVar6 == 0) || (lVar4 == 0)) break;
        lVar6 = *(long *)(lVar6 + 0x38);
        lVar4 = FUN_069d3a80(lVar4,0);
        if ((lVar4 == 0) || (uVar11 = FUN_069e7314(lVar4,0), lVar6 == 0)) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_05becb6c;
        puVar8 = (undefined4 *)(lVar6 + lVar10);
        *puVar8 = uVar11;
      }
      else {
        if (lVar6 == 0) break;
        lVar4 = *(long *)(lVar6 + 0x38);
        if (DAT_07546bbe == '\0') {
          FUN_03188a78(puVar3);
          DAT_07546bbe = unaff_w23;
        }
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_05becb6c:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        puVar7 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        in_stack_00000000._4_8_ = ZEXT48((uint)puVar7[1]);
        param_3 = puVar7[2];
        param_4 = puVar7[3];
        puVar8 = (undefined4 *)(lVar4 + uVar9 * 0x10 + 0x20);
        *(undefined4 *)(lVar4 + lVar10) = *puVar7;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
      puVar8[1] = (int)in_stack_00000000._4_8_;
      puVar8[2] = param_3;
      puVar8[3] = param_4;
      if (uVar9 == 0x18) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


