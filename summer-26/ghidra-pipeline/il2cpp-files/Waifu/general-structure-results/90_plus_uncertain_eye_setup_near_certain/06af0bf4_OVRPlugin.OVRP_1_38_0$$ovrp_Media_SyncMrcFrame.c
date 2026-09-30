/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 06af0bf4
PROGRAM: Waifu-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar3 = (undefined8 *)FUN_0338f71c();
  uVar1 = (*(code *)*puVar3)();
  if (unaff_x21 != 0) {
    FUN_06af0594();
    if (*(char *)(unaff_x21 + 0x34) != '\0') {
      return;
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x158);
      if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                ();
      uVar9 = FUN_06af04e0();
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x148);
        uVar8 = param_3;
        OVRManager__set_isBoundaryVisibilitySuppressed();
        uVar10 = FUN_07a00a64(0);
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar4 = (*DAT_086ef188)();
        if (lVar4 != 0) {
          FUN_07a19be8(uVar9,uVar11,param_3,uVar10,uVar12,uVar8,param_4,lVar4,0);
          plVar7 = *(long **)(unaff_x19 + 0x58);
          if (plVar7 == (long *)0x0) {
            uVar11 = 0;
          }
          else {
            lVar4 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_083cc450) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_06af0d70;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083cc450,0);
LAB_06af0d70:
            uVar11 = (*(code *)*puVar3)(plVar7,puVar3[1]);
          }
          if (*(long *)(unaff_x19 + 0x38) != 0) {
            uVar2 = FUN_06aacdfc(*(long *)(unaff_x19 + 0x38),0);
            lVar4 = *(long *)(unaff_x19 + 0x40);
            if (lVar4 != 0) {
              if (DAT_086edcc0 == (code *)0x0) {
                DAT_086edcc0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Renderer::set_enabled(System.Boolean)"
                                                  );
              }
              (*DAT_086edcc0)(lVar4,uVar2 & 1);
              lVar4 = *(long *)(unaff_x19 + 0x48);
              if (lVar4 != 0) {
                if (DAT_086edcc0 == (code *)0x0) {
                  DAT_086edcc0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Renderer::set_enabled(System.Boolean)"
                                                  );
                }
                uVar9 = (*DAT_086edcc0)(lVar4,(uVar2 ^ 1) & 1);
                lVar4 = 0x40;
                if ((uVar2 & 1) == 0) {
                  lVar4 = 0x48;
                }
                uVar8 = *(undefined8 *)(unaff_x19 + lVar4);
                uVar11 = FUN_06af0e5c(uVar11,uVar9,uVar8);
                if (*(long *)(unaff_x19 + 0x68) == 0) {
                  return;
                }
                FUN_06af0f30(uVar11,uVar8,uVar1 & 1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


