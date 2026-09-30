/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_current_playback_speed_get
ENTRY_POINT: 08123ef0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_current_playback_speed_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_08f02a90;
  if ((DAT_09428d0c & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f02a90);
    FUN_03c8f898(PTR_DAT_08f02ad0);
    DAT_09428d0c = 1;
  }
  lVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  auVar6 = FUN_07145224(lVar3,0);
  puVar1 = PTR_DAT_08f02ad0;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_08f02ad0;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    uVar4 = thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x18),param_2);
    if (param_3 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(param_3 + 0x10) != '\0';
    }
    uVar5 = *(undefined8 *)puVar1;
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = uVar4;
    *(bool *)(lVar3 + 0x20) = bVar2;
    if (param_1 != 0) {
      FUN_081236ac(param_1,uVar5,lVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(auVar6._0_8_,auVar6._8_8_);
}


