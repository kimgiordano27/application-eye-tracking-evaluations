/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$.ctor
ENTRY_POINT: 076df47c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton___ctor(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_078bb7b4();
  lVar4 = FUN_078bb7b4();
  uVar5 = FUN_095351f4(0);
  if (lVar4 != 0) {
    puVar1 = unaff_x21;
    if ((uVar5 & 1) == 0) {
      puVar1 = unaff_x22;
    }
    FUN_078bb7b4(lVar4,*puVar1,0);
    lVar4 = FUN_078bb7b4();
    uVar5 = FUN_095354c4(0);
    if (lVar4 != 0) {
      puVar1 = unaff_x21;
      if ((uVar5 & 1) == 0) {
        puVar1 = unaff_x22;
      }
      FUN_078bb7b4(lVar4,*puVar1,0);
      lVar4 = FUN_078bb7b4();
      uVar5 = UnityEngine_UI_AnimationTriggers__set_selectedTrigger(0);
      if (lVar4 != 0) {
        puVar1 = unaff_x21;
        if ((uVar5 & 1) == 0) {
          puVar1 = unaff_x22;
        }
        FUN_078bb7b4(lVar4,*puVar1,0);
        lVar4 = FUN_078bb7b4();
        uVar5 = FUN_09535294(0);
        if (lVar4 != 0) {
          puVar1 = unaff_x21;
          if ((uVar5 & 1) == 0) {
            puVar1 = unaff_x22;
          }
          FUN_078bb7b4(lVar4,*puVar1,0);
          lVar4 = FUN_078bb7b4();
          uVar5 = FUN_09535334(0);
          if (lVar4 != 0) {
            puVar1 = unaff_x21;
            if ((uVar5 & 1) == 0) {
              puVar1 = unaff_x22;
            }
            FUN_078bb7b4(lVar4,*puVar1,0);
            lVar4 = FUN_078bb7b4();
            uVar5 = FUN_095352e4(0);
            if (lVar4 != 0) {
              if ((uVar5 & 1) == 0) {
                unaff_x21 = unaff_x22;
              }
              FUN_078bb7b4(lVar4,*unaff_x21,0);
              lVar4 = FUN_078bb7b4();
              uVar5 = FUN_09535384(0);
              puVar2 = PTR_DAT_09f1e540;
              if (lVar4 != 0) {
                puVar1 = (undefined8 *)PTR_DAT_09f2f088;
                if ((uVar5 & 1) == 0) {
                  puVar1 = (undefined8 *)PTR_DAT_09f2f090;
                }
                FUN_078bb7b4(lVar4,*puVar1,0);
                uVar6 = (**(code **)(*unaff_x19 + 0x168))();
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)puVar2);
                }
                puVar2 = PTR_DAT_09f1e538;
                FUN_094c652c(uVar6,0);
                if (DAT_0a522ec6 == '\0') {
                  FUN_04447ba8(PTR_DAT_09f2efb8);
                  DAT_0a522ec6 = '\x01';
                }
                puVar3 = PTR_DAT_09f2efb8;
                uVar6 = **(undefined8 **)(*(long *)PTR_DAT_09f2efb8 + 0xb8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar5 = FUN_0952fedc(uVar6,0);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                if (DAT_0a522ec6 == '\0') {
                  FUN_04447ba8(PTR_DAT_09f2efb8);
                  DAT_0a522ec6 = '\x01';
                }
                if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
                  FUN_076de438(**(long **)(*(long *)puVar3 + 0xb8),1,1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


