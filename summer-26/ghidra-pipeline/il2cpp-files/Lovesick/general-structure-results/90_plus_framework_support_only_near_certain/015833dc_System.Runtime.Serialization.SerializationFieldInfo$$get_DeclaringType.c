/*
FUNCTION_NAME: System.Runtime.Serialization.SerializationFieldInfo$$get_DeclaringType
ENTRY_POINT: 015833dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 168
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01583fd4) */
/* WARNING: Removing unreachable block (ram,0x01583de4) */
/* WARNING: Removing unreachable block (ram,0x01583f90) */
/* WARNING: Removing unreachable block (ram,0x01582d70) */
/* WARNING: Removing unreachable block (ram,0x015835f0) */
/* WARNING: Removing unreachable block (ram,0x01583fb0) */
/* WARNING: Removing unreachable block (ram,0x015835dc) */
/* WARNING: Removing unreachable block (ram,0x01583450) */
/* WARNING: Removing unreachable block (ram,0x01583454) */
/* WARNING: Removing unreachable block (ram,0x015835f8) */
/* WARNING: Removing unreachable block (ram,0x01583508) */
/* WARNING: Removing unreachable block (ram,0x01583f94) */
/* WARNING: Removing unreachable block (ram,0x01583f9c) */
/* WARNING: Removing unreachable block (ram,0x015839e8) */

void System_Runtime_Serialization_SerializationFieldInfo__get_DeclaringType
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 in_w8;
  ulong uVar14;
  undefined8 in_x9;
  undefined **in_x10;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  long lVar20;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  float unaff_s11;
  undefined1 auVar28 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined4 uStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 uStack000000000000016c;
  long lStack0000000000000170;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 in_stack_000001a0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  long in_stack_000002a8;
  undefined8 in_stack_000002b0;
  int in_stack_000002cc;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined4 in_stack_000004f0;
  float in_stack_000004f4;
  float in_stack_000004f8;
  undefined4 in_stack_000004fc;
  undefined8 in_stack_00000500;
  undefined4 in_stack_00000508;
  long in_stack_00000538;
  
  uVar30 = param_4._8_8_;
  uVar29 = param_4._0_8_;
  uVar25 = param_3._8_8_;
  uVar12 = param_3._0_8_;
  uVar19 = param_2._8_8_;
  uVar31 = param_2._0_8_;
  uVar18 = param_1._8_8_;
  uVar32 = param_1._0_8_;
  do {
    uVar13 = *(undefined8 *)in_x10[0xff];
    *(undefined4 *)(in_stack_00000038 + 2) = in_w8;
    in_stack_00000038[1] = uVar18;
    *in_stack_00000038 = uVar32;
    *(undefined8 *)((long)in_stack_00000030 + 0x14) = uVar25;
    *(undefined8 *)((long)in_stack_00000030 + 0xc) = uVar12;
    in_stack_00000030[1] = uVar19;
    *in_stack_00000030 = uVar31;
    uStack000000000000016c = 0;
    in_stack_00000028[2] = in_x9;
    in_stack_00000028[1] = uVar30;
    *in_stack_00000028 = uVar29;
    lStack0000000000000170 = unaff_x22;
    FUN_00bd1020(param_5,&stack0x000000f8,uVar13);
LAB_01582bd0:
    uVar9 = FUN_012b894c(&stack0x000003d0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                        );
    if ((uVar9 & 1) == 0) {
      if (in_stack_00000018 < 0) {
        FUN_012b8948(&stack0x000003d0,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
      }
      lVar10 = *(long *)(in_stack_00000040 + 0x10);
      memcpy(&stack0x000000b0,in_stack_00000040 + 0x20,0x48);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      memcpy(&stack0x00000068,&stack0x000000b0,0x48);
      FUN_00bd1f90(lVar10,&stack0x00000068,*(undefined8 *)PTR_DAT_033f22e0);
      *(undefined8 *)(in_stack_00000040 + 0x34) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x2e) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x2c) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x32) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x30) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x26) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x24) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x2a) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x28) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x22) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x20) = 0;
      do {
        puVar7 = StringLiteral_4610;
        puVar6 = 
        Method_System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_RemoveAt__;
        puVar5 = OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo;
        puVar4 = Unity_Collections_NativeSlice<Vector4>_TypeInfo;
        puVar3 = UnityEngine_Rendering_Universal_DebugMaterialValidationMode_var;
        puVar2 = PTR_DAT_033f1268;
        while( true ) {
          uVar9 = FUN_012b894c(in_stack_00000040 + 0x16,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                              );
          if ((uVar9 & 1) == 0) {
            if (in_stack_00000018 < 0) {
              FUN_012b8948(in_stack_00000040 + 0x16,
                           *(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
            }
            *(undefined8 *)(in_stack_00000040 + 0x1c) = 0;
            *(undefined8 *)(in_stack_00000040 + 0x1a) = 0;
            *(undefined8 *)(in_stack_00000040 + 0x18) = 0;
            *(undefined8 *)(in_stack_00000040 + 0x16) = 0;
            uVar18 = *(undefined8 *)(in_stack_00000040 + 0x10);
            in_stack_000000b0 = *(undefined8 *)(in_stack_00000040 + 0xe);
            *(undefined8 *)(in_stack_00000040 + 0x1e) = 0;
            uVar27 = in_stack_00000040[0xc];
            *in_stack_00000040 = 0xfffffffe;
            *(undefined8 *)(in_stack_00000040 + 8) = 0;
            *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
            *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
            puVar2 = StringLiteral_12299;
            uStack00000000000000b8 = (undefined4)uVar18;
            uStack00000000000000bc = (undefined4)((ulong)uVar18 >> 0x20);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00000058 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
            in_stack_00000050 = in_stack_000000b0;
            uStack0000000000000064 = 0;
            uStack0000000000000060 = uVar27;
            FUN_011ccb9c(in_stack_00000040 + 2,&stack0x00000050,*(undefined8 *)puVar2);
            goto LAB_01582b04;
          }
          FUN_00bc9230(&stack0x000000b0,in_stack_00000040 + 0x16,*(undefined8 *)StringLiteral_6439);
          uVar12 = in_stack_000000b0;
          uVar18 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
          uVar19 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01320e50(lVar10,*(undefined8 *)puVar6);
          *(undefined8 *)(in_stack_00000040 + 0x2a) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x28) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x2e) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x2c) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x22) = uVar18;
          *(undefined8 *)(in_stack_00000040 + 0x20) = uVar12;
          *(undefined8 *)(in_stack_00000040 + 0x26) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x24) = uVar19;
          *(long *)(in_stack_00000040 + 0x30) = lVar10;
          if (*(long *)(in_stack_00000040 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar18 = *(undefined8 *)(*(long *)(in_stack_00000040 + 8) + 0x18);
          uVar19 = *(undefined8 *)
                    Method_System_Net_Security_SslStream_SetAndVerifyValidationCallback__;
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_01780344(uVar19,0);
          uVar9 = FUN_01789ac0(uVar18,uVar19,0);
          if ((uVar9 & 1) == 0) goto LAB_01583b18;
          if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0)
          {
            thunk_FUN_00d32864();
          }
          FUN_011285d4(&stack0x00000480,&stack0x00000438,*(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = OVRRayTransformer___ctor
                            (&stack0x00000438,&stack0x00000428,&stack0x00000418,&stack0x00000410,0);
          if ((uVar9 & 1) != 0) break;
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)puVar4,0);
        }
        *(undefined8 *)(in_stack_00000040 + 0x28) = in_stack_00000420;
        *(undefined8 *)(in_stack_00000040 + 0x26) = in_stack_00000418;
        *(undefined8 *)(in_stack_00000040 + 0x2c) = in_stack_00000430;
        *(undefined8 *)(in_stack_00000040 + 0x2a) = in_stack_00000428;
        if (in_stack_00000410 == 0) {
          uVar27 = 0;
        }
        else {
          uVar27 = *(undefined4 *)(in_stack_00000410 + 0x18);
        }
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Linq_Expressions_Expression_NewArrayInit__);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320ebc(lVar10,uVar27,
                     *(undefined8 *)Method_System_Collections_Generic_Queue<LocomotionEvent>_Clear__
                    );
        *(long *)(in_stack_00000040 + 0x2e) = lVar10;
        if (in_stack_00000410 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (0 < (int)*(ulong *)(in_stack_00000410 + 0x18)) {
          uVar9 = 0;
          uVar14 = *(ulong *)(in_stack_00000410 + 0x18) & 0xffffffff;
          puVar17 = (undefined8 *)(in_stack_00000410 + 0x28);
          do {
            if (uVar14 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            if (*(long *)(in_stack_00000040 + 0x2e) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ae93e4(*(long *)(in_stack_00000040 + 0x2e),puVar17[-1],*puVar17,
                         *(undefined8 *)puVar7);
            uVar14 = (ulong)*(uint *)(in_stack_00000410 + 0x18);
            uVar9 = uVar9 + 1;
            puVar17 = puVar17 + 2;
          } while ((long)uVar9 < (long)(int)*(uint *)(in_stack_00000410 + 0x18));
        }
LAB_01583b18:
        if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01128200(&stack0x00000480,&stack0x000001f0,*(undefined8 *)PTR_DAT_033eaba0);
        *(undefined8 *)(in_stack_00000040 + 0x32) = in_stack_000001f0;
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                     System_Collections_Generic_HashSet<PlayableDirector>_TypeInfo);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar10,*(undefined8 *)
                             Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__
                    );
        *(long *)(in_stack_00000040 + 0x34) = lVar10;
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__ + 0xe0
                    ) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_000001d8 = FUN_01aa6d78(in_stack_00000040 + 0x32,0);
        in_stack_000001c8 = 0;
        in_stack_000001c0 = 0;
        in_stack_000001d0 = 0;
        in_stack_000001e8 = 0;
        in_stack_000001e0 = 0;
        FUN_01a92b9c(lVar10,&stack0x000001c0,0,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__);
        }
        auVar28 = FUN_01353c78(&stack0x000004a0,
                               *(undefined8 *)System_ComponentModel_ISynchronizeInvoke_TypeInfo);
        uVar9 = FUN_011cf2a4(&stack0x000004b0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__
                            );
        if ((uVar9 & 1) == 0) {
          *in_stack_00000040 = 1;
          *(undefined1 (*) [16])(in_stack_00000040 + 0x12) = auVar28;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098c58(in_stack_00000040 + 2,&stack0x000004b0,in_stack_00000040,
                       *(undefined8 *)Method_MainStagePortrait_<SetSpeed>b__34_0__);
          goto LAB_01582b04;
        }
        FUN_011cf420(&stack0x000004b0,&stack0x000000b0,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                    );
        if (*(long *)(in_stack_00000040 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(*(long *)(in_stack_00000040 + 0x34) + 0x18) != 0) goto code_r0x01583c70;
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__ + 0xe0
                    ) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_01aa6d78(in_stack_00000040 + 0x32,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_000000b0 = CONCAT44(in_stack_000000b0._4_4_,(int)*(undefined8 *)(lVar10 + 0x18));
        uVar18 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                    ,&stack0x000000b0);
        uVar18 = FUN_015f6780(*(undefined8 *)
                               Method_System_Collections_Generic_List<VoiceServiceRequestOptions_QueryParam>_Add__
                              ,uVar18,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02661754(uVar18,0);
      } while( true );
    }
    FUN_00bc9230(&stack0x000000b0,&stack0x000003d0,*(undefined8 *)StringLiteral_6439);
    uVar22 = uStack00000000000000c4;
    uVar27 = uStack00000000000000c0;
    uVar19 = in_stack_000000b0;
    uVar13 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
    uVar1 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                               );
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320ebc(lVar10,1,*(undefined8 *)StringLiteral_4328);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_011285d4(&stack0x00000360,&stack0x00000358,
                         *(undefined8 *)System_Collections_Generic_List<GSTU_Cell>_TypeInfo);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01aa408c(&stack0x00000358,0);
      if ((uVar9 & 1) != 0) {
        if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar18 = *(undefined8 *)(in_stack_00000020 + 0xb8);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01aa45d4(&stack0x00000358,uVar18,0);
        if (*(long *)(in_stack_00000020 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(*(long *)(in_stack_00000020 + 0xb8),&stack0x000000b0,
                     *(undefined8 *)
                      Method_Obi_ObiRopeBlueprint_<CreateBendingConstraints>d__4_System_Collections_IEnumerator_Reset__
                    );
        while (uVar9 = FUN_012b894c(&stack0x000002d0,*unaff_x28), (uVar9 & 1) != 0) {
          uVar8 = FUN_00bd1e88(&stack0x000002d0,*unaff_x26);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar18 = FUN_01aa5550(uVar8,0);
          FUN_00ac1158(lVar10,uVar18,*unaff_x29);
        }
        if (in_stack_00000018 < 0) {
          FUN_012b8948(&stack0x000002d0,
                       *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_GetElementType__);
        }
      }
    }
    uVar18 = 0;
    uVar32 = 0;
    in_w8 = 0;
    uVar31 = 0;
    in_x9 = 0;
    uVar30 = 0;
    uVar29 = 0;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_011285d4(&stack0x00000360,&stack0x00000300,*(undefined8 *)StringLiteral_6020);
    if ((uVar9 & 1) == 0) {
LAB_01582f9c:
      unaff_x22 = 0;
    }
    else {
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01aa2fa8(&stack0x00000300,0);
      if ((uVar9 & 1) == 0) goto LAB_01582f9c;
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01aa3400(&stack0x00000300,0);
      FUN_026883f4(&stack0x000002b8,0);
      FUN_01aa3400(&stack0x00000300,0);
      FUN_02688460(&stack0x000002b8,0);
      in_stack_000000b0 = 0;
      uStack00000000000000b8 = 0;
      uStack00000000000000bc = 0;
      uStack00000000000000c0 = 0;
      FUN_01347274(&stack0x000000b0,&stack0x00000510,
                   *(undefined8 *)Method_System_Collections_Generic_List<Ray>__ctor__);
      in_w8 = uStack00000000000000c0;
      uVar32 = in_stack_000000b0;
      uVar18 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
      uVar9 = FUN_01aa3560(&stack0x00000300,&stack0x000002cc,0);
      if ((uVar9 & 1) == 0) goto LAB_01582f9c;
      FUN_013421d4(&stack0x000002a8,in_stack_000002cc,2,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                  );
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01aa35f0(&stack0x00000300,in_stack_000002a8,in_stack_000002b0,0);
      if ((uVar9 & 1) == 0) {
        unaff_x22 = 0;
      }
      else {
        unaff_x22 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                                      );
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(unaff_x22,*(undefined8 *)StringLiteral_11365);
        if (0 < in_stack_000002cc) {
          lVar15 = 0;
          lVar20 = 0;
          do {
            FUN_00bbed00(*(undefined4 *)(in_stack_000002a8 + lVar15),
                         ((undefined4 *)(in_stack_000002a8 + lVar15))[1],unaff_x22,
                         *(undefined8 *)
                          Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
            lVar20 = lVar20 + 1;
            lVar15 = lVar15 + 8;
          } while (lVar20 < in_stack_000002cc);
        }
      }
      if (in_stack_00000018 < 0) {
        FUN_01342a94(&stack0x000002a8,*(undefined8 *)StringLiteral_13233);
      }
    }
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_011285d4(&stack0x00000360,&stack0x000002f8,
                         *(undefined8 *)Obi_ObiHeightFieldHandle_TypeInfo);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<ProBuilderMesh>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01aa3904(&stack0x000002f8,0);
      if ((uVar9 & 1) != 0) {
        FUN_0158f5ec(Method_System_Collections_Generic_List<ProBuilderMesh>_GetEnumerator__);
        return;
      }
    }
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    uVar16 = *(undefined8 *)
              (*(long *)(*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8) + 0xc);
    uVar8 = *(undefined4 *)
             (*(long *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8) + 0x14);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_011285d4(&stack0x00000360,&stack0x000002f0,*(undefined8 *)StringLiteral_5356);
    if ((uVar9 & 1) == 0) {
LAB_015832d4:
      if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uStack00000000000000b8 = uVar27;
      uStack00000000000000bc = uVar22;
      in_stack_000000b0 = uVar13;
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                  ,&stack0x000000b0);
      uVar12 = FUN_015f6780(*(undefined8 *)
                             Method_Oculus_Platform_Models_DeserializableList<Leaderboard>_get_NextUrl__
                            ,uVar12,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(uVar12,0);
      uVar26 = 0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      uVar22 = 0;
      uVar27 = 0;
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01a9e784(&stack0x000002f0,0);
      if ((uVar9 & 1) == 0) goto LAB_015832d4;
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01a9ede0(&stack0x000002f0,&stack0x00000260,0);
      if ((uVar9 & 1) == 0) goto LAB_015832d4;
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(in_stack_00000020 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01aa0ec0(&stack0x00000260,*(undefined8 *)(*(long *)(in_stack_00000020 + 0x88) + 0x18),0);
      if (*(long *)(in_stack_00000020 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01aa1068(&stack0x000000b0,&stack0x00000260,
                   *(undefined8 *)(*(long *)(in_stack_00000020 + 0x88) + 0x18),0);
      lVar20 = *(long *)(*(long *)System_Xml_Serialization_XmlElementEventArgs_TypeInfo + 0x20);
      if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
        lVar20 = FUN_00d5941c();
      }
      lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
      if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
        lVar20 = FUN_00d5941c();
      }
      pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000250,*(undefined8 *)(lVar20 + 0x80));
      if (*pcVar11 == '\0') goto LAB_015832d4;
      lVar20 = *(long *)(*(long *)
                          UnityEngine_InputSystem_InputActionRebindingExtensions_DeferBindingResolutionWrapper_TypeInfo
                        + 0x20);
      if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
        lVar20 = FUN_00d5941c();
      }
      lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
      if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
        lVar20 = FUN_00d5941c();
      }
      pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000230,*(undefined8 *)(lVar20 + 0x80));
      if (*pcVar11 == '\0') goto LAB_015832d4;
      FUN_01347408(&stack0x00000250,&stack0x00000500,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
      FUN_01347408(&stack0x00000230,&stack0x000004f0,*(undefined8 *)PTR_DAT_033ede88);
      fVar23 = in_stack_000004f4;
      fVar24 = in_stack_000004f8;
      fVar21 = (float)FUN_02698c04(in_stack_000004f0,in_stack_000004f4,in_stack_000004f8,
                                   in_stack_000004fc,0);
      fVar23 = fVar23 * unaff_s11;
      fVar24 = fVar24 * unaff_s11;
      uVar22 = FUN_026992c0(fVar21 * unaff_s11,0);
      uVar26 = in_stack_00000500;
      uVar27 = in_stack_00000508;
    }
    param_5 = *(long *)(in_stack_00000040 + 0x30);
    in_stack_000000b0 = uVar31;
    uStack00000000000000b8 = 0;
    uStack00000000000000bc = 0;
    uStack00000000000000c0 = 0;
    uStack00000000000000c4 = 0;
    in_stack_000000c8 = 0;
    in_stack_00000190 = uVar32;
    in_stack_00000198 = uVar18;
    in_stack_000001a0 = in_w8;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_000000f8 = uVar19;
    in_x10 = &
             Method_Newtonsoft_Json_Linq_JObject_<GetEnumerator>d__64_System_Collections_IEnumerator_Reset__
    ;
    uVar19 = 0;
    uVar25 = 0;
    uVar12 = 0;
    in_stack_00000100 = uVar13;
    in_stack_00000108 = uVar1;
    in_stack_00000110 = lVar10;
    in_stack_00000118 = uVar26;
    uStack0000000000000120 = uVar27;
    uStack0000000000000124 = uVar22;
    fStack0000000000000128 = fVar23;
    fStack000000000000012c = fVar24;
    in_stack_00000130 = uVar16;
    in_stack_00000138 = uVar8;
    in_stack_000001f0 = uVar29;
  } while( true );
code_r0x01583c70:
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5400);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar10,*(undefined8 *)PTR_DAT_033ef7b8);
  if (*(long *)(in_stack_00000040 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(in_stack_00000040 + 0x34),&stack0x000000b0,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  puVar7 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_1__;
  puVar6 = Method_EnableTeleportsOnTuneTargetComplete_OnTuneTargetComplete__;
  puVar5 = Method_System_Collections_Generic_List<string>_Find__;
  puVar4 = 
  Method_System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>__ctor__
  ;
  puVar3 = Method_UnityEngine_UIElements_BaseSlider<float>__ctor__;
  puVar2 = UnityEngine_XR_Interaction_Toolkit_IXRInteractionOverrideGroup_TypeInfo;
  while (uVar9 = FUN_012b894c(&stack0x000003d0,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                             ), (uVar9 & 1) != 0) {
    FUN_00bc9230(&stack0x000000b0,&stack0x000003d0,*(undefined8 *)StringLiteral_6439);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_011285d4(&stack0x000003b0,&stack0x000003a8,*(undefined8 *)StringLiteral_5356);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar28 = FUN_01a9e870(0,&stack0x000003a8,1,0);
      FUN_00bd1c8c(lVar10,auVar28._0_8_,auVar28._8_8_,*(undefined8 *)puVar3);
    }
  }
  if (in_stack_00000018 < 0) {
    FUN_012b8948(&stack0x000003d0,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
  }
  FUN_0112d3ac(lVar10,*(undefined8 *)puVar7);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  auVar28 = FUN_01353c78(&stack0x00000380,*(undefined8 *)puVar4);
  uVar9 = FUN_011cf2a4(&stack0x00000390,*(undefined8 *)puVar6);
  if ((uVar9 & 1) == 0) {
    *in_stack_00000040 = 2;
    *(undefined1 (*) [16])(in_stack_00000040 + 0x36) = auVar28;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01098c58(in_stack_00000040 + 2,&stack0x00000390,in_stack_00000040,*(undefined8 *)puVar5);
LAB_01582b04:
    if (*(long *)(in_stack_00000010 + 0x28) != in_stack_00000538) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  FUN_011cf420(&stack0x00000390,&stack0x000001f0,*(undefined8 *)StringLiteral_14201);
  if (*(long *)(in_stack_00000040 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(in_stack_00000040 + 0x34),&stack0x000000b0,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  in_stack_00000038 = (undefined8 *)&stack0x0000013c;
  in_stack_00000030 = (undefined8 *)&stack0x00000150;
  in_stack_00000028 = (undefined8 *)&stack0x00000178;
  unaff_x25 = (long *)StringLiteral_13019;
  unaff_x26 = (undefined8 *)
              Method_UnityEngine_ProBuilder_MeshOperations_ConnectElements_<>c_<ConnectEdgesInFace>b__5_1__
  ;
  unaff_x28 = (undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Count__;
  unaff_x29 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
  unaff_s11 = DAT_028aa158;
  goto LAB_01582bd0;
}


