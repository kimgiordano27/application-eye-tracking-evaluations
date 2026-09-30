/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 058318ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__Dispose(undefined8 param_1)

{
  int *piVar1;
  void *__src;
  undefined8 *puVar2;
  ulong in_x9;
  long unaff_x20;
  undefined8 uVar3;
  void *unaff_x21;
  undefined8 uVar4;
  size_t unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    FUN_040b1acc(param_1);
  }
  FUN_03b2820c();
  memcpy(unaff_x23,unaff_x21,unaff_x22);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  thunk_FUN_040d6b00();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2ebac();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  piVar1 = (int *)thunk_FUN_040d6b00();
  if (0 < *piVar1) {
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    __src = (void *)thunk_FUN_040d6b00();
    memcpy(unaff_x25,__src,unaff_x24);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_040775b0();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  piVar1 = (int *)thunk_FUN_040d6b00();
  if (1 < *piVar1) {
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar2 = (undefined8 *)thunk_FUN_040d6b00();
    uVar4 = *puVar2;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar2 = (undefined8 *)thunk_FUN_040d6b00();
    uVar3 = *puVar2;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    piVar1 = (int *)thunk_FUN_040d6b00();
    FUN_0769da98(uVar4,uVar3,*piVar1 + -1,0);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


