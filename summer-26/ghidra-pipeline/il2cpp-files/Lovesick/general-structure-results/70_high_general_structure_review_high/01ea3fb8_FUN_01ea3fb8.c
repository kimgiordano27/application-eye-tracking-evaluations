/*
FUNCTION_NAME: FUN_01ea3fb8
ENTRY_POINT: 01ea3fb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_01ea3fb8(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  
  if ((DAT_0377fe65 & 1) == 0) {
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_3104);
    thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_laneq_s16__);
    thunk_FUN_00d48444(StringLiteral_13226);
    thunk_FUN_00d48444(System_StackOverflowException_TypeInfo);
    DAT_0377fe65 = 1;
  }
  puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (param_2 == 0) goto LAB_01ea43a8;
  if (*(long *)(param_2 + 0x88) == 0) {
    if (param_3 == 0) goto LAB_01ea43a8;
LAB_01ea40e0:
    plVar10 = (long *)FUN_01ea6cc8(param_1,*(undefined8 *)(param_3 + 0x50));
    puVar2 = System_StackOverflowException_TypeInfo;
    if (plVar10 == (long *)0x0) {
      plVar10 = *(long **)(param_3 + 0x50);
      if (plVar10 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        FUN_01fad05c(param_1,*(undefined8 *)puVar2,uVar4,param_3,0);
        return;
      }
      goto LAB_01ea43a8;
    }
    iVar3 = FUN_01ebc1b0(plVar10,0);
    if (iVar3 != 0) {
      iVar3 = FUN_01ebc1b0(plVar10,0);
      lVar7 = param_2;
      puVar8 = (undefined8 *)StringLiteral_3104;
      if (iVar3 == 3) {
        lVar6 = FUN_01ecb830(plVar10,0);
        if ((lVar6 == 0) || (plVar11 = *(long **)(lVar6 + 0x80), plVar11 == (long *)0x0))
        goto LAB_01ea43a8;
        uVar5 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
        puVar8 = (undefined8 *)StringLiteral_3104;
        if (((uVar5 & 1) != 0) &&
           (lVar7 = param_3, puVar8 = (undefined8 *)StringLiteral_13226,
           *(long *)(param_3 + 0x58) != 0)) {
          FUN_01e9e9f0(param_1);
          lVar7 = *(long *)(param_3 + 0x58);
          *(long *)(param_2 + 0x60) = lVar7;
          goto joined_r0x01ea4154;
        }
      }
      FUN_01fad0ec(param_1,*puVar8,lVar7,0);
      plVar11 = (long *)0x0;
      goto LAB_01ea421c;
    }
    if (*(long *)(param_3 + 0x58) != 0) {
      FUN_01e9e9f0(param_1);
      if (*(long *)(param_3 + 0x58) == 0) goto LAB_01ea43a8;
      uVar5 = FUN_01ecba7c(*(undefined8 *)(*(long *)(param_3 + 0x58) + 0x68),plVar10[0xd],0x100,0);
      if ((uVar5 & 1) == 0) {
        FUN_01fad0ec(param_1,*(undefined8 *)
                              Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_laneq_s16__,param_3,0)
        ;
      }
      lVar7 = *(long *)(param_3 + 0x58);
joined_r0x01ea4154:
      if (lVar7 == 0) {
LAB_01ea43a8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar11 = *(long **)(lVar7 + 0x68);
      goto LAB_01ea421c;
    }
  }
  else {
    if (param_3 == 0) goto LAB_01ea43a8;
    uVar9 = *(undefined8 *)(param_3 + 0x50);
    uVar4 = FUN_01eca598(*(long *)(param_2 + 0x88),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar5 = FUN_01f76298(uVar9,uVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_01ea40e0;
    plVar10 = *(long **)(param_2 + 0x88);
    if (plVar10 == (long *)0x0) {
      FUN_01e9df38(param_1,0);
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar1 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
    if ((*(byte *)(*plVar10 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar10);
    }
    FUN_01e9df38(param_1,plVar10);
  }
  plVar11 = (long *)plVar10[0xd];
LAB_01ea421c:
  lVar7 = FUN_01ecb830(plVar10,0);
  if ((lVar7 != 0) && ((*(byte *)(plVar10 + 0xe) >> 2 & 1) != 0)) {
    FUN_01fad0ec(param_1,*(undefined8 *)UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo,
                 param_2,0);
  }
  *(long **)(param_2 + 0x60) = plVar10;
  if (plVar11 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar11 + 0x278))
                      (plVar11,*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_1 + 0x10),
                       param_2,*(undefined8 *)(*plVar11 + 0x280));
    *(undefined8 *)(param_2 + 0x68) = uVar4;
  }
  *(undefined4 *)(param_2 + 0x5c) = 4;
  FUN_01ea4a04(param_1,plVar10,param_2,*(undefined8 *)(param_3 + 0x68),
               *(undefined8 *)(param_3 + 0x70),4);
  return;
}


