/*
FUNCTION_NAME: FUN_03748a64
ENTRY_POINT: 03748a64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined4 FUN_03748a64(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_28;
  uint local_24;
  
  FUN_03748b60();
  if (0x3e < param_2) {
    local_24 = param_2;
    uVar1 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_<WithUsages>b__14_0__
                              );
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_24);
    local_28 = 0x3f;
    uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar2 = thunk_FUN_01f113fc(uVar2,&local_28);
    uVar3 = thunk_FUN_01efb3a4(
                              Field_<PrivateImplementationDetails>_015F56076A7116B30EF1118CDEBC1D9AC3346FB8E70E65FD15C491CDAD02CE4A
                              );
    uVar2 = FUN_03406290(uVar3,uVar2,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_SetCapacity<IntPtr>__
                              );
    FUN_034f48f0(uVar3,uVar4,uVar1,uVar2,0);
    uVar1 = thunk_FUN_01efb3a4(
                              Field_<PrivateImplementationDetails>_7D641FCAC6E94B5D3D73F2AC634C919D198912C8CBFFFD2813F54F86F17BE208
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar1);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    if (param_2 < *(uint *)(lVar5 + 0x18)) {
      return *(undefined4 *)(lVar5 + (ulong)param_2 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


