/*
FUNCTION_NAME: DIVR.Gameplay.EnemyAI.MechBoss$$__rpc_handler_3934624053
ENTRY_POINT: 037e627c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void DIVR_Gameplay_EnemyAI_MechBoss____rpc_handler_3934624053(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  __shared_count *p_Var4;
  __shared_count *p_Var5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  ulong in_x10;
  ulong uVar8;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong uVar9;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar7 = 1;
  do {
    p_Var4 = *(__shared_count **)(in_x9 + in_x10 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__add_shared(p_Var4);
      param_1 = *unaff_x26;
      in_x9 = *unaff_x20;
    }
    puVar2 = Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    bVar3 = uVar7 < (ulong)(param_1 - in_x9 >> 3);
    in_x10 = uVar7;
    uVar7 = (ulong)((int)uVar7 + 1);
  } while (bVar3);
  if ((unaff_w22 >> 3 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__;
    in_stack_00000018 =
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__ != -1)
    {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__;
  if ((unaff_w22 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__;
    in_stack_00000018 =
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar1 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__;
    in_stack_00000018 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__ !=
        -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar1 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
    ;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
    ;
    in_stack_00000018 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar1 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__;
    in_stack_00000018 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__ != -1
       ) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar1 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__;
    in_stack_00000018 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__ != -1)
    {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar1 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
    ;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
    ;
    in_stack_00000018 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar1 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((unaff_w22 >> 4 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
    in_stack_00000018 =
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__ !=
        -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__ != -1)
    {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = 
    Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
    in_stack_00000018 = puVar1;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__ !=
        -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__ != -1
       ) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((unaff_w22 >> 1 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__;
    in_stack_00000018 =
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__ !=
        -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = 
    Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
    ;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
    ;
    in_stack_00000018 = puVar1;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__ !=
        -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = 
    Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
    ;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
    ;
    in_stack_00000018 = puVar1;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = 
    Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
    ;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
    ;
    in_stack_00000018 = puVar1;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((unaff_w22 >> 2 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    in_stack_00000018 =
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((unaff_w22 >> 5 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__
    ;
    in_stack_00000018 =
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__ != -1)
    {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar7 = (ulong)*(int *)(puVar2 + 8);
    uVar9 = uVar7 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar9) ||
       (p_Var4 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar9 * 8),
       p_Var4 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var4);
    lVar6 = *unaff_x20;
    uVar8 = *unaff_x26 - lVar6 >> 3;
    if (uVar8 <= uVar9) {
      if (uVar8 < uVar7) {
        FUN_037f81a4();
        lVar6 = *unaff_x20;
      }
      else if (uVar7 < uVar8) {
        *unaff_x26 = lVar6 + uVar7 * 8;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar9 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *unaff_x20;
    }
    *(__shared_count **)(lVar6 + uVar9 * 8) = p_Var4;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


