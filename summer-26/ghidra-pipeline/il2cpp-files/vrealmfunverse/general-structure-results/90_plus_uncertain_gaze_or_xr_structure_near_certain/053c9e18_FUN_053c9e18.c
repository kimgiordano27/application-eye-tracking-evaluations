/*
FUNCTION_NAME: FUN_053c9e18
ENTRY_POINT: 053c9e18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 138
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


int FUN_053c9e18(long *param_1,long param_2,uint param_3,int param_4,long param_5,uint param_6)

{
  ushort *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  char *pcVar13;
  ushort *puVar14;
  int local_44;
  
  if ((DAT_066d09a4 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo);
    DAT_066d09a4 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar8 = thunk_FUN_02b79644();
    puVar11 = PTR_DAT_0632a028;
LAB_053ca2a4:
    uVar9 = thunk_FUN_02ba3594(puVar11);
    FUN_04cee07c(uVar8,uVar9,0);
    goto LAB_053ca390;
  }
  if ((int)param_3 < 0) {
    uVar8 = thunk_FUN_02ba3594(
                              UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                              );
    uVar9 = FUN_0540c734(uVar8,0);
LAB_053ca1a8:
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar8 = thunk_FUN_02b79644();
    puVar11 = PTR_DAT_0632a078;
  }
  else {
    if (*(int *)(param_2 + 0x18) < (int)param_3) {
      uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar8 = FUN_02b3c908(uVar8,1);
      FUN_0275e13c(param_2);
      local_44 = (int)*(undefined8 *)(param_2 + 0x18);
      uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_44);
      FUN_0275e13c(uVar8);
      FUN_0275a400(uVar8,uVar9);
      FUN_0275a434(uVar8,0,uVar9);
      uVar9 = thunk_FUN_02ba3594(
                                UnityEngine_Rendering_LODGroupDataPoolBurst_FreeLODGroupData_000002F1_BurstDirectCall_TypeInfo
                                );
      uVar9 = FUN_0540ce80(uVar9,uVar8,0);
      goto LAB_053ca1a8;
    }
    if (param_4 < 0) {
      uVar8 = thunk_FUN_02ba3594(
                                UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                                );
      uVar9 = FUN_0540c734(uVar8,0);
LAB_053ca264:
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar8 = thunk_FUN_02b79644();
      puVar11 = PTR_DAT_0632a080;
    }
    else {
      if ((int)(*(int *)(param_2 + 0x18) - param_3) < param_4) {
        uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar8 = FUN_02b3c908(uVar8,1);
        FUN_0275e13c(param_2);
        local_44 = *(int *)(param_2 + 0x18) - param_3;
        uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_44);
        FUN_0275e13c(uVar8);
        FUN_0275a400(uVar8,uVar9);
        FUN_0275a434(uVar8,0,uVar9);
        uVar9 = thunk_FUN_02ba3594(Autohand_LineAnimation_<Animate>d__20_TypeInfo);
        uVar9 = FUN_0540ce80(uVar9,uVar8,0);
        goto LAB_053ca264;
      }
      if (param_5 == 0) {
        thunk_FUN_02ba3594(PTR_DAT_06315b90);
        uVar8 = thunk_FUN_02b79644();
        puVar11 = PTR_DAT_0632a070;
        goto LAB_053ca2a4;
      }
      if ((int)param_6 < 0) {
        uVar8 = thunk_FUN_02ba3594(
                                  UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                                  );
        uVar9 = FUN_0540c734(uVar8,0);
      }
      else {
        if ((int)param_6 <= *(int *)(param_5 + 0x18)) {
          iVar6 = (**(code **)(*param_1 + 0x1f8))
                            (param_1,param_2,param_3,param_4,*(undefined8 *)(*param_1 + 0x200));
          puVar11 = UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
          if ((-1 < iVar6) && (iVar6 <= (int)(*(int *)(param_5 + 0x18) - param_6))) {
            if (param_4 != 0) {
              lVar7 = *(long *)UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar7 = *(long *)puVar11;
              }
              lVar7 = **(long **)(lVar7 + 0xb8);
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = lVar7 + 0x20;
                }
              }
              if ((*(uint *)(param_5 + 0x18) <= param_6) || (*(uint *)(param_2 + 0x18) <= param_3))
              {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              puVar14 = (ushort *)(param_2 + (ulong)param_3 * 2 + 0x20);
              puVar1 = (ushort *)((ulong)(uint)(param_4 << 1) + (long)puVar14);
              if (puVar14 < puVar1) {
                uVar12 = 0;
                param_2 = param_2 + (ulong)param_3 * 2;
                pcVar13 = (char *)(param_5 + (ulong)param_6 + 0x20);
                do {
                  uVar5 = *(ushort *)(param_2 + uVar12 + 0x22);
                  if (0x7f < (uVar5 | *puVar14)) {
LAB_053c9fbc:
                    uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
                    uVar8 = FUN_02b3c908(uVar8,2);
                    uVar9 = FUN_04c103b8(0,puVar14,0,2,0);
                    FUN_0275e13c(uVar8);
                    FUN_0275a400(uVar8,uVar9);
                    FUN_0275a434(uVar8,0,uVar9);
                    if ((long)uVar12 < 0) {
                      uVar12 = uVar12 + 1;
                    }
                    local_44 = (int)(uVar12 >> 1) + param_3;
                    uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_44);
                    FUN_0275a400(uVar8,uVar9);
                    FUN_0275a434(uVar8,1,uVar9);
                    uVar9 = thunk_FUN_02ba3594(OVRManager_CompositionMethod_TypeInfo);
                    uVar9 = FUN_0540ce80(uVar9,uVar8,0);
                    thunk_FUN_02ba3594(PTR_DAT_06328948);
                    uVar8 = thunk_FUN_02b79644();
                    FUN_04d63e8c(uVar8,uVar9,0);
                    goto LAB_053ca390;
                  }
                  bVar3 = *(byte *)(lVar7 + (ulong)*puVar14);
                  bVar4 = *(byte *)(lVar7 + (ulong)uVar5);
                  if ((bVar4 | bVar3) == 0xff) goto LAB_053c9fbc;
                  lVar2 = param_2 + uVar12;
                  uVar12 = uVar12 + 4;
                  puVar14 = (ushort *)(lVar2 + 0x24);
                  *pcVar13 = bVar4 + bVar3 * '\x10';
                  pcVar13 = pcVar13 + 1;
                } while ((ushort *)(param_2 + uVar12 + 0x20) < puVar1);
              }
            }
            return iVar6;
          }
          uVar8 = thunk_FUN_02ba3594(
                                    System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo
                                    );
          uVar9 = FUN_0540c734(uVar8,0);
          thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
          uVar8 = thunk_FUN_02b79644();
          uVar10 = thunk_FUN_02ba3594(PTR_DAT_0632a070);
          FUN_04cee0f4(uVar8,uVar9,uVar10,0);
          goto LAB_053ca390;
        }
        uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar8 = FUN_02b3c908(uVar8,1);
        FUN_0275e13c(param_5);
        local_44 = (int)*(undefined8 *)(param_5 + 0x18);
        uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_44);
        FUN_0275e13c(uVar8);
        FUN_0275a400(uVar8,uVar9);
        FUN_0275a434(uVar8,0,uVar9);
        uVar9 = thunk_FUN_02ba3594(
                                  UnityEngine_Rendering_LODGroupDataPoolBurst_FreeLODGroupData_000002F1_BurstDirectCall_TypeInfo
                                  );
        uVar9 = FUN_0540ce80(uVar9,uVar8,0);
      }
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar8 = thunk_FUN_02b79644();
      puVar11 = PTR_DAT_0632a068;
    }
  }
  uVar10 = thunk_FUN_02ba3594(puVar11);
  FUN_04cf1968(uVar8,uVar10,uVar9,0);
LAB_053ca390:
  uVar8 = FUN_0540c738(uVar8,0);
  uVar9 = thunk_FUN_02ba3594(OVRManager_EventListener_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar8,uVar9);
}


