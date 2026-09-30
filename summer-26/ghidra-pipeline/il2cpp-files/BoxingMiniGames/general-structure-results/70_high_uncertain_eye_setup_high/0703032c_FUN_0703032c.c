/*
FUNCTION_NAME: FUN_0703032c
ENTRY_POINT: 0703032c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_0703032c(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined1 local_44 [4];
  
  puVar2 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  if ((DAT_07eebdda & 1) == 0) {
                    /* try { // try from 07030364 to 07130493 has its CatchHandler @ 07030364
                       catch() { ... } // from try @ 07030364 with catch @ 07030364
                       catch() { ... } // from try @ 07030590 with catch @ 07030364
                       catch() { ... } // from try @ 070305f4 with catch @ 07030364
                       catch() { ... } // from try @ 07030638 with catch @ 07030364
                       catch() { ... } // from try @ 0703065c with catch @ 07030364 */
    FUN_03642964(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_03642964(PTR_DAT_079fd888);
    FUN_03642964(PTR_DAT_079fd7c0);
    FUN_03642964(PTR_DAT_079f7a50);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    FUN_03642964(TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo);
    DAT_07eebdda = 1;
  }
  puVar3 = PTR_DAT_079ff4c8;
  lVar10 = *(long *)puVar2;
  local_44[0] = 0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar10 = *(long *)puVar2;
  }
  FUN_06eaa264(local_44,**(undefined8 **)(lVar10 + 0xb8),0);
  local_58 = 0;
  puStack_50 = local_44;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = FUN_07030244(param_2,param_3);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar11 = FUN_07043090(param_1,*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo);
  FUN_070351a8(param_2,param_3,lVar11);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(long *)(lVar11 + 0xd8) = param_2;
  thunk_FUN_036b7ad0((long *)(lVar11 + 0xd8),param_2);
  if (param_3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(param_3 + 0x98);
  }
  *(undefined8 *)(lVar11 + 0xe0) = uVar13;
  thunk_FUN_036b7ad0();
  bVar5 = false;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    bVar5 = *(char *)(*(long *)(lVar10 + 0xf0) + 0x11) != '\0';
                    /* try { // try from 07030494 to 0713049b has its CatchHandler @ 07030618 */
  }
  if (param_2 != 0) {
    uVar12 = FUN_07173864(param_2,0);
    if ((uVar12 & 1) == 0) {
                    /* try { // try from 070304d4 to 071304d7 has its CatchHandler @ 070305f8 */
      bVar14 = false;
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar10 = FUN_0702e180();
                    /* try { // try from 070304c0 to 071304c3 has its CatchHandler @ 07030600 */
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      bVar14 = 1 < *(int *)(lVar10 + 0x54);
    }
                    /* try { // try from 070304d8 to 071304eb has its CatchHandler @ 07030604 */
    puVar2 = PTR_DAT_079f4e28;
    if ((bVar14 & bVar5) == 0) {
      uVar7 = 1;
    }
    else {
      uVar13 = FUN_07174e44(param_2,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar12 = FUN_071c0684(uVar13,0,0);
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar10 = FUN_0702e180();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar7 = *(undefined4 *)(lVar10 + 0x54);
      }
      else {
        lVar10 = FUN_07174e44(param_2,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar7 = FUN_071a3c58(lVar10,0);
      }
    }
                    /* try { // try from 07030560 to 07130563 has its CatchHandler @ 0703060c */
    if ((*(byte *)(lVar11 + 0x193) & bVar5) != 0) {
      uVar13 = FUN_07174e44(param_2,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 07030588 to 0713058f has its CatchHandler @ 070305fc */
        thunk_FUN_036a1978();
      }
                    /* try { // try from 07030590 to 071305e7 has its CatchHandler @ 07030364 */
      uVar12 = FUN_071c24dc(uVar13,0,0);
      puVar4 = TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo;
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (DAT_07eebec9 == '\0') {
          FUN_03642964(TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo);
          DAT_07eebec9 = '\x01';
        }
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_036a1978();
                    /* try { // try from 070305e8 to 071305eb has its CatchHandler @ 07030614 */
          lVar10 = *(long *)puVar4;
        }
                    /* try { // try from 070305ec to 071305ef has its CatchHandler @ 07030610 */
                    /* try { // try from 070305f0 to 071305f3 has its CatchHandler @ 07030608 */
        uVar7 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x20);
      }
    }
                    /* try { // try from 070305f4 to 07130633 has its CatchHandler @ 07030364 */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 070304d4 with catch @ 070305f8
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 07030588 with catch @ 070305fc
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 070304c0 with catch @ 07030600
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 070304d8 with catch @ 07030604
                        */
    if (*(int *)(*(long *)PTR_DAT_079f7a50 + 0xe4) == 0) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 070305f0 with catch @ 07030608
                        */
      thunk_FUN_036a1978();
    }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 07030560 with catch @ 0703060c
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 070305ec with catch @ 07030610
                        */
    uVar8 = FUN_0718202c(0);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 070305e8 with catch @ 07030614
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 07030494 with catch @ 07030618
                        */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar13 = FUN_0702e180();
                    /* try { // try from 07030634 to 07130637 has its CatchHandler @ 07030650 */
                    /* try { // try from 07030638 to 07130653 has its CatchHandler @ 07030364 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar12 = FUN_071c630c(uVar13,0);
    if ((uVar12 & 1) == 0) {
      uVar15 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 07030634 with catch @ 07030650 */
                    /* try { // try from 07030654 to 0713065b has its CatchHandler @ 07030664 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 0703065c to 07130667 has its CatchHandler @ 07030364 */
        thunk_FUN_036a1978();
      }
      lVar10 = FUN_0702e180();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07030654 with catch @ 07030664
                        */
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar15 = *(undefined4 *)(lVar10 + 0x50);
    }
    lVar10 = *(long *)puVar3;
    cVar1 = *(char *)(lVar11 + 0x18d);
    *(undefined4 *)(lVar11 + 0x180) = uVar15;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070358d8(&local_c4,param_2,lVar11,cVar1 != '\0',uVar15,uVar7,uVar8 & 1,0);
    uStack_88 = uStack_bc;
    local_90 = local_c4;
    uStack_78 = uStack_ac;
    uStack_80 = local_b4;
    uStack_68 = uStack_9c;
    local_70 = local_a4;
    local_60 = local_94;
    *(undefined8 *)(lVar11 + 0x100) = uStack_bc;
    *(undefined8 *)(lVar11 + 0xf8) = local_c4;
    *(undefined8 *)(lVar11 + 0x110) = uStack_ac;
    *(undefined8 *)(lVar11 + 0x108) = local_b4;
    *(undefined8 *)(lVar11 + 0x120) = uStack_9c;
    *(undefined8 *)(lVar11 + 0x118) = local_a4;
    *(undefined4 *)(lVar11 + 0x128) = local_94;
    uVar7 = FUN_071a6238(lVar11 + 0xf8,0);
    if (*(int *)(*(long *)PTR_DAT_079fd7c0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_0720a0fc(uVar7,0);
    uVar13 = FUN_071a6238(lVar11 + 0xf8,0);
    bVar6 = FUN_0720a464(uVar13,0);
    *(byte *)(lVar11 + 399) = bVar6 & 1;
    if (*(long *)(lVar11 + 0xd8) != 0) {
      iVar9 = FUN_071742bc(*(long *)(lVar11 + 0xd8),0);
      if (iVar9 == 2) {
        if (*(int *)(*(long *)PTR_DAT_079fd888 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar12 = FUN_06f01f48(0);
        if ((uVar12 & 1) != 0) {
          *(undefined1 *)(lVar11 + 399) = 1;
        }
      }
      FUN_06eaa270(local_44,0);
      return lVar11;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


