/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$get_Texture
ENTRY_POINT: 076eb78c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__get_Texture(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  undefined4 uVar6;
  ulong uVar7;
  int in_w8;
  long unaff_x19;
  int iVar8;
  long lVar9;
  int unaff_w22;
  undefined1 auVar10 [16];
  
  puVar5 = PTR_DAT_09f2f430;
  puVar4 = PTR_DAT_09f2f428;
  puVar3 = PTR_DAT_09f2f3f0;
  puVar2 = PTR_DAT_09f2f3e0;
  puVar1 = PTR_DAT_09f2f3d8;
  if (in_w8 == 0) {
    if (in_NG == in_OV) {
      iVar8 = 0;
      do {
        lVar9 = *(long *)(unaff_x19 + 0x228);
        uVar6 = FUN_071c07b4(param_1,iVar8,*(undefined8 *)puVar2);
        if (lVar9 == 0) break;
        FUN_071c086c(lVar9,uVar6,*(undefined8 *)puVar4);
        lVar9 = *(long *)(unaff_x19 + 0x230);
        if (lVar9 != 0) {
          if (*(long *)(unaff_x19 + 0x220) == 0) break;
          auVar10 = FUN_071c0648(*(long *)(unaff_x19 + 0x220),iVar8,*(undefined8 *)puVar1);
          FUN_071c0708(lVar9,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar5);
        }
        if (unaff_w22 == iVar8) goto LAB_076ebb08;
        param_1 = *(long *)(unaff_x19 + 0x218);
        iVar8 = iVar8 + 1;
      } while (param_1 != 0);
      goto LAB_076ebb44;
    }
  }
  else if (in_NG == in_OV) {
    iVar8 = 0;
    do {
      lVar9 = *(long *)(unaff_x19 + 0x200);
      uVar6 = FUN_071c07b4(param_1,iVar8,*(undefined8 *)puVar2);
      if ((lVar9 == 0) || (lVar9 = FUN_05badb74(lVar9,uVar6,*(undefined8 *)puVar3), lVar9 == 0))
      break;
      uVar7 = FUN_076e5ef4(lVar9,*(undefined8 *)(unaff_x19 + 0x1f0));
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) break;
        lVar9 = *(long *)(unaff_x19 + 0x228);
        uVar6 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),iVar8,*(undefined8 *)puVar2);
        if (lVar9 == 0) break;
        FUN_071c086c(lVar9,uVar6,*(undefined8 *)puVar4);
        lVar9 = *(long *)(unaff_x19 + 0x230);
        if (lVar9 != 0) {
          if (*(long *)(unaff_x19 + 0x220) == 0) break;
          auVar10 = FUN_071c0648(*(long *)(unaff_x19 + 0x220),iVar8,*(undefined8 *)puVar1);
          FUN_071c0708(lVar9,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar5);
        }
      }
      if (unaff_w22 == iVar8) goto LAB_076ebb08;
      param_1 = *(long *)(unaff_x19 + 0x218);
      iVar8 = iVar8 + 1;
    } while (param_1 != 0);
    goto LAB_076ebb44;
  }
LAB_076ebb08:
  if (*(long *)(unaff_x19 + 0x1b8) != 0) {
    FUN_076eb340();
    if (*(long *)(unaff_x19 + 0x1b8) != 0) {
      FUN_076e9ae8(*(long *)(unaff_x19 + 0x1b8),1);
      FUN_076eb104();
      return;
    }
  }
LAB_076ebb44:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


