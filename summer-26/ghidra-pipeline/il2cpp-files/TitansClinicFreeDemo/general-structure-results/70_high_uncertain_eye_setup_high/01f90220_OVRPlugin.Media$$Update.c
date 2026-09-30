/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 01f90220
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Update(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w23;
  long unaff_x24;
  undefined4 uStack000000000000000c;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628(param_1);
  }
  uVar3 = FUN_01f96f88();
  lVar2 = 0;
  if ((uVar3 & 1) == 0) {
    lVar2 = unaff_x24;
  }
  if ((uVar3 & 1) == 0) {
    uStack000000000000000c = 1;
    if (lVar2 != 0) {
      uVar1 = unaff_w23 | 0x214;
      if ((unaff_w23 & 0xff) != 0) {
        uVar1 = unaff_w23;
      }
      FUN_01fa52ec(lVar2,uVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar4 = thunk_FUN_01279b34(PTR_DAT_027bcb60);
  uVar4 = FUN_01f942e0(uVar4,0);
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar5 = thunk_FUN_0124bba8();
  uVar6 = thunk_FUN_01279b34(PTR_DAT_027bb820);
  FUN_01e7598c(uVar5,uVar4,uVar6,0);
  uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1b20);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar5,uVar4);
}


