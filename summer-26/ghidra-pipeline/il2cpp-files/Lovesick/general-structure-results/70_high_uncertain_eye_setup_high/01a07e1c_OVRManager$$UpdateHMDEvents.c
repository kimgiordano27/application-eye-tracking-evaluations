/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 01a07e1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long lVar4;
  
  puVar1 = UnityEngine_UIElements_DropdownMenuEventInfo_TypeInfo;
  FUN_016f27fc();
  FUN_01954c14();
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60>__ctor__
                              );
    if (lVar2 == 0) goto LAB_01a07f6c;
    FUN_0126412c(lVar2,*(undefined8 *)
                        Method_System_Collections_Generic_List<GUILayoutEntry>_GetEnumerator__);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
    (**(code **)(*unaff_x19 + 0x368))();
  }
  if (unaff_x19[0x18] != 0) {
    lVar2 = FUN_010c3404(unaff_x19[0x18],
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_TypeInfo)
    ;
    unaff_x19[0x26] = lVar2;
    if (unaff_x19[0x23] == 0) {
      lVar2 = FUN_0268fd4c();
      if (lVar2 == 0) goto LAB_01a07f6c;
      FUN_010e5800(lVar2,*(undefined8 *)Method_System_Threading_Tasks_Task_Run<string>__);
      FUN_01a07f70();
    }
    puVar1 = OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_TypeInfo;
    if (unaff_x19[0x18] != 0) {
      lVar4 = unaff_x19[0x25];
      uVar3 = FUN_0268fd10(unaff_x19[0x18],0);
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar2 != 0) {
        FUN_01a02d0c(lVar2,lVar4,uVar3);
        unaff_x19[0x27] = lVar2;
        FUN_01954cb8();
        return;
      }
    }
  }
LAB_01a07f6c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


