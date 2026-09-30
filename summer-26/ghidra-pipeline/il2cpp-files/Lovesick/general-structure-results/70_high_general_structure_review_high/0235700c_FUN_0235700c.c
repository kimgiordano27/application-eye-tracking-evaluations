/*
FUNCTION_NAME: FUN_0235700c
ENTRY_POINT: 0235700c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x02357714) */
/* WARNING: Removing unreachable block (ram,0x02357458) */

long FUN_0235700c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x21;
  int iVar17;
  long *unaff_x29;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  uVar7 = FUN_010d7a34();
  if ((((uVar7 & 1) == 0) || (iVar5 = FUN_010d8df8(), iVar5 < 2)) ||
     (uVar7 = FUN_010d8654(), puVar3 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo,
     (uVar7 & 1) == 0)) {
    return 0;
  }
  if (unaff_x19 != 0) {
    uVar8 = FUN_0230bd48();
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar3 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo;
    if (lVar9 != 0) {
      FUN_01320f6c(lVar9,uVar8,*(undefined8 *)StringLiteral_9754);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
      in_stack_000000a0 = lVar9;
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar3 = Method_System_Collections_Generic_List_Enumerator<ManifestParameter>_MoveNext__;
      if (lVar9 != 0) {
        FUN_01320f6c(lVar9,uVar8,
                     *(undefined8 *)System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
        in_stack_00000098 = lVar9;
        uVar8 = FUN_0230fbe8();
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar1 = TMPro_TMP_ColorGradient_TypeInfo;
        if (lVar9 != 0) {
          FUN_01320f6c(lVar9,uVar8,*(undefined8 *)TMPro_TMP_ColorGradient_TypeInfo);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x40);
          in_stack_00000090 = lVar9;
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar9 != 0) {
            FUN_01320f6c(lVar9,uVar8,*(undefined8 *)puVar1);
            in_stack_00000088 = lVar9;
            iVar5 = FUN_0230bcf4();
            lVar10 = FUN_0230c72c();
            puVar3 = UnityEngine_UIElements_EventCallbackListPool_TypeInfo;
            if (lVar10 != 0) {
              uVar8 = FUN_02665444(lVar10,0);
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              puVar3 = StringLiteral_541;
              if (lVar10 != 0) {
                FUN_01320f6c(lVar10,uVar8,
                             *(undefined8 *)UnityEngine_Events_UnityAction<Note>_TypeInfo);
                in_stack_00000080 = lVar10;
                FUN_0268fd10();
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                puVar1 = PTR_DAT_033f09a8;
                if (lVar11 != 0) {
                  FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033f09a8);
                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  puVar3 = Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_get_Item__;
                  if (lVar12 != 0) {
                    FUN_01320e50(lVar12,*(undefined8 *)puVar1);
                    lVar15 = *unaff_x29;
                    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
                    if (uVar7 != 0) {
                      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                          puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_0235726c;
                        }
                        uVar7 = uVar7 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar13 = (undefined8 *)FUN_00d59724();
LAB_0235726c:
                    puVar3 = System_Action<GameObject,_AxisEventData>_TypeInfo;
                    plVar14 = (long *)(*(code *)*puVar13)();
                    puVar4 = StringLiteral_4688;
                    puVar1 = 
                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
                    iVar17 = iVar5;
                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    do {
                      lVar15 = *plVar14;
                      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
                      if (uVar7 != 0) {
                        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                            puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                            goto LAB_023572f0;
                          }
                          uVar7 = uVar7 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar13 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,0);
LAB_023572f0:
                      uVar7 = (*(code *)*puVar13)(plVar14,puVar13[1]);
                      puVar2 = PTR_DAT_033f09a8;
                      if ((uVar7 & 1) == 0) {
                        if (plVar14 == (long *)0x0) goto LAB_0235744c;
                        lVar15 = *plVar14;
                        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
                        if (uVar7 == 0) goto LAB_02357424;
                        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        goto LAB_0235740c;
                      }
                      lVar15 = *plVar14;
                      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
                      if (uVar7 != 0) {
                        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                            puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                            goto LAB_0235734c;
                          }
                          uVar7 = uVar7 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar13 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0);
LAB_0235734c:
                      lVar15 = (*(code *)*puVar13)(plVar14,puVar13[1]);
                      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar7 = FUN_02681b9c(lVar15);
                      if ((uVar7 & 1) != 0) {
                        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        iVar6 = FUN_0230bcf4(lVar15,0);
                        if (iVar6 + iVar17 < 0xffff) {
                          iVar6 = FUN_0230bcf4(lVar15,0);
                          FUN_00ca2630(lVar11,lVar15,*(undefined8 *)puVar3);
                          iVar17 = iVar6 + iVar17;
                        }
                        else {
                          FUN_00ca2630(lVar12,lVar15,*(undefined8 *)puVar3);
                        }
                      }
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto UnityEngine_Rendering_Universal_Internal_DeferredLights__set_RenderHeight;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar16 = piVar16 + 4;
    if (uVar7 == 0) break;
LAB_0235740c:
    if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10310) {
      puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_02357440;
    }
  }
LAB_02357424:
  puVar13 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_10310,0);
LAB_02357440:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_0235744c:
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                               Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
  puVar4 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_UnlockForChanges__
  ;
  puVar1 = System_Collections_Generic_List<BezierControlPoint>_TypeInfo;
  if (lVar15 != 0) {
    FUN_01320e50(lVar15,*(undefined8 *)
                         Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__);
    in_stack_00000078 = lVar15;
    FUN_0235785c(lVar11,iVar5,&stack0x000000a0,&stack0x00000098,&stack0x00000078,&stack0x00000090,
                 &stack0x00000088,&stack0x00000080);
    FUN_02310a38();
    FUN_0230f6a8();
    FUN_0230fc64();
    FUN_01325140(lVar9,*(undefined8 *)puVar4);
    FUN_0230ffc8();
    lVar9 = FUN_0230c72c();
    uVar8 = FUN_01325140(lVar10,*(undefined8 *)puVar1);
    puVar1 = StringLiteral_14374;
    if (lVar9 != 0) {
      FUN_02666084(lVar9,uVar8,0);
      FUN_023135a0();
      FUN_02313b8c();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_023353bc();
      FUN_02372284();
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_541);
      if (lVar9 != 0) {
        FUN_01320e50(lVar9,*(undefined8 *)puVar2);
        FUN_00ca2630(lVar9);
        if (*(int *)(lVar12 + 0x18) < 2) {
          if (*(int *)(lVar12 + 0x18) == 1) {
            FUN_0132138c(lVar12,0,&stack0x000000a8,
                         *(undefined8 *)
                          System_Collections_Generic_IEnumerable<CustomAttributeData>_TypeInfo);
            FUN_00ca2630(lVar9,in_stack_000000a8,*(undefined8 *)puVar3);
          }
        }
        else {
          lVar10 = FUN_02356954(lVar12);
          puVar2 = StringLiteral_12271;
          puVar4 = Method_System_Data_DataTable_SerializeTableSchema__;
          puVar1 = System_Xml_Linq_XComment_TypeInfo;
          if (lVar10 == 0)
          goto UnityEngine_Rendering_Universal_Internal_DeferredLights__set_RenderHeight;
          FUN_01323390(lVar10,&stack0x00000058,
                       *(undefined8 *)MetaXRAcousticMap_<LoadMapAsync>d__34_TypeInfo);
          while (uVar7 = FUN_012b894c(&stack0x00000058,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
            uVar8 = FUN_00ca2820(&stack0x00000058,*(undefined8 *)puVar2);
            FUN_02372284(uVar8,&stack0x00000074,0);
            FUN_00ca2630(lVar9,uVar8,*(undefined8 *)puVar3);
          }
          FUN_012b8948(&stack0x00000058,*(undefined8 *)puVar1);
        }
        return lVar9;
      }
    }
  }
UnityEngine_Rendering_Universal_Internal_DeferredLights__set_RenderHeight:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


