/*
FUNCTION_NAME: FUN_037c6bb8
ENTRY_POINT: 037c6bb8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_037c6bb8(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  
  puVar2 = StringLiteral_2360;
  if ((DAT_03ff80e2 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da3db0);
    thunk_FUN_01ad9084(StringLiteral_2360);
    thunk_FUN_01ad9084(PTR_DAT_03da3db8);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da3dc0);
    DAT_03ff80e2 = 1;
  }
  puVar3 = PTR_DAT_03da3dc0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar5 = UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable__get_trackRotation
                    (*(undefined8 *)puVar3,0);
  puVar2 = 
  Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
  ;
  if (lVar5 != 0) {
    FUN_01e975a4(lVar5,param_2,*(undefined8 *)PTR_DAT_03da3db0);
    plVar6 = (long *)thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_02eeeb74(plVar6,0);
    puVar2 = PTR_DAT_03da3db8;
    if (param_1 != 0) {
      if (0 < *(int *)(param_1 + 0x10)) {
        iVar8 = 0;
        do {
          uVar4 = FUN_02ee1ff0(param_1,iVar8,0);
          if ((param_2 == 0) ||
             (uVar7 = FUN_028e3ae4(param_2,uVar4,*(undefined8 *)puVar2), plVar6 == (long *)0x0))
          goto 
          UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand__set_selectPressed
          ;
          uVar1 = param_3;
          if ((uVar7 & 1) == 0) {
            uVar1 = uVar4;
          }
          FUN_02ef0e3c(plVar6,uVar1,0);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x10));
      }
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x037c6d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        return;
      }
    }
  }
UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand__set_selectPressed
  :
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


