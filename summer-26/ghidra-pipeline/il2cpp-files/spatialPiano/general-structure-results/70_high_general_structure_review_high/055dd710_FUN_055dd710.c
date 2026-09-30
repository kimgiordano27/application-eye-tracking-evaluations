/*
FUNCTION_NAME: FUN_055dd710
ENTRY_POINT: 055dd710
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055deae0) */
/* WARNING: Removing unreachable block (ram,0x055ddf0c) */
/* WARNING: Removing unreachable block (ram,0x055de884) */
/* WARNING: Removing unreachable block (ram,0x055deb74) */
/* WARNING: Removing unreachable block (ram,0x055debac) */

void FUN_055dd710(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 local_68;
  
  if ((DAT_06bbfbcc & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(PTR_DAT_067da580);
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(System_Xml_Schema_XdrBuilder_XdrBeginChildFunction_TypeInfo);
    FUN_02f08768(System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo);
    FUN_02f08768(System_EventHandler<AROcclusionSourceEventArgs>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_TryGetValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__);
    FUN_02f08768(System_Collections_Generic_IEnumerator<InputActionTrace_ActionEventPtr>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>__ctor__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<int>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__);
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_set_Item__);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_BasicNode<TextureEntry>_InsertFirst__);
    FUN_02f08768(UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo);
    FUN_02f08768(PTR_DAT_067cde58);
    FUN_02f08768(
                Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
                );
    FUN_02f08768(PTR_DAT_067cb550);
    FUN_02f08768(PTR_DAT_067cde68);
    FUN_02f08768(Method_UnityEngine_Events_CachedInvokableCall<bool>__ctor__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_Awake__
                );
    FUN_02f08768(PTR_DAT_067cab38);
    FUN_02f08768(Method_Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_Set__);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                );
    FUN_02f08768(PTR_DAT_067d7cb8);
    FUN_02f08768(PTR_DAT_067cbf00);
    FUN_02f08768(UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_TypeInfo);
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(PTR_DAT_067ca7d0);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__);
    FUN_02f08768(
                Method_System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>__ctor__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__);
    DAT_06bbfbcc = 1;
  }
  local_68 = 0;
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (lVar9 = FUN_05546520(*(long *)(param_2 + 0x10),0), lVar9 != 0)) {
    lVar10 = *(long *)(param_2 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      puVar13 = (undefined8 *)PTR_DAT_067cbf00;
      if (lVar10 == 0) goto LAB_055deb4c;
    }
    else {
      if (lVar10 == 0) goto LAB_055deb4c;
      puVar13 = (undefined8 *)(lVar10 + 0xa0);
    }
    uVar21 = *puVar13;
    plVar22 = *(long **)(param_1 + 0x10);
    uVar11 = FUN_05546520(lVar10,0);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x1c8))
                (plVar22,uVar21,param_3,uVar11,*(undefined8 *)(*plVar22 + 0x1d0));
      if (*(char *)(param_1 + 0x39) != '\0') {
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_055deb4c;
        lVar9 = *(long *)(param_1 + 0x10);
        uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x90);
        local_68 = *(undefined8 *)(param_2 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar21 = FUN_050656a0(0);
        uVar21 = FUN_050d409c(&local_68,uVar21,0);
        uVar11 = FUN_04f65260(uVar11,uVar21,0);
        puVar5 = 
        Method_System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>__ctor__
        ;
        puVar4 = UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo;
        if (lVar9 == 0) goto LAB_055deb4c;
        FUN_057e9228(lVar9,*(undefined8 *)
                            Method_System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>__ctor__
                     ,*(undefined8 *)PTR_DAT_067cb550,
                     *(undefined8 *)UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo,
                     uVar11,0);
        plVar22 = *(long **)(param_1 + 0x40);
        if (plVar22 == (long *)0x0) goto LAB_055deb4c;
        lVar9 = *(long *)(param_1 + 0x10);
        plVar22 = (long *)(**(code **)(*plVar22 + 0x308))
                                    (plVar22,param_2,*(undefined8 *)(*plVar22 + 0x310));
        if ((plVar22 == (long *)0x0) ||
           (uVar11 = (**(code **)(*plVar22 + 0x168))(plVar22,*(undefined8 *)(*plVar22 + 0x170)),
           lVar9 == 0)) goto LAB_055deb4c;
        FUN_057e9228(lVar9,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__,
                     *(undefined8 *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar11,
                     0);
        iVar8 = FUN_05588098(param_2,0);
        if (iVar8 == 4) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_055deb4c;
          FUN_057e9228(*(long *)(param_1 + 0x10),*(undefined8 *)puVar5,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_UIR_BasicNode<TextureEntry>_InsertFirst__,
                       *(undefined8 *)puVar4,
                       *(undefined8 *)Method_UnityEngine_Events_CachedInvokableCall<bool>__ctor__,0)
          ;
        }
        iVar8 = FUN_05588098(param_2,0);
        if (iVar8 == 0x10) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_055deb4c;
          FUN_057e9228(*(long *)(param_1 + 0x10),*(undefined8 *)puVar5,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_UIR_BasicNode<TextureEntry>_InsertFirst__,
                       *(undefined8 *)puVar4,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_Set__
                       ,0);
        }
        uVar12 = FUN_055dc5d0(param_2);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_055deb4c;
          FUN_057e9228(*(long *)(param_1 + 0x10),*(undefined8 *)puVar5,
                       *(undefined8 *)Method_UnityEngine_UIElements_BaseField<int>__ctor__,
                       *(undefined8 *)puVar4,*(undefined8 *)PTR_DAT_067cab38,0);
        }
      }
      if ((*(long *)(param_2 + 0x10) != 0) &&
         (plVar22 = *(long **)(*(long *)(param_2 + 0x10) + 0x40), plVar22 != (long *)0x0)) {
        plVar22 = (long *)(**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0))
        ;
        puVar7 = System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo;
        puVar6 = PTR_DAT_067da580;
        puVar5 = PTR_DAT_067cbf00;
        puVar4 = PTR_DAT_067c91b8;
joined_r0x055ddb68:
        do {
          do {
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar10 = *plVar22;
            lVar9 = *(long *)puVar4;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar9) {
                  puVar13 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_055ddbdc;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(plVar22,lVar9,0);
LAB_055ddbdc:
            uVar12 = (*(code *)*puVar13)(plVar22,puVar13[1]);
            puVar3 = PTR_DAT_067c91b0;
            if ((uVar12 & 1) == 0) {
              plVar22 = (long *)thunk_FUN_02f45174(plVar22,*(undefined8 *)PTR_DAT_067c91b0);
              if (plVar22 == (long *)0x0) goto LAB_055ddf00;
              lVar9 = *plVar22;
              uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar12 == 0) goto LAB_055dded8;
              piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_055ddec0;
            }
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar10 = *plVar22;
            lVar9 = *(long *)puVar4;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar9) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_055ddc44;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(plVar22,lVar9,1);
LAB_055ddc44:
            plVar14 = (long *)(*(code *)*puVar13)(plVar22,puVar13[1]);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar14);
            }
            if (*(int *)((long)plVar14 + 0x84) == 2) {
              lVar9 = FUN_0558827c(param_2,plVar14,0);
              lVar10 = FUN_0556053c(plVar14,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar15 = *(long *)puVar6;
              plVar17 = (long *)puVar5;
              if (*(int *)(lVar10 + 0x10) != 0) {
                plVar17 = plVar14 + 0x18;
              }
              lVar10 = *plVar17;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar15 = *(long *)puVar6;
              }
              if (lVar9 != **(long **)(lVar15 + 0xb8)) {
                if (*(char *)((long)plVar14 + 0x91) != '\0') {
                  if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo +
                              0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar12 = FUN_056037d4(lVar9,0);
                  if ((uVar12 & 1) != 0) goto LAB_055ddd78;
                }
                FUN_055cfb48(plVar14[7]);
                lVar15 = *(long *)(param_1 + 0x10);
                uVar11 = FUN_0555e9b8(plVar14,0);
                uVar21 = FUN_0556053c(plVar14,0);
                uVar16 = FUN_0555ecb4(plVar14,lVar9,0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                FUN_057e9228(lVar15,lVar10,uVar11,uVar21,uVar16,0);
              }
            }
LAB_055ddd78:
          } while ((*(char *)(param_1 + 0x39) == '\0') || (*(int *)((long)plVar14 + 0x84) != 4));
          lVar9 = FUN_0558827c(param_2,plVar14,0);
          lVar10 = *(long *)puVar6;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar10 = *(long *)puVar6;
          }
        } while (lVar9 == **(long **)(lVar10 + 0xb8));
        if (*(char *)((long)plVar14 + 0x91) != '\0') {
          if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) == 0)
          {
            thunk_FUN_02f6670c();
          }
          uVar12 = FUN_056037d4(lVar9,0);
          if ((uVar12 & 1) != 0) goto joined_r0x055ddb68;
        }
        FUN_055cfb48(plVar14[7]);
        lVar10 = *(long *)(param_1 + 0x10);
        uVar11 = FUN_0555e9b8(plVar14,0);
        uVar11 = FUN_04f65260(*(undefined8 *)
                               System_Collections_Generic_IEnumerator<InputActionTrace_ActionEventPtr>_TypeInfo
                              ,uVar11,0);
        uVar21 = FUN_0555ecb4(plVar14,lVar9,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_057e9228(lVar10,*(undefined8 *)
                             Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__,uVar11
                     ,*(undefined8 *)
                       UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar21
                     ,0);
        goto joined_r0x055ddb68;
      }
    }
  }
  goto LAB_055deb4c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar20 = piVar20 + 4;
    if (uVar12 == 0) break;
LAB_055ddec0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055ddef4;
    }
  }
LAB_055dded8:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)puVar3,0);
LAB_055ddef4:
  (*(code *)*puVar13)(plVar22,puVar13[1]);
LAB_055ddf00:
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (plVar22 = *(long **)(*(long *)(param_2 + 0x10) + 0x40), plVar22 != (long *)0x0)) {
    plVar22 = (long *)(**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
    puVar7 = System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo;
    puVar6 = PTR_DAT_067da580;
    puVar5 = PTR_DAT_067cbf00;
    puVar4 = PTR_DAT_067c91b8;
joined_r0x055ddf40:
    do {
      do {
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar10 = *plVar22;
        lVar9 = *(long *)puVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_055ddfb4;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar22,lVar9,0);
LAB_055ddfb4:
        uVar12 = (*(code *)*puVar13)(plVar22,puVar13[1]);
        puVar3 = PTR_DAT_067c91b0;
        if ((uVar12 & 1) == 0) {
          plVar22 = (long *)thunk_FUN_02f45174(plVar22,*(undefined8 *)PTR_DAT_067c91b0);
          uVar11 = 0;
          if (plVar22 == (long *)0x0) goto LAB_055de878;
          lVar9 = *plVar22;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 == 0) goto LAB_055de850;
          piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_055de838;
        }
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar10 = *plVar22;
        lVar9 = *(long *)puVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_055de01c;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar22,lVar9,1);
LAB_055de01c:
        plVar14 = (long *)(*(code *)*puVar13)(plVar22,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar14);
        }
      } while (*(int *)((long)plVar14 + 0x84) == 4);
      plVar17 = (long *)FUN_0558827c(param_2,plVar14,0);
      lVar9 = FUN_0556053c(plVar14,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *(long *)puVar6;
      plVar18 = (long *)puVar5;
      if (*(int *)(lVar9 + 0x10) != 0) {
        plVar18 = plVar14 + 0x18;
      }
      lVar9 = *plVar18;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar10 = *(long *)puVar6;
      }
      if (plVar17 == (long *)**(long **)(lVar10 + 0xb8)) {
LAB_055de0f4:
        iVar8 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
        if (iVar8 == 3) {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_057e9228(*(long *)(param_1 + 0x10),
                       *(undefined8 *)
                        Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_set_Item__,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>__ctor__,
                       *(undefined8 *)PTR_DAT_067cde58,*(undefined8 *)PTR_DAT_067cab38,0);
        }
      }
      else if (*(char *)((long)plVar14 + 0x91) != '\0') {
        if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar12 = FUN_056037d4(plVar17,0);
        if ((uVar12 & 1) != 0) goto LAB_055de0f4;
      }
      lVar10 = *(long *)puVar6;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar10 = *(long *)puVar6;
      }
    } while (plVar17 == (long *)**(long **)(lVar10 + 0xb8));
    if (*(char *)((long)plVar14 + 0x91) != '\0') {
      if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar12 = FUN_056037d4(plVar17,0);
      if ((uVar12 & 1) != 0) goto joined_r0x055ddf40;
    }
    if (*(int *)((long)plVar14 + 0x84) != 2) {
      if (*(int *)((long)plVar14 + 0x84) == 3) {
        bVar2 = true;
joined_r0x055de28c:
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        uVar12 = FUN_05562120(plVar14,0);
        if (((uVar12 & 1) == 0) || (uVar12 = FUN_05562194(plVar14,plVar17,0), (uVar12 & 1) == 0)) {
LAB_055de248:
          plVar18 = *(long **)(param_1 + 0x10);
          uVar11 = FUN_0555e9b8(plVar14,0);
          uVar21 = FUN_0556053c(plVar14,0);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*plVar18 + 0x1c8))
                    (plVar18,lVar9,uVar11,uVar21,*(undefined8 *)(*plVar18 + 0x1d0));
          bVar2 = false;
          goto joined_r0x055de28c;
        }
        uVar11 = *(undefined8 *)
                  Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_TryGetValue__;
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar18 = (long *)FUN_050e4454(uVar11,0);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar11 = thunk_FUN_02f1863c(plVar17,0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(uVar11,uVar11);
        }
        uVar12 = (**(code **)(*plVar18 + 0x298))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x2a0));
        if ((uVar12 & 1) != 0) goto LAB_055de248;
        bVar2 = true;
      }
      plVar18 = (long *)thunk_FUN_02f1863c(plVar17,0);
      uVar12 = FUN_05562120(plVar14,0);
      if ((uVar12 & 1) == 0) {
        lVar9 = *(long *)(PTR_DAT_067c9338 + 0x88);
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar11 = FUN_050e4454(lVar9 + 0x20,0);
        uVar12 = FUN_050ed374(plVar18,uVar11,0);
        if ((uVar12 & 1) == 0) {
          lVar9 = *(long *)(PTR_DAT_067c9338 + 0x90);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar11 = FUN_050e4454(lVar9 + 0x20,0);
          uVar12 = FUN_050ed374(plVar18,uVar11,0);
          if ((uVar12 & 1) != 0) goto LAB_055de3e0;
        }
        else {
LAB_055de3e0:
          uVar12 = FUN_055dd040(plVar17);
          if ((uVar12 & 1) != 0) {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_057e9228(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_067d7cb8,
                         *(undefined8 *)
                          UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_TypeInfo,
                         *(undefined8 *)
                          Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__,
                         *(undefined8 *)
                          Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
                         ,0);
          }
        }
        plVar18 = *(long **)(param_1 + 0x10);
        uVar11 = FUN_0555ecb4(plVar14,plVar17,0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(uVar11,uVar11);
        }
        (**(code **)(*plVar18 + 0x278))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x280));
      }
      else {
        uVar12 = FUN_05562194(plVar14,plVar17,0);
        if ((uVar12 & 1) == 0) {
          lVar9 = *(long *)(PTR_DAT_067c9338 + 0xe0);
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02f6670c(lVar9);
          }
          uVar11 = FUN_050e4454(lVar9 + 0x20,0);
          uVar12 = FUN_050ed374(plVar18,uVar11,0);
          if ((uVar12 & 1) == 0) {
            uVar11 = *(undefined8 *)System_EventHandler<AROcclusionSourceEventArgs>_TypeInfo;
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar11 = FUN_050e4454(uVar11,0);
            uVar12 = FUN_050ed374(plVar18,uVar11,0);
            if ((uVar12 & 1) != 0) goto LAB_055de544;
            lVar9 = *(long *)(PTR_DAT_067c9338 + 0x88);
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar11 = FUN_050e4454(lVar9 + 0x20,0);
            uVar12 = FUN_050ed374(plVar18,uVar11,0);
            if ((uVar12 & 1) != 0) goto LAB_055de544;
            if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02f6670c();
            }
            uVar12 = FUN_0560327c(plVar18,0);
            if ((uVar12 & 1) != 0) goto LAB_055de544;
            bVar1 = *(byte *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)(PTR_DAT_067c9338 + 0xe0))) {
              uVar11 = FUN_055ce110(plVar18);
              uVar11 = FUN_04f65260(*(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_Awake__
                                    ,uVar11,0);
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_057e9228(*(long *)(param_1 + 0x10),
                           *(undefined8 *)
                            Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>_set_Item__,
                           *(undefined8 *)PTR_DAT_067ca7d0,*(undefined8 *)PTR_DAT_067cde58,uVar11,0)
              ;
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_057e91cc(*(long *)(param_1 + 0x10),
                           *(undefined8 *)
                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                           ,*(undefined8 *)PTR_DAT_067cd6c0,0);
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_057e9228(*(long *)(param_1 + 0x10),
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,
                           *(undefined8 *)
                            UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           *(undefined8 *)PTR_DAT_067cde68,0);
            }
          }
          else {
LAB_055de544:
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar9 = *(long *)(param_1 + 0x10);
            uVar11 = (**(code **)(*plVar18 + 0x2d8))(plVar18,*(undefined8 *)(*plVar18 + 0x2e0));
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_057e9228(lVar9,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar11,0);
          }
          if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) == 0)
          {
            thunk_FUN_02f6670c();
          }
          uVar12 = FUN_0560327c(plVar18,0);
          plVar18 = *(long **)(param_1 + 0x10);
          if ((uVar12 & 1) == 0) {
            uVar11 = FUN_0555ecb4(plVar14,plVar17,0);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8(uVar11,uVar11);
            }
            (**(code **)(*plVar18 + 0x278))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x280));
          }
          else {
            FUN_05562ad0(plVar14,plVar17,plVar18,0,0);
          }
        }
        else {
          if (bVar2) {
            uVar11 = thunk_FUN_02f1863c(plVar17,0);
            lVar9 = plVar14[7];
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar12 = FUN_050edfb8(uVar11,lVar9,0);
            if ((uVar12 & 1) != 0) {
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar11 = (**(code **)(*plVar18 + 0x2c8))(plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
              uVar11 = FUN_05568060(uVar11,0);
              uVar21 = thunk_FUN_02f6ef30(Method_UnityEngine_Events_CachedInvokableCall<int>__ctor__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02f0888c(uVar11,uVar21);
            }
            uVar11 = FUN_0555e9b8(plVar14,0);
            lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__
                                      );
            FUN_0583b4c4(lVar9,uVar11,0);
            uVar11 = FUN_0556053c(plVar14,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            *(undefined8 *)(lVar9 + 0x28) = uVar11;
            FUN_05562ad0(plVar14,plVar17,*(undefined8 *)(param_1 + 0x10),lVar9,0);
            goto joined_r0x055ddf40;
          }
          lVar9 = plVar14[7];
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar12 = FUN_050edfb8(plVar18,lVar9,0);
          if ((uVar12 & 1) != 0) {
            lVar9 = *(long *)(param_1 + 0x10);
            if (*(int *)(*(long *)System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02f6670c();
            }
            uVar11 = FUN_056039f0(plVar18,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_057e9228(lVar9,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar11,0);
          }
          FUN_05562ad0(plVar14,plVar17,*(undefined8 *)(param_1 + 0x10),0,0);
        }
      }
      if (*(int *)((long)plVar14 + 0x84) == 3) {
        bVar2 = true;
      }
      if (!bVar2) {
        plVar14 = *(long **)(param_1 + 0x10);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      }
    }
    goto joined_r0x055ddf40;
  }
  goto LAB_055deb4c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar20 = piVar20 + 4;
    if (uVar12 == 0) break;
LAB_055de838:
    if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055de86c;
    }
  }
LAB_055de850:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)puVar3,0);
LAB_055de86c:
  uVar11 = (*(code *)*puVar13)(plVar22,puVar13[1]);
LAB_055de878:
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar22 = (long *)FUN_055df720(uVar11,param_2);
    if (plVar22 != (long *)0x0) {
      plVar22 = (long *)(**(code **)(*plVar22 + 0x388))(plVar22,*(undefined8 *)(*plVar22 + 0x390));
      puVar5 = System_Xml_Schema_XdrBuilder_XdrBeginChildFunction_TypeInfo;
      puVar4 = PTR_DAT_067c91b8;
      do {
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar10 = *plVar22;
        lVar9 = *(long *)puVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_055de924;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar22,lVar9,0);
LAB_055de924:
        uVar12 = (*(code *)*puVar13)(plVar22,puVar13[1]);
        if ((uVar12 & 1) == 0) {
          plVar22 = (long *)thunk_FUN_02f45174(plVar22,*(undefined8 *)puVar3);
          if (plVar22 == (long *)0x0) goto LAB_055deae4;
          lVar9 = *plVar22;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 == 0) goto LAB_055deaac;
          piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_055dea94;
        }
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar10 = *plVar22;
        lVar9 = *(long *)puVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_055de98c;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar22,lVar9,1);
LAB_055de98c:
        plVar14 = (long *)(*(code *)*puVar13)(plVar22,puVar13[1]);
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar14);
          }
        }
        lVar9 = FUN_0558970c(param_2,plVar14,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar12 = 0;
          uVar19 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          do {
            if (uVar19 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar11 = *(undefined8 *)(lVar9 + 0x20 + uVar12 * 8);
            lVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar21 = FUN_0554de78(lVar10,0);
            FUN_055dd710(param_1,uVar11,uVar21);
            uVar19 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
      } while( true );
    }
    goto LAB_055deb4c;
  }
  goto LAB_055deae4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar20 = piVar20 + 4;
    if (uVar12 == 0) break;
LAB_055dea94:
    if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055deac8;
    }
  }
LAB_055deaac:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)puVar3,0);
LAB_055deac8:
  (*(code *)*puVar13)(plVar22,puVar13[1]);
LAB_055deae4:
  plVar22 = *(long **)(param_1 + 0x10);
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x1d8))(plVar22,*(undefined8 *)(*plVar22 + 0x1e0));
    return;
  }
LAB_055deb4c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


