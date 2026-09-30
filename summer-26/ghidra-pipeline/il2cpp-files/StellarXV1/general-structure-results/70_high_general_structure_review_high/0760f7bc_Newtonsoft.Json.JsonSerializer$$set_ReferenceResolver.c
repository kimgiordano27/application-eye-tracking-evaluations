/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 0760f7bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ReferenceResolver
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  undefined8 *puVar6;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x40);
  if ((*(byte *)(unaff_x19 + 0xdc2) & 1) == 0) {
    FUN_04077588(PTR_DAT_09287040);
    *(undefined1 *)(unaff_x19 + 0xdc2) = 1;
  }
  plVar2 = (long *)FUN_04077674(*puVar6,2);
  puVar1 = PTR_DAT_09285980;
  uStack000000000000000c = param_3;
  lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x0000000c);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_0760f89c:
    uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_040ec700(plVar2 + 4,lVar3);
    in_stack_00000008 = unaff_w20;
    lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_0760f89c;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar3;
      thunk_FUN_040ec700(plVar2 + 5,lVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


