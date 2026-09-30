/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$ProcessTypeFromInspector
ENTRY_POINT: 01455ce8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 196
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_ActionManager__ProcessTypeFromInspector(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  double dVar15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined4 uStack0000000000000020;
  uint uStack0000000000000024;
  long in_stack_00000028;
  
  while( true ) {
    param_1[4] = (long)unaff_x29;
    lVar9 = *(long *)(unaff_x19 + 0x20);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01455c90 with catch @ 01455cf4
                        */
    unaff_x20 = unaff_x20 + unaff_w25 * unaff_w23;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01455c48 with catch @ 01455cf8
                        */
    unaff_x28 = unaff_x28 + 1;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01455c1c with catch @ 01455cfc
                        */
    if (lVar9 == 0) break;
    while( true ) {
      lVar9 = *(long *)(lVar9 + 0x58);
      if (lVar9 == 0) goto LAB_0145640c;
      if ((long)unaff_x28 < (long)*(int *)(lVar9 + 0x18)) break;
      plVar4 = *(long **)(unaff_x19 + 0x40);
      if (plVar4 != (long *)0x0) {
                    /* try { // try from 01455d14 to 01555d17 has its CatchHandler @ 01455d24 */
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    /* catch() { ... } // from try @ 01455d14 with catch @ 01455d24 */
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_2590) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
              goto LAB_01455d6c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar4,*(long *)StringLiteral_2590,0xb);
LAB_01455d6c:
        (*(code *)*puVar6)(plVar4,unaff_x20,puVar6[1]);
      }
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      dVar15 = SQRT((double)unaff_x20);
      if ((6144.0 < dVar15) && (1 < *(int *)(unaff_x19 + 0x28))) {
        uStack0000000000000020 = 0x2000;
        uVar13 = FUN_0176eb1c(&stack0x00000020,0);
        uVar13 = FUN_01600424(*(undefined8 *)
                               Sirenix_Serialization_IOverridesSerializationPolicy_TypeInfo,uVar13,
                              *(undefined8 *)
                               System_Linq_Expressions_Interpreter_EqualInstruction_EqualByteLiftedToNull_TypeInfo
                              ,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar13,0);
      }
      plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                           SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                         );
      if (plVar4 == (long *)0x0) goto LAB_0145640c;
      FUN_02671bf8(plVar4,1,1,5,1,0);
      lVar8 = *(long *)(unaff_x19 + 0x38);
      lVar9 = 0;
      uVar13 = extraout_x1;
      if (lVar8 != 0) {
        if (unaff_x24 == 0) goto LAB_0145640c;
        uVar13 = FUN_015f5b28(*(undefined8 *)StringLiteral_8635,*(undefined8 *)(unaff_x24 + 0x10),0)
        ;
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),uVar13,*(undefined8 *)(lVar8 + 0x28));
        lVar9 = *(long *)(unaff_x19 + 0x38);
        uVar13 = extraout_x1_00;
      }
      if (uStack0000000000000024 == 0) {
        if (lVar9 != 0) {
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00000010 = dVar15;
          uVar13 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
          uVar13 = FUN_015f5b28(*(undefined8 *)Method_Obi_ObiNativeList<float>_CopyReplicate__,
                                uVar13,0);
          (**(code **)(lVar9 + 0x18))
                    (*(undefined8 *)(lVar9 + 0x40),uVar13,*(undefined8 *)(lVar9 + 0x28));
        }
        if (2 < *(int *)(unaff_x19 + 0x28)) {
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00000010 = dVar15;
          uVar13 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
          uVar13 = FUN_015f5b28(*(undefined8 *)
                                 Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_provider__
                                ,uVar13,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar13,0);
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        in_stack_00000008 =
             FUN_026714b4(plVar4,unaff_x27,*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x18),
                          0x2000,0,0);
        if (2 < *(int *)(unaff_x19 + 0x28)) {
          plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
          if (plVar14 == (long *)0x0) goto LAB_0145640c;
          if ((*(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__ != 0)
             && (lVar9 = thunk_FUN_00d6225c(*(long *)
                                             Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__
                                            ,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
          goto LAB_01456414;
          if ((int)plVar14[3] == 0) goto LAB_01456410;
          plVar14[4] = *(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__
          ;
          if (unaff_x27 == (long *)0x0) goto LAB_0145640c;
          uStack0000000000000020 = (undefined4)unaff_x27[3];
          lVar9 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar9 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
          goto LAB_01456414;
          puVar2 = Method_System_Collections_Hashtable_OnDeserialization__;
          uVar7 = *(uint *)(plVar14 + 3);
          if (uVar7 < 2) goto LAB_01456410;
          plVar14[5] = lVar9;
          lVar9 = *(long *)puVar2;
          if (lVar9 != 0) {
            lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar14 + 0x40));
            if (lVar9 == 0) goto LAB_01456414;
            uVar7 = *(uint *)(plVar14 + 3);
          }
          if (uVar7 < 3) goto LAB_01456410;
          plVar14[6] = *(long *)puVar2;
          uStack0000000000000020 =
               (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
          lVar9 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar9 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
          goto LAB_01456414;
          uVar7 = *(uint *)(plVar14 + 3);
          if (uVar7 < 4) goto LAB_01456410;
          plVar14[7] = lVar9;
          if (*(long *)StringLiteral_3287 != 0) {
            lVar9 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar14 + 0x40))
            ;
            if (lVar9 == 0) goto LAB_01456414;
            uVar7 = *(uint *)(plVar14 + 3);
          }
          if (uVar7 < 5) goto LAB_01456410;
          plVar14[8] = *(long *)StringLiteral_3287;
          uStack0000000000000020 =
               (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
          lVar9 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar9 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
          goto LAB_01456414;
          if (*(uint *)(plVar14 + 3) < 6) goto LAB_01456410;
          plVar14[9] = lVar9;
          uVar13 = FUN_01600844(plVar14,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar13,0);
        }
        uStack0000000000000004 =
             (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
        uStack0000000000000000 =
             (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        FUN_026723f8(plVar4,0);
        puVar6 = (undefined8 *)StringLiteral_11624;
      }
      else {
        if (lVar9 != 0) {
          if (unaff_x24 == 0) goto LAB_0145640c;
          uVar13 = FUN_015f5b28(*(undefined8 *)
                                 Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<HapticCapabilities>__
                                ,*(undefined8 *)(unaff_x24 + 0x10),0);
          (**(code **)(lVar9 + 0x18))
                    (*(undefined8 *)(lVar9 + 0x40),uVar13,*(undefined8 *)(lVar9 + 0x28));
          uVar13 = extraout_x1_01;
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        plVar4 = (long *)FUN_014549d4(unaff_x27,uVar13,in_stack_00000008,uStack0000000000000004,
                                      uStack0000000000000000);
        puVar6 = (undefined8 *)StringLiteral_11624;
      }
      while( true ) {
        uVar7 = uStack0000000000000024;
        plVar14 = *(long **)(unaff_x19 + 0x48);
        if (plVar14 == (long *)0x0) goto LAB_0145640c;
        lVar9 = (long)(int)uStack0000000000000024;
        if ((plVar4 != (long *)0x0) &&
           (lVar8 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
        goto LAB_01456414;
        if (*(uint *)(plVar14 + 3) <= uVar7) goto LAB_01456410;
        plVar14[lVar9 + 4] = (long)plVar4;
        puVar2 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
        lVar9 = *(long *)(unaff_x19 + 0x20);
        if (lVar9 == 0) goto LAB_0145640c;
        if ((*(char *)(lVar9 + 0x2c) != '\0') && (lVar8 = *(long *)(unaff_x19 + 0x40), lVar8 != 0))
        {
          lVar10 = *(long *)(unaff_x19 + 0x48);
          if (lVar10 == 0) goto LAB_0145640c;
          if (*(uint *)(lVar10 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
          if (*(long *)(lVar9 + 0x70) == 0) goto LAB_0145640c;
          uVar13 = *(undefined8 *)(lVar10 + (long)(int)uStack0000000000000024 * 8 + 0x20);
          FUN_0132138c(*(long *)(lVar9 + 0x70),(long)(int)uStack0000000000000024,&stack0x00000028,
                       *puVar6);
          FUN_0143dae4(lVar9,lVar8,uVar13,in_stack_00000028,uStack0000000000000024,0);
          lVar9 = *(long *)(unaff_x19 + 0x20);
          if (lVar9 == 0) goto LAB_0145640c;
        }
        if (unaff_x24 == 0) goto LAB_0145640c;
        lVar9 = *(long *)(lVar9 + 0x90);
        uVar13 = *(undefined8 *)(unaff_x24 + 0x10);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(puVar2);
          DAT_03774d77 = '\x01';
        }
        if (lVar9 == 0) goto LAB_0145640c;
        FUN_0267df80(**(undefined4 **)(*(long *)puVar2 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],lVar9,uVar13,0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90);
        uVar13 = *(undefined8 *)(unaff_x24 + 0x10);
        if (DAT_03774e1e == '\0') {
          thunk_FUN_00d48444(puVar2);
          DAT_03774e1e = '\x01';
        }
        if (lVar9 == 0) goto LAB_0145640c;
        FUN_0267e174(*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),lVar9,uVar13,0);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
        FUN_0143f660(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x24 + 0x10),0);
        if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_017aa9b4(0);
        uVar7 = uStack0000000000000024 + 1;
        uStack0000000000000024 = uVar7;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        iVar3 = FUN_01459960(*(long *)(unaff_x19 + 0x20),0);
        if (iVar3 <= (int)uVar7) {
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x20) = in_stack_00000008;
            return 0;
          }
          goto LAB_0145640c;
        }
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar9 == 0)) goto LAB_0145640c;
        FUN_0132138c(lVar9,uStack0000000000000024,&stack0x00000028,*puVar6);
        unaff_x24 = in_stack_00000028;
        uVar7 = uStack0000000000000024;
        lVar9 = *(long *)(unaff_x19 + 0x20);
        if (lVar9 == 0) goto LAB_0145640c;
        cVar1 = *(char *)(lVar9 + 0x49);
        uVar13 = *(undefined8 *)(lVar9 + 0x80);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_01457470(uVar7,cVar1 != '\0',uVar13,0);
        if ((uVar11 & 1) != 0) break;
        plVar4 = (long *)0x0;
      }
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        uVar13 = FUN_0176eb1c((long)&stack0x00000020 + 4,0);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
        uStack0000000000000020 = FUN_0143ef40(*(long *)(unaff_x19 + 0x30),0);
        uVar5 = FUN_0176eb1c(&stack0x00000020,0);
        uVar13 = FUN_0160073c(*(undefined8 *)PTR_DAT_033f01e8,uVar13,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                              ,uVar5,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar13,0);
      }
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if (lVar9 == 0) goto LAB_0145640c;
      Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                (*(undefined8 *)(lVar9 + 0x58),*(undefined8 *)(unaff_x19 + 0x30),
                 uStack0000000000000024,lVar9,0);
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58), lVar9 == 0)) goto LAB_0145640c;
      unaff_x27 = (long *)FUN_00da4fb8(*(undefined8 *)Oculus_Platform_LogEventName_TypeInfo,
                                       *(undefined4 *)(lVar9 + 0x18));
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if (lVar9 == 0) goto LAB_0145640c;
      unaff_x28 = 0;
    }
    FUN_0132138c(lVar9,unaff_x28 & 0xffffffff,&stack0x00000028,*unaff_x22);
    lVar9 = in_stack_00000028;
    if (in_stack_00000028 == 0) break;
    iStack000000000000001c = *(int *)(in_stack_00000028 + 0x38);
    iStack0000000000000018 = *(int *)(in_stack_00000028 + 0x3c);
    lVar8 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uStack0000000000000024) {
LAB_01456410:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (*(long *)(lVar8 + (long)(int)uStack0000000000000024 * 8 + 0x20) == 0) break;
    plVar4 = (long *)FUN_01443ffc();
    lVar8 = *(long *)(unaff_x19 + 0x38);
    if (lVar8 != 0) {
      if (plVar4 != (long *)0x0) {
        unaff_x21 = plVar4;
      }
      uVar13 = *(undefined8 *)Method_CharacterManager_ZoneExited__;
      if (plVar4 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        if (unaff_x21 == (long *)0x0) break;
        uVar5 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
      }
      uVar13 = FUN_015f5b28(uVar13,uVar5,0);
      (**(code **)(lVar8 + 0x18))
                (*(undefined8 *)(lVar8 + 0x40),uVar13,*(undefined8 *)(lVar8 + 0x28));
    }
    plVar14 = *(long **)(unaff_x19 + 0x40);
    if (plVar14 != (long *)0x0) {
      lVar8 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_2590) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_01455850;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_2590,2);
LAB_01455850:
      (*(code *)*puVar6)(plVar14,plVar4,1,1,puVar6[1]);
    }
    lVar8 = *(long *)(lVar9 + 0x10);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
    unaff_x29 = (long *)FUN_01454ee8(*(undefined4 *)(lVar9 + 0x28),*(undefined4 *)(lVar9 + 0x2c),
                                     *(undefined4 *)(lVar9 + 0x30),*(undefined4 *)(lVar9 + 0x34),
                                     unaff_x24,
                                     *(undefined8 *)
                                      (lVar8 + (long)(int)uStack0000000000000024 * 8 + 0x20),
                                     *(undefined8 *)(unaff_x19 + 0x20),
                                     *(undefined8 *)(unaff_x19 + 0x30),
                                     *(undefined4 *)(unaff_x19 + 0x28));
    if (unaff_x29 == (long *)0x0) break;
    iVar3 = (**(code **)(*unaff_x29 + 0x188))(unaff_x29,*(undefined8 *)(*unaff_x29 + 400));
    if ((iVar3 != iStack000000000000001c) ||
       (iVar3 = (**(code **)(*unaff_x29 + 0x1a8))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1b0)),
       iVar3 != iStack0000000000000018)) {
      lVar9 = *(long *)(unaff_x19 + 0x38);
      if (lVar9 != 0) {
        uVar5 = *(undefined8 *)
                 Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>__ctor__
        ;
        uVar13 = (**(code **)(*unaff_x29 + 0x168))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x170));
        uVar13 = FUN_01600424(uVar5,uVar13,
                              *(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                              ,0);
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),uVar13,*(undefined8 *)(lVar9 + 0x28));
      }
      if (*(int *)(unaff_x19 + 0x28) < 4) {
        if (unaff_x24 == 0) break;
      }
      else {
        plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,10);
        if (plVar4 == (long *)0x0) break;
        if ((*(long *)Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__ != 0) &&
           (lVar9 = thunk_FUN_00d6225c(*(long *)
                                        Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__
                                       ,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
        goto LAB_01456414;
        uVar7 = *(uint *)(plVar4 + 3);
        if (uVar7 == 0) goto LAB_01456410;
        plVar4[4] = *(long *)Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__;
        if (unaff_x24 == 0) break;
        lVar9 = *(long *)(unaff_x24 + 0x10);
        if (lVar9 != 0) {
          lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar8 == 0) goto LAB_01456414;
          uVar7 = *(uint *)(plVar4 + 3);
        }
        if (uVar7 < 2) goto LAB_01456410;
        plVar4[5] = lVar9;
        if (*(long *)Method_System_Array_CreateInstance__ != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)Method_System_Array_CreateInstance__,
                                     *(undefined8 *)(*plVar4 + 0x40));
          if (lVar9 == 0) goto LAB_01456414;
          uVar7 = *(uint *)(plVar4 + 3);
        }
        if (uVar7 < 3) goto LAB_01456410;
        plVar4[6] = *(long *)Method_System_Array_CreateInstance__;
        uStack0000000000000020 =
             (**(code **)(*unaff_x29 + 0x188))(unaff_x29,*(undefined8 *)(*unaff_x29 + 400));
        lVar9 = FUN_0176eb1c(&stack0x00000020,0);
        if ((lVar9 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
        goto LAB_01456414;
        uVar7 = *(uint *)(plVar4 + 3);
        if (uVar7 < 4) goto LAB_01456410;
        plVar4[7] = lVar9;
        if (*(long *)
             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ != 0)
        {
          lVar9 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                     ,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar9 == 0) goto LAB_01456414;
          uVar7 = *(uint *)(plVar4 + 3);
        }
        if (uVar7 < 5) goto LAB_01456410;
        plVar4[8] = *(long *)
                     Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
        ;
        uStack0000000000000020 =
             (**(code **)(*unaff_x29 + 0x1a8))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1b0));
        lVar9 = FUN_0176eb1c(&stack0x00000020,0);
        if ((lVar9 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
        goto LAB_01456414;
        uVar7 = *(uint *)(plVar4 + 3);
        if (uVar7 < 6) goto LAB_01456410;
        plVar4[9] = lVar9;
        if (*(long *)StringLiteral_347 != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)StringLiteral_347,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar9 == 0) goto LAB_01456414;
          uVar7 = *(uint *)(plVar4 + 3);
        }
        if (uVar7 < 7) goto LAB_01456410;
        plVar4[10] = *(long *)StringLiteral_347;
        lVar9 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
        if ((lVar9 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
        goto LAB_01456414;
        uVar7 = *(uint *)(plVar4 + 3);
        if (uVar7 < 8) goto LAB_01456410;
        plVar4[0xb] = lVar9;
        if (*(long *)
             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ != 0)
        {
          lVar9 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                     ,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar9 == 0) goto LAB_01456414;
          uVar7 = *(uint *)(plVar4 + 3);
        }
        if (uVar7 < 9) goto LAB_01456410;
        plVar4[0xc] = *(long *)
                       Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
        ;
        lVar9 = FUN_0176eb1c(&stack0x00000018,0);
        if ((lVar9 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
        goto LAB_01456414;
        if (*(uint *)(plVar4 + 3) < 10) goto LAB_01456410;
        plVar4[0xd] = lVar9;
        uVar13 = FUN_01600844(plVar4,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar13,0);
      }
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (unaff_x29 = (long *)FUN_0143f338(*(long *)(unaff_x19 + 0x30),
                                           *(undefined8 *)(unaff_x24 + 0x10),unaff_x29,
                                           iStack000000000000001c,iStack0000000000000018,0),
         unaff_x29 == (long *)0x0)) break;
    }
    unaff_w23 = (**(code **)(*unaff_x29 + 0x188))(unaff_x29,*(undefined8 *)(*unaff_x29 + 400));
    unaff_w25 = (**(code **)(*unaff_x29 + 0x1a8))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1b0));
    if (*(long *)(unaff_x19 + 0x20) == 0) break;
    if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x49) != '\0') {
      if ((unaff_x24 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) break;
      unaff_x29 = (long *)FUN_0143f1a4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x24 + 0x10)
                                       ,unaff_x29,0);
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x58) == 0)) break;
      lVar8 = *(long *)(lVar9 + 0x50);
      FUN_0132138c(*(long *)(lVar9 + 0x58),unaff_x28 & 0xffffffff,&stack0x00000028,*unaff_x22);
      if (lVar8 == 0) break;
      FUN_0144a1a0(lVar8,unaff_x29,in_stack_00000028,unaff_x24);
    }
    if (unaff_x27 == (long *)0x0) break;
    if ((unaff_x29 != (long *)0x0) &&
       (lVar9 = thunk_FUN_00d6225c(unaff_x29,*(undefined8 *)(*unaff_x27 + 0x40)), lVar9 == 0)) {
LAB_01456414:
      uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,0);
    }
    if (*(uint *)(unaff_x27 + 3) <= unaff_x28) goto LAB_01456410;
    param_1 = unaff_x27 + unaff_x28;
  }
LAB_0145640c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


