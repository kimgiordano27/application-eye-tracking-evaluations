/*
FUNCTION_NAME: FUN_0320cb74
ENTRY_POINT: 0320cb74
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_0320cb74(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  int local_38 [2];
  
  if ((DAT_045327a4 & 1) == 0) {
    FUN_01c5d288(
                VoxelBusters_EssentialKit_WebViewCore_NativeWebViewBase_<>c__DisplayClass36_0_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_04232bd8);
    FUN_01c5d288(Photon_Pun_PhotonAnimatorView_SynchronizedLayer_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_ExtrasCore_Android_NativeApplicationUtility_<>c__DisplayClass9_0_TypeInfo
                );
    DAT_045327a4 = 1;
  }
  puVar1 = Photon_Pun_PhotonAnimatorView_SynchronizedLayer_TypeInfo;
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_0320cf84;
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  lVar11 = *(long *)puVar1;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(lVar11);
    lVar11 = *(long *)puVar1;
  }
  if (iVar3 != **(int **)(lVar11 + 0xb8)) {
    uVar8 = thunk_FUN_01c273e8(PlayerHUD_<FlashRingShrinkingMessage>d__262_TypeInfo);
    uVar8 = FUN_03313b64(uVar8,0);
LAB_0320d17c:
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar9 = thunk_FUN_01c496e0();
    FUN_032467a0(uVar9,uVar8,0);
    goto LAB_0320d098;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_0320cf84;
  uVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_0320cf84;
  uVar5 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  if ((int)(uVar5 | uVar4) < 0) goto LAB_0320d060;
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_0320cf84;
  lVar11 = *plVar7;
  if ((int)uVar4 < 2) {
    uVar8 = (**(code **)(lVar11 + 0x298))(plVar7,*(undefined8 *)(lVar11 + 0x2a0));
    lVar11 = *(long *)puVar1;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar11);
      lVar11 = *(long *)puVar1;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x20);
    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                VoxelBusters_EssentialKit_WebViewCore_NativeWebViewBase_<>c__DisplayClass36_0_TypeInfo
                              );
    FUN_0320d21c(uVar9,uVar12);
    uVar10 = FUN_032072dc(uVar8,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),uVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar9 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
      uVar9 = FUN_01c5d2fc(uVar9,1);
      FUN_019b2708();
      FUN_019b8dd4(uVar9,uVar8);
      FUN_019b8e08(uVar9,0,uVar8);
      uVar8 = thunk_FUN_01c273e8(PlayerHUD_<SubMessageQueue>d__195_TypeInfo);
      uVar8 = FUN_03315920(uVar8,uVar9,0);
      thunk_FUN_01c273e8(PTR_DAT_04230a40);
      uVar9 = thunk_FUN_01c496e0();
      FUN_032cd310(uVar9,uVar8,0);
      goto LAB_0320d098;
    }
    FUN_03209db0(param_1);
  }
  else {
    plVar7 = (long *)(**(code **)(lVar11 + 0x188))(plVar7,*(undefined8 *)(lVar11 + 400));
    if (plVar7 == (long *)0x0) goto LAB_0320cf84;
    (**(code **)(*plVar7 + 0x328))(plVar7,uVar5,1,*(undefined8 *)(*plVar7 + 0x330));
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_0320cf84;
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  if (1 < iVar3 - 1U) {
    uVar8 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar8 = FUN_01c5d2fc(uVar8,2);
    puVar1 = PTR_DAT_0422fd80;
    local_38[1] = 2;
    uVar9 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    uVar9 = thunk_FUN_01c49334(uVar9,local_38 + 1);
    FUN_019b2708(uVar8);
    FUN_019b8dd4(uVar8,uVar9);
    FUN_019b8e08(uVar8,0,uVar9);
    local_38[0] = iVar3;
    uVar9 = thunk_FUN_01c273e8(puVar1);
    uVar9 = thunk_FUN_01c49334(uVar9,local_38);
    FUN_019b2708(uVar8);
    FUN_019b8dd4(uVar8,uVar9);
    FUN_019b8e08(uVar8,1,uVar9);
    uVar9 = thunk_FUN_01c273e8(PlayerHUD_<ShowHitIndicatorCoroutine>d__237_TypeInfo);
    uVar8 = FUN_03315920(uVar9,uVar8,0);
    goto LAB_0320d17c;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(int *)(param_1 + 0x78) = iVar3;
  if (plVar7 == (long *)0x0) goto LAB_0320cf84;
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  *(int *)(param_1 + 0x68) = iVar3;
  if (-1 < iVar3) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 == (long *)0x0) goto LAB_0320cf84;
    uVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    puVar1 = PTR_DAT_04232bd8;
    if (-1 < (int)uVar4) {
      uVar8 = FUN_01c5d2fc(*(undefined8 *)
                            VoxelBusters_EssentialKit_ExtrasCore_Android_NativeApplicationUtility_<>c__DisplayClass9_0_TypeInfo
                           ,uVar4);
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      lVar11 = FUN_01c5d2fc(*(undefined8 *)puVar1,uVar4);
      *(long *)(param_1 + 0x58) = lVar11;
      if (uVar4 != 0) {
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 != (long *)0x0) {
          uVar10 = 0;
          do {
            plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
            if ((plVar7 == (long *)0x0) ||
               (uVar6 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200)),
               lVar11 == 0)) break;
            if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_0320d05c;
            *(undefined4 *)(lVar11 + uVar10 * 4 + 0x20) = uVar6;
            FUN_03209db0(param_1);
            if ((ulong)uVar4 - 1 == uVar10) goto LAB_0320ce1c;
            plVar7 = *(long **)(param_1 + 0x10);
            lVar11 = *(long *)(param_1 + 0x58);
            uVar10 = uVar10 + 1;
          } while (plVar7 != (long *)0x0);
        }
        goto LAB_0320cf84;
      }
LAB_0320ce1c:
      plVar7 = *(long **)(param_1 + 0x10);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
         plVar7 == (long *)0x0)) goto LAB_0320cf84;
      uVar4 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
      if ((uVar4 & 7) != 0) {
        uVar4 = uVar4 & 7 | 0xfffffff8;
        do {
          plVar7 = *(long **)(param_1 + 0x10);
          if (plVar7 == (long *)0x0) goto LAB_0320cf84;
          (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
          bVar2 = uVar4 != 0xffffffff;
          uVar4 = uVar4 + 1;
        } while (bVar2);
      }
      uVar4 = *(uint *)(param_1 + 0x68);
      if (*(long *)(param_1 + 0x70) == 0) {
        lVar11 = FUN_01c5d2fc(*(undefined8 *)puVar1,(ulong)uVar4);
        uVar10 = (ulong)*(uint *)(param_1 + 0x68);
        *(long *)(param_1 + 0x30) = lVar11;
        if (0 < (int)*(uint *)(param_1 + 0x68)) {
          plVar7 = *(long **)(param_1 + 0x10);
          if (plVar7 != (long *)0x0) {
            uVar13 = 0;
            do {
              uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
              if (lVar11 == 0) break;
              if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_0320d05c;
              *(undefined4 *)(lVar11 + uVar13 * 4 + 0x20) = uVar6;
              uVar10 = (ulong)*(int *)(param_1 + 0x68);
              uVar13 = uVar13 + 1;
              if ((long)uVar10 <= (long)uVar13) goto LAB_0320cec0;
              plVar7 = *(long **)(param_1 + 0x10);
              lVar11 = *(long *)(param_1 + 0x30);
            } while (plVar7 != (long *)0x0);
          }
          goto LAB_0320cf84;
        }
      }
      else {
        if (uVar4 >> 0x1d != 0) goto LAB_0320d060;
        uVar8 = FUN_0322ed30(*(long *)(param_1 + 0x70),0);
        plVar7 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x38) = uVar8;
        if (plVar7 == (long *)0x0) goto LAB_0320cf84;
        (**(code **)(*plVar7 + 0x328))(plVar7,(ulong)uVar4 << 2,1,*(undefined8 *)(*plVar7 + 0x330));
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_0320cf84;
        FUN_0322ed30(*(long *)(param_1 + 0x70),0);
        uVar10 = (ulong)*(uint *)(param_1 + 0x68);
      }
LAB_0320cec0:
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar8 = FUN_01c5d2fc(*(undefined8 *)puVar1,uVar10 & 0xffffffff);
        *(undefined8 *)(param_1 + 0x40) = uVar8;
        if (0 < *(int *)(param_1 + 0x68)) {
          uVar10 = 0;
          do {
            plVar7 = *(long **)(param_1 + 0x10);
            if (plVar7 == (long *)0x0) goto LAB_0320cf84;
            iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
            if (iVar3 < 0) goto LAB_0320d060;
            lVar11 = *(long *)(param_1 + 0x40);
            if (lVar11 == 0) goto LAB_0320cf84;
            if (*(uint *)(lVar11 + 0x18) <= uVar10) {
LAB_0320d05c:
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            *(int *)(lVar11 + uVar10 * 4 + 0x20) = iVar3;
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)*(int *)(param_1 + 0x68));
        }
      }
      else {
        if ((uVar10 >> 0x1d & 7) != 0) goto LAB_0320d060;
        uVar8 = FUN_0322ed30(*(long *)(param_1 + 0x70),0);
        plVar7 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x48) = uVar8;
        if (plVar7 == (long *)0x0) goto LAB_0320cf84;
        (**(code **)(*plVar7 + 0x328))(plVar7,(int)uVar10 << 2,1,*(undefined8 *)(*plVar7 + 0x330));
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_0320cf84;
        FUN_0322ed30(*(long *)(param_1 + 0x70),0);
      }
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) {
LAB_0320cf84:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
      *(long *)(param_1 + 0x28) = (long)iVar3;
      if (-1 < iVar3) {
        plVar7 = *(long **)(param_1 + 0x10);
        if ((plVar7 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
           plVar7 == (long *)0x0)) goto LAB_0320cf84;
        lVar11 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
        *(long *)(param_1 + 0x20) = lVar11;
        if (lVar11 <= *(long *)(param_1 + 0x28)) {
          return;
        }
      }
    }
  }
LAB_0320d060:
  uVar8 = thunk_FUN_01c273e8(PhotonSnowBall_<SetHand>d__10_TypeInfo);
  uVar8 = FUN_03313b64(uVar8,0);
  thunk_FUN_01c273e8(OVRPlugin_LayerLayout_TypeInfo);
  uVar9 = thunk_FUN_01c496e0();
  FUN_032485c8(uVar9,uVar8,0);
LAB_0320d098:
  uVar8 = thunk_FUN_01c273e8(PlayerHUD_<FlashColorFade>d__203_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar9,uVar8);
}


