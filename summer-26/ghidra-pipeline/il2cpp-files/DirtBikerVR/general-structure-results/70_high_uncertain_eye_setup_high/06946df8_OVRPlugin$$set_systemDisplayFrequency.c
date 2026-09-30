/*
FUNCTION_NAME: OVRPlugin$$set_systemDisplayFrequency
ENTRY_POINT: 06946df8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_systemDisplayFrequency(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  lVar6 = *unaff_x21;
  *(int *)(param_2 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      puVar4 = (undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = uVar3;
      thunk_FUN_03afed3c(puVar4);
    }
    else {
      FUN_04de85b0(param_2,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    lVar6 = *(long *)(unaff_x19 + 0x28);
    if (lVar6 != 0) {
      lVar5 = *(long *)(lVar6 + 0x10);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
      lVar7 = *unaff_x21;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = uVar3;
          thunk_FUN_03afed3c(puVar4);
        }
        else {
          FUN_04de85b0(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        puVar2 = PTR_DAT_084b60a8;
        if (*unaff_x20 != 0) {
          FUN_04de87c0(*unaff_x20,*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_084b60a8)
          ;
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_04de87c0(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x58),
                         *(undefined8 *)puVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


