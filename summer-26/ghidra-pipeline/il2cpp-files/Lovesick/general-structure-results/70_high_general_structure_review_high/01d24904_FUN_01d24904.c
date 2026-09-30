/*
FUNCTION_NAME: FUN_01d24904
ENTRY_POINT: 01d24904
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01d24904(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_0377f316 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSession_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6b10);
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_14163);
    thunk_FUN_00d48444(System_Xml_XmlDeclaration_TypeInfo);
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item3__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_10757);
    thunk_FUN_00d48444(StringLiteral_3680);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(StringLiteral_10352);
    thunk_FUN_00d48444(StringLiteral_11272);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vfmsq_f64__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_LineType>__);
    thunk_FUN_00d48444(Method_System_ComponentModel_AttributeCollection__ctor__);
    DAT_0377f316 = 1;
  }
  local_68 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_01789ac0(param_5,0,0);
  if ((uVar9 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar15 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar13 = thunk_FUN_00d48444(StringLiteral_6417);
    FUN_016ec5b8(uVar15,uVar13,0);
    uVar13 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List_Enumerator<Polygon>_MoveNext__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar15,uVar13);
  }
  uVar15 = *(undefined8 *)StringLiteral_10757;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = FUN_01780344(uVar15,0);
  uVar9 = FUN_01789ac0(param_5,uVar15,0);
  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vfmsq_f64__;
  puVar6 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  puVar4 = System_Xml_XmlDeclaration_TypeInfo;
  if (((uVar9 & 1) == 0) || (param_4 == (long *)0x0)) {
LAB_01d24ad0:
    lVar14 = FUN_01ff79f8(param_1,param_2,param_3,param_4,param_5,0);
    return lVar14;
  }
  bVar1 = *(byte *)(*param_4 + 300);
  bVar2 = *(byte *)(*(long *)StringLiteral_14163 + 300);
  if ((bVar1 < bVar2) ||
     (lVar14 = *(long *)(*param_4 + 200),
     *(long *)(lVar14 + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_14163)) goto LAB_01d24ad0;
  bVar2 = *(byte *)(*(long *)Method_System_ComponentModel_AttributeCollection__ctor__ + 300);
  if ((bVar1 < bVar2) ||
     (*(long *)(lVar14 + (ulong)bVar2 * 8 + -8) !=
      *(long *)Method_System_ComponentModel_AttributeCollection__ctor__)) {
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__
                     + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(lVar14 + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_4);
    }
    uVar15 = *(undefined8 *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item3__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar14 = FUN_01780344(uVar15,0);
    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar6,7);
    lVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
    if (plVar10 == (long *)0x0) goto LAB_01d2525c;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    if ((int)plVar10[3] == 0) goto LAB_01d2524c;
    plVar10[4] = lVar11;
    lVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_01d2524c;
    plVar10[5] = lVar11;
    lVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_01d2524c;
    plVar10[6] = lVar11;
    lVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    puVar3 = UnityEngine_XR_ARFoundation_ARSession_TypeInfo;
    if (*(uint *)(plVar10 + 3) < 4) goto LAB_01d2524c;
    plVar10[7] = lVar11;
    lVar11 = FUN_01780344(*(undefined8 *)puVar3,0);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    puVar3 = StringLiteral_10352;
    if (*(uint *)(plVar10 + 3) < 5) goto LAB_01d2524c;
    plVar10[8] = lVar11;
    lVar11 = FUN_01780344(*(undefined8 *)puVar3,0);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 6) goto LAB_01d2524c;
    plVar10[9] = lVar11;
    lVar11 = FUN_01780344(*(undefined8 *)puVar3,0);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 7) goto LAB_01d2524c;
    plVar10[10] = lVar11;
    if (lVar14 == 0) goto LAB_01d2525c;
    uVar15 = FUN_0178c180(lVar14,plVar10,0);
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
    }
    uVar9 = FUN_016aa83c(uVar15,0,0);
    if ((uVar9 & 1) == 0) goto LAB_01d24ad0;
    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,7);
    lVar14 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
    if (plVar10 == (long *)0x0) goto LAB_01d2525c;
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if ((int)plVar10[3] == 0) goto LAB_01d2524c;
    plVar10[4] = lVar14;
    local_68 = FUN_01d83d24(param_4,0);
    lVar14 = FUN_01d25268(&local_68);
    if (lVar14 == 0) goto LAB_01d2525c;
    lVar14 = *(long *)(lVar14 + 0x90);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_01d2524c;
    plVar10[5] = lVar14;
    lVar14 = FUN_01d826c0(param_4,0);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_01d2524c;
    plVar10[6] = lVar14;
    lVar14 = FUN_01d826cc(param_4,0);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 4) goto LAB_01d2524c;
    plVar10[7] = lVar14;
    puVar3 = PTR_DAT_033f6b10;
    local_6c = (**(code **)(*param_4 + 0x278))(param_4,*(undefined8 *)(*param_4 + 0x280));
    lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_6c);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 5) goto LAB_01d2524c;
    plVar10[8] = lVar14;
    puVar3 = StringLiteral_11272;
    local_70 = (**(code **)(*param_4 + 0x298))(param_4,*(undefined8 *)(*param_4 + 0x2a0));
    lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_70);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 6) goto LAB_01d2524c;
    plVar10[9] = lVar14;
    local_74 = (**(code **)(*param_4 + 0x2d8))(param_4,*(undefined8 *)(*param_4 + 0x2e0));
    lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_74);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 7) goto LAB_01d2524c;
    plVar10[10] = lVar14;
  }
  else {
    uVar15 = *(undefined8 *)
              Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_LineType>__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar14 = FUN_01780344(uVar15,0);
    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar6,3);
    lVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
    if (plVar10 == (long *)0x0) goto LAB_01d2525c;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
LAB_01d25250:
      uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar15,0);
    }
    if ((int)plVar10[3] == 0) {
LAB_01d2524c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar10[4] = lVar11;
    lVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    puVar3 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_01d2524c;
    plVar10[5] = lVar11;
    lVar11 = FUN_01780344(*(undefined8 *)puVar3,0);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_01d2524c;
    plVar10[6] = lVar11;
    if (lVar14 == 0) goto LAB_01d2525c;
    uVar15 = FUN_0178c180(lVar14,plVar10,0);
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
    }
    uVar9 = FUN_016aa83c(uVar15,0,0);
    if ((uVar9 & 1) == 0) goto LAB_01d24ad0;
    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,3);
    lVar14 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
    if (plVar10 == (long *)0x0) goto LAB_01d2525c;
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if ((int)plVar10[3] == 0) goto LAB_01d2524c;
    plVar10[4] = lVar14;
    lVar14 = FUN_01d8f0f4(param_4,0);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    puVar3 = StringLiteral_9958;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_01d2524c;
    plVar10[5] = lVar14;
    uVar8 = FUN_01d900a4(param_4,0);
    local_6c = CONCAT31(local_6c._1_3_,uVar8) & 0xffffff01;
    lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_6c);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_01d2524c;
    plVar10[6] = lVar14;
  }
  lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3680);
  if (lVar14 != 0) {
    FUN_0200789c(lVar14,uVar15,plVar10,0);
    return lVar14;
  }
LAB_01d2525c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


