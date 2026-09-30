/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$GetTypeForCloseToken
ENTRY_POINT: 04d0829c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;strong_file_logging_hits_4
*/


void Newtonsoft_Json_JsonReader__GetTypeForCloseToken(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  int unaff_w20;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  FUN_04ce1954();
  if (0x62 < unaff_w20) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (unaff_w20 <= *(int *)(*(long *)(unaff_x19 + 0x20) + 0x10)) {
      *(int *)(unaff_x19 + 0x18) = unaff_w20;
      return;
    }
  }
  thunk_FUN_02ba3594(PTR_DAT_06312a10);
  FUN_0275e12c();
  uVar2 = FUN_04d0494c();
  uVar3 = thunk_FUN_02ba3594(PTR_DAT_06329fa8);
  uVar3 = FUN_04dbdb84(uVar3,0);
  puVar1 = PTR_DAT_06312310;
  uStack000000000000000c = 99;
  uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x0000000c);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  FUN_0275e13c(lVar6);
  in_stack_00000008 = *(undefined4 *)(lVar6 + 0x10);
  uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
  uVar2 = FUN_04c0b0ac(uVar2,uVar3,uVar4,uVar5,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
  uVar3 = thunk_FUN_02b79644();
  uVar4 = thunk_FUN_02ba3594(PTR_DAT_0632f228);
  FUN_04cf1968(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_02ba3594(PTR_DAT_063300d8);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar3,uVar2);
}


