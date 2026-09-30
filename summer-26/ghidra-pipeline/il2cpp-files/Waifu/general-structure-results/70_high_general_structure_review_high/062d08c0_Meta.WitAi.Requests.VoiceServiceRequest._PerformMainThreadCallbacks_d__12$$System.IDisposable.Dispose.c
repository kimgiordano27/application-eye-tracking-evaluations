/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequest.<PerformMainThreadCallbacks>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 062d08c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


undefined4
Meta_WitAi_Requests_VoiceServiceRequest_<PerformMainThreadCallbacks>d__12__System_IDisposable_Dispose
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  long unaff_x19;
  undefined1 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x23;
  long unaff_x24;
  long lVar2;
  undefined4 uVar3;
  
  if (unaff_x24 != 0) {
    puVar1 = (undefined4 *)(*(long *)(unaff_x24 + 0x10) + unaff_x23 * 0xc);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    lVar2 = *(long *)(unaff_x19 + 0x50);
    uVar3 = FUN_07a181c8();
    if (lVar2 != 0) {
      puVar1 = (undefined4 *)(*(long *)(lVar2 + 0x10) + unaff_x23 * 0xc);
      *puVar1 = uVar3;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      lVar2 = *(long *)(unaff_x19 + 0x58);
      uVar3 = FUN_07a191d0();
      if (lVar2 != 0) {
        puVar1 = (undefined4 *)(*(long *)(lVar2 + 0x10) + unaff_x23 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = param_2;
        puVar1[2] = param_3;
        puVar1[3] = param_4;
        lVar2 = *(long *)(unaff_x19 + 0x40);
        FUN_07a172b0();
        uVar3 = FUN_07a00400(0);
        if (lVar2 != 0) {
          puVar1 = (undefined4 *)(*(long *)(lVar2 + 0x10) + unaff_x23 * 0x10);
          *puVar1 = uVar3;
          puVar1[1] = param_2;
          puVar1[2] = param_3;
          puVar1[3] = param_4;
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            *(undefined1 *)(*(long *)(*(long *)(unaff_x19 + 0x18) + 0x10) + unaff_x23) = unaff_w20;
            *(undefined1 *)(unaff_x19 + 0x78) = 1;
            return unaff_w21;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


