/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_session_handle_get
ENTRY_POINT: 081136e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_session_handle_get
               (void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  float fVar8;
  float unaff_s8;
  
  uVar4 = FUN_085d9f54();
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x90);
    lVar5 = FUN_08825290(*(long *)(unaff_x20 + 0x20),0);
    if (lVar7 == lVar5) {
      iVar1 = *(int *)(unaff_x19 + 0xa0);
      iVar2 = FUN_085e8280(0);
      if (iVar1 == iVar2) {
        fVar8 = (float)FUN_085e510c(0);
        unaff_s8 = fVar8 - *(float *)(unaff_x19 + 0xa4);
      }
      fVar8 = unaff_s8 + *(float *)(unaff_x19 + 0x98);
      *(float *)(unaff_x19 + 0x98) = fVar8;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        if (((float)*(int *)(*(long *)(unaff_x19 + 0x40) + 0x1c) <= fVar8) &&
           (5 < *(int *)(unaff_x19 + 0x9c))) {
          if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_081137c8;
          FUN_08823ffc(*(long *)(unaff_x20 + 0x20),0);
        }
        *(int *)(unaff_x19 + 0x9c) = *(int *)(unaff_x19 + 0x9c) + 1;
        uVar3 = FUN_085e8280(0);
        *(undefined4 *)(unaff_x19 + 0xa0) = uVar3;
        uVar3 = FUN_085e510c(0);
        *(undefined4 *)(unaff_x19 + 0xa4) = uVar3;
        return;
      }
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x98) = 0;
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        uVar6 = FUN_08825290(*(long *)(unaff_x20 + 0x20),0);
        *(undefined8 *)(unaff_x19 + 0x90) = uVar6;
        *(undefined8 *)(unaff_x19 + 0xa0) = 0xffffffff;
        return;
      }
    }
  }
LAB_081137c8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


