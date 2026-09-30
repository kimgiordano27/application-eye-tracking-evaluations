/*
FUNCTION_NAME: FUN_06e227c4
ENTRY_POINT: 06e227c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_3
*/


void FUN_06e227c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_057ab1f0(param_2,0);
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_076ea6f0 == (code *)0x0) {
        DAT_076ea6f0 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_ScriptableObject_op_Equality
                                         (
                                         "UnityEngine.Networking.UnityWebRequest::get_isModifiable()"
                                         );
      }
      uVar2 = (*DAT_076ea6f0)(param_1);
      if ((uVar2 & 1) != 0) {
        if (DAT_076ea710 == (code *)0x0) {
          DAT_076ea710 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_ScriptableObject_op_Equality
                                           (
                                           "UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)"
                                           );
        }
        iVar1 = (*DAT_076ea710)(param_1,param_2,param_3);
        if (iVar1 == 0) {
          return;
        }
        uVar4 = FUN_06e21040();
        thunk_FUN_032e1da0(PTR_DAT_07279578);
        uVar5 = thunk_FUN_032a56a0();
        FUN_0592371c(uVar5,uVar4,0);
        uVar4 = thunk_FUN_032e1da0(
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<CullingSplit>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar5,uVar4);
      }
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar4 = thunk_FUN_032a56a0();
      uVar5 = thunk_FUN_032e1da0(
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<ContactPairHeader>__
                                );
      FUN_0592371c(uVar4,uVar5,0);
      goto LAB_06e228e4;
    }
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar4 = thunk_FUN_032a56a0();
    puVar3 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<byte>__
    ;
  }
  else {
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar4 = thunk_FUN_032a56a0();
    puVar3 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<BatchCullingOutputDrawCommands>__
    ;
  }
  uVar5 = thunk_FUN_032e1da0(puVar3);
  FUN_0589e7ac(uVar4,uVar5,0);
LAB_06e228e4:
  uVar5 = thunk_FUN_032e1da0(
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<CullingSplit>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar4,uVar5);
}


