/*
FUNCTION_NAME: FUN_059b0528
ENTRY_POINT: 059b0528
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_059b0528(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = Method_Unity_Collections_NativeArray<BatchMeshID>__ctor__;
  if ((DAT_06bc1bfa & 1) == 0) {
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<BatchMeshID>__ctor__);
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bc1bfa = 1;
  }
  FUN_044ebb3c(param_1,param_2,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_067cd898;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__ +
                     0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x110);
  if (*(int *)(*(long *)PTR_DAT_067cd898 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_059b085c;
    FUN_059af77c(param_2,*(undefined4 *)(param_1 + 0xf0));
    lVar3 = *(long *)puVar2;
  }
  bVar1 = *(byte *)(param_1 + 0x111);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_059b085c;
    FUN_059af93c(param_2,*(undefined4 *)(param_1 + 0xf4));
    lVar3 = *(long *)puVar2;
  }
  bVar1 = *(byte *)(param_1 + 0x112);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_059b085c;
    FUN_059af994(param_2,*(undefined4 *)(param_1 + 0xf8));
    lVar3 = *(long *)puVar2;
  }
  bVar1 = *(byte *)(param_1 + 0x113);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_059b085c;
    (**(code **)(*param_2 + 0xc68))
              (param_2,*(undefined4 *)(param_1 + 0xfc),*(undefined8 *)(*param_2 + 0xc70));
    lVar3 = *(long *)puVar2;
  }
  bVar1 = *(byte *)(param_1 + 0x114);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_059b085c;
    (**(code **)(*param_2 + 0xc88))
              (param_2,*(undefined4 *)(param_1 + 0x100),*(undefined8 *)(*param_2 + 0xc90));
    lVar3 = *(long *)puVar2;
  }
  bVar1 = *(byte *)(param_1 + 0x115);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) == 0) {
    return;
  }
  if (param_2 != (long *)0x0) {
    FUN_059af8e4(param_2,*(undefined8 *)(param_1 + 0x108));
    return;
  }
LAB_059b085c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


