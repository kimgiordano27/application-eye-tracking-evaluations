/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 050d1380
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 unaff_w19;
  int unaff_w20;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x23 + 0xbdd) = 1;
  lVar3 = *unaff_x26;
  *(undefined4 *)(unaff_x29 + -0x94) = 0;
  iVar5 = *(int *)(lVar3 + 0xe4);
  *(undefined8 *)(unaff_x27 + 0x72) = 0;
  *(undefined8 *)(unaff_x27 + 0x6a) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  if (unaff_w20 == 0) {
    if (iVar5 == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      iVar5 = -1;
LAB_050d14ac:
      FUN_050db220(unaff_w19,iVar5);
      return;
    }
  }
  else {
    if (iVar5 == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_050d7f3c();
    uVar4 = FUN_0504574c();
    iVar5 = *(int *)(unaff_x29 + -0x94);
                    /* try { // try from 050d13fc to 051d140b has its CatchHandler @ 050d1418 */
    if (((uVar2 & 0xffdf) == 0x44) || ((uVar2 & 0xffdf) == 0x47 && iVar5 < 1)) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) goto LAB_050d14ac;
    }
    else {
                    /* try { // try from 050d140c to 051d141b has its CatchHandler @ 050d1140 */
      if ((uVar2 & 0xffdf) == 0x58) {
                    /* catch() { ... } // from try @ 050d130c with catch @ 050d1418
                       catch() { ... } // from try @ 050d13fc with catch @ 050d1418 */
                    /* try { // try from 050d141c to 051d141f has its CatchHandler @ 050d1428 */
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
                    /* try { // try from 050d1420 to 051d142b has its CatchHandler @ 050d1140 */
          thunk_FUN_02f6670c();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050d141c with catch @ 050d1428
                        */
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
          FUN_050db570(unaff_w19,uVar2 - 0x21,iVar5);
          return;
        }
      }
      else {
        iVar1 = *(int *)(*unaff_x26 + 0xe4);
        *(undefined8 *)(unaff_x27 + 0x72) = 0;
        *(undefined8 *)(unaff_x27 + 0x6a) = 0;
        *(undefined8 *)(unaff_x29 + -0x78) = 0;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = 0;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        *(undefined8 *)(unaff_x29 + -0x58) = 0;
        *(undefined8 *)(unaff_x29 + -0x60) = 0;
        *(undefined8 *)(unaff_x29 + -0x48) = 0;
        *(undefined8 *)(unaff_x29 + -0x50) = 0;
        *(undefined8 *)(unaff_x29 + -0x38) = 0;
        *(undefined8 *)(unaff_x29 + -0x40) = 0;
        *(undefined8 *)(unaff_x29 + -0x28) = 0;
        *(undefined8 *)(unaff_x29 + -0x30) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        if (iVar1 == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050e3d40(unaff_w19,unaff_x29 + -0x90,0);
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        System_Collections_Hashtable_SyncHashtable__get_SyncRoot
                  (unaff_x29 + -0xc0,&uStack_40,0x20,0);
        if ((uVar2 & 0xffff) == 0) {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050d8884(unaff_x29 + -0xc0,unaff_x29 + -0x90);
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050d82b8(unaff_x29 + -0xc0,unaff_x29 + -0x90,uVar2,iVar5,uVar4,0);
        }
        FUN_04f86f00(unaff_x29 + -0xc0,0);
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


