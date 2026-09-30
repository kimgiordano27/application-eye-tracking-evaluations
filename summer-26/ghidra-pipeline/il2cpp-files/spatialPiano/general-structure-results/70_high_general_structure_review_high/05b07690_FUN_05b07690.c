/*
FUNCTION_NAME: FUN_05b07690
ENTRY_POINT: 05b07690
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4
*/


void FUN_05b07690(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 local_34;
  
                    /* try { // try from 05b07694 to 05c0769b has its CatchHandler @ 05b07734 */
  if ((DAT_06bc2879 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(Method_Oculus_Interaction_AutoMoveTowardsTarget_HandlePointerEventRaised__);
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__);
    FUN_02f08768(Method_Oculus_Interaction_AutoMoveTowardsTargetProvider_HandleAborted__);
    FUN_02f08768(
                Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestCompleted__
                );
    FUN_02f08768(
                Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_Avatar_OnSizeContextChanged__);
    FUN_02f08768(Method_Unity_AppUI_UI_Avatar_OnVariantContextChanged__);
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__);
    FUN_02f08768(Method_System_Array_GetValue__);
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(PTR_DAT_067ca4e8);
    FUN_02f08768(Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__);
    DAT_06bc2879 = 1;
  }
  puVar3 = 
  Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestCompleted__
  ;
  local_34 = 0;
  if (param_2 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar10 = thunk_FUN_02f45270();
    uVar11 = thunk_FUN_02f6ef30(PTR_DAT_067ca4a0);
    FUN_0504ee1c(uVar10,uVar11,0);
    uVar11 = thunk_FUN_02f6ef30(Method_System_Threading_Tasks_AwaitTaskContinuation_InvokeAction__);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar11);
  }
  if (*(int *)(param_2 + 0xe8) != -1) {
    FUN_05b120d0(param_1,param_2);
    uVar2 = *(uint *)(param_2 + 0xe8);
    iVar1 = *(int *)(param_2 + 0xe0);
    iVar7 = FUN_032f1430(*(undefined8 *)(param_1 + 0x500),*(undefined8 *)puVar3);
    if ((int)uVar2 < iVar7) {
      lVar8 = *(long *)(param_1 + 0x500);
      if (lVar8 == 0) goto LAB_05b07b30;
      local_34 = (undefined4)*(undefined8 *)(lVar8 + 0x18);
      FUN_032ee944(lVar8,&local_34,uVar2,
                   *(undefined8 *)
                    Method_Oculus_Interaction_AutoMoveTowardsTargetProvider_HandleAborted__);
    }
    FUN_032ee2e8(*(undefined8 *)(param_1 + 0x78),param_1 + 0x70,uVar2,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__);
    if (*(long *)(param_1 + 0x80) == 0) {
LAB_05b07b30:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_04856718(*(long *)(param_1 + 0x80),iVar1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Avatar_OnSizeContextChanged__);
    if (*(long *)(param_1 + 0x78) == 0) {
      FUN_05b5c854(param_1 + 0xb0,0);
    }
    else {
      FUN_05b0d764(param_1);
    }
    if ((int)uVar2 < *(int *)(param_1 + 0x70)) {
      lVar8 = *(long *)(param_1 + 0x78);
      if (lVar8 == 0) goto LAB_05b07b30;
      iVar7 = *(int *)(param_1 + 0x70) - uVar2;
      plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
      iVar12 = 0;
      if (uVar2 <= *(uint *)(lVar8 + 0x18)) {
        iVar12 = *(uint *)(lVar8 + 0x18) - uVar2;
      }
      do {
        if (iVar12 == 0) goto LAB_05b07b2c;
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_05b07b30;
        iVar7 = iVar7 + -1;
        plVar9 = plVar9 + 1;
        *(int *)(lVar8 + 0xe8) = *(int *)(lVar8 + 0xe8) + -1;
        iVar12 = iVar12 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_2 + 0xe8) = 0xffffffff;
    if (0 < iVar7) {
      lVar8 = *(long *)(param_1 + 0x90);
      if (lVar8 == 0) goto LAB_05b07b30;
      iVar12 = 0;
      puVar14 = (undefined1 *)(lVar8 + 0x5d);
      do {
        if (*(int *)(lVar8 + 0x18) == iVar12) goto LAB_05b07b2c;
        if (*(int *)(puVar14 + -5) == iVar1) {
          if ((param_3 & 1) == 0) {
            FUN_032ee7a4();
          }
          else {
            *puVar14 = 1;
          }
          break;
        }
        iVar12 = iVar12 + 1;
        puVar14 = puVar14 + 0x40;
      } while (iVar7 != iVar12);
    }
    puVar3 = Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__;
    if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar4 = Method_Unity_AppUI_UI_Avatar_OnVariantContextChanged__;
    FUN_05abcdb4(param_2,-*(int *)(param_2 + 0x14),0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a99e04(param_2,1,0);
    plVar9 = (long *)thunk_FUN_02f45174(param_2,*(undefined8 *)puVar4);
    if (plVar9 != (long *)0x0) {
      uVar10 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
      lVar13 = *plVar9;
      lVar8 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            lVar8 = lVar13 + (long)*piVar16 * 0x10 + 0x138;
            goto LAB_05b079b8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      lVar8 = FUN_02f421d0(plVar9,lVar8,0);
LAB_05b079b8:
      FUN_05054f60(uVar10,plVar9,*(undefined8 *)(lVar8 + 8),0);
      FUN_05b0e130(param_1,uVar10);
    }
    uVar15 = FUN_05ac43a4(param_2,0);
    if ((uVar15 & 1) != 0) {
      if (*(int *)(param_1 + 0x70) < 1) {
        uVar2 = *(uint *)(param_1 + 0xa8) & 0xfffffffb;
        if (*(uint *)(param_1 + 0xa8) != uVar2) {
          *(uint *)(param_1 + 0xa8) = uVar2;
        }
      }
      else {
        lVar8 = 0;
        do {
          lVar13 = *(long *)(param_1 + 0x78);
          if (lVar13 == 0) goto LAB_05b07b30;
          if (*(uint *)(lVar13 + 0x18) <= (uint)lVar8) {
LAB_05b07b2c:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar13 = *(long *)(lVar13 + lVar8 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_05b07b30;
          uVar15 = FUN_05ac43a4(lVar13,0);
          if ((uVar15 & 1) != 0) goto LAB_05b07a70;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(param_1 + 0x70));
        uVar2 = *(uint *)(param_1 + 0xa8) & 0xfffffffb;
        if ((*(uint *)(param_1 + 0xa8) != uVar2) &&
           (*(uint *)(param_1 + 0xa8) = uVar2, 0 < *(int *)(param_1 + 0x70))) {
          FUN_05b0d764(param_1);
        }
      }
    }
LAB_05b07a70:
    puVar6 = Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__;
    puVar5 = 
    Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
    ;
    puVar4 = Method_System_Array_GetValue__;
    puVar3 = PTR_DAT_067ca4e8;
    FUN_05ac4ed8(param_2,0);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar4;
    }
    FUN_033814f0(param_1 + 0xf0,param_2,1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x58),
                 *(undefined8 *)puVar6,0,*(undefined8 *)puVar5);
    uVar10 = thunk_FUN_02f1863c(param_2,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar3);
    }
    plVar9 = (long *)FUN_05ab7a60(uVar10,0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
    }
  }
  return;
}


