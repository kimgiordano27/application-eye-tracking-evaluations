/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.TextStyle$$.ctor
ENTRY_POINT: 0145588c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 261
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_TextStyle___ctor
          (long param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar12;
  long unaff_x24;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *unaff_x27;
  ulong unaff_x28;
  double dVar16;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined4 uStack0000000000000020;
  uint uStack0000000000000024;
  long in_stack_00000028;
  
  while (plVar6 = (long *)FUN_01454ee8(param_2,param_3,param_4,param_5,unaff_x24,
                                       *(undefined8 *)(param_1 + 0x20),
                                       *(undefined8 *)(unaff_x19 + 0x20),
                                       *(undefined8 *)(unaff_x19 + 0x30),
                                       *(undefined4 *)(unaff_x19 + 0x28)), plVar6 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if ((iVar3 != iStack000000000000001c) ||
       (iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0)),
       iVar3 != iStack0000000000000018)) {
      lVar14 = *(long *)(unaff_x19 + 0x38);
      if (lVar14 != 0) {
        uVar12 = *(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>__ctor__
        ;
        uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        uVar7 = FUN_01600424(uVar12,uVar7,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                             ,0);
        (**(code **)(lVar14 + 0x18))
                  (*(undefined8 *)(lVar14 + 0x40),uVar7,*(undefined8 *)(lVar14 + 0x28));
      }
      if (*(int *)(unaff_x19 + 0x28) < 4) {
        if (unaff_x24 == 0) break;
      }
      else {
        plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,10);
        if (plVar13 == (long *)0x0) break;
        if ((*(long *)Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__ != 0) &&
           (lVar14 = thunk_FUN_00d6225c(*(long *)
                                         Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__
                                        ,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_01456414;
        uVar8 = *(uint *)(plVar13 + 3);
        if (uVar8 == 0) goto LAB_01456410;
        plVar13[4] = *(long *)Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__;
        if (unaff_x24 == 0) break;
        lVar14 = *(long *)(unaff_x24 + 0x10);
        if (lVar14 != 0) {
          lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar15 == 0) goto LAB_01456414;
          uVar8 = *(uint *)(plVar13 + 3);
        }
        if (uVar8 < 2) goto LAB_01456410;
        plVar13[5] = lVar14;
        if (*(long *)Method_System_Array_CreateInstance__ != 0) {
          lVar14 = thunk_FUN_00d6225c(*(long *)Method_System_Array_CreateInstance__,
                                      *(undefined8 *)(*plVar13 + 0x40));
          if (lVar14 == 0) goto LAB_01456414;
          uVar8 = *(uint *)(plVar13 + 3);
        }
        if (uVar8 < 3) goto LAB_01456410;
        plVar13[6] = *(long *)Method_System_Array_CreateInstance__;
        uStack0000000000000020 =
             (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        lVar14 = FUN_0176eb1c(&stack0x00000020,0);
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
        goto LAB_01456414;
        uVar8 = *(uint *)(plVar13 + 3);
        if (uVar8 < 4) goto LAB_01456410;
        plVar13[7] = lVar14;
        if (*(long *)
             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ != 0)
        {
          lVar14 = thunk_FUN_00d6225c(*(long *)
                                       Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                      ,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar14 == 0) goto LAB_01456414;
          uVar8 = *(uint *)(plVar13 + 3);
        }
        if (uVar8 < 5) goto LAB_01456410;
        plVar13[8] = *(long *)
                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
        ;
        uStack0000000000000020 =
             (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        lVar14 = FUN_0176eb1c(&stack0x00000020,0);
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
        goto LAB_01456414;
        uVar8 = *(uint *)(plVar13 + 3);
        if (uVar8 < 6) goto LAB_01456410;
        plVar13[9] = lVar14;
        if (*(long *)StringLiteral_347 != 0) {
          lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_347,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar14 == 0) goto LAB_01456414;
          uVar8 = *(uint *)(plVar13 + 3);
        }
        if (uVar8 < 7) goto LAB_01456410;
        plVar13[10] = *(long *)StringLiteral_347;
        lVar14 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
        goto LAB_01456414;
        uVar8 = *(uint *)(plVar13 + 3);
        if (uVar8 < 8) goto LAB_01456410;
        plVar13[0xb] = lVar14;
        if (*(long *)
             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ != 0)
        {
          lVar14 = thunk_FUN_00d6225c(*(long *)
                                       Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                      ,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar14 == 0) goto LAB_01456414;
          uVar8 = *(uint *)(plVar13 + 3);
        }
        if (uVar8 < 9) goto LAB_01456410;
        plVar13[0xc] = *(long *)
                        Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
        ;
        lVar14 = FUN_0176eb1c(&stack0x00000018,0);
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
        goto LAB_01456414;
        if (*(uint *)(plVar13 + 3) < 10) goto LAB_01456410;
        plVar13[0xd] = lVar14;
        uVar7 = FUN_01600844(plVar13,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar7,0);
      }
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (plVar6 = (long *)FUN_0143f338(*(long *)(unaff_x19 + 0x30),
                                        *(undefined8 *)(unaff_x24 + 0x10),plVar6,
                                        iStack000000000000001c,iStack0000000000000018,0),
         plVar6 == (long *)0x0)) break;
    }
    iVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    iVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    if (*(long *)(unaff_x19 + 0x20) == 0) break;
    if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x49) != '\0') {
      if ((unaff_x24 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) break;
      plVar6 = (long *)FUN_0143f1a4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x24 + 0x10),
                                    plVar6,0);
      lVar14 = *(long *)(unaff_x19 + 0x20);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x58) == 0)) break;
      lVar15 = *(long *)(lVar14 + 0x50);
      FUN_0132138c(*(long *)(lVar14 + 0x58),unaff_x28 & 0xffffffff,&stack0x00000028,*unaff_x22);
      if (lVar15 == 0) break;
      FUN_0144a1a0(lVar15,plVar6,in_stack_00000028,unaff_x24);
    }
    if (unaff_x27 == (long *)0x0) break;
    if ((plVar6 != (long *)0x0) &&
       (lVar14 = thunk_FUN_00d6225c(plVar6,*(undefined8 *)(*unaff_x27 + 0x40)), lVar14 == 0)) {
LAB_01456414:
      uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,0);
    }
    if (*(uint *)(unaff_x27 + 3) <= unaff_x28) {
LAB_01456410:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x27[unaff_x28 + 4] = (long)plVar6;
    lVar14 = *(long *)(unaff_x19 + 0x20);
    unaff_x20 = unaff_x20 + iVar4 * iVar3;
    unaff_x28 = unaff_x28 + 1;
    if (lVar14 == 0) break;
    while( true ) {
      lVar14 = *(long *)(lVar14 + 0x58);
      if (lVar14 == 0) goto LAB_0145640c;
      if ((long)unaff_x28 < (long)*(int *)(lVar14 + 0x18)) break;
      plVar6 = *(long **)(unaff_x19 + 0x40);
      if (plVar6 != (long *)0x0) {
        lVar14 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_2590) {
              puVar5 = (undefined8 *)(lVar14 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
              goto LAB_01455d6c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_2590,0xb);
LAB_01455d6c:
        (*(code *)*puVar5)(plVar6,unaff_x20,puVar5[1]);
      }
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      dVar16 = SQRT((double)unaff_x20);
      if ((6144.0 < dVar16) && (1 < *(int *)(unaff_x19 + 0x28))) {
        uStack0000000000000020 = 0x2000;
        uVar7 = FUN_0176eb1c(&stack0x00000020,0);
        uVar7 = FUN_01600424(*(undefined8 *)
                              Sirenix_Serialization_IOverridesSerializationPolicy_TypeInfo,uVar7,
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_EqualInstruction_EqualByteLiftedToNull_TypeInfo
                             ,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar7,0);
      }
      plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                           SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                         );
      if (plVar6 == (long *)0x0) goto LAB_0145640c;
      FUN_02671bf8(plVar6,1,1,5,1,0);
      lVar15 = *(long *)(unaff_x19 + 0x38);
      lVar14 = 0;
      uVar7 = extraout_x1;
      if (lVar15 != 0) {
        if (unaff_x24 == 0) goto LAB_0145640c;
        uVar7 = FUN_015f5b28(*(undefined8 *)StringLiteral_8635,*(undefined8 *)(unaff_x24 + 0x10),0);
        (**(code **)(lVar15 + 0x18))
                  (*(undefined8 *)(lVar15 + 0x40),uVar7,*(undefined8 *)(lVar15 + 0x28));
        lVar14 = *(long *)(unaff_x19 + 0x38);
        uVar7 = extraout_x1_00;
      }
      if (uStack0000000000000024 == 0) {
        if (lVar14 != 0) {
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00000010 = dVar16;
          uVar7 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
          uVar7 = FUN_015f5b28(*(undefined8 *)Method_Obi_ObiNativeList<float>_CopyReplicate__,uVar7,
                               0);
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),uVar7,*(undefined8 *)(lVar14 + 0x28));
        }
        if (2 < *(int *)(unaff_x19 + 0x28)) {
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00000010 = dVar16;
          uVar7 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
          uVar7 = FUN_015f5b28(*(undefined8 *)
                                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_provider__
                               ,uVar7,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar7,0);
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        in_stack_00000008 =
             FUN_026714b4(plVar6,unaff_x27,*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x18),
                          0x2000,0,0);
        if (2 < *(int *)(unaff_x19 + 0x28)) {
          plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
          if (plVar13 == (long *)0x0) goto LAB_0145640c;
          if ((*(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__ != 0)
             && (lVar14 = thunk_FUN_00d6225c(*(long *)
                                              Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__
                                             ,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
          goto LAB_01456414;
          if ((int)plVar13[3] == 0) goto LAB_01456410;
          plVar13[4] = *(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__
          ;
          if (unaff_x27 == (long *)0x0) goto LAB_0145640c;
          uStack0000000000000020 = (undefined4)unaff_x27[3];
          lVar14 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
          goto LAB_01456414;
          puVar2 = Method_System_Collections_Hashtable_OnDeserialization__;
          uVar8 = *(uint *)(plVar13 + 3);
          if (uVar8 < 2) goto LAB_01456410;
          plVar13[5] = lVar14;
          lVar14 = *(long *)puVar2;
          if (lVar14 != 0) {
            lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar14 == 0) goto LAB_01456414;
            uVar8 = *(uint *)(plVar13 + 3);
          }
          if (uVar8 < 3) goto LAB_01456410;
          plVar13[6] = *(long *)puVar2;
          uStack0000000000000020 =
               (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
          lVar14 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
          goto LAB_01456414;
          uVar8 = *(uint *)(plVar13 + 3);
          if (uVar8 < 4) goto LAB_01456410;
          plVar13[7] = lVar14;
          if (*(long *)StringLiteral_3287 != 0) {
            lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar13 + 0x40)
                                       );
            if (lVar14 == 0) goto LAB_01456414;
            uVar8 = *(uint *)(plVar13 + 3);
          }
          if (uVar8 < 5) goto LAB_01456410;
          plVar13[8] = *(long *)StringLiteral_3287;
          uStack0000000000000020 =
               (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
          lVar14 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
          goto LAB_01456414;
          if (*(uint *)(plVar13 + 3) < 6) goto LAB_01456410;
          plVar13[9] = lVar14;
          uVar7 = FUN_01600844(plVar13,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar7,0);
        }
        uStack0000000000000004 =
             (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        uStack0000000000000000 =
             (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        FUN_026723f8(plVar6,0);
        puVar5 = (undefined8 *)StringLiteral_11624;
      }
      else {
        if (lVar14 != 0) {
          if (unaff_x24 == 0) goto LAB_0145640c;
          uVar7 = FUN_015f5b28(*(undefined8 *)
                                Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<HapticCapabilities>__
                               ,*(undefined8 *)(unaff_x24 + 0x10),0);
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),uVar7,*(undefined8 *)(lVar14 + 0x28));
          uVar7 = extraout_x1_01;
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        plVar6 = (long *)FUN_014549d4(unaff_x27,uVar7,in_stack_00000008,uStack0000000000000004,
                                      uStack0000000000000000);
        puVar5 = (undefined8 *)StringLiteral_11624;
      }
      while( true ) {
        uVar8 = uStack0000000000000024;
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 == (long *)0x0) goto LAB_0145640c;
        lVar14 = (long)(int)uStack0000000000000024;
        if ((plVar6 != (long *)0x0) &&
           (lVar15 = thunk_FUN_00d6225c(plVar6,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
        goto LAB_01456414;
        if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01456410;
        plVar13[lVar14 + 4] = (long)plVar6;
        puVar2 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
        lVar14 = *(long *)(unaff_x19 + 0x20);
        if (lVar14 == 0) goto LAB_0145640c;
        if ((*(char *)(lVar14 + 0x2c) != '\0') &&
           (lVar15 = *(long *)(unaff_x19 + 0x40), lVar15 != 0)) {
          lVar9 = *(long *)(unaff_x19 + 0x48);
          if (lVar9 == 0) goto LAB_0145640c;
          if (*(uint *)(lVar9 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
          if (*(long *)(lVar14 + 0x70) == 0) goto LAB_0145640c;
          uVar7 = *(undefined8 *)(lVar9 + (long)(int)uStack0000000000000024 * 8 + 0x20);
          FUN_0132138c(*(long *)(lVar14 + 0x70),(long)(int)uStack0000000000000024,&stack0x00000028,
                       *puVar5);
          FUN_0143dae4(lVar14,lVar15,uVar7,in_stack_00000028,uStack0000000000000024,0);
          lVar14 = *(long *)(unaff_x19 + 0x20);
          if (lVar14 == 0) goto LAB_0145640c;
        }
        if (unaff_x24 == 0) goto LAB_0145640c;
        lVar14 = *(long *)(lVar14 + 0x90);
        uVar7 = *(undefined8 *)(unaff_x24 + 0x10);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(puVar2);
          DAT_03774d77 = '\x01';
        }
        if (lVar14 == 0) goto LAB_0145640c;
        FUN_0267df80(**(undefined4 **)(*(long *)puVar2 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],lVar14,uVar7,0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90);
        uVar7 = *(undefined8 *)(unaff_x24 + 0x10);
        if (DAT_03774e1e == '\0') {
          thunk_FUN_00d48444(puVar2);
          DAT_03774e1e = '\x01';
        }
        if (lVar14 == 0) goto LAB_0145640c;
        FUN_0267e174(*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),lVar14,uVar7,0);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
        FUN_0143f660(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x24 + 0x10),0);
        if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_017aa9b4(0);
        uVar8 = uStack0000000000000024 + 1;
        uStack0000000000000024 = uVar8;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        iVar3 = FUN_01459960(*(long *)(unaff_x19 + 0x20),0);
        if (iVar3 <= (int)uVar8) {
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x20) = in_stack_00000008;
            return 0;
          }
          goto LAB_0145640c;
        }
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar14 == 0)) goto LAB_0145640c;
        FUN_0132138c(lVar14,uStack0000000000000024,&stack0x00000028,*puVar5);
        unaff_x24 = in_stack_00000028;
        uVar8 = uStack0000000000000024;
        lVar14 = *(long *)(unaff_x19 + 0x20);
        if (lVar14 == 0) goto LAB_0145640c;
        cVar1 = *(char *)(lVar14 + 0x49);
        uVar7 = *(undefined8 *)(lVar14 + 0x80);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_01457470(uVar8,cVar1 != '\0',uVar7,0);
        if ((uVar10 & 1) != 0) break;
        plVar6 = (long *)0x0;
      }
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        uVar7 = FUN_0176eb1c((long)&stack0x00000020 + 4,0);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
        uStack0000000000000020 = FUN_0143ef40(*(long *)(unaff_x19 + 0x30),0);
        uVar12 = FUN_0176eb1c(&stack0x00000020,0);
        uVar7 = FUN_0160073c(*(undefined8 *)PTR_DAT_033f01e8,uVar7,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                             ,uVar12,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar7,0);
      }
      lVar14 = *(long *)(unaff_x19 + 0x20);
      if (lVar14 == 0) goto LAB_0145640c;
      Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                (*(undefined8 *)(lVar14 + 0x58),*(undefined8 *)(unaff_x19 + 0x30),
                 uStack0000000000000024,lVar14,0);
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58), lVar14 == 0)) goto LAB_0145640c;
      unaff_x27 = (long *)FUN_00da4fb8(*(undefined8 *)Oculus_Platform_LogEventName_TypeInfo,
                                       *(undefined4 *)(lVar14 + 0x18));
      lVar14 = *(long *)(unaff_x19 + 0x20);
      if (lVar14 == 0) goto LAB_0145640c;
      unaff_x28 = 0;
    }
    FUN_0132138c(lVar14,unaff_x28 & 0xffffffff,&stack0x00000028,*unaff_x22);
    lVar14 = in_stack_00000028;
    if (in_stack_00000028 == 0) break;
    iStack000000000000001c = *(int *)(in_stack_00000028 + 0x38);
    iStack0000000000000018 = *(int *)(in_stack_00000028 + 0x3c);
    lVar15 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
    if (*(long *)(lVar15 + (long)(int)uStack0000000000000024 * 8 + 0x20) == 0) break;
    plVar6 = (long *)FUN_01443ffc();
    lVar15 = *(long *)(unaff_x19 + 0x38);
    if (lVar15 != 0) {
      if (plVar6 != (long *)0x0) {
        unaff_x21 = plVar6;
      }
      uVar7 = *(undefined8 *)Method_CharacterManager_ZoneExited__;
      if (plVar6 == (long *)0x0) {
        uVar12 = 0;
      }
      else {
        if (unaff_x21 == (long *)0x0) break;
        uVar12 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
      }
      uVar7 = FUN_015f5b28(uVar7,uVar12,0);
      (**(code **)(lVar15 + 0x18))
                (*(undefined8 *)(lVar15 + 0x40),uVar7,*(undefined8 *)(lVar15 + 0x28));
    }
    plVar13 = *(long **)(unaff_x19 + 0x40);
    if (plVar13 != (long *)0x0) {
      lVar15 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_2590) {
            puVar5 = (undefined8 *)(lVar15 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_01455850;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_2590,2);
LAB_01455850:
      (*(code *)*puVar5)(plVar13,plVar6,1,1,puVar5[1]);
    }
    param_1 = *(long *)(lVar14 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
    param_1 = param_1 + (long)(int)uStack0000000000000024 * 8;
    param_2 = (ulong)*(uint *)(lVar14 + 0x28);
    param_3 = *(undefined4 *)(lVar14 + 0x2c);
    param_4 = *(undefined4 *)(lVar14 + 0x30);
    param_5 = *(undefined4 *)(lVar14 + 0x34);
  }
LAB_0145640c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


