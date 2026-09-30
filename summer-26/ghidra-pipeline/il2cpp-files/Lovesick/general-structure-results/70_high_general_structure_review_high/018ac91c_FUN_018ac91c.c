/*
FUNCTION_NAME: FUN_018ac91c
ENTRY_POINT: 018ac91c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_018ac91c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_34;
  
                    /* try { // try from 018ac938 to 019ac95b has its CatchHandler @ 018ac970 */
  if ((DAT_037798b8 & 1) == 0) {
                    /* catch() { ... } // from try @ 018ac8dc with catch @ 018ac940 */
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<IBlastTarget,_GrabbableObject>__ctor__);
                    /* catch() { ... } // from try @ 018ac914 with catch @ 018ac94c */
    thunk_FUN_00d48444(Method_System_ValueTuple<Vector3,_MRUKAnchor,_Vector3>__ctor__);
    thunk_FUN_00d48444(Method_System_IO_FileStream_WriteByte__);
    thunk_FUN_00d48444(UnityEngine_BoxCollider_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugShapes_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
    thunk_FUN_00d48444(System_Predicate<ScriptableRenderPass>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3b78);
    thunk_FUN_00d48444(StringLiteral_13537);
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                      );
    DAT_037798b8 = 1;
  }
  puVar5 = Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__;
  puVar4 = Method_System_ValueTuple<Vector3,_MRUKAnchor,_Vector3>__ctor__;
  puVar3 = UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo;
  puVar2 = UnityEngine_BoxCollider_TypeInfo;
  puVar1 = System_Predicate<ScriptableRenderPass>_TypeInfo;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  iVar6 = *param_1;
  if (iVar6 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_018aca58:
    FUN_0127e70c(local_50,&local_34,*(undefined8 *)puVar5);
    if ((char)local_34 == '\0') {
      uVar13 = *(undefined8 *)(param_1 + 8);
      uVar12 = thunk_FUN_00d48444(Method_Oculus_Platform_Message<Purchase>_get_Data__);
      uVar12 = FUN_018056b4(uVar13,uVar12,0);
      uVar13 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_List<Tween_TweenCurve>_TrueForAll__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,uVar13);
    }
LAB_018acae0:
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = FUN_01804c14(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 10),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar14 = FUN_013bdbc8(lVar8,0,*(undefined8 *)puVar3);
    local_50 = auVar14;
    uVar9 = FUN_0127e6c0(local_50,*(undefined8 *)puVar1);
    if ((uVar9 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,local_50,param_1,*(undefined8 *)puVar4);
      return;
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        local_50 = ZEXT816(0);
        goto LAB_018acbd0;
      }
      FUN_01865608(*(undefined8 *)(param_1 + 8),
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                   ,0);
      plVar7 = *(long **)(param_1 + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar6 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (iVar6 == 0) {
        plVar7 = *(long **)(param_1 + 8);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar8 = (**(code **)(*plVar7 + 0x188))
                          (plVar7,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar7 + 400));
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_50 = FUN_013bdbc8(lVar8,0,*(undefined8 *)puVar3);
        uVar9 = FUN_0127e6c0(local_50,*(undefined8 *)puVar1);
        if ((uVar9 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_50,param_1,*(undefined8 *)puVar4);
          return;
        }
        goto LAB_018aca58;
      }
      goto LAB_018acae0;
    }
    local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  FUN_0127e70c(local_50,&local_34,*(undefined8 *)puVar5);
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar6 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
  if (iVar6 != 1) {
    uVar12 = *(undefined8 *)(param_1 + 8);
    lVar8 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01731954(0);
    plVar7 = *(long **)(param_1 + 8);
    if (plVar7 != (long *)0x0) {
      local_34 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      uVar10 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__
                                 );
      uVar10 = thunk_FUN_00d61fa0(uVar10,&local_34);
      uVar11 = thunk_FUN_00d48444(UnityEngine_UI_InputField_<CaretBlink>d__172_TypeInfo);
      uVar13 = FUN_018651d4(uVar11,uVar13,uVar10,0);
      uVar12 = FUN_018056b4(uVar12,uVar13,0);
      uVar13 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_List<Tween_TweenCurve>_TrueForAll__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,uVar13);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13537);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_018a5e3c(lVar8);
  puVar1 = PTR_DAT_033f3b78;
  *(long *)(param_1 + 0xe) = lVar8;
  uVar13 = *(undefined8 *)(param_1 + 0xc);
  uVar12 = thunk_FUN_00d6225c(*(undefined8 *)(param_1 + 8),*(undefined8 *)puVar1);
  FUN_018a1a50(lVar8,uVar12,uVar13);
  if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = FUN_018a238c(*(long *)(param_1 + 0xe),*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 10));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_60 = FUN_017e7d94(lVar8,0,0);
  uVar9 = FUN_016a1974(local_60,0);
  if ((uVar9 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01098fc0(param_1 + 2,local_60,param_1,
                 *(undefined8 *)
                  Method_UnityEngine_Events_UnityEvent<IBlastTarget,_GrabbableObject>__ctor__);
    return;
  }
LAB_018acbd0:
  FUN_016a1990(local_60,0);
  uVar12 = *(undefined8 *)(param_1 + 0xe);
  *param_1 = -2;
  param_1[0xe] = 0;
  puVar1 = Method_System_IO_FileStream_WriteByte__;
  param_1[0xf] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(param_1 + 2,uVar12,*(undefined8 *)puVar1);
  return;
}


