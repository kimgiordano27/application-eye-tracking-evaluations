/*
FUNCTION_NAME: FUN_0113ba30
ENTRY_POINT: 0113ba30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_0113ba30(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  void *__dest;
  undefined8 uVar14;
  long lVar15;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined3 local_b7;
  undefined1 uStack_b4;
  undefined3 uStack_b3;
  undefined8 local_b0;
  undefined3 local_a8;
  undefined1 uStack_a5;
  undefined3 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_97;
  undefined3 uStack_93;
  undefined8 local_90;
  long local_88;
  undefined4 uStack_80;
  undefined3 uStack_7c;
  undefined8 local_78;
  void *pvStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar12 = *(long *)(param_3 + 0x38);
  if (lVar12 == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_float>_Clear__);
    thunk_FUN_00d48444(System_Net_FileWebRequest_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_CompilerServices_RuntimeWrappedException_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    lVar12 = *(long *)(param_3 + 0x38);
    if (lVar12 == 0) {
      FUN_00d59478(param_3);
      lVar12 = *(long *)(param_3 + 0x38);
    }
  }
  lVar12 = *(long *)(lVar12 + 0x18);
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_00d5941c();
  }
  if (*(int *)(lVar12 + 0x28) < 0) {
    iVar4 = thunk_FUN_00d42afc();
    uVar11 = iVar4 - 0x10;
  }
  else {
    uVar11 = 8;
  }
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  __dest = (void *)((long)&local_c0 - ((ulong)uVar11 + 0xf & 0x1fffffff0));
  uStack_7c = 0;
  uStack_80 = 0;
  local_88 = 0;
  uVar14 = **(undefined8 **)(param_3 + 0x38);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01780344(uVar14,0);
  if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)System_Net_FileWebRequest_TypeInfo);
  }
  uVar5 = FUN_01c3090c(uVar14,0);
  uVar14 = **(undefined8 **)(param_3 + 0x38);
  if ((uVar5 & 1) == 0) {
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    FUN_00acb0a4();
    plVar8 = (long *)FUN_01780344(uVar14,0);
    FUN_00ac2be8();
    uVar14 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    uVar6 = thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_DeltaControl_TypeInfo);
    uVar9 = thunk_FUN_00d48444(Oculus_Interaction_Input_OVRSkeletonData_TypeInfo);
    uVar14 = FUN_01600424(uVar6,uVar14,uVar9,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016f2f28(uVar6,uVar14,0);
    uVar14 = thunk_FUN_00d48444(
                               Method_SoccerBlockerProjectile_<GoToTargetCoroutine>d__29_System_Collections_IEnumerator_Reset__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar14);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01780344(uVar14,0);
  uVar6 = FUN_01780344(*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0);
  uVar5 = FUN_01789ac0(uVar14,uVar6,0);
  if ((uVar5 & 1) == 0) {
    lVar12 = Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t__Invoke
                       (param_1,0);
    puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    uStack_80._0_3_ = 0;
    uStack_80._3_1_ = 0;
    uStack_7c = 0;
    if (param_2 == (long *)0x0) goto LAB_0113becc;
    local_88 = (long)(int)param_2[3];
    uVar14 = **(undefined8 **)
               (*(long *)
                 System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo + 0xb8
               );
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01731954(0);
    uVar6 = FUN_0176ff9c(&local_88,uVar6,0);
    _local_a8 = CONCAT13(uStack_80._3_1_,(undefined3)uStack_80);
    uStack_a4 = uStack_7c;
    if (lVar12 == 0) goto LAB_0113becc;
    local_b8 = 0xe;
    _local_b7 = CONCAT13(uStack_80._3_1_,(undefined3)uStack_80);
    uStack_b3 = uStack_7c;
    local_c0 = uVar14;
    local_b0 = uVar6;
    FUN_00add52c(lVar12,&local_c0,
                 *(undefined8 *)System_Runtime_CompilerServices_RuntimeWrappedException_TypeInfo);
    if (param_1 == (long *)0x0) goto LAB_0113becc;
    FUN_01be475c(param_1,0);
    lVar12 = param_1[7];
    uVar14 = **(undefined8 **)(param_3 + 0x38);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01780344(uVar14,0);
    if (lVar12 == 0) goto LAB_0113becc;
    FUN_01299bc0(lVar12,uVar14,&local_78,
                 *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_float>_Clear__)
    ;
    lVar12 = local_78;
    lVar15 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c(lVar15);
    }
    if (lVar12 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = thunk_FUN_00d6225c(lVar12,lVar15);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar12,lVar15);
      }
    }
    if (0 < (int)param_2[3]) {
      uVar5 = 0;
      uVar13 = param_2[3] & 0xffffffff;
      do {
        if (uVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
        memcpy(__dest,(void *)((long)param_2 + uVar5 * *(uint *)(*param_2 + 0x100) + 0x20),
               (ulong)uVar11);
        if (lVar7 == 0) goto LAB_0113becc;
        puVar10 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x20);
        local_78 = lVar12;
        pvStack_70 = __dest;
        (*(code *)puVar10[2])(*puVar10,puVar10,lVar7,&local_78,__dest);
        uVar13 = (ulong)*(uint *)(param_2 + 3);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(param_2 + 3));
    }
    (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    goto LAB_0113be9c;
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
    if (param_2 == (long *)0x0) goto LAB_0113bd84;
LAB_0113bc04:
    uVar14 = *(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
    lVar12 = thunk_FUN_00d6225c(param_2,uVar14);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_2,uVar14);
    }
  }
  else {
    if (param_2 != (long *)0x0) goto LAB_0113bc04;
LAB_0113bd84:
    lVar12 = 0;
  }
  uVar14 = FUN_01c34fa0(lVar12,1,0);
  lVar12 = Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t__Invoke
                     (param_1,0);
  uStack_80._0_3_ = 0;
  uStack_80._3_1_ = 0;
  uStack_7c = 0;
  local_a0 = **(undefined8 **)
               (*(long *)
                 System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo + 0xb8
               );
  local_78 = (ulong)local_78._7_1_ << 0x38;
  if (lVar12 == 0) {
LAB_0113becc:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_97 = 0;
  local_98 = 0xe;
  uStack_93 = 0;
  local_90 = uVar14;
  FUN_00add52c(lVar12,&local_a0,
               *(undefined8 *)System_Runtime_CompilerServices_RuntimeWrappedException_TypeInfo);
LAB_0113be9c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


