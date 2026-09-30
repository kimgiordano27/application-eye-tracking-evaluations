/*
FUNCTION_NAME: System.Collections.Generic.List<__Il2CppFullySharedGenericType>$$System.Collections.IList.Contains
ENTRY_POINT: 02284414
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 167
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_19;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
System_Collections_Generic_List<__Il2CppFullySharedGenericType>__System_Collections_IList_Contains
          (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  void *__s;
  long lVar5;
  Il2CppClass *pIVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  long *plVar11;
  short *psVar12;
  ulong uVar13;
  Il2CppRGCTXData *pIVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  MethodInfo *pMVar17;
  undefined8 uVar18;
  long in_x9;
  long unaff_x19;
  long unaff_x29;
  
  *(long *)(unaff_x29 + -0xa8) = param_1 - in_x9;
  *(ulong *)(unaff_x29 + -0xb0) =
       (param_1 - in_x9) - ((ulong)*(uint *)(unaff_x29 + -0x24) + 0xf & 0x1fffffff0);
  __s = *(void **)(unaff_x29 + -0xb0);
  uVar1 = *(uint *)(unaff_x29 + -0x24);
  *(undefined4 *)(unaff_x19 + 0x1a0) = 0;
  memset(__s,0,(ulong)uVar1);
  *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(unaff_x19 + 0x1a0);
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  il2cpp_codegen_initobj(*(void **)(unaff_x29 + -0xb0),(ulong)*(uint *)(unaff_x29 + -0x24));
  il2cpp_codegen_memcpy
            (*(void **)(unaff_x29 + -0x30),*(void **)(unaff_x29 + -0xb0),
             (ulong)*(uint *)(unaff_x29 + -0x24));
  lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
  pIVar6 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar5 + 0xc0),*(int *)(unaff_x19 + 0x1a4));
  bVar3 = il2cpp_codegen_would_box_to_non_null(pIVar6,*(void **)(unaff_x29 + -0x30));
  *(byte *)(unaff_x29 + -0xc4) = bVar3 & 1;
  if ((*(byte *)(unaff_x29 + -0xc4) & 1) == 0) {
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x29 + -0x98);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
    if ((uVar13 & 1) == 0) {
      *(long *)(unaff_x19 + 0x40) = unaff_x29 + -0x18;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x29 + -0x18);
    }
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x19 + 0x48),*(void **)(unaff_x19 + 0x40),
               (ulong)*(uint *)(unaff_x29 + -0x24));
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    bVar3 = il2cpp_codegen_would_box_to_non_null(pIVar6,*(void **)(unaff_x29 + -0x98));
    *(byte *)(unaff_x19 + 0x1bc) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x1bc) & 1) == 0) {
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar14 = *(Il2CppRGCTXData **)(lVar5 + 0xc0);
      *(undefined4 *)(unaff_x19 + 0x3c) = 2;
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data(pIVar14,2);
      il2cpp_codegen_runtime_class_init_inline(pIVar6);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar5 + 0xc0),*(int *)(unaff_x19 + 0x3c));
      puVar15 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar6);
      *(undefined8 *)(unaff_x19 + 0x1b0) = *puVar15;
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x19 + 0x1b0);
      goto FUN_0228575c;
    }
    goto LAB_02285650;
  }
  lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
  uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar16;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar16 = *(undefined8 *)(unaff_x29 + -0xe0);
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar16);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x198);
  *(undefined8 *)(unaff_x29 + -0xd8) = uVar16;
  *(undefined8 *)(unaff_x29 + -0xe8) =
       *(undefined8 *)
        Method_Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_get_Count__
  ;
  *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0xe8);
  uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                     (*(undefined8 *)(unaff_x29 + -0xf8),uVar18);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x198);
  *(undefined8 *)(unaff_x29 + -0xf0) = uVar16;
  bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                    (*(undefined8 *)(unaff_x29 + -0xd8),*(undefined8 *)(unaff_x29 + -0xf0),uVar18);
  *(byte *)(unaff_x29 + -0xfc) = bVar3 & 1;
  if ((*(byte *)(unaff_x29 + -0xfc) & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x29 + -0x38);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
    if ((uVar13 & 1) == 0) {
      *(long *)(unaff_x19 + 0x188) = unaff_x29 + -0x18;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x188) = *(undefined8 *)(unaff_x29 + -0x18);
    }
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x19 + 400),*(void **)(unaff_x19 + 0x188),
               (ulong)*(uint *)(unaff_x29 + -0x24));
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x38));
    *(undefined8 *)(unaff_x19 + 0x4d8) = uVar16;
    pbVar7 = (byte *)UnBox(*(Il2CppObject **)(unaff_x19 + 0x4d8),
                           *(Il2CppClass **)
                            Method_System_Collections_Generic_Dictionary<Material,_int>_Clear__);
    puVar2 = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
    if ((*pbVar7 & 1) == 0) {
      *(undefined **)(unaff_x19 + 0x180) = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)**(undefined8 **)(unaff_x19 + 0x180));
      *(undefined8 *)(unaff_x19 + 0x4d0) = *(undefined8 *)(lVar5 + 8);
      *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x19 + 0x4d0);
    }
    else {
      *(undefined **)(unaff_x19 + 0x178) = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      puVar15 = (undefined8 *)
                il2cpp_codegen_static_fields_for
                          ((Il2CppClass *)**(undefined8 **)(unaff_x19 + 0x178));
      *(undefined8 *)(unaff_x19 + 0x4c8) = *puVar15;
      *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x19 + 0x4c8);
    }
    *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x29 + -0xc0);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pMVar17 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar5 + 0xc0),10);
    uVar16 = JitHelpers_UnsafeCast_TisTask_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_m749A7A8ADDAAFA2DB3F38195B3492A4113D457D0
                       (*(Il2CppObject **)(unaff_x19 + 0x170),pMVar17);
    *(undefined8 *)(unaff_x19 + 0x4c0) = uVar16;
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x19 + 0x4c0);
    goto FUN_0228575c;
  }
  lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
  uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
  *(undefined8 *)(unaff_x19 + 0x4b8) = uVar16;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
  *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x4b8);
  *(undefined8 *)(unaff_x19 + 0x168) = 0;
  uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                     (*(undefined8 *)(unaff_x19 + 0x4a8));
  *(undefined8 *)(unaff_x19 + 0x4b0) = uVar16;
  *(undefined8 *)(unaff_x19 + 0x4a0) =
       *(undefined8 *)Method_UnityEngine_UIElements_MouseEventBase<ContextClickEvent>_GetPooled__;
  *(undefined8 *)(unaff_x19 + 0x490) = *(undefined8 *)(unaff_x19 + 0x4a0);
  uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                     (*(undefined8 *)(unaff_x19 + 0x490),*(undefined8 *)(unaff_x19 + 0x168));
  *(undefined8 *)(unaff_x19 + 0x498) = uVar16;
  bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                    (*(undefined8 *)(unaff_x19 + 0x4b0),*(undefined8 *)(unaff_x19 + 0x498),
                     *(undefined8 *)(unaff_x19 + 0x168));
  *(byte *)(unaff_x19 + 0x48c) = bVar3 & 1;
  if ((*(byte *)(unaff_x19 + 0x48c) & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x29 + -0x40);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
    if ((uVar13 & 1) == 0) {
      *(long *)(unaff_x19 + 0x158) = unaff_x29 + -0x18;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x29 + -0x18);
    }
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x19 + 0x160),*(void **)(unaff_x19 + 0x158),
               (ulong)*(uint *)(unaff_x29 + -0x24));
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x40));
    *(undefined8 *)(unaff_x19 + 0x480) = uVar16;
    puVar8 = (undefined4 *)
             UnBox(*(Il2CppObject **)(unaff_x19 + 0x480),
                   *(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                  );
    *(undefined4 *)(unaff_x29 + -0xb4) = *puVar8;
    *(undefined4 *)(unaff_x19 + 0x47c) = *(undefined4 *)(unaff_x29 + -0xb4);
    if ((*(int *)(unaff_x19 + 0x47c) < 9) &&
       (*(undefined4 *)(unaff_x19 + 0x478) = *(undefined4 *)(unaff_x29 + -0xb4),
       puVar2 = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__, -2 < *(int *)(unaff_x19 + 0x478)))
    {
      *(undefined **)(unaff_x19 + 0x148) = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)**(undefined8 **)(unaff_x19 + 0x148));
      *(undefined8 *)(unaff_x19 + 0x470) = *(undefined8 *)(lVar5 + 0x10);
      *(undefined4 *)(unaff_x19 + 0x46c) = *(undefined4 *)(unaff_x29 + -0xb4);
      NullCheck(*(void **)(unaff_x19 + 0x470));
      uVar4 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x19 + 0x46c),-1);
      *(undefined4 *)(unaff_x19 + 0x468) = uVar4;
      uVar16 = Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8::GetAt
                         (*(Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8 **)
                           (unaff_x19 + 0x470),(long)*(int *)(unaff_x19 + 0x468));
      *(undefined8 *)(unaff_x19 + 0x460) = uVar16;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x460);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pMVar17 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar5 + 0xc0),10);
      uVar16 = JitHelpers_UnsafeCast_TisTask_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_m749A7A8ADDAAFA2DB3F38195B3492A4113D457D0
                         (*(Il2CppObject **)(unaff_x19 + 0x150),pMVar17);
      *(undefined8 *)(unaff_x19 + 0x458) = uVar16;
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x19 + 0x458);
      goto FUN_0228575c;
    }
    goto LAB_02285650;
  }
  lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
  uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
  *(undefined8 *)(unaff_x19 + 0x450) = uVar16;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
  *(undefined8 *)(unaff_x19 + 0x440) = *(undefined8 *)(unaff_x19 + 0x450);
  *(undefined8 *)(unaff_x19 + 0x140) = 0;
  uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                     (*(undefined8 *)(unaff_x19 + 0x440));
  *(undefined8 *)(unaff_x19 + 0x448) = uVar16;
  *(undefined8 *)(unaff_x19 + 0x438) =
       *(undefined8 *)Method_Unity_Collections_NativeArray<Vector3>_CopyTo__;
  *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x438);
  uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                     (*(undefined8 *)(unaff_x19 + 0x428),*(undefined8 *)(unaff_x19 + 0x140));
  *(undefined8 *)(unaff_x19 + 0x430) = uVar16;
  bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                    (*(undefined8 *)(unaff_x19 + 0x448),*(undefined8 *)(unaff_x19 + 0x430),
                     *(undefined8 *)(unaff_x19 + 0x140));
  *(byte *)(unaff_x19 + 0x424) = bVar3 & 1;
  if ((*(byte *)(unaff_x19 + 0x424) & 1) == 0) {
LAB_022849d4:
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x410) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x400) = *(undefined8 *)(unaff_x19 + 0x410);
    *(undefined8 *)(unaff_x19 + 0x128) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x400));
    *(undefined8 *)(unaff_x19 + 0x408) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x3f8) =
         *(undefined8 *)
          Method_Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_get_Min__
    ;
    *(undefined8 *)(unaff_x19 + 1000) = *(undefined8 *)(unaff_x19 + 0x3f8);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 1000),*(undefined8 *)(unaff_x19 + 0x128));
    *(undefined8 *)(unaff_x19 + 0x3f0) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x408),*(undefined8 *)(unaff_x19 + 0x3f0),
                       *(undefined8 *)(unaff_x19 + 0x128));
    *(byte *)(unaff_x19 + 0x3e4) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x3e4) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x29 + -0x50);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0x118) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0x120),*(void **)(unaff_x19 + 0x118),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x50));
      *(undefined8 *)(unaff_x19 + 0x3d8) = uVar16;
      pcVar10 = (char *)UnBox(*(Il2CppObject **)(unaff_x19 + 0x3d8),
                              *(Il2CppClass **)
                               Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
      if (*pcVar10 == '\0') goto LAB_02285520;
    }
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x3d0) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x3c0) = *(undefined8 *)(unaff_x19 + 0x3d0);
    *(undefined8 *)(unaff_x19 + 0x110) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x3c0));
    *(undefined8 *)(unaff_x19 + 0x3c8) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x3b8) =
         *(undefined8 *)
          Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_PostDispatch__;
    *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x3b8);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x3a8),*(undefined8 *)(unaff_x19 + 0x110));
    *(undefined8 *)(unaff_x19 + 0x3b0) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x3c8),*(undefined8 *)(unaff_x19 + 0x3b0),
                       *(undefined8 *)(unaff_x19 + 0x110));
    *(byte *)(unaff_x19 + 0x3a4) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x3a4) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x29 + -0x58);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0x100) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0x108),*(void **)(unaff_x19 + 0x100),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x58));
      *(undefined8 *)(unaff_x19 + 0x398) = uVar16;
      pcVar10 = (char *)UnBox(*(Il2CppObject **)(unaff_x19 + 0x398),
                              *(Il2CppClass **)
                               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>__ctor__
                             );
      if (*pcVar10 == '\0') goto LAB_02285520;
    }
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x390) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x19 + 0x390);
    *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x380));
    *(undefined8 *)(unaff_x19 + 0x388) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x378) =
         *(undefined8 *)
          Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureEvent>__ctor__;
    *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(unaff_x19 + 0x378);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x368),*(undefined8 *)(unaff_x19 + 0xf8));
    *(undefined8 *)(unaff_x19 + 0x370) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x388),*(undefined8 *)(unaff_x19 + 0x370),
                       *(undefined8 *)(unaff_x19 + 0xf8));
    *(byte *)(unaff_x19 + 0x364) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x364) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x29 + -0x60);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0xe8) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0xf0),*(void **)(unaff_x19 + 0xe8),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x60));
      *(undefined8 *)(unaff_x19 + 0x358) = uVar16;
      psVar12 = (short *)UnBox(*(Il2CppObject **)(unaff_x19 + 0x358),
                               *(Il2CppClass **)
                                Method_System_Collections_Generic_Dictionary<MonoBehaviour,_Coroutine>_get_Item__
                              );
      if (*psVar12 == 0) goto LAB_02285520;
    }
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x350) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x340) = *(undefined8 *)(unaff_x19 + 0x350);
    *(undefined8 *)(unaff_x19 + 0xe0) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x340));
    *(undefined8 *)(unaff_x19 + 0x348) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x338) =
         *(undefined8 *)
          Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>__ctor__;
    *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x19 + 0x338);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x328),*(undefined8 *)(unaff_x19 + 0xe0));
    *(undefined8 *)(unaff_x19 + 0x330) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x348),*(undefined8 *)(unaff_x19 + 0x330),
                       *(undefined8 *)(unaff_x19 + 0xe0));
    *(byte *)(unaff_x19 + 0x324) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x324) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)(unaff_x29 + -0x68);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0xd0) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0xd8),*(void **)(unaff_x19 + 0xd0),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x68));
      *(undefined8 *)(unaff_x19 + 0x318) = uVar16;
      plVar11 = (long *)UnBox(*(Il2CppObject **)(unaff_x19 + 0x318),
                              *(Il2CppClass **)
                               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_TryGetValue__
                             );
      if (*plVar11 == 0) goto LAB_02285520;
    }
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x310) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x300) = *(undefined8 *)(unaff_x19 + 0x310);
    *(undefined8 *)(unaff_x19 + 200) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x300));
    *(undefined8 *)(unaff_x19 + 0x308) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x2f8) =
         *(undefined8 *)Method_Unity_Collections_NativeArray<Vector2>_GetEnumerator__;
    *(undefined8 *)(unaff_x19 + 0x2e8) = *(undefined8 *)(unaff_x19 + 0x2f8);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x2e8),*(undefined8 *)(unaff_x19 + 200));
    *(undefined8 *)(unaff_x19 + 0x2f0) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x308),*(undefined8 *)(unaff_x19 + 0x2f0),
                       *(undefined8 *)(unaff_x19 + 200));
    *(byte *)(unaff_x19 + 0x2e4) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x2e4) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x29 + -0x70);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0xb8) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0xc0),*(void **)(unaff_x19 + 0xb8),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x70));
      *(undefined8 *)(unaff_x19 + 0x2d8) = uVar16;
      plVar11 = (long *)UnBox(*(Il2CppObject **)(unaff_x19 + 0x2d8),
                              *(Il2CppClass **)
                               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_TryGetValue__
                             );
      if (*plVar11 == 0) goto LAB_02285520;
    }
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x2d0) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x19 + 0x2d0);
    *(undefined8 *)(unaff_x19 + 0xb0) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x2c0));
    *(undefined8 *)(unaff_x19 + 0x2c8) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x2b8) =
         *(undefined8 *)Method_UnityEngine_UIElements_MouseEventBase<ContextClickEvent>__ctor__;
    *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x2b8);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0xb0));
    *(undefined8 *)(unaff_x19 + 0x2b0) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x2c8),*(undefined8 *)(unaff_x19 + 0x2b0),
                       *(undefined8 *)(unaff_x19 + 0xb0));
    *(byte *)(unaff_x19 + 0x2a4) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x2a4) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x29 + -0x78);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0xa0) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0xa8),*(void **)(unaff_x19 + 0xa0),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x78));
      *(undefined8 *)(unaff_x19 + 0x298) = uVar16;
      psVar12 = (short *)UnBox(*(Il2CppObject **)(unaff_x19 + 0x298),
                               *(Il2CppClass **)
                                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_get_Values__
                              );
      if (*psVar12 == 0) goto LAB_02285520;
    }
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x290) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x280) = *(undefined8 *)(unaff_x19 + 0x290);
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x280));
    *(undefined8 *)(unaff_x19 + 0x288) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x278) =
         *(undefined8 *)Method_Unity_Collections_NativeArray<Vector3>_Copy__;
    *(undefined8 *)(unaff_x19 + 0x268) = *(undefined8 *)(unaff_x19 + 0x278);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x98));
    *(undefined8 *)(unaff_x19 + 0x270) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x288),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x98));
    *(byte *)(unaff_x19 + 0x264) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x264) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x29 + -0x80);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0x88) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0x90),*(void **)(unaff_x19 + 0x88),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x80));
      *(undefined8 *)(unaff_x19 + 600) = uVar16;
      psVar12 = (short *)UnBox(*(Il2CppObject **)(unaff_x19 + 600),
                               *(Il2CppClass **)
                                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_Add__
                              );
      if (*psVar12 == 0) goto LAB_02285520;
    }
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x250) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + 0x250);
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x240));
    *(undefined8 *)(unaff_x19 + 0x248) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x238) =
         *(undefined8 *)
          Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureEvent>_GetPooled__;
    *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x238);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x228),*(undefined8 *)(unaff_x19 + 0x80));
    *(undefined8 *)(unaff_x19 + 0x230) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x248),*(undefined8 *)(unaff_x19 + 0x230),
                       *(undefined8 *)(unaff_x19 + 0x80));
    *(byte *)(unaff_x19 + 0x224) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x224) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x29 + -0x88);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0x70) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0x78),*(void **)(unaff_x19 + 0x70),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x88));
      *(undefined8 *)(unaff_x19 + 0x218) = uVar16;
      puVar15 = (undefined8 *)
                UnBox(*(Il2CppObject **)(unaff_x19 + 0x218),
                      *(Il2CppClass **)
                       Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                     );
      bVar3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(0,*puVar15);
      *(byte *)(unaff_x19 + 0x214) = bVar3 & 1;
      if ((*(byte *)(unaff_x19 + 0x214) & 1) != 0) goto LAB_02285520;
    }
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    uVar16 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(lVar5 + 0xc0),9);
    *(undefined8 *)(unaff_x19 + 0x208) = uVar16;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x208);
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x1f8));
    *(undefined8 *)(unaff_x19 + 0x200) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x1f0) =
         *(undefined8 *)
          Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>__ctor__;
    *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0x1f0);
    uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                       (*(undefined8 *)(unaff_x19 + 0x1e0),*(undefined8 *)(unaff_x19 + 0x68));
    *(undefined8 *)(unaff_x19 + 0x1e8) = uVar16;
    bVar3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                      (*(undefined8 *)(unaff_x19 + 0x200),*(undefined8 *)(unaff_x19 + 0x1e8),
                       *(undefined8 *)(unaff_x19 + 0x68));
    *(byte *)(unaff_x19 + 0x1dc) = bVar3 & 1;
    if ((*(byte *)(unaff_x19 + 0x1dc) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x29 + -0x90);
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
      if ((uVar13 & 1) == 0) {
        *(long *)(unaff_x19 + 0x58) = unaff_x29 + -0x18;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x29 + -0x18);
      }
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x19 + 0x60),*(void **)(unaff_x19 + 0x58),
                 (ulong)*(uint *)(unaff_x29 + -0x24));
      lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
      pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
      uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x90));
      *(undefined8 *)(unaff_x19 + 0x1d0) = uVar16;
      puVar15 = (undefined8 *)
                UnBox(*(Il2CppObject **)(unaff_x19 + 0x1d0),
                      *(Il2CppClass **)
                       Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_GetPooled__
                     );
      bVar3 = UIntPtr_op_Equality_m6854CBDA705729A896265CF7D2BD522E3460DCFB(0,*puVar15);
      *(byte *)(unaff_x19 + 0x1cc) = bVar3 & 1;
      if ((*(byte *)(unaff_x19 + 0x1cc) & 1) != 0) goto LAB_02285520;
    }
LAB_02285650:
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x29 + -0xa0);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
    if ((uVar13 & 1) == 0) {
      *(long *)(unaff_x19 + 0x28) = unaff_x29 + -0x18;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x29 + -0x18);
    }
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x19 + 0x30),*(void **)(unaff_x19 + 0x28),
               (ulong)*(uint *)(unaff_x29 + -0x24));
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar5 + 0xc0),3);
    uVar16 = il2cpp_codegen_object_new(pIVar6);
    *(undefined8 *)(unaff_x19 + 0x1a8) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1a8);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
    if ((uVar13 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = **(undefined8 **)(unaff_x29 + -0xa0);
    }
    else {
      uVar16 = il2cpp_codegen_memcpy
                         (*(void **)(unaff_x29 + -0xa8),*(void **)(unaff_x29 + -0xa0),
                          (ulong)*(uint *)(unaff_x29 + -0x24));
      *(undefined8 *)(unaff_x19 + 0x18) = uVar16;
    }
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x19 + 0x18);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pMVar17 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar5 + 0xc0),0xb);
    Task_1__ctor_m1C40D38062933195E1A9BFFEEA9CA53E25D9E7DC
              (*(Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 **)(unaff_x19 + 0x20),
               *(void **)(unaff_x19 + 0x10),pMVar17);
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x19 + 0x1a8);
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x29 + -0x48);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar13 = il2cpp_codegen_class_is_value_type(pIVar6);
    if ((uVar13 & 1) == 0) {
      *(long *)(unaff_x19 + 0x130) = unaff_x29 + -0x18;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x29 + -0x18);
    }
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x19 + 0x138),*(void **)(unaff_x19 + 0x130),
               (ulong)*(uint *)(unaff_x29 + -0x24));
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar5 + 0xc0),5);
    uVar16 = Box(pIVar6,*(void **)(unaff_x29 + -0x48));
    *(undefined8 *)(unaff_x19 + 0x418) = uVar16;
    piVar9 = (int *)UnBox(*(Il2CppObject **)(unaff_x19 + 0x418),
                          *(Il2CppClass **)
                           Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_ContainsKey__
                         );
    if (*piVar9 != 0) goto LAB_022849d4;
LAB_02285520:
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar14 = *(Il2CppRGCTXData **)(lVar5 + 0xc0);
    *(undefined4 *)(unaff_x19 + 0x54) = 2;
    pIVar6 = (Il2CppClass *)il2cpp_rgctx_data(pIVar14,2);
    il2cpp_codegen_runtime_class_init_inline(pIVar6);
    lVar5 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
    pIVar6 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar5 + 0xc0),*(int *)(unaff_x19 + 0x54));
    puVar15 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar6);
    *(undefined8 *)(unaff_x19 + 0x1c0) = *puVar15;
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x19 + 0x1c0);
  }
FUN_0228575c:
  *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)(unaff_x29 + -0x10);
  lVar5 = tpidr_el0;
  lVar5 = *(long *)(lVar5 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5);
  }
  return *(undefined8 *)(unaff_x19 + 8);
}


