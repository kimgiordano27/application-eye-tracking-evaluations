/*
FUNCTION_NAME: FUN_037e1d4c
ENTRY_POINT: 037e1d4c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_037e1d4c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  __shared_count *p_Var6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_07d80450;
  param_1[1] = param_2 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar10 = param_1 + 2;
  *plVar10 = (long)(param_1 + 6);
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
  plVar12 = param_1 + 3;
  *plVar12 = *plVar10;
  puVar3 = Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Value__;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__;
  DAT_08489ac0 = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar3 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  DAT_08489ac8 = 0;
  local_80 = 0;
  local_90 = puVar2;
  puStack_88 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Key__;
  if (*(long *)puVar2 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489ac0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489ac0;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__;
  DAT_08489ad0 = Method_System_Collections_Generic_KeyValuePair<RtcPrivilege,_int>_get_Value__ +
                 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489ad8 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489ad0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489ad0;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__;
  DAT_08489af0 = &DAT_01e373a0;
  DAT_08489ae0 = Method_System_Collections_Generic_KeyValuePair<ShadowEdge,_int>_get_Value__ + 0x10;
  DAT_08489af8 = 0;
  DAT_08489ae8 = 0;
  local_90 = Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<int,_List<GraphReference>>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489ae0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489ae0;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__;
  DAT_08489b00 = Method_System_Collections_Generic_KeyValuePair<float,_MB3_AgglomerativeClustering_ClusterDistance>__ctor__
                 + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489b08 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__ != -1)
  {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b00);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489b00;
  puVar2 = 
  Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
  ;
  DAT_08489b10 = Method_System_Collections_Generic_KeyValuePair<float,_MB3_AgglomerativeClustering_ClusterDistance>_get_Key__
                 + 0x10;
  local_90 = 
  Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<ulong,_List<NetworkObject>>>_get_Key__
  ;
  puStack_88 = puVar3;
  DAT_08489b18 = 0;
  local_80 = 0;
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
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b10);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489b10;
  DAT_08489b20 = Method_System_Collections_Generic_KeyValuePair<float,_MB3_AgglomerativeClustering_ClusterDistance>_get_Value__
                 + 0x10;
  DAT_08489b28 = 0;
  if (((DAT_084890f0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_084890f0), iVar5 != 0)) {
    DAT_084890e8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_084890f0);
  }
  puVar2 = 
  Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<int,_DefaultSceneManagerHandler_SceneEntry>>_get_Key__
  ;
  DAT_08489b30 = DAT_084890e8;
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
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b20);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489b20;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__;
  DAT_08489b40 = Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>__ctor__
                 + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489b48 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Key__
               ,&local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b40);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489b40;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__;
  DAT_08489b50 = Method_System_Collections_Generic_KeyValuePair<string,_IEnumerable<string>>_get_Value__
                 + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489b58 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b50);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489b50;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__;
  DAT_08489b70 = 0x2c2e;
  DAT_08489b60 = Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Value__ +
                 0x10;
  DAT_08489b80 = 0;
  DAT_08489b88 = 0;
  DAT_08489b78 = 0;
  local_90 = Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__;
  puStack_88 = puVar3;
  DAT_08489b68 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__ != -1)
  {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__
               ,&local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b60);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489b60;
  puVar2 = 
  Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
  ;
  DAT_08489b90 = Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_Deconstruct__
                 + 0x10;
  DAT_08489bb0 = 0;
  DAT_08489bb8 = 0;
  DAT_08489ba8 = 0;
  local_90 = 
  Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
  ;
  puStack_88 = puVar3;
  DAT_08489b98 = 0;
  DAT_08489ba0 = DAT_0158b1d0;
  local_80 = 0;
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
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b90);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489b90;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
  DAT_08489bc0 = Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Key__
                 + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
  puStack_88 = puVar3;
  DAT_08489bc8 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489bc0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489bc0;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
  DAT_08489bd0 = Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value__
                 + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
  puStack_88 = puVar3;
  DAT_08489bd8 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489bd0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489bd0;
  puVar2 = 
  Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
  ;
  DAT_08489be0 = Method_System_Collections_Generic_KeyValuePair<string,_List<UnitPreservation_UnitPortPreservation>>_get_Key__
                 + 0x10;
  local_90 = 
  Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
  ;
  puStack_88 = puVar3;
  DAT_08489be8 = 0;
  local_80 = 0;
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
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489be0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489be0;
  puVar2 = 
  Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
  ;
  DAT_08489bf0 = Method_System_Collections_Generic_KeyValuePair<string,_List<UnitPreservation_UnitPortPreservation>>_get_Value__
                 + 0x10;
  local_90 = 
  Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
  ;
  puStack_88 = puVar3;
  DAT_08489bf8 = 0;
  local_80 = 0;
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
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489bf0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489bf0;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
  DAT_08489c00 = Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Key__
                 + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489c08 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__ != -1)
  {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__
               ,&local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c00);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c00;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
  DAT_08489c10 = Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Value__
                 + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489c18 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c10);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c10;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
  DAT_08489c20 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Key__ +
                 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489c28 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c20);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c20;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
  DAT_08489c30 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__
                 + 0x10;
  local_90 = 
  Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
  puStack_88 = puVar3;
  DAT_08489c38 = 0;
  local_80 = 0;
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
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c30);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c30;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
  DAT_08489c40 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Key__ +
                 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
  puStack_88 = puVar3;
  DAT_08489c48 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c40);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c40;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
  DAT_08489c50 = Method_System_Collections_Generic_KeyValuePair<string,_AndroidAssetPackStatus>_get_Value__
                 + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489c58 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c50);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c50;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
  DAT_08489c60 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Value__ + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489c68 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__ != -1)
  {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c60);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c60;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
  DAT_08489c70 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Value__ +
                 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489c78 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c70);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c70;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  DAT_08489c80 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Value__ + 0x10;
  DAT_08489c90 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Value__ + 0x70;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489c88 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c80);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489c80;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  DAT_08489ca0 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Value__
                 + 0x10;
  DAT_08489cb0 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Value__
                 + 0x70;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489ca8 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489ca0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489ca0;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Value__;
  DAT_08489cc0 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Value__
                 + 0x10;
  DAT_08489cc8 = 0;
  if (((DAT_084890f0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_084890f0), iVar5 != 0)) {
    DAT_084890e8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_084890f0);
  }
  puVar4 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
  DAT_08489cd0 = DAT_084890e8;
  DAT_08489cc0 = Method_System_Collections_Generic_KeyValuePair<string,_Index>_get_Value__ + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar4 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489cc0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489cc0;
  DAT_08489ce0 = puVar2 + 0x10;
  DAT_08489ce8 = 0;
  if (((DAT_084890f0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_084890f0), iVar5 != 0)) {
    DAT_084890e8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_084890f0);
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
  DAT_08489cf0 = DAT_084890e8;
  DAT_08489ce0 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__ + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489ce0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489ce0;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__;
  DAT_08489d00 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__ + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__;
  puStack_88 = puVar3;
  DAT_08489d08 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__
               ,&local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489d00);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489d00;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
  DAT_08489d10 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__ + 0x10;
  local_90 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
  puStack_88 = puVar3;
  DAT_08489d18 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__,
               &local_78,FUN_037f82f4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489d10);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_037f81a4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_08489d10;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


