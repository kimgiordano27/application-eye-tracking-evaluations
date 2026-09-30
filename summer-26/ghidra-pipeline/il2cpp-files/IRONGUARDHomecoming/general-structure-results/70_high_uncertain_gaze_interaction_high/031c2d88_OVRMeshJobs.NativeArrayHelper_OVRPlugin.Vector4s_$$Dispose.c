/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 031c2d88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_interaction_hits_1
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  uVar1 = thunk_FUN_01efb3a4();
  uVar2 = thunk_FUN_01ef6ec0(uVar1,*(undefined8 *)*unaff_x22);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68);
    lVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar1,0);
    FUN_0358b088();
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x22;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&
                     PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
              ,0);
}


