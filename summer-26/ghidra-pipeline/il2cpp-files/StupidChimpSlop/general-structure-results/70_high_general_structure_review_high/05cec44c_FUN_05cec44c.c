/*
FUNCTION_NAME: FUN_05cec44c
ENTRY_POINT: 05cec44c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint FUN_05cec44c(long param_1,undefined4 param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 local_58;
  
  if ((DAT_06a57d8e & 1) == 0) {
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__);
    FUN_02d4dc40(PTR_DAT_0664e058);
    FUN_02d4dc40(Method_PlayFab_PlayFabProgressionInstanceAPI_IncrementLeaderboardVersion__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeCustom__);
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(PTR_DAT_06649a88);
    DAT_06a57d8e = 1;
  }
  lVar7 = *(long *)(param_1 + 0x138);
  local_58 = 0;
  if (lVar7 == 0) {
    FUN_05ce7b24(param_1);
    lVar7 = *(long *)(param_1 + 0x138);
    if (lVar7 != 0) goto LAB_05cec4ec;
  }
  else {
LAB_05cec4ec:
    uVar8 = FUN_048bddc4(lVar7,param_2,
                         *(undefined8 *)
                          Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__);
    if ((uVar8 & 1) != 0) {
      uVar5 = 1;
      goto LAB_05cec648;
    }
    if (((param_4 & 1) == 0) || (1 < *(int *)(param_1 + 0x110) - 1U)) {
      if ((param_3 & 1) == 0) goto LAB_05cec644;
    }
    else {
      uVar5 = FUN_05ceba44(param_1,param_2,&local_58);
      if (((uVar5 & 1) != 0) || ((param_3 & 1) == 0)) goto LAB_05cec648;
    }
    puVar4 = Method_ExitGames_Client_Photon_Protocol16_SerializeCustom__;
    puVar3 = PTR_DAT_0664e058;
    puVar2 = PTR_DAT_06649a88;
    puVar1 = PTR_DAT_066462d0;
    lVar7 = *(long *)(param_1 + 0x188);
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 0)) {
      iVar11 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar11) goto LAB_05cec644;
        uVar9 = FUN_036a5b38(lVar7,iVar11,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)puVar1);
        }
        uVar8 = FUN_05ee1474(uVar9,0,0);
        if ((uVar8 & 1) == 0) goto LAB_05cec644;
        if ((*(long *)(param_1 + 0x188) == 0) ||
           (lVar7 = FUN_036a5b38(*(long *)(param_1 + 0x188),iVar11,*(undefined8 *)puVar4),
           lVar7 == 0)) break;
        uVar6 = FUN_05ee6bc0(lVar7,0);
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar10);
          lVar10 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x60);
        if (lVar10 == 0) break;
        uVar8 = FUN_04c9c388(lVar10,uVar6,*(undefined8 *)puVar3);
        if ((uVar8 & 1) != 0) {
          uVar5 = 1;
          uVar8 = FUN_05cec44c(lVar7,param_2,1,param_4 & 1);
          if ((uVar8 & 1) != 0) goto LAB_05cec648;
        }
        lVar7 = *(long *)(param_1 + 0x188);
        iVar11 = iVar11 + 1;
      } while (lVar7 != 0);
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
LAB_05cec644:
  uVar5 = 0;
LAB_05cec648:
  return uVar5 & 1;
}


