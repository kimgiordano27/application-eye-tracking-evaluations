/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_uri_get
ENTRY_POINT: 08133ee0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_uri_get
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  
  lVar1 = *(long *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar4 = FUN_08825050(param_1,0);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar3 = FUN_08133e3c(uVar4,*(undefined8 *)(unaff_x19 + 0x20));
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        lVar5 = FUN_08825050(*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          uVar6 = FUN_08824e70(*(long *)(unaff_x19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            lVar7 = FUN_08824940(*(long *)(unaff_x19 + 0x20),0);
            if (lVar7 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_0882305c(lVar7,0);
            }
            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
               (uVar9 = FUN_088255a0(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
              FUN_08133b38(lVar1,uVar2,uVar4,uVar3 & 1,399 < lVar5,uVar6,uVar8,uVar9);
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                FUN_088248d8(*(long *)(unaff_x19 + 0x20),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


