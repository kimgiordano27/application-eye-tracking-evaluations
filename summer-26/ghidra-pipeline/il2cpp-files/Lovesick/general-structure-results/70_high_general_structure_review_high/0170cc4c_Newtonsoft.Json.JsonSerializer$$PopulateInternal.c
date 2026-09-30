/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$PopulateInternal
ENTRY_POINT: 0170cc4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializer__PopulateInternal(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  undefined8 uVar7;
  long lVar8;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar9 [16];
  
  lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x40);
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x21;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x5c;
  puVar3 = Method_Mono_Security_X509_X509Certificate_get_DSA__;
  puVar2 = Method_System_Data_SqlTypes_SqlBoolean_get_ByteValue__;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
  ;
  (**(code **)(lVar6 + 0x10))();
  uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
  if ((*(byte *)(*(long *)(unaff_x27 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  auVar9 = FUN_00be1114(uVar7,unaff_w20,*(undefined8 *)puVar3);
  auVar9 = FUN_013ae8bc(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03778a41 == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                      );
    DAT_03778a41 = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  uVar7 = **(undefined8 **)(lVar6 + 0xb8);
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
  uVar5 = FUN_01120480(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)StringLiteral_3538);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar4 = FUN_01771a20(uVar5,auVar9._8_8_ & 0xffffffff,uVar7,0);
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)
                  Method_System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_get_Item__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar8 = *unaff_x25;
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    if ((long *)**(long **)(lVar6 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*(long *)**(long **)(lVar6 + 0xb8) + 0x188))();
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


