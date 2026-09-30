/*
FUNCTION_NAME: System.Buffer$$Memmove
ENTRY_POINT: 0169ef0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 243
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_interaction_hits_5;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0169f16c) */
/* WARNING: Removing unreachable block (ram,0x0169f488) */
/* WARNING: Removing unreachable block (ram,0x0169f3ec) */

long System_Buffer__Memmove(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long in_stack_00000008;
  char cStack0000000000000014;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined *puVar9;
  
  puVar2 = StringLiteral_7363;
  puVar9 = StringLiteral_5238;
                    /* try { // try from 0169ef10 to 0179ef17 has its CatchHandler @ 0169eff0 */
                    /* try { // try from 0169ef18 to 0179ef4f has its CatchHandler @ 0169ebcc */
                    /* catch() { ... } // from try @ 0169eef8 with catch @ 0169ef2c */
                    /* catch() { ... } // from try @ 0169eeec with catch @ 0169ef30 */
                    /* catch() { ... } // from try @ 0169eedc with catch @ 0169ef34 */
  if ((DAT_0377858a & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10639);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_SimpleTuple<float,_Vector2>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<SpriteRenderer>__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_77__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Face>_AddRange__);
    thunk_FUN_00d48444(StringLiteral_5238);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Material>_TryGetValue__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_9649);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<SoccerBlockerTarget>__);
    thunk_FUN_00d48444(StringLiteral_7363);
    thunk_FUN_00d48444(StringLiteral_11255);
    DAT_0377858a = 1;
  }
  puVar3 = Method_UnityEngine_Component_GetComponent<SoccerBlockerTarget>__;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  cStack0000000000000014 = 0;
  in_stack_00000008 = 0;
  FUN_011e70d8(&stack0x00000020,param_1,param_2,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = Method_UnityEngine_GameObject_GetComponent<SpriteRenderer>__;
  lVar10 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  lVar13 = *(long *)(*(long *)puVar9 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d1810(lVar10,uVar11,*(undefined8 *)StringLiteral_9649,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar10;
  }
  FUN_01102bb0(lVar13 + 8,lVar10,
               *(undefined8 *)Method_System_Collections_Generic_List<Face>_AddRange__);
  lVar4 = *(long *)puVar9;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar9;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  cStack0000000000000014 = '\0';
  FUN_017d75a8(uVar11,&stack0x00000014,0);
  lVar4 = *(long *)puVar9;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar9;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000048 = in_stack_00000028;
  uVar5 = FUN_0129eff4(lVar4,&stack0x00000040,&stack0x00000018,*(undefined8 *)StringLiteral_10639);
  if (cStack0000000000000014 != '\0') {
    thunk_FUN_00d56f10(uVar11,0);
  }
  if ((uVar5 & 1) != 0) {
    return in_stack_00000018;
  }
  plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)
                                 Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,1);
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar11 = *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_01780344(uVar11,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar4 != 0) &&
     (lVar10 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
    uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,0);
  }
  if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar6[4] = lVar4;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar6 = (long *)FUN_0178c440(param_1,*(undefined8 *)StringLiteral_11255,0x138,0,plVar6,0,0);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_77__;
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_Material>_TryGetValue__ +
                     300);
    if ((*(byte *)(*plVar6 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_TryGetValue__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar6);
    }
    uVar11 = (**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
    uVar12 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar12 = FUN_01780344(uVar12,0);
    uVar5 = FUN_0178a8c4(uVar11,uVar12,0);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((param_2 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar7[4] = param_2;
      lVar4 = thunk_FUN_00dabe64(plVar6,0,plVar7,&stack0x00000008,0);
      if (lVar4 == 0) {
        lVar10 = 0;
      }
      else {
        uVar11 = *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_get_Current__
        ;
        lVar10 = thunk_FUN_00d6225c(lVar4,uVar11);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar4,uVar11);
        }
      }
      in_stack_00000018 = lVar10;
      if (in_stack_00000008 != 0) {
        uVar11 = FUN_0169f738(in_stack_00000008);
        FUN_00ac2be8();
                    /* WARNING: Subroutine does not return */
        FUN_0169f804(uVar11);
      }
      if (lVar10 != 0) {
        lVar4 = *(long *)puVar9;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar9;
        }
        uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
        cStack0000000000000014 = '\0';
        FUN_017d75a8(uVar11,&stack0x00000014,0);
        lVar4 = *(long *)puVar9;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar9;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 != 0) {
          in_stack_00000030 = in_stack_00000020;
          in_stack_00000038 = in_stack_00000028;
          FUN_01299e64(lVar4,&stack0x00000030,in_stack_00000018,
                       *(undefined8 *)
                        Method_UnityEngine_ProBuilder_SimpleTuple<float,_Vector2>__ctor__);
          if (cStack0000000000000014 == '\0') {
            return in_stack_00000018;
          }
          thunk_FUN_00d56f10(uVar11,0);
          return in_stack_00000018;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ac2be8(param_1);
      uVar11 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
      uVar12 = thunk_FUN_00d48444(
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_Update__
                                 );
      puVar9 = StringLiteral_6367;
      goto LAB_0169f620;
    }
  }
  FUN_00ac2be8(param_1);
  uVar11 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
  uVar12 = thunk_FUN_00d48444(
                             Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationRemoveScalePlayable>__
                             );
  puVar9 = StringLiteral_1638;
LAB_0169f620:
  uVar8 = thunk_FUN_00d48444(puVar9);
  uVar11 = FUN_01600424(uVar12,uVar11,uVar8,0);
  thunk_FUN_00d48444(PTR_DAT_033ebe68);
  uVar12 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f3fd0(uVar12,uVar11,0);
  uVar11 = thunk_FUN_00d48444(
                             Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar12,uVar11);
}


