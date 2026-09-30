/*
FUNCTION_NAME: FUN_01ea4754
ENTRY_POINT: 01ea4754
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_01ea4754(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((DAT_0377fe67 & 1) == 0) {
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(System_OverflowException_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1d70);
    thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_CreateVirtualizationController<ReusableListViewItem>__
                      );
    thunk_FUN_00d48444(System_StackOverflowException_TypeInfo);
    DAT_0377fe67 = 1;
  }
  puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (param_2 == 0) goto LAB_01ea49f8;
  if (*(long *)(param_2 + 0x88) == 0) {
    if (param_4 == 0) goto LAB_01ea49f8;
LAB_01ea4884:
    plVar9 = (long *)FUN_01ea6cc8(param_1,*(undefined8 *)(param_4 + 0x68));
    puVar2 = System_StackOverflowException_TypeInfo;
    if (plVar9 == (long *)0x0) {
      plVar9 = *(long **)(param_4 + 0x68);
      if (plVar9 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        FUN_01fad05c(param_1,*(undefined8 *)puVar2,uVar4,param_4,0);
        return;
      }
      goto LAB_01ea49f8;
    }
    *(long **)(param_2 + 0x60) = plVar9;
  }
  else {
    if (param_4 == 0) goto LAB_01ea49f8;
    uVar8 = *(undefined8 *)(param_4 + 0x68);
    uVar4 = FUN_01eca598(*(long *)(param_2 + 0x88),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar5 = FUN_01f76298(uVar8,uVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_01ea4884;
    plVar9 = *(long **)(param_2 + 0x88);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
    }
    FUN_01e9df38(param_1,plVar9);
    *(long **)(param_2 + 0x60) = plVar9;
    if (plVar9 == (long *)0x0) goto LAB_01ea49f8;
  }
  if ((*(byte *)(plVar9 + 0xe) >> 2 & 1) != 0) {
    FUN_01fad0ec(param_1,*(undefined8 *)UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo,
                 param_2,0);
  }
  puVar2 = PTR_DAT_033f1d70;
  FUN_01ea4a04(param_1,plVar9,param_2,*(undefined8 *)(param_4 + 0x58),
               *(undefined8 *)(param_4 + 0x60),4);
  uVar4 = FUN_01ea5f58(param_1,*(undefined8 *)(param_4 + 0x50));
  *(undefined8 *)(param_2 + 0xb8) = uVar4;
  iVar3 = FUN_01ea60c0(uVar4,param_2,param_3,uVar4);
  *(int *)(param_2 + 0x90) = iVar3;
  if (iVar3 == 3) {
    iVar3 = FUN_01ebc1b0(plVar9,0);
    puVar7 = (undefined8 *)
             Method_UnityEngine_UIElements_BaseVerticalCollectionView_CreateVirtualizationController<ReusableListViewItem>__
    ;
    if (iVar3 == 3) goto LAB_01ea49dc;
  }
  else {
    if ((iVar3 != 1) || (lVar6 = FUN_01ecb830(plVar9,0), lVar6 == 0)) goto LAB_01ea49dc;
    lVar6 = FUN_01ecb830(plVar9,0);
    if ((lVar6 == 0) || (plVar9 = *(long **)(lVar6 + 0x80), plVar9 == (long *)0x0)) {
LAB_01ea49f8:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    puVar7 = (undefined8 *)System_OverflowException_TypeInfo;
    if ((uVar5 & 1) != 0) goto LAB_01ea49dc;
  }
  uVar4 = FUN_01f75600(*puVar7,0);
  FUN_01fad05c(param_1,*(undefined8 *)puVar2,uVar4,param_2,0);
LAB_01ea49dc:
  *(undefined4 *)(param_2 + 0x5c) = 4;
  return;
}


