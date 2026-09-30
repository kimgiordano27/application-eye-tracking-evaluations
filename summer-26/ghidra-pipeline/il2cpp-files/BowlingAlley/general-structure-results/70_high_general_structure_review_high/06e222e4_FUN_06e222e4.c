/*
FUNCTION_NAME: FUN_06e222e4
ENTRY_POINT: 06e222e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_06e222e4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DAT_076ea6f0 == (code *)0x0) {
    DAT_076ea6f0 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_ScriptableObject_op_Equality
                                     ("UnityEngine.Networking.UnityWebRequest::get_isModifiable()");
  }
  uVar2 = (*DAT_076ea6f0)(param_1);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar3 = thunk_FUN_032a56a0();
    uVar4 = thunk_FUN_032e1da0(
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<ARCoreFaceSubsystem_ARCoreProvider_Triangle<int>>__
                              );
    FUN_0592371c(uVar3,uVar4,0);
    uVar4 = thunk_FUN_032e1da0(
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<ARCoreFaceSubsystem_ARCoreProvider_Triangle<ushort>>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar3,uVar4);
  }
  if (DAT_076ea6d0 == (code *)0x0) {
    DAT_076ea6d0 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_ScriptableObject_op_Equality
                                     (
                                     "UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)"
                                     );
  }
  iVar1 = (*DAT_076ea6d0)(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  uVar3 = FUN_06e21040();
  thunk_FUN_032e1da0(PTR_DAT_07279578);
  uVar4 = thunk_FUN_032a56a0();
  FUN_0592371c(uVar4,uVar3,0);
  uVar3 = thunk_FUN_032e1da0(
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<ARCoreFaceSubsystem_ARCoreProvider_Triangle<ushort>>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar4,uVar3);
}


