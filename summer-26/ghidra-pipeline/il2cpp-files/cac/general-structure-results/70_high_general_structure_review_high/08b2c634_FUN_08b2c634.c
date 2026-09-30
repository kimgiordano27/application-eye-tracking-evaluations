/*
FUNCTION_NAME: FUN_08b2c634
ENTRY_POINT: 08b2c634
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


void FUN_08b2c634(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_08b2c6f0();
  if ((uVar2 & 1) == 0) {
    thunk_FUN_03f786f8(PTR_DAT_09111b70);
    uVar3 = thunk_FUN_03f4e68c();
    uVar4 = thunk_FUN_03f786f8(
                              UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_TypeInfo
                              );
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar3,uVar4,0)
    ;
    uVar4 = thunk_FUN_03f786f8(UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar3,uVar4);
  }
  iVar1 = FUN_08b2c598(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  uVar3 = FUN_08b2b880();
  thunk_FUN_03f786f8(PTR_DAT_09111b70);
  uVar4 = thunk_FUN_03f4e68c();
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03f786f8(UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar4,uVar3);
}


