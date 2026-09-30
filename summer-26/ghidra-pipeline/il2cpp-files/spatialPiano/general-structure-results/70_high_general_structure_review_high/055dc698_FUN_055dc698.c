/*
FUNCTION_NAME: FUN_055dc698
ENTRY_POINT: 055dc698
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_055dc698(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  if ((DAT_06bbfbc3 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067da580);
    FUN_02f08768(System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo);
    FUN_02f08768(System_EventHandler<AROcclusionSourceEventArgs>_TypeInfo);
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_TryGetValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__);
    FUN_02f08768(System_Collections_Generic_IEnumerator<InputActionTrace_ActionEventPtr>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>__ctor__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__);
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_set_Item__);
    FUN_02f08768(PTR_DAT_067cde58);
    FUN_02f08768(
                Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
                );
    FUN_02f08768(PTR_DAT_067cde68);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_Awake__
                );
    FUN_02f08768(PTR_DAT_067cab38);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                );
    FUN_02f08768(PTR_DAT_067d7cb8);
    FUN_02f08768(UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_TypeInfo);
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(PTR_DAT_067ca7d0);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__);
    DAT_06bbfbc3 = 1;
  }
  if (param_3 == (long *)0x0) goto LAB_055dcffc;
  lVar6 = FUN_0555ebd0(param_3,param_2,param_4,0);
  if (lVar6 == 0) {
    iVar5 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
    if (iVar5 != 3) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      lVar15 = *(long *)Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_set_Item__;
      uVar8 = *(undefined8 *)Method_UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>__ctor__;
      uVar9 = *(undefined8 *)PTR_DAT_067cde58;
      lVar6 = *(long *)PTR_DAT_067cab38;
      goto LAB_055dc940;
    }
    goto LAB_055dcffc;
  }
  lVar7 = FUN_0556053c(param_3,0);
  if (lVar7 == 0) goto LAB_055dcffc;
  if (*(int *)(lVar7 + 0x10) == 0) {
    plVar10 = *(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else {
    plVar10 = param_3 + 0x18;
  }
  lVar15 = *plVar10;
  iVar5 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
  if (2 < iVar5) {
    if (iVar5 == 3) {
      plVar10 = *(long **)(param_1 + 0x28);
      if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x055dcbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x278))(plVar10,lVar6,*(undefined8 *)(*plVar10 + 0x280));
        return;
      }
    }
    else {
      if (iVar5 != 4) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x28);
      uVar9 = FUN_0555e9b8(param_3,0);
      uVar8 = FUN_04f65260(*(undefined8 *)
                            System_Collections_Generic_IEnumerator<InputActionTrace_ActionEventPtr>_TypeInfo
                           ,uVar9,0);
      if (lVar7 != 0) {
        lVar15 = *(long *)Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__;
        uVar9 = *(undefined8 *)
                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
        goto LAB_055dc940;
      }
    }
    goto LAB_055dcffc;
  }
  if (iVar5 != 1) {
    if (iVar5 != 2) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    uVar8 = FUN_0555e9b8(param_3,0);
    uVar9 = FUN_0556053c(param_3,0);
    if (lVar7 != 0) {
LAB_055dc940:
      FUN_057e9228(lVar7,lVar15,uVar8,uVar9,lVar6,0);
      return;
    }
    goto LAB_055dcffc;
  }
  if (param_2 == 0) goto LAB_055dcffc;
  plVar10 = (long *)FUN_05588a94(param_2,param_3,param_4,0);
  uVar11 = FUN_05562120(param_3,0);
  if (((uVar11 & 1) == 0) || (uVar11 = FUN_05562194(param_3,plVar10,0), (uVar11 & 1) == 0)) {
LAB_055dc9fc:
    plVar12 = *(long **)(param_1 + 0x28);
    uVar9 = FUN_0555e9b8(param_3,0);
    uVar8 = FUN_0556053c(param_3,0);
    if ((plVar12 == (long *)0x0) ||
       ((**(code **)(*plVar12 + 0x1c8))
                  (plVar12,lVar15,uVar9,uVar8,*(undefined8 *)(*plVar12 + 0x1d0)),
       plVar10 == (long *)0x0)) goto LAB_055dcffc;
    bVar2 = false;
  }
  else {
    uVar9 = *(undefined8 *)Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_TryGetValue__;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar12 = (long *)FUN_050e4454(uVar9,0);
    if ((plVar10 == (long *)0x0) || (uVar9 = thunk_FUN_02f1863c(plVar10,0), plVar12 == (long *)0x0))
    goto LAB_055dcffc;
    uVar11 = (**(code **)(*plVar12 + 0x298))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x2a0));
    if ((uVar11 & 1) != 0) goto LAB_055dc9fc;
    bVar2 = true;
  }
  plVar12 = (long *)thunk_FUN_02f1863c(plVar10,0);
  uVar11 = FUN_05562120(param_3,0);
  puVar4 = PTR_DAT_067da580;
  puVar3 = PTR_DAT_067c9338;
  if ((uVar11 & 1) == 0) {
    lVar7 = *(long *)(PTR_DAT_067c9338 + 0x88);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050e4454(lVar7 + 0x20,0);
    uVar11 = FUN_050ed374(plVar12,uVar9,0);
    if ((uVar11 & 1) == 0) {
      lVar7 = *(long *)(puVar3 + 0x90);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_050e4454(lVar7 + 0x20,0);
      uVar11 = FUN_050ed374(plVar12,uVar9,0);
      if ((uVar11 & 1) != 0) goto LAB_055dcc2c;
    }
    else {
LAB_055dcc2c:
      uVar11 = FUN_055dd040(lVar6);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_055dcffc;
        FUN_057e9228(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_067d7cb8,
                     *(undefined8 *)UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_TypeInfo,
                     *(undefined8 *)Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__
                     ,*(undefined8 *)
                       Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
                     ,0);
      }
    }
    plVar12 = *(long **)(param_1 + 0x28);
    if (plVar12 == (long *)0x0) goto LAB_055dcffc;
    lVar7 = *plVar12;
LAB_055dcc88:
    (**(code **)(lVar7 + 0x278))(plVar12,lVar6,*(undefined8 *)(lVar7 + 0x280));
joined_r0x055dce20:
    if (bVar2) {
      return;
    }
  }
  else {
    lVar6 = *(long *)PTR_DAT_067da580;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar4;
    }
    if (plVar10 == (long *)**(long **)(lVar6 + 0xb8)) goto joined_r0x055dce20;
    if (*(char *)((long)param_3 + 0x91) != '\0') {
      if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar11 = FUN_056037d4(plVar10,0);
      if ((uVar11 & 1) != 0) goto joined_r0x055dce20;
    }
    uVar11 = FUN_05562194(param_3,plVar10,0);
    puVar3 = PTR_DAT_067c9338;
    if ((uVar11 & 1) == 0) {
      lVar6 = *(long *)(PTR_DAT_067c9338 + 0xe0);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar6);
      }
      uVar9 = FUN_050e4454(lVar6 + 0x20,0);
      uVar11 = FUN_050ed374(plVar12,uVar9,0);
      if ((uVar11 & 1) == 0) {
        uVar9 = *(undefined8 *)System_EventHandler<AROcclusionSourceEventArgs>_TypeInfo;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_050e4454(uVar9,0);
        uVar11 = FUN_050ed374(plVar12,uVar9,0);
        if ((uVar11 & 1) != 0) goto LAB_055dcd88;
        lVar6 = *(long *)(puVar3 + 0x88);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_050e4454(lVar6 + 0x20,0);
        uVar11 = FUN_050ed374(plVar12,uVar9,0);
        if ((uVar11 & 1) != 0) goto LAB_055dcd88;
        if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar11 = FUN_0560327c(plVar12,0);
        if ((uVar11 & 1) != 0) goto LAB_055dcd88;
        bVar1 = *(byte *)(*(long *)(puVar3 + 0xe0) + 0x130);
        if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)(puVar3 + 0xe0)
           )) {
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 == 0) goto LAB_055dcffc;
          uVar8 = *(undefined8 *)Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__;
          uVar13 = *(undefined8 *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
          uVar14 = *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
          uVar9 = *(undefined8 *)PTR_DAT_067cde68;
          goto LAB_055dcdd4;
        }
        uVar9 = FUN_055ce110(plVar12);
        uVar9 = FUN_04f65260(*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_Awake__
                             ,uVar9,0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_055dcffc;
        FUN_057e9228(*(long *)(param_1 + 0x28),
                     *(undefined8 *)
                      Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_set_Item__,
                     *(undefined8 *)PTR_DAT_067ca7d0,*(undefined8 *)PTR_DAT_067cde58,uVar9,0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_055dcffc;
        FUN_057e91cc(*(long *)(param_1 + 0x28),
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                     ,*(undefined8 *)PTR_DAT_067cd6c0,0);
      }
      else {
LAB_055dcd88:
        if (plVar12 == (long *)0x0) goto LAB_055dcffc;
        lVar6 = *(long *)(param_1 + 0x28);
        uVar9 = (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
        if (lVar6 == 0) goto LAB_055dcffc;
        uVar8 = *(undefined8 *)Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__;
        uVar13 = *(undefined8 *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
        uVar14 = *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
LAB_055dcdd4:
        FUN_057e9228(lVar6,uVar8,uVar13,uVar14,uVar9,0);
      }
      if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar11 = FUN_0560327c(plVar12,0);
      plVar12 = *(long **)(param_1 + 0x28);
      if ((uVar11 & 1) != 0) {
        FUN_05562ad0(param_3,plVar10,plVar12,0,0);
        goto joined_r0x055dce20;
      }
      lVar6 = FUN_0555ecb4(param_3,plVar10,0);
      if (plVar12 == (long *)0x0) goto LAB_055dcffc;
      lVar7 = *plVar12;
      goto LAB_055dcc88;
    }
    uVar9 = thunk_FUN_02f1863c(plVar10,0);
    lVar7 = param_3[7];
    lVar6 = *(long *)(PTR_DAT_067c9338 + 0xe0);
    if (bVar2) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar6);
      }
      uVar11 = FUN_050edfb8(uVar9,lVar7,0);
      if ((uVar11 & 1) != 0) {
        FUN_02a7da48(plVar12);
        uVar9 = (**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
        uVar9 = FUN_05568060(uVar9,0);
        uVar8 = thunk_FUN_02f6ef30(
                                  Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataMemberAttribute>_GetAttribute__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar9,uVar8);
      }
      uVar9 = FUN_0555e9b8(param_3,0);
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__);
      FUN_0583b4c4(lVar6,uVar9,0);
      uVar9 = FUN_0556053c(param_3,0);
      if (lVar6 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(lVar6 + 0x28) = uVar9;
        FUN_05562ad0(param_3,plVar10,uVar8,lVar6,0);
        return;
      }
      goto LAB_055dcffc;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar6);
    }
    uVar11 = FUN_050edfb8(uVar9,lVar7,0);
    if ((uVar11 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_056039f0(plVar12,0);
      if (lVar6 == 0) goto LAB_055dcffc;
      FUN_057e9228(lVar6,*(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar9,0);
    }
    FUN_05562ad0(param_3,plVar10,*(undefined8 *)(param_1 + 0x28),0,0);
  }
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x055dcee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
    return;
  }
LAB_055dcffc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


