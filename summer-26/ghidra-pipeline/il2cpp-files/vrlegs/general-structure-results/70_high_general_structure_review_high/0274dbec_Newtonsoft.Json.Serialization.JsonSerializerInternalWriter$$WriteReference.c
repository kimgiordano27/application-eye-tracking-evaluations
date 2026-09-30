/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 0274dbec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int in_w8;
  long unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x29;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined2 uStack_10;
  
  if (in_w8 == 0x4f) {
    uStack_10 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    lVar6 = *(long *)PTR_DAT_03cf0340;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    if (DAT_04121c68 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbe5e8);
      DAT_04121c68 = '\x01';
    }
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    uVar4 = FUN_01ab7534(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40));
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01a46ff8();
      }
      uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe5e8);
      }
      uVar5 = FUN_0277b678(uVar5,0);
      FUN_02792428(uVar5,0);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02753cf4();
    uVar1 = *(uint *)(unaff_x29 + -0xc);
    lVar6 = *(long *)PTR_DAT_03cef220;
    if (0x21 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_027916b4(0);
    }
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
                    /* try { // try from 0274dd18 to 0284de0f has its CatchHandler @ 0274dd18
                       catch() { ... } // from try @ 0274dd18 with catch @ 0274dd18
                       catch() { ... } // from try @ 0274de98 with catch @ 0274dd18
                       catch() { ... } // from try @ 0274def4 with catch @ 0274dd18
                       catch() { ... } // from try @ 0274df30 with catch @ 0274dd18
                       catch() { ... } // from try @ 0274df60 with catch @ 0274dd18 */
    uVar5 = FUN_0200257c(&uStack_50,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    lVar6 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      FUN_01a46ff8(lVar6);
    }
    puVar2 = PTR_DAT_03cfa518;
    *(undefined8 *)(unaff_x29 + -0x20) = uVar5;
    *(ulong *)(unaff_x29 + -0x18) = (ulong)uVar1;
    lVar6 = FUN_0208fbc4(unaff_x29 + -0x20,*(undefined8 *)puVar2);
  }
  else if (in_w8 == 0x52) {
    lVar6 = thunk_FUN_01a47d60(0x1d,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 0274de40 to 0284de43 has its CatchHandler @ 0274def4 */
                    /* try { // try from 0274de44 to 0284de53 has its CatchHandler @ 0274df00 */
    FUN_025bb98c(lVar6,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    /* try { // try from 0274de64 to 0284de6f has its CatchHandler @ 0274df0c */
      thunk_FUN_01a58e78(*unaff_x25);
    }
    FUN_027541f8();
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cf6080 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_026f401c();
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (unaff_x21 != 0) {
      FUN_025bb98c();
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_0275455c();
    lVar6 = FUN_025da36c(uVar5,0);
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0274de10 to 0284de17 has its CatchHandler @ 0274df14 */
                    /* try { // try from 0274de20 to 0284de2b has its CatchHandler @ 0274df08 */
  return lVar6;
}


