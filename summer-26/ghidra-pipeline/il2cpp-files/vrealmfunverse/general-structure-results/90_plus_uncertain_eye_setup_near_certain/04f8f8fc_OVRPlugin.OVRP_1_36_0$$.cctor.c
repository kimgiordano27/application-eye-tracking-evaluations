/*
FUNCTION_NAME: OVRPlugin.OVRP_1_36_0$$.cctor
ENTRY_POINT: 04f8f8fc
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


void OVRPlugin_OVRP_1_36_0___cctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  uint uVar10;
  ulong unaff_x21;
  long *plVar11;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar12;
  float fVar13;
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
  
  for (; unaff_x21 != 0x1a; unaff_x21 = unaff_x21 + 1) {
    lVar6 = *unaff_x27;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *unaff_x27;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_04f8f964;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
LAB_04f8f968:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar1 = *(uint *)(lVar6 + unaff_x21 * 4 + 0x20);
    if ((uVar1 != 0xffffffff) &&
       (uVar10 = (uint)unaff_x21, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar10 & 0x1f) & 1) != 0))
    {
      plVar11 = *(long **)(unaff_x19 + 0x38);
      if (plVar11 == (long *)0x0) goto LAB_04f8f964;
      lVar6 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 9) * 0x10 + 0x138);
            goto LAB_04f8f68c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar11,*unaff_x26,9);
LAB_04f8f68c:
      (*(code *)*puVar2)(plVar11,uVar1,&stack0x00000050,puVar2[1]);
      uVar7 = FUN_04f8f978();
      if ((uVar7 & 1) == 0) {
        in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
        in_stack_00000018 = in_stack_00000058;
        uStack0000000000000024 = uStack0000000000000064;
        uStack0000000000000020 = uStack0000000000000060;
        lVar6 = FUN_04f8fa38();
        plVar11 = *(long **)(unaff_x19 + 0x78);
        in_stack_00000078 = lVar6;
        if (plVar11 == (long *)0x0) goto LAB_04f8f964;
        if ((lVar6 != 0) &&
           (lVar3 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar4,0);
        }
        if (*(uint *)(plVar11 + 3) <= uVar1) goto LAB_04f8f968;
        plVar11[(long)(int)uVar1 + 4] = lVar6;
        thunk_FUN_02bb0e9c(plVar11 + (long)(int)uVar1 + 4,lVar6);
      }
      uStack000000000000000c = uVar1;
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*unaff_x28,(long)&stack0x00000008 + 4);
      uStack0000000000000008 = uVar10;
      uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*unaff_x28,&stack0x00000008);
      FUN_04c0af28(*(undefined8 *)System_Func<PointerOverLinkTagEvent>_TypeInfo,uVar4,uVar5,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_04f8f964;
      fVar12 = (float)FUN_04f9195c(*(long *)(unaff_x19 + 0x40),uVar1,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if ((uVar10 < 0x1a) && ((1 << (ulong)(uVar10 & 0x1f) & 0x2108420U) != 0)) {
        fVar13 = -fVar12;
      }
      else {
        fVar13 = fVar12;
        if (uVar1 != 0) {
          fVar13 = unaff_s10;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x38);
      if (plVar11 == (long *)0x0) goto LAB_04f8f964;
      lVar6 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 9) * 0x10 + 0x138);
            goto LAB_04f8f810;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar11,*unaff_x26,9);
LAB_04f8f810:
      (*(code *)*puVar2)(plVar11,unaff_x21 & 0xffffffff,&stack0x00000030,puVar2[1]);
      if (in_stack_00000078 == 0) goto LAB_04f8f964;
      FUN_05c89340(in_stack_00000078,0);
      uVar4 = FUN_04f8fbf8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                           uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar12,
                           fVar13);
      lVar6 = in_stack_00000078;
      uVar5 = thunk_FUN_02b79644(*(undefined8 *)System_Func<PointerDownLinkTagEvent>_TypeInfo);
      FUN_04f9059c(uVar5,uVar1,unaff_x21 & 0xffffffff,lVar6,uVar4,0);
      lVar6 = *(long *)(unaff_x19 + 0x68);
      if (lVar6 == 0) goto LAB_04f8f964;
      lVar3 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x29;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar3 == 0) goto LAB_04f8f964;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = uVar5;
        thunk_FUN_02bb0e9c(puVar2,uVar5);
      }
      else {
        FUN_037a6538(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  FUN_04f8fe64();
  lVar6 = *(long *)(unaff_x19 + 0x58);
  *(undefined1 *)(unaff_x19 + 0x81) = 1;
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    return;
  }
LAB_04f8f964:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


