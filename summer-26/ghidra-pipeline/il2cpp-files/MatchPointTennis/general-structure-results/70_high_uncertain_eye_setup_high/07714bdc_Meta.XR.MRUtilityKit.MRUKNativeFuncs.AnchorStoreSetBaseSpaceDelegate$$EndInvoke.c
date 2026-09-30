/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSetBaseSpaceDelegate$$EndInvoke
ENTRY_POINT: 07714bdc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int iStack000000000000000c;
  
  FUN_04447ba8(PTR_DAT_09f1e7b0);
  FUN_04447ba8(PTR_DAT_09f1e8b8);
  FUN_04447ba8(PTR_DAT_09f1e8c0);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f30a58);
  FUN_04447ba8(PTR_DAT_09f30a60);
  FUN_04447ba8(PTR_DAT_09f30a68);
  *(undefined1 *)(unaff_x21 + 0x11e) = 1;
  iStack000000000000000c = 0;
  lVar5 = FUN_04c6bfdc();
  plVar8 = (long *)(unaff_x20 + 0x28);
  *plVar8 = lVar5;
  thunk_FUN_044bb4b4(plVar8,lVar5);
  lVar5 = *plVar8;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar6 = FUN_0952c404(lVar5,0,0);
  puVar2 = PTR_DAT_09f1e8c0;
  puVar1 = PTR_DAT_09f1e7b0;
  if ((uVar6 & 1) == 0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c33b0(*(undefined8 *)PTR_DAT_09f30a68,0);
    }
    else {
      iStack000000000000000c = 0;
      if (*(int *)(lVar5 + 0x18) < 1) {
LAB_07714d84:
        if (*plVar8 != 0) {
          uVar4 = FUN_094ed840(*plVar8,0);
          if (*plVar8 != 0) {
            FUN_094ed8f4(*plVar8,1,0);
            if (*plVar8 != 0) {
              FUN_094ed8f4(*plVar8,uVar4 & 1,0);
              return;
            }
          }
        }
LAB_07714e74:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      while( true ) {
        iVar3 = iStack000000000000000c;
        uVar7 = FUN_05badb74(lVar5,iStack000000000000000c,*(undefined8 *)puVar2);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*unaff_x23);
        }
        uVar6 = FUN_0952c404(uVar7,0,0);
        if ((uVar6 & 1) != 0) break;
        if ((*(long *)(unaff_x20 + 0x20) == 0) ||
           (lVar5 = FUN_05badb74(*(long *)(unaff_x20 + 0x20),iVar3,*(undefined8 *)puVar2),
           lVar5 == 0)) goto LAB_07714e74;
        uVar7 = FUN_04d7a1ac(lVar5,*(undefined8 *)puVar1);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*unaff_x23);
        }
        uVar6 = FUN_0952c404(uVar7,0,0);
        if ((uVar6 & 1) != 0) break;
        iStack000000000000000c = iVar3 + 1;
        lVar5 = *(long *)(unaff_x20 + 0x20);
        if (lVar5 == 0) goto LAB_07714e74;
        if (*(int *)(lVar5 + 0x18) <= iStack000000000000000c) goto LAB_07714d84;
      }
      uVar7 = FUN_07a3b850(&stack0x0000000c,0);
      uVar7 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30a58,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c6b48(uVar7,0);
    }
    *plVar8 = 0;
    thunk_FUN_044bb4b4(plVar8,0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30a60,0);
  }
  return;
}


