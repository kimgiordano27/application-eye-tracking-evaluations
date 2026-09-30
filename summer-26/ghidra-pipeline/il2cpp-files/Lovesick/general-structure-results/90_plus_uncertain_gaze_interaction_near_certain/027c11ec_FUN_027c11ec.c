/*
FUNCTION_NAME: FUN_027c11ec
ENTRY_POINT: 027c11ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 193
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


long FUN_027c11ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_0378886c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033f6f18);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_ConfigurationDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRObjectPool_ListScope<Guid>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<MedleyBarCustomer>__);
    thunk_FUN_00d48444(StringLiteral_1049);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<HintValue>_Dispose__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstancePropertySetter__
                      );
    thunk_FUN_00d48444(Method_StartMenu_<QuitCoroutine>d__20_System_Collections_IEnumerator_Reset__)
    ;
    thunk_FUN_00d48444(StringLiteral_11827);
    thunk_FUN_00d48444(StringLiteral_196);
    thunk_FUN_00d48444(StringLiteral_8216);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SelectionEvent>__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Quaternion>_ResizeUninitialized__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Linq_JObject_JObjectDynamicProxy_<>c_<GetDynamicMemberNames>b__2_0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Edge>__ctor__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_69__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass67_0_<DOTimeScale>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_0378886c = 1;
  }
  puVar7 = Method_StartMenu_<QuitCoroutine>d__20_System_Collections_IEnumerator_Reset__;
  local_90 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  lStack_88 = param_1;
  if (param_1 == 0) goto LAB_027c1740;
  uVar10 = FUN_027bf6c4(*(undefined8 *)(param_1 + 0x38),&local_90);
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_027c1740;
    uVar10 = FUN_015fe854(*(long *)(param_1 + 0x38),
                          *(undefined8 *)
                           Method_Newtonsoft_Json_Linq_JObject_JObjectDynamicProxy_<>c_<GetDynamicMemberNames>b__2_0__
                          ,0);
    lVar14 = *(long *)(param_1 + 0x38);
    puVar13 = (undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__;
    puVar1 = (undefined8 *)StringLiteral_8216;
    if ((uVar10 & 1) != 0) goto joined_r0x027c139c;
    if (lVar14 == 0) goto LAB_027c1740;
    uVar10 = FUN_015fe854(lVar14,*(undefined8 *)StringLiteral_196,0);
    lVar14 = *(long *)(param_1 + 0x38);
    puVar13 = (undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__;
    puVar1 = (undefined8 *)StringLiteral_8216;
    if ((uVar10 & 1) == 0) {
      uVar10 = thunk_FUN_015fe514(lVar14,*(undefined8 *)
                                          Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass67_0_<DOTimeScale>b__1__
                                  ,0);
      lVar14 = *(long *)(param_1 + 0x38);
      puVar13 = (undefined8 *)StringLiteral_11827;
      puVar1 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_69__;
      if ((uVar10 & 1) != 0) goto joined_r0x027c139c;
      uVar10 = thunk_FUN_015fe514(lVar14,*(undefined8 *)
                                          Method_Obi_ObiNativeList<Quaternion>_ResizeUninitialized__
                                  ,0);
      if ((uVar10 & 1) != 0) {
        uVar11 = *(undefined8 *)
                  Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstancePropertySetter__
        ;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar12 = (long *)FUN_01780344(uVar11,0);
        puVar2 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
        if (plVar12 == (long *)0x0) goto LAB_027c1740;
        uVar11 = (**(code **)(*plVar12 + 0x2e8))(plVar12,*(undefined8 *)(*plVar12 + 0x2f0));
        uVar11 = FUN_01600424(uVar11,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x38),0);
        FUN_027bf6c4(uVar11,&local_90);
        goto LAB_027c13d0;
      }
    }
    else {
joined_r0x027c139c:
      if (lVar14 == 0) goto LAB_027c1740;
      uVar11 = FUN_01601fc0(lVar14,*puVar13,*puVar1,0);
      uVar10 = FUN_027bf6c4(uVar11,&local_90);
      if ((uVar10 & 1) != 0) goto LAB_027c13d0;
    }
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar14 = FUN_027c1b5c(&lStack_88);
  }
  else {
LAB_027c13d0:
    puVar9 = StringLiteral_3033;
    puVar8 = StringLiteral_302;
    puVar6 = Method_UnityEngine_GameObject_GetComponent<MedleyBarCustomer>__;
    puVar5 = Method_System_Collections_Generic_List<Edge>__ctor__;
    puVar4 = Method_OVRObjectPool_ListScope<Guid>__ctor__;
    puVar3 = UnityEngine_XR_ARSubsystems_ConfigurationDescriptor_TypeInfo;
    puVar2 = PTR_DAT_033f6f18;
    if (local_90 == 0) {
LAB_027c1740:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(local_90,&local_80,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<HintValue>_Dispose__);
    uStack_a8 = uStack_78;
    local_b0 = local_80;
    local_a0 = local_70;
    do {
      uVar10 = FUN_012b894c(&local_b0,*(undefined8 *)puVar3);
      if ((uVar10 & 1) == 0) {
        FUN_012b8948(&local_b0,*(undefined8 *)puVar2);
        plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar9,1);
        if (plVar12 != (long *)0x0) {
          lVar14 = *(long *)(param_1 + 0x38);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar15 == 0)) {
            uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,0);
          }
          if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar12[4] = lVar14;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661304(*(undefined8 *)puVar5,plVar12,0);
          uVar11 = FUN_015f6780(*(undefined8 *)
                                 Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SelectionEvent>__
                                ,*(undefined8 *)(param_1 + 0x38),0);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_1049);
          if (lVar14 != 0) {
            FUN_027c1ca0(lVar14,uVar11);
            return lVar14;
          }
        }
        goto LAB_027c1740;
      }
      plVar12 = (long *)FUN_00ce9b6c(&local_b0,*(undefined8 *)puVar4);
      uVar19 = param_2[1];
      uVar18 = *param_2;
      uVar17 = param_2[3];
      uVar11 = param_2[2];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar14 = *(long *)puVar6;
      lVar15 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_027c14b8;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar14,1);
LAB_027c14b8:
      local_80 = uVar18;
      uStack_78 = uVar19;
      local_70 = uVar11;
      uStack_68 = uVar17;
      uVar10 = (*(code *)*puVar13)(plVar12,param_1,&local_80,puVar13[1]);
    } while ((uVar10 & 1) == 0);
    FUN_012b8948(&local_b0,*(undefined8 *)puVar2);
    uVar19 = param_2[1];
    uVar18 = *param_2;
    uVar17 = param_2[3];
    uVar11 = param_2[2];
    lVar14 = *(long *)puVar6;
    lVar15 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar10 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_027c1624;
        }
        uVar10 = uVar10 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar14,2);
LAB_027c1624:
    local_80 = uVar18;
    uStack_78 = uVar19;
    local_70 = uVar11;
    uStack_68 = uVar17;
    lVar14 = (*(code *)*puVar13)(plVar12,param_1,&local_80,puVar13[1]);
    if (lVar14 != 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_027c052c(param_1,lVar14);
      FUN_027c0598(param_1,lVar14);
    }
  }
  return lVar14;
}


