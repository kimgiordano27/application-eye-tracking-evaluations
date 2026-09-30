/*
FUNCTION_NAME: System.Net.Sockets.TcpClient$$EndConnect
ENTRY_POINT: 01fb90fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 194
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_8
*/


void System_Net_Sockets_TcpClient__EndConnect(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined8 *unaff_x29;
  
  lVar6 = thunk_FUN_00d62348();
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vset_lane_u8__;
  if (lVar6 != 0) {
    FUN_01e4e96c(lVar6,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x110) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar6 == 0) goto LAB_01fbbd64;
    FUN_01e5102c(lVar6,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x118) = lVar6;
    plVar7 = (long *)FUN_01fbbe78(lVar6,1,0);
    lVar6 = *unaff_x21;
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x120) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar6 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) goto LAB_01fb9580;
      *(long **)(*(long *)(lVar6 + 0xb8) + 0x120) = plVar7;
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) goto LAB_01fb9580;
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_14189);
    puVar2 = Method_System_Collections_Generic_List<AchievementDefinition>__ctor__;
    if (lVar6 == 0) goto LAB_01fbbd64;
    FUN_01e54e48(lVar6,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x128) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = GoogleSheetsToUnity_ThirdPary_Task_FinishedHandler_TypeInfo;
    if (lVar6 == 0) goto LAB_01fbbd64;
    FUN_01e559f4(lVar6,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x130) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon___crc32ch__;
    if (lVar6 == 0) goto LAB_01fbbd64;
    FUN_01fbbffc();
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x138) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_System_Array_FindLastIndex<__Il2CppFullySharedGenericType>__;
    if (lVar6 == 0) goto LAB_01fbbd64;
    FUN_01e549a0(lVar6,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x140) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = 
    Method_Meta_WitAi_Json_WitResponseNode_<get_Childs>d__19_System_Collections_IEnumerator_Reset__;
    if (lVar6 == 0) goto LAB_01fbbd64;
    FUN_01e4fd6c(lVar6,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x148) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_System_Collections_Generic_List<STMTextInfo>_Add__;
    if (lVar6 == 0) goto LAB_01fbbd64;
    FUN_01e50ffc(lVar6,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x150) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar6 == 0) goto LAB_01fbbd64;
    FUN_01e51014(lVar6,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x158) = lVar6;
    plVar7 = (long *)FUN_01fbbe78(lVar6,1,0);
    lVar6 = *unaff_x21;
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x160) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar6 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) goto LAB_01fb9580;
      *(long **)(*(long *)(lVar6 + 0xb8) + 0x160) = plVar7;
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) goto LAB_01fb9580;
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4c50);
    puVar2 = UnityEngine_UIElements_UIR_UIRVEShaderInfoAllocator_TypeInfo;
    if (lVar6 != 0) {
      FUN_01e522e0(lVar6,0);
      *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x168) = lVar6;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = UnityEngine_InputSystem_LowLevel_GamepadButton_var;
      if (lVar6 != 0) {
        FUN_01e51810(lVar6,0);
        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x170) = lVar6;
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_033f6818;
        if (lVar6 != 0) {
          FUN_01e50eb0(lVar6,0);
          *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x178) = lVar6;
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = StringLiteral_13106;
          if (lVar6 != 0) {
            thunk_FUN_01e51810(lVar6,0);
            *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x180) = lVar6;
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar2 = StringLiteral_14300;
            if (lVar6 != 0) {
              FUN_01e4f988(lVar6,0);
              *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x188) = lVar6;
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_033f6268;
              if (lVar6 != 0) {
                FUN_01e4f8c8(lVar6,0);
                *(long *)(*(long *)(*unaff_x21 + 0xb8) + 400) = lVar6;
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                puVar2 = 
                Method_System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TryGetValue__
                ;
                if (lVar6 != 0) {
                  FUN_01e50ed8(lVar6,0);
                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x198) = lVar6;
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  puVar2 = Method_OVRPlugin_FovfPair_set_Item__;
                  if (lVar6 != 0) {
                    FUN_01e50fe4(lVar6,0);
                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1a0) = lVar6;
                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    puVar2 = StringLiteral_8425;
                    if (lVar6 != 0) {
                      FUN_01e51a40(lVar6,0);
                      *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1a8) = lVar6;
                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      if (lVar6 != 0) {
                        FUN_01e50ec8(lVar6,0);
                        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1b0) = lVar6;
                        plVar7 = (long *)FUN_01fbbe78(lVar6,1,0);
                        lVar6 = *unaff_x21;
                        if (plVar7 == (long *)0x0) {
                          *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x1b8) = 0;
                        }
                        else {
                          bVar1 = *(byte *)(lVar6 + 300);
                          if ((*(byte *)(*plVar7 + 300) < bVar1) ||
                             (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)
                             ) {
LAB_01fb9580:
                    /* WARNING: Subroutine does not return */
                            FUN_00da544c();
                          }
                          *(long **)(*(long *)(lVar6 + 0xb8) + 0x1b8) = plVar7;
                          if ((*(byte *)(*plVar7 + 300) < bVar1) ||
                             (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)
                             ) goto LAB_01fb9580;
                        }
                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                        
                                                  Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Name__
                                                  );
                        puVar2 = Method_System_RuntimeType_GetEnumValues__;
                        if (lVar6 != 0) {
                          thunk_FUN_01e51810(lVar6,0);
                          *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1c0) = lVar6;
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          puVar2 = Interop_Sys_TypeInfo;
                          if (lVar6 != 0) {
                            thunk_FUN_01e51810(lVar6,0);
                            *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1c8) = lVar6;
                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_f32__;
                            if (lVar6 != 0) {
                              FUN_01e50e60(lVar6,0);
                              *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1d0) = lVar6;
                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                              puVar2 = StringLiteral_12418;
                              if (lVar6 != 0) {
                                FUN_01e515b4(lVar6,0);
                                *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1d8) = lVar6;
                                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                puVar2 = PTR_DAT_033eecd0;
                                if (lVar6 != 0) {
                                  FUN_01e542dc(lVar6,0);
                                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1e0) = lVar6;
                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                  puVar2 = 
                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64>_SliceWithStride<Vector3>__
                                  ;
                                  if (lVar6 != 0) {
                                    FUN_01e50d34(lVar6,0);
                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1e8) = lVar6;
                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                    puVar2 = 
                                    Method_System_Collections_Generic_List_Enumerator<SoccerBlockerTarget>_get_Current__
                                    ;
                                    if (lVar6 != 0) {
                                      FUN_01e54d2c(lVar6,0);
                                      *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1f0) = lVar6;
                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                      puVar2 = 
                                      System_Collections_Generic_Queue<LocomotionEvent>_TypeInfo;
                                      if (lVar6 != 0) {
                                        FUN_01e52780(lVar6,0);
                                        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1f8) = lVar6;
                                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                        puVar2 = StringLiteral_4647;
                                        if (lVar6 != 0) {
                                          FUN_01fbc050();
                                          *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x200) = lVar6;
                                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                          puVar2 = 
                                          Method_System_Collections_Generic_List_Enumerator<TMP_Text>_get_Current__
                                          ;
                                          if (lVar6 != 0) {
                                            FUN_01e4f748(lVar6,0);
                                            *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x208) = lVar6;
                                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                            puVar2 = 
                                            Field_<PrivateImplementationDetails>_FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
                                            ;
                                            if (lVar6 != 0) {
                                              FUN_01e4f690(lVar6,0);
                                              *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x210) =
                                                   lVar6;
                                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                              puVar2 = Method_System___ComObject__ctor__;
                                              if (lVar6 != 0) {
                                                FUN_01e4f6e8(lVar6,0);
                                                *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x218) =
                                                     lVar6;
                                                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                puVar2 = StringLiteral_4973;
                                                if (lVar6 != 0) {
                                                  FUN_01e50e90(lVar6,0);
                                                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x220) =
                                                       lVar6;
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  puVar2 = StringLiteral_11470;
                                                  if (lVar6 != 0) {
                                                    FUN_01e540a8(lVar6,0);
                                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x228)
                                                         = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = StringLiteral_9508;
                                                    if (lVar6 != 0) {
                                                      FUN_01e53738(lVar6,0);
                                                      *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x230
                                                               ) = lVar6;
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      puVar2 = PTR_DAT_033f4688;
                                                      if (lVar6 != 0) {
                                                        FUN_01e53280(lVar6,0);
                                                        *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                 0x238) = lVar6;
                                                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                    puVar2);
                                                        puVar2 = PTR_DAT_033f49a0;
                                                        if (lVar6 != 0) {
                                                          FUN_01e53bf0(lVar6,0);
                                                          *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                   0x240) = lVar6;
                                                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                      puVar2);
                                                          puVar2 = 
                                                  UnityEngine_Rendering_Universal_LibTessDotNet_PriorityHeap_LessOrEqual<MeshUtils_Vertex>_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    FUN_01e55e28(lVar6,0);
                                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x248)
                                                         = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List<TweenCallback>_Clear__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    FUN_01e4f868(lVar6,0);
                                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x250)
                                                         = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = 
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IEndDragHandler>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    FUN_01e4f808(lVar6,0);
                                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 600) =
                                                         lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = Method_System_Text_DecoderNLS_Convert__
                                                    ;
                                                    if (lVar6 != 0) {
                                                      FUN_01e50e78(lVar6,0);
                                                      *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x260
                                                               ) = lVar6;
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      puVar2 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlub_n_s8__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    FUN_01e50ea0(lVar6,0);
                                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x268)
                                                         = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = 
                                                  Sirenix_Serialization_PrefabModification_<>c_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    FUN_01fbc0a4();
                                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x270)
                                                         = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_RegId,_List<ProbeBrickPool_BrickChunkAlloc>>_TryGetValue__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    FUN_01e4ee74(lVar6,0);
                                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x278)
                                                         = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TryGetValue__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    FUN_01fbc0a4();
                                                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x280)
                                                         = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = StringLiteral_3450;
                                                    if (lVar6 != 0) {
                                                      FUN_01e4ec50(lVar6,0);
                                                      *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x288
                                                               ) = lVar6;
                                                      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                     puVar2,0xd);
                                                      if (plVar7 != (long *)0x0) {
                                                        lVar6 = *(long *)(*(long *)(*unaff_x21 +
                                                                                   0xb8) + 0x200);
                                                        if ((lVar6 != 0) &&
                                                           (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                                                  goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  if (uVar9 != 0) {
                                                    plVar7[4] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x150);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (1 < uVar9) {
                                                    plVar7[5] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x158);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (2 < uVar9) {
                                                    plVar7[6] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x160);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (3 < uVar9) {
                                                    plVar7[7] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x118);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (4 < uVar9) {
                                                    plVar7[8] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x120);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (5 < uVar9) {
                                                    plVar7[9] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1b0);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (6 < uVar9) {
                                                    plVar7[10] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1b8);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (7 < uVar9) {
                                                    plVar7[0xb] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1d8);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (8 < uVar9) {
                                                    plVar7[0xc] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x128);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (9 < uVar9) {
                                                    plVar7[0xd] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1f0);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (10 < uVar9) {
                                                    plVar7[0xe] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1a0);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (0xb < uVar9) {
                                                    plVar7[0xf] = lVar6;
                                                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x290)
                                                         = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar2,0xd);
                                                    if (plVar7 == (long *)0x0) goto LAB_01fbbd64;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x200);
                                                    if ((lVar6 != 0) &&
                                                       (lVar8 = thunk_FUN_00d6225c(lVar6,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                                                  goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  if (uVar9 != 0) {
                                                    plVar7[4] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x150);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (1 < uVar9) {
                                                    plVar7[5] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x158);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (2 < uVar9) {
                                                    plVar7[6] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x160);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (3 < uVar9) {
                                                    plVar7[7] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x118);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (4 < uVar9) {
                                                    plVar7[8] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x120);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (5 < uVar9) {
                                                    plVar7[9] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1b0);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (6 < uVar9) {
                                                    plVar7[10] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1b8);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (7 < uVar9) {
                                                    plVar7[0xb] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1d8);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (8 < uVar9) {
                                                    plVar7[0xc] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x128);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (9 < uVar9) {
                                                    plVar7[0xd] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1e8);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (10 < uVar9) {
                                                    plVar7[0xe] = lVar6;
                                                    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x1a0);
                                                    if (lVar6 != 0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (0xb < uVar9) {
                                                    plVar7[0xf] = lVar6;
                                                    puVar2 = PTR_DAT_033f5fd0;
                                                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x298)
                                                         = plVar7;
                                                    puVar3 = System_Action<TuneTarget>_TypeInfo;
                                                    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                   puVar2,0x26);
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xb0);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 != 0) {
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetResult__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  if (plVar7 != (long *)0x0) {
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) {
LAB_01fbbd6c:
                                                      uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                      FUN_00da5038(uVar10,0);
                                                    }
                                                    puVar12 = (uint *)(plVar7 + 3);
                                                    if (*puVar12 == 0) goto LAB_01fbbd68;
                                                    plVar7[4] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x148)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)StringLiteral_12857;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (*puVar12 < 2) goto LAB_01fbbd68;
                                                    plVar7[5] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xb8);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<ShaderTagId>_get_Item__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 3) goto LAB_01fbbd68;
                                                  plVar7[6] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 200);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_Messenger<SetList>_RemoveListener__;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 4) goto LAB_01fbbd68;
                                                  plVar7[7] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xd0);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)PTR_DAT_033f2f40;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 5) goto LAB_01fbbd68;
                                                  plVar7[8] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xe0);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)PTR_DAT_033ec6e8;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 6) goto LAB_01fbbd68;
                                                  plVar7[9] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xe8);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 7) goto LAB_01fbbd68;
                                                  plVar7[10] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xf8);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_Oculus_Interaction_Input_DataModifier<ControllerDataAsset>__ctor__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 8) goto LAB_01fbbd68;
                                                  plVar7[0xb] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x120);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                            System_Linq_Expressions_Block4_TypeInfo;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 9) goto LAB_01fbbd68;
                                                  plVar7[0xc] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x118);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  System_Action<ARPlanesChangedEventArgs>_TypeInfo;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 10) goto LAB_01fbbd68;
                                                  plVar7[0xd] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x128);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)StringLiteral_1993;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0xb) goto LAB_01fbbd68;
                                                  plVar7[0xe] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x130);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_DissolveSceneOnMessage_<>c_<Activate>b__7_1__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0xc) goto LAB_01fbbd68;
                                                  plVar7[0xf] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x108);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  puVar5 = 
                                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0xd) goto LAB_01fbbd68;
                                                  plVar7[0x10] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x140);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)StringLiteral_12130;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0xe) goto LAB_01fbbd68;
                                                  plVar7[0x11] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x108);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  RCG_Lovesick_Powers_Tempo_TempoDial_<DissappearCoroutine>d__34_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0xf) goto LAB_01fbbd68;
                                                  plVar7[0x12] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xc0);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x10) goto LAB_01fbbd68;
                                                  plVar7[0x13] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1f8);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_LinkedList_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x11) goto LAB_01fbbd68;
                                                  plVar7[0x14] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x168);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)StringLiteral_14078;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x12) goto LAB_01fbbd68;
                                                  plVar7[0x15] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x180);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  System_Collections_Generic_IEnumerable<PolygonPoint>_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x13) goto LAB_01fbbd68;
                                                  plVar7[0x16] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x150);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                            System_Func<JsonProperty,_int>_TypeInfo;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x14) goto LAB_01fbbd68;
                                                  plVar7[0x17] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x158);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Net_WebRequest_get_Timeout__;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x15) goto LAB_01fbbd68;
                                                  plVar7[0x18] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x160);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_ComponentModel_PropertyDescriptorCollection_Insert__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x16) goto LAB_01fbbd68;
                                                  plVar7[0x19] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x168);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  puVar4 = 
                                                  Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x17) goto LAB_01fbbd68;
                                                  plVar7[0x1a] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1b0);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)PTR_DAT_033ec508;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x18) goto LAB_01fbbd68;
                                                  plVar7[0x1b] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1b8);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)PTR_DAT_033f3178;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x19) goto LAB_01fbbd68;
                                                  plVar7[0x1c] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1d8);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_UI_Button_<OnFinishSubmit>d__9_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x1a) goto LAB_01fbbd68;
                                                  plVar7[0x1d] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x108);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List<BaseRaycaster>__ctor__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x1b) goto LAB_01fbbd68;
                                                  plVar7[0x1e] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x140);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_Oculus_Interaction_SelectorUnityEventWrapper_HandleSelected__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x1c) goto LAB_01fbbd68;
                                                  plVar7[0x1f] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x108);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)StringLiteral_526;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x1d) goto LAB_01fbbd68;
                                                  plVar7[0x20] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x200);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x1e) goto LAB_01fbbd68;
                                                  plVar7[0x21] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x210);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x1f) goto LAB_01fbbd68;
                                                  plVar7[0x22] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x218);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_CompilerServices_DateTimeConstantAttribute___TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x20) goto LAB_01fbbd68;
                                                  plVar7[0x23] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x228);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x21) goto LAB_01fbbd68;
                                                  plVar7[0x24] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x240);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)StringLiteral_8044;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x22) goto LAB_01fbbd68;
                                                  plVar7[0x25] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x230);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_Collections_NativeArray<Vector3>_Dispose__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x23) goto LAB_01fbbd68;
                                                  plVar7[0x26] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x238);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ManagedWebSocket_<CloseWithReceiveErrorAndThrowAsync>d__66>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x24) goto LAB_01fbbd68;
                                                  plVar7[0x27] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xa8);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Threading_Tasks_Task<int>_GetAwaiter__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x25) goto LAB_01fbbd68;
                                                  plVar7[0x28] = lVar6;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x248);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 == 0) goto LAB_01fbbd64;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List<ChangelogEntry>_Add__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (*puVar12 < 0x26) goto LAB_01fbbd68;
                                                  plVar7[0x29] = lVar6;
                                                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x2a0) =
                                                       plVar7;
                                                  plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                 puVar2,0x2d);
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x120);
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar6 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  if (plVar7 != (long *)0x0) {
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    puVar12 = (uint *)(plVar7 + 3);
                                                    if (*puVar12 != 0) {
                                                      plVar7[4] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x118);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Configuration_IgnoreSection_ResetModified__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (1 < *puVar12) {
                                                    plVar7[5] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x150)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)StringLiteral_4952;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 5;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (2 < *puVar12) {
                                                      plVar7[6] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x158);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_OVRSpaceQuery_Options_ToQueryInfo__;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 5;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (3 < *puVar12) {
                                                    plVar7[7] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x160)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)OVROverlay_TypeInfo;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (4 < *puVar12) {
                                                      plVar7[8] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x1a0);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)StringLiteral_6145;
                                                      FUN_017b46ec(lVar6,0);
                                                      *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                      *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                      *(undefined4 *)(lVar6 + 0x20) = 9;
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (5 < *puVar12) {
                                                    plVar7[9] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Rendering_CommandBuffer_WaitOnAsyncGraphicsFence__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x28;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (6 < *puVar12) {
                                                    plVar7[10] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_Add__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (7 < *puVar12) {
                                                    plVar7[0xb] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)PTR_DAT_033eced0;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (8 < *puVar12) {
                                                      plVar7[0xc] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x198);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)StringLiteral_4078;
                                                      FUN_017b46ec(lVar6,0);
                                                      *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                      *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                      *(undefined4 *)(lVar6 + 0x20) = 0x28;
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (9 < *puVar12) {
                                                    plVar7[0xd] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1e8)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<BillingPlan>_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (10 < *puVar12) {
                                                    plVar7[0xe] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xa0);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *unaff_x29;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (0xb < *puVar12) {
                                                      plVar7[0xf] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) + 0xa8
                                                                );
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_Mono_Security_X509_PKCS12_AddPrivateKey__;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0xc < *puVar12) {
                                                    plVar7[0x10] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xb0);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)StringLiteral_12526;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List<ShaderTagId>_get_Item__
                                                  ;
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0xd < *puVar12) {
                                                    plVar7[0x11] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xb8);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (0xe < *puVar12) {
                                                      plVar7[0x12] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) + 0xc0
                                                                );
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)StringLiteral_4884;
                                                      FUN_017b46ec(lVar6,0);
                                                      *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                      *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                      *(undefined4 *)(lVar6 + 0x20) = 0x25;
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  puVar2 = PTR_DAT_033f2f40;
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0xf < *puVar12) {
                                                    plVar7[0x13] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xd0);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    puVar2 = PTR_DAT_033ec6e8;
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (0x10 < *puVar12) {
                                                      plVar7[0x14] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) + 0xd8
                                                                );
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)puVar2;
                                                      FUN_017b46ec(lVar6,0);
                                                      *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                      *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                      *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  puVar2 = 
                                                  Method_Oculus_Interaction_Input_DataModifier<ControllerDataAsset>__ctor__
                                                  ;
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x11 < *puVar12) {
                                                    plVar7[0x15] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xf8);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (0x12 < *puVar12) {
                                                      plVar7[0x16] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x100);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)StringLiteral_238;
                                                      FUN_017b46ec(lVar6,0);
                                                      *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                      *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                      *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                      lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x13 < *puVar12) {
                                                    plVar7[0x17] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x110)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x14 < *puVar12) {
                                                    plVar7[0x18] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x138)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (0x15 < *puVar12) {
                                                      plVar7[0x19] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) + 0xf0
                                                                );
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x16 < *puVar12) {
                                                    plVar7[0x1a] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x188)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Oculus_Platform_Models_PidList_TypeInfo;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x17 < *puVar12) {
                                                    plVar7[0x1b] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 400);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_UIR_Tessellation_TypeInfo;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x18 < *puVar12) {
                                                    plVar7[0x1c] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x250)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputSystem_AddDevice__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x19 < *puVar12) {
                                                    plVar7[0x1d] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 600);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Data_DataView_System_Collections_IList_Insert__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x1a < *puVar12) {
                                                    plVar7[0x1e] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x148)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x1b < *puVar12) {
                                                    plVar7[0x1f] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x168)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0x1f;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (0x1c < *puVar12) {
                                                      plVar7[0x20] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x170);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x12;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x1d < *puVar12) {
                                                    plVar7[0x21] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x178)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<RadioButton>_get_Item__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x28;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x1e < *puVar12) {
                                                    plVar7[0x22] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x180)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x1d;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x1f < *puVar12) {
                                                    plVar7[0x23] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1a8)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x22;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x20 < *puVar12) {
                                                    plVar7[0x24] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1c0)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Net_WebSockets_WebSocketHandle_TypeInfo;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x1d;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x21 < *puVar12) {
                                                    plVar7[0x25] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1c8)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x1d;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x22 < *puVar12) {
                                                    plVar7[0x26] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1d0)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)StringLiteral_1905;
                                                    FUN_017b46ec(lVar6,0);
                                                    *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                    *(undefined4 *)(lVar6 + 0x20) = 0x26;
                                                    lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01fbbd6c;
                                                    if (0x23 < *puVar12) {
                                                      plVar7[0x27] = lVar6;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x1e0);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar6 == 0) goto LAB_01fbbd64;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x21;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x24 < *puVar12) {
                                                    plVar7[0x28] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vsqrt_f64__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x1c;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x25 < *puVar12) {
                                                    plVar7[0x29] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x200)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x26 < *puVar12) {
                                                    plVar7[0x2a] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x208)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x27 < *puVar12) {
                                                    plVar7[0x2b] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x220)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x23;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x28 < *puVar12) {
                                                    plVar7[0x2c] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x228)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<uint>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x2c;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x29 < *puVar12) {
                                                    plVar7[0x2d] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x230)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<int,_Panel>_Add__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x2b;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x2a < *puVar12) {
                                                    plVar7[0x2e] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x238)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Sirenix_Serialization_Buffer<__Il2CppFullySharedGenericType>_Free__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x21;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x2b < *puVar12) {
                                                    plVar7[0x2f] = lVar6;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x240)
                                                    ;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar6 == 0) goto LAB_01fbbd64;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerExitHandler>__
                                                  ;
                                                  FUN_017b46ec(lVar6,0);
                                                  *(undefined8 *)(lVar6 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar10;
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x2a;
                                                  lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            );
                                                  if (lVar8 == 0) goto LAB_01fbbd6c;
                                                  if (0x2c < *puVar12) {
                                                    plVar7[0x30] = lVar6;
                                                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x2a8)
                                                         = plVar7;
                                                    FUN_01fbc164();
                                                    return;
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
                                                  goto LAB_01fbbd68;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_01fbbd64;
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
LAB_01fbbd68:
                    /* WARNING: Subroutine does not return */
                                                  FUN_00da5194();
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
              }
            }
          }
        }
      }
    }
  }
LAB_01fbbd64:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


