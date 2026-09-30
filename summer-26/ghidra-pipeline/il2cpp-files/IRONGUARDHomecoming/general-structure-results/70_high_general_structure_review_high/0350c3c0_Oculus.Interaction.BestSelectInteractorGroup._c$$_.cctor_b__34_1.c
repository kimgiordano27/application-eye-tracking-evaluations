/*
FUNCTION_NAME: Oculus.Interaction.BestSelectInteractorGroup.<>c$$<.cctor>b__34_1
ENTRY_POINT: 0350c3c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 Oculus_Interaction_BestSelectInteractorGroup_<>c__<_cctor>b__34_1(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  lVar2 = FUN_0350c590();
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (0 < unaff_w19) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_w19 <= (int)*(uint *)(lVar2 + 0x18)) {
      if (unaff_w19 - 1U < *(uint *)(lVar2 + 0x18)) {
        return *(undefined8 *)(lVar2 + (ulong)(unaff_w19 - 1U) * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
  uStack000000000000000c = 1;
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar3 = thunk_FUN_01f113fc(uVar3,&stack0x0000000c);
  FUN_01bc50c0(lVar2);
  in_stack_00000008 = (undefined4)*(undefined8 *)(lVar2 + 0x18);
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  uVar4 = thunk_FUN_01f113fc(uVar4,&stack0x00000008);
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


