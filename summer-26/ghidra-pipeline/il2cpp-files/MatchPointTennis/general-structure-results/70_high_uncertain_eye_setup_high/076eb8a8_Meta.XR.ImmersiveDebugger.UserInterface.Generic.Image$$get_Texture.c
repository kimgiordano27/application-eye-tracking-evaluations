/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Image$$get_Texture
ENTRY_POINT: 076eb8a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Image__get_Texture(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long unaff_x19;
  int unaff_w20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w24;
  int unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar7 [16];
  
  while( true ) {
    lVar4 = *(long *)(unaff_x19 + 0x200);
    uVar2 = FUN_071c07b4(param_1,unaff_w20,*unaff_x26);
    if (lVar4 == 0) break;
    lVar4 = FUN_05badb74(lVar4,uVar2,*unaff_x27);
    if (*(char *)(unaff_x19 + 0x1f8) == '\0') {
      if (lVar4 == 0) break;
LAB_076eb8f4:
      uVar5 = *(undefined8 *)(lVar4 + 0x28);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x78);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar3 = FUN_0952c404(uVar5,uVar6,0);
      uVar1 = unaff_w24;
      if ((uVar3 & 1) == 0) {
        uVar5 = *(undefined8 *)(lVar4 + 0x28);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x80);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar3 = FUN_0952c404(uVar5,uVar6,0);
        if ((uVar3 & 1) == 0) {
          uVar1 = unaff_w24 >> 2;
        }
        else {
          uVar1 = unaff_w24 >> 1;
        }
      }
      if ((uVar1 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) break;
        lVar4 = *(long *)(unaff_x19 + 0x228);
        uVar2 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),unaff_w20,*unaff_x26);
        if (lVar4 == 0) break;
        FUN_071c086c(lVar4,uVar2,*unaff_x29);
        lVar4 = *(long *)(unaff_x19 + 0x230);
        if (lVar4 != 0) {
          if (*(long *)(unaff_x19 + 0x220) == 0) break;
          auVar7 = FUN_071c0648(*(long *)(unaff_x19 + 0x220),unaff_w20,
                                *(undefined8 *)PTR_DAT_09f2f3d8);
          FUN_071c0708(lVar4,auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR_DAT_09f2f430);
        }
      }
    }
    else {
      if (lVar4 == 0) break;
      uVar3 = FUN_076e5ef4(lVar4,*(undefined8 *)(unaff_x19 + 0x1f0));
      if ((uVar3 & 1) != 0) goto LAB_076eb8f4;
    }
    if (unaff_w25 == unaff_w20) {
      if (*(long *)(unaff_x19 + 0x1b8) != 0) {
        FUN_076eb340();
        if (*(long *)(unaff_x19 + 0x1b8) != 0) {
          FUN_076e9ae8(*(long *)(unaff_x19 + 0x1b8),1);
          FUN_076eb104();
          return;
        }
      }
      break;
    }
    param_1 = *(long *)(unaff_x19 + 0x218);
    unaff_w20 = unaff_w20 + 1;
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


