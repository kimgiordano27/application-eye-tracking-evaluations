/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 02c1bb48
PROGRAM: sharks-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong unaff_x21;
  long unaff_x22;
  long lVar6;
  long *unaff_x23;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x8b0));
  FUN_017fc350(PTR_DAT_03804688);
  FUN_017fc350(PTR_DAT_03804428);
  *(undefined1 *)(unaff_x22 + 0xeca) = 1;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar2 = FUN_02c1a118();
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = FUN_017ea100();
  }
  else {
    lVar6 = *(long *)PTR_DAT_0380b8b0;
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_0185db00(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
  }
  puVar1 = PTR_DAT_0380b8a8;
  if ((unaff_x21 & 1) == 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar6 = FUN_02c1d088();
    if (lVar6 != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(long *)(lVar5 + 0x18) == 0) {
        uVar4 = *(undefined8 *)puVar1;
        lVar5 = lVar6;
      }
      else {
        lVar3 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,
                             *(int *)(lVar6 + 0x18) + (int)*(long *)(lVar5 + 0x18));
        FUN_02bf259c(lVar5,lVar3,*(undefined4 *)(lVar5 + 0x18),0);
        FUN_02bf1608(lVar6,0,lVar3,*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar6 + 0x18),0);
        uVar4 = *(undefined8 *)puVar1;
        lVar5 = lVar3;
      }
      goto LAB_02c1bca0;
    }
  }
  uVar4 = *(undefined8 *)puVar1;
LAB_02c1bca0:
  FUN_01b34c10(lVar5,uVar4);
  return;
}


