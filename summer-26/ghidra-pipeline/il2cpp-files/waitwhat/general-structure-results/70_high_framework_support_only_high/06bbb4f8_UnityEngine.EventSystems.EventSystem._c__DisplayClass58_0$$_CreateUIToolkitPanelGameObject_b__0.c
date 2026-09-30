/*
FUNCTION_NAME: UnityEngine.EventSystems.EventSystem.<>c__DisplayClass58_0$$<CreateUIToolkitPanelGameObject>b__0
ENTRY_POINT: 06bbb4f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_EventSystems_EventSystem_<>c__DisplayClass58_0__<CreateUIToolkitPanelGameObject>b__0
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0x418));
  FUN_03188a78(
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
              );
  FUN_03188a78(PTR_DAT_070c1b68);
  FUN_03188a78(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__);
  FUN_03188a78(
              Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
              );
  *(undefined1 *)(unaff_x22 + 0x40d) = 1;
  puVar1 = PTR_DAT_070c1b68;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _in_stack_00000040 =
         FUN_04368824(*(long *)(unaff_x20 + 0x10),*(int *)(unaff_x20 + 0x40) + unaff_w21,
                      *(undefined8 *)
                       Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                     );
    iVar3 = FUN_06b46f4c(&stack0x00000048,0);
    if (iVar3 == 1) {
      if (in_stack_00000048._4_4_ != 6) {
        in_stack_00000018 = in_stack_00000048._4_4_;
        in_stack_00000008 =
             *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__;
        in_stack_00000010 = 0xffffffffffffffff;
        uVar4 = FUN_05965738(&stack0x00000008,0);
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
      FUN_06bbb734(*(undefined4 *)(unaff_x20 + 0x58),in_stack_00000040,in_stack_00000048,
                   &stack0x00000050);
      uVar4 = in_stack_00000050;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_069d69b8(uVar4,0,0);
    uVar2 = in_stack_00000058;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_069d69b8(uVar2,0,0);
      uVar4 = in_stack_00000060;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar5 = FUN_069d69b8(uVar4,0,0);
        uVar2 = in_stack_00000068;
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar5 = FUN_069d69b8(uVar2,0,0);
          if ((uVar5 & 1) == 0) {
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
          }
          else {
            FUN_06c7e540(&stack0x00000020,uVar2,0);
          }
        }
        else {
          FUN_06c7e5a8(&stack0x00000020,uVar4,0);
        }
      }
      else {
        FUN_06c7e574(&stack0x00000020,uVar2,0);
      }
    }
    else {
      FUN_06c7e50c(&stack0x00000020,uVar4,0);
    }
    unaff_x19[1] = in_stack_00000028;
    *unaff_x19 = in_stack_00000020;
    unaff_x19[3] = in_stack_00000038;
    unaff_x19[2] = in_stack_00000030;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


