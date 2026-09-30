/*
FUNCTION_NAME: FUN_05381624
ENTRY_POINT: 05381624
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05381a0c) */
/* WARNING: Removing unreachable block (ram,0x05381b20) */
/* WARNING: Removing unreachable block (ram,0x05381b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05381624(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  char local_44 [4];
  
  puVar1 = UnityEngine_TextCore_LowLevel_GlyphPairAdjustmentRecord_TypeInfo;
  if ((DAT_06a53094 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06648128);
    FUN_02d4dc40(
                PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_0664b458);
    FUN_02d4dc40(Unity_Properties_TypeConverter<Color32,_StyleColor>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b488);
    FUN_02d4dc40(PTR_DAT_0664b498);
    FUN_02d4dc40(PlayFab_ProgressionModels_GetStatisticDefinitionRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetPlayFabIDsFromNintendoServiceAccountIdsResult_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_GlyphRect_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_LowLevel_GlyphValueRecord_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_LowLevel_GlyphPairAdjustmentRecord_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06646708);
    DAT_06a53094 = 1;
  }
  local_44[0] = '\0';
  lVar2 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
  FUN_05044d4c(lVar2,0);
  puVar1 = PTR_DAT_0664b498;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  plVar9 = (long *)(lVar2 + 0x10);
  *plVar9 = param_1;
  thunk_FUN_02dc1ef0(plVar9,param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  plVar3 = (long *)FUN_032f3d48(0,*(undefined8 *)PTR_DAT_06646708,*(undefined8 *)PTR_DAT_0664b488);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar6 = *plVar3;
  uVar10 = *(undefined8 *)(*plVar9 + 0x38);
  lVar12 = *(long *)
            PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_TypeInfo;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_053817c8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_02d87540(plVar3);
LAB_053817c8:
  lVar6 = thunk_FUN_02d6c7a8(*(undefined8 *)(lVar6 + 8),lVar12);
  lVar6 = (**(code **)(lVar6 + 8))(plVar3,uVar10,lVar6);
  puVar1 = Unity_Properties_TypeConverter<Color32,_StyleColor>_TypeInfo;
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != 200)) {
    lVar2 = *plVar9;
    if (*(int *)(*(long *)Unity_Properties_TypeConverter<Color32,_StyleColor>_TypeInfo + 0xe4) == 0)
    {
      thunk_FUN_02dabd98();
    }
    FUN_053823a0(lVar2);
  }
  else {
    lVar12 = *plVar3;
    lVar11 = *plVar9;
    uVar10 = *(undefined8 *)(lVar6 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0664b458) {
          puVar4 = (undefined8 *)(lVar12 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_05381880;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d87540(plVar3,*(long *)PTR_DAT_0664b458,3);
LAB_05381880:
    uVar10 = (*(code *)*puVar4)(plVar3,uVar10,puVar4[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    puVar4 = (undefined8 *)(lVar11 + 0x38);
    *puVar4 = uVar10;
    thunk_FUN_02dc1ef0(puVar4);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar6 = *(long *)(*plVar9 + 0x60);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    lVar6 = *plVar9;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(long *)(lVar6 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    *(undefined8 *)(*(long *)(lVar6 + 0x50) + 0x10) = *(undefined8 *)(lVar6 + 0x40);
    thunk_FUN_02dc1ef0();
    lVar6 = *plVar9;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(long *)(lVar6 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    *(undefined8 *)(*(long *)(lVar6 + 0x50) + 0x18) = *(undefined8 *)(lVar6 + 0x78);
    thunk_FUN_02dc1ef0();
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar6 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x40) != '\0') {
      lVar6 = FUN_03c14c50(*(undefined8 *)
                            PlayFab_ClientModels_GetPlayFabIDsFromNintendoServiceAccountIdsResult_TypeInfo
                          );
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0537b064(lVar6,*plVar9);
      lVar6 = *(long *)puVar1;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar6 = *(long *)puVar1;
    }
    local_44[0] = '\0';
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    FUN_05065dd8(uVar10,local_44,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648128);
    FUN_04f6e538(uVar5,lVar2,*(undefined8 *)UnityEngine_TextCore_GlyphRect_TypeInfo,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_03a8badc(lVar6,uVar5,
                 *(undefined8 *)PlayFab_ProgressionModels_GetStatisticDefinitionRequest_TypeInfo);
    if (local_44[0] != '\0') {
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar10,0);
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar6 = *(long *)puVar1;
    }
    local_44[0] = '\0';
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    FUN_05065dd8(uVar10,local_44,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648128);
    FUN_04f6e538(uVar5,lVar2,*(undefined8 *)UnityEngine_TextCore_LowLevel_GlyphValueRecord_TypeInfo,
                 0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_03a8badc(lVar6,uVar5,
                 *(undefined8 *)PlayFab_ProgressionModels_GetStatisticDefinitionRequest_TypeInfo);
    if (local_44[0] != '\0') {
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar10,0);
    }
  }
  return;
}


