/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 051a4d60
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystem(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar6;
  
  puVar2 = (undefined8 *)FUN_02ce0a7c(param_1,param_2,0);
  uVar6 = (*(code *)*puVar2)();
  if (unaff_x22 != 0) {
    *(undefined4 *)(unaff_x22 + 0xb0) = uVar6;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x40);
      uVar6 = FUN_051a41e0();
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0xac) = uVar6;
        lVar4 = *(long *)(unaff_x19 + 0x40);
        uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar3 = FUN_05ef739c(uVar5,0,0);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_051a4e2c;
          bVar1 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0;
        }
        else {
          bVar1 = true;
        }
        if (lVar4 != 0) {
          *(bool *)(lVar4 + 0xb4) = bVar1;
          if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
            *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) =
                 *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2;
            FUN_051a2408();
            return;
          }
        }
      }
    }
  }
LAB_051a4e2c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


