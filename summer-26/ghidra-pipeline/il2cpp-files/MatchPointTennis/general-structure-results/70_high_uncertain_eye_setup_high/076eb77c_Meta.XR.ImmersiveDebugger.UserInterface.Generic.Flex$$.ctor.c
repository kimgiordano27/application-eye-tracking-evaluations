/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$.ctor
ENTRY_POINT: 076eb77c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int in_w8;
  long unaff_x19;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar6 = PTR_DAT_09f2f430;
  puVar5 = PTR_DAT_09f2f428;
  puVar4 = PTR_DAT_09f2f3f0;
  puVar3 = PTR_DAT_09f2f3e0;
  puVar2 = PTR_DAT_09f2f3d8;
  lVar8 = *(long *)(unaff_x19 + 0x218);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    if (in_w8 == 0) {
      if (0 < iVar1) {
        iVar10 = 0;
        do {
          lVar11 = *(long *)(unaff_x19 + 0x228);
          uVar7 = FUN_071c07b4(lVar8,iVar10,*(undefined8 *)puVar3);
          if (lVar11 == 0) break;
          FUN_071c086c(lVar11,uVar7,*(undefined8 *)puVar5);
          lVar8 = *(long *)(unaff_x19 + 0x230);
          if (lVar8 != 0) {
            if (*(long *)(unaff_x19 + 0x220) == 0) break;
            auVar12 = FUN_071c0648(*(long *)(unaff_x19 + 0x220),iVar10,*(undefined8 *)puVar2);
            FUN_071c0708(lVar8,auVar12._0_8_,auVar12._8_8_,*(undefined8 *)puVar6);
          }
          if (iVar1 + -1 == iVar10) goto LAB_076ebb08;
          lVar8 = *(long *)(unaff_x19 + 0x218);
          iVar10 = iVar10 + 1;
        } while (lVar8 != 0);
        goto LAB_076ebb44;
      }
    }
    else if (0 < iVar1) {
      iVar10 = 0;
      do {
        lVar11 = *(long *)(unaff_x19 + 0x200);
        uVar7 = FUN_071c07b4(lVar8,iVar10,*(undefined8 *)puVar3);
        if ((lVar11 == 0) || (lVar8 = FUN_05badb74(lVar11,uVar7,*(undefined8 *)puVar4), lVar8 == 0))
        break;
        uVar9 = FUN_076e5ef4(lVar8,*(undefined8 *)(unaff_x19 + 0x1f0));
        if ((uVar9 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x218) == 0) break;
          lVar8 = *(long *)(unaff_x19 + 0x228);
          uVar7 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),iVar10,*(undefined8 *)puVar3);
          if (lVar8 == 0) break;
          FUN_071c086c(lVar8,uVar7,*(undefined8 *)puVar5);
          lVar8 = *(long *)(unaff_x19 + 0x230);
          if (lVar8 != 0) {
            if (*(long *)(unaff_x19 + 0x220) == 0) break;
            auVar12 = FUN_071c0648(*(long *)(unaff_x19 + 0x220),iVar10,*(undefined8 *)puVar2);
            FUN_071c0708(lVar8,auVar12._0_8_,auVar12._8_8_,*(undefined8 *)puVar6);
          }
        }
        if (iVar1 + -1 == iVar10) goto LAB_076ebb08;
        lVar8 = *(long *)(unaff_x19 + 0x218);
        iVar10 = iVar10 + 1;
      } while (lVar8 != 0);
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
  }
LAB_076ebb44:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


