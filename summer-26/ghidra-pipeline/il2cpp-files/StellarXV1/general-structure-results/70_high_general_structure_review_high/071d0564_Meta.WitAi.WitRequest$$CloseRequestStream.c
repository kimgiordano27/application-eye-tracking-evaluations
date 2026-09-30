/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseRequestStream
ENTRY_POINT: 071d0564
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Meta_WitAi_WitRequest__CloseRequestStream(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint uVar1;
  uint in_w11;
  int in_w12;
  uint in_w13;
  long lVar2;
  long in_x14;
  long in_x15;
  long unaff_x19;
  
  do {
    uVar1 = in_w13;
    if (-1 < *(int *)(in_x14 + in_x15)) {
      *(undefined1 *)(unaff_x19 + 0x10) = *(undefined1 *)(in_x14 + (long)(int)in_w10 * 0x18 + 8);
      uVar1 = in_w10;
LAB_071d0590:
      return uVar1 < in_w9;
    }
    if (in_w11 == uVar1) {
      *(undefined1 *)(unaff_x19 + 0x10) = 0;
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      goto LAB_071d0590;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar1 + 1;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    in_x15 = (long)(int)uVar1 * (long)in_w12;
    in_x14 = lVar2 + 0x20;
    in_w13 = uVar1 + 1;
    in_w10 = uVar1;
  } while( true );
}


