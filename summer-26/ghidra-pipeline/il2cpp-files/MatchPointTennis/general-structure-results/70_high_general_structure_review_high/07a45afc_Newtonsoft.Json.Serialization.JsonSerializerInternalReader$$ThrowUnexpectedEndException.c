/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 07a45afc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
               (long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  int unaff_w22;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xbf0));
  FUN_04447ba8(PTR_DAT_09f3aff0);
  FUN_04447ba8(PTR_DAT_09f3b5d0);
  *(undefined1 *)(unaff_x26 + 0x16e) = 1;
  lVar3 = *unaff_x19;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  *(undefined8 *)(unaff_x29 + -0x2e) = 0;
  *(undefined8 *)(unaff_x29 + -0x36) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  if (unaff_w22 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
  }
  else {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_07a40c18();
    uVar4 = FUN_079b8cc0();
    iVar1 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar2 & 0xffdf) != 0x44) && ((uVar2 & 0xffdf) != 0x47 || 0 < iVar1)) {
      if ((uVar2 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar2 = FUN_07a454a0();
      }
      else {
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar4;
        lVar3 = *unaff_x19;
        *(undefined8 *)(unaff_x29 + -0x2e) = 0;
        *(undefined8 *)(unaff_x29 + -0x36) = 0;
        *(undefined8 *)(unaff_x29 + -0x48) = 0;
        *(undefined8 *)(unaff_x29 + -0x50) = 0;
        *(undefined8 *)(unaff_x29 + -0x38) = 0;
        *(undefined8 *)(unaff_x29 + -0x40) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = 0;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        *(undefined8 *)(unaff_x29 + -0x58) = 0;
        *(undefined8 *)(unaff_x29 + -0x60) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        *(undefined8 *)(unaff_x29 + -0x78) = 0;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        *(undefined8 *)(unaff_x29 + -0x98) = 0;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
                    /* try { // try from 07a45c8c to 07b45caf has its CatchHandler @ 07a45de8 */
        FUN_07a45904();
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_078d0a64(unaff_x29 + -0xd0,&uStack_40,0x20,0);
        if ((uVar2 & 0xffff) == 0) {
                    /* try { // try from 07a45cf4 to 07b45d03 has its CatchHandler @ 07a45dd4 */
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
                    /* try { // try from 07a45d08 to 07b45d13 has its CatchHandler @ 07a45dd0 */
          FUN_07a41528(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
        }
        else {
                    /* try { // try from 07a45ccc to 07b45cd7 has its CatchHandler @ 07a45ddc */
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_07a40f98(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,iVar1,
                       *(undefined8 *)(unaff_x29 + -0xd8),0);
                    /* try { // try from 07a45cf0 to 07b45cf3 has its CatchHandler @ 07a45dcc */
        }
                    /* try { // try from 07a45d28 to 07b45d57 has its CatchHandler @ 07a45de4 */
        uVar2 = FUN_078d0b6c(unaff_x29 + -0xd0);
      }
      goto LAB_07a45c24;
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
  }
  uVar2 = FUN_07a44f50();
LAB_07a45c24:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


