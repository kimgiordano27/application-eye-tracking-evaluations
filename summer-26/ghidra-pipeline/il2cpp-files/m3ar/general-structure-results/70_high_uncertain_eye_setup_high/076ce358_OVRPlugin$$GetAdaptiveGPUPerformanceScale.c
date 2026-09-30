/*
FUNCTION_NAME: OVRPlugin$$GetAdaptiveGPUPerformanceScale
ENTRY_POINT: 076ce358
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAdaptiveGPUPerformanceScale(long param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_09548208 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08faddf0);
    FUN_0403162c(PTR_DAT_08faddf8);
    FUN_0403162c(PTR_DAT_08fade00);
    FUN_0403162c(PTR_DAT_08fade08);
    FUN_0403162c(PTR_DAT_08fade10);
    FUN_0403162c(PTR_DAT_08fade18);
    FUN_0403162c(PTR_DAT_08fade20);
    DAT_09548208 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = FUN_06efa410(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_08faddf0),
     puVar3 = PTR_DAT_08fade10, puVar2 = PTR_DAT_08fade00, puVar1 = PTR_DAT_08faddf8, lVar4 != 0)) {
    FUN_064216ac(&local_58,lVar4,*(undefined8 *)PTR_DAT_08fade20);
    while( true ) {
      uVar5 = FUN_04fafcd4(&local_58,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        FUN_04fafcd0(&local_58,*(undefined8 *)puVar1);
        return;
      }
      if (local_48 == 0) break;
      lVar4 = *(long *)(local_48 + 0x18);
      if ((param_3 & 1) == 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar6 = *(undefined8 *)puVar3;
        *(undefined4 *)(lVar4 + 0x10) = param_2;
        FUN_05267f60(lVar4,uVar6);
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        *(undefined4 *)(lVar4 + 0x10) = param_2;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


