/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 07a46e7c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_07a46f50:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (*(long *)(lVar2 + 0x20) != 0) {
      FUN_07a470a0(*(long *)(lVar2 + 0x20),*(undefined8 *)(param_1 + 0x40));
      uVar1 = FUN_07a470e8(param_1,param_2);
      if ((uVar1 & 1) == 0) {
        uVar3 = 0x7f800000;
LAB_07a46f18:
        FUN_07a4764c(uVar3,DAT_01aecb9c,DAT_01aed154,DAT_01aec3c4,param_1,0);
        return;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        OVRPlugin_LayerDesc__ToString((long)&stack0x00000000 + 4,*(long *)(param_1 + 0x40),5,0);
        lVar2 = *(long *)(param_1 + 0x30);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_07a46f50;
          lVar2 = *(long *)(lVar2 + 0x20);
          if (lVar2 != 0) {
            uVar3 = FUN_07a47318(in_stack_00000000._4_4_,uStack0000000000000008,
                                 uStack000000000000000c,*(undefined4 *)(lVar2 + 0x18),
                                 *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),
                                 0x3f000000,param_1,*(undefined8 *)(param_1 + 0x28));
            goto LAB_07a46f18;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


