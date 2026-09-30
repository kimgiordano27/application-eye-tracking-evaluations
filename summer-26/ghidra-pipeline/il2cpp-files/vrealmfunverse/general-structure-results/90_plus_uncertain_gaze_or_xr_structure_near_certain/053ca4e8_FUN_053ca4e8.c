/*
FUNCTION_NAME: FUN_053ca4e8
ENTRY_POINT: 053ca4e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_6;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


int FUN_053ca4e8(long *param_1,long param_2,uint param_3,uint param_4,long param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  
  uVar11 = (ulong)param_4;
  if ((DAT_066d09a5 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo);
    DAT_066d09a5 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar5 = thunk_FUN_02b79644();
    puVar4 = PTR_DAT_0632a070;
LAB_053ca824:
    uVar6 = thunk_FUN_02ba3594(puVar4);
    FUN_04cee07c(uVar5,uVar6,0);
    goto LAB_053ca910;
  }
  if ((int)param_3 < 0) {
    uVar5 = thunk_FUN_02ba3594(
                              UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                              );
    uVar6 = FUN_0540c734(uVar5,0);
System_Xml_Schema_XmlSchemaAnyAttribute__BuildNamespaceList:
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar5 = thunk_FUN_02b79644();
    puVar4 = PTR_DAT_0632a068;
  }
  else {
    if (*(int *)(param_2 + 0x18) < (int)param_3) {
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar5 = FUN_02b3c908(uVar5,1);
      FUN_0275e13c(param_2);
      local_44 = (undefined4)*(undefined8 *)(param_2 + 0x18);
      uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_44);
      FUN_0275e13c(uVar5);
      FUN_0275a400(uVar5,uVar6);
      FUN_0275a434(uVar5,0,uVar6);
      uVar6 = thunk_FUN_02ba3594(
                                UnityEngine_Rendering_LODGroupDataPoolBurst_FreeLODGroupData_000002F1_BurstDirectCall_TypeInfo
                                );
      uVar6 = FUN_0540ce80(uVar6,uVar5,0);
      goto System_Xml_Schema_XmlSchemaAnyAttribute__BuildNamespaceList;
    }
    if ((int)param_4 < 0) {
      uVar5 = thunk_FUN_02ba3594(
                                UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                                );
      uVar6 = FUN_0540c734(uVar5,0);
LAB_053ca7e4:
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar5 = thunk_FUN_02b79644();
      puVar4 = PTR_DAT_0632a090;
    }
    else {
      if ((int)(*(int *)(param_2 + 0x18) - param_3) < (int)param_4) {
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar5 = FUN_02b3c908(uVar5,1);
        FUN_0275e13c(param_2);
        local_48 = *(int *)(param_2 + 0x18) - param_3;
        uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_48);
        FUN_0275e13c(uVar5);
        FUN_0275a400(uVar5,uVar6);
        FUN_0275a434(uVar5,0,uVar6);
        uVar6 = thunk_FUN_02ba3594(Autohand_LineAnimation_<Animate>d__20_TypeInfo);
        uVar6 = FUN_0540ce80(uVar6,uVar5,0);
        goto LAB_053ca7e4;
      }
      iVar1 = (**(code **)(*param_1 + 0x288))
                        (param_1,param_2,param_3,param_4,*(undefined8 *)(*param_1 + 0x290));
      puVar4 = UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
      if (param_5 == 0) {
        thunk_FUN_02ba3594(PTR_DAT_06315b90);
        uVar5 = thunk_FUN_02b79644();
        puVar4 = PTR_DAT_0632a028;
        goto LAB_053ca824;
      }
      if ((int)param_6 < 0) {
        uVar5 = thunk_FUN_02ba3594(
                                  UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                                  );
        uVar6 = FUN_0540c734(uVar5,0);
      }
      else {
        if ((int)param_6 <= *(int *)(param_5 + 0x18)) {
          if ((-1 < iVar1) && (iVar1 <= (int)(*(int *)(param_5 + 0x18) - param_6))) {
            if (param_4 != 0) {
              lVar3 = *(long *)UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar3 = *(long *)puVar4;
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
              if (lVar3 == 0) {
                lVar3 = 0;
              }
              else {
                iVar2 = thunk_FUN_02b485d0(0);
                lVar3 = lVar3 + iVar2;
              }
              if ((*(uint *)(param_2 + 0x18) <= param_3) || (*(uint *)(param_5 + 0x18) <= param_6))
              {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              pbVar8 = (byte *)(param_2 + (ulong)param_3 + 0x20);
              if (pbVar8 < pbVar8 + param_4) {
                puVar9 = (undefined2 *)(param_5 + (ulong)param_6 * 2 + 0x20);
                pbVar10 = (byte *)(param_2 + (ulong)param_3 + 0x21);
                do {
                  uVar11 = uVar11 - 1;
                  *puVar9 = *(undefined2 *)(lVar3 + ((ulong)(*pbVar8 >> 3) & 0x1e));
                  puVar9[1] = *(undefined2 *)(lVar3 + ((ulong)*pbVar8 & 0xf) * 2);
                  puVar9 = puVar9 + 2;
                  pbVar8 = pbVar10;
                  pbVar10 = pbVar10 + 1;
                } while (uVar11 != 0);
              }
            }
            return iVar1;
          }
          uVar5 = thunk_FUN_02ba3594(
                                    System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo
                                    );
          uVar6 = FUN_0540c734(uVar5,0);
          thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
          uVar5 = thunk_FUN_02b79644();
          uVar7 = thunk_FUN_02ba3594(PTR_DAT_0632a028);
          FUN_04cee0f4(uVar5,uVar6,uVar7,0);
          goto LAB_053ca910;
        }
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar5 = FUN_02b3c908(uVar5,1);
        FUN_0275e13c(param_5);
        local_4c = (undefined4)*(undefined8 *)(param_5 + 0x18);
        uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_4c);
        FUN_0275e13c(uVar5);
        FUN_0275a400(uVar5,uVar6);
        FUN_0275a434(uVar5,0,uVar6);
        uVar6 = thunk_FUN_02ba3594(
                                  UnityEngine_Rendering_LODGroupDataPoolBurst_FreeLODGroupData_000002F1_BurstDirectCall_TypeInfo
                                  );
        uVar6 = FUN_0540ce80(uVar6,uVar5,0);
      }
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar5 = thunk_FUN_02b79644();
      puVar4 = PTR_DAT_0632a078;
    }
  }
  uVar7 = thunk_FUN_02ba3594(puVar4);
  FUN_04cf1968(uVar5,uVar7,uVar6,0);
LAB_053ca910:
  uVar5 = FUN_0540c738(uVar5,0);
  uVar6 = thunk_FUN_02ba3594(OVRManager_PassthroughCapabilities_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5,uVar6);
}


