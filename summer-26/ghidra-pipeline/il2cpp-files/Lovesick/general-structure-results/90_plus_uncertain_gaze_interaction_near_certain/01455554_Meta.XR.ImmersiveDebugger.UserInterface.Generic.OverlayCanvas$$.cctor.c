/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvas$$.cctor
ENTRY_POINT: 01455554
PROGRAM: Lovesick-libil2cpp.so
SCORE: 231
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas___cctor(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  double dVar25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 uStack0000000000000008;
  double dStack0000000000000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined4 uStack0000000000000020;
  uint uStack0000000000000024;
  long in_stack_00000028;
  
  _iStack0000000000000018 = 0;
  dStack0000000000000010 = 0.0;
  if (*(int *)(unaff_x19 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  puVar4 = PTR_DAT_033ee2d8;
  uVar3 = DAT_028aa040;
  uVar2 = DAT_028aa028;
  uStack0000000000000020 = 0;
  uVar6 = uStack0000000000000020;
  uStack0000000000000020 = 0;
  uStack0000000000000024 = 0;
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (lVar9 != 0) {
    uStack0000000000000008 = 0;
    uStack0000000000000004 = 1;
    lVar21 = 0;
    plVar22 = (long *)0x0;
    uStack0000000000000000 = 1;
    puVar14 = (undefined8 *)StringLiteral_11624;
    while (uVar15 = uStack0000000000000024, iVar7 = FUN_01459960(lVar9,0),
          uVar6 = uStack0000000000000020, (int)uVar15 < iVar7) {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar9 == 0)) goto LAB_0145640c;
      FUN_0132138c(lVar9,uStack0000000000000024,&stack0x00000028,*puVar14);
      lVar9 = in_stack_00000028;
      uVar15 = uStack0000000000000024;
      lVar16 = *(long *)(unaff_x19 + 0x20);
      uVar6 = uStack0000000000000020;
      if (lVar16 == 0) goto LAB_0145640c;
      cVar1 = *(char *)(lVar16 + 0x49);
      uVar23 = *(undefined8 *)(lVar16 + 0x80);
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01457470(uVar15,cVar1 != '\0',uVar23,0);
      if ((uVar10 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
      else {
        if (3 < *(int *)(unaff_x19 + 0x28)) {
          uVar23 = FUN_0176eb1c(&stack0x00000024,0);
          uVar6 = uStack0000000000000020;
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
          uStack0000000000000020 = FUN_0143ef40(*(long *)(unaff_x19 + 0x30),0);
          uVar11 = FUN_0176eb1c(&stack0x00000020,0);
          uVar23 = FUN_0160073c(*(undefined8 *)PTR_DAT_033f01e8,uVar23,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                                ,uVar11,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar23,0);
        }
        lVar16 = *(long *)(unaff_x19 + 0x20);
        uVar6 = uStack0000000000000020;
        if (lVar16 == 0) goto LAB_0145640c;
        Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                  (*(undefined8 *)(lVar16 + 0x58),*(undefined8 *)(unaff_x19 + 0x30),
                   uStack0000000000000024,lVar16,0);
        uVar6 = uStack0000000000000020;
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58), lVar16 == 0)) goto LAB_0145640c;
        plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)Oculus_Platform_LogEventName_TypeInfo,
                                       *(undefined4 *)(lVar16 + 0x18));
        lVar16 = *(long *)(unaff_x19 + 0x20);
        uVar6 = uStack0000000000000020;
        if (lVar16 == 0) goto LAB_0145640c;
        uVar10 = 0;
        while( true ) {
          lVar16 = *(long *)(lVar16 + 0x58);
          uVar6 = uStack0000000000000020;
          if (lVar16 == 0) goto LAB_0145640c;
          if ((long)*(int *)(lVar16 + 0x18) <= (long)uVar10) break;
          FUN_0132138c(lVar16,uVar10 & 0xffffffff,&stack0x00000028,*(undefined8 *)puVar4);
          lVar16 = in_stack_00000028;
          uVar6 = uStack0000000000000020;
          if (in_stack_00000028 == 0) goto LAB_0145640c;
          _iStack0000000000000018 =
               CONCAT44(*(undefined4 *)(in_stack_00000028 + 0x38),
                        *(undefined4 *)(in_stack_00000028 + 0x3c));
          lVar17 = *(long *)(in_stack_00000028 + 0x10);
          if (lVar17 == 0) goto LAB_0145640c;
          if (*(uint *)(lVar17 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
          if (*(long *)(lVar17 + (long)(int)uStack0000000000000024 * 8 + 0x20) == 0)
          goto LAB_0145640c;
          plVar13 = (long *)FUN_01443ffc();
          lVar17 = *(long *)(unaff_x19 + 0x38);
          if (lVar17 != 0) {
            if (plVar13 != (long *)0x0) {
              plVar22 = plVar13;
            }
            uVar23 = *(undefined8 *)Method_CharacterManager_ZoneExited__;
            if (plVar13 == (long *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar6 = uStack0000000000000020;
              if (plVar22 == (long *)0x0) goto LAB_0145640c;
              uVar11 = (**(code **)(*plVar22 + 0x168))(plVar22,*(undefined8 *)(*plVar22 + 0x170));
            }
            uVar23 = FUN_015f5b28(uVar23,uVar11,0);
            (**(code **)(lVar17 + 0x18))
                      (uVar2,*(undefined8 *)(lVar17 + 0x40),uVar23,*(undefined8 *)(lVar17 + 0x28));
          }
          plVar24 = *(long **)(unaff_x19 + 0x40);
          if (plVar24 != (long *)0x0) {
            lVar17 = *plVar24;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_2590) {
                  puVar14 = (undefined8 *)(lVar17 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                  goto LAB_01455850;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(plVar24,*(long *)StringLiteral_2590,2);
LAB_01455850:
            (*(code *)*puVar14)(plVar24,plVar13,1,1,puVar14[1]);
          }
          lVar17 = *(long *)(lVar16 + 0x10);
          uVar6 = uStack0000000000000020;
          if (lVar17 == 0) goto LAB_0145640c;
          if (*(uint *)(lVar17 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
          plVar13 = (long *)FUN_01454ee8(*(undefined4 *)(lVar16 + 0x28),
                                         *(undefined4 *)(lVar16 + 0x2c),
                                         *(undefined4 *)(lVar16 + 0x30),
                                         *(undefined4 *)(lVar16 + 0x34),lVar9,
                                         *(undefined8 *)
                                          (lVar17 + (long)(int)uStack0000000000000024 * 8 + 0x20),
                                         *(undefined8 *)(unaff_x19 + 0x20),
                                         *(undefined8 *)(unaff_x19 + 0x30),
                                         *(undefined4 *)(unaff_x19 + 0x28));
          uVar6 = uStack0000000000000020;
          if (plVar13 == (long *)0x0) goto LAB_0145640c;
          iVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
          if (iVar7 == iStack000000000000001c) {
            iVar7 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
            if (iVar7 != iStack0000000000000018) goto LAB_014558e0;
          }
          else {
LAB_014558e0:
            lVar16 = *(long *)(unaff_x19 + 0x38);
            if (lVar16 != 0) {
              uVar11 = *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>__ctor__
              ;
              uVar23 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
              uVar23 = FUN_01600424(uVar11,uVar23,
                                    *(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                    ,0);
              (**(code **)(lVar16 + 0x18))
                        (uVar2,*(undefined8 *)(lVar16 + 0x40),uVar23,*(undefined8 *)(lVar16 + 0x28))
              ;
            }
            if (*(int *)(unaff_x19 + 0x28) < 4) {
              uVar6 = uStack0000000000000020;
              if (lVar9 == 0) goto LAB_0145640c;
            }
            else {
              plVar24 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,10);
              uVar6 = uStack0000000000000020;
              if (plVar24 == (long *)0x0) goto LAB_0145640c;
              if ((*(long *)Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__ !=
                   0) && (lVar16 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__
                                                  ,*(undefined8 *)(*plVar24 + 0x40)), lVar16 == 0))
              goto LAB_01456414;
              uVar15 = *(uint *)(plVar24 + 3);
              if (uVar15 == 0) goto LAB_01456410;
              plVar24[4] = *(long *)
                            Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__;
              uVar6 = uStack0000000000000020;
              if (lVar9 == 0) goto LAB_0145640c;
              lVar16 = *(long *)(lVar9 + 0x10);
              if (lVar16 != 0) {
                lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40));
                if (lVar17 == 0) goto LAB_01456414;
                uVar15 = *(uint *)(plVar24 + 3);
              }
              if (uVar15 < 2) goto LAB_01456410;
              plVar24[5] = lVar16;
              if (*(long *)Method_System_Array_CreateInstance__ != 0) {
                lVar16 = thunk_FUN_00d6225c(*(long *)Method_System_Array_CreateInstance__,
                                            *(undefined8 *)(*plVar24 + 0x40));
                if (lVar16 == 0) goto LAB_01456414;
                uVar15 = *(uint *)(plVar24 + 3);
              }
              if (uVar15 < 3) goto LAB_01456410;
              plVar24[6] = *(long *)Method_System_Array_CreateInstance__;
              uStack0000000000000020 =
                   (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
              lVar16 = FUN_0176eb1c(&stack0x00000020,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40)), lVar17 == 0)
                 ) goto LAB_01456414;
              uVar15 = *(uint *)(plVar24 + 3);
              if (uVar15 < 4) goto LAB_01456410;
              plVar24[7] = lVar16;
              if (*(long *)
                   Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                  != 0) {
                lVar16 = thunk_FUN_00d6225c(*(long *)
                                             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                            ,*(undefined8 *)(*plVar24 + 0x40));
                if (lVar16 == 0) goto LAB_01456414;
                uVar15 = *(uint *)(plVar24 + 3);
              }
              if (uVar15 < 5) goto LAB_01456410;
              plVar24[8] = *(long *)
                            Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
              ;
              uStack0000000000000020 =
                   (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
              lVar16 = FUN_0176eb1c(&stack0x00000020,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40)), lVar17 == 0)
                 ) goto LAB_01456414;
              uVar15 = *(uint *)(plVar24 + 3);
              if (uVar15 < 6) goto LAB_01456410;
              plVar24[9] = lVar16;
              if (*(long *)StringLiteral_347 != 0) {
                lVar16 = thunk_FUN_00d6225c(*(long *)StringLiteral_347,
                                            *(undefined8 *)(*plVar24 + 0x40));
                if (lVar16 == 0) goto LAB_01456414;
                uVar15 = *(uint *)(plVar24 + 3);
              }
              if (uVar15 < 7) goto LAB_01456410;
              plVar24[10] = *(long *)StringLiteral_347;
              lVar16 = FUN_0176eb1c(&stack0x0000001c,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40)), lVar17 == 0)
                 ) goto LAB_01456414;
              uVar15 = *(uint *)(plVar24 + 3);
              if (uVar15 < 8) goto LAB_01456410;
              plVar24[0xb] = lVar16;
              if (*(long *)
                   Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                  != 0) {
                lVar16 = thunk_FUN_00d6225c(*(long *)
                                             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                            ,*(undefined8 *)(*plVar24 + 0x40));
                if (lVar16 == 0) goto LAB_01456414;
                uVar15 = *(uint *)(plVar24 + 3);
              }
              if (uVar15 < 9) goto LAB_01456410;
              plVar24[0xc] = *(long *)
                              Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
              ;
              lVar16 = FUN_0176eb1c(&stack0x00000018,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40)), lVar17 == 0)
                 ) goto LAB_01456414;
              if (*(uint *)(plVar24 + 3) < 10) goto LAB_01456410;
              plVar24[0xd] = lVar16;
              uVar23 = FUN_01600844(plVar24,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661754(uVar23,0);
            }
            uVar6 = uStack0000000000000020;
            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
            plVar13 = (long *)FUN_0143f338(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(lVar9 + 0x10)
                                           ,plVar13,iStack000000000000001c,
                                           _iStack0000000000000018 & 0xffffffff,0);
            uVar6 = uStack0000000000000020;
            if (plVar13 == (long *)0x0) goto LAB_0145640c;
          }
          iVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
          iVar8 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
          uVar6 = uStack0000000000000020;
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
          if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x49) != '\0') {
            if ((lVar9 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) goto LAB_0145640c;
            plVar13 = (long *)FUN_0143f1a4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(lVar9 + 0x10)
                                           ,plVar13,0);
            lVar16 = *(long *)(unaff_x19 + 0x20);
            uVar6 = uStack0000000000000020;
            if ((lVar16 == 0) || (*(long *)(lVar16 + 0x58) == 0)) goto LAB_0145640c;
            lVar17 = *(long *)(lVar16 + 0x50);
            FUN_0132138c(*(long *)(lVar16 + 0x58),uVar10 & 0xffffffff,&stack0x00000028,
                         *(undefined8 *)puVar4);
            uVar6 = uStack0000000000000020;
            if (lVar17 == 0) goto LAB_0145640c;
            FUN_0144a1a0(lVar17,plVar13,in_stack_00000028,lVar9);
          }
          uVar6 = uStack0000000000000020;
          if (plVar12 == (long *)0x0) goto LAB_0145640c;
          if ((plVar13 != (long *)0x0) &&
             (lVar16 = thunk_FUN_00d6225c(plVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar16 == 0))
          goto LAB_01456414;
          if (*(uint *)(plVar12 + 3) <= uVar10) goto LAB_01456410;
          plVar12[uVar10 + 4] = (long)plVar13;
          lVar16 = *(long *)(unaff_x19 + 0x20);
          lVar21 = lVar21 + iVar8 * iVar7;
          uVar10 = uVar10 + 1;
          uVar6 = uStack0000000000000020;
          if (lVar16 == 0) goto LAB_0145640c;
        }
        plVar13 = *(long **)(unaff_x19 + 0x40);
        if (plVar13 != (long *)0x0) {
          lVar16 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar10 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_2590) {
                puVar14 = (undefined8 *)(lVar16 + (long)(*piVar20 + 0xb) * 0x10 + 0x138);
                goto LAB_01455d6c;
              }
              uVar10 = uVar10 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar10 != 0);
          }
          puVar14 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_2590,0xb);
LAB_01455d6c:
          (*(code *)*puVar14)(plVar13,lVar21,puVar14[1]);
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar25 = SQRT((double)lVar21);
        if ((6144.0 < dVar25) && (1 < *(int *)(unaff_x19 + 0x28))) {
          uStack0000000000000020 = 0x2000;
          uVar23 = FUN_0176eb1c(&stack0x00000020,0);
          uVar23 = FUN_01600424(*(undefined8 *)
                                 Sirenix_Serialization_IOverridesSerializationPolicy_TypeInfo,uVar23
                                ,*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualByteLiftedToNull_TypeInfo
                                ,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar23,0);
        }
        plVar13 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                              SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                            );
        uVar6 = uStack0000000000000020;
        if (plVar13 == (long *)0x0) goto LAB_0145640c;
        FUN_02671bf8(plVar13,1,1,5,1,0);
        lVar17 = *(long *)(unaff_x19 + 0x38);
        lVar16 = 0;
        uVar23 = extraout_x1;
        if (lVar17 != 0) {
          uVar6 = uStack0000000000000020;
          if (lVar9 == 0) goto LAB_0145640c;
          uVar23 = FUN_015f5b28(*(undefined8 *)StringLiteral_8635,*(undefined8 *)(lVar9 + 0x10),0);
          (**(code **)(lVar17 + 0x18))
                    (0x3e800000,*(undefined8 *)(lVar17 + 0x40),uVar23,*(undefined8 *)(lVar17 + 0x28)
                    );
          lVar16 = *(long *)(unaff_x19 + 0x38);
          uVar23 = extraout_x1_00;
        }
        if (uStack0000000000000024 == 0) {
          if (lVar16 != 0) {
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dStack0000000000000010 = dVar25;
            uVar23 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
            uVar23 = FUN_015f5b28(*(undefined8 *)Method_Obi_ObiNativeList<float>_CopyReplicate__,
                                  uVar23,0);
            (**(code **)(lVar16 + 0x18))
                      (uVar3,*(undefined8 *)(lVar16 + 0x40),uVar23,*(undefined8 *)(lVar16 + 0x28));
          }
          if (2 < *(int *)(unaff_x19 + 0x28)) {
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dStack0000000000000010 = dVar25;
            uVar23 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
            uVar23 = FUN_015f5b28(*(undefined8 *)
                                   Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_provider__
                                  ,uVar23,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar23,0);
          }
          uVar6 = uStack0000000000000020;
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
          uStack0000000000000008 =
               FUN_026714b4(plVar13,plVar12,*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x18),
                            0x2000,0,0);
          if (2 < *(int *)(unaff_x19 + 0x28)) {
            plVar24 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
            uVar6 = uStack0000000000000020;
            if (plVar24 == (long *)0x0) goto LAB_0145640c;
            if ((*(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__ != 0)
               && (lVar16 = thunk_FUN_00d6225c(*(long *)
                                                Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__
                                               ,*(undefined8 *)(*plVar24 + 0x40)), lVar16 == 0))
            goto LAB_01456414;
            if ((int)plVar24[3] == 0) goto LAB_01456410;
            plVar24[4] = *(long *)
                          Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__;
            uVar6 = uStack0000000000000020;
            if (plVar12 == (long *)0x0) goto LAB_0145640c;
            uStack0000000000000020 = (undefined4)plVar12[3];
            lVar16 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40)), lVar17 == 0))
            goto LAB_01456414;
            puVar5 = Method_System_Collections_Hashtable_OnDeserialization__;
            uVar15 = *(uint *)(plVar24 + 3);
            if (uVar15 < 2) goto LAB_01456410;
            plVar24[5] = lVar16;
            lVar16 = *(long *)puVar5;
            if (lVar16 != 0) {
              lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40));
              if (lVar16 == 0) goto LAB_01456414;
              uVar15 = *(uint *)(plVar24 + 3);
            }
            if (uVar15 < 3) goto LAB_01456410;
            plVar24[6] = *(long *)puVar5;
            uStack0000000000000020 =
                 (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
            lVar16 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40)), lVar17 == 0))
            goto LAB_01456414;
            uVar15 = *(uint *)(plVar24 + 3);
            if (uVar15 < 4) goto LAB_01456410;
            plVar24[7] = lVar16;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar16 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                          *(undefined8 *)(*plVar24 + 0x40));
              if (lVar16 == 0) goto LAB_01456414;
              uVar15 = *(uint *)(plVar24 + 3);
            }
            if (uVar15 < 5) goto LAB_01456410;
            plVar24[8] = *(long *)StringLiteral_3287;
            uStack0000000000000020 =
                 (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
            lVar16 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar24 + 0x40)), lVar17 == 0))
            goto LAB_01456414;
            if (*(uint *)(plVar24 + 3) < 6) goto LAB_01456410;
            plVar24[9] = lVar16;
            uVar23 = FUN_01600844(plVar24,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar23,0);
          }
          uStack0000000000000004 =
               (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
          uStack0000000000000000 =
               (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
          FUN_026723f8(plVar13,0);
          puVar14 = (undefined8 *)StringLiteral_11624;
        }
        else {
          if (lVar16 != 0) {
            uVar6 = uStack0000000000000020;
            if (lVar9 == 0) goto LAB_0145640c;
            uVar23 = FUN_015f5b28(*(undefined8 *)
                                   Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<HapticCapabilities>__
                                  ,*(undefined8 *)(lVar9 + 0x10),0);
            (**(code **)(lVar16 + 0x18))
                      (uVar3,*(undefined8 *)(lVar16 + 0x40),uVar23,*(undefined8 *)(lVar16 + 0x28));
            uVar23 = extraout_x1_01;
          }
          uVar6 = uStack0000000000000020;
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
          plVar13 = (long *)FUN_014549d4(plVar12,uVar23,uStack0000000000000008,
                                         uStack0000000000000004,uStack0000000000000000);
          puVar14 = (undefined8 *)StringLiteral_11624;
        }
      }
      uVar15 = uStack0000000000000024;
      plVar12 = *(long **)(unaff_x19 + 0x48);
      uVar6 = uStack0000000000000020;
      if (plVar12 == (long *)0x0) goto LAB_0145640c;
      lVar16 = (long)(int)uStack0000000000000024;
      if ((plVar13 != (long *)0x0) &&
         (lVar17 = thunk_FUN_00d6225c(plVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
LAB_01456414:
        uVar23 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar23,0);
      }
      if (*(uint *)(plVar12 + 3) <= uVar15) {
LAB_01456410:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar12[lVar16 + 4] = (long)plVar13;
      puVar5 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
      lVar16 = *(long *)(unaff_x19 + 0x20);
      uVar6 = uStack0000000000000020;
      if (lVar16 == 0) goto LAB_0145640c;
      if ((*(char *)(lVar16 + 0x2c) != '\0') && (lVar17 = *(long *)(unaff_x19 + 0x40), lVar17 != 0))
      {
        lVar18 = *(long *)(unaff_x19 + 0x48);
        if (lVar18 == 0) goto LAB_0145640c;
        if (*(uint *)(lVar18 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
        if (*(long *)(lVar16 + 0x70) == 0) goto LAB_0145640c;
        uVar23 = *(undefined8 *)(lVar18 + (long)(int)uStack0000000000000024 * 8 + 0x20);
        FUN_0132138c(*(long *)(lVar16 + 0x70),(long)(int)uStack0000000000000024,&stack0x00000028,
                     *puVar14);
        FUN_0143dae4(lVar16,lVar17,uVar23,in_stack_00000028,uStack0000000000000024,0);
        lVar16 = *(long *)(unaff_x19 + 0x20);
        uVar6 = uStack0000000000000020;
        if (lVar16 == 0) goto LAB_0145640c;
      }
      uVar6 = uStack0000000000000020;
      if (lVar9 == 0) goto LAB_0145640c;
      lVar16 = *(long *)(lVar16 + 0x90);
      uVar23 = *(undefined8 *)(lVar9 + 0x10);
      if (DAT_03774d77 == '\0') {
        thunk_FUN_00d48444(puVar5);
        DAT_03774d77 = '\x01';
      }
      uVar6 = uStack0000000000000020;
      if (lVar16 == 0) goto LAB_0145640c;
      FUN_0267df80(**(undefined4 **)(*(long *)puVar5 + 0xb8),
                   (*(undefined4 **)(*(long *)puVar5 + 0xb8))[1],lVar16,uVar23,0);
      uVar6 = uStack0000000000000020;
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
      lVar16 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90);
      uVar23 = *(undefined8 *)(lVar9 + 0x10);
      if (DAT_03774e1e == '\0') {
        thunk_FUN_00d48444(puVar5);
        DAT_03774e1e = '\x01';
      }
      uVar6 = uStack0000000000000020;
      if (lVar16 == 0) goto LAB_0145640c;
      FUN_0267e174(*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),
                   *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),lVar16,uVar23,0);
      uVar6 = uStack0000000000000020;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
      FUN_0143f660(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(lVar9 + 0x10),0);
      if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017aa9b4(0);
      uStack0000000000000024 = uStack0000000000000024 + 1;
      lVar9 = *(long *)(unaff_x19 + 0x20);
      uVar6 = uStack0000000000000020;
      if (lVar9 == 0) goto LAB_0145640c;
    }
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x20) = uStack0000000000000008;
      return 0;
    }
  }
LAB_0145640c:
  uStack0000000000000020 = uVar6;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


