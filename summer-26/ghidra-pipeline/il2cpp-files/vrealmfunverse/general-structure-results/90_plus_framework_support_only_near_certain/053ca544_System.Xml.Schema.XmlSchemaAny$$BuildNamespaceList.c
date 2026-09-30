/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaAny$$BuildNamespaceList
ENTRY_POINT: 053ca544
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 127
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


int System_Xml_Schema_XmlSchemaAny__BuildNamespaceList(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w8;
  byte *pbVar8;
  ulong uVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (in_NG == in_OV) {
    if ((int)unaff_w22 < 0) {
      uVar5 = thunk_FUN_02ba3594(
                                UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                                );
      uVar5 = FUN_0540c734(uVar5,0);
    }
    else {
      if ((int)unaff_w22 <= in_w8) {
        iVar1 = (**(code **)(*unaff_x24 + 0x288))();
        puVar4 = UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
        if (unaff_x20 == 0) {
          thunk_FUN_02ba3594(PTR_DAT_06315b90);
          uVar6 = thunk_FUN_02b79644();
          uVar5 = thunk_FUN_02ba3594(PTR_DAT_0632a028);
          FUN_04cee07c(uVar6,uVar5,0);
          goto LAB_053ca910;
        }
        if ((int)unaff_w23 < 0) {
          uVar5 = thunk_FUN_02ba3594(
                                    UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                                    );
          uVar5 = FUN_0540c734(uVar5,0);
        }
        else {
          if ((int)unaff_w23 <= *(int *)(unaff_x20 + 0x18)) {
            if ((-1 < iVar1) && (iVar1 <= (int)(*(int *)(unaff_x20 + 0x18) - unaff_w23))) {
              if (unaff_w22 != 0) {
                lVar3 = *(long *)UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo
                ;
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
                if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w21) ||
                   (*(uint *)(unaff_x20 + 0x18) <= unaff_w23)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                pbVar8 = (byte *)(unaff_x19 + (ulong)unaff_w21 + 0x20);
                if (pbVar8 < pbVar8 + unaff_w22) {
                  uVar9 = (ulong)unaff_w22;
                  puVar10 = (undefined2 *)(unaff_x20 + (ulong)unaff_w23 * 2 + 0x20);
                  pbVar11 = (byte *)(unaff_x19 + (ulong)unaff_w21 + 0x21);
                  do {
                    uVar9 = uVar9 - 1;
                    *puVar10 = *(undefined2 *)(lVar3 + ((ulong)(*pbVar8 >> 3) & 0x1e));
                    puVar10[1] = *(undefined2 *)(lVar3 + ((ulong)*pbVar8 & 0xf) * 2);
                    puVar10 = puVar10 + 2;
                    pbVar8 = pbVar11;
                    pbVar11 = pbVar11 + 1;
                  } while (uVar9 != 0);
                }
              }
              return iVar1;
            }
            uVar5 = thunk_FUN_02ba3594(
                                      System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo
                                      );
            uVar5 = FUN_0540c734(uVar5,0);
            thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
            uVar6 = thunk_FUN_02b79644();
            uVar7 = thunk_FUN_02ba3594(PTR_DAT_0632a028);
            FUN_04cee0f4(uVar6,uVar5,uVar7,0);
            goto LAB_053ca910;
          }
          uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
          uVar5 = FUN_02b3c908(uVar5,1);
          FUN_0275e13c();
          in_stack_00000000._4_4_ = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
          uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000000 + 4);
          FUN_0275e13c(uVar5);
          FUN_0275a400(uVar5,uVar6);
          FUN_0275a434(uVar5,0,uVar6);
          uVar6 = thunk_FUN_02ba3594(
                                    UnityEngine_Rendering_LODGroupDataPoolBurst_FreeLODGroupData_000002F1_BurstDirectCall_TypeInfo
                                    );
          uVar5 = FUN_0540ce80(uVar6,uVar5,0);
        }
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar6 = thunk_FUN_02b79644();
        puVar4 = PTR_DAT_0632a078;
        goto LAB_053ca8f4;
      }
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar5 = FUN_02b3c908(uVar5,1);
      FUN_0275e13c();
      iStack0000000000000008 = *(int *)(unaff_x19 + 0x18) - unaff_w21;
      uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000008);
      FUN_0275e13c(uVar5);
      FUN_0275a400(uVar5,uVar6);
      FUN_0275a434(uVar5,0,uVar6);
      uVar6 = thunk_FUN_02ba3594(Autohand_LineAnimation_<Animate>d__20_TypeInfo);
      uVar5 = FUN_0540ce80(uVar6,uVar5,0);
    }
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar6 = thunk_FUN_02b79644();
    puVar4 = PTR_DAT_0632a090;
  }
  else {
    uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar5 = FUN_02b3c908(uVar5,1);
    FUN_0275e13c();
    uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x19 + 0x18);
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000008 + 4);
    FUN_0275e13c(uVar5);
    FUN_0275a400(uVar5,uVar6);
    FUN_0275a434(uVar5,0,uVar6);
    uVar6 = thunk_FUN_02ba3594(
                              UnityEngine_Rendering_LODGroupDataPoolBurst_FreeLODGroupData_000002F1_BurstDirectCall_TypeInfo
                              );
    uVar5 = FUN_0540ce80(uVar6,uVar5,0);
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar6 = thunk_FUN_02b79644();
    puVar4 = PTR_DAT_0632a068;
  }
LAB_053ca8f4:
  uVar7 = thunk_FUN_02ba3594(puVar4);
  FUN_04cf1968(uVar6,uVar7,uVar5,0);
LAB_053ca910:
  uVar5 = FUN_0540c738(uVar6,0);
  uVar6 = thunk_FUN_02ba3594(OVRManager_PassthroughCapabilities_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5,uVar6);
}


