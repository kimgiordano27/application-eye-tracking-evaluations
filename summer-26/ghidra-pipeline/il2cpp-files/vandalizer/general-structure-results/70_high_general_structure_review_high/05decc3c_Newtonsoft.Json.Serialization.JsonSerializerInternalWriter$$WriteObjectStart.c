/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 05decc3c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(void)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  undefined2 in_w8;
  long lVar4;
  undefined2 in_w9;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  undefined2 unaff_w22;
  undefined2 uVar5;
  short unaff_w23;
  ulong unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000008;
  
                    /* try { // try from 05decc3c to 05eecc3f has its CatchHandler @ 05deccc0 */
                    /* try { // try from 05decc40 to 05eecc63 has its CatchHandler @ 05dec8e8 */
  *(undefined2 *)(unaff_x19 + 0x1c) = in_w8;
  *(undefined2 *)(unaff_x19 + 0x1e) = in_w9;
                    /* catch() { ... } // from try @ 05decba8 with catch @ 05decc48 */
  *(undefined2 *)(unaff_x19 + 0x20) = unaff_w22;
  uVar3 = FUN_05de2e54(&stack0x00000018);
  sVar1 = (short)(uint)((uVar3 & 0xffffffff) * (unaff_x24 & 0xffffffff) >> 0x23);
                    /* try { // try from 05decc64 to 05eecc67 has its CatchHandler @ 05decc80 */
  *(short *)(unaff_x19 + 0x22) = sVar1 + 0x30;
  *(short *)(unaff_x19 + 0x24) = (short)uVar3 + sVar1 * unaff_w23 + 0x30;
  *(undefined2 *)(unaff_x19 + 0x26) = 0x2e;
  uVar3 = FUN_05ddf7e0(&stack0x00000018);
                    /* catch() { ... } // from try @ 05decc64 with catch @ 05decc80 */
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_075e27b8 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 05decc9c to 05eeccab has its CatchHandler @ 05deccc0 */
    FUN_0322bef4(*(long *)(*(long *)PTR_DAT_075e27b8 + 0x20));
  }
                    /* try { // try from 05deccac to 05eeccb7 has its CatchHandler @ 05dec8e8 */
                    /* try { // try from 05deccb8 to 05eeccbf has its CatchHandler @ 05deccc0 */
                    /* catch() { ... } // from try @ 05decc3c with catch @ 05deccc0
                       catch() { ... } // from try @ 05decc9c with catch @ 05deccc0
                       catch() { ... } // from try @ 05deccb8 with catch @ 05deccc0 */
  if (DAT_07a454db == '\0') {
    FUN_031f20f4(PTR_DAT_075e34e0);
    DAT_07a454db = '\x01';
  }
  lVar2 = in_stack_00000008;
  lVar4 = 0;
  uVar3 = uVar3 % 10000000;
  do {
    sVar1 = (short)(uVar3 / 10);
    *(short *)(unaff_x19 + 0x34 + lVar4) = (short)uVar3 + sVar1 * -10 + 0x30;
    lVar4 = lVar4 + -2;
    uVar3 = uVar3 / 10;
  } while ((int)lVar4 != -0xc);
  *(short *)(unaff_x19 + 0x28) = sVar1 + 0x30;
  if (unaff_w21 == 1) {
    if (unaff_w20 < 0x1c) {
LAB_05dece54:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(undefined2 *)(unaff_x19 + 0x36) = 0x5a;
  }
  else if (unaff_w21 == 2) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = FUN_05e192bc(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar5 = 0x2b;
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      in_stack_00000008 = FUN_05e18d3c(-lVar2,0);
      uVar5 = 0x2d;
    }
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = FUN_05e1862c(&stack0x00000008,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x25);
    }
    if (unaff_w20 < 0x21) goto LAB_05dece54;
    sVar1 = (short)((uVar3 & 0xffffffff) / 10);
    *(short *)(unaff_x19 + 0x3e) = sVar1 + 0x30;
    *(short *)(unaff_x19 + 0x40) = (short)uVar3 + sVar1 * -10 + 0x30;
    *(undefined2 *)(unaff_x19 + 0x3c) = 0x3a;
    uVar3 = FUN_05e1859c(&stack0x00000008,0);
    sVar1 = (short)((uVar3 & 0xffffffff) / 10);
    *(undefined2 *)(unaff_x19 + 0x36) = uVar5;
    *(short *)(unaff_x19 + 0x38) = sVar1 + 0x30;
    *(short *)(unaff_x19 + 0x3a) = (short)uVar3 + sVar1 * -10 + 0x30;
  }
  return 1;
}


