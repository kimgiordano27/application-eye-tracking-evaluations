/*
FUNCTION_NAME: Firebase.FutureString.SWIG_CompletionDelegate$$EndInvoke
ENTRY_POINT: 03735580
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Firebase_FutureString_SWIG_CompletionDelegate__EndInvoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int in_w9;
  byte *pbVar3;
  ulong in_x10;
  uint in_w11;
  ulong in_x12;
  ulong uVar4;
  byte *in_x13;
  ulong in_x14;
  ulong in_x15;
  long unaff_x19;
  byte *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  puVar1 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  while( true ) {
    in_x10 = in_x15 | in_x10;
    if (((uint)in_x14 >> 7 & 1) == 0) break;
    if (in_x13 == unaff_x20) {
      fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
              "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
      fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    in_x14 = (ulong)*in_x13;
    param_1 = param_1 + 1;
    in_x15 = (in_x14 & 0x7f) << (in_x12 & 0x3f);
    in_x12 = in_x12 + 7;
    in_x13 = in_x13 + 1;
  }
  *(long *)(unaff_x29 + -8) = param_1;
  puVar1 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  uVar4 = -1L << (in_x12 & 0x3f);
  if (0x38 < (int)in_x12 - 7U || (uint)in_x14 < 0x40) {
    uVar4 = 0;
  }
  if (in_w9 < 0x8e) {
    unaff_x21 = unaff_x24;
    if (((in_w9 == 0x6e) || (unaff_x21 = unaff_x25, in_w9 == 0x6f)) ||
       (unaff_x21 = unaff_x22, in_w9 == 0x8d)) goto LAB_03735654;
  }
  else if (in_w9 < 0x90) {
    if ((in_w9 == 0x8e) || (unaff_x21 = unaff_x24, in_w9 == 0x8f)) goto LAB_03735654;
  }
  else {
    unaff_x21 = unaff_x25;
    if ((in_w9 == 0x90) || (unaff_x21 = unaff_x23, in_w9 == 0x92)) goto LAB_03735654;
  }
  if (0x1c < in_w11) {
    fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
            "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  unaff_x21 = (long *)(unaff_x19 + (ulong)in_w11 * 8);
LAB_03735654:
  *(long *)(unaff_x27 + 8) = *unaff_x21 + (in_x10 | uVar4);
  pbVar3 = *(byte **)(unaff_x29 + -8);
  if (unaff_x20 <= pbVar3) {
    return *(long *)(unaff_x27 + 8);
  }
  *(byte **)(unaff_x29 + -8) = pbVar3 + 1;
  puVar1 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  if (*pbVar3 - 3 < 0x92) {
                    /* WARNING: Could not recover jumptable at 0x03735540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*(code *)((ulong)*(ushort *)(unaff_x26 + (ulong)(*pbVar3 - 3) * 2) * 4 + 0x3735544))();
    return lVar2;
  }
  fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
          "libunwind: %s - %s\n","evaluateExpression","DWARF opcode not implemented");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


