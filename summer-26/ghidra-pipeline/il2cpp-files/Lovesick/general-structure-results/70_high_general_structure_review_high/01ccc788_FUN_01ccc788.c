/*
FUNCTION_NAME: FUN_01ccc788
ENTRY_POINT: 01ccc788
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01ccc788(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  int local_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long *plStack_78;
  undefined1 local_70 [16];
  
  puVar3 = Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__;
  if ((DAT_0377f02b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4244);
    thunk_FUN_00d48444(Method_BarCustomer_ObjectPlaced__);
    thunk_FUN_00d48444(PTR_DAT_033f3330);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnChangeEvent>__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_<RegisterConfig>b__22_0__
                      );
    thunk_FUN_00d48444(Method_System_TermInfoReader__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_AddCallback__
                      );
    thunk_FUN_00d48444(StringLiteral_761);
    thunk_FUN_00d48444(StringLiteral_5701);
    thunk_FUN_00d48444(System_Xml_ByteStack_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__
                      );
    DAT_0377f02b = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar10 != 0) {
    FUN_01320e50(lVar10,*(undefined8 *)System_Xml_ByteStack_TypeInfo);
    if (param_4 == (long *)0x0) {
      lVar20 = *(long *)StringLiteral_4244;
      lVar14 = *(long *)(lVar20 + 0x38);
      if (lVar14 == 0) {
        FUN_00d59478(lVar20);
        lVar14 = *(long *)(lVar20 + 0x38);
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c();
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c();
      }
      param_4 = (long *)**(undefined8 **)(lVar14 + 0xb8);
      if (param_4 == (long *)0x0) goto LAB_01cccd04;
    }
    lVar14 = *param_4;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)Method_BarCustomer_ObjectPlaced__) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01ccc934;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(param_4,*(long *)Method_BarCustomer_ObjectPlaced__,0);
LAB_01ccc934:
    plVar12 = (long *)(*(code *)*puVar11)(param_4,puVar11[1]);
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar12 != (long *)0x0) {
      lVar14 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
          {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01ccc99c;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_00d59724(plVar12,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                             ,0);
LAB_01ccc99c:
      uVar15 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if (param_1 != (long *)0x0) {
        lVar14 = *param_1;
        uVar15 = uVar15 & 0xffffffff;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnChangeEvent>__) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01ccca04;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_00d59724(param_1,*(long *)
                                        Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnChangeEvent>__
                               ,0);
LAB_01ccca04:
        iVar5 = (*(code *)*puVar11)(param_1,puVar11[1]);
        puVar4 = Method_System_TermInfoReader__ctor__;
        puVar2 = 
        Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_AddCallback__
        ;
        puVar1 = PTR_DAT_033f3330;
        if (0 < iVar5) {
          iVar19 = 0;
          iVar18 = 0;
          iVar21 = 0;
          do {
            lVar14 = *param_1;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)
                     Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_<RegisterConfig>b__22_0__
                   ) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_01ccca9c;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_00d59724(param_1,*(long *)
                                            Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_<RegisterConfig>b__22_0__
                                   ,0);
LAB_01ccca9c:
            plVar13 = (long *)(*(code *)*puVar11)(param_1,iVar21,puVar11[1]);
            uVar22 = 0;
            while ((uVar15 & 1) != 0) {
              lVar20 = *plVar12;
              lVar14 = *(long *)puVar1;
              uVar15 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar14) {
                    puVar11 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_01cccb04;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar12,lVar14,0);
LAB_01cccb04:
              auVar23 = (*(code *)*puVar11)(plVar12,puVar11[1]);
              local_70 = auVar23;
              iVar6 = FUN_00c3da60(local_70,*(undefined8 *)puVar4);
              if (iVar6 != iVar21) {
                uVar15 = 1;
                if (plVar13 != (long *)0x0) goto LAB_01cccc0c;
                goto LAB_01cccd04;
              }
              lVar20 = *plVar12;
              lVar14 = *(long *)puVar1;
              uVar15 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar14) {
                    puVar11 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_01cccb78;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar12,lVar14,0);
LAB_01cccb78:
              auVar23 = (*(code *)*puVar11)(plVar12,puVar11[1]);
              local_70 = auVar23;
              uVar22 = FUN_00c3d958(local_70,*(undefined8 *)puVar2);
              lVar14 = *plVar12;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                    puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_01cccbe8;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_01cccbe8:
              uVar15 = (*(code *)*puVar11)(plVar12,puVar11[1]);
            }
            uVar15 = 0;
            if (plVar13 == (long *)0x0) goto LAB_01cccd04;
LAB_01cccc0c:
            iVar6 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
            iVar7 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
            iVar8 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
            iVar9 = (**(code **)(*plVar13 + 0x198))(plVar13,*(undefined8 *)(*plVar13 + 0x1a0));
            local_80 = (**(code **)(*plVar13 + 0x1d8))
                                 (plVar13,iVar21,uVar22,param_3,param_2,
                                  *(undefined8 *)(*plVar13 + 0x1e0));
            uStack_84 = 0;
            local_90 = iVar21;
            iStack_8c = iVar19;
            local_88 = iVar18;
            plStack_78 = plVar13;
            FUN_00c3db64(lVar10,&local_90,*(undefined8 *)StringLiteral_761);
            iVar21 = iVar21 + 1;
            iVar19 = (iVar6 + iVar19) - iVar7;
            iVar18 = (iVar8 + iVar18) - iVar9;
          } while (iVar21 != iVar5);
        }
        FUN_01325140(lVar10,*(undefined8 *)StringLiteral_5701);
        return;
      }
    }
  }
LAB_01cccd04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


