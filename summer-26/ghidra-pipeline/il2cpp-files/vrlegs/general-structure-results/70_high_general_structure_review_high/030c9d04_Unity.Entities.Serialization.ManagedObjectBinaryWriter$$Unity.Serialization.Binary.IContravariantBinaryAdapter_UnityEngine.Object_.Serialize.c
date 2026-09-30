/*
FUNCTION_NAME: Unity.Entities.Serialization.ManagedObjectBinaryWriter$$Unity.Serialization.Binary.IContravariantBinaryAdapter<UnityEngine.Object>.Serialize
ENTRY_POINT: 030c9d04
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Entities_Serialization_ManagedObjectBinaryWriter__Unity_Serialization_Binary_IContravariantBinaryAdapter<UnityEngine_Object>_Serialize
               (long param_1)

{
  bool in_ZR;
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 uVar3;
  
  if (!in_ZR) {
    if (in_w8 == 3) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      thunk_FUN_01a6ca08(PTR_DAT_03cc9ef0);
      uVar2 = thunk_FUN_01a89e68();
      FUN_0277ba18(uVar2,uVar3,0);
      uVar3 = thunk_FUN_01a6ca08(
                                System_Collections_Generic_Dictionary<BlendShapePreset,_string>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,uVar3);
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar2 = thunk_FUN_01a89e68();
    uVar3 = thunk_FUN_01a6ca08(System_Collections_Generic_Dictionary<Block,_Block>_TypeInfo);
    FUN_0276a4a8(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01a6ca08(
                              System_Collections_Generic_Dictionary<BlendShapePreset,_string>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar2,uVar3);
  }
  if ((*(long *)(param_1 + 0x18) != 0) && (lVar1 = FUN_030c90b8(), lVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02677078(lVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


