/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 04f8f6e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  uint uVar9;
  ulong unaff_x21;
  uint unaff_w22;
  long *unaff_x24;
  long *plVar10;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar11;
  float fVar12;
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
  
  do {
    if ((param_1 != 0) &&
       (lVar1 = thunk_FUN_02b79548(param_1,*(undefined8 *)(*unaff_x24 + 0x40)), lVar1 == 0)) {
      uVar2 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2,0);
    }
    if (*(uint *)(unaff_x24 + 3) <= unaff_w22) {
LAB_04f8f968:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_x24[(long)(int)unaff_w22 + 4] = param_1;
    thunk_FUN_02bb0e9c(unaff_x24 + (long)(int)unaff_w22 + 4,param_1);
    do {
      uStack000000000000000c = unaff_w22;
      uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*unaff_x28,(long)&stack0x00000008 + 4);
      uVar9 = (uint)unaff_x21;
      uStack0000000000000008 = uVar9;
      uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*unaff_x28,&stack0x00000008);
      FUN_04c0af28(*(undefined8 *)System_Func<PointerOverLinkTagEvent>_TypeInfo,uVar2,uVar3,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_04f8f964;
      fVar11 = (float)FUN_04f9195c(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if ((uVar9 < 0x1a) && ((1 << (ulong)(uVar9 & 0x1f) & 0x2108420U) != 0)) {
        fVar12 = -fVar11;
      }
      else {
        fVar12 = fVar11;
        if (unaff_w22 != 0) {
          fVar12 = unaff_s10;
        }
      }
      plVar10 = *(long **)(unaff_x19 + 0x38);
      if (plVar10 == (long *)0x0) goto LAB_04f8f964;
      lVar1 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar1 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_04f8f810;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar10,*unaff_x26,9);
LAB_04f8f810:
      (*(code *)*puVar4)(plVar10,unaff_x21 & 0xffffffff,&stack0x00000030,puVar4[1]);
      if (in_stack_00000078 == 0) goto LAB_04f8f964;
      FUN_05c89340(in_stack_00000078,0);
      uVar2 = FUN_04f8fbf8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                           uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar11,
                           fVar12);
      lVar1 = in_stack_00000078;
      uVar3 = thunk_FUN_02b79644(*(undefined8 *)System_Func<PointerDownLinkTagEvent>_TypeInfo);
      FUN_04f9059c(uVar3,unaff_w22,unaff_x21 & 0xffffffff,lVar1,uVar2,0);
      lVar1 = *(long *)(unaff_x19 + 0x68);
      if (lVar1 == 0) goto LAB_04f8f964;
      lVar5 = *(long *)(lVar1 + 0x10);
      lVar7 = *unaff_x29;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_04f8f964;
      uVar9 = *(uint *)(lVar1 + 0x18);
      if (uVar9 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar1 + 0x18) = uVar9 + 1;
        puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        *puVar4 = uVar3;
        thunk_FUN_02bb0e9c(puVar4,uVar3);
      }
      else {
        FUN_037a6538(lVar1,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      do {
        unaff_x21 = unaff_x21 + 1;
        if (unaff_x21 == 0x1a) {
          FUN_04f8fe64();
          lVar1 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar1 != 0) {
            (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
            ;
            return;
          }
          goto LAB_04f8f964;
        }
        lVar1 = *unaff_x27;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar1 = *unaff_x27;
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
        if (lVar1 == 0) goto LAB_04f8f964;
        if (*(uint *)(lVar1 + 0x18) <= unaff_x21) goto LAB_04f8f968;
        unaff_w22 = *(uint *)(lVar1 + unaff_x21 * 4 + 0x20);
      } while ((unaff_w22 == 0xffffffff) ||
              ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
      plVar10 = *(long **)(unaff_x19 + 0x38);
      if (plVar10 == (long *)0x0) goto LAB_04f8f964;
      lVar1 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar1 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_04f8f68c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar10,*unaff_x26,9);
LAB_04f8f68c:
      (*(code *)*puVar4)(plVar10,unaff_w22,&stack0x00000050,puVar4[1]);
      uVar6 = FUN_04f8f978();
    } while ((uVar6 & 1) != 0);
    in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    in_stack_00000018 = in_stack_00000058;
    uStack0000000000000024 = uStack0000000000000064;
    uStack0000000000000020 = uStack0000000000000060;
    param_1 = FUN_04f8fa38();
    unaff_x24 = *(long **)(unaff_x19 + 0x78);
    in_stack_00000078 = param_1;
  } while (unaff_x24 != (long *)0x0);
LAB_04f8f964:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


