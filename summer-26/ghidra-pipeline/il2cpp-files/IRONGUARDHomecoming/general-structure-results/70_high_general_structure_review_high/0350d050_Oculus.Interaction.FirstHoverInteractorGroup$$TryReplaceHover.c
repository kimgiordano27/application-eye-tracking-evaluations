/*
FUNCTION_NAME: Oculus.Interaction.FirstHoverInteractorGroup$$TryReplaceHover
ENTRY_POINT: 0350d050
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_FirstHoverInteractorGroup__TryReplaceHover(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000008;
  
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar2 = thunk_FUN_01f113fc(uVar2,&stack0x0000000c);
  in_stack_00000008 = 0xd;
  uVar3 = thunk_FUN_01efb3a4(puVar1);
  uVar3 = thunk_FUN_01f113fc(uVar3,&stack0x00000008);
  uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
  uVar2 = FUN_033f1b0c(uVar4,uVar2,uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(
                            Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName_Decode__
                            );
  FUN_034f3578(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_xxHash3_Hash64Long_BurstManaged__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


