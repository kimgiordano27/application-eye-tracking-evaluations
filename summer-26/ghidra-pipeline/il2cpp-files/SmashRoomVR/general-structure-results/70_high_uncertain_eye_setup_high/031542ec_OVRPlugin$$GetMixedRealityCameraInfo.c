/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 031542ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetMixedRealityCameraInfo(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  
  uVar2 = (*(code *)*param_1)();
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined4 *)(unaff_x19 + 0x50);
    puVar5 = (undefined4 *)(unaff_x19 + 0x54);
    puVar6 = (undefined4 *)(unaff_x19 + 0x58);
    puVar7 = (undefined4 *)(unaff_x19 + 0x5c);
  }
  else {
    puVar4 = (undefined4 *)(unaff_x19 + 0x40);
    puVar5 = (undefined4 *)(unaff_x19 + 0x44);
    puVar6 = (undefined4 *)(unaff_x19 + 0x48);
    puVar7 = (undefined4 *)(unaff_x19 + 0x4c);
  }
  if (unaff_x20 != (long *)0x0) {
    (**(code **)(*unaff_x20 + 0x2a8))(*puVar4,*puVar5,*puVar6,*puVar7);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar3 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (iVar1 = FUN_0392a654(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0)) {
        FUN_0391fb70(lVar3,0 < iVar1,0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar3 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
          FUN_0391fb70(lVar3,*(char *)(unaff_x19 + 0x68) == '\0',0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


