/*
FUNCTION_NAME: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<Nullable<Decimal>>$$Start<Min.<MinAsync>d__40>
ENTRY_POINT: 02e3f458
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_file_logging_hits_5;frame_or_lifecycle_behavior
*/


undefined8 *
Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<Decimal>>__Start<Min_<MinAsync>d__40>
          (ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool in_CY;
  undefined8 *puVar3;
  uint in_w3;
  long in_x4;
  ulong in_x10;
  ulong uVar4;
  uint in_w12;
  long in_x13;
  long unaff_x19;
  
  puVar2 = StringLiteral_5907;
  uVar4 = in_x13 << (in_x10 & 0x3f);
  if (in_CY || in_w12 < 0x40) {
    uVar4 = 0;
  }
  puVar3 = (undefined8 *)(param_1 | uVar4);
  uVar1 = (in_w3 & 0xff) >> 4 & 7;
  if (1 < uVar1) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        if (in_x4 == 0) {
          fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                  "DW_EH_PE_datarel is invalid with a datarelBase of 0");
          fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar3 = (undefined8 *)((long)puVar3 + in_x4);
        goto FUN_02e3f520;
      }
      if (uVar1 == 2) {
        fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_textrel pointer encoding not supported");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (uVar1 == 4) {
        fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_funcrel pointer encoding not supported");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar1 == 5) {
        fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_aligned pointer encoding not supported");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
LAB_02e3f66c:
    fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
            "unknown pointer encoding");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar1 != 0) {
    if (uVar1 != 1) goto LAB_02e3f66c;
    puVar3 = (undefined8 *)((long)puVar3 + unaff_x19);
  }
FUN_02e3f520:
  if ((in_w3 >> 7 & 1) == 0) {
    return puVar3;
  }
  return (undefined8 *)*puVar3;
}


