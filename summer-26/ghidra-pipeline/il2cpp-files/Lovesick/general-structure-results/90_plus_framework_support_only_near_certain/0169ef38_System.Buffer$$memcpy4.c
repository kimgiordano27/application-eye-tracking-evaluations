/*
FUNCTION_NAME: System.Buffer$$memcpy4
ENTRY_POINT: 0169ef38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 243
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_interaction_hits_5;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0169f16c) */
/* WARNING: Removing unreachable block (ram,0x0169f488) */
/* WARNING: Removing unreachable block (ram,0x0169f3ec) */

long System_Buffer__memcpy4(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long lVar11;
  long in_stack_00000008;
  char cStack0000000000000014;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined *puVar7;
  
  thunk_FUN_00d48444(StringLiteral_10639);
  thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_SimpleTuple<float,_Vector2>__ctor__);
                    /* try { // try from 0169ef50 to 0179ef53 has its CatchHandler @ 0169efe4 */
                    /* try { // try from 0169ef54 to 0179efaf has its CatchHandler @ 0169ebcc */
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
                    /* try { // try from 0169efb0 to 0179efc3 has its CatchHandler @ 0169f060 */
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(StringLiteral_9649);
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<SoccerBlockerTarget>__);
  thunk_FUN_00d48444(StringLiteral_7363);
  thunk_FUN_00d48444(StringLiteral_11255);
  *(undefined1 *)(unaff_x22 + 0x58a) = 1;
  puVar7 = Method_UnityEngine_Component_GetComponent<SoccerBlockerTarget>__;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  cStack0000000000000014 = 0;
  in_stack_00000008 = 0;
  FUN_011e70d8(&stack0x00000020);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar3 = *(long *)puVar7;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar7;
  }
  puVar2 = Method_UnityEngine_GameObject_GetComponent<SpriteRenderer>__;
  lVar8 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  lVar11 = *(long *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar7;
    }
    uVar9 = **(undefined8 **)(lVar3 + 0xb8);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d1810(lVar8,uVar9,*(undefined8 *)StringLiteral_9649,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = lVar8;
  }
  FUN_01102bb0(lVar11 + 8,lVar8,
               *(undefined8 *)Method_System_Collections_Generic_List<Face>_AddRange__);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *unaff_x24;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  cStack0000000000000014 = '\0';
  FUN_017d75a8(uVar9,&stack0x00000014,0);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *unaff_x24;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000048 = in_stack_00000028;
  uVar4 = FUN_0129eff4(lVar3,&stack0x00000040,&stack0x00000018,*(undefined8 *)StringLiteral_10639);
  if (cStack0000000000000014 != '\0') {
    thunk_FUN_00d56f10(uVar9,0);
  }
  if ((uVar4 & 1) != 0) {
    return in_stack_00000018;
  }
  plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)
                                 Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,1);
  puVar7 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar9 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar3 = FUN_01780344(uVar9,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar3 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
    uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar9,0);
  }
  if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar5[4] = lVar3;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar5 = (long *)FUN_0178c440();
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_77__;
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_Material>_TryGetValue__ +
                     300);
    if ((*(byte *)(*plVar5 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_TryGetValue__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar5);
    }
    uVar9 = (**(code **)(*plVar5 + 0x3f8))(plVar5,*(undefined8 *)(*plVar5 + 0x400));
    uVar10 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar7);
    }
    uVar10 = FUN_01780344(uVar10,0);
    uVar4 = FUN_0178a8c4(uVar9,uVar10,0);
    if ((uVar4 & 1) == 0) {
      lVar3 = FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((unaff_x20 != 0) && (lVar8 = thunk_FUN_00d6225c(), lVar8 == 0)) {
        uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar9,0);
      }
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(long *)(lVar3 + 0x20) = unaff_x20;
      lVar3 = thunk_FUN_00dabe64(plVar5,0,lVar3,&stack0x00000008,0);
      if (lVar3 == 0) {
        lVar8 = 0;
      }
      else {
        uVar9 = *(undefined8 *)
                 Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_get_Current__
        ;
        lVar8 = thunk_FUN_00d6225c(lVar3,uVar9);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar3,uVar9);
        }
      }
      in_stack_00000018 = lVar8;
      if (in_stack_00000008 != 0) {
        uVar9 = FUN_0169f738(in_stack_00000008);
        FUN_00ac2be8();
                    /* WARNING: Subroutine does not return */
        FUN_0169f804(uVar9);
      }
      if (lVar8 != 0) {
        lVar3 = *unaff_x24;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *unaff_x24;
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
        cStack0000000000000014 = '\0';
        FUN_017d75a8(uVar9,&stack0x00000014,0);
        lVar3 = *unaff_x24;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *unaff_x24;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar3 != 0) {
          in_stack_00000030 = in_stack_00000020;
          in_stack_00000038 = in_stack_00000028;
          FUN_01299e64(lVar3,&stack0x00000030,in_stack_00000018,
                       *(undefined8 *)
                        Method_UnityEngine_ProBuilder_SimpleTuple<float,_Vector2>__ctor__);
          if (cStack0000000000000014 == '\0') {
            return in_stack_00000018;
          }
          thunk_FUN_00d56f10(uVar9,0);
          return in_stack_00000018;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ac2be8();
      uVar9 = (**(code **)(*unaff_x19 + 0x308))();
      uVar10 = thunk_FUN_00d48444(
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_Update__
                                 );
      puVar7 = StringLiteral_6367;
      goto LAB_0169f620;
    }
  }
  FUN_00ac2be8();
  uVar9 = (**(code **)(*unaff_x19 + 0x308))();
  uVar10 = thunk_FUN_00d48444(
                             Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationRemoveScalePlayable>__
                             );
  puVar7 = StringLiteral_1638;
LAB_0169f620:
  uVar6 = thunk_FUN_00d48444(puVar7);
  uVar9 = FUN_01600424(uVar10,uVar9,uVar6,0);
  thunk_FUN_00d48444(PTR_DAT_033ebe68);
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f3fd0(uVar10,uVar9,0);
  uVar9 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar9);
}


