/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_local_speaker_volume_t_volume_set
ENTRY_POINT: 0856403c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


float Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_local_speaker_volume_t_volume_set
                (void)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  uVar3 = FUN_04f38fe8();
  if ((uVar3 & 1) == 0) {
    return unaff_s8;
  }
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(in_stack_00000018 + 0x58) == 0) {
    if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = FUN_08581e30(0);
    if (lVar4 == 0) goto LAB_085640b0;
  }
  System_Collections_Generic_ObjectEqualityComparer<RaycastResult>___ctor();
LAB_085640b0:
  in_stack_00000008 = 0;
  uVar1 = FUN_06015900(&stack0x00000008,*(undefined8 *)PTR_DAT_0932ec20);
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09285ae0);
  }
  iVar2 = FUN_0767a564(uVar1,1,0);
  return unaff_s8 * (float)iVar2;
}


