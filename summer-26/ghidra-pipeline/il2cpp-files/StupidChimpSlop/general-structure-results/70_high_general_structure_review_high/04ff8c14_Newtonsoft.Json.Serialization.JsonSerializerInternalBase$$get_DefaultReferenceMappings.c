/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 04ff8c14
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  
  puVar1 = PTR_DAT_0665a4d8;
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x20;
  thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x78));
  uVar2 = FUN_02d4dd2c(*unaff_x22,0x12);
  FUN_04f3287c(uVar2,*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_0665a510;
  if (0xc < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
    thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x80),uVar2);
    uVar2 = FUN_02d4dd2c(*unaff_x22,0x12);
    FUN_04f3287c(uVar2,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_0665a528;
    if (0xd < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
      thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x88),uVar2);
      uVar2 = FUN_02d4dd2c(*unaff_x22,0x12);
      FUN_04f3287c(uVar2,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_0665a4f8;
      if (0xe < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
        thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x90),uVar2);
        uVar2 = FUN_02d4dd2c(*unaff_x22,0x12);
        FUN_04f3287c(uVar2,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_0665a530;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
          *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
          thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x98),uVar2);
          uVar2 = FUN_02d4dd2c(*unaff_x22,0x12);
          FUN_04f3287c(uVar2,*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_0665a560;
          if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
            thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0xa0),uVar2);
            uVar2 = FUN_02d4dd2c(*unaff_x22,0x12);
            FUN_04f3287c(uVar2,*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_0665a568;
            if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
              thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0xa8),uVar2);
              uVar2 = FUN_02d4dd2c(*unaff_x22,0x12);
              FUN_04f3287c(uVar2,*(undefined8 *)puVar1,0);
              puVar1 = PTR_DAT_0665a540;
              if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
                thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0xb0),uVar2);
                uVar2 = FUN_02d4dd2c(*unaff_x22,0x12);
                FUN_04f3287c(uVar2,*(undefined8 *)puVar1,0);
                puVar1 = PTR_DAT_06656d18;
                if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
                  thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0xb8),uVar2);
                  *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = unaff_x19;
                  thunk_FUN_02dc1ef0();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


