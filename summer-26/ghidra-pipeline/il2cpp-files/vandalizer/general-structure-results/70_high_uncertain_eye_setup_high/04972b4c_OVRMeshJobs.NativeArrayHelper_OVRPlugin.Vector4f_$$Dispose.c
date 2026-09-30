/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 04972b4c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_0325397c();
  if ((uVar1 & 1) != 0) {
    __cxa_end_catch();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar3 = thunk_FUN_03257e30(PTR_DAT_0759c0d8,uVar5,0);
    uVar3 = FUN_031f21dc(uVar3,2);
    FUN_02d65918();
    FUN_02d745c8(uVar3);
    FUN_02d67bb8(uVar3,0);
    FUN_02d65918(uVar3);
    FUN_02d745c8(uVar3,uVar5);
    FUN_02d67bb8(uVar3,1,uVar5);
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075ecb90);
    uVar5 = FUN_05e45e68(uVar5,uVar3,0);
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar3 = thunk_FUN_0322f148();
    uVar4 = thunk_FUN_03257e30(PTR_DAT_075a2610);
    FUN_05d6f3dc(uVar3,uVar5,uVar4,0);
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075ecba0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3,uVar5);
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&PTR_PTR_0718d318,0);
}


