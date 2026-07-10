/*
FUNCTION_NAME: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$Serialize
ENTRY_POINT: 02fde0f4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_3;telemetry_or_network_hits_7;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Runtime_Serialization_Formatters_Binary_ObjectWriter__Serialize
               (long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 local_5c [4];
  long local_58;
  
  if ((DAT_03ef3980 & 1) == 0) {
    FUN_01c5c92c(PTR_System_Runtime_Serialization_FormatterConverter_TypeInfo_03cbbec8);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_ObjectIDGenerator_TypeInfo_03cbb810);
    FUN_01c5c92c(PTR_System_Collections_Queue_TypeInfo_03cbaef0);
    FUN_01c5c92c(
                PTR_System_Runtime_Serialization_Formatters_Binary_SerObjectInfoInit_TypeInfo_03cbbe70
                );
    FUN_01c5c92c(
                PTR_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo_03cbbd78
                );
    DAT_03ef3980 = 1;
  }
  puVar4 = PTR_System_Runtime_Serialization_FormatterConverter_TypeInfo_03cbbec8;
  puVar3 = PTR_System_Runtime_Serialization_Formatters_Binary_SerObjectInfoInit_TypeInfo_03cbbe70;
  puVar2 = PTR_System_Runtime_Serialization_ObjectIDGenerator_TypeInfo_03cbb810;
  puVar1 = PTR_System_Collections_Queue_TypeInfo_03cbaef0;
  local_58 = 0;
  local_5c[0] = 0;
  if (param_2 == 0) {
    uVar5 = thunk_FUN_01cb9718(PTR_StringLiteral_4217_03cbbfe8);
    uVar5 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_01cb9718(PTR_System_ArgumentNullException_TypeInfo_03cb62e0);
    uVar7 = thunk_FUN_01c8fc48();
    uVar8 = thunk_FUN_01cb9718(PTR_StringLiteral_8473_03cbbff0);
    System_ArgumentNullException___ctor(uVar7,uVar8,uVar5,0);
    uVar5 = thunk_FUN_01cb9718(
                              PTR_Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize___03cbbff8
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5ca98(uVar7,uVar5);
  }
  if (param_4 == 0) {
    uVar5 = thunk_FUN_01cb9718(PTR_object___TypeInfo_03cb62b8);
    uVar5 = FUN_01c5ca18(uVar5,1);
    FUN_01985584();
    puVar1 = PTR_StringLiteral_9648_03cbc000;
    uVar7 = thunk_FUN_01cb9718(PTR_StringLiteral_9648_03cbc000);
    FUN_019867c8(uVar5,uVar7);
    uVar7 = thunk_FUN_01cb9718(puVar1);
    FUN_019867fc(uVar5,0,uVar7);
    uVar7 = thunk_FUN_01cb9718(PTR_StringLiteral_4438_03cbbca0);
    uVar5 = System_Environment__GetResourceString(uVar7,uVar5,0);
    thunk_FUN_01cb9718(PTR_System_ArgumentNullException_TypeInfo_03cb62e0);
    uVar7 = thunk_FUN_01c8fc48();
    uVar8 = thunk_FUN_01cb9718(puVar1);
    System_ArgumentNullException___ctor(uVar7,uVar8,uVar5,0);
    uVar5 = thunk_FUN_01cb9718(
                              PTR_Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize___03cbbff8
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5ca98(uVar7,uVar5);
  }
  *(long *)(param_1 + 0x40) = param_4;
  thunk_FUN_01cc8040((long *)(param_1 + 0x40),param_4);
  plVar10 = (long *)(param_1 + 0x60);
  *plVar10 = param_3;
  thunk_FUN_01cc8040(plVar10,param_3);
  System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteBegin(param_4,0);
  uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)puVar2);
  System_Runtime_Serialization_ObjectIDGenerator___ctor(uVar5,0);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x18),uVar5);
  lVar6 = thunk_FUN_01c8fc48(*(undefined8 *)puVar1);
  System_Collections_Queue___ctor(lVar6,0);
  plVar9 = (long *)(param_1 + 0x10);
  *plVar9 = lVar6;
  thunk_FUN_01cc8040(plVar9,lVar6);
  uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)puVar4);
  System_Runtime_Serialization_FormatterConverter___ctor(uVar5,0);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x80),uVar5);
  uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)puVar3);
  System_Runtime_Serialization_Formatters_Binary_SerObjectInfoInit___ctor();
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x78),uVar5);
  uVar5 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__InternalGetId
                    (param_1,param_2,0,0,local_5c);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  if (*plVar10 == 0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__InternalGetId
                      (param_1,*plVar10,0,0,local_5c);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteSerializedStreamHeader
            (param_1,uVar5,uVar7);
  lVar6 = *(long *)(param_1 + 0x60);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
    plVar10 = (long *)*plVar9;
    if (plVar10 == (long *)0x0) goto LAB_02fde3f8;
    (**(code **)(*plVar10 + 0x208))(plVar10,lVar6,*(undefined8 *)(*plVar10 + 0x210));
  }
  plVar9 = (long *)*plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x208))(plVar9,param_2,*(undefined8 *)(*plVar9 + 0x210));
    plVar9 = (long *)System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetNext
                               (param_1,&local_58);
    puVar1 = PTR_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo_03cbbd78;
    while (plVar9 != (long *)0x0) {
      if (*plVar9 != *(long *)puVar1) {
        plVar9 = (long *)System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__Serialize
                                   (plVar9,*(undefined8 *)(param_1 + 0x28),
                                    *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                                    *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                                    param_1,*(undefined8 *)(param_1 + 0x70));
        lVar6 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetAssemblyId
                          (param_1,plVar9);
        if (plVar9 == (long *)0x0) goto LAB_02fde3f8;
        plVar9[0xe] = lVar6;
      }
      plVar9[0xd] = local_58;
      uVar5 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                        (param_1,plVar9);
      System_Runtime_Serialization_Formatters_Binary_ObjectWriter__Write(param_1,plVar9,uVar5,uVar5)
      ;
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_02fde3f8;
      System_Runtime_Serialization_Formatters_Binary_SerStack__Push(*(long *)(param_1 + 0xb8),uVar5)
      ;
      System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__PutObjectInfo
                (plVar9[0xc],plVar9);
      plVar9 = (long *)System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetNext
                                 (param_1,&local_58);
    }
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteSerializationHeaderEnd
              (param_4,0);
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteEnd(param_4,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      System_Runtime_Serialization_SerializationObjectManager__RaiseOnSerializedEvent
                (*(long *)(param_1 + 0x48),0);
      return;
    }
  }
LAB_02fde3f8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


