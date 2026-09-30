/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 054b83d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  undefined4 unaff_w23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  long *plVar10;
  long *unaff_x29;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
                    /* try { // try from 054b83d4 to 055b83e3 has its CatchHandler @ 054b8520 */
  if ((in_ZR) && ((unaff_w22 & 1) != 0)) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar5 = thunk_FUN_02dd3144();
    uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21880);
    FUN_05452924(uVar5,uVar9,0);
  }
  else {
    if ((unaff_w22 < 2) && (1 < unaff_w20 - 3U)) {
      uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a21888);
      uVar5 = FUN_0534f230(uVar5,0);
      uStack0000000000000008 = unaff_w22;
      uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21890);
      uVar9 = thunk_FUN_02dd2d7c(uVar9,&stack0x00000008);
      uVar8 = thunk_FUN_02dfd288(PTR_DAT_06a21898);
      uVar8 = thunk_FUN_02dd2d7c(uVar8,&stack0x00000004);
      uVar5 = FUN_0536e0dc(uVar5,uVar9,uVar8,0);
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar9 = thunk_FUN_02dd3144();
      FUN_05452924(uVar9,uVar5,0);
FUN_054b88f4:
      uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a218a8);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,uVar5);
    }
                    /* try { // try from 054b83f0 to 055b8403 has its CatchHandler @ 054b851c */
    FUN_05392b94(0);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = FUN_054b90d4();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 054b8418 to 055b841b has its CatchHandler @ 054b8510 */
    if (0 < *(int *)(lVar4 + 0x10)) {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
                    /* try { // try from 054b8430 to 055b844f has its CatchHandler @ 054b8518 */
      uVar5 = FUN_054a7674(lVar4);
      uVar6 = FUN_054a5e0c(uVar5,0);
      if ((uVar6 & 1) == 0) {
        uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a218a0);
        uVar5 = FUN_0534f230(uVar5,0);
        if ((unaff_x24 & 1) == 0) {
          lVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0f540);
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar4 = FUN_054a7674();
        }
        uVar5 = FUN_0536388c(uVar5,lVar4,0);
        thunk_FUN_02dfd288(PTR_DAT_06a18310);
        uVar9 = thunk_FUN_02dd3144();
        FUN_0549afa4(uVar9,uVar5,0);
        goto FUN_054b88f4;
      }
    }
    puVar1 = PTR_DAT_06a18a98;
    if ((unaff_x24 & 1) == 0) {
                    /* try { // try from 054b8450 to 055b8463 has its CatchHandler @ 054b8508 */
      *unaff_x25 = unaff_x26;
      LeanTween__value();
    }
    puVar2 = PTR_DAT_06a19928;
                    /* try { // try from 054b8464 to 055b84fb has its CatchHandler @ 054b8344 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = FUN_054b944c();
    if (lVar4 != **(long **)(*(long *)puVar1 + 0xb8)) {
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a21838);
      FUN_053699d0(lVar7,lVar4,0,0);
      plVar10 = unaff_x19 + 7;
      *plVar10 = lVar7;
      LeanTween__value(plVar10,lVar7);
      lVar4 = *(long *)puVar1;
      lVar7 = *plVar10;
      *(uint *)(unaff_x19 + 10) = unaff_w22;
      iVar3 = *(int *)(lVar4 + 0xe4);
      *(undefined1 *)((long)unaff_x19 + 0x54) = 1;
                    /* try { // try from 054b84fc to 055b84ff has its CatchHandler @ 054b851c */
      if (iVar3 == 0) {
                    /* try { // try from 054b8500 to 055b8503 has its CatchHandler @ 054b8514 */
        thunk_FUN_02df485c();
      }
                    /* try { // try from 054b8504 to 055b8507 has its CatchHandler @ 054b850c */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b8450 with catch @ 054b8508
                       try { // try from 054b8508 to 055b853b has its CatchHandler @ 054b8344 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b8504 with catch @ 054b850c
                        */
      iVar3 = FUN_054b9c74(lVar7,(long)&stack0x00000008 + 4);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b8418 with catch @ 054b8510
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b8500 with catch @ 054b8514
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b8430 with catch @ 054b8518
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b83f0 with catch @ 054b851c
                       catch(type#1 @ 066567d8) { ... } // from try @ 054b84fc with catch @ 054b851c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054b83d4 with catch @ 054b8520
                        */
      *(bool *)((long)unaff_x19 + 0x56) = iVar3 == 1;
      *(byte *)((long)unaff_x19 + 0x55) = iVar3 == 1 & (byte)((uint)unaff_w23 >> 0x1e);
      if (((unaff_w22 == 1) && (unaff_w21 == 0x1000)) && (iVar3 == 1)) {
                    /* try { // try from 054b853c to 055b853f has its CatchHandler @ 054b854c */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
                    /* catch() { ... } // from try @ 054b853c with catch @ 054b854c */
                    /* try { // try from 054b8550 to 055b8557 has its CatchHandler @ 054b8560 */
                    /* try { // try from 054b8558 to 055b8563 has its CatchHandler @ 054b8344 */
        (**(code **)(*unaff_x19 + 0x1e8))();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 054b8550 with catch @ 054b8560
                        */
      }
      FUN_054b9da8();
      if (unaff_w20 == 6) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        (**(code **)(*unaff_x19 + 0x338))();
        lVar4 = (**(code **)(*unaff_x19 + 0x1f8))();
      }
      else {
        lVar4 = 0;
      }
      unaff_x19[9] = lVar4;
      return;
    }
    uVar5 = FUN_054b94e8();
    thunk_FUN_02dfd288(PTR_DAT_06a18a98);
    FUN_0297e1b4();
    uVar5 = FUN_054b956c(uVar5,uStack000000000000000c);
  }
  uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a218a8);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,uVar9);
}


