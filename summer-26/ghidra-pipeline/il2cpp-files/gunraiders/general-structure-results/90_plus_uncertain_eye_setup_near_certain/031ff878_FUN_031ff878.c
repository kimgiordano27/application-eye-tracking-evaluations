/*
FUNCTION_NAME: FUN_031ff878
ENTRY_POINT: 031ff878
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x031ffae0) */
/* WARNING: Removing unreachable block (ram,0x031ffde8) */
/* WARNING: Removing unreachable block (ram,0x031ffd70) */

long FUN_031ff878(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_70;
  char local_64 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  undefined *puVar9;
  
  puVar2 = OVRPlugin_Size3f_TypeInfo;
  puVar9 = UnityEngine_UIElements_InlineStyleAccess_TypeInfo;
  if ((DAT_04532736 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_Sizef_TypeInfo);
    FUN_01c5d288(OVRPlugin_Sizei_TypeInfo);
    FUN_01c5d288(OVRPlugin_SkeletonType_TypeInfo);
    FUN_01c5d288(OVRPlugin_SpaceComponentType_TypeInfo);
    FUN_01c5d288(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_01c5d288(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_InlineStyleAccess_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_LeaderboardBase_<>c__DisplayClass39_0_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_0422fbe0);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_01c5d288(OVRPlugin_TrackedKeyboardFlags_TypeInfo);
    FUN_01c5d288(OVRPlugin_Size3f_TypeInfo);
    FUN_01c5d288(OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo);
    DAT_04532736 = 1;
  }
  puVar3 = OVRPlugin_TrackedKeyboardFlags_TypeInfo;
  local_60 = 0;
  uStack_58 = 0;
  local_48 = 0;
  local_64[0] = '\0';
  local_70 = 0;
  FUN_0266d23c(&local_60,param_1,param_2,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = OVRPlugin_SystemHeadset_TypeInfo;
  lVar11 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  lVar10 = *(long *)(*(long *)puVar9 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *(long *)puVar3;
    }
    uVar12 = **(undefined8 **)(lVar4 + 0xb8);
    lVar11 = thunk_FUN_01c496e0(*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
    FUN_02b623a8(lVar11,uVar12,*(undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar11;
  }
  FUN_02370654(lVar10 + 8,lVar11,*(undefined8 *)puVar2);
  lVar4 = *(long *)puVar9;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar9;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  local_64[0] = '\0';
  FUN_0333497c(uVar12,local_64,0);
  lVar4 = *(long *)puVar9;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar9;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar5 = FUN_028690ec(lVar4,local_60,uStack_58,&local_48,*(undefined8 *)OVRPlugin_Sizef_TypeInfo);
  if (local_64[0] != '\0') {
    thunk_FUN_01c216e8(uVar12,0);
  }
  if ((uVar5 & 1) != 0) {
    return local_48;
  }
  plVar6 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
  puVar2 = PTR_DAT_0422fb28;
  uVar12 = *(undefined8 *)PTR_DAT_0422fbe0;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar4 = FUN_032e04b8(uVar12,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((lVar4 != 0) &&
     (lVar11 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
    uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar12,0);
  }
  if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar6[4] = lVar4;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar6 = (long *)FUN_032eba0c(param_1,*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,
                                0x138,0,plVar6,0,0);
  if (plVar6 == (long *)0x0) {
    uVar5 = FUN_0321094c(0,0,0);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       VoxelBusters_EssentialKit_GameServicesCore_LeaderboardBase_<>c__DisplayClass39_0_TypeInfo
                     + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         VoxelBusters_EssentialKit_GameServicesCore_LeaderboardBase_<>c__DisplayClass39_0_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar6);
    }
    uVar5 = FUN_0321094c(plVar6,0,0);
    if ((uVar5 & 1) == 0) {
      uVar12 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
      uVar13 = *(undefined8 *)OVRPlugin_SpaceComponentType_TypeInfo;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      uVar13 = FUN_032e04b8(uVar13,0);
      uVar5 = FUN_032ea0d4(uVar12,uVar13,0);
      if ((uVar5 & 1) == 0) {
        plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if ((param_2 != 0) &&
           (lVar4 = thunk_FUN_01c495e4(param_2,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
          uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar12,0);
        }
        if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar7[4] = param_2;
        lVar4 = thunk_FUN_01c65484(plVar6,0,plVar7,&local_70,0);
        if (lVar4 == 0) {
          lVar11 = 0;
        }
        else {
          uVar12 = *(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo;
          lVar11 = thunk_FUN_01c495e4(lVar4,uVar12);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar4,uVar12);
          }
        }
        local_48 = lVar11;
        if (local_70 != 0) {
          uVar12 = FUN_032000a0(local_70);
          FUN_019b2708();
                    /* WARNING: Subroutine does not return */
          FUN_03200160(uVar12);
        }
        if (lVar11 != 0) {
          lVar4 = *(long *)puVar9;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar4 = *(long *)puVar9;
          }
          uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
          local_64[0] = '\0';
          FUN_0333497c(uVar12,local_64,0);
          lVar4 = *(long *)puVar9;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar4 = *(long *)puVar9;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar4 != 0) {
            FUN_028679e0(lVar4,local_60,uStack_58,local_48,*(undefined8 *)OVRPlugin_Sizei_TypeInfo);
            if (local_64[0] == '\0') {
              return local_48;
            }
            thunk_FUN_01c216e8(uVar12,0);
            return local_48;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_019b2708(param_1);
        uVar12 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
        uVar13 = thunk_FUN_01c273e8(OVRPlugin_Vector4f_TypeInfo);
        puVar9 = OVRPlugin_Vector4s_TypeInfo;
        goto LAB_03200018;
      }
    }
  }
  FUN_019b2708(param_1);
  uVar12 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  uVar13 = thunk_FUN_01c273e8(OVRPlugin_TrackingConfidence_TypeInfo);
  puVar9 = OVRPlugin_Vector3f_TypeInfo;
LAB_03200018:
  uVar8 = thunk_FUN_01c273e8(puVar9);
  uVar12 = FUN_03152fb8(uVar13,uVar12,uVar8,0);
  thunk_FUN_01c273e8(OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo);
  uVar13 = thunk_FUN_01c496e0();
  FUN_032478d8(uVar13,uVar12,0);
  uVar12 = thunk_FUN_01c273e8(OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar13,uVar12);
}


