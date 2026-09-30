/*
FUNCTION_NAME: Unity.Mathematics.int3x4$$op_Explicit
ENTRY_POINT: 05b076c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


void Unity_Mathematics_int3x4__op_Explicit(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined4 uStack000000000000000c;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x350));
                    /* try { // try from 05b076d8 to 05c07703 has its CatchHandler @ 05b07738 */
  FUN_02f08768(Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__);
  FUN_02f08768(Method_Oculus_Interaction_AutoMoveTowardsTargetProvider_HandleAborted__);
  FUN_02f08768(
              Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestCompleted__
              );
  FUN_02f08768(
              Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
              );
                    /* try { // try from 05b07704 to 05c07727 has its CatchHandler @ 05b075a0 */
  FUN_02f08768(Method_Unity_AppUI_UI_Avatar_OnSizeContextChanged__);
  FUN_02f08768(Method_Unity_AppUI_UI_Avatar_OnVariantContextChanged__);
  FUN_02f08768(Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__);
                    /* try { // try from 05b07728 to 05c0772b has its CatchHandler @ 05b07730 */
                    /* try { // try from 05b0772c to 05c07753 has its CatchHandler @ 05b075a0 */
  FUN_02f08768(Method_System_Array_GetValue__);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05b07728 with catch @ 05b07730
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05b07694 with catch @ 05b07734
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05b076d8 with catch @ 05b07738
                        */
  FUN_02f08768(PTR_DAT_067ca498);
  FUN_02f08768(PTR_DAT_067ca4e8);
  FUN_02f08768(Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__);
                    /* try { // try from 05b07754 to 05c07757 has its CatchHandler @ 05b07770 */
                    /* try { // try from 05b07758 to 05c07773 has its CatchHandler @ 05b075a0 */
  *(undefined1 *)(unaff_x22 + 0x879) = 1;
  puVar3 = 
  Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestCompleted__
  ;
  uStack000000000000000c = 0;
  if (unaff_x19 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar8 = thunk_FUN_02f45270();
    uVar9 = thunk_FUN_02f6ef30(PTR_DAT_067ca4a0);
    FUN_0504ee1c(uVar8,uVar9,0);
    uVar9 = thunk_FUN_02f6ef30(Method_System_Threading_Tasks_AwaitTaskContinuation_InvokeAction__);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar8,uVar9);
  }
  if (*(int *)(unaff_x19 + 0xe8) != -1) {
                    /* catch() { ... } // from try @ 05b07754 with catch @ 05b07770 */
                    /* try { // try from 05b07774 to 05c0777b has its CatchHandler @ 05b07784 */
                    /* try { // try from 05b0777c to 05c07787 has its CatchHandler @ 05b075a0 */
    FUN_05b120d0();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05b07774 with catch @ 05b07784
                        */
    uVar2 = *(uint *)(unaff_x19 + 0xe8);
    iVar1 = *(int *)(unaff_x19 + 0xe0);
    iVar5 = FUN_032f1430(*(undefined8 *)(unaff_x20 + 0x500),*(undefined8 *)puVar3);
    if ((int)uVar2 < iVar5) {
      lVar6 = *(long *)(unaff_x20 + 0x500);
      if (lVar6 == 0) goto LAB_05b07b30;
      uStack000000000000000c = (undefined4)*(undefined8 *)(lVar6 + 0x18);
      FUN_032ee944(lVar6,&stack0x0000000c,uVar2,
                   *(undefined8 *)
                    Method_Oculus_Interaction_AutoMoveTowardsTargetProvider_HandleAborted__);
    }
    FUN_032ee2e8(*(undefined8 *)(unaff_x20 + 0x78),unaff_x20 + 0x70,uVar2,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__);
    if (*(long *)(unaff_x20 + 0x80) == 0) {
LAB_05b07b30:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_04856718(*(long *)(unaff_x20 + 0x80),iVar1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Avatar_OnSizeContextChanged__);
    if (*(long *)(unaff_x20 + 0x78) == 0) {
      FUN_05b5c854(unaff_x20 + 0xb0,0);
    }
    else {
      FUN_05b0d764();
    }
    if ((int)uVar2 < *(int *)(unaff_x20 + 0x70)) {
      lVar6 = *(long *)(unaff_x20 + 0x78);
      if (lVar6 == 0) goto LAB_05b07b30;
      iVar5 = *(int *)(unaff_x20 + 0x70) - uVar2;
      plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      iVar10 = 0;
      if (uVar2 <= *(uint *)(lVar6 + 0x18)) {
        iVar10 = *(uint *)(lVar6 + 0x18) - uVar2;
      }
      do {
        if (iVar10 == 0) goto LAB_05b07b2c;
        lVar6 = *plVar7;
        if (lVar6 == 0) goto LAB_05b07b30;
        iVar5 = iVar5 + -1;
        plVar7 = plVar7 + 1;
        *(int *)(lVar6 + 0xe8) = *(int *)(lVar6 + 0xe8) + -1;
        iVar10 = iVar10 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(unaff_x20 + 0x88);
    *(undefined4 *)(unaff_x19 + 0xe8) = 0xffffffff;
    if (0 < iVar5) {
      lVar6 = *(long *)(unaff_x20 + 0x90);
      if (lVar6 == 0) goto LAB_05b07b30;
      iVar10 = 0;
      puVar12 = (undefined1 *)(lVar6 + 0x5d);
      do {
        if (*(int *)(lVar6 + 0x18) == iVar10) goto LAB_05b07b2c;
        if (*(int *)(puVar12 + -5) == iVar1) {
          if ((unaff_x21 & 1) == 0) {
            FUN_032ee7a4();
          }
          else {
            *puVar12 = 1;
          }
          break;
        }
        iVar10 = iVar10 + 1;
        puVar12 = puVar12 + 0x40;
      } while (iVar5 != iVar10);
    }
    puVar3 = Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__;
    if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar4 = Method_Unity_AppUI_UI_Avatar_OnVariantContextChanged__;
    FUN_05abcdb4();
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a99e04();
    plVar7 = (long *)thunk_FUN_02f45174();
    if (plVar7 != (long *)0x0) {
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
      lVar6 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            lVar6 = lVar6 + (long)*piVar14 * 0x10 + 0x138;
            goto LAB_05b079b8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar6 = FUN_02f421d0(plVar7,*(long *)puVar4,0);
LAB_05b079b8:
      FUN_05054f60(uVar8,plVar7,*(undefined8 *)(lVar6 + 8),0);
      FUN_05b0e130();
    }
    uVar13 = FUN_05ac43a4();
    if ((uVar13 & 1) != 0) {
      if (*(int *)(unaff_x20 + 0x70) < 1) {
        uVar2 = *(uint *)(unaff_x20 + 0xa8) & 0xfffffffb;
        if (*(uint *)(unaff_x20 + 0xa8) != uVar2) {
          *(uint *)(unaff_x20 + 0xa8) = uVar2;
        }
      }
      else {
        lVar6 = 0;
        do {
          lVar11 = *(long *)(unaff_x20 + 0x78);
          if (lVar11 == 0) goto LAB_05b07b30;
          if (*(uint *)(lVar11 + 0x18) <= (uint)lVar6) {
LAB_05b07b2c:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar11 = *(long *)(lVar11 + lVar6 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_05b07b30;
          uVar13 = FUN_05ac43a4(lVar11,0);
          if ((uVar13 & 1) != 0) goto LAB_05b07a70;
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(unaff_x20 + 0x70));
        uVar2 = *(uint *)(unaff_x20 + 0xa8) & 0xfffffffb;
        if ((*(uint *)(unaff_x20 + 0xa8) != uVar2) &&
           (*(uint *)(unaff_x20 + 0xa8) = uVar2, 0 < *(int *)(unaff_x20 + 0x70))) {
          FUN_05b0d764();
        }
      }
    }
LAB_05b07a70:
    puVar4 = Method_System_Array_GetValue__;
    puVar3 = PTR_DAT_067ca4e8;
    FUN_05ac4ed8();
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_033814f0(unaff_x20 + 0xf0);
    uVar8 = thunk_FUN_02f1863c();
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar3);
    }
    plVar7 = (long *)FUN_05ab7a60(uVar8,0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250));
    }
  }
  return;
}


