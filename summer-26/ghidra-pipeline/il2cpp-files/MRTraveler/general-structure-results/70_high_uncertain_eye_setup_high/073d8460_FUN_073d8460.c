/*
FUNCTION_NAME: FUN_073d8460
ENTRY_POINT: 073d8460
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_073d8460(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((DAT_0941e718 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb2c90);
    DAT_0941e718 = 1;
  }
  puVar1 = PTR_DAT_08eb2c90;
  lVar5 = 0;
  uVar4 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_073d8544;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar2 = FUN_073d83e0(param_5);
    if (lVar2 == 0) goto LAB_073d8544;
    lVar2 = FUN_073d828c(lVar2,uVar4 & 0xffffffff);
    if (lVar2 != 0) {
      if (*param_6 == 0) {
LAB_073d8544:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar3 = FUN_073d4dc4();
      uVar6 = OVRPlugin__set_rotation(lVar2);
      if (lVar3 == 0) goto LAB_073d8544;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar3 = lVar3 + lVar5;
      *(undefined4 *)(lVar3 + 0x20) = uVar6;
      *(undefined4 *)(lVar3 + 0x24) = param_2;
      *(undefined4 *)(lVar3 + 0x28) = param_3;
      *(undefined4 *)(lVar3 + 0x2c) = param_4;
    }
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x10;
  } while( true );
}


