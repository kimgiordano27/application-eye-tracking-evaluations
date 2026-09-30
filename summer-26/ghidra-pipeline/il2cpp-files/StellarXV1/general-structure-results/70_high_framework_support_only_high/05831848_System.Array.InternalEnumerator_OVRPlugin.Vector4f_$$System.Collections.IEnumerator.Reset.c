/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 05831848
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_Reset(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  void *__src;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  void *unaff_x21;
  undefined8 uVar6;
  size_t unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  piVar2 = (int *)thunk_FUN_040d6b00();
  if (1 < *piVar2) {
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    piVar2 = (int *)thunk_FUN_040d6b00();
    lVar3 = *(long *)(unaff_x20 + 0x20);
    iVar1 = *piVar2;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    FUN_04077674(lVar3,iVar1 + -1);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc(*(long *)(unaff_x20 + 0x20));
    }
    FUN_03b2820c();
  }
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
  piVar2 = (int *)thunk_FUN_040d6b00();
  if (0 < *piVar2) {
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
  piVar2 = (int *)thunk_FUN_040d6b00();
  if (1 < *piVar2) {
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar4 = (undefined8 *)thunk_FUN_040d6b00();
    uVar6 = *puVar4;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar4 = (undefined8 *)thunk_FUN_040d6b00();
    uVar5 = *puVar4;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    piVar2 = (int *)thunk_FUN_040d6b00();
    FUN_0769da98(uVar6,uVar5,*piVar2 + -1,0);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


