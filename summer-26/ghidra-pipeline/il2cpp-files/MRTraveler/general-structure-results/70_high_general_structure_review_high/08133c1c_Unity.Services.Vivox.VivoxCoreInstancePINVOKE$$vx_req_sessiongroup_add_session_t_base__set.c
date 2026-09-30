/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_base__set
ENTRY_POINT: 08133c1c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_base__set
               (void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w23;
  uint unaff_w24;
  undefined8 unaff_x25;
  long unaff_x26;
  int unaff_w28;
  
  puVar2 = (undefined8 *)FUN_03cf1348();
  iVar1 = (*(code *)*puVar2)();
  if (unaff_w28 < iVar1) {
    FUN_0812a6e8(*(undefined8 *)PTR_DAT_08f03360);
    *(int *)(unaff_x26 + 0x48) = *(int *)(unaff_x26 + 0x48) + 1;
    FUN_081332dc();
    return;
  }
  if (((unaff_w24 & 1) == 0) && ((unaff_w23 & 1) == 0)) {
    if (unaff_x19 != 0) {
      FUN_05ac9f10();
      return;
    }
  }
  else {
    if (((unaff_w23 & 1) != 0) && (uVar3 = FUN_06f74e14(), (uVar3 & 1) == 0)) {
      unaff_x20 = unaff_x25;
    }
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e833d8);
    FUN_08133d5c(uVar4,unaff_w24 & 1,unaff_w23 & 1,0);
    if (unaff_x19 != 0) {
      FUN_05ac9e6c();
      FUN_06f683f8(*(undefined8 *)PTR_DAT_08f03358,unaff_x20,0);
      FUN_0812a6e8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


