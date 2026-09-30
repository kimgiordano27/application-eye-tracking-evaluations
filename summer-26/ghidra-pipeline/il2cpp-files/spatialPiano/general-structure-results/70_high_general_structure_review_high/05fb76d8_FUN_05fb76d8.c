/*
FUNCTION_NAME: FUN_05fb76d8
ENTRY_POINT: 05fb76d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_8
*/


void FUN_05fb76d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_067c8f20;
  if ((DAT_06bc4f60 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9430);
    FUN_02f08768(PTR_DAT_067c9288);
    FUN_02f08768(PTR_DAT_067c9440);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(PTR_DAT_067c8f38);
    FUN_02f08768(
                Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0_<RequestScenePermissionIfNeeded>b__0__
                );
    FUN_02f08768(
                Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0_<RequestScenePermissionIfNeeded>b__1__
                );
    FUN_02f08768(PTR_DAT_067cc1e0);
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_<>c_<Render>b__14_0__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass53_0_<RecomputeToMaxWidthProportionally>b__1__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass54_0_<RecomputeToMinWidthProportionally>b__1__
                );
    DAT_06bc4f60 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar2 = PTR_DAT_067cc1e0;
  uVar3 = FUN_060f245c(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = FUN_04f65e2c(*(undefined8 *)
                          Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass54_0_<RecomputeToMinWidthProportionally>b__1__
                         ,param_1,0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar4);
    }
    FUN_05f052b4(uVar5,param_1,0);
    FUN_060ed000(param_1,0,0);
    return;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar5 = FUN_04f70018(*(undefined8 *)
                          Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass53_0_<RecomputeToMaxWidthProportionally>b__1__
                         ,*(undefined8 *)
                           Method_UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_<>c_<Render>b__14_0__
                         ,param_1,0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar4);
    }
    FUN_05f052b4(uVar5,param_1,0);
    FUN_060ed000(param_1,0,0);
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_060bb2a0(*(long *)(param_1 + 0xd8),0,0);
      return;
    }
  }
  else {
    lVar4 = *(long *)puVar1;
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0xcc) = 1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_060f078c(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_05fb79a0;
      FUN_060f0c58(*(long *)(param_1 + 0xd0),0,0);
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    lVar4 = *(long *)(param_1 + 0x1d8);
    lVar6 = *(long *)(param_1 + 0x1c8);
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9430);
    FUN_047626f8(uVar5,param_1,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0_<RequestScenePermissionIfNeeded>b__1__
                 ,0);
    if ((lVar6 != 0) &&
       (uVar5 = FUN_042b9fe4(lVar6,uVar5,*(undefined8 *)PTR_DAT_067c9440), lVar4 != 0)) {
      FUN_05f07bcc(lVar4,uVar5,0);
      uVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8f38);
      FUN_06105b34(uVar5,param_1,
                   *(undefined8 *)
                    Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0_<RequestScenePermissionIfNeeded>b__0__
                   ,0);
      if (*(int *)(*(long *)PTR_DAT_067c9288 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060a2044(uVar5,0);
      return;
    }
  }
LAB_05fb79a0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


