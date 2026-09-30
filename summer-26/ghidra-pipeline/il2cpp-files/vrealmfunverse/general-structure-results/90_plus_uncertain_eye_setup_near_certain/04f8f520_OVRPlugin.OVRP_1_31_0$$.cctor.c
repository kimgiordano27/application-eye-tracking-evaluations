/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$.cctor
ENTRY_POINT: 04f8f520
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  uint uVar14;
  long unaff_x21;
  ulong uVar15;
  long *plVar16;
  long *unaff_x26;
  float fVar17;
  float fVar18;
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
  
  *(undefined1 *)(unaff_x21 + 0xd9a) = 1;
  puVar10 = *(undefined4 **)(*(long *)PTR_DAT_06312cd8 + 0xb8);
  FUN_05c9c3b0(*puVar10,puVar10[1],puVar10[2],puVar10[3]);
  lVar5 = FUN_05c89410();
  if (lVar5 != 0) {
    FUN_05c8ca64(lVar5,*(undefined4 *)(unaff_x19 + 0x4c),0);
    lVar5 = thunk_FUN_02b79644(*(undefined8 *)System_Func<PointerOutEvent>_TypeInfo);
    FUN_037a5d48(lVar5,0x1a,*(undefined8 *)System_Func<PointerMoveLinkTagEvent>_TypeInfo);
    plVar16 = (long *)(unaff_x19 + 0x68);
    *plVar16 = lVar5;
    thunk_FUN_02bb0e9c(plVar16,lVar5);
    if (*plVar16 != 0) {
      uVar6 = FUN_037a6764(*plVar16,*(undefined8 *)System_Func<PointerMoveEvent>_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar6;
      thunk_FUN_02bb0e9c();
      puVar4 = System_Func<PointerLeaveEvent>_TypeInfo;
      puVar3 = System_Func<PointerEnterEvent>_TypeInfo;
      puVar2 = System_ComponentModel_Design_IDictionaryService_var;
      uVar15 = 2;
      do {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 == 0) goto LAB_04f8f964;
        if (*(uint *)(lVar5 + 0x18) <= uVar15) {
LAB_04f8f968:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar1 = *(uint *)(lVar5 + uVar15 * 4 + 0x20);
        if ((uVar1 != 0xffffffff) &&
           (uVar14 = (uint)uVar15, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
           ) {
          plVar16 = *(long **)(unaff_x19 + 0x38);
          if (plVar16 == (long *)0x0) goto LAB_04f8f964;
          lVar5 = *plVar16;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                goto LAB_04f8f68c;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(plVar16,*unaff_x26,9);
LAB_04f8f68c:
          (*(code *)*puVar7)(plVar16,uVar1,&stack0x00000050,puVar7[1]);
          uVar11 = FUN_04f8f978();
          if ((uVar11 & 1) == 0) {
            in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
            in_stack_00000018 = in_stack_00000058;
            uStack0000000000000024 = uStack0000000000000064;
            uStack0000000000000020 = uStack0000000000000060;
            lVar5 = FUN_04f8fa38();
            plVar16 = *(long **)(unaff_x19 + 0x78);
            in_stack_00000078 = lVar5;
            if (plVar16 == (long *)0x0) goto LAB_04f8f964;
            if ((lVar5 != 0) &&
               (lVar8 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)) {
              uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar6,0);
            }
            if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_04f8f968;
            plVar16[(long)(int)uVar1 + 4] = lVar5;
            thunk_FUN_02bb0e9c(plVar16 + (long)(int)uVar1 + 4,lVar5);
          }
          uStack000000000000000c = uVar1;
          uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
          uStack0000000000000008 = uVar14;
          uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)puVar3,&stack0x00000008);
          FUN_04c0af28(*(undefined8 *)System_Func<PointerOverLinkTagEvent>_TypeInfo,uVar6,uVar9,0);
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_04f8f964;
          fVar17 = (float)FUN_04f9195c(*(long *)(unaff_x19 + 0x40),uVar1,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if ((uVar14 < 0x1a) && ((1 << (ulong)(uVar14 & 0x1f) & 0x2108420U) != 0)) {
            fVar18 = -fVar17;
          }
          else {
            fVar18 = fVar17;
            if (uVar1 != 0) {
              fVar18 = 0.0;
            }
          }
          plVar16 = *(long **)(unaff_x19 + 0x38);
          if (plVar16 == (long *)0x0) goto LAB_04f8f964;
          lVar5 = *plVar16;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                goto LAB_04f8f810;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(plVar16,*unaff_x26,9);
LAB_04f8f810:
          (*(code *)*puVar7)(plVar16,uVar15 & 0xffffffff,&stack0x00000030,puVar7[1]);
          if (in_stack_00000078 == 0) goto LAB_04f8f964;
          FUN_05c89340(in_stack_00000078,0);
          uVar6 = FUN_04f8fbf8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                               uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                               fVar17,fVar18);
          lVar5 = in_stack_00000078;
          uVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Func<PointerDownLinkTagEvent>_TypeInfo);
          FUN_04f9059c(uVar9,uVar1,uVar15 & 0xffffffff,lVar5,uVar6,0);
          lVar5 = *(long *)(unaff_x19 + 0x68);
          if (lVar5 == 0) goto LAB_04f8f964;
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar12 = *(long *)puVar4;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_04f8f964;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = uVar9;
            thunk_FUN_02bb0e9c(puVar7,uVar9);
          }
          else {
            FUN_037a6538(lVar5,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x1a);
      FUN_04f8fe64();
      lVar5 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
    }
  }
LAB_04f8f964:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


