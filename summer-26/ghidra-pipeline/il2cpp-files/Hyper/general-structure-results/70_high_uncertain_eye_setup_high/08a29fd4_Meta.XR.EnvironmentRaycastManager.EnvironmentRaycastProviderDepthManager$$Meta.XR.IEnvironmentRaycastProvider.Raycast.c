/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.Raycast
ENTRY_POINT: 08a29fd4
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_Raycast
               (void)

{
  bool in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  if (in_ZR) {
    lVar2 = FUN_08a28f34();
    return lVar2 == unaff_x19;
  }
  plVar5 = *(long **)(unaff_x20 + 0x58);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_08a2a050;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac4c7d8,0);
LAB_08a2a050:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 != 0) {
        return *(int *)(unaff_x19 + 0x1c) == 0;
      }
    }
    else if (unaff_x19 != 0) {
      return *(int *)(unaff_x19 + 0x1c) == 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


