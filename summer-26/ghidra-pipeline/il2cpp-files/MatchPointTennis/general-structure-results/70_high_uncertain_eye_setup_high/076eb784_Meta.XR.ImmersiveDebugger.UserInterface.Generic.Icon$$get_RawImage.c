/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$get_RawImage
ENTRY_POINT: 076eb784
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__get_RawImage(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  int in_w8;
  long unaff_x19;
  int iVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  puVar6 = PTR_DAT_09f2f430;
  puVar5 = PTR_DAT_09f2f428;
  puVar4 = PTR_DAT_09f2f3f0;
  puVar3 = PTR_DAT_09f2f3e0;
  puVar2 = PTR_DAT_09f2f3d8;
  iVar1 = *(int *)(param_1 + 0x18);
  if (in_w8 == 0) {
    if (0 < iVar1) {
      iVar9 = 0;
      do {
        lVar10 = *(long *)(unaff_x19 + 0x228);
        uVar7 = FUN_071c07b4(param_1,iVar9,*(undefined8 *)puVar3);
        if (lVar10 == 0) break;
        FUN_071c086c(lVar10,uVar7,*(undefined8 *)puVar5);
        lVar10 = *(long *)(unaff_x19 + 0x230);
        if (lVar10 != 0) {
          if (*(long *)(unaff_x19 + 0x220) == 0) break;
          auVar11 = FUN_071c0648(*(long *)(unaff_x19 + 0x220),iVar9,*(undefined8 *)puVar2);
          FUN_071c0708(lVar10,auVar11._0_8_,auVar11._8_8_,*(undefined8 *)puVar6);
        }
        if (iVar1 + -1 == iVar9) goto LAB_076ebb08;
        param_1 = *(long *)(unaff_x19 + 0x218);
        iVar9 = iVar9 + 1;
      } while (param_1 != 0);
      goto LAB_076ebb44;
    }
  }
  else if (0 < iVar1) {
    iVar9 = 0;
    do {
      lVar10 = *(long *)(unaff_x19 + 0x200);
      uVar7 = FUN_071c07b4(param_1,iVar9,*(undefined8 *)puVar3);
      if ((lVar10 == 0) || (lVar10 = FUN_05badb74(lVar10,uVar7,*(undefined8 *)puVar4), lVar10 == 0))
      break;
      uVar8 = FUN_076e5ef4(lVar10,*(undefined8 *)(unaff_x19 + 0x1f0));
      if ((uVar8 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) break;
        lVar10 = *(long *)(unaff_x19 + 0x228);
        uVar7 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),iVar9,*(undefined8 *)puVar3);
        if (lVar10 == 0) break;
        FUN_071c086c(lVar10,uVar7,*(undefined8 *)puVar5);
        lVar10 = *(long *)(unaff_x19 + 0x230);
        if (lVar10 != 0) {
          if (*(long *)(unaff_x19 + 0x220) == 0) break;
          auVar11 = FUN_071c0648(*(long *)(unaff_x19 + 0x220),iVar9,*(undefined8 *)puVar2);
          FUN_071c0708(lVar10,auVar11._0_8_,auVar11._8_8_,*(undefined8 *)puVar6);
        }
      }
      if (iVar1 + -1 == iVar9) goto LAB_076ebb08;
      param_1 = *(long *)(unaff_x19 + 0x218);
      iVar9 = iVar9 + 1;
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


