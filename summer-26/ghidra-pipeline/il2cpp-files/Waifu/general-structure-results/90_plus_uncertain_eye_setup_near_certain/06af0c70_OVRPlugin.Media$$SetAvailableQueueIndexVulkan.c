/*
FUNCTION_NAME: OVRPlugin.Media$$SetAvailableQueueIndexVulkan
ENTRY_POINT: 06af0c70
PROGRAM: Waifu-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Media__SetAvailableQueueIndexVulkan
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  uint unaff_w20;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = FUN_06af04e0();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x148);
    uVar4 = param_3;
    OVRManager__set_isBoundaryVisibilitySuppressed();
    uVar9 = FUN_07a00a64(0);
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar2 = (*DAT_086ef188)();
    if (lVar2 != 0) {
      FUN_07a19be8(uVar8,param_2,param_3,uVar9,uVar10,uVar4,param_4,lVar2,0);
      plVar7 = *(long **)(unaff_x19 + 0x58);
      if (plVar7 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        lVar2 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083cc450) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_06af0d70;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083cc450,0);
LAB_06af0d70:
        uVar8 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      }
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        uVar1 = FUN_06aacdfc(*(long *)(unaff_x19 + 0x38),0);
        lVar2 = *(long *)(unaff_x19 + 0x40);
        if (lVar2 != 0) {
          if (DAT_086edcc0 == (code *)0x0) {
            DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)")
            ;
          }
          (*DAT_086edcc0)(lVar2,uVar1 & 1);
          lVar2 = *(long *)(unaff_x19 + 0x48);
          if (lVar2 != 0) {
            if (DAT_086edcc0 == (code *)0x0) {
              DAT_086edcc0 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Renderer::set_enabled(System.Boolean)"
                                                 );
            }
            uVar4 = (*DAT_086edcc0)(lVar2,(uVar1 ^ 1) & 1);
            lVar2 = 0x40;
            if ((uVar1 & 1) == 0) {
              lVar2 = 0x48;
            }
            uVar9 = *(undefined8 *)(unaff_x19 + lVar2);
            uVar8 = FUN_06af0e5c(uVar8,uVar4,uVar9);
            if (*(long *)(unaff_x19 + 0x68) != 0) {
              FUN_06af0f30(uVar8,uVar9,unaff_w20 & 1);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


