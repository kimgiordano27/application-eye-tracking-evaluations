/*
FUNCTION_NAME: System.Array$$Sort<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 02166498
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void System_Array__Sort<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (undefined8 *param_1,undefined1 param_2 [16])

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  uStack0000000000000020 = 0;
  uStack0000000000000010 = uStack0000000000000000;
  uStack0000000000000018 = uStack0000000000000008;
  uVar1 = FUN_03582fa8();
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w22 + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    param_1[1] = uStack0000000000000008;
    *param_1 = uStack0000000000000000;
    param_1[3] = uStack0000000000000018;
    param_1[2] = uStack0000000000000010;
    param_1[4] = uStack0000000000000020;
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar2 = thunk_FUN_01f117cc();
  uVar3 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2);
}


