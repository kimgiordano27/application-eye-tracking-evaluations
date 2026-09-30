/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 04f62af8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_useDynamicFoveatedRendering(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 200) != 0) {
    uVar2 = FUN_05c89340(*(long *)(unaff_x20 + 200),0);
    uVar2 = FUN_04f61d48(param_1,uVar2);
    if (*(long *)(unaff_x20 + 200) != 0) {
      FUN_05c89340(*(long *)(unaff_x20 + 200),0);
      FUN_04f62360(uVar2);
      lVar3 = *(long *)(unaff_x20 + 0x130);
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_TypeInfo;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = uVar2;
            thunk_FUN_02bb0e9c(puVar5,uVar2);
          }
          else {
            FUN_037a6538(lVar3,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          return uVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


