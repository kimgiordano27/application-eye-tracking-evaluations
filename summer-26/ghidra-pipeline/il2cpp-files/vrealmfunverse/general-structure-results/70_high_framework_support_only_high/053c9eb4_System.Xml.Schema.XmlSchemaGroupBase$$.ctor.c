/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaGroupBase$$.ctor
ENTRY_POINT: 053c9eb4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Xml_Schema_XmlSchemaGroupBase___ctor(int param_1)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  int unaff_w24;
  ushort *puVar14;
  undefined8 in_stack_00000008;
  
  puVar7 = UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
  if (-1 < param_1) {
    if (param_1 <= (int)(*(int *)(unaff_x21 + 0x18) - unaff_w22)) {
      if (unaff_w24 != 0) {
        lVar8 = *(long *)UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfo_TypeInfo;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar8 = *(long *)puVar7;
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
        if ((*(uint *)(unaff_x21 + 0x18) <= unaff_w22) || (*(uint *)(unaff_x20 + 0x18) <= unaff_w19)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        puVar14 = (ushort *)(unaff_x20 + (ulong)unaff_w19 * 2 + 0x20);
        puVar1 = (ushort *)((ulong)(uint)(unaff_w24 << 1) + (long)puVar14);
        if (puVar14 < puVar1) {
          uVar12 = 0;
          lVar2 = unaff_x20 + (ulong)unaff_w19 * 2;
          pcVar13 = (char *)(unaff_x21 + (ulong)unaff_w22 + 0x20);
          do {
            uVar6 = *(ushort *)(lVar2 + uVar12 + 0x22);
            if (0x7f < (uVar6 | *puVar14)) {
LAB_053c9fbc:
              uVar9 = thunk_FUN_02ba3594(PTR_DAT_06313048);
              uVar9 = FUN_02b3c908(uVar9,2);
              uVar10 = FUN_04c103b8(0,puVar14,0,2,0);
              FUN_0275e13c(uVar9);
              FUN_0275a400(uVar9,uVar10);
              FUN_0275a434(uVar9,0,uVar10);
              if ((long)uVar12 < 0) {
                uVar12 = uVar12 + 1;
              }
              in_stack_00000008._4_4_ = (int)(uVar12 >> 1) + unaff_w19;
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
              goto LAB_053ca38c;
            }
            bVar4 = *(byte *)(lVar8 + (ulong)*puVar14);
            bVar5 = *(byte *)(lVar8 + (ulong)uVar6);
            if ((bVar5 | bVar4) == 0xff) goto LAB_053c9fbc;
            lVar3 = lVar2 + uVar12;
            uVar12 = uVar12 + 4;
            puVar14 = (ushort *)(lVar3 + 0x24);
            *pcVar13 = bVar5 + bVar4 * '\x10';
            pcVar13 = pcVar13 + 1;
          } while ((ushort *)(lVar2 + uVar12 + 0x20) < puVar1);
        }
      }
      return param_1;
    }
  }
  uVar9 = thunk_FUN_02ba3594(
                            System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo
                            );
  uVar10 = FUN_0540c734(uVar9,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
  uVar9 = thunk_FUN_02b79644();
  uVar11 = thunk_FUN_02ba3594(PTR_DAT_0632a070);
  FUN_04cee0f4(uVar9,uVar10,uVar11,0);
LAB_053ca38c:
  uVar9 = FUN_0540c738(uVar9,0);
  uVar10 = thunk_FUN_02ba3594(OVRManager_EventListener_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar9,uVar10);
}


