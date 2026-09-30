/*
FUNCTION_NAME: FUN_032e0d4c
ENTRY_POINT: 032e0d4c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


long FUN_032e0d4c(long param_1,undefined8 param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint local_54;
  undefined *puVar7;
  
  if ((DAT_04532f9e & 1) == 0) {
    FUN_01c5d288(UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass72_0_TypeInfo);
    DAT_04532f9e = 1;
  }
  local_54 = *param_5;
  iVar10 = 10;
  if (param_3 != -1) {
    iVar10 = param_3;
  }
  uVar9 = iVar10 - 2U >> 1;
  if ((7 < (uVar9 | iVar10 << 0x1f)) || ((1 << (ulong)(uVar9 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar5 = thunk_FUN_01c496e0();
    uVar6 = thunk_FUN_01c273e8(
                              Method_CodeStage_AntiCheat_Detectors_ACTkDetectorBase<WallHackDetector>_ResumeDetector__
                              );
    uVar8 = thunk_FUN_01c273e8(UnityEngine_Splines_SplineMesh_TypeInfo);
    FUN_0323fce4(uVar5,uVar6,uVar8,0);
    goto LAB_032e1050;
  }
  if (((int)local_54 < 0) || (uVar9 = (uint)param_2, (int)uVar9 <= (int)local_54)) {
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar5 = thunk_FUN_01c496e0();
    uVar6 = thunk_FUN_01c273e8(UnityEngine_UIElements_IUxmlAttributes_TypeInfo);
    FUN_03247e00(uVar5,uVar6,0);
    goto LAB_032e1050;
  }
  if (((param_4 & 0x3000) == 0) && (FUN_032e10b0(param_1,param_2,&local_54), local_54 == uVar9)) {
    thunk_FUN_01c273e8(PTR_DAT_0423a628);
    uVar5 = thunk_FUN_01c496e0();
    puVar7 = 
    Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_Remove__;
    goto LAB_032e0fd8;
  }
  if (uVar9 <= local_54) goto LAB_032e0f24;
  sVar2 = *(short *)(param_1 + (long)(int)local_54 * 2);
  if (sVar2 == 0x2b) {
    local_54 = local_54 + 1;
LAB_032e0e50:
    bVar3 = false;
    lVar11 = 1;
LAB_032e0e54:
    if (((param_3 == 0x10) || (param_3 == -1)) && (uVar1 = local_54 + 1, (int)uVar1 < (int)uVar9)) {
      if (uVar9 <= local_54) {
LAB_032e0f24:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (*(short *)(param_1 + (long)(int)local_54 * 2) == 0x30) {
        if (uVar9 <= uVar1) goto LAB_032e0f24;
        if ((*(ushort *)(param_1 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          local_54 = local_54 + 2;
          iVar10 = 0x10;
        }
      }
    }
    uVar1 = local_54;
    lVar4 = FUN_032e117c(iVar10,param_1,param_2,&local_54,param_4 >> 9 & 1);
    if (local_54 == uVar1) {
      thunk_FUN_01c273e8(PTR_DAT_0423a628);
      uVar5 = thunk_FUN_01c496e0();
      puVar7 = 
      Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>__ctor__;
    }
    else {
      if (((param_4 >> 0xc & 1) == 0) || ((int)uVar9 <= (int)local_54)) {
        *param_5 = local_54;
        if (((param_4 >> 9 & 1) != 0) || ((iVar10 != 10 || (bVar3 || lVar4 != -0x8000000000000000)))
           ) {
          if (iVar10 != 10) {
            lVar11 = 1;
          }
          return lVar4 * lVar11;
        }
        thunk_FUN_01c273e8(System_Resources_IResourceGroveler_TypeInfo);
        uVar5 = thunk_FUN_01c496e0();
        puVar7 = 
        Method_CodeStage_AntiCheat_Detectors_ACTkDetectorBase<TimeCheatingDetector>_PauseDetector__;
        goto LAB_032e1040;
      }
      thunk_FUN_01c273e8(PTR_DAT_0423a628);
      uVar5 = thunk_FUN_01c496e0();
      puVar7 = Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__;
    }
LAB_032e0fd8:
    uVar6 = thunk_FUN_01c273e8(puVar7);
    FUN_032baa68(uVar5,uVar6,0);
  }
  else {
    if (sVar2 != 0x2d) goto LAB_032e0e50;
    if (iVar10 != 10) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar5 = thunk_FUN_01c496e0();
      uVar6 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_TryGetValue__
                                );
      FUN_032467a0(uVar5,uVar6,0);
      goto LAB_032e1050;
    }
    if ((param_4 >> 9 & 1) == 0) {
      local_54 = local_54 + 1;
      lVar11 = -1;
      bVar3 = true;
      goto LAB_032e0e54;
    }
    thunk_FUN_01c273e8(System_Resources_IResourceGroveler_TypeInfo);
    uVar5 = thunk_FUN_01c496e0();
    puVar7 = 
    Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_get_Count__;
LAB_032e1040:
    uVar6 = thunk_FUN_01c273e8(puVar7);
    FUN_032e0994(uVar5,uVar6);
  }
LAB_032e1050:
  uVar6 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_set_Item__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar5,uVar6);
}


