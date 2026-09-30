/*
FUNCTION_NAME: OVRPlugin$$GetDesiredEyeTextureFormat
ENTRY_POINT: 06abe194
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDesiredEyeTextureFormat
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if (lVar5 != 0) {
    *(undefined2 *)(lVar5 + 0x10) = 0x101;
    *(undefined1 *)(lVar5 + 0x12) = 1;
    *(undefined1 *)(lVar5 + 0x40) = 1;
    *(undefined4 *)(lVar5 + 0x30) = 3;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    uVar1 = (*DAT_086ef188)();
    FUN_06a5e4b0(uVar1,0,0);
    uVar9 = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    *(undefined8 *)(lVar5 + 0x1c) = in_stack_00000008;
    *(undefined8 *)(lVar5 + 0x14) = in_stack_00000000;
    *(undefined8 *)(lVar5 + 0x28) = uStack0000000000000014;
    *(ulong *)(lVar5 + 0x20) = uVar9;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      lVar5 = 0;
      uVar6 = 0;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x60) = 0x3f800000;
      while (*(long *)(unaff_x19 + 0x58) != 0) {
        lVar2 = FUN_04ab0b48(*(long *)(unaff_x19 + 0x58),uVar6 & 0xffffffff,DAT_083f4dd0);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870(DAT_083cf7d8);
        }
        uVar3 = FUN_07a119fc(lVar2,0,0);
        if (*(long *)(unaff_x19 + 0x48) == 0) break;
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
        if ((uVar3 & 1) == 0) {
          if (lVar2 == 0) break;
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          lVar2 = (*DAT_086ef188)(lVar2);
          if ((lVar2 == 0) || (uVar8 = FUN_07a191d0(lVar2,0), lVar7 == 0)) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_06abe354;
        }
        else {
          if (DAT_086d7c53 == '\0') {
            FUN_0335b6c8(&DAT_083d0300,1);
            DataMemoryBarrier(2,3);
            DAT_086d7c53 = '\x01';
          }
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar6) {
LAB_06abe354:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          puVar4 = *(undefined4 **)(DAT_083d0300 + 0xb8);
          param_3 = puVar4[2];
          param_4 = puVar4[3];
          uVar8 = *puVar4;
          uVar9 = (ulong)(uint)puVar4[1];
        }
        lVar7 = lVar7 + lVar5;
        lVar5 = lVar5 + 0x10;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar7 + 0x20) = uVar8;
        *(int *)(lVar7 + 0x24) = (int)uVar9;
        *(undefined4 *)(lVar7 + 0x28) = param_3;
        *(undefined4 *)(lVar7 + 0x2c) = param_4;
        if (lVar5 == 0x180) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


