/*
FUNCTION_NAME: FUN_0351cb88
ENTRY_POINT: 0351cb88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int FUN_0351cb88(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined *puVar6;
  
  if ((DAT_04833029 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                      );
    DAT_04833029 = 1;
  }
  puVar6 = Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__;
  if (param_4 < 2) {
    if (param_2 - 1 < 9999) {
      uVar1 = param_3 - 1;
      if (uVar1 < 0xc) {
        if (((param_2 & 3) == 0) &&
           ((0x28f5c28 < ((param_2 & 0xffff) * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) ||
            ((param_2 & 0xffff) % 400 == 0)))) {
          lVar2 = *(long *)
                   Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
          ;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar2 = *(long *)puVar6;
          }
          plVar7 = (long *)(*(long *)(lVar2 + 0xb8) + 8);
        }
        else {
          lVar2 = *(long *)
                   Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
          ;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar2 = *(long *)puVar6;
          }
          plVar7 = *(long **)(lVar2 + 0xb8);
        }
        lVar2 = *plVar7;
        if (lVar2 != 0) {
          if ((param_3 < *(uint *)(lVar2 + 0x18)) && (uVar1 < *(uint *)(lVar2 + 0x18))) {
            return *(int *)(lVar2 + 0x20 + (ulong)param_3 * 4) -
                   *(int *)(lVar2 + 0x20 + (ulong)uVar1 * 4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_35__);
      uVar3 = FUN_035ac8e0(uVar3,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      puVar6 = Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName_Decode__;
    }
    else {
      uVar3 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar3 = FUN_01f08890(uVar3,2);
      puVar6 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      local_24 = 1;
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar4 = thunk_FUN_01f113fc(uVar4,&local_24);
      FUN_01bc50c0(uVar3);
      FUN_01bc56ec(uVar3,uVar4);
      FUN_01bc5408(uVar3,0,uVar4);
      local_28 = 9999;
      uVar4 = thunk_FUN_01efb3a4(puVar6);
      uVar4 = thunk_FUN_01f113fc(uVar4,&local_28);
      FUN_01bc50c0(uVar3);
      FUN_01bc56ec(uVar3,uVar4);
      FUN_01bc5408(uVar3,1,uVar4);
      uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
      uVar3 = FUN_035ae81c(uVar4,uVar3,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      puVar6 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__;
    }
  }
  else {
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
    uVar3 = FUN_035ac8e0(uVar3,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    puVar6 = Method_Unity_Mathematics_math_select_shuffle_component__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar6);
  FUN_034f3578(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_36__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar3);
}


