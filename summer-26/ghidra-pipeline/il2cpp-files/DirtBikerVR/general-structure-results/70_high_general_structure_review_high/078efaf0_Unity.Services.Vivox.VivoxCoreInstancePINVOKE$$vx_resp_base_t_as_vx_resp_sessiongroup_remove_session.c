/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_remove_session
ENTRY_POINT: 078efaf0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_remove_session
          (ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  
  do {
                    /* try { // try from 078efaf4 to 079efb0f has its CatchHandler @ 078efe28 */
    if (param_1 <= unaff_x21) {
LAB_078efb5c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (**(long **)(param_2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar2 = FUN_06f1e1f4(**(long **)(param_2 + 0xb8),*unaff_x20,0);
    if ((uVar2 & 1) != 0) {
      if ((uint)unaff_x21 < *(uint *)(unaff_x19 + 0x18)) {
LAB_078efb48:
                    /* try { // try from 078efb50 to 079efb5b has its CatchHandler @ 078efe34 */
        return *unaff_x20;
      }
      goto LAB_078efb5c;
    }
    do {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      unaff_x21 = unaff_x21 + 1;
      unaff_x20 = unaff_x20 + 1;
      if ((long)(int)uVar1 <= (long)unaff_x21) {
        if (uVar1 == 0) goto LAB_078efb5c;
        unaff_x20 = (undefined8 *)(unaff_x19 + 0x20);
        goto LAB_078efb48;
      }
      if (uVar1 <= unaff_x21) goto LAB_078efb5c;
      uVar2 = FUN_065cd284(*unaff_x20,0);
    } while ((uVar2 & 1) != 0);
    param_2 = *unaff_x22;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      param_2 = *unaff_x22;
    }
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
}


