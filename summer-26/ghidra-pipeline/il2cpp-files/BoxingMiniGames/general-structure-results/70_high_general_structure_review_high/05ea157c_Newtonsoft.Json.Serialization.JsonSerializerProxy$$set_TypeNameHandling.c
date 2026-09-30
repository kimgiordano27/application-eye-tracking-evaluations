/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 05ea157c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (param_1 != 0) {
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffffe) != 0) {
      unaff_x19[5] = unaff_x21;
      thunk_FUN_036b7ad0();
      puVar1 = PTR_DAT_079f4610;
      uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x3c);
      lVar2 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),(long)&stack0x00000008 + 4
                                );
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_0367fd24(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_05ea1668;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar2;
        thunk_FUN_036b7ad0(unaff_x19 + 6,lVar2);
        uStack0000000000000008 = *(undefined4 *)(unaff_x20 + 0x1c);
        lVar2 = thunk_FUN_0367fa58(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_0367fd24(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_05ea1668;
        puVar1 = PTR_DAT_07a18270;
        if ((*(uint *)(unaff_x19 + 3) & 0xfffffffc) != 0) {
          unaff_x19[7] = lVar2;
          thunk_FUN_036b7ad0(unaff_x19 + 7,lVar2);
          FUN_05c98bb4(*(undefined8 *)puVar1);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_05ea1668:
  uVar4 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar4,0);
}


