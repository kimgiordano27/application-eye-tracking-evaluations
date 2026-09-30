/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 07186dac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer
               (ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_StringLiteral_50861_091adf38);
    FUN_03d2d2b0(PTR_DAT_091a1be8);
    FUN_03d2d2b0(PTR_DAT_09212d70);
    *(undefined1 *)(unaff_x23 + 0x1b) = 1;
  }
  FUN_071b1334(param_2,param_3,param_4,param_5,0);
  if ((DAT_0984301d & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a13f8);
    DAT_0984301d = 1;
  }
  lVar1 = *(long *)(param_2 + 0x90);
  if (lVar1 == 0) {
    lVar1 = **(long **)(*(long *)PTR_DAT_091a13f8 + 0xb8);
  }
  uVar2 = *(undefined8 *)PTR_StringLiteral_50861_091adf38;
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = FUN_07186ef4(uVar2);
  if (param_3 != 0) {
    FUN_0706db58(param_3,*(undefined8 *)PTR_DAT_09212d70,lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


