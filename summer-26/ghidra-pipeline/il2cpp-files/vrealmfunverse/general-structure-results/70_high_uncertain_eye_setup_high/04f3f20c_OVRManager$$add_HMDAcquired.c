/*
FUNCTION_NAME: OVRManager$$add_HMDAcquired
ENTRY_POINT: 04f3f20c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__add_HMDAcquired
          (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack0000000000000024;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_000000c8;
  
  uVar2 = FUN_05c9bf94(param_4,0);
  uStack0000000000000054 = uStack0000000000000084;
  if (DAT_066c1f0a == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1f0a = '\x01';
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
  uStack0000000000000024 = uStack0000000000000054;
  FUN_04f3f68c(uVar2,param_2,param_3,*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),
               *(undefined4 *)(lVar1 + 0x2c));
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar3 = (float)FUN_05d0be20(*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar4 = *(float *)(unaff_x19 + 0x28);
      lVar1 = FUN_05c89340(*(long *)(unaff_x19 + 0x20),0);
      if (lVar1 != 0) {
        FUN_05c9c070(uVar2,fVar4 + (param_2 - in_stack_000000c8._4_4_) + fVar3 * 0.5,param_3,lVar1,0
                    );
        *(undefined1 *)(unaff_x19 + 0x7c) = 1;
        *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000068;
        *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000060;
        *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000078;
        *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000070;
        *(undefined8 *)(unaff_x19 + 0x74) = uStack0000000000000084;
        *(ulong *)(unaff_x19 + 0x6c) = CONCAT44(uStack0000000000000080,in_stack_00000078._4_4_);
        FUN_04f3eb7c();
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


