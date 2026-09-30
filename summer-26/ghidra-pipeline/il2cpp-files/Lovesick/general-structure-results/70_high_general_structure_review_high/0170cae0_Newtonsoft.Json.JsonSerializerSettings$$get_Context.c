/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Context
ENTRY_POINT: 0170cae0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializerSettings__get_Context(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  int in_w8;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long *unaff_x25;
  long lVar13;
  long unaff_x29;
  undefined1 auVar14 [16];
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  puVar2 = StringLiteral_7028;
  plVar8 = (long *)**(long **)(lVar7 + 0xb8);
  if (plVar8 == (long *)0x0) {
LAB_0170ce5c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = (**(code **)(*plVar8 + 0x178))
                    (plVar8,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(*plVar8 + 0x180));
  auVar14 = FUN_013aeef8(lVar7,*(undefined8 *)puVar2);
  puVar2 = StringLiteral_3573;
  if (DAT_037780a3 == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    DAT_037780a3 = '\x01';
  }
  uVar9 = FUN_015fd038();
  uVar5 = FUN_01773218(uVar9,*(undefined4 *)(unaff_x20 + 0x10),auVar14._0_8_,auVar14._8_8_,0);
  lVar13 = *(long *)puVar2;
  if (auVar14._8_4_ < uVar5) {
    FUN_01792d54(0);
  }
  lVar12 = *(long *)(lVar13 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar10 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_00d5941c(lVar12);
    uVar1 = *(ushort *)(*(long *)(lVar13 + 0x20) + 0x132);
    lVar10 = *(long *)(lVar13 + 0x20);
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  *(long *)(unaff_x29 + -0x78) = auVar14._0_8_;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x5c;
  puVar4 = Method_Mono_Security_X509_X509Certificate_get_DSA__;
  puVar3 = Method_System_Data_SqlTypes_SqlBoolean_get_ByteValue__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
  ;
  (**(code **)(lVar10 + 0x10))(uVar9,lVar10,0,unaff_x29 + -0x78,unaff_x29 + -0x68);
  uVar9 = *(undefined8 *)(unaff_x29 + -0x68);
  if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  auVar14 = FUN_00be1114(uVar9,uVar5,*(undefined8 *)puVar4);
  auVar14 = FUN_013ae8bc(auVar14._0_8_,auVar14._8_8_,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03778a41 == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                      );
    DAT_03778a41 = '\x01';
  }
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar13 = *(long *)puVar2;
  }
  uVar9 = **(undefined8 **)(lVar13 + 0xb8);
  if (DAT_03778a42 == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                      );
    thunk_FUN_00d48444(StringLiteral_3538);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_get_Values__
                      );
    DAT_03778a42 = '\x01';
  }
  uVar11 = FUN_01120480(auVar14._0_8_,auVar14._8_8_,*(undefined8 *)StringLiteral_3538);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar6 = FUN_01771a20(uVar11,auVar14._8_8_ & 0xffffffff,uVar9,0);
  if (lVar7 != 0) {
    if (*(int *)(*(long *)
                  Method_System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_get_Item__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar10 = *unaff_x25;
    lVar13 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    plVar8 = (long *)**(long **)(lVar13 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_0170ce5c;
    (**(code **)(*plVar8 + 0x188))(plVar8,lVar7,0,*(undefined8 *)(*plVar8 + 400));
  }
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


