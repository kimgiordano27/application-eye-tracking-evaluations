/*
FUNCTION_NAME: FUN_01e810dc
ENTRY_POINT: 01e810dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_01e810dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((DAT_0377fdea & 1) == 0) {
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f7180);
    thunk_FUN_00d48444(StringLiteral_8374);
    thunk_FUN_00d48444(System_StackOverflowException_TypeInfo);
    DAT_0377fdea = 1;
  }
  puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (param_2 == 0) goto LAB_01e813b0;
  if (*(long *)(param_2 + 0x88) == 0) {
    if (param_4 == 0) goto LAB_01e813b0;
LAB_01e811f8:
    plVar9 = (long *)FUN_01e835d0(param_1,*(undefined8 *)(param_4 + 0x68));
    puVar2 = System_StackOverflowException_TypeInfo;
    if (plVar9 == (long *)0x0) {
      plVar9 = *(long **)(param_4 + 0x68);
      if (plVar9 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        FUN_01fad05c(param_1,*(undefined8 *)puVar2,uVar5,param_4,0);
        return;
      }
      goto LAB_01e813b0;
    }
  }
  else {
    if (param_4 == 0) goto LAB_01e813b0;
    uVar8 = *(undefined8 *)(param_4 + 0x68);
    uVar5 = FUN_01eca598(*(long *)(param_2 + 0x88),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar6 = FUN_01f76298(uVar8,uVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_01e811f8;
    plVar9 = *(long **)(param_2 + 0x88);
    if (plVar9 == (long *)0x0) {
      FUN_01e7c3d0(param_1,0);
      *(undefined8 *)(param_2 + 0x60) = 0;
      goto LAB_01e813b0;
    }
    bVar1 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
    if ((*(byte *)(*plVar9 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar9);
    }
    FUN_01e7c3d0(param_1,plVar9);
  }
  lVar7 = FUN_01ecb830(plVar9,0);
  if ((lVar7 != 0) && (iVar3 = FUN_01ebc1b0(plVar9,0), iVar3 == 0)) {
    FUN_01fad0ec(param_1,*(undefined8 *)PTR_DAT_033f7180,param_2,0);
    return;
  }
  *(long **)(param_2 + 0x60) = plVar9;
  if (plVar9 != (long *)0x0) {
    if ((*(byte *)(plVar9 + 0xe) >> 2 & 1) != 0) {
      FUN_01fad0ec(param_1,*(undefined8 *)UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo,
                   param_2,0);
    }
    FUN_01e813b4(param_1,plVar9,param_2,*(undefined8 *)(param_4 + 0x58),
                 *(undefined8 *)(param_4 + 0x60),4);
    uVar5 = FUN_01e82870(param_1,*(undefined8 *)(param_4 + 0x50),1);
    *(undefined8 *)(param_2 + 0xb8) = uVar5;
    uVar4 = FUN_01e829e0(uVar5,param_2,param_3,uVar5);
    *(undefined4 *)(param_2 + 0x90) = uVar4;
    iVar3 = FUN_01ebc1b0(param_2,0);
    if (iVar3 == 1) {
      FUN_01ecb830(plVar9,0);
      lVar7 = FUN_01ecb830(plVar9,0);
      if (lVar7 != 0) {
        lVar7 = FUN_01ecb830(plVar9,0);
        if ((lVar7 == 0) || (plVar9 = *(long **)(lVar7 + 0x80), plVar9 == (long *)0x0))
        goto LAB_01e813b0;
        uVar6 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        if ((uVar6 & 1) == 0) {
          FUN_01fad0ec(param_1,*(undefined8 *)StringLiteral_8374,param_2,0);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x5c) = 4;
    return;
  }
LAB_01e813b0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


