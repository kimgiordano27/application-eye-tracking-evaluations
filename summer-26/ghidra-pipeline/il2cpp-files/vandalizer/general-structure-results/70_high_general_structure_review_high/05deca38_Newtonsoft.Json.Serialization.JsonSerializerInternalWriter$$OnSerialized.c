/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 05deca38
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(long param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  short *unaff_x19;
  uint unaff_w20;
  short sVar9;
  int *unaff_x22;
  ulong uVar10;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(param_1);
  }
  uVar4 = FUN_05e192a4();
  if ((uVar4 & 1) == 0) {
LAB_05decac8:
    iVar7 = 0x21;
    iVar3 = 2;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
                    /* try { // try from 05deca74 to 05eeca9f has its CatchHandler @ 05decb5c */
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iVar3 = FUN_05ddf76c(&stack0x00000018);
    if (iVar3 == 1) {
      iVar7 = 0x1c;
                    /* try { // try from 05decad8 to 05eecb2f has its CatchHandler @ 05dec8e8 */
    }
    else {
      if (iVar3 == 2) {
                    /* try { // try from 05decaa4 to 05eecab7 has its CatchHandler @ 05decb44 */
        if (*(int *)(*(long *)PTR_DAT_075e85f8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        lVar5 = FUN_05d6ba18(0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
                    /* try { // try from 05decab8 to 05eecabf has its CatchHandler @ 05decb40 */
        in_stack_00000008 = FUN_05d6e85c();
                    /* try { // try from 05decac4 to 05eecad7 has its CatchHandler @ 05decb60 */
        goto LAB_05decac8;
      }
      iVar7 = 0x1b;
    }
  }
  if ((int)unaff_w20 < iVar7) {
    uVar6 = 0;
    *unaff_x22 = 0;
  }
  else {
    *unaff_x22 = iVar7;
    if (unaff_w20 < 0x1b) {
LAB_05dece54:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = FUN_05ddf3d4(&stack0x00000018);
    uVar10 = uVar4 & 0xffffffff;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    /* try { // try from 05decb30 to 05eecb33 has its CatchHandler @ 05decb68 */
                    /* try { // try from 05decb34 to 05eecb37 has its CatchHandler @ 05decb50 */
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x25);
    }
                    /* try { // try from 05decb38 to 05eecb3b has its CatchHandler @ 05decb48 */
    sVar9 = (short)(uVar10 / 10);
                    /* try { // try from 05decb3c to 05eecb3f has its CatchHandler @ 05decb60 */
                    /* catch() { ... } // from try @ 05decab8 with catch @ 05decb40
                       try { // try from 05decb40 to 05eecb83 has its CatchHandler @ 05dec8e8 */
                    /* catch() { ... } // from try @ 05decaa4 with catch @ 05decb44 */
                    /* catch() { ... } // from try @ 05decb38 with catch @ 05decb48 */
                    /* catch() { ... } // from try @ 05deca30 with catch @ 05decb4c */
                    /* catch() { ... } // from try @ 05decb34 with catch @ 05decb50 */
                    /* catch() { ... } // from try @ 05deca08 with catch @ 05decb54 */
                    /* catch() { ... } // from try @ 05dec9f0 with catch @ 05decb58 */
                    /* catch() { ... } // from try @ 05deca74 with catch @ 05decb5c */
                    /* catch() { ... } // from try @ 05decac4 with catch @ 05decb60
                       catch() { ... } // from try @ 05decb3c with catch @ 05decb60 */
                    /* catch() { ... } // from try @ 05deca14 with catch @ 05decb68
                       catch() { ... } // from try @ 05decb30 with catch @ 05decb68 */
    sVar1 = (short)(uVar10 / 100);
    sVar2 = (short)(uVar10 / 1000);
    *unaff_x19 = sVar2 + 0x30;
                    /* try { // try from 05decb84 to 05eecb9b has its CatchHandler @ 05decc34 */
    unaff_x19[3] = (short)uVar4 + sVar9 * -10 + 0x30;
    unaff_x19[2] = sVar9 + sVar1 * -10 + 0x30;
    unaff_x19[1] = sVar1 + sVar2 * -10 + 0x30;
    unaff_x19[4] = 0x2d;
                    /* try { // try from 05decba4 to 05eecba7 has its CatchHandler @ 05decc2c */
    uVar4 = FUN_05de2c70(&stack0x00000018);
                    /* try { // try from 05decba8 to 05eecbff has its CatchHandler @ 05decc48 */
    sVar9 = (short)((uVar4 & 0xffffffff) / 10);
    unaff_x19[5] = sVar9 + 0x30;
    unaff_x19[6] = (short)uVar4 + sVar9 * -10 + 0x30;
    unaff_x19[7] = 0x2d;
    uVar4 = FUN_05de2920(&stack0x00000018);
    sVar9 = (short)((uVar4 & 0xffffffff) / 10);
    unaff_x19[8] = sVar9 + 0x30;
    unaff_x19[9] = (short)uVar4 + sVar9 * -10 + 0x30;
    unaff_x19[10] = 0x54;
    uVar4 = FUN_05de2a6c(&stack0x00000018);
    sVar9 = (short)((uVar4 & 0xffffffff) / 10);
                    /* try { // try from 05decc00 to 05eecc1b has its CatchHandler @ 05dec8e8 */
    unaff_x19[0xb] = sVar9 + 0x30;
                    /* try { // try from 05decc1c to 05eecc2b has its CatchHandler @ 05decc34 */
    unaff_x19[0xc] = (short)uVar4 + sVar9 * -10 + 0x30;
    unaff_x19[0xd] = 0x3a;
    uVar4 = FUN_05de2be8(&stack0x00000018);
    sVar9 = (short)((uVar4 & 0xffffffff) / 10);
                    /* catch() { ... } // from try @ 05decba4 with catch @ 05decc2c */
                    /* catch() { ... } // from try @ 05decb84 with catch @ 05decc34
                       catch() { ... } // from try @ 05decc1c with catch @ 05decc34 */
    unaff_x19[0xe] = sVar9 + 0x30;
    unaff_x19[0xf] = (short)uVar4 + sVar9 * -10 + 0x30;
    unaff_x19[0x10] = 0x3a;
    uVar4 = FUN_05de2e54(&stack0x00000018);
    sVar9 = (short)((uVar4 & 0xffffffff) / 10);
    unaff_x19[0x11] = sVar9 + 0x30;
    unaff_x19[0x12] = (short)uVar4 + sVar9 * -10 + 0x30;
    unaff_x19[0x13] = 0x2e;
    uVar4 = FUN_05ddf7e0(&stack0x00000018);
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_075e27b8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4(*(long *)(*(long *)PTR_DAT_075e27b8 + 0x20));
    }
    if (DAT_07a454db == '\0') {
      FUN_031f20f4(PTR_DAT_075e34e0);
      DAT_07a454db = '\x01';
    }
    lVar5 = in_stack_00000008;
    lVar8 = 0;
    uVar4 = uVar4 % 10000000;
    do {
      sVar9 = (short)(uVar4 / 10);
      *(short *)((long)unaff_x19 + lVar8 + 0x34) = (short)uVar4 + sVar9 * -10 + 0x30;
      lVar8 = lVar8 + -2;
      uVar4 = uVar4 / 10;
    } while ((int)lVar8 != -0xc);
    unaff_x19[0x14] = sVar9 + 0x30;
    if (iVar3 == 1) {
      if (unaff_w20 < 0x1c) goto LAB_05dece54;
      unaff_x19[0x1b] = 0x5a;
    }
    else if (iVar3 == 2) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar4 = FUN_05e192bc(lVar5,0,0);
      if ((uVar4 & 1) == 0) {
        sVar9 = 0x2b;
      }
      else {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        in_stack_00000008 = FUN_05e18d3c(-lVar5,0);
        sVar9 = 0x2d;
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar4 = FUN_05e1862c(&stack0x00000008,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x25);
      }
      if (unaff_w20 < 0x21) goto LAB_05dece54;
      sVar1 = (short)((uVar4 & 0xffffffff) / 10);
      unaff_x19[0x1f] = sVar1 + 0x30;
      unaff_x19[0x20] = (short)uVar4 + sVar1 * -10 + 0x30;
      unaff_x19[0x1e] = 0x3a;
      uVar4 = FUN_05e1859c(&stack0x00000008,0);
      sVar1 = (short)((uVar4 & 0xffffffff) / 10);
      unaff_x19[0x1b] = sVar9;
      unaff_x19[0x1c] = sVar1 + 0x30;
      unaff_x19[0x1d] = (short)uVar4 + sVar1 * -10 + 0x30;
    }
    uVar6 = 1;
  }
  return uVar6;
}


