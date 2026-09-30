/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$Update
ENTRY_POINT: 076df32c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__Update
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  undefined8 *unaff_x21;
  
  FUN_078bb7b4(param_1,param_2,0);
  lVar6 = FUN_078bb7b4();
  uVar5 = FUN_09535918(0);
  if ((lVar6 != 0) && (lVar6 = FUN_078c3d80(lVar6,uVar5,0), lVar6 != 0)) {
    FUN_078bb7b4(lVar6,*unaff_x21,0);
    lVar6 = FUN_078bb7b4();
    uVar7 = FUN_09534bd4(0);
    puVar2 = (undefined8 *)PTR_DAT_09f2f050;
    puVar3 = PTR_DAT_09f2f010;
    if (lVar6 != 0) {
      puVar1 = (undefined8 *)PTR_DAT_09f2f050;
      if ((uVar7 & 1) == 0) {
        puVar1 = (undefined8 *)PTR_DAT_09f2f010;
      }
      FUN_078bb7b4(lVar6,*puVar1,0);
      lVar6 = FUN_078bb7b4();
      uVar7 = FUN_09534c24(0);
      if (lVar6 != 0) {
        puVar1 = puVar2;
        if ((uVar7 & 1) == 0) {
          puVar1 = (undefined8 *)puVar3;
        }
        FUN_078bb7b4(lVar6,*puVar1,0);
        lVar6 = FUN_078bb7b4();
        uVar7 = FUN_09534c74(0);
        if (lVar6 != 0) {
          puVar1 = puVar2;
          if ((uVar7 & 1) == 0) {
            puVar1 = (undefined8 *)puVar3;
          }
          FUN_078bb7b4(lVar6,*puVar1,0);
          lVar6 = FUN_078bb7b4();
          uVar7 = FUN_09535424(0);
          if (lVar6 != 0) {
            puVar1 = puVar2;
            if ((uVar7 & 1) == 0) {
              puVar1 = (undefined8 *)puVar3;
            }
            FUN_078bb7b4(lVar6,*puVar1,0);
            lVar6 = FUN_078bb7b4();
            uVar7 = FUN_095351f4(0);
            if (lVar6 != 0) {
              puVar1 = puVar2;
              if ((uVar7 & 1) == 0) {
                puVar1 = (undefined8 *)puVar3;
              }
              FUN_078bb7b4(lVar6,*puVar1,0);
              lVar6 = FUN_078bb7b4();
              uVar7 = FUN_095354c4(0);
              if (lVar6 != 0) {
                puVar1 = puVar2;
                if ((uVar7 & 1) == 0) {
                  puVar1 = (undefined8 *)puVar3;
                }
                FUN_078bb7b4(lVar6,*puVar1,0);
                lVar6 = FUN_078bb7b4();
                uVar7 = UnityEngine_UI_AnimationTriggers__set_selectedTrigger(0);
                if (lVar6 != 0) {
                  puVar1 = puVar2;
                  if ((uVar7 & 1) == 0) {
                    puVar1 = (undefined8 *)puVar3;
                  }
                  FUN_078bb7b4(lVar6,*puVar1,0);
                  lVar6 = FUN_078bb7b4();
                  uVar7 = FUN_09535294(0);
                  if (lVar6 != 0) {
                    puVar1 = puVar2;
                    if ((uVar7 & 1) == 0) {
                      puVar1 = (undefined8 *)puVar3;
                    }
                    FUN_078bb7b4(lVar6,*puVar1,0);
                    lVar6 = FUN_078bb7b4();
                    uVar7 = FUN_09535334(0);
                    if (lVar6 != 0) {
                      puVar1 = puVar2;
                      if ((uVar7 & 1) == 0) {
                        puVar1 = (undefined8 *)puVar3;
                      }
                      FUN_078bb7b4(lVar6,*puVar1,0);
                      lVar6 = FUN_078bb7b4();
                      uVar7 = FUN_095352e4(0);
                      if (lVar6 != 0) {
                        if ((uVar7 & 1) == 0) {
                          puVar2 = (undefined8 *)puVar3;
                        }
                        FUN_078bb7b4(lVar6,*puVar2,0);
                        lVar6 = FUN_078bb7b4();
                        uVar7 = FUN_09535384(0);
                        puVar3 = PTR_DAT_09f1e540;
                        if (lVar6 != 0) {
                          puVar2 = (undefined8 *)PTR_DAT_09f2f088;
                          if ((uVar7 & 1) == 0) {
                            puVar2 = (undefined8 *)PTR_DAT_09f2f090;
                          }
                          FUN_078bb7b4(lVar6,*puVar2,0);
                          uVar8 = (**(code **)(*unaff_x19 + 0x168))();
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_044a54b4(*(long *)puVar3);
                          }
                          puVar3 = PTR_DAT_09f1e538;
                          FUN_094c652c(uVar8,0);
                          if (DAT_0a522ec6 == '\0') {
                            FUN_04447ba8(PTR_DAT_09f2efb8);
                            DAT_0a522ec6 = '\x01';
                          }
                          puVar4 = PTR_DAT_09f2efb8;
                          uVar8 = **(undefined8 **)(*(long *)PTR_DAT_09f2efb8 + 0xb8);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                          }
                          uVar7 = FUN_0952fedc(uVar8,0);
                          if ((uVar7 & 1) == 0) {
                            return;
                          }
                          if (DAT_0a522ec6 == '\0') {
                            FUN_04447ba8(PTR_DAT_09f2efb8);
                            DAT_0a522ec6 = '\x01';
                          }
                          if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
                            FUN_076de438(**(long **)(*(long *)puVar4 + 0xb8),1,1);
                            return;
                          }
                        }
                      }
                    }
                  }
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


