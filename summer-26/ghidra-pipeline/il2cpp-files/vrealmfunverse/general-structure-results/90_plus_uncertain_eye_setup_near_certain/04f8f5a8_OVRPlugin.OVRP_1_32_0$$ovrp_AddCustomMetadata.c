/*
FUNCTION_NAME: OVRPlugin.OVRP_1_32_0$$ovrp_AddCustomMetadata
ENTRY_POINT: 04f8f5a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_32_0__ovrp_AddCustomMetadata(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x26;
  float fVar16;
  float fVar17;
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
  
  if (param_1 != 0) {
    uVar5 = FUN_037a6764(param_1,*(undefined8 *)System_Func<PointerMoveEvent>_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar5;
    thunk_FUN_02bb0e9c();
    puVar4 = System_Func<PointerLeaveEvent>_TypeInfo;
    puVar3 = System_Func<PointerEnterEvent>_TypeInfo;
    puVar2 = System_ComponentModel_Design_IDictionaryService_var;
    uVar14 = 2;
    do {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_04f8f964;
      if (*(uint *)(lVar6 + 0x18) <= uVar14) {
LAB_04f8f968:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar1 = *(uint *)(lVar6 + uVar14 * 4 + 0x20);
      if ((uVar1 != 0xffffffff) &&
         (uVar13 = (uint)uVar14, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar13 & 0x1f) & 1) != 0))
      {
        plVar15 = *(long **)(unaff_x19 + 0x38);
        if (plVar15 == (long *)0x0) goto LAB_04f8f964;
        lVar6 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x26) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_04f8f68c;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02b7654c(plVar15,*unaff_x26,9);
LAB_04f8f68c:
        (*(code *)*puVar7)(plVar15,uVar1,&stack0x00000050,puVar7[1]);
        uVar10 = FUN_04f8f978();
        if ((uVar10 & 1) == 0) {
          in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          in_stack_00000018 = in_stack_00000058;
          uStack0000000000000024 = uStack0000000000000064;
          uStack0000000000000020 = uStack0000000000000060;
          lVar6 = FUN_04f8fa38();
          plVar15 = *(long **)(unaff_x19 + 0x78);
          in_stack_00000078 = lVar6;
          if (plVar15 == (long *)0x0) goto LAB_04f8f964;
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0)) {
            uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar5,0);
          }
          if (*(uint *)(plVar15 + 3) <= uVar1) goto LAB_04f8f968;
          plVar15[(long)(int)uVar1 + 4] = lVar6;
          thunk_FUN_02bb0e9c(plVar15 + (long)(int)uVar1 + 4,lVar6);
        }
        uStack000000000000000c = uVar1;
        uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
        uStack0000000000000008 = uVar13;
        uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)puVar3,&stack0x00000008);
        FUN_04c0af28(*(undefined8 *)System_Func<PointerOverLinkTagEvent>_TypeInfo,uVar5,uVar9,0);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_04f8f964;
        fVar16 = (float)FUN_04f9195c(*(long *)(unaff_x19 + 0x40),uVar1,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if ((uVar13 < 0x1a) && ((1 << (ulong)(uVar13 & 0x1f) & 0x2108420U) != 0)) {
          fVar17 = -fVar16;
        }
        else {
          fVar17 = fVar16;
          if (uVar1 != 0) {
            fVar17 = 0.0;
          }
        }
        plVar15 = *(long **)(unaff_x19 + 0x38);
        if (plVar15 == (long *)0x0) goto LAB_04f8f964;
        lVar6 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x26) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_04f8f810;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02b7654c(plVar15,*unaff_x26,9);
LAB_04f8f810:
        (*(code *)*puVar7)(plVar15,uVar14 & 0xffffffff,&stack0x00000030,puVar7[1]);
        if (in_stack_00000078 == 0) goto LAB_04f8f964;
        FUN_05c89340(in_stack_00000078,0);
        uVar5 = FUN_04f8fbf8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar16,
                             fVar17);
        lVar6 = in_stack_00000078;
        uVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Func<PointerDownLinkTagEvent>_TypeInfo);
        FUN_04f9059c(uVar9,uVar1,uVar14 & 0xffffffff,lVar6,uVar5,0);
        lVar6 = *(long *)(unaff_x19 + 0x68);
        if (lVar6 == 0) goto LAB_04f8f964;
        lVar8 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_04f8f964;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar9;
          thunk_FUN_02bb0e9c(puVar7,uVar9);
        }
        else {
          FUN_037a6538(lVar6,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x1a);
    FUN_04f8fe64();
    lVar6 = *(long *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0x81) = 1;
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      return;
    }
  }
LAB_04f8f964:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


