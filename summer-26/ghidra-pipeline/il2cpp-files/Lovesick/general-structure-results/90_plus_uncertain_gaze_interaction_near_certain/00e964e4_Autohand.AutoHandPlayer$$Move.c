/*
FUNCTION_NAME: Autohand.AutoHandPlayer$$Move
ENTRY_POINT: 00e964e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 197
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 Autohand_AutoHandPlayer__Move(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long unaff_x19;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x50));
  thunk_FUN_00d48444(Method_System_IO_MemoryStream_SetLength__);
  thunk_FUN_00d48444(PTR_DAT_033f6e48);
  thunk_FUN_00d48444(StringLiteral_4842);
  thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_GetEvent__);
  thunk_FUN_00d48444(PTR_DAT_033ee160);
  thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<ARRaycastManager>__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                    );
  thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_SpriteCharacter>_Add__);
  thunk_FUN_00d48444(
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_Clear__
                    );
  thunk_FUN_00d48444(Method_OVRAnchor_TryGetComponent<OVRTriangleMesh>__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vuqadd_s64__);
  thunk_FUN_00d48444(StringLiteral_12098);
  *(undefined1 *)(unaff_x20 + 0x2d) = 1;
  puVar13 = StringLiteral_13194;
  puVar12 = StringLiteral_12098;
  puVar11 = StringLiteral_6456;
  puVar10 = StringLiteral_4747;
  puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vuqadd_s64__;
  puVar8 = Method_UnityEngine_GameObject_AddComponent<ARRaycastManager>__;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
  ;
  puVar6 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<MRUKTrackable>_Dispose__;
  puVar4 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  puVar3 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  puVar2 = PTR_DAT_033f6e48;
  puVar1 = PTR_DAT_033ee160;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  if (0x12 < *(uint *)(unaff_x19 + 0x10)) {
    return 0;
  }
  lVar18 = *(long *)(unaff_x19 + 0x20);
  switch(*(uint *)(unaff_x19 + 0x10)) {
  case 0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar18 != 0) {
      *(undefined1 *)(lVar18 + 0xf8) = 1;
      uVar14 = *(undefined4 *)(unaff_x19 + 0x28);
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
      if (lVar18 != 0) {
        FUN_0268a094(uVar14,lVar18,0);
        *(long *)(unaff_x19 + 0x18) = lVar18;
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
    }
    break;
  case 1:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar16 == 0) break;
    FUN_01320e50(lVar16,*(undefined8 *)puVar2);
    FUN_00ac20f0(lVar16,0,*(undefined8 *)puVar10);
    FUN_00ac20f0(lVar16,1,*(undefined8 *)puVar10);
    FUN_00ac20f0(lVar16,2,*(undefined8 *)puVar10);
    *(long *)(unaff_x19 + 0x30) = lVar16;
    lVar20 = *(long *)puVar9;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar20 = *(long *)puVar9;
    }
    lVar22 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
    if (lVar22 == 0) {
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar20 = *(long *)puVar9;
      }
      uVar19 = **(undefined8 **)(lVar20 + 0xb8);
      lVar22 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if (lVar22 == 0) break;
      FUN_012d239c(lVar22,uVar19,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<uint,_SpriteCharacter>_Add__,0);
      *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8) = lVar22;
    }
    uVar19 = FUN_010dca98(lVar16,lVar22,*(undefined8 *)puVar11);
    uVar19 = FUN_010dfe04(uVar19,*(undefined8 *)puVar7);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar19;
    *(undefined4 *)(unaff_x19 + 0x38) = 0;
    goto LAB_00e96e30;
  case 2:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x30),1,&stack0x00000008,*(undefined8 *)puVar4),
        uVar14 = uStack0000000000000008, lVar18 != 0)) && (*(long *)(unaff_x19 + 0x30) != 0)) {
      lVar16 = *(long *)(lVar18 + 0x88);
      FUN_0132138c(*(long *)(unaff_x19 + 0x30),1,&stack0x00000008,*(undefined8 *)puVar4);
      if (lVar16 != 0) {
        FUN_0132138c(lVar16,uStack0000000000000008,&stack0x00000008,*(undefined8 *)puVar8);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          FUN_00e95518((float)*(int *)(lVar18 + 0x90),lVar18,uVar14,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),1);
          uVar19 = FUN_02682ae0(*(undefined4 *)(lVar18 + 0x110),*(undefined4 *)(lVar18 + 0x114),0);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar19,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 3;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x30),2,&stack0x00000008,*(undefined8 *)puVar4),
        uVar14 = uStack0000000000000008, lVar18 != 0)) && (*(long *)(unaff_x19 + 0x30) != 0)) {
      lVar16 = *(long *)(lVar18 + 0x88);
      FUN_0132138c(*(long *)(unaff_x19 + 0x30),2,&stack0x00000008,*(undefined8 *)puVar4);
      if (lVar16 != 0) {
        FUN_0132138c(lVar16,uStack0000000000000008,&stack0x00000008,*(undefined8 *)puVar8);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          FUN_00e95518((float)*(int *)(lVar18 + 0x90),lVar18,uVar14,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),1);
          uVar19 = FUN_02682ae0(0x40000000,0x40400000,0);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar19,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 4;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    iVar17 = *(int *)(unaff_x19 + 0x38) + 1;
    *(int *)(unaff_x19 + 0x38) = iVar17;
    if (4 < iVar17) {
      if (lVar18 == 0) break;
      FUN_00fdf628(*(undefined8 *)(lVar18 + 0xd0),0);
      uVar14 = *(undefined4 *)(lVar18 + 0xe8);
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
      if (lVar18 == 0) break;
      FUN_0268a094(uVar14,lVar18,0);
      *(long *)(unaff_x19 + 0x18) = lVar18;
      uVar14 = 5;
      goto LAB_00e97694;
    }
LAB_00e96e30:
    lVar16 = *(long *)puVar9;
    uVar19 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar16 = *(long *)puVar9;
    }
    lVar20 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
    if (lVar20 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar16 = *(long *)puVar9;
      }
      uVar21 = **(undefined8 **)(lVar16 + 0xb8);
      lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if (lVar20 == 0) break;
      FUN_012d239c(lVar20,uVar21,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_Clear__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10) = lVar20;
    }
    uVar19 = FUN_010dca98(uVar19,lVar20,*(undefined8 *)puVar11);
    lVar16 = FUN_010dfe04(uVar19,*(undefined8 *)puVar7);
    *(long *)(unaff_x19 + 0x30) = lVar16;
    if (((lVar16 != 0) &&
        (FUN_0132138c(lVar16,0,&stack0x00000008,*(undefined8 *)puVar4),
        uVar14 = uStack0000000000000008, lVar18 != 0)) && (*(long *)(unaff_x19 + 0x30) != 0)) {
      lVar16 = *(long *)(lVar18 + 0x88);
      FUN_0132138c(*(long *)(unaff_x19 + 0x30),0,&stack0x00000008,*(undefined8 *)puVar4);
      if (lVar16 != 0) {
        FUN_0132138c(lVar16,uStack0000000000000008,&stack0x00000008,
                     *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<ARRaycastManager>__);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          FUN_00e95518((float)*(int *)(lVar18 + 0x90),lVar18,uVar14,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),1);
          uVar19 = FUN_02682ae0(*(undefined4 *)(lVar18 + 0x110),*(undefined4 *)(lVar18 + 0x114),0);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
          if (lVar18 != 0) {
            FUN_0268a094(uVar19,lVar18,0);
            uVar14 = 2;
            *(long *)(unaff_x19 + 0x18) = lVar18;
LAB_00e97694:
            *(undefined4 *)(unaff_x19 + 0x10) = uVar14;
            return 1;
          }
        }
      }
    }
    break;
  case 5:
    iVar17 = 0;
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_x19 + 0x38) = 0;
    goto joined_r0x00e969f0;
  case 6:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x40) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000008,*(undefined8 *)puVar1),
        lVar18 != 0)) && (*(long *)(unaff_x19 + 0x40) != 0)) {
      lVar16 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      lVar20 = *(long *)(lVar18 + 0x88);
      lVar22 = *(long *)(lVar18 + 0x78);
      FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000008,*(undefined8 *)puVar1);
      if ((lVar22 != 0) &&
         (uVar14 = FUN_01323730(lVar22,CONCAT44(uStack000000000000000c,uStack0000000000000008),
                                *(undefined8 *)puVar6), lVar20 != 0)) {
        FUN_0132138c(lVar20,uVar14,&stack0x00000008,*(undefined8 *)puVar8);
        if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) && (lVar16 != 0)) {
          FUN_00e95138((float)*(int *)(lVar18 + 0x90),lVar16,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),0xffffffff)
          ;
          uVar14 = *(undefined4 *)(lVar18 + 0x118);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar14,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 7;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 7:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x40) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x40),0,&stack0x00000008,*(undefined8 *)puVar1),
        lVar18 != 0)) && (*(long *)(unaff_x19 + 0x40) != 0)) {
      lVar16 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      lVar20 = *(long *)(lVar18 + 0x88);
      lVar22 = *(long *)(lVar18 + 0x78);
      FUN_0132138c(*(long *)(unaff_x19 + 0x40),0,&stack0x00000008,*(undefined8 *)puVar1);
      if ((lVar22 != 0) &&
         (uVar14 = FUN_01323730(lVar22,CONCAT44(uStack000000000000000c,uStack0000000000000008),
                                *(undefined8 *)puVar6), lVar20 != 0)) {
        FUN_0132138c(lVar20,uVar14,&stack0x00000008,*(undefined8 *)puVar8);
        if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) && (lVar16 != 0)) {
          FUN_00e95138((float)*(int *)(lVar18 + 0x90),lVar16,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),0xffffffff)
          ;
          uVar19 = FUN_02682ae0(*(undefined4 *)(lVar18 + 0x110),*(undefined4 *)(lVar18 + 0x114),0);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar19,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 8;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 8:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x40) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000008,*(undefined8 *)puVar1),
        lVar18 != 0)) && (*(long *)(unaff_x19 + 0x40) != 0)) {
      lVar16 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      lVar20 = *(long *)(lVar18 + 0x88);
      lVar22 = *(long *)(lVar18 + 0x78);
      FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000008,*(undefined8 *)puVar1);
      if ((lVar22 != 0) &&
         (uVar14 = FUN_01323730(lVar22,CONCAT44(uStack000000000000000c,uStack0000000000000008),
                                *(undefined8 *)puVar6), lVar20 != 0)) {
        FUN_0132138c(lVar20,uVar14,&stack0x00000008,*(undefined8 *)puVar8);
        if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) && (lVar16 != 0)) {
          FUN_00e95138((float)*(int *)(lVar18 + 0x90),lVar16,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),0xffffffff)
          ;
          uVar19 = FUN_02682ae0(0x40000000,0x40400000,0);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar19,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 9;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 9:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    iVar17 = *(int *)(unaff_x19 + 0x38) + 1;
    *(int *)(unaff_x19 + 0x38) = iVar17;
joined_r0x00e969f0:
    if (lVar18 == 0) break;
    if (iVar17 < 3) {
      lVar16 = FUN_010dfe04(*(undefined8 *)(lVar18 + 0x78),*(undefined8 *)puVar13);
      *(long *)(unaff_x19 + 0x40) = lVar16;
      puVar2 = Method_System_IO_MemoryStream_SetLength__;
      if (lVar16 != 0) {
        uVar14 = FUN_02682b20(0,*(undefined4 *)(lVar16 + 0x18),0);
        FUN_01324ac8(lVar16,uVar14,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          FUN_0132138c(*(long *)(unaff_x19 + 0x40),0,&stack0x00000008,*(undefined8 *)puVar1);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            lVar16 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
            lVar20 = *(long *)(lVar18 + 0x88);
            lVar22 = *(long *)(lVar18 + 0x78);
            FUN_0132138c(*(long *)(unaff_x19 + 0x40),0,&stack0x00000008,*(undefined8 *)puVar1);
            if ((lVar22 != 0) &&
               (uVar14 = FUN_01323730(lVar22,CONCAT44(uStack000000000000000c,uStack0000000000000008)
                                      ,*(undefined8 *)puVar6), lVar20 != 0)) {
              FUN_0132138c(lVar20,uVar14,&stack0x00000008,*(undefined8 *)puVar8);
              if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) && (lVar16 != 0)) {
                FUN_00e95138((float)*(int *)(lVar18 + 0x90),lVar16,
                             *(undefined8 *)
                              (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),
                             0xffffffff);
                uVar19 = FUN_02682ae0(*(undefined4 *)(lVar18 + 0x110),
                                      *(undefined4 *)(lVar18 + 0x114),0);
                lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
                if (lVar18 != 0) {
                  FUN_0268a094(uVar19,lVar18,0);
                  *(long *)(unaff_x19 + 0x18) = lVar18;
                  uVar14 = 6;
                  goto LAB_00e97694;
                }
              }
            }
          }
        }
      }
      break;
    }
    FUN_00fdf628(*(undefined8 *)(lVar18 + 0xd8),0);
    puVar4 = Method_System_Reflection_Emit_TypeBuilder_get_Module__;
    puVar3 = Method_Newtonsoft_Json_Linq_JToken_Annotation<JToken_LineInfoAnnotation>__;
    puVar2 = Method_Unity_Collections_NativeSlice<Vector4>_get_Length__;
    puVar1 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
    if (*(long *)(lVar18 + 0x78) == 0) break;
    FUN_01323390(*(long *)(lVar18 + 0x78),&stack0x00000008,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcges_f32__);
    in_stack_00000020 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000018;
    while (uVar15 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar1), (uVar15 & 1) != 0) {
      lVar16 = FUN_00ac70b0(&stack0x00000020,*(undefined8 *)puVar3);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *(long *)(lVar16 + 0x20);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01324ac8(lVar16,*(int *)(lVar16 + 0x18) + -1,*(undefined8 *)puVar2);
    }
    FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar4);
    uVar14 = *(undefined4 *)(lVar18 + 0xec);
    lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
    if (lVar18 == 0) break;
    FUN_0268a094(uVar14,lVar18,0);
    *(long *)(unaff_x19 + 0x18) = lVar18;
    uVar14 = 10;
    goto LAB_00e97694;
  case 10:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x30),0,&stack0x00000008,*(undefined8 *)puVar4),
        uVar14 = uStack0000000000000008, lVar18 != 0)) && (*(long *)(unaff_x19 + 0x30) != 0)) {
      lVar16 = *(long *)(lVar18 + 0x88);
      FUN_0132138c(*(long *)(unaff_x19 + 0x30),0,&stack0x00000008,*(undefined8 *)puVar4);
      if (lVar16 != 0) {
        FUN_0132138c(lVar16,uStack0000000000000008,&stack0x00000008,*(undefined8 *)puVar8);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          FUN_00e95518((float)*(int *)(lVar18 + 0x90),lVar18,uVar14,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),1);
          uVar19 = FUN_02682ae0(*(undefined4 *)(lVar18 + 0x110),*(undefined4 *)(lVar18 + 0x114),0);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar19,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 0xb;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 0xb:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x30),1,&stack0x00000008,*(undefined8 *)puVar4),
        uVar14 = uStack0000000000000008, lVar18 != 0)) && (*(long *)(unaff_x19 + 0x30) != 0)) {
      lVar16 = *(long *)(lVar18 + 0x88);
      FUN_0132138c(*(long *)(unaff_x19 + 0x30),1,&stack0x00000008,*(undefined8 *)puVar4);
      if (lVar16 != 0) {
        FUN_0132138c(lVar16,uStack0000000000000008,&stack0x00000008,*(undefined8 *)puVar8);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          FUN_00e95518((float)*(int *)(lVar18 + 0x90),lVar18,uVar14,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),0);
          uVar19 = FUN_02682ae0(*(undefined4 *)(lVar18 + 0x110),*(undefined4 *)(lVar18 + 0x114),0);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar19,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 0xc;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 0xc:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x30),2,&stack0x00000008,*(undefined8 *)puVar4),
        uVar14 = uStack0000000000000008, lVar18 != 0)) && (*(long *)(unaff_x19 + 0x30) != 0)) {
      lVar16 = *(long *)(lVar18 + 0x88);
      FUN_0132138c(*(long *)(unaff_x19 + 0x30),2,&stack0x00000008,*(undefined8 *)puVar4);
      if (lVar16 != 0) {
        FUN_0132138c(lVar16,uStack0000000000000008,&stack0x00000008,*(undefined8 *)puVar8);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          FUN_00e95518((float)*(int *)(lVar18 + 0x90),lVar18,uVar14,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),1);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(0x40000000,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 0xd;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 0xd:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar16 == 0) break;
    FUN_01320e50(lVar16,*(undefined8 *)puVar2);
    FUN_00ac20f0(lVar16,0,*(undefined8 *)puVar10);
    FUN_00ac20f0(lVar16,2,*(undefined8 *)puVar10);
    iVar17 = 0;
    *(long *)(unaff_x19 + 0x30) = lVar16;
    goto LAB_00e971cc;
  case 0xe:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x40) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000008,*(undefined8 *)puVar1),
        lVar18 != 0)) && (*(long *)(unaff_x19 + 0x40) != 0)) {
      lVar16 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      lVar20 = *(long *)(lVar18 + 0x88);
      lVar22 = *(long *)(lVar18 + 0x78);
      FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000008,*(undefined8 *)puVar1);
      if ((lVar22 != 0) &&
         (uVar14 = FUN_01323730(lVar22,CONCAT44(uStack000000000000000c,uStack0000000000000008),
                                *(undefined8 *)puVar6), lVar20 != 0)) {
        FUN_0132138c(lVar20,uVar14,&stack0x00000008,*(undefined8 *)puVar8);
        if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) && (lVar16 != 0)) {
          FUN_00e95138((float)*(int *)(lVar18 + 0x90),lVar16,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),0xffffffff)
          ;
          uVar14 = *(undefined4 *)(lVar18 + 0x118);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar14,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 0xf;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 0xf:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x40) != 0) &&
        (FUN_0132138c(*(long *)(unaff_x19 + 0x40),0,&stack0x00000008,*(undefined8 *)puVar1),
        lVar18 != 0)) && (*(long *)(unaff_x19 + 0x40) != 0)) {
      lVar16 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      lVar20 = *(long *)(lVar18 + 0x88);
      lVar22 = *(long *)(lVar18 + 0x78);
      FUN_0132138c(*(long *)(unaff_x19 + 0x40),0,&stack0x00000008,*(undefined8 *)puVar1);
      if ((lVar22 != 0) &&
         (uVar14 = FUN_01323730(lVar22,CONCAT44(uStack000000000000000c,uStack0000000000000008),
                                *(undefined8 *)puVar6), lVar20 != 0)) {
        FUN_0132138c(lVar20,uVar14,&stack0x00000008,*(undefined8 *)puVar8);
        if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) && (lVar16 != 0)) {
          FUN_00e95138((float)*(int *)(lVar18 + 0x90),lVar16,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),0xffffffff)
          ;
          uVar19 = FUN_02682ae0(*(undefined4 *)(lVar18 + 0x110),*(undefined4 *)(lVar18 + 0x114),0);
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
          if (lVar18 != 0) {
            FUN_0268a094(uVar19,lVar18,0);
            *(long *)(unaff_x19 + 0x18) = lVar18;
            uVar14 = 0x10;
            goto LAB_00e97694;
          }
        }
      }
    }
    break;
  case 0x10:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((*(long *)(unaff_x19 + 0x40) == 0) ||
        (FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000008,*(undefined8 *)puVar1),
        lVar18 == 0)) || (*(long *)(unaff_x19 + 0x40) == 0)) break;
    lVar16 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    lVar20 = *(long *)(lVar18 + 0x88);
    lVar22 = *(long *)(lVar18 + 0x78);
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000008,*(undefined8 *)puVar1);
    if ((lVar22 == 0) ||
       (uVar14 = FUN_01323730(lVar22,CONCAT44(uStack000000000000000c,uStack0000000000000008),
                              *(undefined8 *)puVar6), lVar20 == 0)) break;
    FUN_0132138c(lVar20,uVar14,&stack0x00000008,*(undefined8 *)puVar8);
    if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) || (lVar16 == 0)) break;
    FUN_00e95138((float)*(int *)(lVar18 + 0x90),lVar16,
                 *(undefined8 *)(CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),
                 0xffffffff);
    if (*(int *)(unaff_x19 + 0x38) != 2) {
      uVar19 = FUN_02682ae0(0x40000000,0x40400000,0);
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
      if (lVar18 != 0) {
        FUN_0268a094(uVar19,lVar18,0);
        *(long *)(unaff_x19 + 0x18) = lVar18;
        uVar14 = 0x11;
        goto LAB_00e97694;
      }
      break;
    }
    iVar17 = 3;
    goto LAB_00e96f98;
  case 0x11:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    iVar17 = *(int *)(unaff_x19 + 0x38) + 1;
LAB_00e96f98:
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
LAB_00e971cc:
    *(int *)(unaff_x19 + 0x38) = iVar17;
    if (lVar18 == 0) break;
    if (iVar17 < 3) {
      lVar16 = *(long *)puVar9;
      uVar19 = *(undefined8 *)(lVar18 + 0x78);
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar16 = *(long *)puVar9;
      }
      puVar2 = Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float>__;
      lVar20 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
      if (lVar20 == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar16 = *(long *)puVar9;
        }
        uVar21 = **(undefined8 **)(lVar16 + 0xb8);
        lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar20 == 0) break;
        FUN_012d239c(lVar20,uVar21,
                     *(undefined8 *)Method_OVRAnchor_TryGetComponent<OVRTriangleMesh>__,0);
        *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18) = lVar20;
      }
      uVar19 = FUN_010dca98(uVar19,lVar20,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List<DoublePoint>__ctor__);
      lVar16 = FUN_010dfe04(uVar19,*(undefined8 *)puVar13);
      *(long *)(unaff_x19 + 0x40) = lVar16;
      if (lVar16 != 0) {
        FUN_0132138c(lVar16,0,&stack0x00000008,*(undefined8 *)puVar1);
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          lVar16 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
          lVar20 = *(long *)(lVar18 + 0x88);
          lVar22 = *(long *)(lVar18 + 0x78);
          FUN_0132138c(*(long *)(unaff_x19 + 0x40),0,&stack0x00000008,*(undefined8 *)puVar1);
          if ((lVar22 != 0) &&
             (uVar14 = FUN_01323730(lVar22,CONCAT44(uStack000000000000000c,uStack0000000000000008),
                                    *(undefined8 *)puVar6), lVar20 != 0)) {
            FUN_0132138c(lVar20,uVar14,&stack0x00000008,*(undefined8 *)puVar8);
            if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) && (lVar16 != 0)) {
              FUN_00e95138((float)*(int *)(lVar18 + 0x90),lVar16,
                           *(undefined8 *)
                            (CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x30),
                           0xffffffff);
              uVar19 = FUN_02682ae0(*(undefined4 *)(lVar18 + 0x110),*(undefined4 *)(lVar18 + 0x114),
                                    0);
              lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
              if (lVar18 != 0) {
                FUN_0268a094(uVar19,lVar18,0);
                *(long *)(unaff_x19 + 0x18) = lVar18;
                uVar14 = 0xe;
                goto LAB_00e97694;
              }
            }
          }
        }
      }
      break;
    }
    iVar17 = *(int *)(lVar18 + 0x90);
    lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
    if (lVar18 == 0) break;
    FUN_0268a094((float)iVar17 + 1.0,lVar18,0);
    *(long *)(unaff_x19 + 0x18) = lVar18;
    uVar14 = 0x12;
    goto LAB_00e97694;
  case 0x12:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar18 != 0) {
      FUN_00e955c8(lVar18);
      FUN_00fdf628(*(undefined8 *)(lVar18 + 0xe0),0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


