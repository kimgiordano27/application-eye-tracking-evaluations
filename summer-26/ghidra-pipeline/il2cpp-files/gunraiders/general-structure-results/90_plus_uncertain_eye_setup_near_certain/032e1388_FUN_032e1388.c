/*
FUNCTION_NAME: FUN_032e1388
ENTRY_POINT: 032e1388
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


int FUN_032e1388(long param_1,undefined8 param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint local_54;
  undefined *puVar8;
  
  if ((DAT_04532f9f & 1) == 0) {
    FUN_01c5d288(UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass72_0_TypeInfo);
    DAT_04532f9f = 1;
  }
  local_54 = *param_5;
  iVar9 = 10;
  if (param_3 != -1) {
    iVar9 = param_3;
  }
  uVar10 = iVar9 - 2U >> 1;
  if ((7 < (uVar10 | iVar9 << 0x1f)) || ((1 << (ulong)(uVar10 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar5 = thunk_FUN_01c496e0();
    uVar7 = thunk_FUN_01c273e8(
                              Method_CodeStage_AntiCheat_Detectors_ACTkDetectorBase<WallHackDetector>_ResumeDetector__
                              );
    uVar6 = thunk_FUN_01c273e8(UnityEngine_Splines_SplineMesh_TypeInfo);
    FUN_0323fce4(uVar5,uVar7,uVar6,0);
    goto LAB_032e172c;
  }
  if (((int)local_54 < 0) || (uVar10 = (uint)param_2, (int)uVar10 <= (int)local_54)) {
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar5 = thunk_FUN_01c496e0();
    uVar7 = thunk_FUN_01c273e8(UnityEngine_UIElements_IUxmlAttributes_TypeInfo);
    FUN_03247e00(uVar5,uVar7,0);
    goto LAB_032e172c;
  }
  if (((param_4 & 0x3000) == 0) && (FUN_032e10b0(param_1,param_2,&local_54), local_54 == uVar10)) {
    thunk_FUN_01c273e8(PTR_DAT_0423a628);
    uVar5 = thunk_FUN_01c496e0();
    puVar8 = 
    Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_Remove__;
    goto LAB_032e164c;
  }
  if (uVar10 <= local_54) goto LAB_032e15b8;
  sVar2 = *(short *)(param_1 + (long)(int)local_54 * 2);
  if (sVar2 == 0x2b) {
    local_54 = local_54 + 1;
LAB_032e148c:
    bVar3 = false;
    iVar11 = 1;
LAB_032e1490:
    if (((param_3 == 0x10) || (param_3 == -1)) && (uVar1 = local_54 + 1, (int)uVar1 < (int)uVar10))
    {
      if (uVar10 <= local_54) {
LAB_032e15b8:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (*(short *)(param_1 + (long)(int)local_54 * 2) == 0x30) {
        if (uVar10 <= uVar1) goto LAB_032e15b8;
        if ((*(ushort *)(param_1 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          local_54 = local_54 + 2;
          iVar9 = 0x10;
        }
      }
    }
    uVar1 = local_54;
    uVar4 = Oculus_Platform_CAPI__ovr_DataStore_GetNumKeys
                      (iVar9,param_1,param_2,&local_54,param_4 >> 9 & 1);
    if (local_54 == uVar1) {
      thunk_FUN_01c273e8(PTR_DAT_0423a628);
      uVar5 = thunk_FUN_01c496e0();
      puVar8 = 
      Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>__ctor__;
    }
    else {
      if (((param_4 >> 0xc & 1) == 0) || ((int)uVar10 <= (int)local_54)) {
        *param_5 = local_54;
        if ((param_4 >> 10 & 1) == 0) {
          if ((param_4 >> 0xb & 1) == 0) {
            if ((((param_4 >> 9 & 1) != 0) || (iVar9 != 10)) || (bVar3 || uVar4 != 0x80000000)) {
LAB_032e1590:
              if (iVar9 != 10) {
                iVar11 = 1;
              }
              return uVar4 * iVar11;
            }
            thunk_FUN_01c273e8(System_Resources_IResourceGroveler_TypeInfo);
            uVar5 = thunk_FUN_01c496e0();
            puVar8 = 
            Method_CodeStage_AntiCheat_Detectors_ACTkDetectorBase<SpeedHackDetector>_set_IsRunning__
            ;
          }
          else {
            if (uVar4 < 0x10000) goto LAB_032e1590;
            thunk_FUN_01c273e8(System_Resources_IResourceGroveler_TypeInfo);
            uVar5 = thunk_FUN_01c496e0();
            puVar8 = 
            Method_CodeStage_AntiCheat_Detectors_ACTkDetectorBase<SpeedHackDetector>_add_CheatDetected__
            ;
          }
        }
        else {
          if (uVar4 < 0x100) goto LAB_032e1590;
          thunk_FUN_01c273e8(System_Resources_IResourceGroveler_TypeInfo);
          uVar5 = thunk_FUN_01c496e0();
          puVar8 = 
          Method_CodeStage_AntiCheat_Detectors_ACTkDetectorBase<ObscuredCheatingDetector>_set_IsStarted__
          ;
        }
        goto LAB_032e171c;
      }
      thunk_FUN_01c273e8(PTR_DAT_0423a628);
      uVar5 = thunk_FUN_01c496e0();
      puVar8 = Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__;
    }
LAB_032e164c:
    uVar7 = thunk_FUN_01c273e8(puVar8);
    FUN_032baa68(uVar5,uVar7,0);
  }
  else {
    if (sVar2 != 0x2d) goto LAB_032e148c;
    if (iVar9 != 10) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar5 = thunk_FUN_01c496e0();
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_TryGetValue__
                                );
      FUN_032467a0(uVar5,uVar7,0);
      goto LAB_032e172c;
    }
    if ((param_4 >> 9 & 1) == 0) {
      local_54 = local_54 + 1;
      iVar11 = -1;
      bVar3 = true;
      goto LAB_032e1490;
    }
    thunk_FUN_01c273e8(System_Resources_IResourceGroveler_TypeInfo);
    uVar5 = thunk_FUN_01c496e0();
    puVar8 = 
    Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_get_Count__;
LAB_032e171c:
    uVar7 = thunk_FUN_01c273e8(puVar8);
    FUN_032e0994(uVar5,uVar7);
  }
LAB_032e172c:
  uVar7 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Action<OVRSpatialAnchor_OperationResult>>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar5,uVar7);
}


