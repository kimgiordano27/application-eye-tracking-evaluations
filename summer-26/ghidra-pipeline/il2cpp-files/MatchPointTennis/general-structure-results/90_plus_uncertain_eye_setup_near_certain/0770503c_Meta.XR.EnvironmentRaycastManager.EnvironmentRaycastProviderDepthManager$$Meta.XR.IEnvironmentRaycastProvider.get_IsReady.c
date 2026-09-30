/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsReady
ENTRY_POINT: 0770503c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsReady
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  undefined8 in_stack_00000008;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xe18));
  FUN_04447ba8(PTR_DAT_09f2fe20);
  FUN_04447ba8(PTR_DAT_09f2f820);
  FUN_04447ba8(PTR_DAT_09f2f828);
  FUN_04447ba8(PTR_DAT_09f2f830);
  FUN_04447ba8(PTR_DAT_09f2fec0);
  FUN_04447ba8(PTR_DAT_09f30070);
  *(undefined1 *)(unaff_x20 + 2) = 1;
  in_stack_00000008 = 0;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_0952a454(*(long *)(unaff_x19 + 0x20),0,0);
    lVar2 = FUN_076f25e4();
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        in_stack_00000008 = *(undefined8 *)(lVar2 + 0x20);
        uVar3 = FUN_0613cb1c(&stack0x00000008,*(undefined8 *)PTR_DAT_09f2fec0);
        uVar3 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30070,uVar3,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c33b0(uVar3,0);
        return;
      }
      lVar2 = FUN_076f25e4();
      puVar1 = PTR_DAT_09f2fe18;
      if (lVar2 != 0) {
        plVar4 = (long *)(unaff_x19 + 0x40);
        *plVar4 = *(long *)(lVar2 + 0x28);
        thunk_FUN_044bb4b4(plVar4);
        lVar2 = *plVar4;
        uVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
        FUN_076fe208();
        puVar1 = PTR_DAT_09f2fe20;
        if (lVar2 != 0) {
          FUN_076fbb80(lVar2,uVar3);
          lVar2 = *(long *)(unaff_x19 + 0x40);
          uVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
          FUN_076fe350();
          if (lVar2 != 0) {
            FUN_076fbf28(lVar2,uVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


