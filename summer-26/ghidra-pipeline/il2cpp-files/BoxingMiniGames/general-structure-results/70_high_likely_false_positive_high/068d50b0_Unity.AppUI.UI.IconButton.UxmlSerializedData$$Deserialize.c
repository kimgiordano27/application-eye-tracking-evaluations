/*
FUNCTION_NAME: Unity.AppUI.UI.IconButton.UxmlSerializedData$$Deserialize
ENTRY_POINT: 068d50b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_IconButton_UxmlSerializedData__Deserialize
               (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lStack0000000000000008;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar3 = PTR_DAT_07a4fa80;
                    /* try { // try from 068d50b0 to 069d50d7 has its CatchHandler @ 068d5230 */
  puVar2 = PTR_DAT_07a4fa78;
                    /* try { // try from 068d50e4 to 069d50e7 has its CatchHandler @ 068d5224 */
  if ((DAT_07ee8118 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a4f838);
                    /* try { // try from 068d50f8 to 069d5103 has its CatchHandler @ 068d5218 */
    FUN_03642964(PTR_DAT_07a4fa88);
                    /* try { // try from 068d5108 to 069d5117 has its CatchHandler @ 068d521c */
    FUN_03642964(PTR_DAT_07a4fa90);
    FUN_03642964(PTR_DAT_07a4fa98);
                    /* try { // try from 068d5120 to 069d512f has its CatchHandler @ 068d5210 */
    FUN_03642964(PTR_DAT_07a4faa0);
    FUN_03642964(PTR_DAT_07a4faa8);
                    /* try { // try from 068d5138 to 069d513b has its CatchHandler @ 068d522c */
    FUN_03642964(PTR_DAT_07a4fab0);
                    /* try { // try from 068d513c to 069d51ef has its CatchHandler @ 068d4ed0 */
    FUN_03642964(PTR_DAT_07a4fab8);
    FUN_03642964(PTR_DAT_07a4fa80);
    FUN_03642964(PTR_DAT_07a4fac0);
    FUN_03642964(PTR_DAT_07a4fa78);
    FUN_03642964(PTR_DAT_07a4fac8);
    FUN_03642964(PTR_DAT_07a4fad0);
    FUN_03642964(PTR_DAT_07a4fad8);
    FUN_03642964(PTR_DAT_07a4f808);
    DAT_07ee8118 = 1;
  }
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_0459e7d4(lVar9,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_07a4f838;
  if (param_2 == 0) goto LAB_068d5548;
  if (*(long *)(param_2 + 0x30) == 0) {
    lStack0000000000000008 = 0;
    uVar6 = 0;
  }
  else {
    lStack0000000000000008 = 0;
    uVar6 = 0;
    uVar18 = 0;
    do {
      lVar17 = *(long *)(param_2 + 0x38);
      lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                    /* try { // try from 068d51f0 to 069d51f3 has its CatchHandler @ 068d5228 */
                    /* try { // try from 068d51f4 to 069d51f7 has its CatchHandler @ 068d5220 */
                    /* try { // try from 068d51f8 to 069d51fb has its CatchHandler @ 068d5214 */
                    /* try { // try from 068d51fc to 069d51ff has its CatchHandler @ 068d520c */
      FUN_068d1ac4(lVar10,param_2,lVar17 + uVar18);
                    /* try { // try from 068d5200 to 069d524f has its CatchHandler @ 068d4ed0 */
      if (lVar10 == 0) goto LAB_068d5548;
      iVar1 = *(int *)(lVar10 + 0x20);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d51fc with catch @ 068d520c
                        */
      if (iVar1 < 0x63c9) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d5120 with catch @ 068d5210
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d51f8 with catch @ 068d5214
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d50f8 with catch @ 068d5218
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d5108 with catch @ 068d521c
                        */
        if (iVar1 - 0x63c4U < 3) {
LAB_068d5254:
          lVar17 = FUN_068d05b4(lVar10);
          if (lVar17 != 0) {
                    /* catch() { ... } // from try @ 068d5250 with catch @ 068d5260 */
                    /* try { // try from 068d5264 to 069d526b has its CatchHandler @ 068d5274 */
                    /* try { // try from 068d526c to 069d5277 has its CatchHandler @ 068d4ed0 */
            uVar16 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a4f808);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 068d5264 with catch @ 068d5274
                        */
            FUN_068d8690(uVar16,iVar1,lVar17,0);
            if (lVar9 == 0) goto LAB_068d5548;
            lVar17 = *(long *)(lVar9 + 0x10);
            lVar15 = *(long *)PTR_DAT_07a4faa8;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_068d5548;
            uVar7 = *(uint *)(lVar9 + 0x18);
            if (uVar7 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar7 + 1;
              puVar14 = (undefined8 *)(lVar17 + (long)(int)uVar7 * 8 + 0x20);
              *puVar14 = uVar16;
              thunk_FUN_036b7ad0(puVar14,uVar16);
            }
            else {
              FUN_0459f03c(lVar9,uVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      else {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d50e4 with catch @ 068d5224
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d51f0 with catch @ 068d5228
                        */
        if (iVar1 == 0x63c9) goto LAB_068d5254;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d5138 with catch @ 068d522c
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d50b0 with catch @ 068d5230
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068d504c with catch @ 068d5234
                        */
        if (iVar1 == 0x63ca) {
          lStack0000000000000008 = FUN_068d1c94(lVar10);
        }
        else if (iVar1 == 0x68ca) {
          uVar6 = FUN_068d05b4(lVar10);
                    /* try { // try from 068d5250 to 069d5253 has its CatchHandler @ 068d5260 */
        }
      }
      uVar18 = ((*(long *)(lVar10 + 0x38) + uVar18) - *(long *)(lVar10 + 0x18)) +
               *(long *)(lVar10 + 0x30);
    } while (uVar18 < *(ulong *)(param_2 + 0x30));
  }
  puVar2 = PTR_DAT_079f4610;
  if ((uVar6 & 0xffff) != 0) {
    if (lStack0000000000000008 == 0) {
      if (param_3 == 0) goto LAB_068d5548;
    }
    else {
      uVar16 = *(undefined8 *)PTR_DAT_07a4fad0;
      if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar16 = FUN_05e26f18(uVar16,0);
      uVar11 = FUN_05c9c3d0(lStack0000000000000008,0);
      if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(puVar2 + 0x98));
      }
      plVar12 = (long *)FUN_05e4bea8(uVar16,uVar11,0);
      if ((param_3 == 0) || (plVar12 == (long *)0x0)) goto LAB_068d5548;
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_07a4fad8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084();
      }
      puVar13 = (undefined2 *)thunk_FUN_0367ff68();
      FUN_068d958c(param_3,*puVar13,0);
    }
    uVar7 = FUN_068db038(param_3,0);
    if ((uVar6 & 0xffff) != (uVar7 & 0xffff)) {
      uVar8 = FUN_068d95f0(param_3,uVar6,0);
      FUN_068d958c(param_3,uVar8,0);
    }
  }
  puVar2 = PTR_DAT_07a4fab8;
  if (lVar9 == 0) {
LAB_068d5548:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  iVar1 = *(int *)(lVar9 + 0x18);
  if (0 < iVar1) {
    lVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a4fac8);
    FUN_0459e84c(lVar10,iVar1,*(undefined8 *)puVar2);
    puVar5 = PTR_DAT_07a4fab0;
    puVar4 = PTR_DAT_07a4faa0;
    puVar3 = PTR_DAT_07a4fa90;
    puVar2 = PTR_DAT_07a4fa88;
    if (param_3 == 0) goto LAB_068d5548;
    plVar12 = (long *)(param_3 + 0x20);
    *plVar12 = lVar10;
    thunk_FUN_036b7ad0(plVar12,lVar10);
    FUN_0459fb44(&stack0x00000028,lVar9,*(undefined8 *)puVar5);
    while (uVar18 = FUN_05897b28(&stack0x00000028,*(undefined8 *)puVar3), (uVar18 & 1) != 0) {
      lVar9 = *plVar12;
      if (lVar9 == 0) {
LAB_068d5544:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_068d5544;
      uVar6 = *(uint *)(lVar9 + 0x18);
      if (uVar6 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar6 + 1;
        puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
        *puVar14 = in_stack_00000038;
        thunk_FUN_036b7ad0(puVar14);
      }
      else {
        FUN_0459f03c(lVar9,in_stack_00000038,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05897b24(&stack0x00000028,*(undefined8 *)puVar2);
  }
  return;
}


