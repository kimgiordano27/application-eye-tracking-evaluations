/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_CanDeserialize
ENTRY_POINT: 04ffebb8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__get_CanDeserialize(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 (*unaff_x19) [16];
  long unaff_x21;
  uint unaff_w22;
  undefined2 unaff_w23;
  long lVar3;
  ulong unaff_x24;
  undefined1 auVar4 [16];
  
  do {
    uVar1 = FUN_04f80ed4(param_1,0);
    unaff_x24 = unaff_x24 - 1;
    if ((uVar1 & 1) == 0) {
LAB_04ffebd0:
      uVar2 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,unaff_w22 + 1);
      auVar4 = FUN_041a0a9c(uVar2,*(undefined8 *)PTR_DAT_067712e8);
      if (unaff_w22 < auVar4._8_4_) {
        *(undefined2 *)(auVar4._0_8_ + (ulong)unaff_w22 * 2) = unaff_w23;
        lVar3 = *(long *)PTR_DAT_06776280;
        if (*(uint *)(*unaff_x19 + 8) < unaff_w22) {
          FUN_05027268(0);
        }
        if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d9a2e0();
        }
        FUN_040f5050();
        auVar4 = FUN_041a06b8(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)PTR_DAT_06770800);
        *unaff_x19 = auVar4;
        return;
      }
LAB_04ffec94:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    unaff_w22 = unaff_w22 - 1;
    if ((int)unaff_w22 < 1) {
      unaff_w22 = 0;
      goto LAB_04ffebd0;
    }
    if (*(uint *)(*unaff_x19 + 8) <= unaff_x24) goto LAB_04ffec94;
    param_1 = (ulong)*(ushort *)(*(long *)*unaff_x19 + unaff_x24 * 2);
    if (*(int *)(*(long *)(unaff_x21 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
  } while( true );
}


