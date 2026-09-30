/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$.cctor
ENTRY_POINT: 04f8f7ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  long lVar7;
  int *piVar8;
  int *in_x10;
  long unaff_x19;
  uint uVar9;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar10;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
code_r0x04f8f7ec:
  if (!(bool)in_ZR) goto LAB_04f8f7d8;
LAB_04f8f7f0:
  puVar1 = (undefined8 *)FUN_02b7654c(unaff_x24,param_3,9);
  do {
    (*(code *)*puVar1)(unaff_x24,unaff_x21 & 0xffffffff,&stack0x00000030,puVar1[1]);
    if (in_stack_00000078 == 0) {
LAB_04f8f964:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_05c89340(in_stack_00000078,0);
    uVar2 = FUN_04f8fbf8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,unaff_s8,
                         unaff_s9);
    lVar4 = in_stack_00000078;
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)System_Func<PointerDownLinkTagEvent>_TypeInfo);
    FUN_04f9059c(uVar3,unaff_w22,unaff_x21 & 0xffffffff,lVar4,uVar2,0);
    lVar4 = *(long *)(unaff_x19 + 0x68);
    if (lVar4 == 0) goto LAB_04f8f964;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar7 = *unaff_x29;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_04f8f964;
    uVar9 = *(uint *)(lVar4 + 0x18);
    if (uVar9 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar9 + 1;
      puVar1 = (undefined8 *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
      *puVar1 = uVar3;
      thunk_FUN_02bb0e9c(puVar1,uVar3);
    }
    else {
      FUN_037a6538(lVar4,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_04f8fe64();
        lVar4 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
        goto LAB_04f8f964;
      }
      lVar4 = *unaff_x27;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *unaff_x27;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 == 0) goto LAB_04f8f964;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_04f8f968;
      unaff_w22 = *(uint *)(lVar4 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            (uVar9 = (uint)unaff_x21,
            (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar9 & 0x1f) & 1) == 0));
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) goto LAB_04f8f964;
    lVar4 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_04f8f68c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar10,*unaff_x26,9);
LAB_04f8f68c:
    (*(code *)*puVar1)(plVar10,unaff_w22,&stack0x00000050,puVar1[1]);
    uVar6 = FUN_04f8f978();
    if ((uVar6 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar4 = FUN_04f8fa38();
      plVar10 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar4;
      if (plVar10 == (long *)0x0) goto LAB_04f8f964;
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0)) {
        uVar2 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar2,0);
      }
      if (*(uint *)(plVar10 + 3) <= unaff_w22) {
LAB_04f8f968:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar10[(long)(int)unaff_w22 + 4] = lVar4;
      thunk_FUN_02bb0e9c(plVar10 + (long)(int)unaff_w22 + 4,lVar4);
    }
    uStack000000000000000c = unaff_w22;
    uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = uVar9;
    uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*unaff_x28,&stack0x00000008);
    FUN_04c0af28(*(undefined8 *)System_Func<PointerOverLinkTagEvent>_TypeInfo,uVar2,uVar3,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_04f8f964;
    unaff_s8 = (float)FUN_04f9195c(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if ((uVar9 < 0x1a) && ((1 << (ulong)(uVar9 & 0x1f) & 0x2108420U) != 0)) {
      unaff_s9 = -unaff_s8;
    }
    else {
      unaff_s9 = unaff_s8;
      if (unaff_w22 != 0) {
        unaff_s9 = unaff_s10;
      }
    }
    unaff_x24 = *(long **)(unaff_x19 + 0x38);
    if (unaff_x24 == (long *)0x0) goto LAB_04f8f964;
    param_1 = *unaff_x24;
    param_3 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_04f8f7f0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04f8f7d8:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x04f8f7ec;
    }
    puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 9) * 0x10 + 0x138);
  } while( true );
}


