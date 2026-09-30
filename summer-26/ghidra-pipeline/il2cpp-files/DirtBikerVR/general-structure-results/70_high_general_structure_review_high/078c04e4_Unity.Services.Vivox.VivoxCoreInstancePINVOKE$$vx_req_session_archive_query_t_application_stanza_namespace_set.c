/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_application_stanza_namespace_set
ENTRY_POINT: 078c04e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_set
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long lVar12;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xfa8));
  *(undefined1 *)(unaff_x20 + 0x98c) = 1;
                    /* try { // try from 078c04f8 to 079c04ff has its CatchHandler @ 078c0688 */
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
                    /* try { // try from 078c0500 to 079c0537 has its CatchHandler @ 078c02f8 */
  if ((*(int *)(unaff_x19 + 0x30) != 0) && (uVar7 = FUN_078bf7d0(), (uVar7 & 1) != 0)) {
    lVar10 = *(long *)(unaff_x19 + 0x40);
    if (lVar10 == 0) {
LAB_078c06b4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if ((*(long *)(lVar10 + 0x18) != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
                    /* try { // try from 078c0538 to 079c053f has its CatchHandler @ 078c0644 */
      if ((*(long *)(unaff_x19 + 0x38) == 0) ||
         (((lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28), lVar10 == 0 ||
           (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) ||
          (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)))) goto LAB_078c06b4;
                    /* try { // try from 078c054c to 079c056b has its CatchHandler @ 078c0658 */
      FUN_04de90b8(&stack0x00000008,lVar10,
                   *(undefined8 *)
                    System_Collections_Generic_List<NetworkSceneManager_DeferredObjectCreation>_TypeInfo
                  );
      puVar6 = System_Collections_Generic_List<NetworkSceneManager_SceneMap>_TypeInfo;
      puVar5 = 
      System_Collections_Generic_List<NetworkSceneManager_DeferredObjectsMovedEvent>_TypeInfo;
      puVar4 = 
      System_Collections_Generic_List<NetworkAnimatorStateChangeHandler_TriggerUpdate>_TypeInfo;
      puVar3 = 
      System_Collections_Generic_List<NetworkAnimatorStateChangeHandler_AnimationUpdate>_TypeInfo;
      puVar2 = System_Collections_Generic_List<EventProvider_Registration>_TypeInfo;
      puVar1 = System_Collections_Generic_List<EntryPreProcessor_AllocSize>_TypeInfo;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000010 = &stack0x00000020;
      in_stack_00000008 = 0;
      while (uVar7 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
        lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
        FUN_0679343c(lVar10,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        plVar11 = (long *)(lVar10 + 0x10);
        *plVar11 = in_stack_00000030;
        thunk_FUN_03afed3c(plVar11);
        if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
        uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
        FUN_053f151c(uVar8,lVar10,*(undefined8 *)puVar5,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar7 = FUN_04de8c4c(lVar12,uVar8,*(undefined8 *)puVar1);
        if ((uVar7 & 1) == 0) {
          if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar10 = *(long *)(unaff_x19 + 0x48);
          uVar8 = *(undefined8 *)(*plVar11 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar9 = FUN_067318c0(0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f8761c(lVar10,uVar8,uVar9,*(undefined8 *)puVar3);
        }
      }
      FUN_061c1960(&stack0x00000020,
                   *(undefined8 *)
                    System_Collections_Generic_List<NetworkAnimatorStateChangeHandler_ParameterUpdate>_TypeInfo
                  );
    }
  }
  return;
}


