/*
FUNCTION_NAME: FUN_06bbb4cc
ENTRY_POINT: 06bbb4cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06bbb4cc(undefined8 *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_0756040d & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                );
    DAT_0756040d = 1;
  }
  puVar1 = PTR_DAT_070c1b68;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    local_60 = FUN_04368824(*(long *)(param_2 + 0x10),*(int *)(param_2 + 0x40) + param_3,
                            *(undefined8 *)
                             Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                           );
    iVar3 = FUN_06b46f4c(local_60 + 8,0);
    if (iVar3 == 1) {
      if (local_60._12_4_ != 6) {
        local_88 = local_60._12_4_;
        local_98 = *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__;
        uStack_90 = 0xffffffffffffffff;
        uVar4 = FUN_05965738(&local_98,0);
        uVar4 = FUN_057b27f0(*(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                             ,uVar4,0);
        if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
        }
        FUN_0698c5bc(uVar4,0);
      }
      uVar4 = 0;
    }
    else {
      FUN_06bbb734(*(undefined4 *)(param_2 + 0x58),local_60._0_8_,local_60._8_8_,&local_50);
      uVar4 = local_50;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_069d69b8(uVar4,0,0);
    uVar2 = uStack_48;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_069d69b8(uVar2,0,0);
      uVar4 = local_40;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar5 = FUN_069d69b8(uVar4,0,0);
        uVar2 = local_38;
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar5 = FUN_069d69b8(uVar2,0,0);
          if ((uVar5 & 1) == 0) {
            uStack_78 = 0;
            local_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            FUN_06c7e540(&local_80,uVar2,0);
          }
        }
        else {
          FUN_06c7e5a8(&local_80,uVar4,0);
        }
      }
      else {
        FUN_06c7e574(&local_80,uVar2,0);
      }
    }
    else {
      FUN_06c7e50c(&local_80,uVar4,0);
    }
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


