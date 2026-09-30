/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 03adc238
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose(void)

{
  bool in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_02d846d4();
  }
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_02c7737c(PTR_DAT_065dab08);
  uVar3 = thunk_FUN_02c72dcc(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
    lVar4 = thunk_FUN_02c7737c(PTR_DAT_065c89e8);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f3fb68(uVar2,0);
    FUN_04f5199c();
    return;
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_PTR_0620d888,0);
}


