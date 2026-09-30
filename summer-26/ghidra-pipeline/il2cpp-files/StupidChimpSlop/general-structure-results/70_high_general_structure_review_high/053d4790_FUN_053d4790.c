/*
FUNCTION_NAME: FUN_053d4790
ENTRY_POINT: 053d4790
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


undefined8 FUN_053d4790(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  if ((DAT_06a53449 & 1) == 0) {
    FUN_02d4dc40(PlayFab_ClientModels_LinkOpenIdConnectRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664a728);
    FUN_02d4dc40(PlayFab_ClientModels_LinkXboxAccountRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b698);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_LinkXboxAccountResult_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664e668);
    FUN_02d4dc40(PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664ada8);
    FUN_02d4dc40(Oculus_Platform_Models_LinkedAccount_TypeInfo);
    FUN_02d4dc40(Oculus_Platform_Models_LinkedAccountList_TypeInfo);
    FUN_02d4dc40(PlayFab_MultiplayerModels_ListAssetSummariesRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_MultiplayerModels_ListAssetSummariesResponse_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_ListBindableAttribute_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b6e8);
    FUN_02d4dc40(PTR_DAT_06653ef0);
    FUN_02d4dc40(UnityEngine_InputSystem_Layouts_InputDeviceBuilder_TypeInfo);
    DAT_06a53449 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (param_3 == -1) {
    if (*(int *)(*(long *)PTR_DAT_0664e668 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar6 = FUN_053d9c2c(param_2);
    if ((uVar6 & 1) == 0) goto LAB_053d4aa8;
  }
  if (param_2 == (long *)0x0) goto LAB_053d5104;
  iVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  puVar2 = UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo;
  if (iVar3 < 7) {
    if (iVar3 == 5) {
      bVar1 = *(byte *)(*(long *)PlayFab_ClientModels_LinkOpenIdConnectRequest_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)PlayFab_ClientModels_LinkOpenIdConnectRequest_TypeInfo)) {
        lVar10 = param_2[2];
        lVar12 = param_2[3];
LAB_053d4b18:
        uVar7 = FUN_053d9a2c(param_1,lVar12,lVar10,param_3);
        return uVar7;
      }
    }
    else {
      if (iVar3 != 6) goto LAB_053d4aa8;
      bVar1 = *(byte *)(*(long *)Oculus_Platform_Models_LinkedAccount_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Oculus_Platform_Models_LinkedAccount_TypeInfo)) {
        if (param_2[2] != 0) {
          uVar6 = FUN_04f4011c(param_2[2],0);
          if ((uVar6 & 1) == 0) {
            plVar9 = (long *)FUN_053aef54(param_2,0);
            if ((plVar9 == (long *)0x0) ||
               (lVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)),
               lVar10 == 0)) goto LAB_053d5104;
            uVar6 = FUN_0501ca18(lVar10,0);
            if ((uVar6 & 1) != 0) {
              lVar10 = param_2[2];
              plVar9 = (long *)FUN_053aef54(param_2,0);
              if ((plVar9 == (long *)0x0) ||
                 (lVar12 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)),
                 lVar12 == 0)) goto LAB_053d5104;
              uVar7 = FUN_0501d38c(lVar12,*(undefined8 *)
                                           UnityEngine_InputSystem_Layouts_InputDeviceBuilder_TypeInfo
                                   ,0x14,0);
              uVar6 = FUN_04f4028c(lVar10,uVar7,0);
              if ((uVar6 & 1) != 0) {
                lVar12 = FUN_053aef54(param_2,0);
                goto LAB_053d50dc;
              }
            }
          }
LAB_053d4aa8:
          FUN_053d1434(param_1,param_2);
          return 0;
        }
        goto LAB_053d5104;
      }
    }
    goto LAB_053d5108;
  }
  if (iVar3 != 0x17) {
    if (iVar3 == 0x37) {
      if (*param_2 == *(long *)UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo) {
        uVar6 = FUN_04f3ffd0(param_2[4],0,0);
        if ((uVar6 & 1) == 0) {
          iVar3 = FUN_053affb4(param_2,0);
          lVar12 = param_2[3];
          if (iVar3 != 1) {
LAB_053d50dc:
            uVar7 = FUN_053d9db0(param_1,lVar12,param_2,param_3);
            return uVar7;
          }
          lVar10 = FUN_053b0054(param_2,0,0);
          goto LAB_053d4b18;
        }
        plVar9 = (long *)param_2[3];
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        if (plVar9 != (long *)0x0) {
          lVar10 = *(long *)(param_1 + 0x18);
          uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
          if (*(int *)(*(long *)PTR_DAT_0664a728 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*(long *)PTR_DAT_0664a728);
          }
          uVar7 = FUN_053a1490(uVar7,0);
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (uVar4 = FUN_053c7104(*(long *)(param_1 + 0x10)), lVar10 == 0)) goto LAB_053d5104;
          auVar13 = FUN_053e3aa4(lVar10,uVar7,uVar4,0);
          FUN_03945d28(&local_90,auVar13._0_8_,auVar13._8_8_,
                       *(undefined8 *)PlayFab_MultiplayerModels_ListAssetSummariesRequest_TypeInfo);
          FUN_053d4790(param_1,param_2[3],0xffffffff);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_053d5104;
          FUN_053c7b8c();
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_053d5104;
          FUN_053c872c(*(long *)(param_1 + 0x10),uStack_88 & 0xffffffff);
        }
        uVar5 = FUN_053affb4(param_2,0);
        lVar10 = FUN_02d4dd2c(*(undefined8 *)
                               PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest_TypeInfo,
                              (ulong)uVar5);
        puVar2 = PTR_DAT_0664a728;
        if (0 < (int)uVar5) {
          uVar6 = 0;
          puVar11 = (undefined8 *)(lVar10 + 0x28);
          do {
            plVar9 = (long *)FUN_053b0054(param_2,uVar6 & 0xffffffff,0);
            FUN_053d1434(param_1,plVar9);
            if (plVar9 == (long *)0x0) goto LAB_053d5104;
            lVar12 = *(long *)(param_1 + 0x18);
            uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02dabd98(*(long *)puVar2);
            }
            uVar7 = FUN_053a1490(uVar7,0);
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (uVar4 = FUN_053c7104(*(long *)(param_1 + 0x10)), lVar12 == 0)) goto LAB_053d5104;
            auVar13 = FUN_053e3aa4(lVar12,uVar7,uVar4,0);
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_053d5104;
            FUN_053c7b8c();
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (FUN_053c872c(*(long *)(param_1 + 0x10),auVar13._0_8_ & 0xffffffff), lVar10 == 0))
            goto LAB_053d5104;
            if (*(uint *)(lVar10 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            puVar11[-1] = auVar13._0_8_;
            *puVar11 = auVar13._8_8_;
            thunk_FUN_02dc1ef0(puVar11,0);
            uVar6 = uVar6 + 1;
            puVar11 = puVar11 + 2;
          } while (uVar5 != uVar6);
        }
        FUN_053d268c(param_1,param_2);
        uStack_a8 = uStack_88;
        local_b0 = local_90;
        local_a0 = local_80;
        if (param_2[4] != 0) {
          uVar7 = FUN_04f419a0(param_2[4],0);
          uVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_ClientModels_LinkXboxAccountResult_TypeInfo);
          uStack_c8 = uStack_a8;
          local_d0 = local_b0;
          local_c0 = local_a0;
          FUN_053de9e4(uVar8,&local_d0,lVar10,uVar7,param_3,0);
          return uVar8;
        }
        goto LAB_053d5104;
      }
    }
    else {
      if (iVar3 != 0x26) goto LAB_053d4aa8;
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo
                       + 0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo)) {
        FUN_053d1b08(param_1,param_2);
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          uVar7 = FUN_053d1a74(param_1,param_2);
          uVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_MultiplayerModels_ListAssetSummariesResponse_TypeInfo)
          ;
          FUN_053de12c(uVar8,uVar7,param_3,0);
          return uVar8;
        }
      }
    }
    goto LAB_053d5108;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_0664ada8 + 0x130);
  if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0664ada8))
  goto LAB_053d5108;
  plVar9 = (long *)param_2[2];
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = *(long *)(param_1 + 0x18);
    uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    if (*(int *)(*(long *)PTR_DAT_0664a728 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_0664a728);
    }
    uVar7 = FUN_0538eb88(uVar7,*(undefined8 *)PTR_DAT_06653ef0,0);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (uVar4 = FUN_053c7104(*(long *)(param_1 + 0x10)), lVar10 == 0)) goto LAB_053d5104;
    auVar13 = FUN_053e3aa4(lVar10,uVar7,uVar4,0);
    FUN_03945d28(&local_78,auVar13._0_8_,auVar13._8_8_,
                 *(undefined8 *)PlayFab_MultiplayerModels_ListAssetSummariesRequest_TypeInfo);
    FUN_053d4790(param_1,param_2[2],0xffffffff);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_053d5104;
    FUN_053c7b8c();
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_053d5104;
    FUN_053c872c(*(long *)(param_1 + 0x10),uStack_70 & 0xffffffff);
  }
  plVar9 = (long *)FUN_053aec40(param_2,0);
  if (plVar9 == (long *)0x0) {
LAB_053d4f00:
    plVar9 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0664b698 + 0x130);
    if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_053d4f00;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0664b698) {
      plVar9 = (long *)0x0;
    }
  }
  uVar6 = FUN_04f3e780(plVar9,0,0);
  if ((uVar6 & 1) == 0) {
    param_2 = (long *)FUN_053aec40(param_2,0);
    if (param_2 != (long *)0x0) {
      lVar10 = *param_2;
      bVar1 = *(byte *)(*(long *)PTR_DAT_0664b6e8 + 0x130);
      if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0664b6e8))
      {
LAB_053d5108:
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(param_2);
      }
      lVar12 = *(long *)(param_1 + 0x10);
      uVar7 = (**(code **)(lVar10 + 0x298))(param_2,1,*(undefined8 *)(lVar10 + 0x2a0));
      if (lVar12 != 0) {
        FUN_053cbb58(lVar12,uVar7);
        uVar6 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uStack_a8 = uStack_70;
        local_b0 = local_78;
        local_a0 = local_68;
        uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                    System_ComponentModel_ListBindableAttribute_TypeInfo);
        uStack_108 = uStack_a8;
        local_110 = local_b0;
        local_100 = local_a0;
        FUN_053de790(uVar7,&local_110,param_2,param_3,0);
        return uVar7;
      }
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 != 0) {
      uVar7 = FUN_053cb860(uVar6,plVar9);
      FUN_053c6e94(lVar10,uVar7);
      if (plVar9 != (long *)0x0) {
        uVar6 = FUN_04f3e694(plVar9,0);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        uVar6 = FUN_04f3e674(plVar9,0);
        if ((uVar6 & 1) == 0) {
          uStack_a8 = uStack_70;
          local_b0 = local_78;
          local_a0 = local_68;
          uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                      PlayFab_ClientModels_LinkXboxAccountRequest_TypeInfo);
          uStack_e8 = uStack_a8;
          local_f0 = local_b0;
          local_e0 = local_a0;
          FUN_053de5f8(uVar7,&local_f0,plVar9,param_3,0);
          return uVar7;
        }
        return 0;
      }
    }
  }
LAB_053d5104:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


