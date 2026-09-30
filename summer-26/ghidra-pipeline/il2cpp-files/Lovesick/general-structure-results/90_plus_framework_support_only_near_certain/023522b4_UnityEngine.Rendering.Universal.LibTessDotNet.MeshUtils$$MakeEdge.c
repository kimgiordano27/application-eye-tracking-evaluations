/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils$$MakeEdge
ENTRY_POINT: 023522b4
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


undefined8 UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils__MakeEdge(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar17;
  undefined8 *unaff_x22;
  int iVar18;
  ulong unaff_x23;
  bool bVar19;
  long unaff_x24;
  undefined4 unaff_w25;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar20 [16];
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
    _uStack0000000000000090 = CONCAT44(uStack0000000000000094,unaff_w25);
    uVar9 = FUN_0129eff4();
    if ((uVar9 & 1) != 0) {
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
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    _uStack0000000000000090 = CONCAT44(uStack0000000000000094,unaff_w25);
    uVar9 = FUN_0129eff4(unaff_x29,&stack0x00000090,(long)&stack0x000000e0 + 4,*unaff_x22);
    if ((uVar9 & 1) != 0) {
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
    uVar9 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x23) {
      do {
        uVar10 = FUN_022f8990(unaff_x27,0);
        FUN_01322050(in_stack_00000020,uVar10,*(undefined8 *)StringLiteral_2811);
        FUN_0129a054(unaff_x20,unaff_x27,in_stack_000000e8,*(undefined8 *)StringLiteral_5269);
        do {
          puVar17 = (undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__;
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
          FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x28),0xffffffff,
                       *(undefined8 *)StringLiteral_4747);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                       Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033ee588);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                       UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01320e50(lVar12,*(undefined8 *)PTR_DAT_033f6e48);
          if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar13 = FUN_0233dbd8(unaff_x27,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (0 < *(int *)(lVar13 + 0x18)) {
            iVar16 = 0;
            bVar19 = true;
            do {
              FUN_0132138c(lVar13,iVar16,&stack0x00000090,*puVar17);
              uVar9 = _uStack0000000000000090;
              uVar1 = uStack0000000000000090;
              FUN_0132138c(lVar13,iVar16,&stack0x00000090,*puVar17);
              uVar2 = uStack0000000000000094;
              FUN_0132138c(in_stack_00000048,uVar9 & 0xffffffff,&stack0x00000090,
                           *(undefined8 *)
                            Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                          );
              FUN_00ca0af8(lVar11,_uStack0000000000000090,*(undefined8 *)OVRManager_XrApi_TypeInfo);
              _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar1);
              uVar9 = FUN_0129eff4();
              if ((uVar9 & 1) != 0) {
                FUN_00ac20f0(lVar12,uStack00000000000000e0,*(undefined8 *)StringLiteral_4747);
              }
              iVar4 = iStack0000000000000120;
              if (bVar19) {
                _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar1);
                FUN_01299bc0();
                iVar18 = iStack0000000000000124;
                if (iVar4 != iStack0000000000000128) goto LAB_0235257c;
                _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar2);
                FUN_01299bc0();
                if (iVar18 != iStack0000000000000128) goto LAB_0235257c;
LAB_023525cc:
                if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar14 = *(long *)(in_stack_000000e8 + 0x18);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0132138c(lVar14,*(int *)(lVar14 + 0x18) + -1,&stack0x00000090,
                             *(undefined8 *)
                              Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                            );
                FUN_00ca0af8(lVar11,_uStack0000000000000090,*(undefined8 *)OVRManager_XrApi_TypeInfo
                            );
                FUN_00ac20f0(lVar12,in_stack_00000040._4_4_,*(undefined8 *)StringLiteral_4747);
                bVar19 = false;
              }
              else {
LAB_0235257c:
                iVar4 = iStack0000000000000120;
                _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar2);
                FUN_01299bc0();
                iVar18 = iStack0000000000000124;
                if (iVar4 == iStack0000000000000128) {
                  _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar1);
                  FUN_01299bc0();
                  if (iVar18 == iStack0000000000000128) goto LAB_023525cc;
                }
              }
              iVar16 = iVar16 + 1;
              puVar17 = (undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__;
            } while (iVar16 < *(int *)(lVar13 + 0x18));
          }
          if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(long *)(in_stack_000000e8 + 0x18) = lVar11;
          *(long *)(in_stack_000000e8 + 0x20) = lVar12;
          uVar9 = FUN_012b894c(&stack0x00000100,*(undefined8 *)PTR_DAT_033f0610);
          if ((uVar9 & 1) == 0) {
            FUN_012b8948(&stack0x00000100,
                         *(undefined8 *)
                          Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                        );
            uVar10 = FUN_012998a8(in_stack_00000038,*(undefined8 *)StringLiteral_14358);
            lVar11 = FUN_010dfe04(uVar10,*(undefined8 *)StringLiteral_2051);
            uVar10 = FUN_01299a34(in_stack_00000038,*(undefined8 *)StringLiteral_12114);
            lVar12 = FUN_010dfe04(uVar10,*(undefined8 *)Method_System_Decimal_ToInt64__);
            if (lVar11 == 0) goto LAB_02352944;
            if (*(int *)(lVar11 + 0x18) < 1) goto LAB_023528a4;
            iVar16 = 0;
            goto LAB_023526d4;
          }
          auVar20 = FUN_00ca15cc(&stack0x00000100,
                                 *(undefined8 *)
                                  Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                                );
          _in_stack_000000f0 = auVar20;
          unaff_x27 = FUN_00ca13c0(&stack0x000000f0,
                                   *(undefined8 *)
                                    Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                                  );
          uVar9 = FUN_0129eff4(in_stack_00000038,unaff_x27,&stack0x000000e8,
                               *(undefined8 *)StringLiteral_11630);
        } while ((uVar9 & 1) != 0);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_022fb2d8(lVar11,0);
        in_stack_000000e8 = lVar11;
        uVar10 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,0)
        ;
        if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = *(undefined4 *)(unaff_x27 + 0x48);
        in_stack_00000088 = *(undefined8 *)(unaff_x27 + 0x34);
        in_stack_00000080 = *(undefined8 *)(unaff_x27 + 0x2c);
        in_stack_00000078 = *(undefined8 *)(unaff_x27 + 0x24);
        in_stack_00000070 = *(long *)(unaff_x27 + 0x1c);
        in_stack_00000098 = 0;
        _uStack0000000000000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        _uStack00000000000000b0 = in_stack_00000070;
        in_stack_000000b8 = in_stack_00000078;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_000000c8 = in_stack_00000088;
        FUN_022eff30(&stack0x00000090,&stack0x00000070,0);
        uVar2 = *(undefined4 *)(unaff_x27 + 0x18);
        uVar3 = *(undefined4 *)(unaff_x27 + 0x54);
        cVar6 = *(char *)(unaff_x27 + 0x4c);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000058 = in_stack_00000098;
        in_stack_00000050 = _uStack0000000000000090;
        in_stack_00000068 = in_stack_000000a8;
        in_stack_00000060 = in_stack_000000a0;
        FUN_022f986c(lVar12,uVar10,uVar1,&stack0x00000050,uVar2,uVar3,0xffffffff,cVar6 != '\0');
        lVar13 = in_stack_000000e8;
        *(long *)(lVar11 + 0x10) = lVar12;
        uVar10 = FUN_022f8990(unaff_x27,0);
        uVar10 = FUN_010b973c(in_stack_00000048,uVar10,
                              *(undefined8 *)
                               System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320f6c(lVar11,uVar10,*(undefined8 *)StringLiteral_9754);
        lVar12 = in_stack_000000e8;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(lVar13 + 0x18) = lVar11;
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033f6e48);
        lVar13 = in_stack_000000e8;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(lVar12 + 0x20) = lVar11;
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033f6e48);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(lVar13 + 0x28) = lVar11;
        unaff_x19 = FUN_022f8990(unaff_x27,0);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        unaff_x20 = in_stack_00000038;
      } while ((int)*(ulong *)(unaff_x19 + 0x18) < 1);
      unaff_x23 = 0;
      uVar9 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      unaff_x24 = unaff_x19 + 0x20;
      unaff_x29 = in_stack_00000030;
    }
    if (uVar9 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_w25 = *(undefined4 *)(unaff_x24 + unaff_x23 * 4);
  } while( true );
LAB_023526d4:
  FUN_0132138c(lVar11,iVar16,&stack0x000000b0,*(undefined8 *)StringLiteral_10196);
  lVar13 = _uStack00000000000000b0;
  if (lVar12 == 0) {
LAB_02352944:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0132138c(lVar12,iVar16,&stack0x000000b0,*(undefined8 *)StringLiteral_4463);
  lVar14 = _uStack00000000000000b0;
  if (_uStack00000000000000b0 == 0) goto LAB_02352944;
  iVar4 = *(int *)(in_stack_00000048 + 0x18);
  uVar9 = FUN_0237620c(*(undefined8 *)(_uStack00000000000000b0 + 0x18),&stack0x000000d8,0,0,0);
  uVar10 = in_stack_000000d8;
  if ((uVar9 & 1) != 0) {
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    if (lVar15 == 0) goto LAB_02352944;
    FUN_022f9708(lVar15,uVar10,0);
    *(long *)(lVar14 + 0x10) = lVar15;
    if (lVar13 == 0) goto LAB_02352944;
    *(undefined4 *)(lVar15 + 0x48) = *(undefined4 *)(lVar13 + 0x48);
    FUN_022fa0bc(lVar15,iVar4,0);
    FUN_022f9954(lVar13,*(undefined8 *)(lVar14 + 0x10),0);
    puVar8 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
    puVar7 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
    lVar13 = *(long *)(lVar14 + 0x18);
    if (lVar13 == 0) goto LAB_02352944;
    iVar18 = 0;
    while (iVar5 = *(int *)(lVar13 + 0x18), iVar18 < iVar5) {
      if (*(long *)(lVar14 + 0x20) == 0) goto LAB_02352944;
      FUN_0132138c(*(long *)(lVar14 + 0x20),iVar18,&stack0x000000b0,*(undefined8 *)puVar7);
      uStack000000000000012c = uStack00000000000000b0;
      _uStack00000000000000b0 = CONCAT44(uStack00000000000000b4,iVar4 + iVar18);
      FUN_0129a054();
      lVar13 = *(long *)(lVar14 + 0x18);
      iVar18 = iVar18 + 1;
      if (lVar13 == 0) goto LAB_02352944;
    }
    if (*(long *)(lVar14 + 0x28) == 0) goto LAB_02352944;
    if ((*(int *)(*(long *)(lVar14 + 0x28) + 0x18) == iVar5) && (0 < iVar5)) {
      iVar18 = 0;
      do {
        if (*(long *)(lVar14 + 0x28) == 0) goto LAB_02352944;
        FUN_0132138c(*(long *)(lVar14 + 0x28),iVar18,&stack0x000000b0,*(undefined8 *)puVar7);
        if (in_stack_00000030 == 0) goto LAB_02352944;
        uStack000000000000012c = uStack00000000000000b0;
        _uStack00000000000000b0 = CONCAT44(uStack00000000000000b4,iVar4 + iVar18);
        FUN_0129a054(in_stack_00000030,&stack0x000000b0,(long)&stack0x00000128 + 4,
                     *(undefined8 *)puVar8);
        lVar13 = *(long *)(lVar14 + 0x18);
        if (lVar13 == 0) goto LAB_02352944;
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(lVar13 + 0x18));
    }
    FUN_01322050(in_stack_00000048,lVar13,
                 *(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
  }
  iVar16 = iVar16 + 1;
  if (*(int *)(lVar11 + 0x18) <= iVar16) {
LAB_023528a4:
    uVar10 = FUN_010d96e0(in_stack_00000020,*(undefined8 *)PTR_DAT_033eb5c8);
    uVar10 = FUN_010dfe04(uVar10,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                         );
    FUN_02310a38(in_stack_00000018,in_stack_00000048,0,0);
    FUN_0230ff4c(in_stack_00000018);
    FUN_02310070(in_stack_00000018,in_stack_00000030,0);
    FUN_02350998(in_stack_00000018,uVar10);
    return in_stack_00000028;
  }
  goto LAB_023526d4;
}


