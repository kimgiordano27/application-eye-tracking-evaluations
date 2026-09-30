/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$.cctor
ENTRY_POINT: 04f8f340
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long *plVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  ulong in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
  FUN_02b3c81c(System_ComponentModel_Design_IDictionaryService_var);
  FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
  FUN_02b3c81c(System_Func<PointerLeaveEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<PointerMoveEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<PointerMoveLinkTagEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<PointerOutEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<PointerOutLinkTagEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<PointerOverEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<PointerOverLinkTagEvent>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xdae) = 1;
  puVar3 = System_Runtime_Remoting_IRemotingTypeInfo_var;
  plVar16 = *(long **)(unaff_x19 + 0x38);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  _uStack0000000000000030 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)System_Runtime_Remoting_IRemotingTypeInfo_var) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x11) * 0x10 + 0x138);
          goto LAB_04f8f430;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02b7654c(plVar16,*(long *)System_Runtime_Remoting_IRemotingTypeInfo_var,0x11);
LAB_04f8f430:
    uVar12 = (*(code *)*puVar6)(plVar16,puVar6[1]);
    if ((uVar12 & 1) == 0) {
      return;
    }
    uVar7 = FUN_02b3c908(*(undefined8 *)System_Func<PointerOutLinkTagEvent>_TypeInfo,0x1a);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
    thunk_FUN_02bb0e9c();
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312cb0);
    FUN_05c8d47c(lVar9,*(undefined8 *)System_Func<PointerOverEvent>_TypeInfo,0);
    if (lVar9 != 0) {
      lVar9 = FUN_05c8c8e0(lVar9,0);
      uVar7 = FUN_05c89340();
      if (lVar9 != 0) {
        FUN_05c9caa4(lVar9,uVar7,0,0);
        if (DAT_066c1d97 == '\0') {
          FUN_02b3c81c(PTR_DAT_06312438);
          DAT_066c1d97 = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_06312438 + 0xb8);
        FUN_05c9b4fc(*puVar10,puVar10[1],puVar10[2],lVar9,0);
        if (DAT_066c1d9a == '\0') {
          FUN_02b3c81c(PTR_DAT_06312cd8);
          DAT_066c1d9a = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_06312cd8 + 0xb8);
        FUN_05c9c3b0(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar9,0);
        lVar9 = FUN_05c89410(lVar9,0);
        if (lVar9 != 0) {
          FUN_05c8ca64(lVar9,*(undefined4 *)(unaff_x19 + 0x4c),0);
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Func<PointerOutEvent>_TypeInfo);
          FUN_037a5d48(lVar9,0x1a,*(undefined8 *)System_Func<PointerMoveLinkTagEvent>_TypeInfo);
          plVar16 = (long *)(unaff_x19 + 0x68);
          *plVar16 = lVar9;
          thunk_FUN_02bb0e9c(plVar16,lVar9);
          if (*plVar16 != 0) {
            uVar7 = FUN_037a6764(*plVar16,*(undefined8 *)System_Func<PointerMoveEvent>_TypeInfo);
            *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
            thunk_FUN_02bb0e9c();
            puVar5 = System_Func<PointerLeaveEvent>_TypeInfo;
            puVar4 = System_Func<PointerEnterEvent>_TypeInfo;
            puVar2 = System_ComponentModel_Design_IDictionaryService_var;
            uVar12 = 2;
            do {
              lVar9 = *(long *)puVar2;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar9 = *(long *)puVar2;
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
              if (lVar9 == 0) goto LAB_04f8f964;
              if (*(uint *)(lVar9 + 0x18) <= uVar12) {
LAB_04f8f968:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              uVar1 = *(uint *)(lVar9 + uVar12 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 (uVar17 = (uint)uVar12,
                 (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar17 & 0x1f) & 1) != 0)) {
                plVar16 = *(long **)(unaff_x19 + 0x38);
                if (plVar16 == (long *)0x0) goto LAB_04f8f964;
                lVar11 = *plVar16;
                lVar9 = *(long *)puVar3;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar9) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                      goto LAB_04f8f68c;
                    }
                    uVar13 = uVar13 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar13 != 0);
                }
                puVar6 = (undefined8 *)FUN_02b7654c(plVar16,lVar9,9);
LAB_04f8f68c:
                (*(code *)*puVar6)(plVar16,uVar1,&stack0x00000050,puVar6[1]);
                uVar13 = FUN_04f8f978();
                if ((uVar13 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar9 = FUN_04f8fa38();
                  plVar16 = *(long **)(unaff_x19 + 0x78);
                  in_stack_00000078 = lVar9;
                  if (plVar16 == (long *)0x0) goto LAB_04f8f964;
                  if ((lVar9 != 0) &&
                     (lVar11 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar16 + 0x40)),
                     lVar11 == 0)) {
                    uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                    FUN_02b3c988(uVar7,0);
                  }
                  if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_04f8f968;
                  plVar16[(long)(int)uVar1 + 4] = lVar9;
                  thunk_FUN_02bb0e9c(plVar16 + (long)(int)uVar1 + 4,lVar9);
                }
                uStack000000000000000c = uVar1;
                uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = uVar17;
                uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)puVar4,&stack0x00000008);
                FUN_04c0af28(*(undefined8 *)System_Func<PointerOverLinkTagEvent>_TypeInfo,uVar7,
                             uVar8,0);
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_04f8f964;
                fVar18 = (float)FUN_04f9195c(*(long *)(unaff_x19 + 0x40),uVar1,0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if ((uVar17 < 0x1a) && ((1 << (ulong)(uVar17 & 0x1f) & 0x2108420U) != 0)) {
                  fVar19 = -fVar18;
                }
                else {
                  fVar19 = fVar18;
                  if (uVar1 != 0) {
                    fVar19 = 0.0;
                  }
                }
                plVar16 = *(long **)(unaff_x19 + 0x38);
                if (plVar16 == (long *)0x0) goto LAB_04f8f964;
                lVar11 = *plVar16;
                lVar9 = *(long *)puVar3;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar9) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                      goto LAB_04f8f810;
                    }
                    uVar13 = uVar13 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar13 != 0);
                }
                puVar6 = (undefined8 *)FUN_02b7654c(plVar16,lVar9,9);
LAB_04f8f810:
                (*(code *)*puVar6)(plVar16,uVar12 & 0xffffffff,&stack0x00000030,puVar6[1]);
                if (in_stack_00000078 == 0) goto LAB_04f8f964;
                FUN_05c89340(in_stack_00000078,0);
                uVar7 = FUN_04f8fbf8(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,fVar18,fVar19);
                lVar9 = in_stack_00000078;
                uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                            System_Func<PointerDownLinkTagEvent>_TypeInfo);
                FUN_04f9059c(uVar8,uVar1,uVar12 & 0xffffffff,lVar9,uVar7,0);
                lVar9 = *(long *)(unaff_x19 + 0x68);
                if (lVar9 == 0) goto LAB_04f8f964;
                lVar11 = *(long *)(lVar9 + 0x10);
                lVar14 = *(long *)puVar5;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_04f8f964;
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar6 = uVar8;
                  thunk_FUN_02bb0e9c(puVar6,uVar8);
                }
                else {
                  FUN_037a6538(lVar9,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != 0x1a);
            FUN_04f8fe64();
            lVar9 = *(long *)(unaff_x19 + 0x58);
            *(undefined1 *)(unaff_x19 + 0x81) = 1;
            if (lVar9 != 0) {
              (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_04f8f964:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


