/*
FUNCTION_NAME: FUN_0350c388
ENTRY_POINT: 0350c388
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 FUN_0350c388(long param_1,int param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 == 2) {
    lVar2 = FUN_0350c590(param_1);
  }
  else if (param_3 == 1) {
    lVar2 = Oculus_Interaction_BestSelectInteractorGroup_<>c__<_cctor>b__34_2(param_1,param_4 & 1);
  }
  else if ((param_4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_0350a7c0(param_1);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa8);
    if (lVar2 == 0) {
      lVar2 = FUN_0350a750(param_1);
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (0 < param_2) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (param_2 <= (int)*(uint *)(lVar2 + 0x18)) {
      if (param_2 - 1U < *(uint *)(lVar2 + 0x18)) {
        return *(undefined8 *)(lVar2 + (ulong)(param_2 - 1U) * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
  local_24 = 1;
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
  FUN_01bc50c0(lVar2);
  local_28 = (undefined4)*(undefined8 *)(lVar2 + 0x18);
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_28);
  uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
  uVar3 = FUN_033f1b0c(uVar5,uVar3,uVar4,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName_Decode__
                            );
  FUN_034f3578(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar3);
}


