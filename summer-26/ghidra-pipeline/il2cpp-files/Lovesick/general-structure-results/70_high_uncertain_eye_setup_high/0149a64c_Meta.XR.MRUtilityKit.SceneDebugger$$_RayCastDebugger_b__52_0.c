/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<RayCastDebugger>b__52_0
ENTRY_POINT: 0149a64c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_SceneDebugger__<RayCastDebugger>b__52_0
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  long in_x9;
  ulong uVar17;
  int *piVar18;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x26;
  long in_stack_00000018;
  
  if (in_x9 != 0) {
    piVar18 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_0149a6d4;
      }
      in_x9 = in_x9 + -1;
      piVar18 = piVar18 + 4;
    } while (in_x9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724();
LAB_0149a6d4:
  lVar6 = (*(code *)*puVar5)();
  uVar7 = FUN_015ff8a0(lVar6,0);
  if ((uVar7 & 1) == 0) {
    if (lVar6 == 0) goto LAB_0149ad6c;
    iVar4 = FUN_01605160(lVar6,0x2e,0);
    if (iVar4 < 1) goto LAB_0149a768;
    lVar8 = FUN_01601d40(lVar6,0,iVar4,0);
    lVar15 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar7 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
          goto LAB_0149a804;
        }
        uVar7 = uVar7 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
LAB_0149a804:
    lVar15 = (*(code *)*puVar5)();
    if (lVar15 == 0) {
      uVar9 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    }
    else {
      lVar15 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_0149a880;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_0149a880:
      uVar9 = (*(code *)*puVar5)();
      uVar9 = FUN_015f5b28(*(undefined8 *)
                            Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__,
                           uVar9,0);
    }
    puVar2 = Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__;
    puVar1 = Polenter_Serialization_Serializing_PropertyFactory_TypeInfo;
    lVar15 = FUN_015f5b28(lVar8,uVar9,0);
    lVar6 = FUN_01603ec8(lVar6,iVar4 + 1,0);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar9 = FUN_00da52a8(lVar15,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    uVar7 = FUN_01789ac0(uVar9,0,0);
    if ((uVar7 & 1) == 0) {
      lVar15 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0149a9a8;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_0149a9a8:
      puVar3 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
      lVar15 = (*(code *)*puVar5)();
      if (lVar15 == 0) {
        plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,0);
        plVar10 = plVar11;
      }
      else {
        lVar15 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar7 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x21) {
              puVar5 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_0149aa24;
            }
            uVar7 = uVar7 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724();
LAB_0149aa24:
        lVar15 = (*(code *)*puVar5)();
        if (lVar15 == 0) goto LAB_0149ad6c;
        uVar14 = *(uint *)(lVar15 + 0x18);
        plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,(ulong)uVar14);
        puVar3 = 
        Field_<PrivateImplementationDetails>_A8636D08B42D058EFC34703DD37B6468FCE56138DF242B862C3F1CA138CB3B89
        ;
        plVar10 = plVar11;
        if (0 < (int)uVar14) {
          uVar7 = 0;
          do {
            lVar15 = *unaff_x20;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                  goto LAB_0149aab0;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar5 = (undefined8 *)FUN_00d59724();
LAB_0149aab0:
            lVar15 = (*(code *)*puVar5)();
            if ((lVar15 == 0) ||
               (FUN_0132138c(lVar15,uVar7 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar3),
               in_stack_00000018 == 0)) goto LAB_0149ad6c;
            uVar16 = FUN_01600424(*(undefined8 *)(in_stack_00000018 + 0x30),
                                  *(undefined8 *)
                                   Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__
                                  ,*(undefined8 *)(in_stack_00000018 + 0x28),0);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            lVar15 = FUN_00da52a8(uVar16,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
            if (plVar11 == (long *)0x0) goto LAB_0149ad6c;
            if ((lVar15 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
            goto LAB_0149ad74;
            if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_0149ad70;
            plVar11[uVar7 + 4] = lVar15;
            plVar10 = (long *)FUN_01789ac0(lVar15,0,0);
            if (((ulong)plVar10 & 1) != 0) {
              plVar10 = (long *)thunk_FUN_00d93c64();
              if (plVar10 == (long *)0x0) goto LAB_0149ad6c;
              uVar13 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              uVar16 = FUN_015f5b28(*(undefined8 *)StringLiteral_10926,uVar16,0);
              if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_720);
              }
              plVar10 = (long *)FUN_014def10(uVar13,uVar16,0,0);
            }
            uVar7 = uVar7 + 1;
            unaff_x26 = (long *)StringLiteral_720;
          } while (uVar7 != uVar14);
        }
      }
      uVar16 = Meta_XR_MRUtilityKit_SceneDebugger__<ShowDebugAnchorsDebugger>b__54_0
                         (plVar10,uVar9,lVar6,plVar11);
      uVar7 = FUN_0169f70c(uVar16,0,0);
      if ((uVar7 & 1) == 0) {
        uVar9 = FUN_0114be3c(uVar16,uVar9,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Guid,_Action>_Clear__);
        return uVar9;
      }
      plVar10 = (long *)thunk_FUN_00d93c64();
      puVar1 = PTR_DAT_033ea8a0;
      if (plVar10 == (long *)0x0) goto LAB_0149ad6c;
      uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,5);
      puVar1 = StringLiteral_8873;
      if (plVar10 == (long *)0x0) goto LAB_0149ad6c;
      if ((*(long *)StringLiteral_8873 != 0) &&
         (lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_8873,*(undefined8 *)(*plVar10 + 0x40)),
         lVar15 == 0)) {
LAB_0149ad74:
        uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar9,0);
      }
      uVar14 = *(uint *)(plVar10 + 3);
      if (uVar14 == 0) {
LAB_0149ad70:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar10[4] = *(long *)puVar1;
      if (lVar8 != 0) {
        lVar15 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar15 == 0) goto LAB_0149ad74;
        uVar14 = *(uint *)(plVar10 + 3);
      }
      puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
      if (uVar14 < 2) goto LAB_0149ad70;
      plVar10[5] = lVar8;
      if (*(long *)puVar1 != 0) {
        lVar8 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar8 == 0) goto LAB_0149ad74;
        uVar14 = *(uint *)(plVar10 + 3);
      }
      if (uVar14 < 3) goto LAB_0149ad70;
      plVar10[6] = *(long *)puVar1;
      if (lVar6 != 0) {
        lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar8 == 0) goto LAB_0149ad74;
        uVar14 = *(uint *)(plVar10 + 3);
      }
      if (uVar14 < 4) goto LAB_0149ad70;
      plVar10[7] = lVar6;
      if (*(long *)puVar1 != 0) {
        lVar6 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar6 == 0) goto LAB_0149ad74;
        uVar14 = *(uint *)(plVar10 + 3);
      }
      if (uVar14 < 5) goto LAB_0149ad70;
      plVar10[8] = *(long *)puVar1;
      uVar16 = FUN_01600844(plVar10,0);
      goto LAB_0149a7a4;
    }
    plVar10 = (long *)thunk_FUN_00d93c64();
    if (plVar10 == (long *)0x0) goto LAB_0149ad6c;
    uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    uVar16 = *(undefined8 *)StringLiteral_10926;
    lVar6 = lVar15;
  }
  else {
LAB_0149a768:
    plVar10 = (long *)thunk_FUN_00d93c64();
    puVar1 = System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo;
    if (plVar10 == (long *)0x0) {
LAB_0149ad6c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 0149a788 to 0159a9ff has its CatchHandler @ 0149a788
                       catch() { ... } // from try @ 0149a788 with catch @ 0149a788
                       catch() { ... } // from try @ 0149aab0 with catch @ 0149a788
                       catch() { ... } // from try @ 0149ab88 with catch @ 0149a788
                       catch() { ... } // from try @ 0149ac30 with catch @ 0149a788
                       catch() { ... } // from try @ 0149ac38 with catch @ 0149a788
                       catch() { ... } // from try @ 0149acdc with catch @ 0149a788 */
    uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    uVar16 = *(undefined8 *)puVar1;
  }
  uVar16 = FUN_015f5b28(uVar16,lVar6,0);
LAB_0149a7a4:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x26);
  }
  FUN_014def10(uVar9,uVar16,0,0);
  return 0;
}


