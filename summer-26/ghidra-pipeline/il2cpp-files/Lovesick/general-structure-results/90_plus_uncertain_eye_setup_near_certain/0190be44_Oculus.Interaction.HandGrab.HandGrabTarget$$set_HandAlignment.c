/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabTarget$$set_HandAlignment
ENTRY_POINT: 0190be44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_HandGrab_HandGrabTarget__set_HandAlignment(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long in_stack_00000008;
  
  if ((DAT_03779fc5 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f08e0);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_DebugVertexAttributeMode_var);
    thunk_FUN_00d48444(
                      Method_System_Linq_Enumerable_<IntersectIterator>d__74<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_12102);
    thunk_FUN_00d48444(StringLiteral_254);
    thunk_FUN_00d48444(Method_ProfilerHud_ButtonDown__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Queue<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>_Enqueue__
                      );
    thunk_FUN_00d48444(StringLiteral_4868);
    thunk_FUN_00d48444(StringLiteral_10840);
    thunk_FUN_00d48444(UnityEngine_Rendering_StencilOp_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_9__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<AbuseReportRecording>_get_Data__);
    thunk_FUN_00d48444(GrapplingHook_<AttachHook>d__13_TypeInfo);
    thunk_FUN_00d48444(System_Resources_FastResourceComparer_TypeInfo);
    thunk_FUN_00d48444(Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__);
    thunk_FUN_00d48444(StringLiteral_645);
    DAT_03779fc5 = 1;
  }
  if (((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) &&
     (uVar4 = FUN_0135b570(param_2,*(undefined8 *)System_Resources_FastResourceComparer_TypeInfo),
     puVar3 = Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__, (uVar4 & 1) != 0
     )) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      iVar1 = *(int *)(param_2 + 0x18);
      if (*(int *)(lVar5 + 0x18) <= iVar1) {
        return;
      }
      iVar2 = *(int *)(lVar5 + 0x18) + -1;
      if (*(int *)(*(long *)StringLiteral_645 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_00bf3248(lVar5,iVar1,iVar2,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_013593d0(*(long *)(param_1 + 0x20),iVar1,iVar2,*(undefined8 *)StringLiteral_12102);
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_013593d0(*(long *)(param_1 + 0x28),iVar1,iVar2,
                       *(undefined8 *)Method_ProfilerHud_ButtonDown__);
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_013593d0(*(long *)(param_1 + 0x30),iVar1,iVar2,*(undefined8 *)StringLiteral_254);
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (FUN_0132138c(*(long *)(param_1 + 0x18),iVar1,&stack0x00000008,
                             *(undefined8 *)
                              Method_System_Linq_Enumerable_<IntersectIterator>d__74<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                            ), puVar3 = GrapplingHook_<AttachHook>d__13_TypeInfo,
               in_stack_00000008 != 0)) {
              *(int *)(in_stack_00000008 + 0x18) = iVar1;
              FUN_0135b580(param_2,*(undefined8 *)puVar3);
              if (*(long *)(param_1 + 0x18) != 0) {
                FUN_01324ac8(*(long *)(param_1 + 0x18),iVar2,*(undefined8 *)PTR_DAT_033f08e0);
                lVar5 = *(long *)(param_1 + 0x20);
                if (lVar5 != 0) {
                  FUN_01357600(lVar5,*(int *)(lVar5 + 0x28) + -1,
                               *(undefined8 *)UnityEngine_Rendering_StencilOp_TypeInfo);
                  lVar5 = *(long *)(param_1 + 0x28);
                  if (lVar5 != 0) {
                    FUN_01357600(lVar5,*(int *)(lVar5 + 0x28) + -1,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_9__
                                );
                    lVar5 = *(long *)(param_1 + 0x30);
                    if (lVar5 != 0) {
                      FUN_01357600(lVar5,*(int *)(lVar5 + 0x28) + -1,
                                   *(undefined8 *)
                                    Method_Oculus_Platform_Message<AbuseReportRecording>_get_Data__)
                      ;
                      FUN_0190d48c(param_1);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}


