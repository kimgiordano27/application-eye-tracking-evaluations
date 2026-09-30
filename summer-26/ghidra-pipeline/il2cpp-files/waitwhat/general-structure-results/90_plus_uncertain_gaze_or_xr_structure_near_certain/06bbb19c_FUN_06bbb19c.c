/*
FUNCTION_NAME: FUN_06bbb19c
ENTRY_POINT: 06bbb19c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long * FUN_06bbb19c(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [16];
  
  if ((DAT_0756040c & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(PTR_DAT_0711e420);
    FUN_03188a78(PTR_DAT_0711e428);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_070f5830);
    FUN_03188a78(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__);
    FUN_03188a78(PTR_DAT_070f2dc8);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Unselect__
                );
    DAT_0756040c = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*(long *)(param_1 + 0x10) != 0) {
    local_40 = FUN_04368824(*(long *)(param_1 + 0x10),*(int *)(param_1 + 0x40) + param_2,
                            *(undefined8 *)
                             Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                           );
    iVar2 = FUN_06b46f4c(local_40 + 8,0);
    if (iVar2 == 1) {
      if (local_40._12_4_ == 6) {
        return (long *)0x0;
      }
      local_48 = local_40._12_4_;
      local_58 = *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__;
      uStack_50 = 0xffffffffffffffff;
      uVar3 = FUN_05965738(&local_58,0);
      puVar5 = (undefined8 *)
               Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
      ;
LAB_06bbb3f4:
      uVar3 = FUN_057b27f0(*puVar5,uVar3,0);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
      }
      FUN_0698c5bc(uVar3,0);
      return (long *)0x0;
    }
    auVar1 = local_40;
    if (iVar2 == 6) {
      if (local_40._0_8_ != 0) {
        plVar6 = (long *)FUN_06b47598(local_40._0_8_,local_40._8_8_,0);
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        if (*plVar6 != *(long *)PTR_DAT_0711e428) {
          return (long *)0x0;
        }
        return plVar6;
      }
    }
    else {
      if (iVar2 != 5) {
        local_48 = FUN_06b46f4c(local_40 + 8,0);
        local_58 = *(undefined8 *)PTR_DAT_070f2dc8;
        uStack_50 = 0xffffffffffffffff;
        uVar3 = FUN_05965738(&local_58,0);
        puVar5 = (undefined8 *)
                 Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
        ;
        goto LAB_06bbb3f4;
      }
      if (local_40._0_8_ != 0) {
        uVar3 = FUN_06b474d0(local_40._0_8_,local_40._8_8_,0);
        uVar4 = FUN_057bebf8(uVar3,0);
        plVar6 = (long *)0x0;
        if ((uVar4 & 1) == 0) {
          uVar7 = *(undefined8 *)PTR_DAT_0711e420;
          if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar7 = FUN_0593e698(uVar7,0);
          uVar8 = *(undefined4 *)(param_1 + 0x58);
          if (*(int *)(*(long *)PTR_DAT_070f5830 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)PTR_DAT_070f5830);
          }
          plVar6 = (long *)FUN_06c59644(uVar8,uVar3,uVar7,0);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
          }
          else if (*plVar6 != *(long *)PTR_DAT_0711e428) {
            plVar6 = (long *)0x0;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar4 = FUN_069d8404(plVar6,0,0);
        if ((uVar4 & 1) != 0) {
          uVar3 = FUN_057b5e54(*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Unselect__
                               ,uVar3,0);
          if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
          }
          FUN_0698c5bc(uVar3,0);
          return plVar6;
        }
        return plVar6;
      }
    }
  }
  local_40 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


