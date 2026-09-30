/*
FUNCTION_NAME: Oculus.Interaction.BestHoverInteractorGroup$$get_CandidateProperties
ENTRY_POINT: 0350a374
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_BestHoverInteractorGroup__get_CandidateProperties(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined4 uStack0000000000000004;
  ulong in_stack_00000008;
  
  if ((*(byte *)(unaff_x20 + 0xfb0) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_WellKnownServiceTypeEntry__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsSerializer_GetConverter__);
    *(undefined1 *)(unaff_x20 + 0xfb0) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000008 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsSerializer_GetConverter__;
  puVar2 = Method_System_Runtime_Remoting_WellKnownServiceTypeEntry__ctor__;
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((in_stack_00000008 & 0xff) == 0) {
    (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  }
  else {
    if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03532f80(0);
    in_stack_00000008 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
    uStack0000000000000004 =
         System_Security_SecurityElement__Escape(&stack0x00000008,*(undefined8 *)puVar2);
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000004);
    FUN_0340f420(uVar4,*(undefined8 *)puVar3,uVar5,0);
  }
  return;
}


