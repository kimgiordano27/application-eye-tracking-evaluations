/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 0170cbc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializer__Populate(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long lVar11;
  long unaff_x29;
  undefined1 auVar12 [16];
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x10));
  *(undefined1 *)(unaff_x24 + 0xa3) = 1;
  uVar7 = FUN_015fd038();
  uVar5 = FUN_01773218(uVar7,*(undefined4 *)(unaff_x20 + 0x10));
  lVar11 = *unaff_x26;
  if (unaff_w22 < uVar5) {
    FUN_01792d54(0);
  }
  lVar10 = *(long *)(lVar11 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar8 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar1 = *(ushort *)(*(long *)(lVar11 + 0x20) + 0x132);
    lVar8 = *(long *)(lVar11 + 0x20);
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_00d5941c(lVar8);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x21;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x5c;
  puVar4 = Method_Mono_Security_X509_X509Certificate_get_DSA__;
  puVar3 = Method_System_Data_SqlTypes_SqlBoolean_get_ByteValue__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
  ;
  (**(code **)(lVar8 + 0x10))(uVar7,lVar8,0,unaff_x29 + -0x78,unaff_x29 + -0x68);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
  if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  auVar12 = FUN_00be1114(uVar7,uVar5,*(undefined8 *)puVar4);
  auVar12 = FUN_013ae8bc(auVar12._0_8_,auVar12._8_8_,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03778a41 == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                      );
    DAT_03778a41 = '\x01';
  }
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar2;
  }
  uVar7 = **(undefined8 **)(lVar11 + 0xb8);
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
  uVar9 = FUN_01120480(auVar12._0_8_,auVar12._8_8_,*(undefined8 *)StringLiteral_3538);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar6 = FUN_01771a20(uVar9,auVar12._8_8_ & 0xffffffff,uVar7,0);
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)
                  Method_System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_get_Item__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar8 = *unaff_x25;
    lVar11 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar11 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    if ((long *)**(long **)(lVar11 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*(long *)**(long **)(lVar11 + 0xb8) + 0x188))();
  }
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


