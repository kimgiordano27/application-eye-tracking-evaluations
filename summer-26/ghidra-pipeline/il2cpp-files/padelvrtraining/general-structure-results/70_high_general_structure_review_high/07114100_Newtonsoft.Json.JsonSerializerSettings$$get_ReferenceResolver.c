/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceResolver
ENTRY_POINT: 07114100
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ReferenceResolver(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w22;
  ulong uVar2;
  long *unaff_x23;
  
  while( true ) {
    FUN_0711424c();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 7) break;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar1 = FUN_07110974();
    if (lVar1 == 0) goto LAB_0711417c;
    FUN_0711289c(lVar1,unaff_w22);
    FUN_0711424c();
    lVar1 = FUN_07110974();
    if (lVar1 == 0) goto LAB_0711417c;
    FUN_07112098(lVar1,unaff_w22);
  }
  lVar1 = FUN_071112a8();
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      if ((long)*(int *)(lVar1 + 0x18) <= (long)uVar2) {
        FUN_0711424c();
        FUN_0711424c();
        FUN_0711424c();
        FUN_0711424c();
        FUN_0711424c();
        *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
        thunk_FUN_03d1023c();
        return;
      }
      lVar1 = FUN_071112a8();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      uVar2 = uVar2 + 1;
      FUN_0711424c();
      lVar1 = FUN_071112a8();
    } while (lVar1 != 0);
  }
LAB_0711417c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


