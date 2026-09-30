/*
FUNCTION_NAME: FUN_01c13ed8
ENTRY_POINT: 01c13ed8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;telemetry_or_network_hits_20;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_19
*/


long FUN_01c13ed8(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  undefined8 uVar18;
  long *local_c8;
  long *plStack_c0;
  byte local_b0;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80 [4];
  
  puVar1 = System_Net_FileWebRequest_TypeInfo;
  if ((DAT_0377e9b0 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<char>__ctor__);
    thunk_FUN_00d48444(System_Net_FileWebRequest_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__);
    thunk_FUN_00d48444(StringLiteral_3085);
    thunk_FUN_00d48444(PTR_DAT_033ef9a0);
    thunk_FUN_00d48444(Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_8__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_CallContextRemotingData_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7808);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<Pushable,_Hand>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_Mono_Net_Security_AsyncProtocolRequest_<StartOperation>d__23_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0530);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeSlice<Vector2>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0377e9b0 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01c307bc(param_1,0);
  if ((uVar6 & 1) != 0) {
    FUN_00ac2be8(param_1);
    uVar18 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    uVar12 = thunk_FUN_00d48444(NaughtyAttributes_Test_ShowNonSerializedFieldTest_TypeInfo);
    uVar18 = FUN_015f5b28(uVar12,uVar18,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016f2f28(uVar12,uVar18,0);
    uVar18 = thunk_FUN_00d48444(PTR_DAT_033f0c60);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar12,uVar18);
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0530);
  puVar4 = Method_Mono_Net_Security_AsyncProtocolRequest_<StartOperation>d__23_MoveNext__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = Method_System_Collections_Generic_List<char>__ctor__;
  if (lVar7 == 0) {
Mono_Net_Security_AsyncReadOrWriteRequest__ToString:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar7,*(undefined8 *)Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_8__);
  iVar17 = 0;
  while( true ) {
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar1;
    }
    lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
    if (lVar14 == 0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
    if (*(int *)(lVar14 + 0x18) <= iVar17) break;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar14 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    FUN_0132138c(lVar14,iVar17,local_80,*(undefined8 *)puVar4);
    plVar13 = local_80[0];
    if (local_80[0] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *local_80[0];
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar6 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01c14118;
        }
        uVar6 = uVar6 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(local_80[0],
                          *(long *)
                           Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__
                          ,0);
LAB_01c14118:
    uVar6 = (*(code *)*puVar9)(plVar13,param_1,0,param_2,1,&local_88,puVar9[1]);
    if ((uVar6 & 1) != 0) {
      FUN_00c3b150(lVar7,local_88,*(undefined8 *)PTR_DAT_033ef9a0);
    }
    iVar17 = iVar17 + 1;
  }
  iVar17 = 0;
LAB_01c14338:
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar1;
  }
  lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
  if (lVar14 == 0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
  if (*(int *)(lVar14 + 0x18) <= iVar17) {
    iVar17 = 0;
    goto LAB_01c146e8;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    if (lVar14 == 0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
  }
  FUN_0132138c(lVar14,iVar17,&local_c8,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_Enumerator<Pushable,_Hand>_MoveNext__);
  bVar5 = local_b0;
  plVar10 = plStack_c0;
  plVar13 = local_c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01789ac0(param_1,plVar10,0);
  plVar11 = plVar13;
  if ((uVar6 & 1) == 0) {
    if (plVar13 == (long *)0x0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
    uVar6 = (**(code **)(*plVar13 + 1000))(plVar13,*(undefined8 *)(*plVar13 + 0x3f0));
    if ((uVar6 & 1) == 0) {
LAB_01c144ac:
      if (param_1 == (long *)0x0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
      uVar6 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
      if (((uVar6 & 1) != 0) &&
         (uVar6 = (**(code **)(*plVar13 + 1000))(plVar13,*(undefined8 *)(*plVar13 + 0x3f0)),
         (uVar6 & 1) != 0)) {
        if (plVar10 == (long *)0x0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
        uVar6 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0));
        if ((uVar6 & 1) != 0) {
          uVar18 = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
          uVar12 = (**(code **)(*plVar10 + 0x468))(plVar10,*(undefined8 *)(*plVar10 + 0x470));
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar6 = FUN_01789ac0(uVar18,uVar12,0);
          plVar11 = (long *)0x0;
          if ((uVar6 & 1) == 0) goto LAB_01c145cc;
          uVar18 = (**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) ==
              0) {
            thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__);
          }
          uVar6 = FUN_01c65a4c(plVar13,uVar18,0);
          plVar11 = (long *)0x0;
          if ((uVar6 & 1) != 0) {
            plVar13 = (long *)(**(code **)(*plVar13 + 0x468))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x470));
            if (plVar13 != (long *)0x0) {
              lVar8 = *plVar13;
              goto LAB_01c14498;
            }
            goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
          }
          goto LAB_01c145cc;
        }
      }
      plVar11 = (long *)0x0;
    }
    else {
      if (plVar10 == (long *)0x0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
      uVar6 = (**(code **)(*plVar10 + 0x3c8))(plVar10,*(undefined8 *)(*plVar10 + 0x3d0));
      if ((uVar6 & 1) == 0) goto LAB_01c144ac;
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                      Method_System_Collections_Generic_List<PropertyInfo>_get_Item__
                                     ,1);
      if (plVar10 == (long *)0x0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
      if ((param_1 != (long *)0x0) &&
         (lVar8 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
      goto Mono_Net_Security_AsyncReadRequest__Run;
      if ((int)plVar10[3] == 0) goto LAB_01c14ac0;
      plVar10[4] = (long)param_1;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01c6493c(plVar13,&local_90,plVar10,0);
      plVar11 = (long *)0x0;
      if ((uVar6 & 1) == 0) goto LAB_01c145cc;
      plVar13 = (long *)(**(code **)(*plVar13 + 0x468))(plVar13,*(undefined8 *)(*plVar13 + 0x470));
      if (plVar13 == (long *)0x0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
      lVar8 = *plVar13;
      uVar18 = local_90;
LAB_01c14498:
      plVar11 = (long *)(**(code **)(lVar8 + 0x928))(plVar13,uVar18,*(undefined8 *)(lVar8 + 0x930));
    }
  }
LAB_01c145cc:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_0178a8c4(plVar11,0,0);
  puVar3 = Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar8 = FUN_01c14c10(plVar11);
    if (lVar8 != 0) {
      if ((bVar5 & 1) != 0) {
        uVar18 = *(undefined8 *)puVar3;
        lVar14 = thunk_FUN_00d6225c(lVar8,uVar18);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar8,uVar18);
        }
        lVar14 = *(long *)puVar3;
        plVar13 = (long *)thunk_FUN_00d6225c(lVar8,lVar14);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar8,lVar14);
        }
        lVar15 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c14694;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar13,lVar14,0);
LAB_01c14694:
        uVar6 = (*(code *)*puVar9)(plVar13,param_1,puVar9[1]);
        if ((uVar6 & 1) == 0) goto LAB_01c146c0;
      }
      FUN_00c3b150(lVar7,lVar8,*(undefined8 *)PTR_DAT_033ef9a0);
    }
  }
LAB_01c146c0:
  lVar8 = *(long *)puVar1;
  iVar17 = iVar17 + 1;
  goto LAB_01c14338;
LAB_01c146e8:
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar1;
  }
  lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
  if (lVar14 == 0) goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
  if (*(int *)(lVar14 + 0x18) <= iVar17) {
    uVar18 = *(undefined8 *)Method_Unity_Collections_NativeSlice<Vector2>_get_Item__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar13 = (long *)FUN_01780344(uVar18,0);
    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                    Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                                   1);
    if (plVar10 != (long *)0x0) {
      if ((param_1 != (long *)0x0) &&
         (lVar8 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
Mono_Net_Security_AsyncReadRequest__Run:
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_01c14ac0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar10[4] = (long)param_1;
      if (plVar13 != (long *)0x0) {
        uVar18 = (**(code **)(*plVar13 + 0x928))(plVar13,plVar10,*(undefined8 *)(*plVar13 + 0x930));
        lVar8 = FUN_0179c590(uVar18,0);
        if (lVar8 == 0) {
          lVar14 = 0;
        }
        else {
          uVar18 = *(undefined8 *)StringLiteral_3085;
          lVar14 = thunk_FUN_00d6225c(lVar8,uVar18);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar8,uVar18);
          }
        }
        FUN_00c3b150(lVar7,lVar14,*(undefined8 *)PTR_DAT_033ef9a0);
        return lVar7;
      }
    }
    goto Mono_Net_Security_AsyncReadOrWriteRequest__ToString;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  FUN_0132138c(lVar14,iVar17,&local_c8,*(undefined8 *)puVar4);
  plVar13 = local_c8;
  if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = *local_c8;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar6 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_01c1479c;
      }
      uVar6 = uVar6 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_00d59724(local_c8,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__
                        ,0);
LAB_01c1479c:
  uVar6 = (*(code *)*puVar9)(plVar13,param_1,1,param_2,1,&local_98,puVar9[1]);
  if ((uVar6 & 1) != 0) {
    FUN_00c3b150(lVar7,local_98,*(undefined8 *)PTR_DAT_033ef9a0);
  }
  lVar8 = *(long *)puVar1;
  iVar17 = iVar17 + 1;
  goto LAB_01c146e8;
}


