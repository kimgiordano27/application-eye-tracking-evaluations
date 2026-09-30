/*
FUNCTION_NAME: DG.Tweening.DOTweenModulePhysics$$DOJump
ENTRY_POINT: 00e4a98c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 267
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_9;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_8;functionality_data_collection_or_telemetry_hits_2
*/


long DG_Tweening_DOTweenModulePhysics__DOJump
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  long lVar15;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  int unaff_w25;
  undefined8 *unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  float fVar19;
  long *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  int iStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  ushort uStack0000000000000064;
  undefined2 uStack0000000000000068;
  uint uStack000000000000006c;
  
code_r0x00e4a98c:
  FUN_01299bc0(param_1,param_2,param_3,param_4);
  if (unaff_x23 == 0) {
thunk_FUN_00da518c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 00e4a99c to 00f4aa07 has its CatchHandler @ 00e4a99c
                       catch() { ... } // from try @ 00e4a99c with catch @ 00e4a99c
                       catch() { ... } // from try @ 00e4aa14 with catch @ 00e4a99c */
  *(long *)(unaff_x23 + 0xc0) = in_stack_00000010;
LAB_00e4b0fc:
  bVar2 = false;
  uVar16 = unaff_x24;
LAB_00e4b1f0:
  uVar17 = *(undefined8 *)(unaff_x19 + 0x3c8);
  uVar7 = FUN_00fadd70(uVar17,0);
  if (uVar7 < 0xfa69a86) {
    if (0xf74fdb9 < uVar7) {
      puVar12 = (undefined8 *)Method_UnityEngine_Component_GetComponentInParent<TapEffectPool>__;
      if ((uVar7 == 0xf7f8b15) || (puVar12 = (undefined8 *)StringLiteral_1574, uVar7 == 0xfa69a85))
      goto LAB_00e4b30c;
      goto LAB_00e4b320;
    }
    puVar12 = (undefined8 *)UnityEngine_InputSystem_LowLevel_IEventMerger_TypeInfo;
    if ((uVar7 != 0xb81c360) &&
       (puVar12 = (undefined8 *)
                  Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__,
       uVar7 != 0xf74fdb9)) goto LAB_00e4b320;
LAB_00e4b30c:
    uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
    if ((uVar9 & 1) == 0) goto LAB_00e4b320;
  }
  else {
    if (uVar7 < 0x3dc67b70) {
      puVar12 = (undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_Start<JsonTextReader_<ParseUnicodeAsync>d__12>__
      ;
      if ((uVar7 == 0x2a6dda57) ||
         (puVar12 = (undefined8 *)StringLiteral_12078, uVar7 == 0x3dc67b6f)) goto LAB_00e4b30c;
    }
    else {
      puVar12 = (undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_get_Values__
      ;
      if ((uVar7 == 0x8ba99c50) ||
         (puVar12 = (undefined8 *)System_Comparison<FormatterLocator_FormatterLocatorInfo>_TypeInfo,
         uVar7 == 0x8ea9a109)) goto LAB_00e4b30c;
    }
LAB_00e4b320:
    lVar18 = *(long *)(unaff_x19 + 0x360);
    uVar17 = FUN_01601d40(unaff_x20,unaff_w21,unaff_w25 + unaff_w22,0);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    uStack000000000000006c = unaff_w21;
    FUN_0131423c(&stack0x00000010,(long)&stack0x00000068 + 4,uVar17,*(undefined8 *)PTR_DAT_033f75b0)
    ;
    if (lVar18 == 0) goto thunk_FUN_00da518c;
    FUN_00ac1b08(lVar18,in_stack_00000010,in_stack_00000018,
                 *(undefined8 *)Meta_XR_MRUtilityKit_MRUKAnchor_SceneLabels_var);
  }
  lVar18 = FUN_01601ad8(unaff_x20,unaff_w21,(unaff_w22 - unaff_w21) + 1,0);
  if (lVar18 != 0) {
    unaff_x20 = FUN_01600e54(lVar18,unaff_w21,uVar16,0);
    if (!bVar2) {
      unaff_w27 = (unaff_w22 - unaff_w21) + unaff_w27;
      bVar2 = true;
      uVar7 = unaff_w21;
LAB_00e4adb8:
      iVar14 = *(int *)(unaff_x19 + 0x4f8);
      lVar15 = *(long *)(unaff_x19 + 0x48);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x3b0);
      lVar18 = thunk_FUN_00d62348(*unaff_x26);
                    /* try { // try from 00e4add4 to 00f4addf has its CatchHandler @ 00e4ae2c */
      if ((lVar18 == 0) || (FUN_00e5f720(lVar18,uVar16,0), lVar15 == 0)) goto thunk_FUN_00da518c;
      if (iVar14 - 1U == uVar7) {
                    /* try { // try from 00e4adf4 to 00f4adff has its CatchHandler @ 00e4ae24 */
                    /* try { // try from 00e4ae00 to 00f4ae4f has its CatchHandler @ 00e4ad04 */
        FUN_0132149c(lVar15,uVar7,lVar18,*(undefined8 *)StringLiteral_2840);
        if (!bVar2) goto LAB_00e4ae10;
LAB_00e4aea0:
        lVar18 = *unaff_x28;
        uVar7 = uVar7 - 1;
      }
      else {
        FUN_00ac1918(lVar15,lVar18,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                    );
        *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
        if (bVar2) goto LAB_00e4aea0;
LAB_00e4ae10:
        lVar18 = *unaff_x28;
        if (lVar18 == 0) goto thunk_FUN_00da518c;
        lVar15 = *(long *)(lVar18 + 0x90);
        *(undefined8 *)(lVar18 + 0xb8) = 0;
        *(undefined8 *)(lVar18 + 0x100) = 0;
                    /* catch() { ... } // from try @ 00e4adf4 with catch @ 00e4ae24 */
        if (lVar15 == 0) goto thunk_FUN_00da518c;
                    /* catch() { ... } // from try @ 00e4add4 with catch @ 00e4ae2c */
        lVar18 = *(long *)
                  Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 00e4ad84 with catch @ 00e4ae40 */
        uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
        if ((uVar9 & 1) == 0) {
          *(undefined4 *)(lVar15 + 0x18) = 0;
        }
        else {
          iVar14 = *(int *)(lVar15 + 0x18);
          *(undefined4 *)(lVar15 + 0x18) = 0;
          if (0 < iVar14) {
            FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar14,0);
          }
        }
        lVar18 = *unaff_x28;
        if (lVar18 == 0) goto thunk_FUN_00da518c;
        *(undefined4 *)(lVar18 + 100) = 0xbf800000;
        *(undefined4 *)(lVar18 + 0x10c) = 0xffffffff;
        *(undefined1 *)(lVar18 + 0x164) = *(undefined1 *)(lVar18 + 0x108);
        *(undefined1 *)(lVar18 + 0x108) = 0;
      }
      if ((*(long *)(unaff_x19 + 0x360) == 0) || (lVar18 == 0)) goto thunk_FUN_00da518c;
      unaff_w21 = uVar7 + 1;
      *(uint *)(lVar18 + 0x70) =
           unaff_w21 + unaff_w27 + *(int *)(*(long *)(unaff_x19 + 0x360) + 0x18);
      if (unaff_x20 == 0) goto thunk_FUN_00da518c;
      if (*(int *)(unaff_x20 + 0x10) <= (int)unaff_w21) goto LAB_00e4b8e0;
      if (((0.0 < *(float *)(unaff_x19 + 0xa0)) && (0 < (int)unaff_w21)) &&
         (*(uint *)(unaff_x19 + 0x4f8) == unaff_w21)) {
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar7,&stack0x00000010,
                         *(undefined8 *)StringLiteral_4992), in_stack_00000010 == 0))
        goto thunk_FUN_00da518c;
        cVar1 = *(char *)(in_stack_00000010 + 0x108);
        lVar18 = __start_il2cpp();
        if (lVar18 == 0) goto thunk_FUN_00da518c;
        lVar18 = *(long *)(lVar18 + 0x100);
        if (cVar1 == '\0') {
          uStack0000000000000068 = FUN_015fa29c(unaff_x20,uVar7,0);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
          }
          uVar16 = FUN_016e8b00(&stack0x00000068,0);
          if (lVar18 == 0) goto thunk_FUN_00da518c;
          uVar9 = FUN_0129aa60(lVar18,uVar16,*(undefined8 *)StringLiteral_5025);
          if ((uVar9 & 1) != 0) {
            uStack0000000000000064 = FUN_015fa29c(unaff_x20,uVar7,0);
            uVar9 = FUN_015fa29c(unaff_x20,unaff_w21,0);
            uVar10 = (uint)uVar9;
            lVar18 = __start_il2cpp();
            if (lVar18 == 0) goto thunk_FUN_00da518c;
            lVar18 = *(long *)(lVar18 + 0x100);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_016e8b00((long)&stack0x00000060 + 4,0);
            if ((lVar18 == 0) ||
               (FUN_01299bc0(lVar18,uVar16,&stack0x00000010,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            ), lVar18 = in_stack_00000010, in_stack_00000010 == 0))
            goto thunk_FUN_00da518c;
            iVar14 = *(int *)(in_stack_00000010 + 0x30);
            if (iVar14 == 3) {
              if ((uint)uStack0000000000000064 != (uVar10 & 0xffff)) goto LAB_00e48a58;
            }
            else {
              if (iVar14 == 2) {
                if ((uint)uStack0000000000000064 != (uVar10 & 0xffff)) goto LAB_00e489e4;
              }
              else if (iVar14 == 1) {
LAB_00e489e4:
                if ((0x20 < (uVar10 & 0xffff)) || ((1L << (uVar9 & 0x3f) & 0x100000600U) == 0)) {
                  if (4 < (int)(*(int *)(unaff_x20 + 0x10) - unaff_w21)) {
                    uVar16 = FUN_01601d40(unaff_x20,unaff_w21,4,0);
                    uVar9 = thunk_FUN_015fe514(uVar16,*(undefined8 *)StringLiteral_12078,0);
                    if ((uVar9 & 1) != 0) goto LAB_00e48a58;
                  }
                  goto LAB_00e48a64;
                }
              }
LAB_00e48a58:
              if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
              *(long *)(*unaff_x28 + 0xb8) = lVar18;
            }
          }
        }
        else {
          if ((((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar7,&stack0x00000010,
                             *(undefined8 *)StringLiteral_4992), in_stack_00000010 == 0)) ||
              (*(long *)(in_stack_00000010 + 0x100) == 0)) ||
             (uVar16 = FUN_0268b6ac(*(long *)(in_stack_00000010 + 0x100),0), lVar18 == 0))
          goto thunk_FUN_00da518c;
          uVar9 = FUN_0129aa60(lVar18,uVar16,*(undefined8 *)StringLiteral_5025);
          if ((uVar9 & 1) != 0) {
            lVar15 = *unaff_x28;
            lVar18 = __start_il2cpp();
            if ((lVar18 == 0) || (*(long *)(unaff_x19 + 0x48) == 0)) goto thunk_FUN_00da518c;
            lVar18 = *(long *)(lVar18 + 0x100);
            FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar7,&stack0x00000010,
                         *(undefined8 *)StringLiteral_4992);
            if (((in_stack_00000010 == 0) ||
                ((*(long *)(in_stack_00000010 + 0x100) == 0 ||
                 (uVar16 = FUN_0268b6ac(*(long *)(in_stack_00000010 + 0x100),0), lVar18 == 0)))) ||
               (FUN_01299bc0(lVar18,uVar16,&stack0x00000010,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            ), lVar15 == 0)) goto thunk_FUN_00da518c;
            *(long *)(lVar15 + 0xb8) = in_stack_00000010;
          }
        }
      }
LAB_00e48a64:
      sVar4 = FUN_015fa29c(unaff_x20,unaff_w21,0);
      if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
      *(bool *)(*unaff_x28 + 0x60) = sVar4 == 10;
      if ((*(char *)(unaff_x19 + 0x9d) == '\0') ||
         (sVar4 = FUN_015fa29c(unaff_x20,unaff_w21,0), sVar4 != 0x3c)) goto LAB_00e4adb4;
      unaff_w22 = FUN_01604d40(unaff_x20,*(undefined8 *)PTR_DAT_033ea9b8,unaff_w21,0);
      uVar10 = unaff_w22;
      if ((int)unaff_w22 < 0) {
        if (unaff_w22 == 0xffffffff) goto LAB_00e4adb4;
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = FUN_01604d60(unaff_x20,
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo
                             ,unaff_w21,unaff_w22 - unaff_w21,0);
        if ((-1 < (int)uVar5) && (uVar10 = uVar5, (int)unaff_w22 <= (int)uVar5)) {
          uVar10 = unaff_w22;
        }
      }
      unaff_w25 = ~uVar7 + 1;
      uVar16 = FUN_01601d40(unaff_x20,unaff_w21,unaff_w25 + uVar10,0);
      *(undefined8 *)(unaff_x19 + 0x3c8) = uVar16;
      if ((int)uVar5 < 0) {
        uVar16 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
      }
      else {
        uVar16 = FUN_01601d40(unaff_x20,uVar5 + 1,unaff_w22 + ~uVar5,0);
      }
      puVar3 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
      uVar17 = *(undefined8 *)(unaff_x19 + 0x3c8);
      *(undefined8 *)(unaff_x19 + 0x3c0) = uVar16;
      unaff_x24 = *(undefined8 *)puVar3;
      uVar7 = FUN_00fadd70(uVar17,0);
      uVar16 = unaff_x24;
      if (uVar7 < 0x6e331b90) {
        if (uVar7 < 0x35d0d89c) {
          if (uVar7 < 0xf9312ce) {
            if (uVar7 < 0xcb71854) {
              if (uVar7 < 0xb707a40) {
                if (uVar7 == 0x5d2947) {
                  uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                          
                                                  Method_System_Linq_Enumerable_OrderBy<Transform,_float>__
                                             ,0);
                  if ((uVar9 & 1) != 0) {
                    if (*in_stack_00000008 == 0) goto thunk_FUN_00da518c;
                    uVar17 = FUN_01604018(*in_stack_00000008,0);
                    uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                               ,0);
                    if ((uVar9 & 1) != 0) {
                      if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                      bVar2 = false;
                      *(undefined4 *)(*unaff_x28 + 0xe4) = 0;
                      goto LAB_00e4b1f0;
                    }
                    uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_List<IXRInteractionGroup>__ctor__
                                               ,0);
                    if ((uVar9 & 1) != 0) {
                      if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                      bVar2 = false;
                      *(undefined4 *)(*unaff_x28 + 0xe4) = 1;
                      goto LAB_00e4b1f0;
                    }
                    uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)PTR_DAT_033eee18,0);
                    if ((uVar9 & 1) == 0) {
                      uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_13492,0);
                      if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                      lVar18 = *unaff_x28;
                      if (lVar18 == 0) goto thunk_FUN_00da518c;
                      uVar6 = 3;
                    }
                    else {
                      lVar18 = *unaff_x28;
                      if (lVar18 == 0) goto thunk_FUN_00da518c;
                      uVar6 = 2;
                    }
LAB_00e49f4c:
                    bVar2 = false;
                    *(undefined4 *)(lVar18 + 0xe4) = uVar6;
                    goto LAB_00e4b1f0;
                  }
                }
                else if ((uVar7 == 0xb707a3f) &&
                        (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_IVROverlay__GetOverlayErrorNameFromEnum_TypeInfo
                                                  ,0), (uVar9 & 1) != 0)) goto code_r0x00e48c0c;
              }
              else if (uVar7 == 0xb81c360) {
                uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_InputSystem_LowLevel_IEventMerger_TypeInfo
                                           ,0);
                if ((uVar9 & 1) != 0) {
                  lVar18 = *in_stack_00000008;
                  if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar17 = FUN_01731954(0);
                  uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,&stack0x00000058,0);
                  if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                  if (fStack0000000000000058 < 0.0) {
                    fStack0000000000000058 = 0.0;
                  }
                  if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                  bVar2 = false;
                  *(float *)(*unaff_x28 + 100) = fStack0000000000000058;
                  goto LAB_00e4b1f0;
                }
              }
              else if ((uVar7 == 0xcb71853) &&
                      (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_12784,0),
                      (uVar9 & 1) != 0)) {
                lVar18 = *unaff_x28;
                if (lVar18 == 0) goto thunk_FUN_00da518c;
                uVar6 = *(undefined4 *)(unaff_x19 + 0xa0);
LAB_00e4aaec:
                bVar2 = false;
                *(undefined4 *)(lVar18 + 0xd0) = uVar6;
                goto LAB_00e4b1f0;
              }
            }
            else if (uVar7 < 0xf617602) {
              if (uVar7 == 0xf5ec8c5) {
                uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)Method_System_Array_IndexOf<char>__
                                           ,0);
                if ((uVar9 & 1) != 0) {
                  lVar18 = *unaff_x28;
                  if (lVar18 != 0) {
                    uVar6 = *(undefined4 *)(unaff_x19 + 0xdc);
                    goto LAB_00e49f4c;
                  }
                  goto thunk_FUN_00da518c;
                }
              }
              else if ((uVar7 == 0xf617601) &&
                      (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrbitq_s8__
                                                  ,0), (uVar9 & 1) != 0)) {
                lVar18 = *in_stack_00000008;
                if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0
                            ) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_01731954(0);
                uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,(long)&stack0x00000038 + 4,0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar18 = *unaff_x28;
                if (lVar18 == 0) goto thunk_FUN_00da518c;
                bVar2 = false;
                *(float *)(lVar18 + 0x54) = fStack000000000000003c * *(float *)(lVar18 + 0x84);
                goto LAB_00e4b1f0;
              }
            }
            else {
              puVar12 = (undefined8 *)
                        Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__;
              if (uVar7 == 0xf74fdb9) {
LAB_00e4a704:
                uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                if ((uVar9 & 1) != 0) {
                  if (*in_stack_00000008 == 0) goto thunk_FUN_00da518c;
                  uVar16 = FUN_01602744(*in_stack_00000008,0x2c,0,0);
                  *(undefined8 *)(unaff_x19 + 0x3b8) = uVar16;
                  lVar18 = __start_il2cpp();
                  if ((lVar18 == 0) || (lVar15 = *(long *)(unaff_x19 + 0x3b8), lVar15 == 0))
                  goto thunk_FUN_00da518c;
                  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_00e4b934;
                  if (*(long *)(lVar18 + 0xd0) == 0) goto thunk_FUN_00da518c;
                  uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0xd0),*(undefined8 *)(lVar15 + 0x20),
                                       *(undefined8 *)UnityEngine_Timeline_TimelineClip___TypeInfo);
                  if ((uVar9 & 1) != 0) {
                    if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                    uVar16 = *(undefined8 *)(*unaff_x28 + 0x100);
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar9 = FUN_0268b4e0(uVar16,0,0);
                    if ((uVar9 & 1) != 0) {
                      lVar18 = *(long *)(unaff_x19 + 0x3b8);
                      if (lVar18 == 0) goto thunk_FUN_00da518c;
                      iVar14 = *(int *)(lVar18 + 0x18);
                      if (iVar14 == 3) {
                        uVar9 = FUN_0176f230(*(undefined8 *)(lVar18 + 0x28),&stack0x00000028,0);
                        if ((uVar9 & 1) != 0) {
                          lVar18 = *(long *)(unaff_x19 + 0x3b8);
                          if (lVar18 == 0) goto thunk_FUN_00da518c;
                          if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_00e4b934;
                          uVar9 = FUN_0176f230(*(undefined8 *)(lVar18 + 0x30),
                                               (long)&stack0x00000020 + 4,0);
                          if ((uVar9 & 1) != 0) {
                            lVar15 = *unaff_x28;
                            lVar18 = __start_il2cpp();
                            if ((lVar18 == 0) ||
                               (lVar13 = *(long *)(unaff_x19 + 0x3b8), lVar13 == 0))
                            goto thunk_FUN_00da518c;
                            if (*(int *)(lVar13 + 0x18) == 0) goto LAB_00e4b934;
                            if ((*(long *)(lVar18 + 0xd0) != 0) &&
                               (FUN_01299bc0(*(long *)(lVar18 + 0xd0),*(undefined8 *)(lVar13 + 0x20)
                                             ,&stack0x00000010,
                                             *(undefined8 *)
                                              Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformTrianglesJob>__
                                            ), lVar15 != 0)) {
                              *(long *)(lVar15 + 0x100) = in_stack_00000010;
                              lVar18 = *unaff_x28;
                              if (lVar18 != 0) {
                                *(undefined1 *)(lVar18 + 0x108) = 1;
                                if (*(long *)(lVar18 + 0x100) != 0) {
                                  iVar14 = in_stack_00000020._4_4_ +
                                           iStack0000000000000028 *
                                           *(int *)(*(long *)(lVar18 + 0x100) + 0x28);
                                  goto 
                                  DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass2_0__<DOMoveY>b__0
                                  ;
                                }
                              }
                            }
                            goto thunk_FUN_00da518c;
                          }
                        }
                      }
                      else if (iVar14 == 2) {
                        uVar9 = FUN_0176f230(*(undefined8 *)(lVar18 + 0x28),
                                             (long)&stack0x00000028 + 4,0);
                        if ((uVar9 & 1) != 0) {
                          lVar15 = *unaff_x28;
                          lVar18 = __start_il2cpp();
                          if ((lVar18 == 0) || (lVar13 = *(long *)(unaff_x19 + 0x3b8), lVar13 == 0))
                          goto thunk_FUN_00da518c;
                          if (*(int *)(lVar13 + 0x18) == 0) goto LAB_00e4b934;
                          if ((*(long *)(lVar18 + 0xd0) != 0) &&
                             (FUN_01299bc0(*(long *)(lVar18 + 0xd0),*(undefined8 *)(lVar13 + 0x20),
                                           &stack0x00000010,
                                           *(undefined8 *)
                                            Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformTrianglesJob>__
                                          ), lVar15 != 0)) {
                            *(long *)(lVar15 + 0x100) = in_stack_00000010;
                            lVar18 = *unaff_x28;
                            if (lVar18 != 0) {
                              *(undefined1 *)(lVar18 + 0x108) = 1;
                              iVar14 = iStack000000000000002c;
DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass2_0__<DOMoveY>b__0:
                              *(int *)(lVar18 + 0x10c) = iVar14;
                              goto LAB_00e4b710;
                            }
                          }
                          goto thunk_FUN_00da518c;
                        }
                      }
                      else if (iVar14 == 1) {
                        lVar15 = *unaff_x28;
                        lVar18 = __start_il2cpp();
                        if (((lVar18 == 0) || (*(long *)(lVar18 + 0xd0) == 0)) ||
                           (FUN_01299bc0(*(long *)(lVar18 + 0xd0),*in_stack_00000008,
                                         &stack0x00000010,
                                         *(undefined8 *)
                                          Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformTrianglesJob>__
                                        ), lVar15 == 0)) goto thunk_FUN_00da518c;
                        *(long *)(lVar15 + 0x100) = in_stack_00000010;
                        if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                        *(undefined1 *)(*unaff_x28 + 0x108) = 1;
LAB_00e4b710:
                        unaff_x24 = *(undefined8 *)PTR_DAT_033eb1b0;
                      }
                    }
                  }
LAB_00e4af50:
                  lVar18 = *unaff_x28;
                  if (lVar18 == 0) goto thunk_FUN_00da518c;
LAB_00e4af5c:
                  bVar2 = false;
                  *(undefined1 *)(lVar18 + 0x164) = 1;
                  uVar16 = unaff_x24;
                  goto LAB_00e4b1f0;
                }
              }
              else if (uVar7 == 0xf7f8b15) {
                uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_Component_GetComponentInParent<TapEffectPool>__
                                           ,0);
                if ((uVar9 & 1) != 0) {
                  uVar6 = FUN_0176ef0c(*in_stack_00000008,0x203,0);
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
                  }
                  unaff_x24 = FUN_016faa74(uVar6,0);
                  goto LAB_00e4b1ec;
                }
              }
              else {
                puVar12 = (undefined8 *)StringLiteral_3177;
                if (uVar7 == 0xf9312cd) {
LAB_00e49a24:
                  uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                  if ((uVar9 & 1) != 0) {
                    lVar18 = __start_il2cpp();
                    if ((lVar18 == 0) || (*(long *)(lVar18 + 0xe0) == 0)) goto thunk_FUN_00da518c;
                    uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0xe0),*in_stack_00000008,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_OVRGLTFInputNode>_GetEnumerator__
                                        );
                    if ((uVar9 & 1) == 0) goto LAB_00e4af50;
                    lVar15 = *unaff_x28;
                    lVar18 = __start_il2cpp();
                    if (((lVar18 == 0) || (*(long *)(lVar18 + 0xe0) == 0)) ||
                       (FUN_01299bc0(*(long *)(lVar18 + 0xe0),*in_stack_00000008,&stack0x00000010,
                                     *(undefined8 *)Mono_RuntimeEventHandle_TypeInfo), lVar15 == 0))
                    goto thunk_FUN_00da518c;
                    *(long *)(lVar15 + 0x110) = in_stack_00000010;
                    unaff_x26 = (undefined8 *)
                                DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                    ;
                    goto LAB_00e4af50;
                  }
                }
              }
            }
          }
          else if (uVar7 < 0x218ac802) {
            if (uVar7 < 0xfa69a86) {
              puVar12 = (undefined8 *)OVRPassthroughLayer_StylesHandler_TypeInfo;
              if (uVar7 == 0xfa45bee) {
LAB_00e49d8c:
                uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                if ((uVar9 & 1) != 0) {
                  lVar18 = __start_il2cpp();
                  if ((lVar18 == 0) || (*(long *)(lVar18 + 0xa0) == 0)) goto thunk_FUN_00da518c;
                  uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0xa0),*in_stack_00000008,
                                       *(undefined8 *)StringLiteral_13796);
                  if ((uVar9 & 1) != 0) {
                    lVar15 = *unaff_x28;
                    lVar18 = __start_il2cpp();
                    if (((lVar18 != 0) && (*(long *)(lVar18 + 0xa0) != 0)) &&
                       (FUN_01299bc0(*(long *)(lVar18 + 0xa0),*in_stack_00000008,&stack0x00000010,
                                     *(undefined8 *)
                                      Method_UnityEngine_EventSystems_ExecuteEvents_ValidateEventData<AxisEventData>__
                                    ), lVar15 != 0)) {
                      *(long *)(lVar15 + 0xf8) = in_stack_00000010;
                      unaff_x26 = (undefined8 *)
                                  DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                      ;
                      goto LAB_00e4af50;
                    }
                    goto thunk_FUN_00da518c;
                  }
                  uVar16 = FUN_01600424(*(undefined8 *)
                                         Method_System_Collections_Generic_List<SoundTracking>_Add__
                                        ,*in_stack_00000008,*(undefined8 *)StringLiteral_4961,0);
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)StringLiteral_302);
                  }
                  FUN_02660dac(uVar16,0);
                  goto LAB_00e4af50;
                }
              }
              else if ((uVar7 == 0xfa69a85) &&
                      (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_1574,0),
                      (uVar9 & 1) != 0)) {
                if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x90), lVar18 == 0))
                goto thunk_FUN_00da518c;
LAB_00e4a240:
                FUN_00ac1158(lVar18,*in_stack_00000008,
                             *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
                goto LAB_00e4b1ec;
              }
            }
            else if (uVar7 == 0x18a26908) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_3983,0);
              if ((uVar9 & 1) != 0) {
                if (*in_stack_00000008 == 0) goto thunk_FUN_00da518c;
                uVar17 = FUN_01604018(*in_stack_00000008,0);
                uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                   System_Buffers_ArrayPool<byte>_TypeInfo,0);
                if ((uVar9 & 1) == 0) {
                  uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                          
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo
                                             ,0);
                  if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                  if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                  bVar2 = false;
                  *(undefined1 *)(*unaff_x28 + 0xe0) = 0;
                }
                else {
                  if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                  bVar2 = false;
                  *(undefined1 *)(*unaff_x28 + 0xe0) = 1;
                }
                goto LAB_00e4b1f0;
              }
            }
            else if (uVar7 == 0x1f86c668) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_InputControl<__Il2CppFullySharedGenericStructType>_WriteValueFromBufferIntoState__
                                         ,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = *unaff_x28;
                if (lVar18 == 0) goto thunk_FUN_00da518c;
                uVar6 = *(undefined4 *)(unaff_x19 + 0xe4);
LAB_00e4aa40:
                bVar2 = false;
                *(undefined4 *)(lVar18 + 0xec) = uVar6;
                goto LAB_00e4b1f0;
              }
            }
            else if ((uVar7 == 0x218ac801) &&
                    (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_6900,0),
                    (uVar9 & 1) != 0)) {
              lVar18 = *unaff_x28;
              if ((lVar18 != 0) &&
                 ((lVar15 = __start_il2cpp(), lVar15 != 0 && (lVar13 = *unaff_x28, lVar13 != 0)))) {
                *(float *)(lVar18 + 0x54) = *(float *)(lVar15 + 0x148) * *(float *)(lVar13 + 0x84);
                lVar18 = __start_il2cpp();
                if ((lVar18 != 0) && (lVar15 = *unaff_x28, lVar15 != 0)) {
                  *(float *)(lVar13 + 0x80) = *(float *)(lVar18 + 0x14c) * *(float *)(lVar15 + 0x80)
                  ;
                  lVar18 = __start_il2cpp();
                  if ((lVar18 != 0) && (lVar13 = *unaff_x28, lVar13 != 0)) {
                    fVar19 = *(float *)(lVar18 + 0x14c);
                    goto LAB_00e4a148;
                  }
                }
              }
              goto thunk_FUN_00da518c;
            }
          }
          else if (uVar7 < 0x2393fc1d) {
            if (uVar7 == 0x21ad5a43) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                 System_Xml_Schema_XdrBuilder_XdrEntry___TypeInfo,0)
              ;
              if ((uVar9 & 1) != 0) {
                lVar18 = *unaff_x28;
                if (((lVar18 != 0) && (lVar15 = __start_il2cpp(), lVar15 != 0)) &&
                   (lVar13 = *unaff_x28, lVar13 != 0)) {
                  *(float *)(lVar18 + 0x54) = *(float *)(lVar15 + 0x150) * *(float *)(lVar13 + 0x84)
                  ;
                  lVar18 = __start_il2cpp();
                  if ((lVar18 != 0) && (lVar15 = *unaff_x28, lVar15 != 0)) {
                    *(float *)(lVar13 + 0x80) =
                         *(float *)(lVar18 + 0x154) * *(float *)(lVar15 + 0x80);
                    lVar18 = __start_il2cpp();
                    if ((lVar18 != 0) && (lVar13 = *unaff_x28, lVar13 != 0)) {
                      fVar19 = *(float *)(lVar18 + 0x154);
LAB_00e4a148:
                      *(float *)(lVar15 + 0x84) = fVar19 * *(float *)(lVar13 + 0x84);
                      goto LAB_00e4adac;
                    }
                  }
                }
                goto thunk_FUN_00da518c;
              }
            }
            else if ((uVar7 == 0x2393fc1c) &&
                    (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vabdl_high_u16__
                                                ,0), (uVar9 & 1) != 0)) {
              if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
              bVar2 = false;
              *(undefined4 *)(*unaff_x28 + 0x74) = 0;
              goto LAB_00e4b1f0;
            }
          }
          else if (uVar7 == 0x2a6dda57) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_Start<JsonTextReader_<ParseUnicodeAsync>d__12>__
                                       ,0);
            if ((uVar9 & 1) != 0) {
              *(int *)(unaff_x19 + 0x354) = *(int *)(unaff_x19 + 0x354) + 1;
              uVar9 = FUN_0269e56c(0);
              if (((uVar9 & 1) == 0) || (*(int *)(unaff_x19 + 0x354) <= *(int *)(unaff_x19 + 0x350))
                 ) {
                uVar9 = FUN_0269e56c(0);
                bVar2 = false;
                uVar16 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<BoxCollider>__;
                if ((uVar9 & 1) == 0) {
                  uVar16 = unaff_x24;
                }
              }
              else {
                bVar2 = true;
              }
              goto LAB_00e4b1f0;
            }
          }
          else if (uVar7 == 0x2d20cfe2) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               DigitalOpus_MB_Core_MeshBakerMaterialTexture_TypeInfo
                                       ,0);
            if ((uVar9 & 1) != 0) {
              lVar18 = *unaff_x28;
              if (lVar18 != 0) {
                uVar6 = *(undefined4 *)(unaff_x19 + 0xe8);
                goto LAB_00e4ab6c;
              }
              goto thunk_FUN_00da518c;
            }
          }
          else if ((uVar7 == 0x35d0d89b) &&
                  (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_7229,0),
                  (uVar9 & 1) != 0)) {
            lVar18 = __start_il2cpp();
            if ((lVar18 == 0) || (*(long *)(lVar18 + 0x40) == 0)) goto thunk_FUN_00da518c;
            uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x40),*(undefined8 *)(unaff_x19 + 0xb0),
                                 *(undefined8 *)
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass37_0_<DOText>b__1__
                                );
            if ((uVar9 & 1) == 0) {
LAB_00e4af74:
              lVar18 = __start_il2cpp();
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x40) == 0)) goto thunk_FUN_00da518c;
              uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x40),
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_string>,_ICustomMarshaler>_set_Item__
                                   ,*(undefined8 *)
                                     Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass37_0_<DOText>b__1__
                                  );
              if ((uVar9 & 1) == 0) {
                puVar12 = (undefined8 *)StringLiteral_10836;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  puVar12 = (undefined8 *)StringLiteral_10836;
                }
                goto LAB_00e4b1e0;
              }
              lVar15 = *unaff_x28;
              lVar18 = __start_il2cpp();
              if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x40), lVar18 == 0))
              goto thunk_FUN_00da518c;
              uVar16 = *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_string>,_ICustomMarshaler>_set_Item__
              ;
            }
            else {
              lVar15 = *unaff_x28;
              lVar18 = __start_il2cpp();
              if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x40), lVar18 == 0))
              goto thunk_FUN_00da518c;
              uVar16 = *(undefined8 *)(unaff_x19 + 0xb0);
            }
            FUN_01299bc0(lVar18,uVar16,&stack0x00000010,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
            if (lVar15 == 0) goto thunk_FUN_00da518c;
            *(long *)(lVar15 + 0x78) = in_stack_00000010;
            goto LAB_00e4b0fc;
          }
        }
        else if (uVar7 < 0x5783c4f4) {
          if (uVar7 < 0x40b1b56e) {
            if (uVar7 < 0x3bc94507) {
              if (uVar7 == 0x3b1de9f6) {
                uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_5129,0);
                if ((uVar9 & 1) != 0) {
                  lVar18 = *in_stack_00000008;
                  if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar17 = FUN_01731954(0);
                  uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,(long)&stack0x00000048 + 4,0);
                  if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                  lVar18 = *unaff_x28;
                  uVar6 = uStack000000000000004c;
                  if (lVar18 == 0) goto thunk_FUN_00da518c;
LAB_00e4ab6c:
                  bVar2 = false;
                  *(undefined4 *)(lVar18 + 0xf0) = uVar6;
                  goto LAB_00e4b1f0;
                }
              }
              else if ((uVar7 == 0x3bc94506) &&
                      (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_OnNewEvents__
                                                  ,0), (uVar9 & 1) != 0)) {
                lVar18 = *in_stack_00000008;
                if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0
                            ) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_01731954(0);
                uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,(long)&stack0x00000050 + 4,0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar18 = *unaff_x28;
                uVar6 = uStack0000000000000054;
                if (lVar18 == 0) goto thunk_FUN_00da518c;
LAB_00e4acd8:
                bVar2 = false;
                *(undefined4 *)(lVar18 + 0xe8) = uVar6;
                goto LAB_00e4b1f0;
              }
            }
            else if (uVar7 == 0x3dc67b6f) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_12078,0);
              if ((uVar9 & 1) != 0) {
                uStack0000000000000068 = 10;
                if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0
                            ) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar16 = FUN_01731954(0);
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
                }
                unaff_x24 = FUN_016f8fb8(&stack0x00000068,uVar16,0);
                goto LAB_00e4b1ec;
              }
            }
            else {
              puVar12 = (undefined8 *)StringLiteral_2295;
              if (uVar7 == 0x40b1b56d) goto LAB_00e49d8c;
            }
          }
          else if (uVar7 < 0x52daa9b8) {
            puVar12 = (undefined8 *)StringLiteral_1864;
            if (uVar7 == 0x42e71ab1) {
LAB_00e49fec:
              uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = *unaff_x28;
                if (lVar18 != 0) {
                  *(undefined8 *)(lVar18 + 0x110) = 0;
                  goto LAB_00e4af5c;
                }
                goto thunk_FUN_00da518c;
              }
            }
            else if ((uVar7 == 0x52daa9b7) &&
                    (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_List_Enumerator<ProbeReferenceVolume_Cell>_get_Current__
                                                ,0), (uVar9 & 1) != 0)) {
              lVar18 = *in_stack_00000008;
              if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0)
                  == 0) {
                thunk_FUN_00d32864();
              }
              uVar17 = FUN_01731954(0);
              uVar9 = FUN_0176f384(lVar18,0x1ff,uVar17,(long)&stack0x00000030 + 4,0);
              if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
              lVar18 = *unaff_x28;
              uVar6 = uStack0000000000000034;
              if (lVar18 == 0) goto thunk_FUN_00da518c;
LAB_00e49c2c:
              bVar2 = false;
              *(undefined4 *)(lVar18 + 0x160) = uVar6;
              goto LAB_00e4b1f0;
            }
          }
          else {
            puVar12 = (undefined8 *)Method_MedleyParkingLotPayphonePhaseOne_PhonePlaced__;
            if (uVar7 == 0x55b79d30) {
LAB_00e4a9ac:
              uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = *unaff_x28;
                if (lVar18 != 0) {
                  *(undefined8 *)(lVar18 + 0xf8) = 0;
                  goto LAB_00e4af5c;
                }
                goto thunk_FUN_00da518c;
              }
            }
            else if (uVar7 == 0x56cfcc9c) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)PTR_DAT_033f08c8,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = *in_stack_00000008;
                if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0
                            ) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_01731954(0);
                uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,&stack0x00000050,0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar18 = *unaff_x28;
                uVar6 = uStack0000000000000050;
                if (lVar18 != 0) goto LAB_00e4aa40;
                goto thunk_FUN_00da518c;
              }
            }
            else if ((uVar7 == 0x5783c4f3) &&
                    (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_IEnumerable<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>_TypeInfo
                                                ,0), (uVar9 & 1) != 0)) {
              if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
              bVar2 = false;
              *(undefined4 *)(*unaff_x28 + 0x54) = 0;
              goto LAB_00e4b1f0;
            }
          }
        }
        else if (uVar7 < 0x57e20f53) {
          if (uVar7 < 0x57a1da08) {
            if (uVar7 == 0x5792cf7d) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                 Method_Newtonsoft_Json_Utilities_CollectionWrapper<__Il2CppFullySharedGenericType>_System_Collections_IList_RemoveAt__
                                         ,0);
              if ((uVar9 & 1) != 0) {
                if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                bVar2 = false;
                *(undefined8 *)(*unaff_x28 + 0xc0) = 0;
                goto LAB_00e4b1f0;
              }
            }
            else {
              puVar12 = (undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<SunglassesWithoutTag>_get_Current__
              ;
              if (uVar7 == 0x57a1da07) goto LAB_00e49fec;
            }
          }
          else {
            puVar12 = (undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor_OperationResult>_Invoke__
            ;
            if (uVar7 == 0x57b561bf) {
LAB_00e4a5a4:
              uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
              if ((uVar9 & 1) != 0) {
                if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x98), lVar18 == 0))
                goto thunk_FUN_00da518c;
                lVar15 = *(long *)
                          Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
                ;
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                uVar9 = FUN_00da5b18(*(undefined8 *)
                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
                if ((uVar9 & 1) == 0) {
                  *(undefined4 *)(lVar18 + 0x18) = 0;
                }
                else {
                  iVar14 = *(int *)(lVar18 + 0x18);
                  *(undefined4 *)(lVar18 + 0x18) = 0;
                  if (0 < iVar14) {
                    FUN_0179519c(*(undefined8 *)(lVar18 + 0x10),0,iVar14,0);
                  }
                }
                goto LAB_00e4b0fc;
              }
            }
            else if (uVar7 == 0x57c46c49) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MetaXRAcousticGeometry_<LoadGeometryFromMemory>d__91>__
                                         ,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = *unaff_x28;
                if (lVar18 == 0) goto thunk_FUN_00da518c;
                *(undefined8 *)(lVar18 + 0xa0) = 0;
                *(undefined8 *)(lVar18 + 0xa8) = 0;
                uVar17 = *(undefined8 *)(lVar18 + 0xb0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar9 = FUN_02681b9c(uVar17,0,0);
                lVar18 = *unaff_x28;
                if ((uVar9 & 1) == 0) {
                  if (lVar18 == 0) goto thunk_FUN_00da518c;
                }
                else {
                  if (lVar18 == 0) goto thunk_FUN_00da518c;
                  *(undefined1 *)(lVar18 + 0x164) = 1;
                }
                bVar2 = false;
                *(undefined8 *)(lVar18 + 0xb0) = 0;
                goto LAB_00e4b1f0;
              }
            }
            else {
              puVar12 = (undefined8 *)StringLiteral_4104;
              if (uVar7 == 0x57e20f52) goto LAB_00e4acec;
            }
          }
        }
        else if (uVar7 < 0x5b544ddd) {
          if (uVar7 == 0x5b47ce3f) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<TrackableId,_ARPlane>_TryGetValue__
                                       ,0);
            if ((uVar9 & 1) != 0) {
              if ((*unaff_x28 != 0) && (lVar18 = *(long *)(*unaff_x28 + 0x98), lVar18 != 0))
              goto LAB_00e4a240;
              goto thunk_FUN_00da518c;
            }
          }
          else if ((uVar7 == 0x5b544ddc) &&
                  (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)PTR_DAT_033eb770,0),
                  (uVar9 & 1) != 0)) {
            lVar18 = *in_stack_00000008;
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_01731954(0);
            uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,&stack0x00000040,0);
            if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
            if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
            bVar2 = false;
            *(undefined4 *)(*unaff_x28 + 0x74) = uStack0000000000000040;
            goto LAB_00e4b1f0;
          }
        }
        else {
          puVar12 = (undefined8 *)Method_Sirenix_Serialization_Serializer<float>_WriteValue__;
          if (uVar7 == 0x659ea51d) goto LAB_00e4ac40;
          if (uVar7 == 0x69f9cabc) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)PTR_DAT_033f5b98,0);
            if ((uVar9 & 1) != 0) {
              lVar18 = *unaff_x28;
              if (lVar18 != 0) {
                uVar6 = *(undefined4 *)(unaff_x19 + 0xe0);
                goto LAB_00e4acd8;
              }
              goto thunk_FUN_00da518c;
            }
          }
          else if ((uVar7 == 0x6e331b8f) &&
                  (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_10332,0),
                  (uVar9 & 1) != 0)) {
            if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
            bVar2 = false;
            *(undefined8 *)(*unaff_x28 + 0x118) = 0;
            goto LAB_00e4b1f0;
          }
        }
      }
      else if (uVar7 < 0x93930b70) {
        if (uVar7 < 0x8c894a39) {
          if (uVar7 < 0x81210822) {
            if (uVar7 < 0x7332f966) {
              puVar12 = (undefined8 *)Newtonsoft_Json_Converters_XTextWrapper_TypeInfo;
              if (uVar7 == 0x71a4b14d) {
LAB_00e4ac40:
                uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                if ((uVar9 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e4ac30 with catch @ 00e4ac5c */
                  lVar18 = *in_stack_00000008;
                  if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar17 = FUN_01731954(0);
                  uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,&stack0x00000038,0);
                  if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                  if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                  bVar2 = false;
                  *(undefined4 *)(*unaff_x28 + 0x5c) = uStack0000000000000038;
                  goto LAB_00e4b1f0;
                }
              }
              else if ((uVar7 == 0x7332f965) &&
                      (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqsub_s64__
                                                  ,0), (uVar9 & 1) != 0)) {
                lVar18 = *in_stack_00000008;
                if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0
                            ) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_01731954(0);
                uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,(long)&stack0x00000058 + 4,0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar18 = *unaff_x28;
                uVar6 = uStack000000000000005c;
                if (lVar18 != 0) goto LAB_00e4ad14;
                goto thunk_FUN_00da518c;
              }
            }
            else {
              puVar12 = (undefined8 *)StringLiteral_2801;
              if (uVar7 == 0x80843395) goto LAB_00e4a9ac;
              if ((uVar7 == 0x81210821) &&
                 (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__
                                             ,0), (uVar9 & 1) != 0)) {
                lVar18 = __start_il2cpp();
                if ((lVar18 == 0) || (*(long *)(lVar18 + 0xc0) == 0)) goto thunk_FUN_00da518c;
                uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0xc0),*in_stack_00000008,
                                     *(undefined8 *)PTR_DAT_033f23a0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar15 = *unaff_x28;
                lVar18 = __start_il2cpp();
                if (((lVar18 != 0) && (*(long *)(lVar18 + 0xc0) != 0)) &&
                   (FUN_01299bc0(*(long *)(lVar18 + 0xc0),*in_stack_00000008,&stack0x00000010,
                                 *(undefined8 *)PTR_DAT_033edc08), lVar15 != 0)) {
                  *(long *)(lVar15 + 0xd8) = in_stack_00000010;
                  goto LAB_00e4adac;
                }
                goto thunk_FUN_00da518c;
              }
            }
          }
          else if (uVar7 < 0x8b985330) {
            if (uVar7 == 0x8b7a3e1b) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                 Method_UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_Get__
                                         ,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = __start_il2cpp();
                if ((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto thunk_FUN_00da518c;
                uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x20),*in_stack_00000008,
                                     *(undefined8 *)StringLiteral_1634);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar15 = *unaff_x28;
                lVar18 = __start_il2cpp();
                if (((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) ||
                   (FUN_01299bc0(*(long *)(lVar18 + 0x20),*in_stack_00000008,&stack0x00000010,
                                 *(undefined8 *)RCG_IO_QuestFileSystemController_TypeInfo),
                   lVar15 == 0)) goto thunk_FUN_00da518c;
                *(long *)(lVar15 + 0xc0) = in_stack_00000010;
LAB_00e4adac:
                bVar2 = false;
                unaff_x26 = (undefined8 *)
                            DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                ;
                goto LAB_00e4b1f0;
              }
            }
            else if ((uVar7 == 0x8b98532f) &&
                    (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_UIElements_UIR_BestFitAllocator_BlockPool_CreateBlock__
                                                ,0), (uVar9 & 1) != 0)) {
              lVar18 = *unaff_x28;
              if (lVar18 == 0) goto thunk_FUN_00da518c;
              *(undefined8 *)(lVar18 + 0xa0) = 0;
              *(undefined8 *)(lVar18 + 0xa8) = 0;
              *(undefined8 *)(lVar18 + 0xb0) = 0;
              if (*in_stack_00000008 == 0) goto thunk_FUN_00da518c;
              lVar18 = FUN_01602744(*in_stack_00000008,0x2c,0,0);
              *(long *)(unaff_x19 + 0x3b8) = lVar18;
              if (lVar18 == 0) goto thunk_FUN_00da518c;
              lVar15 = 4;
              goto LAB_00e49160;
            }
          }
          else if (uVar7 == 0x8ba99c50) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_get_Values__
                                       ,0);
            if ((uVar9 & 1) != 0) {
              lVar18 = __start_il2cpp();
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x80) == 0)) goto thunk_FUN_00da518c;
              uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x80),*in_stack_00000008,
                                   *(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo);
              if ((uVar9 & 1) != 0) {
                lVar15 = *unaff_x28;
                lVar18 = __start_il2cpp();
                if (((lVar18 != 0) && (*(long *)(lVar18 + 0x80) != 0)) &&
                   (FUN_01299bc0(*(long *)(lVar18 + 0x80),*in_stack_00000008,&stack0x00000010,
                                 *(undefined8 *)StringLiteral_8852), lVar15 != 0)) {
                  *(long *)(lVar15 + 0xb8) = in_stack_00000010;
                  goto LAB_00e4adac;
                }
                goto thunk_FUN_00da518c;
              }
              uVar9 = FUN_0176f230(*in_stack_00000008,&stack0x00000030,0);
              if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
              lVar18 = *unaff_x28;
              uVar17 = FUN_0113ab94(*(undefined8 *)StringLiteral_3953);
              if (lVar18 == 0) goto thunk_FUN_00da518c;
              *(undefined8 *)(lVar18 + 0xb8) = uVar17;
              if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0xb8), lVar18 == 0))
              goto thunk_FUN_00da518c;
              bVar2 = false;
              *(undefined4 *)(lVar18 + 0x18) = uStack0000000000000030;
              goto LAB_00e4b1f0;
            }
          }
          else if (uVar7 == 0x8c7a3fae) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               Method_System_Nullable<WebSocketCloseStatus>__ctor__,
                                       0);
            if ((uVar9 & 1) != 0) {
              lVar18 = __start_il2cpp();
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto thunk_FUN_00da518c;
              uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x20),
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
                                   *(undefined8 *)StringLiteral_1634);
              if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
              unaff_x23 = *unaff_x28;
              lVar18 = __start_il2cpp();
              if ((lVar18 == 0) || (param_1 = *(long *)(lVar18 + 0x20), param_1 == 0))
              goto thunk_FUN_00da518c;
              param_3 = &stack0x00000010;
              param_2 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__;
              param_4 = *(undefined8 *)RCG_IO_QuestFileSystemController_TypeInfo;
              goto code_r0x00e4a98c;
            }
          }
          else if ((uVar7 == 0x8c894a38) &&
                  (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                            
                                                  Method_Newtonsoft_Json_JsonValidatingReader_OnValidationEvent__
                                              ,0), (uVar9 & 1) != 0)) {
            lVar18 = *unaff_x28;
            if (lVar18 != 0) goto LAB_00e49980;
            goto thunk_FUN_00da518c;
          }
        }
        else if (uVar7 < 0x8f87105b) {
          if (uVar7 < 0x8e9a9680) {
            if (uVar7 == 0x8e870ec7) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                 Method_OVRResult_From<OVRAnchor_ConfigureTrackerResult>__
                                         ,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = __start_il2cpp();
                if ((lVar18 == 0) || (*(long *)(lVar18 + 0x30) == 0)) goto thunk_FUN_00da518c;
                uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x30),
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
                                     *(undefined8 *)
                                      Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo);
                if ((uVar9 & 1) != 0) {
                  lVar15 = *unaff_x28;
                  lVar18 = __start_il2cpp();
                  if (((lVar18 == 0) || (*(long *)(lVar18 + 0x30) == 0)) ||
                     (FUN_01299bc0(*(long *)(lVar18 + 0x30),
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
                                   &stack0x00000010,
                                   *(undefined8 *)
                                    Method_System_Reflection_Module_GetCustomAttributes__),
                     lVar15 == 0)) goto thunk_FUN_00da518c;
                  *(long *)(lVar15 + 200) = in_stack_00000010;
                  goto LAB_00e4b0fc;
                }
                puVar12 = (undefined8 *)System_ObjectDisposedException_TypeInfo;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  puVar12 = (undefined8 *)System_ObjectDisposedException_TypeInfo;
                }
LAB_00e4b1e0:
                FUN_02660dac(*puVar12,0);
                goto LAB_00e4b1ec;
              }
            }
            else if ((uVar7 == 0x8e9a967f) &&
                    (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_266,0),
                    (uVar9 & 1) != 0)) {
              lVar18 = *unaff_x28;
              if (lVar18 == 0) goto thunk_FUN_00da518c;
LAB_00e49980:
              uVar6 = FUN_00e465b4();
LAB_00e4a6c4:
              *(undefined4 *)(lVar18 + 0x3c) = uVar6;
              goto LAB_00e4b0fc;
            }
          }
          else if (uVar7 == 0x8ea9a109) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               System_Comparison<FormatterLocator_FormatterLocatorInfo>_TypeInfo
                                       ,0);
            if ((uVar9 & 1) != 0) {
              lVar18 = __start_il2cpp();
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x80) == 0)) goto thunk_FUN_00da518c;
              uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x80),
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
                                   *(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo);
              if ((uVar9 & 1) == 0) {
                puVar12 = (undefined8 *)PTR_DAT_033ef470;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  puVar12 = (undefined8 *)PTR_DAT_033ef470;
                }
                goto LAB_00e4b1e0;
              }
              lVar15 = *unaff_x28;
              lVar18 = __start_il2cpp();
              if (((lVar18 == 0) || (*(long *)(lVar18 + 0x80) == 0)) ||
                 (FUN_01299bc0(*(long *)(lVar18 + 0x80),
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
                               &stack0x00000010,*(undefined8 *)StringLiteral_8852), lVar15 == 0))
              goto thunk_FUN_00da518c;
              *(long *)(lVar15 + 0xb8) = in_stack_00000010;
              goto LAB_00e4b0fc;
            }
          }
          else if (uVar7 == 0x8f7c82fe) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               Method_System_IO_Stream_NullStream_BeginWrite__,0);
            if ((uVar9 & 1) != 0) {
              lVar18 = __start_il2cpp();
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x90) == 0)) goto thunk_FUN_00da518c;
              uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x90),*in_stack_00000008,
                                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vextq_f64__
                                  );
              if ((uVar9 & 1) == 0) goto LAB_00e4b0fc;
              lVar18 = __start_il2cpp();
              if (((lVar18 == 0) || (*(long *)(lVar18 + 0x90) == 0)) ||
                 (FUN_01299bc0(*(long *)(lVar18 + 0x90),*in_stack_00000008,&stack0x00000010,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_EnhancedTouch_TouchHistory_CheckValid__
                              ), in_stack_00000010 == 0)) goto thunk_FUN_00da518c;
              unaff_x24 = *(undefined8 *)(in_stack_00000010 + 0x18);
              goto LAB_00e4b1ec;
            }
          }
          else if ((uVar7 == 0x8f87105a) &&
                  (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_List<WingedEdge>_RemoveRange__
                                              ,0), (uVar9 & 1) != 0)) {
            lVar18 = __start_il2cpp();
            if ((lVar18 == 0) || (*(long *)(lVar18 + 0x30) == 0)) goto thunk_FUN_00da518c;
            uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x30),*in_stack_00000008,
                                 *(undefined8 *)
                                  Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo);
            if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
            lVar15 = *unaff_x28;
            lVar18 = __start_il2cpp();
            if (((lVar18 != 0) && (*(long *)(lVar18 + 0x30) != 0)) &&
               (FUN_01299bc0(*(long *)(lVar18 + 0x30),*in_stack_00000008,&stack0x00000010,
                             *(undefined8 *)Method_System_Reflection_Module_GetCustomAttributes__),
               lVar15 != 0)) {
              *(long *)(lVar15 + 200) = in_stack_00000010;
              goto LAB_00e4adac;
            }
            goto thunk_FUN_00da518c;
          }
        }
        else if (uVar7 < 0x91200e2e) {
          if (uVar7 == 0x8f9cd6a9) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_6509,0);
            if ((uVar9 & 1) != 0) {
              if (*in_stack_00000008 == 0) goto thunk_FUN_00da518c;
              uVar17 = FUN_01604018(*in_stack_00000008,0);
              uVar7 = FUN_00fadd70(uVar17,0);
              if (uVar7 < 0x78e32de6) {
                if (0x124aec70 < uVar7) {
                  puVar12 = (undefined8 *)Method_UnityEngine_UIElements_TreeView_BindTreeItem__;
                  if (uVar7 == 0x2c301d07) goto LAB_00e4b7fc;
                  puVar12 = (undefined8 *)System_ComponentModel_Design_IReferenceService_TypeInfo;
                  if (uVar7 == 0x3184949e) goto LAB_00e4b7d0;
                  if ((uVar7 != 0x78e32de5) ||
                     (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_7305,0),
                     (uVar9 & 1) == 0)) goto LAB_00e4b1ec;
                  lVar18 = *unaff_x28;
                  if (lVar18 != 0) {
                    uVar6 = 2;
                    goto LAB_00e4957c;
                  }
                  goto thunk_FUN_00da518c;
                }
                puVar12 = (undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_8__;
                if (uVar7 != 0x58c4484) {
                  if ((uVar7 != 0x124aec70) ||
                     (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                                  
                                                  Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__
                                                 ,0), (uVar9 & 1) == 0)) goto LAB_00e4b1ec;
                  if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                  bVar2 = false;
                  *(undefined4 *)(*unaff_x28 + 0x88) = 0;
                  goto LAB_00e4b1f0;
                }
DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass3_0__<DOMoveZ>b__0:
                uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar18 = *unaff_x28;
                if (lVar18 == 0) goto thunk_FUN_00da518c;
                uVar6 = 1;
LAB_00e4b81c:
                bVar2 = false;
                *(undefined4 *)(lVar18 + 0x88) = uVar6;
              }
              else {
                if (uVar7 < 0x9fb60ac5) {
                  puVar12 = (undefined8 *)
                            Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour_InstantiationSettings_var
                  ;
                  if (uVar7 != 0x8f259e5f) {
                    puVar12 = (undefined8 *)PTR_DAT_033eb768;
                    if (uVar7 != 0x9fb60ac4) goto LAB_00e4b1ec;
LAB_00e4b7fc:
                    uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                    if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                    lVar18 = *unaff_x28;
                    if (lVar18 != 0) {
                      uVar6 = 4;
                      goto LAB_00e4b81c;
                    }
                    goto thunk_FUN_00da518c;
                  }
                }
                else {
                  puVar12 = (undefined8 *)System_IO_EndOfStreamException_TypeInfo;
                  if (uVar7 != 0xac1b6f0f) {
                    puVar12 = (undefined8 *)StringLiteral_615;
                    if (uVar7 == 0xc5386597) goto LAB_00e4b7fc;
                    puVar12 = (undefined8 *)StringLiteral_9854;
                    if (uVar7 == 0xe4bb6ec6)
                    goto DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass3_0__<DOMoveZ>b__0;
                    goto LAB_00e4b1ec;
                  }
                }
LAB_00e4b7d0:
                uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar18 = *unaff_x28;
                if (lVar18 == 0) goto thunk_FUN_00da518c;
                uVar6 = 3;
LAB_00e4957c:
                bVar2 = false;
                *(undefined4 *)(lVar18 + 0x88) = uVar6;
              }
              goto LAB_00e4b1f0;
            }
          }
          else {
            puVar12 = (undefined8 *)StringLiteral_12733;
            if (uVar7 == 0x91200e2d) goto LAB_00e4ac40;
          }
        }
        else if (uVar7 == 0x91ca73db) {
          uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_11210,0);
          if ((uVar9 & 1) != 0) {
            lVar18 = *unaff_x28;
            if (lVar18 == 0) goto thunk_FUN_00da518c;
            uVar6 = *(undefined4 *)(unaff_x19 + 0xec);
LAB_00e4aba0:
            bVar2 = false;
            *(undefined4 *)(lVar18 + 0xf4) = uVar6;
            goto LAB_00e4b1f0;
          }
        }
        else if (uVar7 == 0x9250fa55) {
          uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_12150,0);
          if ((uVar9 & 1) != 0) {
            lVar18 = __start_il2cpp();
            if ((lVar18 == 0) || (*(long *)(lVar18 + 0xb0) == 0)) goto thunk_FUN_00da518c;
            uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0xb0),*in_stack_00000008,
                                 *(undefined8 *)StringLiteral_13402);
            if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                    /* catch() { ... } // from try @ 00e4ac3c with catch @ 00e4abf4 */
            lVar15 = *unaff_x28;
            lVar18 = __start_il2cpp();
            if (((lVar18 != 0) && (*(long *)(lVar18 + 0xb0) != 0)) &&
               (FUN_01299bc0(*(long *)(lVar18 + 0xb0),*in_stack_00000008,&stack0x00000010,
                             *(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetClosestSeatPoseDebugger>b__49_0__
                            ), lVar15 != 0)) {
                    /* try { // try from 00e4ac30 to 00f4ac3b has its CatchHandler @ 00e4ac5c */
              *(long *)(lVar15 + 0x118) = in_stack_00000010;
              goto LAB_00e4adac;
            }
            goto thunk_FUN_00da518c;
          }
        }
        else {
          puVar12 = (undefined8 *)
                    UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass13_0_TypeInfo
          ;
          if (uVar7 == 0x93930b6f) goto LAB_00e4a5a4;
        }
      }
      else if (uVar7 < 0xc5b3432e) {
        if (uVar7 < 0xacd039b2) {
          if (uVar7 < 0xa4b251cb) {
            if (uVar7 == 0xa3b5f093) {
              uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_4732,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = *in_stack_00000008;
                if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0
                            ) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_01731954(0);
                uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,&stack0x00000048,0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar18 = *unaff_x28;
                uVar6 = uStack0000000000000048;
                if (lVar18 != 0) goto LAB_00e4aba0;
                goto thunk_FUN_00da518c;
              }
            }
            else if ((uVar7 == 0xa4b251ca) &&
                    (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_4813,0),
                    (uVar9 & 1) != 0)) {
              if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
              bVar2 = false;
              *(undefined1 *)(*unaff_x28 + 0xe0) = *(undefined1 *)(unaff_x19 + 0xd8);
              goto LAB_00e4b1f0;
            }
          }
          else if (uVar7 == 0xac7839ee) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               Method_Obi_ObiNativeList<CollisionMaterial>_GetIntPtr__
                                       ,0);
            if ((uVar9 & 1) != 0) {
              lVar18 = *unaff_x28;
              if (lVar18 == 0) goto thunk_FUN_00da518c;
              *(undefined8 *)(lVar18 + 0xa0) = 0;
              *(undefined8 *)(lVar18 + 0xa8) = 0;
              *(undefined8 *)(lVar18 + 0xb0) = 0;
              uVar6 = *(undefined4 *)(unaff_x19 + 0x104);
              lVar15 = *(long *)(lVar18 + 0x98);
              *(undefined4 *)(lVar18 + 0x80) = uVar6;
              *(undefined4 *)(lVar18 + 0x84) = uVar6;
              if (lVar15 == 0) goto thunk_FUN_00da518c;
              lVar18 = *(long *)
                        Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
              ;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200)
                                  );
              if ((uVar9 & 1) == 0) {
                *(undefined4 *)(lVar15 + 0x18) = 0;
              }
              else {
                iVar14 = *(int *)(lVar15 + 0x18);
                *(undefined4 *)(lVar15 + 0x18) = 0;
                if (0 < iVar14) {
                  FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar14,0);
                }
              }
              if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
              *(undefined4 *)(*unaff_x28 + 0x54) = 0;
              goto LAB_00e4b0fc;
            }
          }
          else {
            puVar12 = (undefined8 *)Sirenix_OdinInspector_SelfValidationResult_TypeInfo;
            if (uVar7 == 0xacd039b1) {
LAB_00e4a6d8:
              uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = *unaff_x28;
                if (lVar18 != 0) goto LAB_00e4ad10;
                goto thunk_FUN_00da518c;
              }
            }
          }
        }
        else if (uVar7 < 0xb8b86dc6) {
          if (uVar7 == 0xae078472) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               Method_System_Collections_Generic_HashSet<ParticleSystem>__ctor__
                                       ,0);
            if ((uVar9 & 1) != 0) {
              if (*in_stack_00000008 == 0) goto thunk_FUN_00da518c;
              uVar17 = FUN_01604018(*in_stack_00000008,0);
              uVar7 = FUN_00fadd70(uVar17,0);
              if (uVar7 < 0x4ecfc60e) {
                if (uVar7 < 0x144f0c63) {
                  puVar12 = (undefined8 *)
                            Method_System_Collections_Generic_Dictionary<InternedString,_string>_get_Count__
                  ;
                  if ((uVar7 == 0xe33ad58) ||
                     (puVar12 = (undefined8 *)Method_System_Collections_HashHelpers_GetPrime__,
                     uVar7 == 0x13254bc4)) {
                    uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                    if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                    lVar18 = *unaff_x28;
                    if (lVar18 == 0) goto thunk_FUN_00da518c;
                    uVar6 = 1;
LAB_00e4b78c:
                    bVar2 = false;
                    *(undefined4 *)(lVar18 + 0x8c) = uVar6;
                    goto LAB_00e4b1f0;
                  }
                  if ((uVar7 != 0x144f0c62) ||
                     (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)PTR_DAT_033eee18,0),
                     (uVar9 & 1) == 0)) goto LAB_00e4b1ec;
                  lVar18 = *unaff_x28;
                  if (lVar18 == 0) goto thunk_FUN_00da518c;
                  uVar6 = 3;
                }
                else if (uVar7 < 0x3c95bf8e) {
                  puVar12 = (undefined8 *)
                            Method_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBuffer__
                  ;
                  if (uVar7 == 0x38809da1) {
LAB_00e4b830:
                    uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                    if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                    if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
                    bVar2 = false;
                    *(undefined4 *)(*unaff_x28 + 0x8c) = 0;
                    goto LAB_00e4b1f0;
                  }
                  if ((uVar7 != 0x3c95bf8d) ||
                     (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_14378,0),
                     (uVar9 & 1) == 0)) goto LAB_00e4b1ec;
                  lVar18 = *unaff_x28;
                  if (lVar18 == 0) goto thunk_FUN_00da518c;
                  uVar6 = 5;
                }
                else {
                  puVar12 = (undefined8 *)StringLiteral_13802;
                  if (uVar7 != 0x45d0a6f4) {
                    puVar12 = (undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<AssetBundle>_Dispose__
                    ;
                    if (uVar7 == 0x4ecfc60d) goto LAB_00e4b5cc;
                    goto LAB_00e4b1ec;
                  }
LAB_00e4b898:
                  uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                  if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                  lVar18 = *unaff_x28;
                  if (lVar18 == 0) goto thunk_FUN_00da518c;
                  uVar6 = 2;
                }
              }
              else {
                if (uVar7 < 0x8b9c0ebb) {
                  puVar12 = (undefined8 *)
                            Method_UnityEngine_UIElements_AbstractProgressBar_OnGeometryChanged__;
                  if (uVar7 == 0x8b9c0eba) {
LAB_00e4b860:
                    uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                    if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                    lVar18 = *unaff_x28;
                    if (lVar18 != 0) {
                      uVar6 = 7;
                      goto LAB_00e4aa74;
                    }
                    goto thunk_FUN_00da518c;
                  }
                  puVar12 = (undefined8 *)StringLiteral_4799;
                  if (uVar7 == 0x5494584d) goto LAB_00e4b830;
                  puVar12 = (undefined8 *)
                            Method_System_Collections_Generic_List<GrabbableObject>_GetEnumerator__;
                  if (uVar7 != 0x7a8c66d7) goto LAB_00e4b1ec;
                }
                else {
                  if (0xc4bcc98c < uVar7) {
                    puVar12 = (undefined8 *)
                              Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Key__
                    ;
                    if (uVar7 == 0xce1430df) goto LAB_00e4b898;
                    puVar12 = (undefined8 *)UnityEngine_InputSystem_InputBindingComposite_var;
                    if (uVar7 != 0xd9734e65) goto LAB_00e4b1ec;
LAB_00e4b5cc:
                    uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                    if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                    lVar18 = *unaff_x28;
                    if (lVar18 != 0) {
                      uVar6 = 4;
                      goto LAB_00e4b78c;
                    }
                    goto thunk_FUN_00da518c;
                  }
                  puVar12 = (undefined8 *)PTR_DAT_033f74a0;
                  if (uVar7 == 0xb1514998) goto LAB_00e4b860;
                  puVar12 = (undefined8 *)
                            Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<object,_object>_ThrowIfInvalid__
                  ;
                  if (uVar7 != 0xc4bcc98c) goto LAB_00e4b1ec;
                }
                uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
                if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
                lVar18 = *unaff_x28;
                if (lVar18 == 0) goto thunk_FUN_00da518c;
                uVar6 = 6;
              }
LAB_00e4aa74:
              bVar2 = false;
              *(undefined4 *)(lVar18 + 0x8c) = uVar6;
              goto LAB_00e4b1f0;
            }
          }
          else if ((uVar7 == 0xb8b86dc5) &&
                  (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                      Method_System_Net_Sockets_Socket_IOControl__,0
                                             ), (uVar9 & 1) != 0)) {
            if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
            bVar2 = false;
            *(undefined8 *)(*unaff_x28 + 0xd8) = 0;
            goto LAB_00e4b1f0;
          }
        }
        else if (uVar7 == 0xbef5c398) {
          uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                             System_Xml_Schema_Datatype_anySimpleType_TypeInfo,0);
          if ((uVar9 & 1) != 0) {
            lVar18 = *unaff_x28;
            if (lVar18 != 0) {
              uVar6 = *(undefined4 *)(unaff_x19 + 0x348);
              goto LAB_00e4aa74;
            }
            goto thunk_FUN_00da518c;
          }
        }
        else if (uVar7 == 0xc20c0ba9) {
          uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                             Method_System_ComponentModel_PropertyDescriptorCollection_Clear__
                                     ,0);
          if ((uVar9 & 1) != 0) {
            lVar18 = *in_stack_00000008;
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_01731954(0);
            uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,(long)&stack0x00000040 + 4,0);
            if ((uVar9 & 1) == 0) goto LAB_00e4b1ec;
            lVar18 = *unaff_x28;
            uVar6 = uStack0000000000000044;
            if (lVar18 != 0) goto LAB_00e4aaec;
            goto thunk_FUN_00da518c;
          }
        }
        else {
          puVar12 = (undefined8 *)StringLiteral_338;
          if (uVar7 == 0xc5b3432d) goto LAB_00e49a24;
        }
      }
      else if (uVar7 < 0xd7ab9de4) {
        if (uVar7 < 0xd5add955) {
          if (uVar7 == 0xd58fc440) {
            uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                               Meta_XR_MRUtilityKit_EffectMesh_TextureCoordinateModes___TypeInfo
                                       ,0);
            if ((uVar9 & 1) != 0) {
              lVar18 = thunk_FUN_00d62348(*unaff_x26);
              if (lVar18 == 0) goto thunk_FUN_00da518c;
              FUN_00e5f238();
              bVar2 = false;
              *(long *)(unaff_x19 + 0x3b0) = lVar18;
              goto LAB_00e4b1f0;
            }
          }
          else if ((uVar7 == 0xd5add954) &&
                  (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                                                                            
                                                  UnityEngine_Playables_ScriptPlayable<DirectorControlPlayable>_TypeInfo
                                              ,0), (uVar9 & 1) != 0)) {
            if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
            bVar2 = false;
            *(undefined8 *)(*unaff_x28 + 200) = 0;
            goto LAB_00e4b1f0;
          }
        }
        else if (uVar7 == 0xd5c1610c) {
          uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                             System_Collections_Generic_IEnumerable<OVRBone>_TypeInfo
                                     ,0);
          if ((uVar9 & 1) != 0) {
            lVar18 = *unaff_x28;
joined_r0x00e4a6b0:
            if (lVar18 != 0) {
              uVar6 = FUN_00e46630();
              goto LAB_00e4a6c4;
            }
            goto thunk_FUN_00da518c;
          }
        }
        else {
          puVar12 = (undefined8 *)
                    Method_UnityEngine_UIElements_UIElementsRuntimeUtility_<>c_<_cctor>b__9_0__;
          if (uVar7 == 0xd79c9359) goto LAB_00e4a6d8;
          if ((uVar7 == 0xd7ab9de3) &&
             (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)PTR_DAT_033f4ff0,0), (uVar9 & 1) != 0
             )) {
            lVar18 = *unaff_x28;
            goto joined_r0x00e4a6b0;
          }
        }
      }
      else if (uVar7 < 0xd7bf259c) {
        puVar12 = (undefined8 *)StringLiteral_779;
        if (uVar7 == 0xd7ad9a33) goto LAB_00e4a704;
        if ((uVar7 == 0xd7bf259b) &&
           (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)StringLiteral_2981,0), (uVar9 & 1) != 0
           )) {
          lVar18 = *unaff_x28;
          if (lVar18 != 0) {
            uVar6 = *(undefined4 *)(unaff_x19 + 0x148);
            goto LAB_00e4957c;
          }
          goto thunk_FUN_00da518c;
        }
      }
      else {
        puVar12 = (undefined8 *)Method_OVRObjectPool_ListScope<GameObject>__ctor__;
        if (uVar7 == 0xd80e6570) {
LAB_00e4acec:
          uVar9 = thunk_FUN_015fe514(uVar17,*puVar12,0);
          if ((uVar9 & 1) != 0) {
            lVar18 = *unaff_x28;
                    /* catch() { ... } // from try @ 00e4ae00 with catch @ 00e4ad04 */
            if (lVar18 == 0) goto thunk_FUN_00da518c;
            *(undefined4 *)(lVar18 + 0x54) = 0;
LAB_00e4ad10:
            uVar6 = *(undefined4 *)(unaff_x19 + 0x104);
LAB_00e4ad14:
            bVar2 = false;
            *(undefined4 *)(lVar18 + 0x80) = uVar6;
            *(undefined4 *)(lVar18 + 0x84) = uVar6;
            goto LAB_00e4b1f0;
          }
        }
        else if (uVar7 == 0xf343666b) {
          uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary_Enumerator<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Current__
                                     ,0);
          if ((uVar9 & 1) != 0) {
            lVar18 = __start_il2cpp();
            if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
              uVar9 = FUN_0129aa60(*(long *)(lVar18 + 0x40),*in_stack_00000008,
                                   *(undefined8 *)
                                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass37_0_<DOText>b__1__
                                  );
              if ((uVar9 & 1) == 0) goto LAB_00e4af74;
              lVar15 = *unaff_x28;
              lVar18 = __start_il2cpp();
              if (((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) &&
                 (FUN_01299bc0(*(long *)(lVar18 + 0x40),*in_stack_00000008,&stack0x00000010,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__),
                 lVar15 != 0)) {
                *(long *)(lVar15 + 0x78) = in_stack_00000010;
                goto LAB_00e4adac;
              }
            }
            goto thunk_FUN_00da518c;
          }
        }
        else if ((uVar7 == 0xff9a9919) &&
                (uVar9 = thunk_FUN_015fe514(uVar17,*(undefined8 *)
                                                    Method_System_Xml_XmlNotation_set_InnerXml__,0),
                (uVar9 & 1) != 0)) {
          lVar18 = *unaff_x28;
          if (lVar18 != 0) {
            uVar6 = *(undefined4 *)(unaff_x19 + 0x110);
            goto LAB_00e49c2c;
          }
          goto thunk_FUN_00da518c;
        }
      }
LAB_00e4adb4:
      bVar2 = false;
      uVar7 = unaff_w21;
      goto LAB_00e4adb8;
    }
    if ((unaff_x20 != 0) &&
       (unaff_x20 = FUN_01601ad8(unaff_x20,unaff_w21,*(int *)(unaff_x20 + 0x10) - unaff_w21,0),
       unaff_x20 != 0)) {
LAB_00e4b8e0:
      if (*(int *)(unaff_x20 + 0x10) < *(int *)(unaff_x19 + 0x4f8)) {
        unaff_x20 = FUN_015f5b28(unaff_x20,
                                 *(undefined8 *)
                                  Method_UnityEngine_Component_GetComponent<BoxCollider>__,0);
      }
      return unaff_x20;
    }
  }
  goto thunk_FUN_00da518c;
LAB_00e49160:
  uVar9 = lVar15 - 4;
  if ((long)*(int *)(lVar18 + 0x18) <= (long)uVar9) goto LAB_00e4b1ec;
  lVar18 = __start_il2cpp();
  if ((lVar18 == 0) || (lVar13 = *(long *)(unaff_x19 + 0x3b8), lVar13 == 0))
  goto thunk_FUN_00da518c;
  if (*(uint *)(lVar13 + 0x18) <= uVar9) {
LAB_00e4b934:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  if (*(long *)(lVar18 + 0x70) == 0) goto thunk_FUN_00da518c;
  uVar8 = FUN_0129aa60(*(long *)(lVar18 + 0x70),*(undefined8 *)(lVar13 + lVar15 * 8),
                       *(undefined8 *)StringLiteral_7448);
  if ((uVar8 & 1) == 0) {
    lVar18 = __start_il2cpp();
    if ((lVar18 == 0) || (lVar13 = *(long *)(unaff_x19 + 0x3b8), lVar13 == 0))
    goto thunk_FUN_00da518c;
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_00e4b934;
    if (*(long *)(lVar18 + 0x60) == 0) goto thunk_FUN_00da518c;
    uVar8 = FUN_0129aa60(*(long *)(lVar18 + 0x60),*(undefined8 *)(lVar13 + lVar15 * 8),
                         *(undefined8 *)Method_System_Collections_Generic_List<AudioClip>_get_Item__
                        );
    lVar18 = *unaff_x28;
    if ((uVar8 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x3b8) == 0) goto thunk_FUN_00da518c;
      if (*(uint *)(*(long *)(unaff_x19 + 0x3b8) + 0x18) <= uVar9) goto LAB_00e4b934;
      uVar16 = FUN_00e46c1c();
      if (lVar18 == 0) goto thunk_FUN_00da518c;
      *(undefined8 *)(lVar18 + 0xa0) = uVar16;
    }
    else {
      lVar13 = __start_il2cpp();
      if ((lVar13 == 0) || (lVar11 = *(long *)(unaff_x19 + 0x3b8), lVar11 == 0))
      goto thunk_FUN_00da518c;
      if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_00e4b934;
      if ((*(long *)(lVar13 + 0x60) == 0) ||
         (FUN_01299bc0(*(long *)(lVar13 + 0x60),*(undefined8 *)(lVar11 + lVar15 * 8),
                       &stack0x00000010,
                       *(undefined8 *)
                        Method_UnityEngine_XR_ARFoundation_TrackableCollection_Enumerator<ARPlane>_get_Current__
                      ), lVar18 == 0)) goto thunk_FUN_00da518c;
      *(long *)(lVar18 + 0xa8) = in_stack_00000010;
    }
  }
  else {
    lVar13 = *unaff_x28;
    lVar18 = __start_il2cpp();
    if ((lVar18 == 0) || (lVar11 = *(long *)(unaff_x19 + 0x3b8), lVar11 == 0))
    goto thunk_FUN_00da518c;
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_00e4b934;
    if ((*(long *)(lVar18 + 0x70) == 0) ||
       (FUN_01299bc0(*(long *)(lVar18 + 0x70),*(undefined8 *)(lVar11 + lVar15 * 8),&stack0x00000010,
                     *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<Spectrum_Point,_float>__),
       lVar13 == 0)) goto thunk_FUN_00da518c;
    *(long *)(lVar13 + 0xb0) = in_stack_00000010;
    if (*unaff_x28 == 0) goto thunk_FUN_00da518c;
    *(undefined1 *)(*unaff_x28 + 0x164) = 1;
  }
  lVar18 = *(long *)(unaff_x19 + 0x3b8);
  lVar15 = lVar15 + 1;
  unaff_x26 = (undefined8 *)
              DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
  ;
  if (lVar18 == 0) goto thunk_FUN_00da518c;
  goto LAB_00e49160;
code_r0x00e48c0c:
  lVar18 = *in_stack_00000008;
  if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar17 = FUN_01731954(0);
  uVar9 = FUN_017849cc(lVar18,0x1ff,uVar17,&stack0x00000060,0);
  if ((uVar9 & 1) == 0) {
LAB_00e4b1ec:
    bVar2 = false;
    uVar16 = unaff_x24;
  }
  else {
    lVar18 = *unaff_x28;
    if (lVar18 == 0) goto thunk_FUN_00da518c;
    bVar2 = false;
    fVar19 = fStack0000000000000060 * *(float *)(unaff_x19 + 0x104);
    *(float *)(lVar18 + 0x80) = fVar19;
    *(float *)(lVar18 + 0x84) = fVar19;
  }
  goto LAB_00e4b1f0;
}


