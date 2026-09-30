/*
FUNCTION_NAME: System.Net.CookieContainer$$Add
ENTRY_POINT: 055938a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05595524) */

void System_Net_CookieContainer__Add(void)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long *plVar16;
  undefined8 *unaff_x23;
  long *plVar17;
  long *unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_04d8a7b0(*(long *)(unaff_x28 + 0x50) + 0x20);
  uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x50) + 0x20,0);
  uVar8 = thunk_FUN_02b79644(*unaff_x27);
  FUN_05590c4c(uVar8,uVar7,*unaff_x23,1,0,0);
  puVar4 = System_Runtime_Fx_<>c_TypeInfo;
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x2a8))();
    plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
    uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x68) + 0x20,0);
    uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x68) + 0x20,0);
    uVar9 = thunk_FUN_02b79644(*unaff_x27);
    FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
    puVar4 = FruitSpawner_<SpawnObjectsParallel>d__58_TypeInfo;
    if (plVar16 != (long *)0x0) {
                    /* try { // try from 05593988 to 05693b27 has its CatchHandler @ 05593988
                       catch() { ... } // from try @ 05593988 with catch @ 05593988
                       catch() { ... } // from try @ 05593b54 with catch @ 05593988
                       catch() { ... } // from try @ 05593dc4 with catch @ 05593988
                       catch() { ... } // from try @ 05593dfc with catch @ 05593988
                       catch() { ... } // from try @ 05593f4c with catch @ 05593988
                       catch() { ... } // from try @ 0559423c with catch @ 05593988 */
      (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
      plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
      uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x70) + 0x20,0);
      uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x70) + 0x20,0);
      uVar9 = thunk_FUN_02b79644(*unaff_x27);
      FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
      puVar4 = Firebase_Firestore_Converters_EnumerableConverter_<>c_TypeInfo;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
        plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
        uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x78) + 0x20,0);
        uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x78) + 0x20,0);
        uVar9 = thunk_FUN_02b79644(*unaff_x27);
        FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
        puVar4 = Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
          plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
          uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x80) + 0x20,0);
          uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x80) + 0x20,0);
          uVar9 = thunk_FUN_02b79644(*unaff_x27);
          FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
          puVar5 = PTR_DAT_0632f840;
          puVar4 = PTR_DAT_0631e428;
          if (plVar16 != (long *)0x0) {
                    /* try { // try from 05593b28 to 05693b33 has its CatchHandler @ 05593dcc */
            (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                    /* try { // try from 05593b34 to 05693b43 has its CatchHandler @ 05593dc8 */
            plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
            uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                    /* try { // try from 05593b48 to 05693b53 has its CatchHandler @ 05593dc4 */
                    /* try { // try from 05593b54 to 05693dbf has its CatchHandler @ 05593988 */
            uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
            uVar9 = thunk_FUN_02b79644(*unaff_x27);
            FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar5,1,0,0);
            puVar5 = FruitSpawner_SpawnPoint_TypeInfo;
            puVar4 = PTR_DAT_0632ce70;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0))
              ;
              plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
              uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
              uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
              uVar9 = thunk_FUN_02b79644(*unaff_x27);
              FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar5,1,0,0);
              puVar5 = OVRPlugin_OVRP_1_7_0_TypeInfo;
              puVar4 = Firebase_FutureVoid_SWIG_CompletionDelegate_TypeInfo;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0x2a8))
                          (plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                uVar9 = thunk_FUN_02b79644(*unaff_x27);
                FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
                puVar4 = PTR_DAT_06321df0;
                if (plVar16 != (long *)0x0) {
                  (**(code **)(*plVar16 + 0x2a8))
                            (plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                  plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                  uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                  uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                  uVar9 = thunk_FUN_02b79644(*unaff_x27);
                  FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
                  puVar4 = EmeraldAI_EmeraldHealth_TakeCritDamageHandler_TypeInfo;
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 0x2a8))
                              (plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                    lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                    FUN_054cf8f0(lVar10,0);
                    puVar4 = PTR_DAT_06336f88;
                    if (lVar10 != 0) {
                      *(undefined8 *)(lVar10 + 0x50) =
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__
                      ;
                      thunk_FUN_02bb0e9c();
                      plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                      uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                      uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                      plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                    /* try { // try from 05593dc0 to 05693dc3 has its CatchHandler @ 05593dcc */
                      uVar9 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                      puVar4 = 
                      UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_BurstDirectCall_TypeInfo
                      ;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05593b48 with catch @ 05593dc4
                       try { // try from 05593dc4 to 05693de3 has its CatchHandler @ 05593988 */
                      if (plVar17 != (long *)0x0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05593b34 with catch @ 05593dc8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05593b28 with catch @ 05593dcc
                       catch(type#1 @ 05fbf508) { ... } // from try @ 05593dc0 with catch @ 05593dcc
                        */
                    /* try { // try from 05593de4 to 05693dfb has its CatchHandler @ 05594234 */
                        plVar17 = (long *)(**(code **)(*plVar17 + 0x308))
                                                    (plVar17,uVar9,*(undefined8 *)(*plVar17 + 0x310)
                                                    );
                        uVar9 = thunk_FUN_02b79644(*unaff_x27);
                    /* try { // try from 05593dfc to 05693f33 has its CatchHandler @ 05593988 */
                        if (plVar17 != (long *)0x0) {
                          lVar13 = *unaff_x27;
                          if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
                             (*(long *)(*(long *)(*plVar17 + 200) +
                                        (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
                            FUN_02b3ce44(plVar17,lVar13,*(undefined8 *)puVar4);
                          }
                        }
                        FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,plVar17,lVar10);
                        puVar4 = 
                        UnityEngine_Rendering_Universal_Internal_GBufferPass_PassData_TypeInfo;
                        if (plVar16 != (long *)0x0) {
                          (**(code **)(*plVar16 + 0x2a8))
                                    (plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                          plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                          uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x18) + 0x20,0);
                          uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x18) + 0x20,0);
                          uVar9 = thunk_FUN_02b79644(*unaff_x27);
                          FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
                          puVar4 = 
                          System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                          ;
                          if (plVar16 != (long *)0x0) {
                            (**(code **)(*plVar16 + 0x2a8))
                                      (plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                            plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                            uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x30) + 0x20,0);
                            uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x30) + 0x20,0);
                            uVar9 = thunk_FUN_02b79644(*unaff_x27);
                    /* try { // try from 05593f34 to 05693f4b has its CatchHandler @ 05594234 */
                    /* try { // try from 05593f4c to 05694223 has its CatchHandler @ 05593988 */
                            FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,0,0);
                            if (plVar16 != (long *)0x0) {
                              (**(code **)(*plVar16 + 0x2a8))
                                        (plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                              plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                              uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x88) + 0x20,0);
                              uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x88) + 0x20,0);
                              plVar17 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                              uVar9 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x40) + 0x20,0);
                              puVar4 = UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo;
                              if (plVar17 != (long *)0x0) {
                                plVar17 = (long *)(**(code **)(*plVar17 + 0x308))
                                                            (plVar17,uVar9,
                                                             *(undefined8 *)(*plVar17 + 0x310));
                                uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                if (plVar17 != (long *)0x0) {
                                  lVar10 = *unaff_x27;
                                  if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
                                     (*(long *)(*(long *)(*plVar17 + 200) +
                                                (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
                                     )) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02b3ce44(plVar17,lVar10,*(undefined8 *)puVar4);
                                  }
                                }
                                FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,1,plVar17,0);
                                puVar4 = 
                                Firebase_Auth_Future_AuthResult_<>c__DisplayClass4_0_TypeInfo;
                                if (plVar16 != (long *)0x0) {
                                  (**(code **)(*plVar16 + 0x2a8))
                                            (plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0));
                                  plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                  uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x10) + 0x20,0);
                                  uVar8 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x10) + 0x20,0);
                                  uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                  FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar4,0,0,0);
                                  puVar5 = 
                                  EmeraldAI_EmeraldMovement_GeneratedWaypointHandler_TypeInfo;
                                  puVar4 = PTR_DAT_0631e400;
                                  if (plVar16 != (long *)0x0) {
                                    (**(code **)(*plVar16 + 0x2a8))
                                              (plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x2b0)
                                              );
                                    plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                    uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                    uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                    uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                    FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar5,1,0,0);
                                    puVar5 = 
                                    Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_get_Count__
                                    ;
                                    puVar4 = System_Collections_Generic_GenericComparer<T>_var;
                                    if (plVar16 != (long *)0x0) {
                                      (**(code **)(*plVar16 + 0x2a8))
                                                (plVar16,uVar7,uVar9,
                                                 *(undefined8 *)(*plVar16 + 0x2b0));
                                      plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                      uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                      uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                      uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                      FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar5,0,0,0);
                                      puVar5 = 
                                      Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                      ;
                                      puVar4 = UnityEngine_InputSystem_LowLevel_GamepadButton_var;
                                      if (plVar16 != (long *)0x0) {
                                        (**(code **)(*plVar16 + 0x2a8))
                                                  (plVar16,uVar7,uVar9,
                                                   *(undefined8 *)(*plVar16 + 0x2b0));
                                        plVar16 = (long *)**(undefined8 **)(*unaff_x25 + 0xb8);
                                        uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                        uVar8 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
                                        uVar9 = thunk_FUN_02b79644(*unaff_x27);
                                        FUN_05590c4c(uVar9,uVar8,*(undefined8 *)puVar5,0,0,0);
                                        if (plVar16 != (long *)0x0) {
                                          (**(code **)(*plVar16 + 0x2a8))
                                                    (plVar16,uVar7,uVar9,
                                                     *(undefined8 *)(*plVar16 + 0x2b0));
                                          uVar7 = thunk_FUN_02b79644(*unaff_x29);
                                          FUN_04d2e0f0(uVar7,0);
                                          puVar11 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8)
                                          ;
                                          *puVar11 = uVar7;
                                          thunk_FUN_02bb0e9c(puVar11,uVar7);
                                          plVar16 = (long *)**(long **)(*unaff_x25 + 0xb8);
                                          if ((plVar16 != (long *)0x0) &&
                                             (plVar16 = (long *)(**(code **)(*plVar16 + 0x398))
                                                                          (plVar16,*(undefined8 *)
                                                                                    (*plVar16 +
                                                                                    0x3a0)),
                                             plVar16 != (long *)0x0)) {
                                            lVar10 = *plVar16;
                                            uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                            if (uVar14 != 0) {
                                              piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar15 + -2) ==
                                                    *(long *)PTR_DAT_0631a670) {
                                                  puVar11 = (undefined8 *)
                                                            (lVar10 + (long)*piVar15 * 0x10 + 0x138)
                                                  ;
                                                  goto LAB_05594324;
                                                }
                                                uVar14 = uVar14 - 1;
                                                piVar15 = piVar15 + 4;
                                              } while (uVar14 != 0);
                                            }
                                            puVar11 = (undefined8 *)
                                                      FUN_02b7654c(plVar16,*(long *)PTR_DAT_0631a670
                                                                   ,0);
LAB_05594324:
                                            puVar6 = 
                                            Firebase_Auth_Future_AuthResult_SWIG_CompletionDelegate_TypeInfo
                                            ;
                                            puVar3 = 
                                            System_Linq_Expressions_Interpreter_EqualInstruction_EqualDouble_TypeInfo
                                            ;
                                            puVar5 = PTR_DAT_06324818;
                                            puVar4 = PTR_DAT_06312f90;
                                            plVar16 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]
                                                                                 );
                                            do {
                                              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_02b3cac4();
                                              }
                                              lVar10 = *plVar16;
                                              uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                              if (uVar14 != 0) {
                                                piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                                                    puVar11 = (undefined8 *)
                                                              (lVar10 + (long)*piVar15 * 0x10 +
                                                              0x138);
                                                    goto LAB_055943b8;
                                                  }
                                                  uVar14 = uVar14 - 1;
                                                  piVar15 = piVar15 + 4;
                                                } while (uVar14 != 0);
                                              }
                                              puVar11 = (undefined8 *)
                                                        FUN_02b7654c(plVar16,*(long *)puVar4,0);
LAB_055943b8:
                                              uVar14 = (*(code *)*puVar11)(plVar16,puVar11[1]);
                                              if ((uVar14 & 1) == 0) {
                                                plVar16 = (long *)thunk_FUN_02b79548(plVar16,*(
                                                  undefined8 *)PTR_DAT_06312f78);
                                                if (plVar16 == (long *)0x0) goto LAB_05594514;
                                                lVar10 = *plVar16;
                                                uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                if (uVar14 == 0) goto LAB_055944ec;
                                                piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                goto LAB_055944d4;
                                              }
                                              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_02b3cac4();
                                              }
                                              lVar10 = *plVar16;
                                              uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                              if (uVar14 != 0) {
                                                piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                                                    puVar11 = (undefined8 *)
                                                              (lVar10 + (long)(*piVar15 + 1) * 0x10
                                                              + 0x138);
                                                    goto LAB_05594420;
                                                  }
                                                  uVar14 = uVar14 - 1;
                                                  piVar15 = piVar15 + 4;
                                                } while (uVar14 != 0);
                                              }
                                              puVar11 = (undefined8 *)
                                                        FUN_02b7654c(plVar16,*(long *)puVar4,1);
LAB_05594420:
                                              plVar17 = (long *)(*(code *)*puVar11)(plVar16,puVar11[
                                                  1]);
                                              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_02b3cac4();
                                              }
                                              bVar2 = *(byte *)(*unaff_x27 + 0x130);
                                              if ((*(byte *)(*plVar17 + 0x130) < bVar2) ||
                                                 (*(long *)(*(long *)(*plVar17 + 200) +
                                                            (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
                                                FUN_02b3ce44(plVar17);
                                              }
                                              plVar12 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8)
                                              ;
                                              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_02b3cac4();
                                              }
                                              (**(code **)(*plVar12 + 0x2a8))
                                                        (plVar12,plVar17[3],plVar17,
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
  goto LAB_055954f4;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05595484:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_055954b8;
    }
  }
LAB_0559549c:
  puVar11 = (undefined8 *)FUN_02b7654c(plVar16,*(long *)puVar3,0);
LAB_055954b8:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
  return;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_055944d4:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05594508;
    }
  }
LAB_055944ec:
  puVar11 = (undefined8 *)FUN_02b7654c(plVar16,*(long *)PTR_DAT_06312f78,0);
LAB_05594508:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
LAB_05594514:
  plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
  uVar7 = *(undefined8 *)PTR_DAT_0631e428;
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_04d8a7b0(uVar7,0);
  uVar8 = thunk_FUN_02b79644(*unaff_x27);
  FUN_05590c4c(uVar8,uVar7,*(undefined8 *)puVar3,1,0,0);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x2a8))
              (plVar16,*(undefined8 *)puVar3,uVar8,*(undefined8 *)(*plVar16 + 0x2b0));
    puVar3 = PTR_DAT_0631e428;
    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
    uVar7 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e428,0);
    uVar8 = thunk_FUN_02b79644(*unaff_x27);
    FUN_05590c4c(uVar8,uVar7,*(undefined8 *)puVar5,1,0,0);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x2a8))
                (plVar16,*(undefined8 *)puVar5,uVar8,*(undefined8 *)(*plVar16 + 0x2b0));
      plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
      uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar3,0);
      uVar8 = thunk_FUN_02b79644(*unaff_x27);
      puVar5 = Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__;
      FUN_05590c4c(uVar8,uVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__,1,
                   0,0);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x2a8))
                  (plVar16,*(undefined8 *)puVar5,uVar8,*(undefined8 *)(*plVar16 + 0x2b0));
        plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
        uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
        uVar8 = thunk_FUN_02b79644(*unaff_x27);
        FUN_05590c4c(uVar8,uVar7,*(undefined8 *)puVar6,1,0,0);
        puVar5 = UnityEngine_Rendering_Universal_Internal_GBufferPass_<>c_TypeInfo;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x2a8))
                    (plVar16,*(undefined8 *)puVar6,uVar8,*(undefined8 *)(*plVar16 + 0x2b0));
          plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
          uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
          uVar8 = thunk_FUN_02b79644(*unaff_x27);
          puVar6 = Firebase_Firestore_Future_FirestoreVoid_SWIG_CompletionDelegate_TypeInfo;
          FUN_05590c4c(uVar8,uVar7,
                       *(undefined8 *)
                        Firebase_Firestore_Future_FirestoreVoid_SWIG_CompletionDelegate_TypeInfo,1,0
                       ,0);
          puVar3 = PTR_DAT_0632efb0;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x2a8))
                      (plVar16,*(undefined8 *)puVar6,uVar8,*(undefined8 *)(*plVar16 + 0x2b0));
            plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
            uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
            uVar8 = thunk_FUN_02b79644(*unaff_x27);
            puVar6 = Firebase_Auth_Future_AuthResult_Action_TypeInfo;
            FUN_05590c4c(uVar8,uVar7,*(undefined8 *)Firebase_Auth_Future_AuthResult_Action_TypeInfo,
                         1,0,0);
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x2a8))
                        (plVar16,*(undefined8 *)puVar6,uVar8,*(undefined8 *)(*plVar16 + 0x2b0));
              plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
              uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
              uVar8 = thunk_FUN_02b79644(*unaff_x27);
              FUN_05590c4c(uVar8,uVar7,*(undefined8 *)puVar5,1,0,0);
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0x2a8))
                          (plVar16,*(undefined8 *)puVar5,uVar8,*(undefined8 *)(*plVar16 + 0x2b0));
                plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                uVar7 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e428,0);
                uVar8 = thunk_FUN_02b79644(*unaff_x27);
                FUN_05590c4c(uVar8,uVar7,*(undefined8 *)puVar3,1,0,0);
                if (plVar16 != (long *)0x0) {
                  (**(code **)(*plVar16 + 0x2a8))
                            (plVar16,*(undefined8 *)puVar3,uVar8,*(undefined8 *)(*plVar16 + 0x2b0));
                  plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                  uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                  uVar8 = thunk_FUN_02b79644(*unaff_x27);
                  puVar5 = FruitSpawner_<SpawnRoutine>d__57_TypeInfo;
                  FUN_05590c4c(uVar8,uVar7,*(undefined8 *)FruitSpawner_<SpawnRoutine>d__57_TypeInfo,
                               1,0,0);
                  puVar6 = Firebase_Firestore_Future_FirestoreVoid_<>c__DisplayClass4_0_TypeInfo;
                  puVar3 = FruitSpawner_GameModeSettings_TypeInfo;
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 0x2a8))
                              (plVar16,*(undefined8 *)puVar5,uVar8,*(undefined8 *)(*plVar16 + 0x2b0)
                              );
                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                    uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                    uVar8 = thunk_FUN_02b79644(*unaff_x27);
                    puVar5 = System_Runtime_Fx_FatalInternalException_TypeInfo;
                    FUN_05590c4c(uVar8,uVar7,
                                 *(undefined8 *)System_Runtime_Fx_FatalInternalException_TypeInfo,1,
                                 0,0);
                    if (plVar16 != (long *)0x0) {
                      (**(code **)(*plVar16 + 0x2a8))
                                (plVar16,*(undefined8 *)puVar5,uVar8,
                                 *(undefined8 *)(*plVar16 + 0x2b0));
                      plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                      uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                      uVar8 = thunk_FUN_02b79644(*unaff_x27);
                      puVar5 = PTR_DAT_0632a918;
                      FUN_05590c4c(uVar8,uVar7,*(undefined8 *)PTR_DAT_0632a918,1,0,0);
                      if (plVar16 != (long *)0x0) {
                        (**(code **)(*plVar16 + 0x2a8))
                                  (plVar16,*(undefined8 *)puVar5,uVar8,
                                   *(undefined8 *)(*plVar16 + 0x2b0));
                        plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                        uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                        uVar8 = thunk_FUN_02b79644(*unaff_x27);
                        FUN_05590c4c(uVar8,uVar7,*(undefined8 *)puVar3,1,0,0);
                        puVar5 = PTR_DAT_0631e400;
                        if (plVar16 != (long *)0x0) {
                          (**(code **)(*plVar16 + 0x2a8))
                                    (plVar16,*(undefined8 *)puVar3,uVar8,
                                     *(undefined8 *)(*plVar16 + 0x2b0));
                          plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                          uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                          uVar8 = thunk_FUN_02b79644(*unaff_x27);
                          puVar3 = Firebase_Firestore_Future_FirestoreVoid_Action_TypeInfo;
                          FUN_05590c4c(uVar8,uVar7,
                                       *(undefined8 *)
                                        Firebase_Firestore_Future_FirestoreVoid_Action_TypeInfo,1,0,
                                       0);
                          if (plVar16 != (long *)0x0) {
                            (**(code **)(*plVar16 + 0x2a8))
                                      (plVar16,*(undefined8 *)puVar3,uVar8,
                                       *(undefined8 *)(*plVar16 + 0x2b0));
                            plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                            uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                            uVar8 = thunk_FUN_02b79644(*unaff_x27);
                            puVar3 = 
                            Firebase_Firestore_Future_DocumentSnapshot_<>c__DisplayClass4_0_TypeInfo
                            ;
                            FUN_05590c4c(uVar8,uVar7,
                                         *(undefined8 *)
                                          Firebase_Firestore_Future_DocumentSnapshot_<>c__DisplayClass4_0_TypeInfo
                                         ,1,0,0);
                            if (plVar16 != (long *)0x0) {
                              (**(code **)(*plVar16 + 0x2a8))
                                        (plVar16,*(undefined8 *)puVar3,uVar8,
                                         *(undefined8 *)(*plVar16 + 0x2b0));
                              plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                              uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                              uVar8 = thunk_FUN_02b79644(*unaff_x27);
                              puVar3 = FruitSpawner_<MonitorTrajectory>d__66_TypeInfo;
                              FUN_05590c4c(uVar8,uVar7,
                                           *(undefined8 *)
                                            FruitSpawner_<MonitorTrajectory>d__66_TypeInfo,1,0,0);
                              if (plVar16 != (long *)0x0) {
                                (**(code **)(*plVar16 + 0x2a8))
                                          (plVar16,*(undefined8 *)puVar3,uVar8,
                                           *(undefined8 *)(*plVar16 + 0x2b0));
                                plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                                uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                puVar3 = FruitSpawner_<AnimateSpawnScale>d__65_TypeInfo;
                                FUN_05590c4c(uVar8,uVar7,
                                             *(undefined8 *)
                                              FruitSpawner_<AnimateSpawnScale>d__65_TypeInfo,1,0,0);
                                if (plVar16 != (long *)0x0) {
                                  (**(code **)(*plVar16 + 0x2a8))
                                            (plVar16,*(undefined8 *)puVar3,uVar8,
                                             *(undefined8 *)(*plVar16 + 0x2b0));
                                  plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                  uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                                  uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                  FUN_05590c4c(uVar8,uVar7,*(undefined8 *)puVar6,1,0,0);
                                  if (plVar16 != (long *)0x0) {
                                    (**(code **)(*plVar16 + 0x2a8))
                                              (plVar16,*(undefined8 *)puVar6,uVar8,
                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                    uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                                    uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                    puVar3 = 
                                    Firebase_Firestore_Future_DocumentSnapshot_Action_TypeInfo;
                                    FUN_05590c4c(uVar8,uVar7,
                                                 *(undefined8 *)
                                                  Firebase_Firestore_Future_DocumentSnapshot_Action_TypeInfo
                                                 ,1,0,0);
                                    if (plVar16 != (long *)0x0) {
                                      (**(code **)(*plVar16 + 0x2a8))
                                                (plVar16,*(undefined8 *)puVar3,uVar8,
                                                 *(undefined8 *)(*plVar16 + 0x2b0));
                                      plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                      uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                                      uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                      puVar3 = UnityEngine_Rendering_GPUDrivenProcessor_<>c_TypeInfo
                                      ;
                                      FUN_05590c4c(uVar8,uVar7,
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_Rendering_GPUDrivenProcessor_<>c_TypeInfo
                                                  ,1,0,0);
                                      if (plVar16 != (long *)0x0) {
                                        (**(code **)(*plVar16 + 0x2a8))
                                                  (plVar16,*(undefined8 *)puVar3,uVar8,
                                                   *(undefined8 *)(*plVar16 + 0x2b0));
                                        plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                        uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,0);
                                        uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                        puVar3 = 
                                        Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                                        ;
                                        FUN_05590c4c(uVar8,uVar7,
                                                     *(undefined8 *)
                                                                                                            
                                                  Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                                                  ,1,0,0);
                                        if (plVar16 != (long *)0x0) {
                                          (**(code **)(*plVar16 + 0x2a8))
                                                    (plVar16,*(undefined8 *)puVar3,uVar8,
                                                     *(undefined8 *)(*plVar16 + 0x2b0));
                                          plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                          uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                          uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                          puVar3 = System_Net_FtpWebRequest_<>c_TypeInfo;
                                          FUN_05590c4c(uVar8,uVar7,
                                                       *(undefined8 *)
                                                        System_Net_FtpWebRequest_<>c_TypeInfo,1,0,0)
                                          ;
                                          if (plVar16 != (long *)0x0) {
                                            (**(code **)(*plVar16 + 0x2a8))
                                                      (plVar16,*(undefined8 *)puVar3,uVar8,
                                                       *(undefined8 *)(*plVar16 + 0x2b0));
                                            plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8);
                                            uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) + 0x20,
                                                                 0);
                                            uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                            puVar3 = 
                                            UnityEngine_Rendering_GPUInstanceDataBufferGrower_CopyInstancesKernelIDs_TypeInfo
                                            ;
                                            FUN_05590c4c(uVar8,uVar7,
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_GPUInstanceDataBufferGrower_CopyInstancesKernelIDs_TypeInfo
                                                  ,1,0,0);
                                            if (plVar16 != (long *)0x0) {
                                              (**(code **)(*plVar16 + 0x2a8))
                                                        (plVar16,*(undefined8 *)puVar3,uVar8,
                                                         *(undefined8 *)(*plVar16 + 0x2b0));
                                              plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) + 8)
                                              ;
                                              uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) +
                                                                   0x20,0);
                                              uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                              puVar3 = FruitSpawner_DifficultyLevelSettings_TypeInfo
                                              ;
                                              FUN_05590c4c(uVar8,uVar7,
                                                           *(undefined8 *)
                                                                                                                        
                                                  FruitSpawner_DifficultyLevelSettings_TypeInfo,1,0,
                                                  0);
                                              if (plVar16 != (long *)0x0) {
                                                (**(code **)(*plVar16 + 0x2a8))
                                                          (plVar16,*(undefined8 *)puVar3,uVar8,
                                                           *(undefined8 *)(*plVar16 + 0x2b0));
                                                plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8) +
                                                                    8);
                                                uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) +
                                                                     0x20,0);
                                                uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                puVar3 = 
                                                System_Net_FtpControlStream_<>c__DisplayClass31_0_TypeInfo
                                                ;
                                                FUN_05590c4c(uVar8,uVar7,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Net_FtpControlStream_<>c__DisplayClass31_0_TypeInfo
                                                  ,1,0,0);
                                                if (plVar16 != (long *)0x0) {
                                                  (**(code **)(*plVar16 + 0x2a8))
                                                            (plVar16,*(undefined8 *)puVar3,uVar8,
                                                             *(undefined8 *)(*plVar16 + 0x2b0));
                                                  plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8)
                                                                      + 8);
                                                  uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90) +
                                                                       0x20,0);
                                                  uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  puVar3 = 
                                                  EmeraldAI_EmeraldInverseKinematics_<>c__DisplayClass31_0_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar8,uVar7,
                                                               *(undefined8 *)
                                                                                                                                
                                                  EmeraldAI_EmeraldInverseKinematics_<>c__DisplayClass31_0_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar3,uVar8,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90)
                                                                         + 0x20,0);
                                                    uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    puVar3 = PTR_DAT_06336d20;
                                                    FUN_05590c4c(uVar8,uVar7,
                                                                 *(undefined8 *)PTR_DAT_06336d20,1,0
                                                                 ,0);
                                                    if (plVar16 != (long *)0x0) {
                                                      (**(code **)(*plVar16 + 0x2a8))
                                                                (plVar16,*(undefined8 *)puVar3,uVar8
                                                                 ,*(undefined8 *)(*plVar16 + 0x2b0))
                                                      ;
                                                      plVar16 = *(long **)(*(long *)(*unaff_x25 +
                                                                                    0xb8) + 8);
                                                      uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 +
                                                                                    0x90) + 0x20,0);
                                                      uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                      puVar3 = 
                                                  System_Net_FtpWebRequest_RequestStage_TypeInfo;
                                                  FUN_05590c4c(uVar8,uVar7,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Net_FtpWebRequest_RequestStage_TypeInfo,1,0
                                                  ,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar3,uVar8,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90)
                                                                         + 0x20,0);
                                                    uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    puVar3 = 
                                                  Firebase_Firestore_Future_DocumentSnapshot_SWIG_CompletionDelegate_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar8,uVar7,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Firebase_Firestore_Future_DocumentSnapshot_SWIG_CompletionDelegate_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar3,uVar8,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar7 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
                                                    uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    puVar5 = 
                                                  EnvironmentChanger_<LoadEnvironmentAfterInitialFade>d__7_TypeInfo
                                                  ;
                                                  FUN_05590c4c(uVar8,uVar7,
                                                               *(undefined8 *)
                                                                                                                                
                                                  EnvironmentChanger_<LoadEnvironmentAfterInitialFade>d__7_TypeInfo
                                                  ,1,0,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar5,uVar8,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 8);
                                                    uVar7 = FUN_04d8a7b0(*(long *)(unaff_x28 + 0x90)
                                                                         + 0x20,0);
                                                    uVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    puVar5 = 
                                                  System_Net_FtpWebResponse_EmptyStream_TypeInfo;
                                                  FUN_05590c4c(uVar8,uVar7,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Net_FtpWebResponse_EmptyStream_TypeInfo,1,0
                                                  ,0);
                                                  if (plVar16 != (long *)0x0) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar5,uVar8,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    uVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                PTR_DAT_0632ba48);
                                                    FUN_04d2e0f0(uVar7,0);
                                                    uVar7 = FUN_04d2fd18(uVar7,0);
                                                    puVar11 = (undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                    *puVar11 = uVar7;
                                                    thunk_FUN_02bb0e9c(puVar11,uVar7);
                                                    puVar5 = PTR_DAT_06322660;
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
                                                    lVar10 = *plVar16;
                                                    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                    if (uVar14 != 0) {
                                                      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar15 + -2) ==
                                                            *(long *)puVar4) {
                                                          puVar11 = (undefined8 *)
                                                                    (lVar10 + (long)*piVar15 * 0x10
                                                                    + 0x138);
                                                          goto LAB_05595314;
                                                        }
                                                        uVar14 = uVar14 - 1;
                                                        piVar15 = piVar15 + 4;
                                                      } while (uVar14 != 0);
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_02b7654c(plVar16,*(long *)puVar4,0
                                                                          );
LAB_05595314:
                                                    uVar14 = (*(code *)*puVar11)(plVar16,puVar11[1])
                                                    ;
                                                    puVar3 = PTR_DAT_06312f78;
                                                    if ((uVar14 & 1) == 0) {
                                                      plVar16 = (long *)thunk_FUN_02b79548(plVar16,*
                                                  (undefined8 *)PTR_DAT_06312f78);
                                                  if (plVar16 == (long *)0x0) {
                                                    return;
                                                  }
                                                  lVar10 = *plVar16;
                                                  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                  if (uVar14 == 0) goto LAB_0559549c;
                                                  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                  goto LAB_05595484;
                                                  }
                                                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar10 = *plVar16;
                                                  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                  if (uVar14 != 0) {
                                                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar15 + -2) == *(long *)puVar4
                                                         ) {
                                                        puVar11 = (undefined8 *)
                                                                  (lVar10 + (long)(*piVar15 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_0559537c;
                                                      }
                                                      uVar14 = uVar14 - 1;
                                                      piVar15 = piVar15 + 4;
                                                    } while (uVar14 != 0);
                                                  }
                                                  puVar11 = (undefined8 *)
                                                            FUN_02b7654c(plVar16,*(long *)puVar4,1);
LAB_0559537c:
                                                  plVar17 = (long *)(*(code *)*puVar11)(plVar16,
                                                  puVar11[1]);
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  if (*(long *)(*plVar17 + 0x40) !=
                                                      *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3ce44();
                                                  }
                                                  puVar11 = (undefined8 *)thunk_FUN_02b7978c();
                                                  plVar17 = (long *)puVar11[1];
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar10 = *unaff_x27;
                                                  if ((*(byte *)(*plVar17 + 0x130) <
                                                       *(byte *)(lVar10 + 0x130)) ||
                                                     (*(long *)(*(long *)(*plVar17 + 200) +
                                                                (ulong)*(byte *)(lVar10 + 0x130) * 8
                                                               + -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3ce44();
                                                  }
                                                  lVar13 = plVar17[2];
                                                  lVar1 = plVar17[3];
                                                  uVar7 = *puVar11;
                                                  lVar10 = thunk_FUN_02b79644(lVar10);
                                                  FUN_05590c4c(lVar10,lVar13,lVar1,1,0,0);
                                                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  lVar13 = *unaff_x25;
                                                  *(undefined1 *)(lVar10 + 0x61) = 1;
                                                  plVar17 = *(long **)(*(long *)(lVar13 + 0xb8) +
                                                                      0x18);
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02b3cac4();
                                                  }
                                                  (**(code **)(*plVar17 + 0x2a8))
                                                            (plVar17,uVar7,lVar10,
                                                             *(undefined8 *)(*plVar17 + 0x2b0));
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


