/*
FUNCTION_NAME: FUN_0350cefc
ENTRY_POINT: 0350cefc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 FUN_0350cefc(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  uVar1 = param_2 - 1;
  if (0xc < uVar1) {
    local_14 = 1;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_14);
    local_18 = 0xd;
    uVar5 = thunk_FUN_01efb3a4(puVar2);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_18);
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar4 = FUN_033f1b0c(uVar6,uVar4,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName_Decode__
                              );
    FUN_034f3578(uVar5,uVar6,uVar4,0);
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_xxHash3_Hash64Long__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar4);
  }
  lVar3 = *(long *)(param_1 + 0xa8);
  if ((lVar3 == 0) && (lVar3 = FUN_0350a750(param_1), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
    return *(undefined8 *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


