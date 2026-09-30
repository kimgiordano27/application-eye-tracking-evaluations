/*
FUNCTION_NAME: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<Nullable<Decimal>>$$Start<Max.<MaxAsync>d__40>
ENTRY_POINT: 02e3f420
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_file_logging_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Type propagation algorithm not settling */

byte * Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<Decimal>>__Start<Max_<MaxAsync>d__40>
                 (ulong param_1,undefined8 param_2,long *param_3,byte *param_4,uint param_5,
                 long param_6)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  byte *pbVar4;
  long in_x9;
  ulong in_x10;
  ulong uVar5;
  byte *unaff_x19;
  
  puVar3 = StringLiteral_5907;
  pbVar4 = unaff_x19;
  do {
    if (pbVar4 == param_4) {
      fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getSLEB128",
              "truncated sleb128 expression");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar1 = *pbVar4;
    in_x9 = in_x9 + 1;
    uVar5 = in_x10 & 0x3f;
    in_x10 = in_x10 + 7;
    param_1 = ((ulong)bVar1 & 0x7f) << uVar5 | param_1;
    pbVar4 = pbVar4 + 1;
  } while ((char)bVar1 < '\0');
  *param_3 = in_x9;
  puVar3 = StringLiteral_5907;
  uVar5 = -1L << (in_x10 & 0x3f);
  if (0x38 < (int)in_x10 - 7U || bVar1 < 0x40) {
    uVar5 = 0;
  }
  pbVar4 = (byte *)(param_1 | uVar5);
  uVar2 = (param_5 & 0xff) >> 4 & 7;
  if (1 < uVar2) {
    if (uVar2 < 4) {
      if (uVar2 == 3) {
        if (param_6 == 0) {
          fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                  "DW_EH_PE_datarel is invalid with a datarelBase of 0");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar4 = pbVar4 + param_6;
        goto FUN_02e3f520;
      }
      if (uVar2 == 2) {
        fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_textrel pointer encoding not supported");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (uVar2 == 4) {
        fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_funcrel pointer encoding not supported");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar2 == 5) {
        fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_aligned pointer encoding not supported");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
LAB_02e3f66c:
    fprintf((FILE *)(StringLiteral_5907 + 0x130),"libunwind: %s - %s\n","getEncodedP",
            "unknown pointer encoding");
    fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar2 != 0) {
    if (uVar2 != 1) goto LAB_02e3f66c;
    pbVar4 = pbVar4 + (long)unaff_x19;
  }
FUN_02e3f520:
  if ((param_5 >> 7 & 1) == 0) {
    return pbVar4;
  }
  return *(byte **)pbVar4;
}


