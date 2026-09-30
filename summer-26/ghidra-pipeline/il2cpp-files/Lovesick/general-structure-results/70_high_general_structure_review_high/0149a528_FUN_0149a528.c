/*
FUNCTION_NAME: FUN_0149a528
ENTRY_POINT: 0149a528
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_0149a528(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long local_68;
  
  if ((DAT_03776c6d & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UQueryExtensions_Q<Label>__);
    thunk_FUN_00d48444(StringLiteral_4520);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_A8636D08B42D058EFC34703DD37B6468FCE56138DF242B862C3F1CA138CB3B89
                      );
    thunk_FUN_00d48444(Polenter_Serialization_Serializing_PropertyFactory_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Guid,_Action>_Clear__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_720);
    thunk_FUN_00d48444(StringLiteral_8873);
    thunk_FUN_00d48444(System_NonSerializedAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10926);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_03776c6d = 1;
  }
  plVar12 = (long *)StringLiteral_720;
  puVar1 = Method_UnityEngine_UIElements_UQueryExtensions_Q<Label>__;
  if (param_2 == (long *)0x0) {
    plVar9 = (long *)thunk_FUN_00d93c64(param_1,0);
    puVar1 = System_NonSerializedAttribute_TypeInfo;
    if (plVar9 == (long *)0x0) goto LAB_0149ad6c;
    uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (*(int *)(*plVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(*plVar12);
    }
    uVar17 = *(undefined8 *)puVar1;
    goto LAB_0149a7c4;
  }
  lVar15 = *param_2;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) ==
          *(long *)Method_UnityEngine_UIElements_UQueryExtensions_Q<Label>__) {
        puVar6 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_0149a6d4;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_00d59724(param_2,*(long *)Method_UnityEngine_UIElements_UQueryExtensions_Q<Label>__,0
                       );
LAB_0149a6d4:
  lVar15 = (*(code *)*puVar6)(param_2,puVar6[1]);
  uVar18 = FUN_015ff8a0(lVar15,0);
  if ((uVar18 & 1) == 0) {
    if (lVar15 == 0) goto LAB_0149ad6c;
    iVar5 = FUN_01605160(lVar15,0x2e,0);
    if (iVar5 < 1) goto LAB_0149a768;
    lVar7 = FUN_01601d40(lVar15,0,iVar5,0);
    lVar16 = *param_2;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar16 + (long)(*piVar20 + 4) * 0x10 + 0x138);
          goto LAB_0149a804;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,4);
LAB_0149a804:
    lVar16 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (lVar16 == 0) {
      uVar8 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    }
    else {
      lVar16 = *param_2;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar16 + (long)(*piVar20 + 4) * 0x10 + 0x138);
            goto LAB_0149a880;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,4);
LAB_0149a880:
      uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
      uVar8 = FUN_015f5b28(*(undefined8 *)
                            Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__,
                           uVar8,0);
    }
    puVar3 = Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__;
    puVar2 = Polenter_Serialization_Serializing_PropertyFactory_TypeInfo;
    lVar16 = FUN_015f5b28(lVar7,uVar8,0);
    lVar15 = FUN_01603ec8(lVar15,iVar5 + 1,0);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar8 = FUN_00da52a8(lVar16,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
    uVar18 = FUN_01789ac0(uVar8,0,0);
    if ((uVar18 & 1) != 0) {
      plVar9 = (long *)thunk_FUN_00d93c64(param_1,0);
      if (plVar9 == (long *)0x0) goto LAB_0149ad6c;
      uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      uVar17 = *(undefined8 *)StringLiteral_10926;
      lVar15 = lVar16;
      goto LAB_0149a798;
    }
    lVar16 = *param_2;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
          goto LAB_0149a9a8;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,2);
LAB_0149a9a8:
    puVar4 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
    lVar16 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (lVar16 == 0) {
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,0);
      plVar9 = plVar10;
    }
    else {
      lVar16 = *param_2;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
            goto LAB_0149aa24;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,2);
LAB_0149aa24:
      lVar16 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (lVar16 == 0) goto LAB_0149ad6c;
      uVar14 = *(uint *)(lVar16 + 0x18);
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,(ulong)uVar14);
      puVar4 = 
      Field_<PrivateImplementationDetails>_A8636D08B42D058EFC34703DD37B6468FCE56138DF242B862C3F1CA138CB3B89
      ;
      plVar9 = plVar10;
      if (0 < (int)uVar14) {
        uVar18 = 0;
        do {
          lVar16 = *param_2;
          uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                goto LAB_0149aab0;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,2);
LAB_0149aab0:
          lVar16 = (*(code *)*puVar6)(param_2,puVar6[1]);
          if ((lVar16 == 0) ||
             (FUN_0132138c(lVar16,uVar18 & 0xffffffff,&local_68,*(undefined8 *)puVar4),
             local_68 == 0)) goto LAB_0149ad6c;
          uVar17 = FUN_01600424(*(undefined8 *)(local_68 + 0x30),
                                *(undefined8 *)
                                 Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__
                                ,*(undefined8 *)(local_68 + 0x28),0);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          lVar16 = FUN_00da52a8(uVar17,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
          if (plVar10 == (long *)0x0) goto LAB_0149ad6c;
          if ((lVar16 != 0) &&
             (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
          goto LAB_0149ad74;
          if (*(uint *)(plVar10 + 3) <= uVar18) goto LAB_0149ad70;
          plVar10[uVar18 + 4] = lVar16;
          plVar9 = (long *)FUN_01789ac0(lVar16,0,0);
          if (((ulong)plVar9 & 1) != 0) {
            plVar12 = (long *)thunk_FUN_00d93c64(param_1,0);
            if (plVar12 == (long *)0x0) goto LAB_0149ad6c;
            uVar13 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
            uVar17 = FUN_015f5b28(*(undefined8 *)StringLiteral_10926,uVar17,0);
            if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_720);
            }
            plVar9 = (long *)FUN_014def10(uVar13,uVar17,0,0);
          }
          uVar18 = uVar18 + 1;
          plVar12 = (long *)StringLiteral_720;
        } while (uVar18 != uVar14);
      }
    }
    uVar17 = Meta_XR_MRUtilityKit_SceneDebugger__<ShowDebugAnchorsDebugger>b__54_0
                       (plVar9,uVar8,lVar15,plVar10);
    uVar18 = FUN_0169f70c(uVar17,0,0);
    if ((uVar18 & 1) == 0) {
      uVar8 = FUN_0114be3c(uVar17,uVar8,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Guid,_Action>_Clear__);
      return uVar8;
    }
    plVar9 = (long *)thunk_FUN_00d93c64(param_1,0);
    puVar1 = PTR_DAT_033ea8a0;
    if (plVar9 == (long *)0x0) goto LAB_0149ad6c;
    uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,5);
    puVar1 = StringLiteral_8873;
    if (plVar9 == (long *)0x0) goto LAB_0149ad6c;
    if ((*(long *)StringLiteral_8873 != 0) &&
       (lVar16 = thunk_FUN_00d6225c(*(long *)StringLiteral_8873,*(undefined8 *)(*plVar9 + 0x40)),
       lVar16 == 0)) {
LAB_0149ad74:
      uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,0);
    }
    uVar14 = *(uint *)(plVar9 + 3);
    if (uVar14 == 0) {
LAB_0149ad70:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar9[4] = *(long *)puVar1;
    if (lVar7 != 0) {
      lVar16 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar16 == 0) goto LAB_0149ad74;
      uVar14 = *(uint *)(plVar9 + 3);
    }
    puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
    if (uVar14 < 2) goto LAB_0149ad70;
    plVar9[5] = lVar7;
    if (*(long *)puVar1 != 0) {
      lVar7 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar7 == 0) goto LAB_0149ad74;
      uVar14 = *(uint *)(plVar9 + 3);
    }
    if (uVar14 < 3) goto LAB_0149ad70;
    plVar9[6] = *(long *)puVar1;
    if (lVar15 != 0) {
      lVar7 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar7 == 0) goto LAB_0149ad74;
      uVar14 = *(uint *)(plVar9 + 3);
    }
    if (uVar14 < 4) goto LAB_0149ad70;
    plVar9[7] = lVar15;
    if (*(long *)puVar1 != 0) {
      lVar15 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar15 == 0) goto LAB_0149ad74;
      uVar14 = *(uint *)(plVar9 + 3);
    }
    if (uVar14 < 5) goto LAB_0149ad70;
    plVar9[8] = *(long *)puVar1;
    uVar17 = FUN_01600844(plVar9,0);
  }
  else {
LAB_0149a768:
    plVar9 = (long *)thunk_FUN_00d93c64(param_1,0);
    puVar1 = System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo;
    if (plVar9 == (long *)0x0) {
LAB_0149ad6c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    uVar17 = *(undefined8 *)puVar1;
LAB_0149a798:
    uVar17 = FUN_015f5b28(uVar17,lVar15,0);
  }
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864(*plVar12);
  }
LAB_0149a7c4:
  FUN_014def10(uVar8,uVar17,0,0);
  return 0;
}


