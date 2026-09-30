/*
FUNCTION_NAME: FUN_01e808ec
ENTRY_POINT: 01e808ec
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


void FUN_01e808ec(long param_1,long param_2,long param_3)

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
  
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e80830 with catch @ 01e808ec
                        */
                    /* try { // try from 01e80904 to 01f8091b has its CatchHandler @ 01e809a0 */
  if ((DAT_0377fde8 & 1) == 0) {
                    /* try { // try from 01e8091c to 01f80987 has its CatchHandler @ 01e807cc */
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_3104);
    thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_laneq_s16__);
    thunk_FUN_00d48444(StringLiteral_13226);
    thunk_FUN_00d48444(System_StackOverflowException_TypeInfo);
    DAT_0377fde8 = 1;
  }
  puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (param_2 == 0) goto LAB_01e80cdc;
  if (*(long *)(param_2 + 0x88) == 0) {
    if (param_3 == 0) goto LAB_01e80cdc;
LAB_01e80a14:
    plVar10 = (long *)FUN_01e835d0(param_1,*(undefined8 *)(param_3 + 0x50));
    puVar2 = System_StackOverflowException_TypeInfo;
    if (plVar10 == (long *)0x0) {
      plVar10 = *(long **)(param_3 + 0x50);
      if (plVar10 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        FUN_01fad05c(param_1,*(undefined8 *)puVar2,uVar4,param_3,0);
        return;
      }
      goto LAB_01e80cdc;
    }
    iVar3 = FUN_01ebc1b0(plVar10,0);
    if (iVar3 != 0) {
      iVar3 = FUN_01ebc1b0(plVar10,0);
      lVar7 = param_2;
      puVar8 = (undefined8 *)StringLiteral_3104;
      if (iVar3 == 3) {
        lVar6 = FUN_01ecb830(plVar10,0);
        if ((lVar6 == 0) || (plVar11 = *(long **)(lVar6 + 0x80), plVar11 == (long *)0x0))
        goto LAB_01e80cdc;
        uVar5 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
        puVar8 = (undefined8 *)StringLiteral_3104;
        if (((uVar5 & 1) != 0) &&
           (lVar7 = param_3, puVar8 = (undefined8 *)StringLiteral_13226,
           *(long *)(param_3 + 0x58) != 0)) {
          FUN_01e7d088(param_1);
          lVar7 = *(long *)(param_3 + 0x58);
          *(long *)(param_2 + 0x60) = lVar7;
          goto joined_r0x01e80a88;
        }
      }
      FUN_01fad0ec(param_1,*puVar8,lVar7,0);
      plVar11 = (long *)0x0;
      goto LAB_01e80b50;
    }
    if (*(long *)(param_3 + 0x58) != 0) {
      FUN_01e7d088(param_1);
      if (*(long *)(param_3 + 0x58) == 0) goto LAB_01e80cdc;
      uVar5 = FUN_01ecba7c(*(undefined8 *)(*(long *)(param_3 + 0x58) + 0x68),plVar10[0xd],0x100,0);
      if ((uVar5 & 1) == 0) {
        FUN_01fad0ec(param_1,*(undefined8 *)
                              Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_laneq_s16__,param_3,0)
        ;
      }
      lVar7 = *(long *)(param_3 + 0x58);
joined_r0x01e80a88:
      if (lVar7 == 0) {
LAB_01e80cdc:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar11 = *(long **)(lVar7 + 0x68);
      goto LAB_01e80b50;
    }
  }
  else {
    if (param_3 == 0) goto LAB_01e80cdc;
    uVar9 = *(undefined8 *)(param_3 + 0x50);
                    /* try { // try from 01e80988 to 01f80997 has its CatchHandler @ 01e809a0 */
    uVar4 = FUN_01eca598(*(long *)(param_2 + 0x88),0);
                    /* try { // try from 01e80998 to 01f809a3 has its CatchHandler @ 01e807cc */
                    /* catch() { ... } // from try @ 01e80904 with catch @ 01e809a0
                       catch() { ... } // from try @ 01e80988 with catch @ 01e809a0 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 01e809a4 to 01f809a7 has its CatchHandler @ 01e809b0 */
                    /* try { // try from 01e809a8 to 01f809b3 has its CatchHandler @ 01e807cc */
      thunk_FUN_00d32864(*(long *)puVar2);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01e809a4 with catch @ 01e809b0
                        */
    uVar5 = FUN_01f76298(uVar9,uVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_01e80a14;
    plVar10 = *(long **)(param_2 + 0x88);
    if (plVar10 == (long *)0x0) {
      FUN_01e7c3d0(param_1,0);
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
    FUN_01e7c3d0(param_1,plVar10);
  }
  plVar11 = (long *)plVar10[0xd];
LAB_01e80b50:
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
  FUN_01e813b4(param_1,plVar10,param_2,*(undefined8 *)(param_3 + 0x68),
               *(undefined8 *)(param_3 + 0x70),4);
  return;
}


