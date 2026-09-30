/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 02fc4ef0
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__remove_SpaceQueryComplete(long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x21;
  code *pcVar7;
  
  uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 400) + 8))();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar6 + 0xa8);
  pcVar7 = *(code **)(*(long *)(lVar6 + 0xa0) + 8);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790(lVar3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170();
    }
    puVar4 = (undefined4 *)thunk_FUN_015d06c4();
    uVar1 = (*pcVar7)(param_2,*puVar4,
                      *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa0));
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      if (*(uint *)(*(long *)(param_2 + 0x18) + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe0) + 0x132) & 1) ==
          0) {
        FUN_015c2790();
      }
      uVar5 = thunk_FUN_015d01b0();
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


