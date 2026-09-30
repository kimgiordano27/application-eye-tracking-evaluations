/*
FUNCTION_NAME: Oculus.Interaction.SnapInteractable$$InteractorAdded
ENTRY_POINT: 03544e48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void Oculus_Interaction_SnapInteractable__InteractorAdded(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_0483312d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0483312d = 1;
  }
  FUN_035ac8e8(param_1,0);
  if (-1 < param_2) {
    if (param_2 == 0) {
      lVar6 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_01ecafa0(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      uVar2 = **(undefined8 **)(lVar5 + 0xb8);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar2 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                           ,param_2);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
    thunk_FUN_01f51358(param_1 + 0x10,uVar2);
    return;
  }
  uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_Instantiate__);
  puVar1 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_13__;
  uVar3 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_13__
                            );
  uVar2 = FUN_033f0c40(uVar2,uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  FUN_034f3578(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_n_f32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


