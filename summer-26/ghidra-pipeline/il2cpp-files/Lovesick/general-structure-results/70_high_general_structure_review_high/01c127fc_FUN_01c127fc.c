/*
FUNCTION_NAME: FUN_01c127fc
ENTRY_POINT: 01c127fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x01c12fbc) */
/* WARNING: Removing unreachable block (ram,0x01c12fd0) */
/* WARNING: Removing unreachable block (ram,0x01c12fd4) */
/* WARNING: Removing unreachable block (ram,0x01c13068) */
/* WARNING: Removing unreachable block (ram,0x01c12fe8) */
/* WARNING: Removing unreachable block (ram,0x01c13000) */
/* WARNING: Removing unreachable block (ram,0x01c13008) */
/* WARNING: Removing unreachable block (ram,0x01c1301c) */
/* WARNING: Removing unreachable block (ram,0x01c13024) */
/* WARNING: Removing unreachable block (ram,0x01c13690) */
/* WARNING: Removing unreachable block (ram,0x01c13694) */
/* WARNING: Removing unreachable block (ram,0x01c136ac) */
/* WARNING: Removing unreachable block (ram,0x01c136b8) */
/* WARNING: Removing unreachable block (ram,0x01c136bc) */
/* WARNING: Removing unreachable block (ram,0x01c136d4) */
/* WARNING: Removing unreachable block (ram,0x01c136dc) */
/* WARNING: Removing unreachable block (ram,0x01c136ec) */
/* WARNING: Removing unreachable block (ram,0x01c136f0) */
/* WARNING: Removing unreachable block (ram,0x01c13720) */
/* WARNING: Removing unreachable block (ram,0x01c1303c) */
/* WARNING: Removing unreachable block (ram,0x01c1305c) */

long FUN_01c127fc(long *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  long *local_c8;
  long *plStack_c0;
  byte local_b0;
  undefined4 local_a0;
  long local_98;
  long local_90;
  long local_88;
  long *local_80 [4];
  
  puVar1 = System_Net_FileWebRequest_TypeInfo;
  if ((DAT_0377e9b1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033ee8c0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<char>__ctor__);
    thunk_FUN_00d48444(System_Net_FileWebRequest_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__);
    thunk_FUN_00d48444(StringLiteral_3085);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_CallContextRemotingData_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7808);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<Pushable,_Hand>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_Mono_Net_Security_AsyncProtocolRequest_<StartOperation>d__23_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeSlice<Vector2>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_List<Panel>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(Meta_WitAi_Json_WitResponseClass_var);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0377e9b1 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01c307bc(param_1,0);
  puVar1 = Method_System_Collections_Generic_List<Collider>_Clear__;
  if ((uVar5 & 1) != 0) {
    FUN_00ac2be8(param_1);
    uVar15 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    uVar9 = thunk_FUN_00d48444(NaughtyAttributes_Test_ShowNonSerializedFieldTest_TypeInfo);
    uVar15 = FUN_015f5b28(uVar9,uVar15,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016f2f28(uVar9,uVar15,0);
    uVar15 = thunk_FUN_00d48444(
                               Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar9,uVar15);
  }
  iVar14 = 0;
  while( true ) {
    puVar2 = Method_System_Collections_Generic_List<char>__ctor__;
    lVar6 = *(long *)Method_System_Collections_Generic_List<char>__ctor__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar11 == 0) goto LAB_01c13b1c;
    if (*(int *)(lVar11 + 0x18) <= iVar14) break;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<char>__ctor__ +
                                  0xb8) + 0x28);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    FUN_0132138c(lVar11,iVar14,local_80,
                 *(undefined8 *)
                  Method_Mono_Net_Security_AsyncProtocolRequest_<StartOperation>d__23_MoveNext__);
    plVar10 = local_80[0];
    if (local_80[0] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar6 = *local_80[0];
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01c12a68;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(local_80[0],
                          *(long *)
                           Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__
                          ,0);
LAB_01c12a68:
    uVar5 = (*(code *)*puVar7)(plVar10,param_1,0,param_2,param_3 & 1,&local_88,puVar7[1]);
    if ((uVar5 & 1) != 0) {
      return local_88;
    }
    iVar14 = iVar14 + 1;
  }
  iVar14 = 0;
  while( true ) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)Method_System_Collections_Generic_List<char>__ctor__;
    }
    puVar3 = StringLiteral_302;
    puVar2 = Method_System_Collections_Generic_List<char>__ctor__;
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar11 == 0) goto LAB_01c13b1c;
    if (*(int *)(lVar11 + 0x18) <= iVar14) break;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<char>__ctor__ +
                                  0xb8) + 0x30);
      if (lVar11 == 0) goto LAB_01c13b1c;
    }
    FUN_0132138c(lVar11,iVar14,&local_c8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<Pushable,_Hand>_MoveNext__
                );
    bVar4 = local_b0;
    plVar8 = plStack_c0;
    plVar10 = local_c8;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01789ac0(param_1,plVar8,0);
    plVar16 = plVar10;
    lVar6 = 0;
    if ((uVar5 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_01c13b1c;
      uVar5 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0));
      if ((uVar5 & 1) != 0) {
        if (plVar8 == (long *)0x0) goto LAB_01c13b1c;
        uVar5 = (**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
        if ((uVar5 & 1) != 0) {
          plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)
                                         Method_System_Collections_Generic_List<PropertyInfo>_get_Item__
                                        ,1);
          if (plVar8 != (long *)0x0) {
            if ((param_1 != (long *)0x0) &&
               (lVar6 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
              uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar15,0);
            }
            if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar8[4] = (long)param_1;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar5 = FUN_01c6493c(plVar10,&local_90,plVar8,0);
            plVar16 = (long *)0x0;
            lVar6 = local_90;
            if ((uVar5 & 1) == 0) {
              lVar6 = 0;
            }
            goto LAB_01c12ee8;
          }
          goto LAB_01c13b1c;
        }
      }
      if (param_1 == (long *)0x0) goto LAB_01c13b1c;
      uVar5 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
      if (((uVar5 & 1) != 0) &&
         (uVar5 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
         (uVar5 & 1) != 0)) {
        if (plVar8 == (long *)0x0) goto LAB_01c13b1c;
        uVar5 = (**(code **)(*plVar8 + 1000))(plVar8,*(undefined8 *)(*plVar8 + 0x3f0));
        if ((uVar5 & 1) != 0) {
          uVar15 = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
          uVar9 = (**(code **)(*plVar8 + 0x468))(plVar8,*(undefined8 *)(*plVar8 + 0x470));
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar5 = FUN_01789ac0(uVar15,uVar9,0);
          if ((uVar5 & 1) != 0) {
            lVar6 = (**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
            lVar11 = *(long *)puVar1;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar11);
            }
            uVar5 = FUN_01c65a4c(plVar10,lVar6,0);
            plVar16 = (long *)0x0;
            if ((uVar5 & 1) == 0) {
              lVar6 = 0;
            }
            goto LAB_01c12ee8;
          }
        }
      }
      plVar16 = (long *)0x0;
      lVar6 = 0;
    }
LAB_01c12ee8:
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01789ac0(plVar16,0,0);
    if ((lVar6 != 0) && ((uVar5 & 1) != 0)) {
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x468))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x470)),
         plVar10 == (long *)0x0)) goto LAB_01c13b1c;
      plVar16 = (long *)(**(code **)(*plVar10 + 0x928))
                                  (plVar10,lVar6,*(undefined8 *)(*plVar10 + 0x930));
    }
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0178a8c4(plVar16,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<char>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_01c14c10(plVar16);
      puVar2 = Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
      if (lVar6 != 0) {
        if ((bVar4 & 1) == 0) {
          return lVar6;
        }
        uVar15 = *(undefined8 *)Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__
        ;
        lVar11 = thunk_FUN_00d6225c(lVar6,uVar15);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar6,uVar15);
        }
        lVar11 = *(long *)puVar2;
        plVar10 = (long *)thunk_FUN_00d6225c(lVar6,lVar11);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar6,lVar11);
        }
        lVar12 = *plVar10;
        uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_01c130f0;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar10,lVar11,0);
LAB_01c130f0:
        uVar5 = (*(code *)*puVar7)(plVar10,param_1,puVar7[1]);
        if ((uVar5 & 1) != 0) {
          return lVar6;
        }
      }
    }
    iVar14 = iVar14 + 1;
    lVar6 = *(long *)Method_System_Collections_Generic_List<char>__ctor__;
  }
  iVar14 = 0;
  while( true ) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    puVar1 = PTR_DAT_033ee8c0;
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar11 == 0) goto LAB_01c13b1c;
    if (*(int *)(lVar11 + 0x18) <= iVar14) break;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    FUN_0132138c(lVar11,iVar14,&local_c8,
                 *(undefined8 *)
                  Method_Mono_Net_Security_AsyncProtocolRequest_<StartOperation>d__23_MoveNext__);
    plVar10 = local_c8;
    if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar6 = *local_c8;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01c13304;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(local_c8,*(long *)
                                    Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__
                          ,0);
LAB_01c13304:
    uVar5 = (*(code *)*puVar7)(plVar10,param_1,1,param_2,param_3 & 1,&local_98,puVar7[1]);
    if ((uVar5 & 1) != 0) {
      return local_98;
    }
    lVar6 = *(long *)puVar2;
    iVar14 = iVar14 + 1;
  }
  if (*(int *)(*(long *)PTR_DAT_033ee8c0 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01c6c014(0);
  if ((uVar5 & 1) != 0) {
    FUN_01c14edc();
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01c6c014(0);
  if ((uVar5 & 1) != 0) {
    if (param_1 == (long *)0x0) {
LAB_01c13b1c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar15 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    uVar15 = FUN_01600424(*(undefined8 *)System_Collections_Generic_List<Panel>_TypeInfo,uVar15,
                          *(undefined8 *)Meta_WitAi_Json_WitResponseClass_var,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_02661754(uVar15,0);
  }
  uVar15 = *(undefined8 *)Method_Unity_Collections_NativeSlice<Vector2>_get_Item__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar10 = (long *)FUN_01780344(uVar15,0);
  plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)
                                 Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,1);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((param_1 != (long *)0x0) &&
     (lVar6 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
    uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar15,0);
  }
  if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar8[4] = (long)param_1;
  if (plVar10 != (long *)0x0) {
    uVar15 = (**(code **)(*plVar10 + 0x928))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x930));
    lVar6 = FUN_0179c590(uVar15,0);
    if (lVar6 == 0) {
      lVar11 = 0;
    }
    else {
      uVar15 = *(undefined8 *)StringLiteral_3085;
      lVar11 = thunk_FUN_00d6225c(lVar6,uVar15);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar6,uVar15);
      }
    }
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


