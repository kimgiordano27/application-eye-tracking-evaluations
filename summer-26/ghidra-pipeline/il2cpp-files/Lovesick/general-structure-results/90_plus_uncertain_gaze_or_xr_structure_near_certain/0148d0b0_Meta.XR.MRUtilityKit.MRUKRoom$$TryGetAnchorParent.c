/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetAnchorParent
ENTRY_POINT: 0148d0b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetAnchorParent(ulong param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x23;
  long lVar6;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 0148d0bc to 0158d0cb has its CatchHandler @ 0148d610 */
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<string>>,_WitUnityRequest_<SendMessageAsync>d__20>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<SimpleFollowCurve>_Dispose__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<Rigidbody2D>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_Clear__
                      );
                    /* try { // try from 0148d0ec to 0158d0fb has its CatchHandler @ 0148d608 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
                    /* try { // try from 0148d0fc to 0158d11f has its CatchHandler @ 0148ce5c */
    *(undefined1 *)(unaff_x23 + 0xb98) = 1;
  }
  puVar4 = Method_UnityEngine_Component_GetComponentInParent<Rigidbody2D>__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<string>>,_WitUnityRequest_<SendMessageAsync>d__20>__
  ;
  puVar2 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  puVar1 = Method_System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_Clear__;
  lVar6 = *(long *)(param_2 + 0x10);
  while (lVar6 != 0) {
    if (param_3 < *(int *)(lVar6 + 0x18)) goto LAB_0148d190;
    if (*(int *)(lVar6 + 0x18) == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,0x240);
    }
    FUN_00bc2300(lVar6,uVar5,*(undefined8 *)puVar3);
    lVar6 = *(long *)(param_2 + 0x10);
  }
LAB_0148d230:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0148d190:
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar6 == 0) goto LAB_0148d230;
  if (param_3 < *(int *)(lVar6 + 0x18)) {
    if (*(long *)(param_2 + 0x10) != 0) {
      FUN_0132138c(*(long *)(param_2 + 0x10),param_3,&stack0x00000008,*(undefined8 *)puVar4);
      *unaff_x22 = in_stack_00000008;
      if (*(long *)(param_2 + 0x18) != 0) {
        FUN_0132138c(*(long *)(param_2 + 0x18),param_3,&stack0x00000008,*(undefined8 *)puVar4);
        *unaff_x20 = in_stack_00000008;
        if (*(long *)(param_2 + 0x18) != 0) {
          FUN_0132149c(*(long *)(param_2 + 0x18),param_3,*unaff_x22,*(undefined8 *)puVar1);
          if (*(long *)(param_2 + 0x10) != 0) {
            FUN_0132149c(*(long *)(param_2 + 0x10),param_3,*unaff_x20,*(undefined8 *)puVar1);
            return;
          }
        }
      }
    }
    goto LAB_0148d230;
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
  }
  else {
    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,0x240);
  }
  FUN_00bc2300(lVar6,uVar5,*(undefined8 *)puVar3);
  goto LAB_0148d190;
}


