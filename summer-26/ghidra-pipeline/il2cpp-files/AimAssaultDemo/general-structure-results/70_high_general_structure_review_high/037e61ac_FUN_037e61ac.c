/*
FUNCTION_NAME: FUN_037e61ac
ENTRY_POINT: 037e61ac
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


void FUN_037e61ac(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  __shared_count *p_Var5;
  __shared_count *p_Var6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_07d80450;
  param_1[1] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar11 = param_1 + 2;
  *plVar11 = (long)(param_1 + 6);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[4] = param_1 + 0x22;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  plVar13 = param_1 + 3;
  *plVar13 = (long)(param_1 + 0x22);
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  if (param_1 != param_2) {
    FUN_037f801c(plVar11,param_2[2],param_2[3]);
  }
  lVar7 = *plVar13;
  lVar8 = *plVar11;
  if (lVar7 != lVar8) {
    uVar9 = 0;
    uVar12 = 1;
    do {
      p_Var5 = *(__shared_count **)(lVar8 + uVar9 * 8);
      if (p_Var5 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(p_Var5);
        lVar7 = *plVar13;
        lVar8 = *plVar11;
      }
      bVar4 = uVar12 < (ulong)(lVar7 - lVar8 >> 3);
      uVar9 = uVar12;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (bVar4);
  }
  puVar3 = Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((param_4 >> 3 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__;
    puStack_88 = 
    Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__ != -1)
    {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__;
  if ((param_4 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__;
    puStack_88 = 
    Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__;
    puStack_88 = puVar3;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__ !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = 
    Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
    ;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
    ;
    puStack_88 = puVar3;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__
    ;
    puStack_88 = puVar3;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__ != -1
       ) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__;
    puStack_88 = puVar3;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__ != -1)
    {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = 
    Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
    ;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
    ;
    puStack_88 = puVar3;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((param_4 >> 4 & 1) != 0) {
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
    puStack_88 = 
    Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__ !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__ != -1)
    {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
    puStack_88 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__ !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__ != -1
       ) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((param_4 >> 1 & 1) != 0) {
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__;
    puStack_88 = 
    Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__ !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
    ;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
    ;
    puStack_88 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__ !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
    ;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
    ;
    puStack_88 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
    ;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
    ;
    puStack_88 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((param_4 >> 2 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    puStack_88 = 
    Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if ((param_4 >> 5 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__;
    puStack_88 = 
    Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__ != -1)
    {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__,
                 &local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__
                 ,&local_78,FUN_037f82f4);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_037441b0();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_037f81a4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


