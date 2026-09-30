/*
FUNCTION_NAME: FUN_023a40c4
ENTRY_POINT: 023a40c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


uint FUN_023a40c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__
                      );
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  local_34[0] = 0;
  local_38[0] = 0;
  *param_2 = 0;
  if (*(int *)(*(long *)
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__;
  uVar4 = *param_1;
  if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_0373b504(param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
  if (*(int *)(*(long *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__
                      );
  }
  uVar4 = FUN_0378e278(uVar4,uVar2,local_34,local_38,0);
  uVar3 = FUN_0377d3c4(uVar4,0);
  if ((uVar3 & 1) != 0) {
    local_50 = param_1[2];
    uStack_58 = param_1[1];
    local_60 = *param_1;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uStack_78 = uStack_58;
    local_80 = local_60;
    local_70 = local_50;
    uVar4 = FUN_0373b5b0(param_2,&local_80,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
    *param_2 = uVar4;
  }
  return uVar3 & 1;
}


