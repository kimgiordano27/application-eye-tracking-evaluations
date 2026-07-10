/*
FUNCTION_NAME: DIVR.Gameplay.EnemyAI.MechBoss$$__rpc_handler_4097208071
ENTRY_POINT: 037e6574
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


void DIVR_Gameplay_EnemyAI_MechBoss____rpc_handler_4097208071(long param_1)

{
  undefined *puVar1;
  __shared_count *p_Var2;
  __shared_count *p_Var3;
  long lVar4;
  ulong uVar5;
  ulong in_x10;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  ulong uVar7;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  if (in_x10 <= unaff_x24) {
    uVar5 = unaff_x24 + 1;
    if (in_x10 < uVar5) {
      FUN_037f81a4();
      param_1 = *unaff_x20;
    }
    else if (uVar5 < in_x10) {
      *unaff_x26 = param_1 + uVar5 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(param_1 + unaff_x24 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    param_1 = *unaff_x20;
  }
  *(undefined8 *)(param_1 + unaff_x24 * 8) = unaff_x23;
  puVar1 = 
  Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
  ;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
  ;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_037441b0();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_037f81a4();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__
      != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__
               ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_037441b0();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_037f81a4();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__;
  in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_037441b0();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_037f81a4();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = 
  Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
  ;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
  ;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_037441b0();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_037f81a4();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
  if ((unaff_w22 >> 4 & 1) != 0) {
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
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
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
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
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
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
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__ != -1
       ) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__;
  if ((unaff_w22 >> 1 & 1) != 0) {
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__;
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
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
    ;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
    ;
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
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__ !=
        -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
    ;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
    ;
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
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
    ;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
    ;
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
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  if ((unaff_w22 >> 2 & 1) != 0) {
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    in_stack_00000010 =
         Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__;
  if ((unaff_w22 >> 5 & 1) != 0) {
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__
    ;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__ != -1)
    {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__,
                 (void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
    in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__
                 ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_037f81a4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


