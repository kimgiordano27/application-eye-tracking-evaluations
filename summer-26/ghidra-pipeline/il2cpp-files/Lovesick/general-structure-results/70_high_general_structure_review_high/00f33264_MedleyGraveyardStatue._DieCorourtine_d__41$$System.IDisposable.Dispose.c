/*
FUNCTION_NAME: MedleyGraveyardStatue.<DieCorourtine>d__41$$System.IDisposable.Dispose
ENTRY_POINT: 00f33264
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
MedleyGraveyardStatue_<DieCorourtine>d__41__System_IDisposable_Dispose
          (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
          undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long *in_stack_00000008;
  char cStack0000000000000010;
  undefined8 in_stack_00000018;
  long *plStack0000000000000020;
  long in_stack_00000028;
  
  puVar5 = StringLiteral_232;
  plStack0000000000000020 = param_3;
  if ((DAT_03775603 & 1) == 0) {
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_SerializeMember<WrapMode>__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ee500);
    thunk_FUN_00d48444(Method_System_RuntimeType_ListBuilder<ConstructorInfo>_ToArray__);
    thunk_FUN_00d48444(Newtonsoft_Json_Converters_IXmlDocumentType_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__);
    thunk_FUN_00d48444(UnityEngine_Transform_Enumerator_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_232);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeId__);
    DAT_03775603 = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__;
  lVar6 = *(long *)puVar5;
  _cStack0000000000000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = (long *)0x0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar5;
  }
  in_stack_00000018 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  _cStack0000000000000010 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  in_stack_00000008 = param_4;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar7 = FUN_00f30070(param_3);
  plVar11 = in_stack_00000008;
  if ((uVar7 & 1) == 0) goto LAB_00f33498;
  if (param_3 == (long *)0x0) goto LAB_00f33750;
  lVar6 = FUN_00f29ea8(param_3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  if (lVar6 == 0) goto LAB_00f33750;
  FUN_01299bc0(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),&stack0x00000028,
               *(undefined8 *)Method_FullSerializer_fsBaseConverter_SerializeMember<WrapMode>__);
  lVar6 = in_stack_00000028;
  if (in_stack_00000028 == 0) goto LAB_00f33750;
  if ((DAT_037755b1 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_037755b1 = 1;
  }
  puVar3 = Method_System_RuntimeType_ListBuilder<ConstructorInfo>_ToArray__;
  puVar1 = Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeId__;
  plVar11 = *(long **)(lVar6 + 0x10);
  if ((plVar11 == (long *)0x0) ||
     (*plVar11 !=
      *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    puVar1 = StringLiteral_12935;
    uVar12 = *(undefined8 *)puVar3;
    uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (plStack0000000000000020 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plStack0000000000000020 + 0x168))
                        (plStack0000000000000020,*(undefined8 *)(*plStack0000000000000020 + 0x170));
    }
    uVar10 = *(undefined8 *)puVar1;
LAB_00f3346c:
    uVar13 = FUN_0160073c(uVar13,uVar12,uVar8,uVar10,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    FUN_00f2f468(&stack0x00000010,uVar13);
    plVar11 = in_stack_00000008;
  }
  else {
    uVar13 = FUN_00f2ace0(lVar6);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    plVar11 = (long *)FUN_00f3f8e0(uVar13,0);
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar6);
    }
    uVar7 = FUN_01789ac0(plVar11,0,0);
    uVar8 = in_stack_00000018;
    uVar12 = _cStack0000000000000010;
    if ((uVar7 & 1) == 0) {
      if (param_4 == (long *)0x0) goto LAB_00f33750;
      uVar7 = (**(code **)(*param_4 + 0x2c8))(param_4,plVar11,*(undefined8 *)(*param_4 + 0x2d0));
      puVar1 = PTR_DAT_033ee500;
      if ((uVar7 & 1) == 0) {
        uVar13 = *(undefined8 *)UnityEngine_Transform_Enumerator_TypeInfo;
        uVar12 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
        uVar8 = *(undefined8 *)puVar1;
        if (plVar11 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        }
        goto LAB_00f3346c;
      }
    }
    else {
      uVar13 = FUN_01600424(*(undefined8 *)Newtonsoft_Json_Converters_IXmlDocumentType_TypeInfo,
                            uVar13,*(undefined8 *)
                                    Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      auVar14 = FUN_00f29ae4(uVar13);
      _cStack0000000000000010 = FUN_00f2f724(uVar12,uVar8,auVar14._0_8_,auVar14._8_8_);
      plVar11 = in_stack_00000008;
    }
  }
LAB_00f33498:
  in_stack_00000008 = plVar11;
  FUN_00f30b64(param_1,&stack0x00000008);
  plVar11 = in_stack_00000008;
  uVar13 = FUN_00f31998(param_1,in_stack_00000008);
  *param_6 = uVar13;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = _cStack0000000000000010;
  if (cStack0000000000000010 == '\0') {
    return uVar13;
  }
  uVar13 = *param_6;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_00f30934(uVar13,param_4,&stack0x00000020);
  if (*param_5 != 0) {
    uVar13 = thunk_FUN_00d93c64(*param_5,0);
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar6);
    }
    uVar7 = FUN_0178a8c4(uVar13,plVar11,0);
    if ((uVar7 & 1) == 0) {
      lVar6 = *param_5;
      goto LAB_00f33570;
    }
  }
  plVar9 = (long *)FUN_00f31c54(param_1,plVar11,param_2);
  if (plVar9 == (long *)0x0) {
LAB_00f33750:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = (**(code **)(*plVar9 + 0x178))
                    (plVar9,plStack0000000000000020,plVar11,*(undefined8 *)(*plVar9 + 0x180));
  *param_5 = lVar6;
LAB_00f33570:
  uVar13 = *param_6;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_00f309f0(uVar13,param_4,lVar6,&stack0x00000020);
  uVar12 = in_stack_00000018;
  uVar13 = _cStack0000000000000010;
  auVar14 = FUN_00f33754(param_1,param_2,plStack0000000000000020,plVar11,param_5);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_00f2f724(uVar13,uVar12,auVar14._0_8_,auVar14._8_8_);
  return uVar13;
}


