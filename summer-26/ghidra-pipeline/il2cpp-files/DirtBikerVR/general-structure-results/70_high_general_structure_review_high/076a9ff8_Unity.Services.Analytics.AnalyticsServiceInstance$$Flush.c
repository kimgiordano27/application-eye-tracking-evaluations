/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$Flush
ENTRY_POINT: 076a9ff8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__Flush(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  *(undefined1 *)(unaff_x21 + 0x82d) = in_w8;
  if (*(long *)(unaff_x20 + 0x188) != 0) {
    FUN_077a41e8(*(long *)(unaff_x20 + 0x188),0);
    lVar3 = *(long *)(unaff_x20 + 0x1a0);
    if (lVar3 != 0) {
      in_stack_000000e8 = *(undefined8 *)(lVar3 + 0x30);
      in_stack_000000e0 = *(undefined8 *)(lVar3 + 0x28);
      in_stack_000000f8 = *(undefined8 *)(lVar3 + 0x40);
      in_stack_000000f0 = *(undefined8 *)(lVar3 + 0x38);
      in_stack_00000100 = *(undefined8 *)(lVar3 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_084913d8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07cbd698(&stack0x000000b8,2,0);
      in_stack_00000098 = in_stack_000000e8;
      in_stack_00000090 = in_stack_000000e0;
      in_stack_000000a8 = in_stack_000000f8;
      in_stack_000000a0 = in_stack_000000f0;
      in_stack_000000b0 = in_stack_00000100;
      in_stack_00000068 = in_stack_000000c0;
      in_stack_00000060 = in_stack_000000b8;
      in_stack_00000078 = in_stack_000000d0;
      in_stack_00000070 = in_stack_000000c8;
      in_stack_00000080 = in_stack_000000d8;
      uVar1 = FUN_07cbdc3c(&stack0x00000090,&stack0x00000060,0);
      if ((uVar1 & 1) == 0) {
        if (*(long *)(unaff_x20 + 0x188) == 0) goto LAB_076aa184;
        uVar2 = FUN_077a3f18();
        *(undefined8 *)(unaff_x20 + 0x118) = uVar2;
        thunk_FUN_03afed3c(unaff_x20 + 0x118,uVar2);
      }
      else {
        if (*(long *)(unaff_x20 + 0x188) == 0) goto LAB_076aa184;
        FUN_077a3f18();
        FUN_076fb9f8();
      }
      if (*(long *)(unaff_x20 + 0x188) != 0) {
        uVar2 = FUN_077a3f18();
        *(undefined8 *)(unaff_x20 + 0x198) = uVar2;
        thunk_FUN_03afed3c(unaff_x20 + 0x198,uVar2);
        if ((*(long *)(unaff_x20 + 0x198) != 0) && (unaff_x19 != 0)) {
          FUN_07cd115c();
          if (*(long *)(unaff_x20 + 0x198) != 0) {
            FUN_07cd115c();
            return;
          }
        }
      }
    }
  }
LAB_076aa184:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


