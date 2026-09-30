/*
FUNCTION_NAME: System.Runtime.Serialization.SerializationFieldInfo$$get_ReflectedType
ENTRY_POINT: 015833fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 170
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_2
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

void System_Runtime_Serialization_SerializationFieldInfo__get_ReflectedType
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 in_x9;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long unaff_x22;
  long lVar21;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined1 in_q3 [16];
  undefined4 uVar26;
  float unaff_s11;
  undefined1 auVar27 [16];
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
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
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
  
  uVar28 = in_q3._8_8_;
  uVar20 = in_q3._0_8_;
  do {
    uStack000000000000016c = 0;
    in_stack_00000028[2] = in_x9;
    in_stack_00000028[1] = uVar28;
    *in_stack_00000028 = uVar20;
    lStack0000000000000170 = unaff_x22;
    FUN_00bd1020(param_1,&stack0x000000f8,param_3);
LAB_01582bd0:
    uVar12 = FUN_012b894c(&stack0x000003d0,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                         );
    if ((uVar12 & 1) == 0) {
      if (in_stack_00000018 < 0) {
        FUN_012b8948(&stack0x000003d0,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
      }
      lVar13 = *(long *)(in_stack_00000040 + 0x10);
      memcpy(&stack0x000000b0,in_stack_00000040 + 0x20,0x48);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      memcpy(&stack0x00000068,&stack0x000000b0,0x48);
      FUN_00bd1f90(lVar13,&stack0x00000068,*(undefined8 *)PTR_DAT_033f22e0);
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
        puVar9 = StringLiteral_4610;
        puVar8 = 
        Method_System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_RemoveAt__;
        puVar7 = OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo;
        puVar6 = Unity_Collections_NativeSlice<Vector4>_TypeInfo;
        puVar5 = UnityEngine_Rendering_Universal_DebugMaterialValidationMode_var;
        puVar4 = PTR_DAT_033f1268;
        while( true ) {
          uVar12 = FUN_012b894c(in_stack_00000040 + 0x16,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                               );
          if ((uVar12 & 1) == 0) {
            if (in_stack_00000018 < 0) {
              FUN_012b8948(in_stack_00000040 + 0x16,
                           *(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
            }
            *(undefined8 *)(in_stack_00000040 + 0x1c) = 0;
            *(undefined8 *)(in_stack_00000040 + 0x1a) = 0;
            *(undefined8 *)(in_stack_00000040 + 0x18) = 0;
            *(undefined8 *)(in_stack_00000040 + 0x16) = 0;
            uVar20 = *(undefined8 *)(in_stack_00000040 + 0x10);
            in_stack_000000b0 = *(undefined8 *)(in_stack_00000040 + 0xe);
            *(undefined8 *)(in_stack_00000040 + 0x1e) = 0;
            uVar26 = in_stack_00000040[0xc];
            *in_stack_00000040 = 0xfffffffe;
            *(undefined8 *)(in_stack_00000040 + 8) = 0;
            *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
            *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
            puVar4 = StringLiteral_12299;
            uStack00000000000000b8 = (undefined4)uVar20;
            uStack00000000000000bc = (undefined4)((ulong)uVar20 >> 0x20);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00000058 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
            in_stack_00000050 = in_stack_000000b0;
            uStack0000000000000064 = 0;
            uStack0000000000000060 = uVar26;
            FUN_011ccb9c(in_stack_00000040 + 2,&stack0x00000050,*(undefined8 *)puVar4);
            goto LAB_01582b04;
          }
          FUN_00bc9230(&stack0x000000b0,in_stack_00000040 + 0x16,*(undefined8 *)StringLiteral_6439);
          uVar2 = in_stack_000000b0;
          uVar20 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
          uVar28 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01320e50(lVar13,*(undefined8 *)puVar8);
          *(undefined8 *)(in_stack_00000040 + 0x2a) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x28) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x2e) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x2c) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x22) = uVar20;
          *(undefined8 *)(in_stack_00000040 + 0x20) = uVar2;
          *(undefined8 *)(in_stack_00000040 + 0x26) = 0;
          *(undefined8 *)(in_stack_00000040 + 0x24) = uVar28;
          *(long *)(in_stack_00000040 + 0x30) = lVar13;
          if (*(long *)(in_stack_00000040 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar20 = *(undefined8 *)(*(long *)(in_stack_00000040 + 8) + 0x18);
          uVar28 = *(undefined8 *)
                    Method_System_Net_Security_SslStream_SetAndVerifyValidationCallback__;
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar28 = FUN_01780344(uVar28,0);
          uVar12 = FUN_01789ac0(uVar20,uVar28,0);
          if ((uVar12 & 1) == 0) goto LAB_01583b18;
          if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0)
          {
            thunk_FUN_00d32864();
          }
          FUN_011285d4(&stack0x00000480,&stack0x00000438,*(undefined8 *)puVar7);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = OVRRayTransformer___ctor
                             (&stack0x00000438,&stack0x00000428,&stack0x00000418,&stack0x00000410,0)
          ;
          if ((uVar12 & 1) != 0) break;
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)puVar6,0);
        }
        *(undefined8 *)(in_stack_00000040 + 0x28) = in_stack_00000420;
        *(undefined8 *)(in_stack_00000040 + 0x26) = in_stack_00000418;
        *(undefined8 *)(in_stack_00000040 + 0x2c) = in_stack_00000430;
        *(undefined8 *)(in_stack_00000040 + 0x2a) = in_stack_00000428;
        if (in_stack_00000410 == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = *(undefined4 *)(in_stack_00000410 + 0x18);
        }
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Linq_Expressions_Expression_NewArrayInit__);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320ebc(lVar13,uVar26,
                     *(undefined8 *)Method_System_Collections_Generic_Queue<LocomotionEvent>_Clear__
                    );
        *(long *)(in_stack_00000040 + 0x2e) = lVar13;
        if (in_stack_00000410 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (0 < (int)*(ulong *)(in_stack_00000410 + 0x18)) {
          uVar12 = 0;
          uVar16 = *(ulong *)(in_stack_00000410 + 0x18) & 0xffffffff;
          puVar19 = (undefined8 *)(in_stack_00000410 + 0x28);
          do {
            if (uVar16 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            if (*(long *)(in_stack_00000040 + 0x2e) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ae93e4(*(long *)(in_stack_00000040 + 0x2e),puVar19[-1],*puVar19,
                         *(undefined8 *)puVar9);
            uVar16 = (ulong)*(uint *)(in_stack_00000410 + 0x18);
            uVar12 = uVar12 + 1;
            puVar19 = puVar19 + 2;
          } while ((long)uVar12 < (long)(int)*(uint *)(in_stack_00000410 + 0x18));
        }
LAB_01583b18:
        if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01128200(&stack0x00000480,&stack0x000001f0,*(undefined8 *)PTR_DAT_033eaba0);
        *(undefined8 *)(in_stack_00000040 + 0x32) = in_stack_000001f0;
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                     System_Collections_Generic_HashSet<PlayableDirector>_TypeInfo);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar13,*(undefined8 *)
                             Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__
                    );
        *(long *)(in_stack_00000040 + 0x34) = lVar13;
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
        FUN_01a92b9c(lVar13,&stack0x000001c0,0,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__);
        }
        auVar27 = FUN_01353c78(&stack0x000004a0,
                               *(undefined8 *)System_ComponentModel_ISynchronizeInvoke_TypeInfo);
        uVar12 = FUN_011cf2a4(&stack0x000004b0,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__
                             );
        if ((uVar12 & 1) == 0) {
          *in_stack_00000040 = 1;
          *(undefined1 (*) [16])(in_stack_00000040 + 0x12) = auVar27;
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
        lVar13 = FUN_01aa6d78(in_stack_00000040 + 0x32,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_000000b0 = CONCAT44(in_stack_000000b0._4_4_,(int)*(undefined8 *)(lVar13 + 0x18));
        uVar20 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                    ,&stack0x000000b0);
        uVar20 = FUN_015f6780(*(undefined8 *)
                               Method_System_Collections_Generic_List<VoiceServiceRequestOptions_QueryParam>_Add__
                              ,uVar20,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02661754(uVar20,0);
      } while( true );
    }
    FUN_00bc9230(&stack0x000000b0,&stack0x000003d0,*(undefined8 *)StringLiteral_6439);
    uVar23 = uStack00000000000000c4;
    uVar26 = uStack00000000000000c0;
    uVar10 = in_stack_000000b0;
    uVar2 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
    uVar3 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                               );
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320ebc(lVar13,1,*(undefined8 *)StringLiteral_4328);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_011285d4(&stack0x00000360,&stack0x00000358,
                          *(undefined8 *)System_Collections_Generic_List<GSTU_Cell>_TypeInfo);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01aa408c(&stack0x00000358,0);
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar20 = *(undefined8 *)(in_stack_00000020 + 0xb8);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01aa45d4(&stack0x00000358,uVar20,0);
        if (*(long *)(in_stack_00000020 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(*(long *)(in_stack_00000020 + 0xb8),&stack0x000000b0,
                     *(undefined8 *)
                      Method_Obi_ObiRopeBlueprint_<CreateBendingConstraints>d__4_System_Collections_IEnumerator_Reset__
                    );
        while (uVar12 = FUN_012b894c(&stack0x000002d0,*unaff_x28), (uVar12 & 1) != 0) {
          uVar11 = FUN_00bd1e88(&stack0x000002d0,*unaff_x26);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_01aa5550(uVar11,0);
          FUN_00ac1158(lVar13,uVar20,*unaff_x29);
        }
        if (in_stack_00000018 < 0) {
          FUN_012b8948(&stack0x000002d0,
                       *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_GetElementType__);
        }
      }
    }
    uVar30 = 0;
    uVar29 = 0;
    uVar11 = 0;
    in_x9 = 0;
    uVar28 = 0;
    uVar20 = 0;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_011285d4(&stack0x00000360,&stack0x00000300,*(undefined8 *)StringLiteral_6020);
    if ((uVar12 & 1) == 0) {
LAB_01582f9c:
      unaff_x22 = 0;
    }
    else {
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01aa2fa8(&stack0x00000300,0);
      if ((uVar12 & 1) == 0) goto LAB_01582f9c;
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
      uVar11 = uStack00000000000000c0;
      uVar29 = in_stack_000000b0;
      uVar30 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
      uVar12 = FUN_01aa3560(&stack0x00000300,&stack0x000002cc,0);
      if ((uVar12 & 1) == 0) goto LAB_01582f9c;
      FUN_013421d4(&stack0x000002a8,in_stack_000002cc,2,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                  );
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01aa35f0(&stack0x00000300,in_stack_000002a8,in_stack_000002b0,0);
      if ((uVar12 & 1) == 0) {
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
          lVar17 = 0;
          lVar21 = 0;
          do {
            FUN_00bbed00(*(undefined4 *)(in_stack_000002a8 + lVar17),
                         ((undefined4 *)(in_stack_000002a8 + lVar17))[1],unaff_x22,
                         *(undefined8 *)
                          Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
            lVar21 = lVar21 + 1;
            lVar17 = lVar17 + 8;
          } while (lVar21 < in_stack_000002cc);
        }
      }
      if (in_stack_00000018 < 0) {
        FUN_01342a94(&stack0x000002a8,*(undefined8 *)StringLiteral_13233);
      }
    }
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_011285d4(&stack0x00000360,&stack0x000002f8,
                          *(undefined8 *)Obi_ObiHeightFieldHandle_TypeInfo);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<ProBuilderMesh>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01aa3904(&stack0x000002f8,0);
      if ((uVar12 & 1) != 0) {
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
    uVar18 = *(undefined8 *)
              (*(long *)(*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8) + 0xc);
    uVar1 = *(undefined4 *)
             (*(long *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8) + 0x14);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_011285d4(&stack0x00000360,&stack0x000002f0,*(undefined8 *)StringLiteral_5356);
    if ((uVar12 & 1) == 0) {
LAB_015832d4:
      if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uStack00000000000000b8 = uVar26;
      uStack00000000000000bc = uVar23;
      in_stack_000000b0 = uVar2;
      uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                  ,&stack0x000000b0);
      uVar15 = FUN_015f6780(*(undefined8 *)
                             Method_Oculus_Platform_Models_DeserializableList<Leaderboard>_get_NextUrl__
                            ,uVar15,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(uVar15,0);
      uVar15 = 0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      uVar23 = 0;
      uVar26 = 0;
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01a9e784(&stack0x000002f0,0);
      if ((uVar12 & 1) == 0) goto LAB_015832d4;
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01a9ede0(&stack0x000002f0,&stack0x00000260,0);
      if ((uVar12 & 1) == 0) goto LAB_015832d4;
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
      lVar21 = *(long *)(*(long *)System_Xml_Serialization_XmlElementEventArgs_TypeInfo + 0x20);
      if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
        lVar21 = FUN_00d5941c();
      }
      lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
      if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
        lVar21 = FUN_00d5941c();
      }
      pcVar14 = (char *)thunk_FUN_00d32ed4(&stack0x00000250,*(undefined8 *)(lVar21 + 0x80));
      if (*pcVar14 == '\0') goto LAB_015832d4;
      lVar21 = *(long *)(*(long *)
                          UnityEngine_InputSystem_InputActionRebindingExtensions_DeferBindingResolutionWrapper_TypeInfo
                        + 0x20);
      if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
        lVar21 = FUN_00d5941c();
      }
      lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
      if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
        lVar21 = FUN_00d5941c();
      }
      pcVar14 = (char *)thunk_FUN_00d32ed4(&stack0x00000230,*(undefined8 *)(lVar21 + 0x80));
      if (*pcVar14 == '\0') goto LAB_015832d4;
      FUN_01347408(&stack0x00000250,&stack0x00000500,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
      FUN_01347408(&stack0x00000230,&stack0x000004f0,*(undefined8 *)PTR_DAT_033ede88);
      fVar24 = in_stack_000004f4;
      fVar25 = in_stack_000004f8;
      fVar22 = (float)FUN_02698c04(in_stack_000004f0,in_stack_000004f4,in_stack_000004f8,
                                   in_stack_000004fc,0);
      fVar24 = fVar24 * unaff_s11;
      fVar25 = fVar25 * unaff_s11;
      uVar23 = FUN_026992c0(fVar22 * unaff_s11,0);
      uVar15 = in_stack_00000500;
      uVar26 = in_stack_00000508;
    }
    param_1 = *(long *)(in_stack_00000040 + 0x30);
    in_stack_000000b0 = 0;
    uStack00000000000000b8 = 0;
    uStack00000000000000bc = 0;
    uStack00000000000000c0 = 0;
    uStack00000000000000c4 = 0;
    in_stack_000000c8 = 0;
    in_stack_00000190 = uVar29;
    in_stack_00000198 = uVar30;
    in_stack_000001a0 = uVar11;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_000000f8 = uVar10;
    param_3 = *(undefined8 *)
               Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_112>__
    ;
    *(undefined4 *)(in_stack_00000038 + 2) = uVar11;
    in_stack_00000038[1] = uVar30;
    *in_stack_00000038 = uVar29;
    *(undefined8 *)((long)in_stack_00000030 + 0x14) = 0;
    *(undefined8 *)((long)in_stack_00000030 + 0xc) = 0;
    in_stack_00000030[1] = 0;
    *in_stack_00000030 = 0;
    in_stack_00000100 = uVar2;
    in_stack_00000108 = uVar3;
    in_stack_00000110 = lVar13;
    in_stack_00000118 = uVar15;
    uStack0000000000000120 = uVar26;
    uStack0000000000000124 = uVar23;
    fStack0000000000000128 = fVar24;
    fStack000000000000012c = fVar25;
    in_stack_00000130 = uVar18;
    in_stack_00000138 = uVar1;
    in_stack_000001f0 = uVar20;
  } while( true );
code_r0x01583c70:
  lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5400);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar13,*(undefined8 *)PTR_DAT_033ef7b8);
  if (*(long *)(in_stack_00000040 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(in_stack_00000040 + 0x34),&stack0x000000b0,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  puVar9 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_1__;
  puVar8 = Method_EnableTeleportsOnTuneTargetComplete_OnTuneTargetComplete__;
  puVar7 = Method_System_Collections_Generic_List<string>_Find__;
  puVar6 = 
  Method_System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>__ctor__
  ;
  puVar5 = Method_UnityEngine_UIElements_BaseSlider<float>__ctor__;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_IXRInteractionOverrideGroup_TypeInfo;
  while (uVar12 = FUN_012b894c(&stack0x000003d0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                              ), (uVar12 & 1) != 0) {
    FUN_00bc9230(&stack0x000000b0,&stack0x000003d0,*(undefined8 *)StringLiteral_6439);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_011285d4(&stack0x000003b0,&stack0x000003a8,*(undefined8 *)StringLiteral_5356);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar27 = FUN_01a9e870(0,&stack0x000003a8,1,0);
      FUN_00bd1c8c(lVar13,auVar27._0_8_,auVar27._8_8_,*(undefined8 *)puVar5);
    }
  }
  if (in_stack_00000018 < 0) {
    FUN_012b8948(&stack0x000003d0,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
  }
  FUN_0112d3ac(lVar13,*(undefined8 *)puVar9);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  auVar27 = FUN_01353c78(&stack0x00000380,*(undefined8 *)puVar6);
  uVar12 = FUN_011cf2a4(&stack0x00000390,*(undefined8 *)puVar8);
  if ((uVar12 & 1) == 0) {
    *in_stack_00000040 = 2;
    *(undefined1 (*) [16])(in_stack_00000040 + 0x36) = auVar27;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01098c58(in_stack_00000040 + 2,&stack0x00000390,in_stack_00000040,*(undefined8 *)puVar7);
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


