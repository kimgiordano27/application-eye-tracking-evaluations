/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaAll$$.ctor
ENTRY_POINT: 053c9e4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


int System_Xml_Schema_XmlSchemaAll___ctor(ulong param_1)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  char *pcVar14;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  ushort *puVar15;
  long unaff_x25;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo);
    *(undefined1 *)(unaff_x25 + 0x9a4) = 1;
  }
  if (unaff_x20 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar9 = thunk_FUN_02b79644();
    puVar12 = PTR_DAT_0632a028;
LAB_053ca2a4:
    uVar10 = thunk_FUN_02ba3594(puVar12);
    FUN_04cee07c(uVar9,uVar10,0);
    goto LAB_053ca390;
  }
  if ((int)unaff_w19 < 0) {
    uVar9 = thunk_FUN_02ba3594(
                              UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                              );
    uVar10 = FUN_0540c734(uVar9,0);
LAB_053ca1a8:
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar9 = thunk_FUN_02b79644();
    puVar12 = PTR_DAT_0632a078;
  }
  else {
    if (*(int *)(unaff_x20 + 0x18) < (int)unaff_w19) {
      uVar9 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar9 = FUN_02b3c908(uVar9,1);
      FUN_0275e13c();
      in_stack_00000008._4_4_ = (int)*(undefined8 *)(unaff_x20 + 0x18);
      uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                         (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000008 + 4);
      FUN_0275e13c(uVar9);
      FUN_0275a400(uVar9,uVar10);
      FUN_0275a434(uVar9,0,uVar10);
      uVar10 = thunk_FUN_02ba3594(
                                 UnityEngine_Rendering_LODGroupDataPoolBurst_FreeLODGroupData_000002F1_BurstDirectCall_TypeInfo
                                 );
      uVar10 = FUN_0540ce80(uVar10,uVar9,0);
      goto LAB_053ca1a8;
    }
    if (unaff_w24 < 0) {
      uVar9 = thunk_FUN_02ba3594(
                                UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                                );
      uVar10 = FUN_0540c734(uVar9,0);
LAB_053ca264:
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar9 = thunk_FUN_02b79644();
      puVar12 = PTR_DAT_0632a080;
    }
    else {
      if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w19) < unaff_w24) {
        uVar9 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar9 = FUN_02b3c908(uVar9,1);
        FUN_0275e13c();
        in_stack_00000008._4_4_ = *(int *)(unaff_x20 + 0x18) - unaff_w19;
        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000008 + 4);
        FUN_0275e13c(uVar9);
        FUN_0275a400(uVar9,uVar10);
        FUN_0275a434(uVar9,0,uVar10);
        uVar10 = thunk_FUN_02ba3594(Autohand_LineAnimation_<Animate>d__20_TypeInfo);
        uVar10 = FUN_0540ce80(uVar10,uVar9,0);
        goto LAB_053ca264;
      }
      if (unaff_x21 == 0) {
        thunk_FUN_02ba3594(PTR_DAT_06315b90);
        uVar9 = thunk_FUN_02b79644();
        puVar12 = PTR_DAT_0632a070;
        goto LAB_053ca2a4;
      }
      if ((int)unaff_w22 < 0) {
        uVar9 = thunk_FUN_02ba3594(
                                  UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                                  );
        uVar10 = FUN_0540c734(uVar9,0);
      }
      else {
        if ((int)unaff_w22 <= *(int *)(unaff_x21 + 0x18)) {
          iVar7 = (**(code **)(*unaff_x23 + 0x1f8))();
          puVar12 = UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
          if ((-1 < iVar7) && (iVar7 <= (int)(*(int *)(unaff_x21 + 0x18) - unaff_w22))) {
            if (unaff_w24 != 0) {
              lVar8 = *(long *)UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar8 = *(long *)puVar12;
              }
              lVar8 = **(long **)(lVar8 + 0xb8);
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x18) == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = lVar8 + 0x20;
                }
              }
              if ((*(uint *)(unaff_x21 + 0x18) <= unaff_w22) ||
                 (*(uint *)(unaff_x20 + 0x18) <= unaff_w19)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              puVar15 = (ushort *)(unaff_x20 + (ulong)unaff_w19 * 2 + 0x20);
              puVar1 = (ushort *)((ulong)(uint)(unaff_w24 << 1) + (long)puVar15);
              if (puVar15 < puVar1) {
                uVar13 = 0;
                lVar2 = unaff_x20 + (ulong)unaff_w19 * 2;
                pcVar14 = (char *)(unaff_x21 + (ulong)unaff_w22 + 0x20);
                do {
                  uVar6 = *(ushort *)(lVar2 + uVar13 + 0x22);
                  if (0x7f < (uVar6 | *puVar15)) {
LAB_053c9fbc:
                    uVar9 = thunk_FUN_02ba3594(PTR_DAT_06313048);
                    uVar9 = FUN_02b3c908(uVar9,2);
                    uVar10 = FUN_04c103b8(0,puVar15,0,2,0);
                    FUN_0275e13c(uVar9);
                    FUN_0275a400(uVar9,uVar10);
                    FUN_0275a434(uVar9,0,uVar10);
                    if ((long)uVar13 < 0) {
                      uVar13 = uVar13 + 1;
                    }
                    in_stack_00000008._4_4_ = (int)(uVar13 >> 1) + unaff_w19;
                    uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                       (*(undefined8 *)(PTR_DAT_06312310 + 0x48),
                                        (long)&stack0x00000008 + 4);
                    FUN_0275a400(uVar9,uVar10);
                    FUN_0275a434(uVar9,1,uVar10);
                    uVar10 = thunk_FUN_02ba3594(OVRManager_CompositionMethod_TypeInfo);
                    uVar10 = FUN_0540ce80(uVar10,uVar9,0);
                    thunk_FUN_02ba3594(PTR_DAT_06328948);
                    uVar9 = thunk_FUN_02b79644();
                    FUN_04d63e8c(uVar9,uVar10,0);
                    goto LAB_053ca390;
                  }
                  bVar4 = *(byte *)(lVar8 + (ulong)*puVar15);
                  bVar5 = *(byte *)(lVar8 + (ulong)uVar6);
                  if ((bVar5 | bVar4) == 0xff) goto LAB_053c9fbc;
                  lVar3 = lVar2 + uVar13;
                  uVar13 = uVar13 + 4;
                  puVar15 = (ushort *)(lVar3 + 0x24);
                  *pcVar14 = bVar5 + bVar4 * '\x10';
                  pcVar14 = pcVar14 + 1;
                } while ((ushort *)(lVar2 + uVar13 + 0x20) < puVar1);
              }
            }
            return iVar7;
          }
          uVar9 = thunk_FUN_02ba3594(
                                    System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo
                                    );
          uVar10 = FUN_0540c734(uVar9,0);
          thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
          uVar9 = thunk_FUN_02b79644();
          uVar11 = thunk_FUN_02ba3594(PTR_DAT_0632a070);
          FUN_04cee0f4(uVar9,uVar10,uVar11,0);
          goto LAB_053ca390;
        }
        uVar9 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar9 = FUN_02b3c908(uVar9,1);
        FUN_0275e13c();
        in_stack_00000008._4_4_ = (int)*(undefined8 *)(unaff_x21 + 0x18);
        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000008 + 4);
        FUN_0275e13c(uVar9);
        FUN_0275a400(uVar9,uVar10);
        FUN_0275a434(uVar9,0,uVar10);
        uVar10 = thunk_FUN_02ba3594(
                                   UnityEngine_Rendering_LODGroupDataPoolBurst_FreeLODGroupData_000002F1_BurstDirectCall_TypeInfo
                                   );
        uVar10 = FUN_0540ce80(uVar10,uVar9,0);
      }
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar9 = thunk_FUN_02b79644();
      puVar12 = PTR_DAT_0632a068;
    }
  }
  uVar11 = thunk_FUN_02ba3594(puVar12);
  FUN_04cf1968(uVar9,uVar11,uVar10,0);
LAB_053ca390:
  uVar9 = FUN_0540c738(uVar9,0);
  uVar10 = thunk_FUN_02ba3594(OVRManager_EventListener_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar9,uVar10);
}


