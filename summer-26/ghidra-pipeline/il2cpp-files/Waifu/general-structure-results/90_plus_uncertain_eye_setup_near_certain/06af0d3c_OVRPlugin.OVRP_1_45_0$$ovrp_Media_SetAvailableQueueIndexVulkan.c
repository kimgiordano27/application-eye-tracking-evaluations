/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan
ENTRY_POINT: 06af0d3c
PROGRAM: Waifu-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_Media_SetAvailableQueueIndexVulkan
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  uint unaff_w20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_06af0d70:
      uVar6 = (*(code *)*puVar2)();
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        uVar1 = FUN_06aacdfc(*(long *)(unaff_x19 + 0x38),0);
        lVar5 = *(long *)(unaff_x19 + 0x40);
        if (lVar5 != 0) {
          if (DAT_086edcc0 == (code *)0x0) {
            DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)")
            ;
          }
          (*DAT_086edcc0)(lVar5,uVar1 & 1);
          lVar5 = *(long *)(unaff_x19 + 0x48);
          if (lVar5 != 0) {
            if (DAT_086edcc0 == (code *)0x0) {
              DAT_086edcc0 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Renderer::set_enabled(System.Boolean)"
                                                 );
            }
            uVar3 = (*DAT_086edcc0)(lVar5,(uVar1 ^ 1) & 1);
            lVar5 = 0x40;
            if ((uVar1 & 1) == 0) {
              lVar5 = 0x48;
            }
            uVar4 = *(undefined8 *)(unaff_x19 + lVar5);
            uVar6 = FUN_06af0e5c(uVar6,uVar3,uVar4);
            if (*(long *)(unaff_x19 + 0x68) != 0) {
              FUN_06af0f30(uVar6,uVar4,unaff_w20 & 1);
            }
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_0338f71c();
      goto LAB_06af0d70;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


