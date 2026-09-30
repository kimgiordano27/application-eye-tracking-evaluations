/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$Flush
ENTRY_POINT: 08163edc
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__Flush(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *plVar3;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000f0;
  undefined8 in_stack_00000100;
  long in_stack_000001b8;
  
  uStack00000000000000c0 = param_1;
  uStack00000000000000d0 = param_1;
  uStack00000000000000e0 = param_1;
  uStack00000000000000f0 = param_1;
  uVar2 = FUN_05aeff88();
  iVar1 = in_stack_00000100._4_4_;
  if ((uVar2 & 1) == 0) {
LAB_08163f28:
    memset(unaff_x19,0,0xb0);
  }
  else {
    plVar3 = *(long **)(unaff_x20 + 0x80);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_0917b370 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f4b260();
    }
    if ((*(byte *)((long)iVar1 * 0xc + *plVar3) & 1) == 0) goto LAB_08163f28;
    if (*(long *)(unaff_x20 + 0x78) == 0) {
      if (*(long *)(unaff_x22 + 0x28) == in_stack_000001b8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      goto LAB_08163fc4;
    }
    FUN_056b5b0c(*(long *)(unaff_x20 + 0x78),in_stack_00000100._4_4_,*(undefined8 *)PTR_DAT_0917b310
                );
    memcpy(&stack0x00000080,&stack0x00000000,0x80);
    FUN_0815ef20(&stack0x00000108,&stack0x00000080);
    memcpy(unaff_x19,&stack0x00000108,0xb0);
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_000001b8) {
    return;
  }
LAB_08163fc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


