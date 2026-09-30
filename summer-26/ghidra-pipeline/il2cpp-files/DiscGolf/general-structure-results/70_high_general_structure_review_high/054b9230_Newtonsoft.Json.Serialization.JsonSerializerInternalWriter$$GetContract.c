/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 054b9230
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  short sVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  
  if (unaff_w24 < 2) {
    lVar2 = *unaff_x22;
    if (unaff_w24 == 1) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar2);
        lVar2 = *unaff_x22;
      }
      if ((*(short *)(*(long *)(lVar2 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x20 + 0x10))) {
                    /* try { // try from 054b9278 to 055b929f has its CatchHandler @ 054b93b4 */
        sVar1 = FUN_053674f8();
        lVar2 = *unaff_x22;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar2);
          lVar2 = *unaff_x22;
        }
                    /* try { // try from 054b92ac to 055b92bf has its CatchHandler @ 054b93b8 */
        if (*(short *)(*(long *)(lVar2 + 0xb8) + 0x18) == sVar1) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar2);
          }
          if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar2 = *(long *)(*unaff_x22 + 0xb8) + 0x18;
          goto LAB_054b9370;
        }
      }
    }
  }
  else {
                    /* try { // try from 054b92e0 to 055b92e3 has its CatchHandler @ 054b93a8 */
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar2);
      lVar2 = *unaff_x22;
    }
    if (*(short *)(*(long *)(lVar2 + 0xb8) + 10) == 0x5c) {
      sVar1 = FUN_053674f8();
      lVar2 = *unaff_x22;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar2);
        lVar2 = *unaff_x22;
      }
      if (*(short *)(*(long *)(lVar2 + 0xb8) + 0x18) == sVar1) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar2);
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar2 = *(long *)(*unaff_x22 + 0xb8) + 10;
LAB_054b9370:
        FUN_054484f0(lVar2,0);
        FUN_05362cb4();
        return;
      }
    }
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar2);
  }
  FUN_054bd7a8();
  return;
}


