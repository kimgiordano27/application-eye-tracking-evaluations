/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LibTessDotNet.Mesh$$Reset
ENTRY_POINT: 02352150
PROGRAM: Lovesick-libil2cpp.so
SCORE: 161
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 UnityEngine_Rendering_Universal_LibTessDotNet_Mesh__Reset(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar15;
  undefined8 *unaff_x22;
  int iVar16;
  undefined8 unaff_x23;
  ulong uVar17;
  bool bVar18;
  undefined4 unaff_w24;
  uint unaff_w27;
  undefined4 unaff_w28;
  undefined4 unaff_w29;
  undefined1 auVar19 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  int iStack0000000000000120;
  int iStack0000000000000124;
  int iStack0000000000000128;
  undefined4 uStack000000000000012c;
  
  do {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)param_1[0x1e1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = _uStack0000000000000090;
    in_stack_00000068 = in_stack_000000a8;
    in_stack_00000060 = in_stack_000000a0;
    FUN_022f986c(lVar7,unaff_x23,unaff_w28,&stack0x00000050,unaff_w29,unaff_w24,0xffffffff,
                 unaff_w27 != 0);
    lVar9 = in_stack_000000e8;
    *(long *)(unaff_x19 + 0x10) = lVar7;
    uVar8 = FUN_022f8990(unaff_x20,0);
    uVar8 = FUN_010b973c(in_stack_00000048,uVar8,
                         *(undefined8 *)
                          System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320f6c(lVar7,uVar8,*(undefined8 *)StringLiteral_9754);
    lVar10 = in_stack_000000e8;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(lVar9 + 0x18) = lVar7;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033f6e48);
    lVar9 = in_stack_000000e8;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(lVar10 + 0x20) = lVar7;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033f6e48);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(lVar9 + 0x28) = lVar7;
    lVar7 = FUN_022f8990(unaff_x20,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar17 = 0;
      uVar13 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar3 = *(undefined4 *)(lVar7 + 0x20 + uVar17 * 4);
        _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar3);
        uVar13 = FUN_0129eff4();
        if ((uVar13 & 1) != 0) {
          if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x20),uStack00000000000000e4,
                       *(undefined8 *)StringLiteral_4747);
        }
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar3);
        uVar13 = FUN_0129eff4(in_stack_00000030,&stack0x00000090,(long)&stack0x000000e0 + 4,
                              *unaff_x22);
        if ((uVar13 & 1) != 0) {
          if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(in_stack_000000e8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x28),uStack00000000000000e4,
                       *(undefined8 *)StringLiteral_4747);
        }
        uVar13 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    uVar8 = FUN_022f8990(unaff_x20,0);
    FUN_01322050(in_stack_00000020,uVar8,*(undefined8 *)StringLiteral_2811);
    FUN_0129a054(in_stack_00000038,unaff_x20,in_stack_000000e8,*(undefined8 *)StringLiteral_5269);
    do {
      puVar15 = (undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__;
      if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(in_stack_000000e8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ca0af8(*(long *)(in_stack_000000e8 + 0x18),in_stack_00000028,
                   *(undefined8 *)OVRManager_XrApi_TypeInfo);
      if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x20),in_stack_00000040._4_4_,
                   *(undefined8 *)StringLiteral_4747);
      if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(in_stack_000000e8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x28),0xffffffff,*(undefined8 *)StringLiteral_4747)
      ;
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033ee588);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01320e50(lVar9,*(undefined8 *)PTR_DAT_033f6e48);
      if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar10 = FUN_0233dbd8(unaff_x20,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (0 < *(int *)(lVar10 + 0x18)) {
        iVar14 = 0;
        bVar18 = true;
        do {
          FUN_0132138c(lVar10,iVar14,&stack0x00000090,*puVar15);
          uVar17 = _uStack0000000000000090;
          uVar3 = uStack0000000000000090;
          FUN_0132138c(lVar10,iVar14,&stack0x00000090,*puVar15);
          uVar6 = uStack0000000000000094;
          FUN_0132138c(in_stack_00000048,uVar17 & 0xffffffff,&stack0x00000090,
                       *(undefined8 *)
                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
          FUN_00ca0af8(lVar7,_uStack0000000000000090,*(undefined8 *)OVRManager_XrApi_TypeInfo);
          _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar3);
          uVar17 = FUN_0129eff4();
          if ((uVar17 & 1) != 0) {
            FUN_00ac20f0(lVar9,uStack00000000000000e0,*(undefined8 *)StringLiteral_4747);
          }
          iVar1 = iStack0000000000000120;
          if (bVar18) {
            _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar3);
            FUN_01299bc0();
            iVar16 = iStack0000000000000124;
            if (iVar1 != iStack0000000000000128) goto LAB_0235257c;
            _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar6);
            FUN_01299bc0();
            if (iVar16 != iStack0000000000000128) goto LAB_0235257c;
LAB_023525cc:
            if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar11 = *(long *)(in_stack_000000e8 + 0x18);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0132138c(lVar11,*(int *)(lVar11 + 0x18) + -1,&stack0x00000090,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            FUN_00ca0af8(lVar7,_uStack0000000000000090,*(undefined8 *)OVRManager_XrApi_TypeInfo);
            FUN_00ac20f0(lVar9,in_stack_00000040._4_4_,*(undefined8 *)StringLiteral_4747);
            bVar18 = false;
          }
          else {
LAB_0235257c:
            iVar1 = iStack0000000000000120;
            _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar6);
            FUN_01299bc0();
            iVar16 = iStack0000000000000124;
            if (iVar1 == iStack0000000000000128) {
              _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar3);
              FUN_01299bc0();
              if (iVar16 == iStack0000000000000128) goto LAB_023525cc;
            }
          }
          iVar14 = iVar14 + 1;
          puVar15 = (undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__;
        } while (iVar14 < *(int *)(lVar10 + 0x18));
      }
      if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(long *)(in_stack_000000e8 + 0x18) = lVar7;
      *(long *)(in_stack_000000e8 + 0x20) = lVar9;
      uVar17 = FUN_012b894c(&stack0x00000100,*(undefined8 *)PTR_DAT_033f0610);
      if ((uVar17 & 1) == 0) {
        FUN_012b8948(&stack0x00000100,
                     *(undefined8 *)
                      Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                    );
        uVar8 = FUN_012998a8(in_stack_00000038,*(undefined8 *)StringLiteral_14358);
        lVar7 = FUN_010dfe04(uVar8,*(undefined8 *)StringLiteral_2051);
        uVar8 = FUN_01299a34(in_stack_00000038,*(undefined8 *)StringLiteral_12114);
        lVar9 = FUN_010dfe04(uVar8,*(undefined8 *)Method_System_Decimal_ToInt64__);
        if (lVar7 == 0) goto LAB_02352944;
        if (*(int *)(lVar7 + 0x18) < 1) goto LAB_023528a4;
        iVar14 = 0;
        goto LAB_023526d4;
      }
      auVar19 = FUN_00ca15cc(&stack0x00000100,
                             *(undefined8 *)
                              Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                            );
      _in_stack_000000f0 = auVar19;
      unaff_x20 = FUN_00ca13c0(&stack0x000000f0,
                               *(undefined8 *)
                                Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                              );
      uVar17 = FUN_0129eff4(in_stack_00000038,unaff_x20,&stack0x000000e8,
                            *(undefined8 *)StringLiteral_11630);
    } while ((uVar17 & 1) != 0);
    unaff_x19 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_022fb2d8(unaff_x19,0);
    in_stack_000000e8 = unaff_x19;
    unaff_x23 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_w28 = *(undefined4 *)(unaff_x20 + 0x48);
    in_stack_00000088 = *(undefined8 *)(unaff_x20 + 0x34);
    in_stack_00000080 = *(undefined8 *)(unaff_x20 + 0x2c);
    in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x24);
    in_stack_00000070 = *(long *)(unaff_x20 + 0x1c);
    in_stack_00000098 = 0;
    _uStack0000000000000090 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    _uStack00000000000000b0 = in_stack_00000070;
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000c8 = in_stack_00000088;
    FUN_022eff30(&stack0x00000090,&stack0x00000070,0);
    param_1 = &Method_UnityEngine_GameObject_AddComponent<InterpolatedTransform>__;
    unaff_w29 = *(undefined4 *)(unaff_x20 + 0x18);
    unaff_w24 = *(undefined4 *)(unaff_x20 + 0x54);
    unaff_w27 = (uint)*(byte *)(unaff_x20 + 0x4c);
  } while( true );
LAB_023526d4:
  FUN_0132138c(lVar7,iVar14,&stack0x000000b0,*(undefined8 *)StringLiteral_10196);
  lVar10 = _uStack00000000000000b0;
  if (lVar9 == 0) {
LAB_02352944:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0132138c(lVar9,iVar14,&stack0x000000b0,*(undefined8 *)StringLiteral_4463);
  lVar11 = _uStack00000000000000b0;
  if (_uStack00000000000000b0 == 0) goto LAB_02352944;
  iVar1 = *(int *)(in_stack_00000048 + 0x18);
  uVar17 = FUN_0237620c(*(undefined8 *)(_uStack00000000000000b0 + 0x18),&stack0x000000d8,0,0,0);
  uVar8 = in_stack_000000d8;
  if ((uVar17 & 1) != 0) {
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    if (lVar12 == 0) goto LAB_02352944;
    FUN_022f9708(lVar12,uVar8,0);
    *(long *)(lVar11 + 0x10) = lVar12;
    if (lVar10 == 0) goto LAB_02352944;
    *(undefined4 *)(lVar12 + 0x48) = *(undefined4 *)(lVar10 + 0x48);
    FUN_022fa0bc(lVar12,iVar1,0);
    FUN_022f9954(lVar10,*(undefined8 *)(lVar11 + 0x10),0);
    puVar5 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
    puVar4 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
    lVar10 = *(long *)(lVar11 + 0x18);
    if (lVar10 == 0) goto LAB_02352944;
    iVar16 = 0;
    while (iVar2 = *(int *)(lVar10 + 0x18), iVar16 < iVar2) {
      if (*(long *)(lVar11 + 0x20) == 0) goto LAB_02352944;
      FUN_0132138c(*(long *)(lVar11 + 0x20),iVar16,&stack0x000000b0,*(undefined8 *)puVar4);
      uStack000000000000012c = uStack00000000000000b0;
      _uStack00000000000000b0 = CONCAT44(uStack00000000000000b4,iVar1 + iVar16);
      FUN_0129a054();
      lVar10 = *(long *)(lVar11 + 0x18);
      iVar16 = iVar16 + 1;
      if (lVar10 == 0) goto LAB_02352944;
    }
    if (*(long *)(lVar11 + 0x28) == 0) goto LAB_02352944;
    if ((*(int *)(*(long *)(lVar11 + 0x28) + 0x18) == iVar2) && (0 < iVar2)) {
      iVar16 = 0;
      do {
        if (*(long *)(lVar11 + 0x28) == 0) goto LAB_02352944;
        FUN_0132138c(*(long *)(lVar11 + 0x28),iVar16,&stack0x000000b0,*(undefined8 *)puVar4);
        if (in_stack_00000030 == 0) goto LAB_02352944;
        uStack000000000000012c = uStack00000000000000b0;
        _uStack00000000000000b0 = CONCAT44(uStack00000000000000b4,iVar1 + iVar16);
        FUN_0129a054(in_stack_00000030,&stack0x000000b0,(long)&stack0x00000128 + 4,
                     *(undefined8 *)puVar5);
        lVar10 = *(long *)(lVar11 + 0x18);
        if (lVar10 == 0) goto LAB_02352944;
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(lVar10 + 0x18));
    }
    FUN_01322050(in_stack_00000048,lVar10,
                 *(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
  }
  iVar14 = iVar14 + 1;
  if (*(int *)(lVar7 + 0x18) <= iVar14) {
LAB_023528a4:
    uVar8 = FUN_010d96e0(in_stack_00000020,*(undefined8 *)PTR_DAT_033eb5c8);
    uVar8 = FUN_010dfe04(uVar8,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                        );
    FUN_02310a38(in_stack_00000018,in_stack_00000048,0,0);
    FUN_0230ff4c(in_stack_00000018);
    FUN_02310070(in_stack_00000018,in_stack_00000030,0);
    FUN_02350998(in_stack_00000018,uVar8);
    return in_stack_00000028;
  }
  goto LAB_023526d4;
}


