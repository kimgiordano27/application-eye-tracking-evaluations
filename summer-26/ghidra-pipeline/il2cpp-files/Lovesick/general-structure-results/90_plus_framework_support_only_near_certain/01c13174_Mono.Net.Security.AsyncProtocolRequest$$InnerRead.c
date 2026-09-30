/*
FUNCTION_NAME: Mono.Net.Security.AsyncProtocolRequest$$InnerRead
ENTRY_POINT: 01c13174
PROGRAM: Lovesick-libil2cpp.so
SCORE: 212
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_3
*/


long Mono_Net_Security_AsyncProtocolRequest__InnerRead(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  byte unaff_w20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  int iVar16;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  long *plVar17;
  long lVar18;
  long *unaff_x28;
  long unaff_x29;
  uint in_stack_00000000;
  long *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  byte in_stack_00000030;
  int in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  
  uVar10 = thunk_FUN_00d48444();
  uVar11 = thunk_FUN_00d43524(uVar10,*(undefined8 *)*unaff_x25);
  if ((uVar11 & 1) == 0) {
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = *unaff_x25;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&PTR_PTR_03274860,0);
  }
  *(undefined8 *)(&stack0x00000038 + (long)in_stack_00000040 * 8) = *unaff_x25;
  in_stack_00000040 = in_stack_00000040 + 1;
  __cxa_end_catch();
  in_stack_00000040 = in_stack_00000040 + -1;
  uVar10 = *(undefined8 *)(&stack0x00000038 + (long)in_stack_00000040 * 8);
  if (*(int *)(*(long *)PTR_DAT_033ee8c0 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01c6c014(0);
  lVar18 = 0;
  uVar4 = ~uVar4 & 1;
  do {
    if ((uVar4 & in_stack_00000000) == 0) {
      if (lVar18 != 0) goto LAB_01c1306c;
    }
    else {
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_0178a8c4(unaff_x26,0,0);
      if ((uVar11 & 1) == 0) {
        if (lVar18 == 0) goto LAB_01c13690;
      }
      else {
        lVar18 = FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
        if (lVar18 == 0) goto LAB_01c13b1c;
        if ((unaff_x19 != (long *)0x0) && (lVar7 = thunk_FUN_00d6225c(), lVar7 == 0)) {
LAB_01c138b4:
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_01c1389c;
        *(long **)(lVar18 + 0x20) = unaff_x19;
        lVar7 = FUN_0179c560(unaff_x26,lVar18,0);
        if (lVar7 == 0) {
LAB_01c13690:
          if (unaff_x29 != 0) {
            uVar5 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
            if (0 < (int)*(ulong *)(unaff_x29 + 0x18)) {
              uVar11 = 0;
              uVar14 = *(ulong *)(unaff_x29 + 0x18) & 0xffffffff;
              do {
                if (uVar11 != 0) {
                  uVar5 = FUN_015f5b28(uVar5,*unaff_x21,0);
                  uVar14 = (ulong)*(uint *)(unaff_x29 + 0x18);
                }
                if (uVar14 <= uVar11) {
LAB_01c1389c:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar6 = *(undefined8 *)(unaff_x29 + 0x20 + uVar11 * 8);
                if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar6 = FUN_01c4b4e0(uVar6,0);
                uVar5 = FUN_015f5b28(uVar5,uVar6,0);
                uVar14 = (ulong)*(uint *)(unaff_x29 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((long)uVar11 < (long)(int)*(uint *)(unaff_x29 + 0x18));
            }
            uVar6 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
            uVar6 = FUN_00da4fb8(uVar6,5);
            FUN_00ac2be8();
            puVar2 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_SetException__;
            uVar12 = thunk_FUN_00d48444(
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_SetException__
                                       );
            FUN_00acb0b4(uVar6,uVar12);
            uVar12 = thunk_FUN_00d48444(puVar2);
            FUN_00acb320(uVar6,0,uVar12);
            thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
            FUN_00acb0a4();
            uVar12 = FUN_01c4b4e0(unaff_x28,0);
            FUN_00ac2be8(uVar6);
            FUN_00acb0b4(uVar6,uVar12);
            FUN_00acb320(uVar6,1,uVar12);
            FUN_00ac2be8(uVar6);
            puVar2 = OVRPlugin_OVRP_1_126_0_TypeInfo;
            uVar12 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_126_0_TypeInfo);
            FUN_00acb0b4(uVar6,uVar12);
            uVar12 = thunk_FUN_00d48444(puVar2);
            FUN_00acb320(uVar6,2,uVar12);
            FUN_00ac2be8(uVar6);
            FUN_00acb0b4(uVar6,uVar5);
            FUN_00acb320(uVar6,3,uVar5);
            FUN_00ac2be8(uVar6);
            puVar2 = Method_Oculus_Platform_Models_DeserializableList<User>_get_NextUrl__;
            uVar5 = thunk_FUN_00d48444(
                                      Method_Oculus_Platform_Models_DeserializableList<User>_get_NextUrl__
                                      );
            FUN_00acb0b4(uVar6,uVar5);
            uVar5 = thunk_FUN_00d48444(puVar2);
            FUN_00acb320(uVar6,4,uVar5);
            uVar5 = FUN_01600844(uVar6,0);
            thunk_FUN_00d48444(StringLiteral_302);
            FUN_00acb0a4();
            FUN_026610e4(uVar5,0);
            uVar5 = thunk_FUN_00d48444(
                                      Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,uVar5);
          }
          goto LAB_01c13b1c;
        }
        uVar10 = *(undefined8 *)StringLiteral_3085;
        lVar18 = thunk_FUN_00d6225c(lVar7,uVar10);
        if (lVar18 == 0) goto LAB_01c138c4;
      }
LAB_01c1306c:
      lVar7 = lVar18;
      puVar2 = Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
      if ((unaff_w20 & 1) == 0) {
        return lVar7;
      }
      uVar10 = *(undefined8 *)Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
      lVar18 = thunk_FUN_00d6225c(lVar7,uVar10);
      if (lVar18 == 0) {
LAB_01c138c4:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar7,uVar10);
      }
      lVar18 = *(long *)puVar2;
      plVar8 = (long *)thunk_FUN_00d6225c(lVar7,lVar18);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar7,lVar18);
      }
      lVar13 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar11 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar18) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c130f0;
          }
          uVar11 = uVar11 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar18,0);
LAB_01c130f0:
      uVar11 = (*(code *)*puVar9)(plVar8);
      if ((uVar11 & 1) != 0) {
        return lVar7;
      }
    }
    do {
      unaff_w24 = unaff_w24 + 1;
      lVar18 = *(long *)Method_System_Collections_Generic_List<char>__ctor__;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar18 = *(long *)Method_System_Collections_Generic_List<char>__ctor__;
      }
      puVar3 = StringLiteral_302;
      puVar2 = Method_System_Collections_Generic_List<char>__ctor__;
      lVar7 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_01c13b1c;
      if (*(int *)(lVar7 + 0x18) <= unaff_w24) {
        iVar16 = 0;
        goto LAB_01c13248;
      }
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<char>__ctor__ +
                                   0xb8) + 0x30);
        if (lVar7 == 0) goto LAB_01c13b1c;
      }
      FUN_0132138c(lVar7,unaff_w24,&stack0x00000018,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<Pushable,_Hand>_MoveNext__
                  );
      unaff_w20 = in_stack_00000030;
      uVar10 = in_stack_00000028;
      plVar8 = in_stack_00000020;
      unaff_x28 = in_stack_00000018;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_01789ac0();
      plVar17 = unaff_x28;
      unaff_x29 = 0;
      if ((uVar11 & 1) == 0) {
        if (unaff_x28 == (long *)0x0) goto LAB_01c13b1c;
        uVar11 = (**(code **)(*unaff_x28 + 1000))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x3f0));
        if ((uVar11 & 1) != 0) {
          if (plVar8 == (long *)0x0) goto LAB_01c13b1c;
          uVar11 = (**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
          if ((uVar11 & 1) != 0) {
            lVar18 = FUN_00da4fb8(*(undefined8 *)
                                   Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,1
                                 );
            if (lVar18 != 0) {
              if ((unaff_x19 == (long *)0x0) || (lVar7 = thunk_FUN_00d6225c(), lVar7 != 0)) {
                if (*(int *)(lVar18 + 0x18) != 0) {
                  *(long **)(lVar18 + 0x20) = unaff_x19;
                  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar11 = FUN_01c6493c(unaff_x28,&stack0x00000050,lVar18,0);
                  plVar17 = (long *)0x0;
                  unaff_x29 = in_stack_00000050;
                  if ((uVar11 & 1) == 0) {
                    unaff_x29 = 0;
                  }
                  goto LAB_01c12ee8;
                }
                goto LAB_01c1389c;
              }
              goto LAB_01c138b4;
            }
            goto LAB_01c13b1c;
          }
        }
        if (unaff_x19 == (long *)0x0) goto LAB_01c13b1c;
        uVar11 = (**(code **)(*unaff_x19 + 1000))();
        if (((uVar11 & 1) != 0) &&
           (uVar11 = (**(code **)(*unaff_x28 + 1000))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x3f0))
           , (uVar11 & 1) != 0)) {
          if (plVar8 == (long *)0x0) goto LAB_01c13b1c;
          uVar11 = (**(code **)(*plVar8 + 1000))(plVar8,*(undefined8 *)(*plVar8 + 0x3f0));
          if ((uVar11 & 1) != 0) {
            uVar5 = (**(code **)(*unaff_x19 + 0x468))();
            uVar6 = (**(code **)(*plVar8 + 0x468))(plVar8,*(undefined8 *)(*plVar8 + 0x470));
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar11 = FUN_01789ac0(uVar5,uVar6,0);
            if ((uVar11 & 1) != 0) {
              unaff_x29 = (**(code **)(*unaff_x19 + 0x488))();
              if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                thunk_FUN_00d32864(*unaff_x23);
              }
              uVar11 = FUN_01c65a4c(unaff_x28,unaff_x29,0);
              plVar17 = (long *)0x0;
              if ((uVar11 & 1) == 0) {
                unaff_x29 = 0;
              }
              goto LAB_01c12ee8;
            }
          }
        }
        plVar17 = (long *)0x0;
        unaff_x29 = 0;
      }
LAB_01c12ee8:
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_01789ac0(plVar17,0,0);
      unaff_x26 = 0;
      if ((unaff_x29 != 0) && ((uVar11 & 1) != 0)) {
        if ((unaff_x28 == (long *)0x0) ||
           (plVar8 = (long *)(**(code **)(*unaff_x28 + 0x468))
                                       (unaff_x28,*(undefined8 *)(*unaff_x28 + 0x470)),
           plVar8 == (long *)0x0)) goto LAB_01c13b1c;
        plVar17 = (long *)(**(code **)(*plVar8 + 0x928))
                                    (plVar8,unaff_x29,*(undefined8 *)(*plVar8 + 0x930));
        unaff_x26 = uVar10;
      }
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_0178a8c4(plVar17,0,0);
    } while ((uVar11 & 1) == 0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<char>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar18 = FUN_01c14c10(plVar17);
    uVar10 = 0;
    uVar4 = 0;
  } while( true );
LAB_01c13248:
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar18 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_033ee8c0;
  lVar7 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x28);
  if (lVar7 == 0) goto LAB_01c13b1c;
  if (*(int *)(lVar7 + 0x18) <= iVar16) {
    if (*(int *)(*(long *)PTR_DAT_033ee8c0 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01c6c014(0);
    if ((uVar11 & 1) != 0) {
      FUN_01c14edc();
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01c6c014(0);
    if ((uVar11 & 1) != 0) {
      if (unaff_x19 == (long *)0x0) {
LAB_01c13b1c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = (**(code **)(*unaff_x19 + 0x1b8))();
      uVar10 = FUN_01600424(*(undefined8 *)System_Collections_Generic_List<Panel>_TypeInfo,uVar10,
                            *(undefined8 *)Meta_WitAi_Json_WitResponseClass_var,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      FUN_02661754(uVar10,0);
    }
    uVar10 = *(undefined8 *)Method_Unity_Collections_NativeSlice<Vector2>_get_Item__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar8 = (long *)FUN_01780344(uVar10,0);
    lVar18 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,1);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((unaff_x19 != (long *)0x0) && (lVar7 = thunk_FUN_00d6225c(), lVar7 == 0)) {
      uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar10,0);
    }
    if (*(int *)(lVar18 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(long **)(lVar18 + 0x20) = unaff_x19;
    if (plVar8 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar8 + 0x928))(plVar8,lVar18,*(undefined8 *)(*plVar8 + 0x930));
      lVar18 = FUN_0179c590(uVar10,0);
      if (lVar18 == 0) {
        lVar7 = 0;
      }
      else {
        uVar10 = *(undefined8 *)StringLiteral_3085;
        lVar7 = thunk_FUN_00d6225c(lVar18,uVar10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar18,uVar10);
        }
      }
      return lVar7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  FUN_0132138c(lVar7,iVar16,&stack0x00000018,
               *(undefined8 *)
                Method_Mono_Net_Security_AsyncProtocolRequest_<StartOperation>d__23_MoveNext__);
  plVar8 = in_stack_00000018;
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar18 = *in_stack_00000018;
  uVar11 = (ulong)*(ushort *)(lVar18 + 0x12a);
  if (uVar11 != 0) {
    piVar15 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__) {
        puVar9 = (undefined8 *)(lVar18 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01c13304;
      }
      uVar11 = uVar11 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_00d59724(in_stack_00000018,
                        *(long *)
                         Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__,0
                       );
LAB_01c13304:
  uVar11 = (*(code *)*puVar9)(plVar8);
  if ((uVar11 & 1) != 0) {
    return in_stack_00000048;
  }
  lVar18 = *(long *)puVar2;
  iVar16 = iVar16 + 1;
  goto LAB_01c13248;
}


