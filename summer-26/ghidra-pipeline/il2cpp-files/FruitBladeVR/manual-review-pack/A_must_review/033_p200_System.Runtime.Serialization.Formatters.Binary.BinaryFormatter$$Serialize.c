/*
FUNCTION_NAME: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter$$Serialize
ENTRY_POINT: 02fd4a8c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_3;telemetry_or_network_hits_4
*/


void System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Serialize
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_03ef3944 & 1) == 0) {
    FUN_01c5c92c(PTR_System_Runtime_Serialization_Formatters_Binary_InternalFE_TypeInfo_03cbbc88);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_TypeInfo_03cbbcc0);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_Formatters_Binary___BinaryWriter_TypeInfo_03cbbcc8
                );
    DAT_03ef3944 = 1;
  }
  if (param_2 != 0) {
    lVar5 = thunk_FUN_01c8fc48(*(undefined8 *)
                                PTR_System_Runtime_Serialization_Formatters_Binary_InternalFE_TypeInfo_03cbbc88
                              );
    System_Runtime_Serialization_Formatters_Binary_InternalFE___ctor(lVar5,0);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x1c) = 2;
      puVar4 = PTR_System_Runtime_Serialization_Formatters_Binary___BinaryWriter_TypeInfo_03cbbcc8;
      puVar3 = PTR_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_TypeInfo_03cbbcc0;
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1 + 0x30);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      lVar6 = thunk_FUN_01c8fc48(*(undefined8 *)puVar3);
      System_Runtime_Serialization_Formatters_Binary_ObjectWriter___ctor
                (lVar6,uVar7,uVar9,uVar8,lVar5,uVar1,0);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      uVar7 = thunk_FUN_01c8fc48(*(undefined8 *)puVar4);
      System_Runtime_Serialization_Formatters_Binary___BinaryWriter___ctor
                (uVar7,param_2,lVar6,uVar2);
      if (lVar6 != 0) {
        System_Runtime_Serialization_Formatters_Binary_ObjectWriter__Serialize
                  (lVar6,param_3,param_4,uVar7,param_5 & 1,0);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar6 + 0x88);
        thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x40));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar7 = thunk_FUN_01cb9718(PTR_object___TypeInfo_03cb62b8);
  uVar7 = FUN_01c5ca18(uVar7,1);
  FUN_01985584();
  FUN_019867c8(uVar7,0);
  FUN_019867fc(uVar7,0,0);
  uVar8 = thunk_FUN_01cb9718(PTR_StringLiteral_4438_03cbbca0);
  uVar7 = System_Environment__GetResourceString(uVar8,uVar7,0);
  thunk_FUN_01cb9718(PTR_System_ArgumentNullException_TypeInfo_03cb62e0);
  uVar8 = thunk_FUN_01c8fc48();
  uVar9 = thunk_FUN_01cb9718(PTR_StringLiteral_9650_03cbbca8);
  System_ArgumentNullException___ctor(uVar8,uVar9,uVar7,0);
  uVar7 = thunk_FUN_01cb9718(
                            PTR_Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize___03cbbcd0
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar8,uVar7);
}


