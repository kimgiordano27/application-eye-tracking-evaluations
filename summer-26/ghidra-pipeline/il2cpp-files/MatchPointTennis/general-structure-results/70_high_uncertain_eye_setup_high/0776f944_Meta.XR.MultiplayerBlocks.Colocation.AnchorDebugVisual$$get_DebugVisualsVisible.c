/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AnchorDebugVisual$$get_DebugVisualsVisible
ENTRY_POINT: 0776f944
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual__get_DebugVisualsVisible(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  undefined8 *unaff_x21;
  long lVar10;
  long *unaff_x22;
  
  FUN_04447ba8(PTR_DAT_09f1e8b8);
  FUN_04447ba8(PTR_DAT_09f33190);
  FUN_04447ba8(PTR_DAT_09f30818);
  FUN_04447ba8(PTR_DAT_09f1e8c0);
  FUN_04447ba8(PTR_DAT_09f20ed0);
  FUN_04447ba8(PTR_DAT_09f33198);
  FUN_04447ba8(PTR_DAT_09f331a0);
  FUN_04447ba8(PTR_DAT_09f331a8);
  FUN_04447ba8(PTR_DAT_09f21e48);
  *(undefined1 *)(unaff_x20 + 0x305) = 1;
  plVar6 = (long *)thunk_FUN_0448520c(*unaff_x21);
  FUN_078c1634(plVar6,0);
  lVar10 = *unaff_x22;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_04482014(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_04481fb8();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_04481fb8();
  }
  if (plVar6 != (long *)0x0) {
    FUN_078c4d74(plVar6,*(undefined8 *)PTR_DAT_09f331a0,**(undefined8 **)(lVar8 + 0xb8),0);
    puVar5 = PTR_DAT_09f331a8;
    puVar4 = PTR_DAT_09f33198;
    puVar3 = PTR_DAT_09f30818;
    puVar2 = PTR_DAT_09f21e48;
    puVar1 = PTR_DAT_09f1e8c0;
    lVar8 = *(long *)(unaff_x19 + 0x18);
    if (lVar8 != 0) {
      iVar9 = 0;
      do {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) break;
        if (*(int *)(lVar8 + 0x18) <= iVar9) {
          lVar10 = *unaff_x22;
          lVar8 = *(long *)(lVar10 + 0x38);
          if (lVar8 == 0) {
            FUN_04482014(lVar10);
            lVar8 = *(long *)(lVar10 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          FUN_078c4d74(plVar6,*(undefined8 *)puVar4,**(undefined8 **)(lVar8 + 0xb8),0);
          lVar8 = *(long *)(unaff_x19 + 0x18);
          if (lVar8 != 0) {
            iVar9 = 0;
            goto LAB_0776fb28;
          }
          break;
        }
        lVar8 = FUN_05badb74(lVar8,iVar9,*(undefined8 *)puVar1);
        if (lVar8 == 0) break;
        uVar7 = thunk_FUN_0952ff6c(lVar8,0);
        FUN_078c415c(plVar6,*(undefined8 *)puVar5,uVar7,0);
        lVar8 = *(long *)(unaff_x19 + 0x18);
        iVar9 = iVar9 + 1;
      } while (lVar8 != 0);
    }
  }
  goto Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual___cctor;
  while( true ) {
    if (*(int *)(lVar8 + 0x18) <= iVar9) {
      FUN_078bb7b4(plVar6,*(undefined8 *)puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0776fba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return;
    }
    lVar8 = FUN_05badb74(lVar8,iVar9,*(undefined8 *)puVar3);
    if (lVar8 == 0) break;
    uVar7 = FUN_0776e44c();
    FUN_078c415c(plVar6,*(undefined8 *)puVar5,uVar7,0);
    lVar8 = *(long *)(unaff_x19 + 0x18);
    iVar9 = iVar9 + 1;
    if (lVar8 == 0) break;
LAB_0776fb28:
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) break;
  }
Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


