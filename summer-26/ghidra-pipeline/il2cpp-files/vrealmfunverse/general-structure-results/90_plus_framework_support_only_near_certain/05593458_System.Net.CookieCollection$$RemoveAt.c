/*
FUNCTION_NAME: System.Net.CookieCollection$$RemoveAt
ENTRY_POINT: 05593458
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_9;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x05595524) */

void System_Net_CookieCollection__RemoveAt(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *unaff_x25;
  undefined8 *unaff_x29;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xa80));
                    /* try { // try from 05593460 to 05693467 has its CatchHandler @ 05593690 */
  FUN_02b3c81c(EmeraldAI_EmeraldMovement_GeneratedWaypointHandler_TypeInfo);
  FUN_02b3c81c(System_Net_FtpWebRequest_<>c_TypeInfo);
  FUN_02b3c81c(System_Net_FtpWebRequest_RequestStage_TypeInfo);
  FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_get_Count__);
  FUN_02b3c81c(System_Net_FtpWebResponse_EmptyStream_TypeInfo);
  FUN_02b3c81c(
              UnityEngine_Rendering_Universal_FullScreenPassRendererFeature_FullScreenRenderPass_TypeInfo
              );
  FUN_02b3c81c(Firebase_FutureVoid_Action_TypeInfo);
  FUN_02b3c81c(Firebase_FutureVoid_SWIG_CompletionDelegate_TypeInfo);
  FUN_02b3c81c(Firebase_Auth_Future_AuthResult_<>c__DisplayClass4_0_TypeInfo);
  FUN_02b3c81c(Firebase_Auth_Future_AuthResult_Action_TypeInfo);
  FUN_02b3c81c(Firebase_Auth_Future_AuthResult_SWIG_CompletionDelegate_TypeInfo);
  FUN_02b3c81c(Firebase_Firestore_Future_DocumentSnapshot_<>c__DisplayClass4_0_TypeInfo);
  FUN_02b3c81c(Firebase_Firestore_Future_DocumentSnapshot_Action_TypeInfo);
  FUN_02b3c81c(Firebase_Firestore_Future_DocumentSnapshot_SWIG_CompletionDelegate_TypeInfo);
  FUN_02b3c81c(Firebase_Firestore_Future_FirestoreVoid_<>c__DisplayClass4_0_TypeInfo);
  FUN_02b3c81c(Firebase_Firestore_Future_FirestoreVoid_Action_TypeInfo);
  FUN_02b3c81c(Firebase_Firestore_Future_FirestoreVoid_SWIG_CompletionDelegate_TypeInfo);
  FUN_02b3c81c(System_Runtime_Fx_<>c_TypeInfo);
  FUN_02b3c81c(System_Runtime_Fx_FatalInternalException_TypeInfo);
  FUN_02b3c81c(UnityEngine_Rendering_Universal_Internal_GBufferPass_<>c_TypeInfo);
  FUN_02b3c81c(System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
              );
  FUN_02b3c81c(UnityEngine_Rendering_Universal_Internal_GBufferPass_PassData_TypeInfo);
  FUN_02b3c81c(Firebase_Firestore_Converters_EnumerableConverter_<>c_TypeInfo);
  FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__);
  FUN_02b3c81c(System_ComponentModel_EventDescriptorCollection_ArraySubsetEnumerator_TypeInfo);
  FUN_02b3c81c(UnityEngine_Rendering_GPUDrivenProcessor_<>c_TypeInfo);
  FUN_02b3c81c(UnityEngine_Rendering_GPUInstanceDataBufferGrower_CopyInstancesKernelIDs_TypeInfo);
  FUN_02b3c81c(EnvironmentChanger_<LoadEnvironmentAfterInitialFade>d__7_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x722) = 1;
  puVar8 = 
  Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__;
  puVar5 = System_ComponentModel_EventDescriptorCollection_ArraySubsetEnumerator_TypeInfo;
  uVar9 = thunk_FUN_02b79644(*unaff_x29);
  FUN_04d2e0f0(uVar9,0);
  **(undefined8 **)(*unaff_x25 + 0xb8) = uVar9;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x25 + 0xb8),uVar9);
  uVar9 = thunk_FUN_02b79644(*unaff_x29);
  FUN_04d2e0f0(uVar9,0);
  uVar9 = FUN_04d2fd18(uVar9,0);
  puVar14 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
  *puVar14 = uVar9;
  thunk_FUN_02bb0e9c(puVar14,uVar9);
  uVar9 = FUN_04d2fd18(**(undefined8 **)(*unaff_x25 + 0xb8),0);
  **(undefined8 **)(*unaff_x25 + 0xb8) = uVar9;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x25 + 0xb8),uVar9);
  puVar3 = PTR_DAT_06312310;
  lVar18 = *(long *)(PTR_DAT_06312310 + 0x28);
  plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar9 = FUN_04d8a7b0(lVar18 + 0x20,0);
  uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x28) + 0x20,0);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
  puVar5 = FruitSpawner_<>c_TypeInfo;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x2a8))(plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
    plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x38) + 0x20,0);
    uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x38) + 0x20,0);
    uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
    FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
    puVar5 = 
    UnityEngine_Rendering_Universal_FullScreenPassRendererFeature_FullScreenRenderPass_TypeInfo;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x2a8))(plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
      plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
      uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x40) + 0x20,0);
      uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x40) + 0x20,0);
      uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
      FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
      puVar5 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualCharLiftedToNull_TypeInfo;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x2a8))(plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
        plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
        uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x48) + 0x20,0);
        uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x48) + 0x20,0);
        uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
        FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
        puVar5 = Firebase_FutureVoid_Action_TypeInfo;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x2a8))(plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
          plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
          uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x50) + 0x20,0);
          uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x50) + 0x20,0);
          uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
          FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
          puVar5 = System_Runtime_Fx_<>c_TypeInfo;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x2a8))(plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
            plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
            uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x68) + 0x20,0);
            uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x68) + 0x20,0);
            uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
            FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
            puVar5 = FruitSpawner_<SpawnObjectsParallel>d__58_TypeInfo;
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x2a8))
                        (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
              plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
              uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x70) + 0x20,0);
              uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x70) + 0x20,0);
              uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
              FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
              puVar5 = Firebase_Firestore_Converters_EnumerableConverter_<>c_TypeInfo;
              if (plVar17 != (long *)0x0) {
                (**(code **)(*plVar17 + 0x2a8))
                          (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
                plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x78) + 0x20,0);
                uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x78) + 0x20,0);
                uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
                puVar5 = 
                Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo;
                if (plVar17 != (long *)0x0) {
                  (**(code **)(*plVar17 + 0x2a8))
                            (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
                  plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                  uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x80) + 0x20,0);
                  uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x80) + 0x20,0);
                  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                  FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
                  puVar4 = PTR_DAT_0632f840;
                  puVar5 = PTR_DAT_0631e428;
                  if (plVar17 != (long *)0x0) {
                    (**(code **)(*plVar17 + 0x2a8))
                              (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
                    plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                    uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                    uVar10 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                    uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                    FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar4,1,0,0);
                    puVar4 = FruitSpawner_SpawnPoint_TypeInfo;
                    puVar5 = PTR_DAT_0632ce70;
                    if (plVar17 != (long *)0x0) {
                      (**(code **)(*plVar17 + 0x2a8))
                                (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
                      plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                      uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                      uVar10 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                      uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                      FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar4,1,0,0);
                      puVar4 = OVRPlugin_OVRP_1_7_0_TypeInfo;
                      puVar5 = Firebase_FutureVoid_SWIG_CompletionDelegate_TypeInfo;
                      if (plVar17 != (long *)0x0) {
                        (**(code **)(*plVar17 + 0x2a8))
                                  (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
                        plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                        uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                        uVar10 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                        uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                        FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
                        puVar5 = PTR_DAT_06321df0;
                        if (plVar17 != (long *)0x0) {
                          (**(code **)(*plVar17 + 0x2a8))
                                    (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
                          plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                          uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                          FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
                          puVar5 = EmeraldAI_EmeraldHealth_TakeCritDamageHandler_TypeInfo;
                          if (plVar17 != (long *)0x0) {
                            (**(code **)(*plVar17 + 0x2a8))
                                      (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0));
                            lVar18 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
                            FUN_054cf8f0(lVar18,0);
                            puVar5 = PTR_DAT_06336f88;
                            if (lVar18 != 0) {
                              *(undefined8 *)(lVar18 + 0x50) =
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__
                              ;
                              thunk_FUN_02bb0e9c();
                              plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                              uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                              uVar10 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                              plVar19 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                              uVar11 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                              puVar5 = 
                              UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_BurstDirectCall_TypeInfo
                              ;
                              if (plVar19 != (long *)0x0) {
                                plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                            (plVar19,uVar11,
                                                             *(undefined8 *)(*plVar19 + 0x310));
                                uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                if (plVar19 != (long *)0x0) {
                                  lVar13 = *(long *)puVar8;
                                  if ((*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
                                     (*(long *)(*(long *)(*plVar19 + 200) +
                                                (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
                                     )) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02b3ce44(plVar19,lVar13,*(undefined8 *)puVar5);
                                  }
                                }
                                FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,plVar19,lVar18);
                                puVar5 = 
                                UnityEngine_Rendering_Universal_Internal_GBufferPass_PassData_TypeInfo
                                ;
                                if (plVar17 != (long *)0x0) {
                                  (**(code **)(*plVar17 + 0x2a8))
                                            (plVar17,uVar9,uVar11,*(undefined8 *)(*plVar17 + 0x2b0))
                                  ;
                                  plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                  uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x18) + 0x20,0);
                                  uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x18) + 0x20,0);
                                  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                  FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
                                  puVar5 = 
                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                                  ;
                                  if (plVar17 != (long *)0x0) {
                                    (**(code **)(*plVar17 + 0x2a8))
                                              (plVar17,uVar9,uVar11,
                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                    plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x30) + 0x20,0);
                                    uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x30) + 0x20,0);
                                    uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                    FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,0,0);
                                    if (plVar17 != (long *)0x0) {
                                      (**(code **)(*plVar17 + 0x2a8))
                                                (plVar17,uVar9,uVar11,
                                                 *(undefined8 *)(*plVar17 + 0x2b0));
                                      plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                      uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x88) + 0x20,0);
                                      uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x88) + 0x20,0);
                                      plVar19 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                      uVar11 = FUN_04d8a7b0(*(long *)(puVar3 + 0x40) + 0x20,0);
                                      puVar5 = 
                                      UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo;
                                      if (plVar19 != (long *)0x0) {
                                        plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                                    (plVar19,uVar11,
                                                                     *(undefined8 *)
                                                                      (*plVar19 + 0x310));
                                        uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                        if (plVar19 != (long *)0x0) {
                                          lVar18 = *(long *)puVar8;
                                          if ((*(byte *)(*plVar19 + 0x130) <
                                               *(byte *)(lVar18 + 0x130)) ||
                                             (*(long *)(*(long *)(*plVar19 + 200) +
                                                        (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8)
                                              != lVar18)) {
                    /* WARNING: Subroutine does not return */
                                            FUN_02b3ce44(plVar19,lVar18,*(undefined8 *)puVar5);
                                          }
                                        }
                                        FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,1,plVar19,0
                                                    );
                                        puVar5 = 
                                        Firebase_Auth_Future_AuthResult_<>c__DisplayClass4_0_TypeInfo
                                        ;
                                        if (plVar17 != (long *)0x0) {
                                          (**(code **)(*plVar17 + 0x2a8))
                                                    (plVar17,uVar9,uVar11,
                                                     *(undefined8 *)(*plVar17 + 0x2b0));
                                          plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                          uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x10) + 0x20,0);
                                          uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x10) + 0x20,0);
                                          uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                          FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar5,0,0,0);
                                          puVar4 = 
                                          EmeraldAI_EmeraldMovement_GeneratedWaypointHandler_TypeInfo
                                          ;
                                          puVar5 = PTR_DAT_0631e400;
                                          if (plVar17 != (long *)0x0) {
                                            (**(code **)(*plVar17 + 0x2a8))
                                                      (plVar17,uVar9,uVar11,
                                                       *(undefined8 *)(*plVar17 + 0x2b0));
                                            plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                            uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                            uVar10 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                            uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                            FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar4,1,0,0);
                                            puVar4 = 
                                            Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_get_Count__
                                            ;
                                            puVar5 = 
                                            System_Collections_Generic_GenericComparer<T>_var;
                                            if (plVar17 != (long *)0x0) {
                                              (**(code **)(*plVar17 + 0x2a8))
                                                        (plVar17,uVar9,uVar11,
                                                         *(undefined8 *)(*plVar17 + 0x2b0));
                                              plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8)
                                              ;
                                              uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                              uVar10 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                              uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                              FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar4,0,0,0
                                                          );
                                              puVar4 = 
                                              Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                              ;
                                              puVar5 = 
                                              UnityEngine_InputSystem_LowLevel_GamepadButton_var;
                                              if (plVar17 != (long *)0x0) {
                                                (**(code **)(*plVar17 + 0x2a8))
                                                          (plVar17,uVar9,uVar11,
                                                           *(undefined8 *)(*plVar17 + 0x2b0));
                                                plVar17 = (long *)**(undefined8 **)
                                                                    (*unaff_x25 + 0xb8);
                                                uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                                uVar10 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                                uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                                FUN_05590c4c(uVar11,uVar10,*(undefined8 *)puVar4,0,0
                                                             ,0);
                                                if (plVar17 != (long *)0x0) {
                                                  (**(code **)(*plVar17 + 0x2a8))
                                                            (plVar17,uVar9,uVar11,
                                                             *(undefined8 *)(*plVar17 + 0x2b0));
                                                  uVar9 = thunk_FUN_02b79644(*unaff_x29);
                                                  FUN_04d2e0f0(uVar9,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 8);
                                                  *puVar14 = uVar9;
                                                  thunk_FUN_02bb0e9c(puVar14,uVar9);
                                                  plVar17 = (long *)**(long **)(*unaff_x25 + 0xb8);
                                                  if ((plVar17 != (long *)0x0) &&
                                                     (plVar17 = (long *)(**(code **)(*plVar17 +
                                                                                    0x398))(plVar17,
                                                  *(undefined8 *)(*plVar17 + 0x3a0)),
                                                  plVar17 != (long *)0x0)) {
                                                    lVar18 = *plVar17;
                                                    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                    if (uVar15 != 0) {
                                                      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar16 + -2) ==
                                                            *(long *)PTR_DAT_0631a670) {
                                                          puVar14 = (undefined8 *)
                                                                    (lVar18 + (long)*piVar16 * 0x10
                                                                    + 0x138);
                                                          goto LAB_05594324;
                                                        }
                                                        uVar15 = uVar15 - 1;
                                                        piVar16 = piVar16 + 4;
                                                      } while (uVar15 != 0);
                                                    }
                                                    puVar14 = (undefined8 *)
                                                              FUN_02b7654c(plVar17,*(long *)
                                                  PTR_DAT_0631a670,0);
LAB_05594324:
                                                  puVar7 = 
                                                  Firebase_Auth_Future_AuthResult_SWIG_CompletionDelegate_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualDouble_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_06324818;
                                                  puVar5 = PTR_DAT_06312f90;
                                                  plVar17 = (long *)(*(code *)*puVar14)(plVar17,
                                                  puVar14[1]);
                                                  do {
                                                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                      FUN_02b3cac4();
                                                    }
                                                    lVar18 = *plVar17;
                                                    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                    if (uVar15 != 0) {
                                                      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar16 + -2) ==
                                                            *(long *)puVar5) {
                                                          puVar14 = (undefined8 *)
                                                                    (lVar18 + (long)*piVar16 * 0x10
                                                                    + 0x138);
                                                          goto LAB_055943b8;
                                                        }
                                                        uVar15 = uVar15 - 1;
                                                        piVar16 = piVar16 + 4;
                                                      } while (uVar15 != 0);
                                                    }
                                                    puVar14 = (undefined8 *)
                                                              FUN_02b7654c(plVar17,*(long *)puVar5,0
                                                                          );
LAB_055943b8:
                                                    uVar15 = (*(code *)*puVar14)(plVar17,puVar14[1])
                                                    ;
                                                    if ((uVar15 & 1) == 0) {
                                                      plVar17 = (long *)thunk_FUN_02b79548(plVar17,*
                                                  (undefined8 *)PTR_DAT_06312f78);
                                                  if (plVar17 == (long *)0x0) goto LAB_05594514;
                                                  lVar18 = *plVar17;
                                                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                  if (uVar15 == 0) goto LAB_055944ec;
                                                  piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                                  goto LAB_055944d4;
                                                  }
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar18 = *plVar17;
                                                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                  if (uVar15 != 0) {
                                                    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar16 + -2) == *(long *)puVar5
                                                         ) {
                                                        puVar14 = (undefined8 *)
                                                                  (lVar18 + (long)(*piVar16 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_05594420;
                                                      }
                                                      uVar15 = uVar15 - 1;
                                                      piVar16 = piVar16 + 4;
                                                    } while (uVar15 != 0);
                                                  }
                                                  puVar14 = (undefined8 *)
                                                            FUN_02b7654c(plVar17,*(long *)puVar5,1);
LAB_05594420:
                                                  plVar19 = (long *)(*(code *)*puVar14)(plVar17,
                                                  puVar14[1]);
                                                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
                                                  if ((*(byte *)(*plVar19 + 0x130) < bVar2) ||
                                                     (*(long *)(*(long *)(*plVar19 + 200) +
                                                                (ulong)bVar2 * 8 + -8) !=
                                                      *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3ce44(plVar19);
                                                  }
                                                  plVar12 = *(long **)(*(long *)(*unaff_x25 + 0xb8)
                                                                      + 8);
                                                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  (**(code **)(*plVar12 + 0x2a8))
                                                            (plVar12,plVar19[3],plVar19,
                                                             *(undefined8 *)(*plVar12 + 0x2b0));
                                                  } while( true );
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_055954f4;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_05595484:
    if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
      puVar14 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_055954b8;
    }
  }
LAB_0559549c:
  puVar14 = (undefined8 *)FUN_02b7654c(plVar17,*(long *)puVar4,0);
LAB_055954b8:
  (*(code *)*puVar14)(plVar17,puVar14[1]);
  return;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_055944d4:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar14 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05594508;
    }
  }
LAB_055944ec:
  puVar14 = (undefined8 *)FUN_02b7654c(plVar17,*(long *)PTR_DAT_06312f78,0);
LAB_05594508:
  (*(code *)*puVar14)(plVar17,puVar14[1]);
LAB_05594514:
  plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
  uVar9 = *(undefined8 *)PTR_DAT_0631e428;
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar9 = FUN_04d8a7b0(uVar9,0);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar6,1,0,0);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x2a8))
              (plVar17,*(undefined8 *)puVar6,uVar10,*(undefined8 *)(*plVar17 + 0x2b0));
    puVar6 = PTR_DAT_0631e428;
    plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
    uVar9 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e428,0);
    uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
    FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar4,1,0,0);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x2a8))
                (plVar17,*(undefined8 *)puVar4,uVar10,*(undefined8 *)(*plVar17 + 0x2b0));
      plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
      uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar6,0);
      uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
      puVar4 = Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__;
      FUN_05590c4c(uVar10,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__,1,
                   0,0);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x2a8))
                  (plVar17,*(undefined8 *)puVar4,uVar10,*(undefined8 *)(*plVar17 + 0x2b0));
        plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
        uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
        uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
        FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar7,1,0,0);
        puVar4 = UnityEngine_Rendering_Universal_Internal_GBufferPass_<>c_TypeInfo;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x2a8))
                    (plVar17,*(undefined8 *)puVar7,uVar10,*(undefined8 *)(*plVar17 + 0x2b0));
          plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
          uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
          uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
          puVar7 = Firebase_Firestore_Future_FirestoreVoid_SWIG_CompletionDelegate_TypeInfo;
          FUN_05590c4c(uVar10,uVar9,
                       *(undefined8 *)
                        Firebase_Firestore_Future_FirestoreVoid_SWIG_CompletionDelegate_TypeInfo,1,0
                       ,0);
          puVar6 = PTR_DAT_0632efb0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x2a8))
                      (plVar17,*(undefined8 *)puVar7,uVar10,*(undefined8 *)(*plVar17 + 0x2b0));
            plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
            uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
            uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
            puVar7 = Firebase_Auth_Future_AuthResult_Action_TypeInfo;
            FUN_05590c4c(uVar10,uVar9,*(undefined8 *)Firebase_Auth_Future_AuthResult_Action_TypeInfo
                         ,1,0,0);
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x2a8))
                        (plVar17,*(undefined8 *)puVar7,uVar10,*(undefined8 *)(*plVar17 + 0x2b0));
              plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
              uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
              uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
              FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar4,1,0,0);
              if (plVar17 != (long *)0x0) {
                (**(code **)(*plVar17 + 0x2a8))
                          (plVar17,*(undefined8 *)puVar4,uVar10,*(undefined8 *)(*plVar17 + 0x2b0));
                plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                uVar9 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e428,0);
                uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar6,1,0,0);
                if (plVar17 != (long *)0x0) {
                  (**(code **)(*plVar17 + 0x2a8))
                            (plVar17,*(undefined8 *)puVar6,uVar10,*(undefined8 *)(*plVar17 + 0x2b0))
                  ;
                  plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                  uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                  puVar4 = FruitSpawner_<SpawnRoutine>d__57_TypeInfo;
                  FUN_05590c4c(uVar10,uVar9,*(undefined8 *)FruitSpawner_<SpawnRoutine>d__57_TypeInfo
                               ,1,0,0);
                  puVar7 = Firebase_Firestore_Future_FirestoreVoid_<>c__DisplayClass4_0_TypeInfo;
                  puVar6 = FruitSpawner_GameModeSettings_TypeInfo;
                  if (plVar17 != (long *)0x0) {
                    (**(code **)(*plVar17 + 0x2a8))
                              (plVar17,*(undefined8 *)puVar4,uVar10,
                               *(undefined8 *)(*plVar17 + 0x2b0));
                    plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                    uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                    puVar4 = System_Runtime_Fx_FatalInternalException_TypeInfo;
                    FUN_05590c4c(uVar10,uVar9,
                                 *(undefined8 *)System_Runtime_Fx_FatalInternalException_TypeInfo,1,
                                 0,0);
                    if (plVar17 != (long *)0x0) {
                      (**(code **)(*plVar17 + 0x2a8))
                                (plVar17,*(undefined8 *)puVar4,uVar10,
                                 *(undefined8 *)(*plVar17 + 0x2b0));
                      plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                      uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                      uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                      puVar4 = PTR_DAT_0632a918;
                      FUN_05590c4c(uVar10,uVar9,*(undefined8 *)PTR_DAT_0632a918,1,0,0);
                      if (plVar17 != (long *)0x0) {
                        (**(code **)(*plVar17 + 0x2a8))
                                  (plVar17,*(undefined8 *)puVar4,uVar10,
                                   *(undefined8 *)(*plVar17 + 0x2b0));
                        plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                        uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                        uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                        FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar6,1,0,0);
                        puVar4 = PTR_DAT_0631e400;
                        if (plVar17 != (long *)0x0) {
                          (**(code **)(*plVar17 + 0x2a8))
                                    (plVar17,*(undefined8 *)puVar6,uVar10,
                                     *(undefined8 *)(*plVar17 + 0x2b0));
                          plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                          uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                          puVar6 = Firebase_Firestore_Future_FirestoreVoid_Action_TypeInfo;
                          FUN_05590c4c(uVar10,uVar9,
                                       *(undefined8 *)
                                        Firebase_Firestore_Future_FirestoreVoid_Action_TypeInfo,1,0,
                                       0);
                          if (plVar17 != (long *)0x0) {
                            (**(code **)(*plVar17 + 0x2a8))
                                      (plVar17,*(undefined8 *)puVar6,uVar10,
                                       *(undefined8 *)(*plVar17 + 0x2b0));
                            plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                            uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                            uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                            puVar6 = 
                            Firebase_Firestore_Future_DocumentSnapshot_<>c__DisplayClass4_0_TypeInfo
                            ;
                            FUN_05590c4c(uVar10,uVar9,
                                         *(undefined8 *)
                                          Firebase_Firestore_Future_DocumentSnapshot_<>c__DisplayClass4_0_TypeInfo
                                         ,1,0,0);
                            if (plVar17 != (long *)0x0) {
                              (**(code **)(*plVar17 + 0x2a8))
                                        (plVar17,*(undefined8 *)puVar6,uVar10,
                                         *(undefined8 *)(*plVar17 + 0x2b0));
                              plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                              uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                              uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                              puVar6 = FruitSpawner_<MonitorTrajectory>d__66_TypeInfo;
                              FUN_05590c4c(uVar10,uVar9,
                                           *(undefined8 *)
                                            FruitSpawner_<MonitorTrajectory>d__66_TypeInfo,1,0,0);
                              if (plVar17 != (long *)0x0) {
                                (**(code **)(*plVar17 + 0x2a8))
                                          (plVar17,*(undefined8 *)puVar6,uVar10,
                                           *(undefined8 *)(*plVar17 + 0x2b0));
                                plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                puVar6 = FruitSpawner_<AnimateSpawnScale>d__65_TypeInfo;
                                FUN_05590c4c(uVar10,uVar9,
                                             *(undefined8 *)
                                              FruitSpawner_<AnimateSpawnScale>d__65_TypeInfo,1,0,0);
                                if (plVar17 != (long *)0x0) {
                                  (**(code **)(*plVar17 + 0x2a8))
                                            (plVar17,*(undefined8 *)puVar6,uVar10,
                                             *(undefined8 *)(*plVar17 + 0x2b0));
                                  plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                  uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                  FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar7,1,0,0);
                                  if (plVar17 != (long *)0x0) {
                                    (**(code **)(*plVar17 + 0x2a8))
                                              (plVar17,*(undefined8 *)puVar7,uVar10,
                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                    plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                    uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                    puVar6 = 
                                    Firebase_Firestore_Future_DocumentSnapshot_Action_TypeInfo;
                                    FUN_05590c4c(uVar10,uVar9,
                                                 *(undefined8 *)
                                                  Firebase_Firestore_Future_DocumentSnapshot_Action_TypeInfo
                                                 ,1,0,0);
                                    if (plVar17 != (long *)0x0) {
                                      (**(code **)(*plVar17 + 0x2a8))
                                                (plVar17,*(undefined8 *)puVar6,uVar10,
                                                 *(undefined8 *)(*plVar17 + 0x2b0));
                                      plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                      uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                      uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                      puVar6 = UnityEngine_Rendering_GPUDrivenProcessor_<>c_TypeInfo
                                      ;
                                      FUN_05590c4c(uVar10,uVar9,
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_Rendering_GPUDrivenProcessor_<>c_TypeInfo
                                                  ,1,0,0);
                                      if (plVar17 != (long *)0x0) {
                                        (**(code **)(*plVar17 + 0x2a8))
                                                  (plVar17,*(undefined8 *)puVar6,uVar10,
                                                   *(undefined8 *)(*plVar17 + 0x2b0));
                                        plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                        uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                        uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                        puVar6 = 
                                        Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                                        ;
                                        FUN_05590c4c(uVar10,uVar9,
                                                     *(undefined8 *)
                                                                                                            
                                                  Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                                                  ,1,0,0);
                                        if (plVar17 != (long *)0x0) {
                                          (**(code **)(*plVar17 + 0x2a8))
                                                    (plVar17,*(undefined8 *)puVar6,uVar10,
                                                     *(undefined8 *)(*plVar17 + 0x2b0));
                                          plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                          uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                          uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                          puVar6 = System_Net_FtpWebRequest_<>c_TypeInfo;
                                          FUN_05590c4c(uVar10,uVar9,
                                                       *(undefined8 *)
                                                        System_Net_FtpWebRequest_<>c_TypeInfo,1,0,0)
                                          ;
                                          if (plVar17 != (long *)0x0) {
                                            (**(code **)(*plVar17 + 0x2a8))
                                                      (plVar17,*(undefined8 *)puVar6,uVar10,
                                                       *(undefined8 *)(*plVar17 + 0x2b0));
                                            plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                            uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                            uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                            puVar6 = 
                                            UnityEngine_Rendering_GPUInstanceDataBufferGrower_CopyInstancesKernelIDs_TypeInfo
                                            ;
                                            FUN_05590c4c(uVar10,uVar9,
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_GPUInstanceDataBufferGrower_CopyInstancesKernelIDs_TypeInfo
                                                  ,1,0,0);
                                            if (plVar17 != (long *)0x0) {
                                              (**(code **)(*plVar17 + 0x2a8))
                                                        (plVar17,*(undefined8 *)puVar6,uVar10,
                                                         *(undefined8 *)(*plVar17 + 0x2b0));
                                              plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8)
                                              ;
                                              uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0
                                                                  );
                                              uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                              puVar6 = FruitSpawner_DifficultyLevelSettings_TypeInfo
                                              ;
                                              FUN_05590c4c(uVar10,uVar9,
                                                           *(undefined8 *)
                                                                                                                        
                                                  FruitSpawner_DifficultyLevelSettings_TypeInfo,1,0,
                                                  0);
                                              if (plVar17 != (long *)0x0) {
                                                (**(code **)(*plVar17 + 0x2a8))
                                                          (plVar17,*(undefined8 *)puVar6,uVar10,
                                                           *(undefined8 *)(*plVar17 + 0x2b0));
                                                plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8) +
                                                                    8);
                                                uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20
                                                                     ,0);
                                                uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                                puVar6 = 
                                                System_Net_FtpControlStream_<>c__DisplayClass31_0_TypeInfo
                                                ;
                                                FUN_05590c4c(uVar10,uVar9,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Net_FtpControlStream_<>c__DisplayClass31_0_TypeInfo
                                                  ,1,0,0);
                                                if (plVar17 != (long *)0x0) {
                                                  (**(code **)(*plVar17 + 0x2a8))
                                                            (plVar17,*(undefined8 *)puVar6,uVar10,
                                                             *(undefined8 *)(*plVar17 + 0x2b0));
                                                  plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8)
                                                                      + 8);
                                                  uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) +
                                                                       0x20,0);
                                                  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  puVar6 = 
                                                  EmeraldAI_EmeraldInverseKinematics_<>c__DisplayClass31_0_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar10,uVar9,
                                                               *(undefined8 *)
                                                                                                                                
                                                  EmeraldAI_EmeraldInverseKinematics_<>c__DisplayClass31_0_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar17 != (long *)0x0) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar6,uVar10,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) +
                                                                         0x20,0);
                                                    uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                 puVar8);
                                                    puVar6 = PTR_DAT_06336d20;
                                                    FUN_05590c4c(uVar10,uVar9,
                                                                 *(undefined8 *)PTR_DAT_06336d20,1,0
                                                                 ,0);
                                                    if (plVar17 != (long *)0x0) {
                                                      (**(code **)(*plVar17 + 0x2a8))
                                                                (plVar17,*(undefined8 *)puVar6,
                                                                 uVar10,*(undefined8 *)
                                                                         (*plVar17 + 0x2b0));
                                                      plVar17 = *(long **)(*(long *)(*unaff_x25 +
                                                                                    0xb8) + 8);
                                                      uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90)
                                                                           + 0x20,0);
                                                      uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                   puVar8);
                                                      puVar6 = 
                                                  System_Net_FtpWebRequest_RequestStage_TypeInfo;
                                                  FUN_05590c4c(uVar10,uVar9,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Net_FtpWebRequest_RequestStage_TypeInfo,1,0
                                                  ,0);
                                                  if (plVar17 != (long *)0x0) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar6,uVar10,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) +
                                                                         0x20,0);
                                                    uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                 puVar8);
                                                    puVar6 = 
                                                  Firebase_Firestore_Future_DocumentSnapshot_SWIG_CompletionDelegate_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar10,uVar9,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Firebase_Firestore_Future_DocumentSnapshot_SWIG_CompletionDelegate_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar17 != (long *)0x0) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar6,uVar10,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                                    uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                 puVar8);
                                                    puVar4 = 
                                                  EnvironmentChanger_<LoadEnvironmentAfterInitialFade>d__7_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar10,uVar9,
                                                               *(undefined8 *)
                                                                                                                                
                                                  EnvironmentChanger_<LoadEnvironmentAfterInitialFade>d__7_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar17 != (long *)0x0) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar4,uVar10,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) +
                                                                         0x20,0);
                                                    uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                 puVar8);
                                                    puVar3 = 
                                                  System_Net_FtpWebResponse_EmptyStream_TypeInfo;
                                                  FUN_05590c4c(uVar10,uVar9,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Net_FtpWebResponse_EmptyStream_TypeInfo,1,0
                                                  ,0);
                                                  if (plVar17 != (long *)0x0) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar3,uVar10,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    uVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                PTR_DAT_0632ba48);
                                                    FUN_04d2e0f0(uVar9,0);
                                                    uVar9 = FUN_04d2fd18(uVar9,0);
                                                    puVar14 = (undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                    *puVar14 = uVar9;
                                                    thunk_FUN_02bb0e9c(puVar14,uVar9);
                                                    puVar3 = PTR_DAT_06322660;
                                                    plVar17 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    if (plVar17 != (long *)0x0) {
                                                      plVar17 = (long *)(**(code **)(*plVar17 +
                                                                                    0x328))(plVar17,
                                                  *(undefined8 *)(*plVar17 + 0x330));
                                                  do {
                                                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                      FUN_02b3cac4();
                                                    }
                                                    lVar18 = *plVar17;
                                                    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                    if (uVar15 != 0) {
                                                      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar16 + -2) ==
                                                            *(long *)puVar5) {
                                                          puVar14 = (undefined8 *)
                                                                    (lVar18 + (long)*piVar16 * 0x10
                                                                    + 0x138);
                                                          goto LAB_05595314;
                                                        }
                                                        uVar15 = uVar15 - 1;
                                                        piVar16 = piVar16 + 4;
                                                      } while (uVar15 != 0);
                                                    }
                                                    puVar14 = (undefined8 *)
                                                              FUN_02b7654c(plVar17,*(long *)puVar5,0
                                                                          );
LAB_05595314:
                                                    uVar15 = (*(code *)*puVar14)(plVar17,puVar14[1])
                                                    ;
                                                    puVar4 = PTR_DAT_06312f78;
                                                    if ((uVar15 & 1) == 0) {
                                                      plVar17 = (long *)thunk_FUN_02b79548(plVar17,*
                                                  (undefined8 *)PTR_DAT_06312f78);
                                                  if (plVar17 == (long *)0x0) {
                                                    return;
                                                  }
                                                  lVar18 = *plVar17;
                                                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                  if (uVar15 == 0) goto LAB_0559549c;
                                                  piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                                  goto LAB_05595484;
                                                  }
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar18 = *plVar17;
                                                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                  if (uVar15 != 0) {
                                                    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar16 + -2) == *(long *)puVar5
                                                         ) {
                                                        puVar14 = (undefined8 *)
                                                                  (lVar18 + (long)(*piVar16 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_0559537c;
                                                      }
                                                      uVar15 = uVar15 - 1;
                                                      piVar16 = piVar16 + 4;
                                                    } while (uVar15 != 0);
                                                  }
                                                  puVar14 = (undefined8 *)
                                                            FUN_02b7654c(plVar17,*(long *)puVar5,1);
LAB_0559537c:
                                                  plVar19 = (long *)(*(code *)*puVar14)(plVar17,
                                                  puVar14[1]);
                                                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  if (*(long *)(*plVar19 + 0x40) !=
                                                      *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3ce44();
                                                  }
                                                  puVar14 = (undefined8 *)thunk_FUN_02b7978c();
                                                  plVar19 = (long *)puVar14[1];
                                                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar18 = *(long *)puVar8;
                                                  if ((*(byte *)(*plVar19 + 0x130) <
                                                       *(byte *)(lVar18 + 0x130)) ||
                                                     (*(long *)(*(long *)(*plVar19 + 200) +
                                                                (ulong)*(byte *)(lVar18 + 0x130) * 8
                                                               + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3ce44();
                                                  }
                                                  lVar13 = plVar19[2];
                                                  lVar1 = plVar19[3];
                                                  uVar9 = *puVar14;
                                                  lVar18 = thunk_FUN_02b79644(lVar18);
                                                  FUN_05590c4c(lVar18,lVar13,lVar1,1,0,0);
                                                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar13 = *unaff_x25;
                                                  *(undefined1 *)(lVar18 + 0x61) = 1;
                                                  plVar19 = *(long **)(*(long *)(lVar13 + 0xb8) +
                                                                      0x18);
                                                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  (**(code **)(*plVar19 + 0x2a8))
                                                            (plVar19,uVar9,lVar18,
                                                             *(undefined8 *)(*plVar19 + 0x2b0));
                                                  } while( true );
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_055954f4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


