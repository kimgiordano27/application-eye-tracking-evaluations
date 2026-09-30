/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_uri_get
ENTRY_POINT: 0855cbf8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_uri_get
               (void *param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x9;
  undefined4 unaff_w19;
  long unaff_x23;
  long unaff_x25;
  long lStack00000000000000c8;
  
  lStack00000000000000c8 = in_x9;
  if ((*(byte *)(unaff_x23 + 0xa63) & 1) == 0) {
    FUN_04077588(PTR_DAT_0932c838);
    FUN_04077588(PTR_DAT_0932c8b8);
    FUN_04077588(PTR_DAT_0932c8c0);
    FUN_04077588(PTR_DAT_0932c538);
    *(undefined1 *)(unaff_x23 + 0xa63) = 1;
  }
  if (*param_3 != 0) {
    uVar2 = FUN_084f7088(*param_3,*(undefined8 *)PTR_DAT_0932c8c0);
    if (*param_3 != 0) {
      uVar3 = FUN_084f7088(*param_3,*(undefined8 *)PTR_DAT_0932c838);
      puVar1 = PTR_DAT_0932c538;
      if (*param_3 != 0) {
        uVar4 = FUN_084f7088(*param_3,*(undefined8 *)PTR_DAT_0932c8b8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar1);
        }
        FUN_0855cd30(&stack0x00000004,param_2,uVar2,uVar3,uVar4,unaff_w19);
        memcpy(param_1,&stack0x00000004,0xc4);
        if (*(long *)(unaff_x25 + 0x28) == lStack00000000000000c8) {
          return;
        }
        goto LAB_0855cd2c;
      }
    }
  }
  if (*(long *)(unaff_x25 + 0x28) == lStack00000000000000c8) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_0855cd2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


