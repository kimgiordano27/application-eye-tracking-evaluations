/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteValueAsync
ENTRY_POINT: 0172a578
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextWriter__WriteValueAsync(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  bool in_CY;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint in_w8;
  uint uVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  puVar1 = PTR_DAT_033f38b8;
  if (in_CY && !in_ZR) {
                    /* try { // try from 0172a584 to 0182a587 has its CatchHandler @ 0172a7f4 */
    unaff_x20[5] = unaff_x21;
    if (*(long *)puVar1 != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_0172a684;
      in_w8 = *(uint *)(unaff_x20 + 3);
    }
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<string>>_SetResult__
    ;
    if (2 < in_w8) {
      unaff_x20[6] = *(long *)puVar1;
      in_stack_00000008 = *(undefined8 *)puVar2;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000018 = *(undefined4 *)(unaff_x19 + 0x20);
      lVar3 = FUN_017a7f78(&stack0x00000008,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0)) {
LAB_0172a684:
        uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,0);
      }
      uVar6 = *(uint *)(unaff_x20 + 3);
      if (3 < uVar6) {
        unaff_x20[7] = lVar3;
        if (*(long *)puVar1 != 0) {
          lVar3 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar3 == 0) goto LAB_0172a684;
          uVar6 = *(uint *)(unaff_x20 + 3);
        }
        if (4 < uVar6) {
          unaff_x20[8] = *(long *)puVar1;
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 != 0) {
            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar4 == 0) goto LAB_0172a684;
            uVar6 = *(uint *)(unaff_x20 + 3);
          }
          if (5 < uVar6) {
            unaff_x20[9] = lVar3;
            FUN_01600844();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


