/*
FUNCTION_NAME: Amazon.S3.Model.PutObjectRequest$$get_AutoCloseStream
ENTRY_POINT: 04198418
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Amazon_S3_Model_PutObjectRequest__get_AutoCloseStream(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  undefined1 unaff_w26;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    *(undefined1 *)(unaff_x25 + 0xbb9) = unaff_w26;
    do {
      lVar1 = *unaff_x23;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar1 = *unaff_x23;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) {
LAB_04198774:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_041fcf78();
      FUN_041982b8(&stack0x00000080);
      if (unaff_x22 == 0) goto LAB_04198774;
      FUN_06b5c564();
      uVar2 = FUN_041fde18();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*unaff_x20 + 0x1a8))();
        unaff_x19[7] = 0;
        unaff_x19[6] = 0;
        unaff_x19[1] = 0;
        *unaff_x19 = 0;
        unaff_x19[3] = 0;
        unaff_x19[2] = 0;
        unaff_x19[5] = 0;
        unaff_x19[4] = 0;
        *(undefined4 *)(unaff_x19 + 7) = 10;
        unaff_x19[6] = unaff_x22;
        thunk_FUN_03d1023c();
        return;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
    } while (*(char *)(unaff_x25 + 0xbb9) != '\0');
    FUN_03d2d2b0();
  } while( true );
}


