/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ConstructorHandling
ENTRY_POINT: 0760fe38
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_ConstructorHandling(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  *(undefined1 *)(unaff_x21 + 0xdc7) = in_w8;
  FUN_076bca34();
  if (unaff_x20 == 0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar5 = thunk_FUN_040b4efc();
    uVar3 = thunk_FUN_040dedf8(PTR_DAT_092b9f20);
    FUN_075ce0d0(uVar5,uVar3,0);
    uVar3 = thunk_FUN_040dedf8(PTR_DAT_092d84c0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar5,uVar3);
  }
  uVar5 = *(undefined8 *)PTR_DAT_092d84b0;
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0768890c(uVar5,0);
  plVar2 = (long *)FUN_07572704();
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_092d00b0;
    bVar1 = *(byte *)(lVar4 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == lVar4)) {
      *(long **)(unaff_x19 + 0x10) = plVar2;
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == lVar4)) goto LAB_0760ff08;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(plVar2);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
LAB_0760ff08:
  thunk_FUN_040ec700(unaff_x19 + 0x10,plVar2);
  return;
}


