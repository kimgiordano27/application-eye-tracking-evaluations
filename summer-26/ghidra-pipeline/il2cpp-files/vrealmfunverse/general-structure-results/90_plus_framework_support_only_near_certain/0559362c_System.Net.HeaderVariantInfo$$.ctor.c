/*
FUNCTION_NAME: System.Net.HeaderVariantInfo$$.ctor
ENTRY_POINT: 0559362c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05595524) */

void System_Net_HeaderVariantInfo___ctor(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 *unaff_x21;
  long *plVar18;
  long *unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x29;
  
                    /* catch() { ... } // from try @ 05592be8 with catch @ 0559362c */
  *(undefined8 *)(param_1 + 0x10) = param_2;
                    /* try { // try from 05593630 to 05693637 has its CatchHandler @ 055937ac */
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x10));
                    /* try { // try from 05593638 to 056936ef has its CatchHandler @ 055923c8 */
                    /* catch() { ... } // from try @ 055931d0 with catch @ 05593640 */
                    /* catch() { ... } // from try @ 055931e4 with catch @ 05593644 */
                    /* catch() { ... } // from try @ 05593180 with catch @ 05593648 */
  uVar8 = FUN_04d2fd18(**(undefined8 **)(*unaff_x25 + 0xb8),0);
                    /* catch() { ... } // from try @ 055934ac with catch @ 0559364c */
                    /* catch() { ... } // from try @ 055934c0 with catch @ 05593650 */
  **(undefined8 **)(*unaff_x25 + 0xb8) = uVar8;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x25 + 0xb8),uVar8);
  puVar3 = PTR_DAT_06312310;
  lVar17 = *(long *)(PTR_DAT_06312310 + 0x28);
  plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_04d8a7b0(lVar17 + 0x20,0);
  uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x28) + 0x20,0);
  uVar10 = thunk_FUN_02b79644(*unaff_x27);
  FUN_05590c4c(uVar10,uVar9,*unaff_x21,1,0,0);
  puVar5 = FruitSpawner_<>c_TypeInfo;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
    plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
    uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x38) + 0x20,0);
    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x38) + 0x20,0);
    uVar10 = thunk_FUN_02b79644(*unaff_x27);
    FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
    puVar5 = 
    UnityEngine_Rendering_Universal_FullScreenPassRendererFeature_FullScreenRenderPass_TypeInfo;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
      plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
      uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x40) + 0x20,0);
      uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x40) + 0x20,0);
      uVar10 = thunk_FUN_02b79644(*unaff_x27);
      FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
      puVar5 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualCharLiftedToNull_TypeInfo;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
        plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
        uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x48) + 0x20,0);
        uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x48) + 0x20,0);
        uVar10 = thunk_FUN_02b79644(*unaff_x27);
        FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
        puVar5 = Firebase_FutureVoid_Action_TypeInfo;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
          plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
          uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x50) + 0x20,0);
          uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x50) + 0x20,0);
          uVar10 = thunk_FUN_02b79644(*unaff_x27);
          FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
          puVar5 = System_Runtime_Fx_<>c_TypeInfo;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
            plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
            uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x68) + 0x20,0);
            uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x68) + 0x20,0);
            uVar10 = thunk_FUN_02b79644(*unaff_x27);
            FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
            puVar5 = FruitSpawner_<SpawnObjectsParallel>d__58_TypeInfo;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x2a8))
                        (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
              plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
              uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x70) + 0x20,0);
              uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x70) + 0x20,0);
              uVar10 = thunk_FUN_02b79644(*unaff_x27);
              FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
              puVar5 = Firebase_Firestore_Converters_EnumerableConverter_<>c_TypeInfo;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0x2a8))
                          (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
                plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x78) + 0x20,0);
                uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x78) + 0x20,0);
                uVar10 = thunk_FUN_02b79644(*unaff_x27);
                FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
                puVar5 = 
                Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo;
                if (plVar16 != (long *)0x0) {
                  (**(code **)(*plVar16 + 0x2a8))
                            (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
                  plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                  uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x80) + 0x20,0);
                  uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x80) + 0x20,0);
                  uVar10 = thunk_FUN_02b79644(*unaff_x27);
                  FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
                  puVar4 = PTR_DAT_0632f840;
                  puVar5 = PTR_DAT_0631e428;
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 0x2a8))
                              (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
                    plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                    uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                    uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                    uVar10 = thunk_FUN_02b79644(*unaff_x27);
                    FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar4,1,0,0);
                    puVar4 = FruitSpawner_SpawnPoint_TypeInfo;
                    puVar5 = PTR_DAT_0632ce70;
                    if (plVar16 != (long *)0x0) {
                      (**(code **)(*plVar16 + 0x2a8))
                                (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
                      plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                      uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                      uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                      uVar10 = thunk_FUN_02b79644(*unaff_x27);
                      FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar4,1,0,0);
                      puVar4 = OVRPlugin_OVRP_1_7_0_TypeInfo;
                      puVar5 = Firebase_FutureVoid_SWIG_CompletionDelegate_TypeInfo;
                      if (plVar16 != (long *)0x0) {
                        (**(code **)(*plVar16 + 0x2a8))
                                  (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
                        plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                        uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                        uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                        uVar10 = thunk_FUN_02b79644(*unaff_x27);
                        FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
                        puVar5 = PTR_DAT_06321df0;
                        if (plVar16 != (long *)0x0) {
                          (**(code **)(*plVar16 + 0x2a8))
                                    (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
                          plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                          uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar10 = thunk_FUN_02b79644(*unaff_x27);
                          FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
                          puVar5 = EmeraldAI_EmeraldHealth_TakeCritDamageHandler_TypeInfo;
                          if (plVar16 != (long *)0x0) {
                            (**(code **)(*plVar16 + 0x2a8))
                                      (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0));
                            lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
                            FUN_054cf8f0(lVar17,0);
                            puVar5 = PTR_DAT_06336f88;
                            if (lVar17 != 0) {
                              *(undefined8 *)(lVar17 + 0x50) =
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__
                              ;
                              thunk_FUN_02bb0e9c();
                              plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                              uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                              uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                              plVar18 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                              uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                              puVar5 = 
                              UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_BurstDirectCall_TypeInfo
                              ;
                              if (plVar18 != (long *)0x0) {
                                plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                                            (plVar18,uVar10,
                                                             *(undefined8 *)(*plVar18 + 0x310));
                                uVar10 = thunk_FUN_02b79644(*unaff_x27);
                                if (plVar18 != (long *)0x0) {
                                  lVar13 = *unaff_x27;
                                  if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
                                     (*(long *)(*(long *)(*plVar18 + 200) +
                                                (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
                                     )) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02b3ce44(plVar18,lVar13,*(undefined8 *)puVar5);
                                  }
                                }
                                FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,plVar18,lVar17);
                                puVar5 = 
                                UnityEngine_Rendering_Universal_Internal_GBufferPass_PassData_TypeInfo
                                ;
                                if (plVar16 != (long *)0x0) {
                                  (**(code **)(*plVar16 + 0x2a8))
                                            (plVar16,uVar8,uVar10,*(undefined8 *)(*plVar16 + 0x2b0))
                                  ;
                                  plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                  uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x18) + 0x20,0);
                                  uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x18) + 0x20,0);
                                  uVar10 = thunk_FUN_02b79644(*unaff_x27);
                                  FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
                                  puVar5 = 
                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                                  ;
                                  if (plVar16 != (long *)0x0) {
                                    (**(code **)(*plVar16 + 0x2a8))
                                              (plVar16,uVar8,uVar10,
                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                    plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                    uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x30) + 0x20,0);
                                    uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x30) + 0x20,0);
                                    uVar10 = thunk_FUN_02b79644(*unaff_x27);
                                    FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,0,0);
                                    if (plVar16 != (long *)0x0) {
                                      (**(code **)(*plVar16 + 0x2a8))
                                                (plVar16,uVar8,uVar10,
                                                 *(undefined8 *)(*plVar16 + 0x2b0));
                                      plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                      uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x88) + 0x20,0);
                                      uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x88) + 0x20,0);
                                      plVar18 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                      uVar10 = FUN_04d8a7b0(*(long *)(puVar3 + 0x40) + 0x20,0);
                                      puVar5 = 
                                      UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo;
                                      if (plVar18 != (long *)0x0) {
                                        plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                                                    (plVar18,uVar10,
                                                                     *(undefined8 *)
                                                                      (*plVar18 + 0x310));
                                        uVar10 = thunk_FUN_02b79644(*unaff_x27);
                                        if (plVar18 != (long *)0x0) {
                                          lVar17 = *unaff_x27;
                                          if ((*(byte *)(*plVar18 + 0x130) <
                                               *(byte *)(lVar17 + 0x130)) ||
                                             (*(long *)(*(long *)(*plVar18 + 200) +
                                                        (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                                              != lVar17)) {
                    /* WARNING: Subroutine does not return */
                                            FUN_02b3ce44(plVar18,lVar17,*(undefined8 *)puVar5);
                                          }
                                        }
                                        FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,1,plVar18,0)
                                        ;
                                        puVar5 = 
                                        Firebase_Auth_Future_AuthResult_<>c__DisplayClass4_0_TypeInfo
                                        ;
                                        if (plVar16 != (long *)0x0) {
                                          (**(code **)(*plVar16 + 0x2a8))
                                                    (plVar16,uVar8,uVar10,
                                                     *(undefined8 *)(*plVar16 + 0x2b0));
                                          plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                          uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x10) + 0x20,0);
                                          uVar9 = FUN_04d8a7b0(*(long *)(puVar3 + 0x10) + 0x20,0);
                                          uVar10 = thunk_FUN_02b79644(*unaff_x27);
                                          FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar5,0,0,0);
                                          puVar4 = 
                                          EmeraldAI_EmeraldMovement_GeneratedWaypointHandler_TypeInfo
                                          ;
                                          puVar5 = PTR_DAT_0631e400;
                                          if (plVar16 != (long *)0x0) {
                                            (**(code **)(*plVar16 + 0x2a8))
                                                      (plVar16,uVar8,uVar10,
                                                       *(undefined8 *)(*plVar16 + 0x2b0));
                                            plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                            uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                            uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                            uVar10 = thunk_FUN_02b79644(*unaff_x27);
                                            FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar4,1,0,0);
                                            puVar4 = 
                                            Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_get_Count__
                                            ;
                                            puVar5 = 
                                            System_Collections_Generic_GenericComparer<T>_var;
                                            if (plVar16 != (long *)0x0) {
                                              (**(code **)(*plVar16 + 0x2a8))
                                                        (plVar16,uVar8,uVar10,
                                                         *(undefined8 *)(*plVar16 + 0x2b0));
                                              plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8)
                                              ;
                                              uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                              uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                              uVar10 = thunk_FUN_02b79644(*unaff_x27);
                                              FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar4,0,0,0)
                                              ;
                                              puVar4 = 
                                              Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                              ;
                                              puVar5 = 
                                              UnityEngine_InputSystem_LowLevel_GamepadButton_var;
                                              if (plVar16 != (long *)0x0) {
                                                (**(code **)(*plVar16 + 0x2a8))
                                                          (plVar16,uVar8,uVar10,
                                                           *(undefined8 *)(*plVar16 + 0x2b0));
                                                plVar16 = (long *)**(undefined8 **)
                                                                    (*unaff_x25 + 0xb8);
                                                uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                                uVar9 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                                uVar10 = thunk_FUN_02b79644(*unaff_x27);
                                                FUN_05590c4c(uVar10,uVar9,*(undefined8 *)puVar4,0,0,
                                                             0);
                                                if (plVar16 != (long *)0x0) {
                                                  (**(code **)(*plVar16 + 0x2a8))
                                                            (plVar16,uVar8,uVar10,
                                                             *(undefined8 *)(*plVar16 + 0x2b0));
                                                  uVar8 = thunk_FUN_02b79644(*unaff_x29);
                                                  FUN_04d2e0f0(uVar8,0);
                                                  puVar11 = (undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 8);
                                                  *puVar11 = uVar8;
                                                  thunk_FUN_02bb0e9c(puVar11,uVar8);
                                                  plVar16 = (long *)**(long **)(*unaff_x25 + 0xb8);
                                                  if ((plVar16 != (long *)0x0) &&
                                                     (plVar16 = (long *)(**(code **)(*plVar16 +
                                                                                    0x398))(plVar16,
                                                  *(undefined8 *)(*plVar16 + 0x3a0)),
                                                  plVar16 != (long *)0x0)) {
                                                    lVar17 = *plVar16;
                                                    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                    if (uVar14 != 0) {
                                                      piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar15 + -2) ==
                                                            *(long *)PTR_DAT_0631a670) {
                                                          puVar11 = (undefined8 *)
                                                                    (lVar17 + (long)*piVar15 * 0x10
                                                                    + 0x138);
                                                          goto LAB_05594324;
                                                        }
                                                        uVar14 = uVar14 - 1;
                                                        piVar15 = piVar15 + 4;
                                                      } while (uVar14 != 0);
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_02b7654c(plVar16,*(long *)
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
                                                  plVar16 = (long *)(*(code *)*puVar11)(plVar16,
                                                  puVar11[1]);
                                                  do {
                                                    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                      FUN_02b3cac4();
                                                    }
                                                    lVar17 = *plVar16;
                                                    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                    if (uVar14 != 0) {
                                                      piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar15 + -2) ==
                                                            *(long *)puVar5) {
                                                          puVar11 = (undefined8 *)
                                                                    (lVar17 + (long)*piVar15 * 0x10
                                                                    + 0x138);
                                                          goto LAB_055943b8;
                                                        }
                                                        uVar14 = uVar14 - 1;
                                                        piVar15 = piVar15 + 4;
                                                      } while (uVar14 != 0);
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_02b7654c(plVar16,*(long *)puVar5,0
                                                                          );
LAB_055943b8:
                                                    uVar14 = (*(code *)*puVar11)(plVar16,puVar11[1])
                                                    ;
                                                    if ((uVar14 & 1) == 0) {
                                                      plVar16 = (long *)thunk_FUN_02b79548(plVar16,*
                                                  (undefined8 *)PTR_DAT_06312f78);
                                                  if (plVar16 == (long *)0x0) goto LAB_05594514;
                                                  lVar17 = *plVar16;
                                                  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                  if (uVar14 == 0) goto LAB_055944ec;
                                                  piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                  goto LAB_055944d4;
                                                  }
                                                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar17 = *plVar16;
                                                  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                  if (uVar14 != 0) {
                                                    piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar15 + -2) == *(long *)puVar5
                                                         ) {
                                                        puVar11 = (undefined8 *)
                                                                  (lVar17 + (long)(*piVar15 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_05594420;
                                                      }
                                                      uVar14 = uVar14 - 1;
                                                      piVar15 = piVar15 + 4;
                                                    } while (uVar14 != 0);
                                                  }
                                                  puVar11 = (undefined8 *)
                                                            FUN_02b7654c(plVar16,*(long *)puVar5,1);
LAB_05594420:
                                                  plVar18 = (long *)(*(code *)*puVar11)(plVar16,
                                                  puVar11[1]);
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  bVar2 = *(byte *)(*unaff_x27 + 0x130);
                                                  if ((*(byte *)(*plVar18 + 0x130) < bVar2) ||
                                                     (*(long *)(*(long *)(*plVar18 + 200) +
                                                                (ulong)bVar2 * 8 + -8) != *unaff_x27
                                                     )) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3ce44(plVar18);
                                                  }
                                                  plVar12 = *(long **)(*(long *)(*unaff_x25 + 0xb8)
                                                                      + 8);
                                                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  (**(code **)(*plVar12 + 0x2a8))
                                                            (plVar12,plVar18[3],plVar18,
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
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05595484:
    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_055954b8;
    }
  }
LAB_0559549c:
  puVar11 = (undefined8 *)FUN_02b7654c(plVar16,*(long *)puVar4,0);
LAB_055954b8:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
  return;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_055944d4:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05594508;
    }
  }
LAB_055944ec:
  puVar11 = (undefined8 *)FUN_02b7654c(plVar16,*(long *)PTR_DAT_06312f78,0);
LAB_05594508:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
LAB_05594514:
  plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
  uVar8 = *(undefined8 *)PTR_DAT_0631e428;
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_04d8a7b0(uVar8,0);
  uVar9 = thunk_FUN_02b79644(*unaff_x27);
  FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar6,1,0,0);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x2a8))
              (plVar16,*(undefined8 *)puVar6,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
    puVar6 = PTR_DAT_0631e428;
    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
    uVar8 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e428,0);
    uVar9 = thunk_FUN_02b79644(*unaff_x27);
    FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x2a8))
                (plVar16,*(undefined8 *)puVar4,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
      plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
      uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar6,0);
      uVar9 = thunk_FUN_02b79644(*unaff_x27);
      puVar4 = Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__;
      FUN_05590c4c(uVar9,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__,1,
                   0,0);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x2a8))
                  (plVar16,*(undefined8 *)puVar4,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
        plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
        uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
        uVar9 = thunk_FUN_02b79644(*unaff_x27);
        FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar7,1,0,0);
        puVar4 = UnityEngine_Rendering_Universal_Internal_GBufferPass_<>c_TypeInfo;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x2a8))
                    (plVar16,*(undefined8 *)puVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
          plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
          uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
          uVar9 = thunk_FUN_02b79644(*unaff_x27);
          puVar7 = Firebase_Firestore_Future_FirestoreVoid_SWIG_CompletionDelegate_TypeInfo;
          FUN_05590c4c(uVar9,uVar8,
                       *(undefined8 *)
                        Firebase_Firestore_Future_FirestoreVoid_SWIG_CompletionDelegate_TypeInfo,1,0
                       ,0);
          puVar6 = PTR_DAT_0632efb0;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x2a8))
                      (plVar16,*(undefined8 *)puVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
            plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
            uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
            uVar9 = thunk_FUN_02b79644(*unaff_x27);
            puVar7 = Firebase_Auth_Future_AuthResult_Action_TypeInfo;
            FUN_05590c4c(uVar9,uVar8,*(undefined8 *)Firebase_Auth_Future_AuthResult_Action_TypeInfo,
                         1,0,0);
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x2a8))
                        (plVar16,*(undefined8 *)puVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
              plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
              uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
              uVar9 = thunk_FUN_02b79644(*unaff_x27);
              FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0x2a8))
                          (plVar16,*(undefined8 *)puVar4,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                uVar8 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e428,0);
                uVar9 = thunk_FUN_02b79644(*unaff_x27);
                FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar6,1,0,0);
                if (plVar16 != (long *)0x0) {
                  (**(code **)(*plVar16 + 0x2a8))
                            (plVar16,*(undefined8 *)puVar6,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                  plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                  uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                  uVar9 = thunk_FUN_02b79644(*unaff_x27);
                  puVar4 = FruitSpawner_<SpawnRoutine>d__57_TypeInfo;
                  FUN_05590c4c(uVar9,uVar8,*(undefined8 *)FruitSpawner_<SpawnRoutine>d__57_TypeInfo,
                               1,0,0);
                  puVar7 = Firebase_Firestore_Future_FirestoreVoid_<>c__DisplayClass4_0_TypeInfo;
                  puVar6 = FruitSpawner_GameModeSettings_TypeInfo;
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 0x2a8))
                              (plVar16,*(undefined8 *)puVar4,uVar9,*(undefined8 *)(*plVar16 + 0x2b0)
                              );
                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                    uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                    uVar9 = thunk_FUN_02b79644(*unaff_x27);
                    puVar4 = System_Runtime_Fx_FatalInternalException_TypeInfo;
                    FUN_05590c4c(uVar9,uVar8,
                                 *(undefined8 *)System_Runtime_Fx_FatalInternalException_TypeInfo,1,
                                 0,0);
                    if (plVar16 != (long *)0x0) {
                      (**(code **)(*plVar16 + 0x2a8))
                                (plVar16,*(undefined8 *)puVar4,uVar9,
                                 *(undefined8 *)(*plVar16 + 0x2b0));
                      plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                      uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                      uVar9 = thunk_FUN_02b79644(*unaff_x27);
                      puVar4 = PTR_DAT_0632a918;
                      FUN_05590c4c(uVar9,uVar8,*(undefined8 *)PTR_DAT_0632a918,1,0,0);
                      if (plVar16 != (long *)0x0) {
                        (**(code **)(*plVar16 + 0x2a8))
                                  (plVar16,*(undefined8 *)puVar4,uVar9,
                                   *(undefined8 *)(*plVar16 + 0x2b0));
                        plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                        uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                        uVar9 = thunk_FUN_02b79644(*unaff_x27);
                        FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar6,1,0,0);
                        puVar4 = PTR_DAT_0631e400;
                        if (plVar16 != (long *)0x0) {
                          (**(code **)(*plVar16 + 0x2a8))
                                    (plVar16,*(undefined8 *)puVar6,uVar9,
                                     *(undefined8 *)(*plVar16 + 0x2b0));
                          plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                          uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar9 = thunk_FUN_02b79644(*unaff_x27);
                          puVar6 = Firebase_Firestore_Future_FirestoreVoid_Action_TypeInfo;
                          FUN_05590c4c(uVar9,uVar8,
                                       *(undefined8 *)
                                        Firebase_Firestore_Future_FirestoreVoid_Action_TypeInfo,1,0,
                                       0);
                          if (plVar16 != (long *)0x0) {
                            (**(code **)(*plVar16 + 0x2a8))
                                      (plVar16,*(undefined8 *)puVar6,uVar9,
                                       *(undefined8 *)(*plVar16 + 0x2b0));
                            plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                            uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                            uVar9 = thunk_FUN_02b79644(*unaff_x27);
                            puVar6 = 
                            Firebase_Firestore_Future_DocumentSnapshot_<>c__DisplayClass4_0_TypeInfo
                            ;
                            FUN_05590c4c(uVar9,uVar8,
                                         *(undefined8 *)
                                          Firebase_Firestore_Future_DocumentSnapshot_<>c__DisplayClass4_0_TypeInfo
                                         ,1,0,0);
                            if (plVar16 != (long *)0x0) {
                              (**(code **)(*plVar16 + 0x2a8))
                                        (plVar16,*(undefined8 *)puVar6,uVar9,
                                         *(undefined8 *)(*plVar16 + 0x2b0));
                              plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                              uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                              uVar9 = thunk_FUN_02b79644(*unaff_x27);
                              puVar6 = FruitSpawner_<MonitorTrajectory>d__66_TypeInfo;
                              FUN_05590c4c(uVar9,uVar8,
                                           *(undefined8 *)
                                            FruitSpawner_<MonitorTrajectory>d__66_TypeInfo,1,0,0);
                              if (plVar16 != (long *)0x0) {
                                (**(code **)(*plVar16 + 0x2a8))
                                          (plVar16,*(undefined8 *)puVar6,uVar9,
                                           *(undefined8 *)(*plVar16 + 0x2b0));
                                plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                puVar6 = FruitSpawner_<AnimateSpawnScale>d__65_TypeInfo;
                                FUN_05590c4c(uVar9,uVar8,
                                             *(undefined8 *)
                                              FruitSpawner_<AnimateSpawnScale>d__65_TypeInfo,1,0,0);
                                if (plVar16 != (long *)0x0) {
                                  (**(code **)(*plVar16 + 0x2a8))
                                            (plVar16,*(undefined8 *)puVar6,uVar9,
                                             *(undefined8 *)(*plVar16 + 0x2b0));
                                  plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                  uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                  uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                  FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar7,1,0,0);
                                  if (plVar16 != (long *)0x0) {
                                    (**(code **)(*plVar16 + 0x2a8))
                                              (plVar16,*(undefined8 *)puVar7,uVar9,
                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                    uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                    uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                    puVar6 = 
                                    Firebase_Firestore_Future_DocumentSnapshot_Action_TypeInfo;
                                    FUN_05590c4c(uVar9,uVar8,
                                                 *(undefined8 *)
                                                  Firebase_Firestore_Future_DocumentSnapshot_Action_TypeInfo
                                                 ,1,0,0);
                                    if (plVar16 != (long *)0x0) {
                                      (**(code **)(*plVar16 + 0x2a8))
                                                (plVar16,*(undefined8 *)puVar6,uVar9,
                                                 *(undefined8 *)(*plVar16 + 0x2b0));
                                      plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                      uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                      uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                      puVar6 = UnityEngine_Rendering_GPUDrivenProcessor_<>c_TypeInfo
                                      ;
                                      FUN_05590c4c(uVar9,uVar8,
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_Rendering_GPUDrivenProcessor_<>c_TypeInfo
                                                  ,1,0,0);
                                      if (plVar16 != (long *)0x0) {
                                        (**(code **)(*plVar16 + 0x2a8))
                                                  (plVar16,*(undefined8 *)puVar6,uVar9,
                                                   *(undefined8 *)(*plVar16 + 0x2b0));
                                        plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                        uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                        uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                        puVar6 = 
                                        Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                                        ;
                                        FUN_05590c4c(uVar9,uVar8,
                                                     *(undefined8 *)
                                                                                                            
                                                  Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                                                  ,1,0,0);
                                        if (plVar16 != (long *)0x0) {
                                          (**(code **)(*plVar16 + 0x2a8))
                                                    (plVar16,*(undefined8 *)puVar6,uVar9,
                                                     *(undefined8 *)(*plVar16 + 0x2b0));
                                          plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                          uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                          uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                          puVar6 = System_Net_FtpWebRequest_<>c_TypeInfo;
                                          FUN_05590c4c(uVar9,uVar8,
                                                       *(undefined8 *)
                                                        System_Net_FtpWebRequest_<>c_TypeInfo,1,0,0)
                                          ;
                                          if (plVar16 != (long *)0x0) {
                                            (**(code **)(*plVar16 + 0x2a8))
                                                      (plVar16,*(undefined8 *)puVar6,uVar9,
                                                       *(undefined8 *)(*plVar16 + 0x2b0));
                                            plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                            uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0);
                                            uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                            puVar6 = 
                                            UnityEngine_Rendering_GPUInstanceDataBufferGrower_CopyInstancesKernelIDs_TypeInfo
                                            ;
                                            FUN_05590c4c(uVar9,uVar8,
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_GPUInstanceDataBufferGrower_CopyInstancesKernelIDs_TypeInfo
                                                  ,1,0,0);
                                            if (plVar16 != (long *)0x0) {
                                              (**(code **)(*plVar16 + 0x2a8))
                                                        (plVar16,*(undefined8 *)puVar6,uVar9,
                                                         *(undefined8 *)(*plVar16 + 0x2b0));
                                              plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8)
                                              ;
                                              uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20,0
                                                                  );
                                              uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                              puVar6 = FruitSpawner_DifficultyLevelSettings_TypeInfo
                                              ;
                                              FUN_05590c4c(uVar9,uVar8,
                                                           *(undefined8 *)
                                                                                                                        
                                                  FruitSpawner_DifficultyLevelSettings_TypeInfo,1,0,
                                                  0);
                                              if (plVar16 != (long *)0x0) {
                                                (**(code **)(*plVar16 + 0x2a8))
                                                          (plVar16,*(undefined8 *)puVar6,uVar9,
                                                           *(undefined8 *)(*plVar16 + 0x2b0));
                                                plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) +
                                                                    8);
                                                uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) + 0x20
                                                                     ,0);
                                                uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                                puVar6 = 
                                                System_Net_FtpControlStream_<>c__DisplayClass31_0_TypeInfo
                                                ;
                                                FUN_05590c4c(uVar9,uVar8,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Net_FtpControlStream_<>c__DisplayClass31_0_TypeInfo
                                                  ,1,0,0);
                                                if (plVar16 != (long *)0x0) {
                                                  (**(code **)(*plVar16 + 0x2a8))
                                                            (plVar16,*(undefined8 *)puVar6,uVar9,
                                                             *(undefined8 *)(*plVar16 + 0x2b0));
                                                  plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8)
                                                                      + 8);
                                                  uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) +
                                                                       0x20,0);
                                                  uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                                  puVar6 = 
                                                  EmeraldAI_EmeraldInverseKinematics_<>c__DisplayClass31_0_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar9,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  EmeraldAI_EmeraldInverseKinematics_<>c__DisplayClass31_0_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar6,uVar9,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                                    puVar6 = PTR_DAT_06336d20;
                                                    FUN_05590c4c(uVar9,uVar8,
                                                                 *(undefined8 *)PTR_DAT_06336d20,1,0
                                                                 ,0);
                                                    if (plVar16 != (long *)0x0) {
                                                      (**(code **)(*plVar16 + 0x2a8))
                                                                (plVar16,*(undefined8 *)puVar6,uVar9
                                                                 ,*(undefined8 *)(*plVar16 + 0x2b0))
                                                      ;
                                                      plVar16 = *(long **)(*(long *)(*unaff_x25 +
                                                                                    0xb8) + 8);
                                                      uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90)
                                                                           + 0x20,0);
                                                      uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                                      puVar6 = 
                                                  System_Net_FtpWebRequest_RequestStage_TypeInfo;
                                                  FUN_05590c4c(uVar9,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Net_FtpWebRequest_RequestStage_TypeInfo,1,0
                                                  ,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar6,uVar9,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                                    puVar6 = 
                                                  Firebase_Firestore_Future_DocumentSnapshot_SWIG_CompletionDelegate_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar9,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Firebase_Firestore_Future_DocumentSnapshot_SWIG_CompletionDelegate_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar6,uVar9,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                                    uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                                    puVar4 = 
                                                  EnvironmentChanger_<LoadEnvironmentAfterInitialFade>d__7_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar9,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  EnvironmentChanger_<LoadEnvironmentAfterInitialFade>d__7_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar4,uVar9,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar8 = FUN_04d8a7b0(*(long *)(puVar3 + 0x90) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                                    puVar3 = 
                                                  System_Net_FtpWebResponse_EmptyStream_TypeInfo;
                                                  FUN_05590c4c(uVar9,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Net_FtpWebResponse_EmptyStream_TypeInfo,1,0
                                                  ,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar3,uVar9,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                PTR_DAT_0632ba48);
                                                    FUN_04d2e0f0(uVar8,0);
                                                    uVar8 = FUN_04d2fd18(uVar8,0);
                                                    puVar11 = (undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                    *puVar11 = uVar8;
                                                    thunk_FUN_02bb0e9c(puVar11,uVar8);
                                                    puVar3 = PTR_DAT_06322660;
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    if (plVar16 != (long *)0x0) {
                                                      plVar16 = (long *)(**(code **)(*plVar16 +
                                                                                    0x328))(plVar16,
                                                  *(undefined8 *)(*plVar16 + 0x330));
                                                  do {
                                                    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                      FUN_02b3cac4();
                                                    }
                                                    lVar17 = *plVar16;
                                                    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                    if (uVar14 != 0) {
                                                      piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar15 + -2) ==
                                                            *(long *)puVar5) {
                                                          puVar11 = (undefined8 *)
                                                                    (lVar17 + (long)*piVar15 * 0x10
                                                                    + 0x138);
                                                          goto LAB_05595314;
                                                        }
                                                        uVar14 = uVar14 - 1;
                                                        piVar15 = piVar15 + 4;
                                                      } while (uVar14 != 0);
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_02b7654c(plVar16,*(long *)puVar5,0
                                                                          );
LAB_05595314:
                                                    uVar14 = (*(code *)*puVar11)(plVar16,puVar11[1])
                                                    ;
                                                    puVar4 = PTR_DAT_06312f78;
                                                    if ((uVar14 & 1) == 0) {
                                                      plVar16 = (long *)thunk_FUN_02b79548(plVar16,*
                                                  (undefined8 *)PTR_DAT_06312f78);
                                                  if (plVar16 == (long *)0x0) {
                                                    return;
                                                  }
                                                  lVar17 = *plVar16;
                                                  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                  if (uVar14 == 0) goto LAB_0559549c;
                                                  piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                  goto LAB_05595484;
                                                  }
                                                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar17 = *plVar16;
                                                  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                  if (uVar14 != 0) {
                                                    piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar15 + -2) == *(long *)puVar5
                                                         ) {
                                                        puVar11 = (undefined8 *)
                                                                  (lVar17 + (long)(*piVar15 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_0559537c;
                                                      }
                                                      uVar14 = uVar14 - 1;
                                                      piVar15 = piVar15 + 4;
                                                    } while (uVar14 != 0);
                                                  }
                                                  puVar11 = (undefined8 *)
                                                            FUN_02b7654c(plVar16,*(long *)puVar5,1);
LAB_0559537c:
                                                  plVar18 = (long *)(*(code *)*puVar11)(plVar16,
                                                  puVar11[1]);
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  if (*(long *)(*plVar18 + 0x40) !=
                                                      *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3ce44();
                                                  }
                                                  puVar11 = (undefined8 *)thunk_FUN_02b7978c();
                                                  plVar18 = (long *)puVar11[1];
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar17 = *unaff_x27;
                                                  if ((*(byte *)(*plVar18 + 0x130) <
                                                       *(byte *)(lVar17 + 0x130)) ||
                                                     (*(long *)(*(long *)(*plVar18 + 200) +
                                                                (ulong)*(byte *)(lVar17 + 0x130) * 8
                                                               + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3ce44();
                                                  }
                                                  lVar13 = plVar18[2];
                                                  lVar1 = plVar18[3];
                                                  uVar8 = *puVar11;
                                                  lVar17 = thunk_FUN_02b79644(lVar17);
                                                  FUN_05590c4c(lVar17,lVar13,lVar1,1,0,0);
                                                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar13 = *unaff_x25;
                                                  *(undefined1 *)(lVar17 + 0x61) = 1;
                                                  plVar18 = *(long **)(*(long *)(lVar13 + 0xb8) +
                                                                      0x18);
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  (**(code **)(*plVar18 + 0x2a8))
                                                            (plVar18,uVar8,lVar17,
                                                             *(undefined8 *)(*plVar18 + 0x2b0));
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


