/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver<__Il2CppFullySharedGenericStructType>$$get_replaceIdleStateValueWithInitialValue
ENTRY_POINT: 010cf614
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x010cfa6c) */

void UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<__Il2CppFullySharedGenericStructType>__get_replaceIdleStateValueWithInitialValue
               (long param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long in_x9;
  int *piVar15;
  long unaff_x19;
  long lVar16;
  long unaff_x21;
  void *unaff_x22;
  long lVar17;
  ulong unaff_x25;
  void *__dest;
  long unaff_x27;
  long *plVar18;
  long unaff_x29;
  
  lVar7 = **(long **)(unaff_x19 + 0x38);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    uVar8 = thunk_FUN_00d42afc();
  }
  else {
    uVar8 = 0x18;
  }
  lVar16 = (in_x9 - param_1) - ((uVar8 & 0xffffffff) + 0xf & 0x1fffffff0);
  __dest = (void *)(lVar16 - ((unaff_x25 & 0xffffffff) + 0xf & 0x1fffffff0));
  plVar18 = *(long **)(unaff_x19 + 0x38);
  lVar7 = *plVar18;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
    plVar18 = *(long **)(unaff_x19 + 0x38);
  }
  if (-1 < *(int *)(lVar7 + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x68);
  }
  memcpy(__dest,unaff_x22,unaff_x25 & 0xffffffff);
  lVar7 = *plVar18;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  uVar8 = FUN_00da5124(lVar7,__dest);
  if ((uVar8 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar14 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(Method_ManageAudioSourcesOnTeleportPadsUsed_Activate__);
    uVar13 = thunk_FUN_00d48444(Method_OVRResult<OVRPlugin_Result>_FromFailure__);
    FUN_016f4460(uVar14,uVar12,uVar13,0);
  }
  else {
    plVar18 = *(long **)(unaff_x19 + 0x38);
    lVar7 = *plVar18;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
      plVar18 = *(long **)(unaff_x19 + 0x38);
    }
    lVar9 = plVar18[1];
    if ((*(byte *)(*plVar18 + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    FUN_00da59dc(lVar7,lVar9);
    if (*(char *)(unaff_x29 + -0x60) == '\0') {
      plVar18 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar18;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        plVar18 = *(long **)(unaff_x19 + 0x38);
      }
      lVar9 = *plVar18;
      lVar17 = plVar18[2];
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar1 = *(long *)(unaff_x29 + -0x68);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        lVar1 = unaff_x29 + -0x68;
      }
      FUN_00da59dc(lVar7,lVar17,in_x9 - param_1,lVar1,0,0);
      if ((unaff_x21 == 0) || (lVar7 = FUN_0268fd10(), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar18 = (long *)FUN_026a13c0(lVar7,0);
      puVar5 = StringLiteral_5840;
      puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar9 = *plVar18;
        lVar7 = *(long *)puVar4;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_010cf80c;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar18,lVar7,0);
LAB_010cf80c:
        uVar8 = (*(code *)*puVar10)(plVar18,puVar10[1]);
        puVar6 = StringLiteral_10310;
        if ((uVar8 & 1) == 0) {
          plVar18 = (long *)thunk_FUN_00d6225c(plVar18,*(undefined8 *)StringLiteral_10310);
          if (plVar18 == (long *)0x0) goto LAB_010cf990;
          lVar7 = *plVar18;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar8 == 0) goto LAB_010cf968;
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_010cf950;
        }
        lVar9 = *plVar18;
        lVar7 = *(long *)puVar4;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar9 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_010cf86c;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar18,lVar7,1);
LAB_010cf86c:
        plVar11 = (long *)(*(code *)*puVar10)(plVar18,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        bVar3 = *(byte *)(*(long *)puVar5 + 300);
        if ((*(byte *)(*plVar11 + 300) < bVar3) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        uVar12 = FUN_0268fd4c(plVar11,0);
        plVar11 = *(long **)(unaff_x19 + 0x38);
        lVar7 = *plVar11;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c(lVar7);
          plVar11 = *(long **)(unaff_x19 + 0x38);
        }
        lVar9 = *plVar11;
        lVar17 = plVar11[3];
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        iVar2 = *(int *)(lVar9 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x60) = uVar12;
        lVar9 = *(long *)(unaff_x29 + -0x68);
        if (-1 < iVar2) {
          lVar9 = unaff_x29 + -0x68;
        }
        FUN_00da59dc(lVar7,lVar17,lVar16,lVar9,unaff_x29 + -0x60,uVar12);
      } while( true );
    }
    thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
    uVar14 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(StringLiteral_5505);
    FUN_0176c578(uVar14,uVar12,0);
  }
  uVar12 = thunk_FUN_00d48444(UnityEngine_UIElements_VisualElementFactoryRegistry_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar14,uVar12);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_010cf950:
    if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_010cf984;
    }
  }
LAB_010cf968:
  puVar10 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar6,0);
LAB_010cf984:
  (*(code *)*puVar10)(plVar18,puVar10[1]);
LAB_010cf990:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


