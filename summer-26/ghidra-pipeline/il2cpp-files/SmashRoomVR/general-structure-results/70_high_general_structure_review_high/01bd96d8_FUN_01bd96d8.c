/*
FUNCTION_NAME: FUN_01bd96d8
ENTRY_POINT: 01bd96d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_01bd96d8(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_34;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 01bd96e0 to 01cd96e7 has its CatchHandler @ 01bd970c */
                    /* try { // try from 01bd96e8 to 01cd971f has its CatchHandler @ 01bd96bc */
  if ((DAT_03fed27b & 1) == 0) {
                    /* catch() { ... } // from try @ 01bd96e0 with catch @ 01bd970c */
    thunk_FUN_01ad9084(Method_System_Collections_Queue_QueueEnumerator_MoveNext__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_Reset__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_1__);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Entry__);
    DAT_03fed27b = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_<_cctor>b__0_0__;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar4 = FUN_01f25754(uVar9,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 01bd9810 with catch @ 01bd97c8 */
  if (((lVar4 != 0) &&
      (lVar4 = FUN_01e8a9f8(lVar4,*(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__
                           ), lVar4 != 0)) &&
     (lVar5 = FUN_01e8ac5c(lVar4,*(undefined8 *)
                                  Method_System_Collections_Queue_QueueEnumerator_MoveNext__),
     puVar3 = Method_System_Collections_SortedList_SortedListEnumerator_Reset__,
     puVar2 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__,
     puVar1 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_1__, lVar5 != 0)) {
    FUN_03afbce8(lVar5,param_2,0);
                    /* try { // try from 01bd9804 to 01cd980f has its CatchHandler @ 01bd982c */
    uVar10 = *(undefined8 *)puVar3;
                    /* try { // try from 01bd9810 to 01cd984f has its CatchHandler @ 01bd97c8 */
    uVar9 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* catch() { ... } // from try @ 01bd9804 with catch @ 01bd982c */
    lVar5 = FUN_0304eec0(uVar10,0);
    puVar1 = Method_System_Collections_SortedList_SortedListEnumerator_get_Current__;
    if (lVar5 != 0) {
      lVar5 = FUN_0305a124(lVar5,*(undefined8 *)
                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Entry__
                           ,0x24,0);
      plVar6 = (long *)FUN_01b47fd0(*(undefined8 *)puVar1,2);
      if (plVar6 != (long *)0x0) {
        lVar7 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar6 + 0x40));
        puVar1 = 
        Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
        ;
        if (lVar7 != 0) {
          if ((int)plVar6[3] != 0) {
            plVar6[4] = lVar4;
            thunk_FUN_01b4f09c(plVar6 + 4,lVar4);
            local_34 = param_3;
            lVar7 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_34);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_01bd9924;
            if (1 < *(uint *)(plVar6 + 3)) {
              plVar6[5] = lVar7;
              thunk_FUN_01b4f09c(plVar6 + 5,lVar7);
              if (lVar5 != 0) {
                FUN_02f8a40c(lVar5,uVar9,plVar6,0);
                return lVar4;
              }
              goto LAB_01bd991c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
LAB_01bd9924:
        uVar9 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar9,0);
      }
    }
  }
LAB_01bd991c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


