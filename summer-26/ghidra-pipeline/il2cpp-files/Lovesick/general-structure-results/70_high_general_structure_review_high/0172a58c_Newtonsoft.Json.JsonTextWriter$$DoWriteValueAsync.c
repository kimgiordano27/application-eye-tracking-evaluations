/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$DoWriteValueAsync
ENTRY_POINT: 0172a58c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextWriter__DoWriteValueAsync(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  uint uVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (param_1 != 0) {
    lVar2 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*unaff_x20 + 0x40));
    if (lVar2 == 0) goto LAB_0172a684;
    in_w8 = *(uint *)(unaff_x20 + 3);
  }
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<string>>_SetResult__
  ;
  if (2 < in_w8) {
    unaff_x20[6] = *unaff_x22;
    in_stack_00000008 = *(undefined8 *)puVar1;
    in_stack_00000010 = 0xffffffffffffffff;
                    /* try { // try from 0172a5d0 to 0182a60f has its CatchHandler @ 0172a80c */
    in_stack_00000018 = *(undefined4 *)(unaff_x19 + 0x20);
    lVar2 = FUN_017a7f78(&stack0x00000008,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0)) {
LAB_0172a684:
      uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar4,0);
    }
    uVar5 = *(uint *)(unaff_x20 + 3);
    if (3 < uVar5) {
      unaff_x20[7] = lVar2;
      if (*unaff_x22 != 0) {
        lVar2 = thunk_FUN_00d6225c(*unaff_x22,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar2 == 0) goto LAB_0172a684;
        uVar5 = *(uint *)(unaff_x20 + 3);
      }
      if (4 < uVar5) {
        unaff_x20[8] = *unaff_x22;
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 != 0) {
          lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar3 == 0) goto LAB_0172a684;
          uVar5 = *(uint *)(unaff_x20 + 3);
        }
        if (5 < uVar5) {
          unaff_x20[9] = lVar2;
          FUN_01600844();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


