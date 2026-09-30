/*
FUNCTION_NAME: FUN_05a91b90
ENTRY_POINT: 05a91b90
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05a91b90(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x27;
  undefined1 auVar16 [16];
  long lStack_68;
  undefined *puVar8;
  
  lStack_68 = param_2;
  if ((DAT_06b81585 & 1) == 0) {
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000089E_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_0676d0f0);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_TryGetValue__)
    ;
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Guid,_MobileTlsProvider>_TryGetValue__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Guid,_OVRAnchor>_Add__);
    FUN_02d6084c(Method_System_Runtime_Serialization_DataNode<byte[]>__ctor__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Count__
                );
    FUN_02d6084c(Method_System_Runtime_Serialization_DataNode<byte[]>_GetValue__);
    FUN_02d6084c(Method_System_Runtime_Serialization_DataNode<Array>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_set_Item__);
    FUN_02d6084c(Method_System_Runtime_Serialization_DataNode<bool>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceObject>__ctor__);
    DAT_06b81585 = 1;
  }
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 0x18);
    *(long *)(param_1 + 0x40) = *plVar11;
    thunk_FUN_02dd37b4();
    if (*plVar11 != 0) {
      FUN_06090b64(*plVar11,0);
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 != 0) {
        bVar3 = false;
        iVar13 = 0;
        puVar12 = (undefined8 *)Method_System_Runtime_Serialization_DataNode<byte[]>_GetValue__;
        plVar15 = (long *)Method_System_Runtime_Serialization_DataNode<Array>__ctor__;
        do {
          lVar9 = *(long *)(lVar9 + 0x18);
          if ((*(byte *)(*(long *)(*plVar15 + 0x20) + 0x135) & 1) == 0) {
            FUN_02d9a2e0();
          }
          if (*(int *)(lVar9 + 8) <= iVar13) {
            return;
          }
          if (*(long *)(param_1 + 0x30) == 0) break;
          puVar5 = (undefined4 *)FUN_03d91064(*(long *)(param_1 + 0x30) + 0x18,iVar13,*puVar12);
          if (*(char *)((long)puVar5 + 0x6a) == '\0') {
            iVar1 = puVar5[1];
            FUN_05a903e4(param_1,param_2,param_3,puVar5);
            if ((puVar5[1] == 3) && (*(char *)(puVar5 + 0x1a) != '\0')) {
              if (*(char *)(param_2 + 0x38) == '\0') {
                lVar9 = *plVar11;
                if (*(int *)(*(long *)Method_System_Runtime_Serialization_DataNode<bool>__ctor__ +
                            0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_060a5608(param_2 + 0x10,lVar9,0);
              }
              if (*plVar11 == 0) break;
              FUN_0608f210(*plVar11,0);
              if (*(int *)(*(long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000089E_PostfixBurstDelegate_TypeInfo
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              lVar9 = FUN_059efbdc(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceObject>__ctor__
                                   ,0);
              if (lVar9 == 0) break;
              FUN_06092c80(lVar9,2,0);
              *plVar11 = lVar9;
              thunk_FUN_02dd37b4(plVar11,lVar9);
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (puVar5[0x19] != -1) {
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar9 == 0)) break;
              auVar16 = FUN_047bb1e8(lVar9,puVar5[0x19],
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_Add__
                                    );
              if (*plVar11 == 0) break;
              FUN_06097c90(*plVar11,auVar16._0_8_,auVar16._8_8_,0);
            }
            if (((iVar1 == 2) && ((int)puVar5[4] < 1)) && (-1 < (int)puVar5[5])) {
              if (*(long *)(param_1 + 0x30) == 0) break;
              lVar9 = FUN_03d8fde8(*(long *)(param_1 + 0x30) + 0x60,puVar5[5],
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Count__
                                  );
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<Guid,_OVRAnchor>_Add__ +
                          0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)
                                    Method_System_Collections_Generic_Dictionary<Guid,_OVRAnchor>_Add__
                                  );
              }
              if (*(int *)(lVar9 + 400) < 1) goto LAB_05a91e38;
              FUN_05a90b00(param_1,param_2,param_3,lVar9);
              bVar4 = 1;
              bVar3 = true;
            }
            else {
LAB_05a91e38:
              bVar4 = 0;
            }
            if ((0 < (int)puVar5[4]) && (*(char *)((long)puVar5 + 0x6b) != '\0')) {
              if (!bVar3) {
                thunk_FUN_02dc61f4(PTR_DAT_067608d0);
                uVar6 = thunk_FUN_02d9d534();
                puVar8 = 
                Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceObject>_Clear__;
                goto LAB_05a921a4;
              }
              if (*plVar11 == 0) break;
              FUN_06097850(*plVar11,0);
            }
            if (0 < (int)puVar5[0x10]) {
              auVar16 = FUN_05a97be4(puVar5,*(undefined8 *)(param_1 + 0x30),0);
              lVar9 = auVar16._0_8_;
              if (0 < auVar16._8_4_) {
                uVar14 = auVar16._8_8_ & 0xffffffff;
                puVar10 = (undefined4 *)(lVar9 + 0xc);
                do {
                  unaff_x27 = unaff_x27 & 0xffffffff00000000 | (ulong)(uint)puVar10[-1];
                  lVar9 = FUN_05a91658(lVar9,plVar11,param_3,*puVar10,*(undefined8 *)(puVar10 + -3),
                                       unaff_x27,1);
                  uVar14 = uVar14 - 1;
                  puVar10 = puVar10 + 5;
                } while (uVar14 != 0);
              }
            }
            if (*param_4 == 0) break;
            uVar6 = FUN_03aac1c4(*param_4,*puVar5,
                                 *(undefined8 *)
                                  Method_System_Runtime_Serialization_DataNode<byte[]>__ctor__);
            FUN_05a91860(uVar6,&lStack_68);
            plVar15 = (long *)Method_System_Runtime_Serialization_DataNode<Array>__ctor__;
            if (0 < (int)puVar5[0x10]) {
              if (*plVar11 == 0) break;
              FUN_06090b64(*plVar11,0);
            }
            if (*(char *)((long)puVar5 + 0x6e) != '\0') {
              if (*plVar11 == 0) break;
              auVar16 = FUN_06097c4c(*plVar11,0);
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar9 == 0)) break;
              FUN_047bb278(lVar9,*puVar5,auVar16._0_8_,auVar16._8_8_,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_TryGetValue__
                          );
            }
            puVar12 = (undefined8 *)Method_System_Runtime_Serialization_DataNode<byte[]>_GetValue__;
            if (iVar1 == 2) {
              if (((puVar5[4] == 2) || ((bool)(bVar4 & puVar5[4] == -1))) && (-1 < (int)puVar5[5]))
              {
                if (*(long *)(param_1 + 0x30) == 0) break;
                lVar9 = FUN_03d8fde8(*(long *)(param_1 + 0x30) + 0x60,puVar5[5],
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Count__
                                    );
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<Guid,_OVRAnchor>_Add__ +
                            0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)
                                      Method_System_Collections_Generic_Dictionary<Guid,_OVRAnchor>_Add__
                                    );
                }
                if (0 < *(int *)(lVar9 + 400)) {
                  if (!bVar3) {
                    thunk_FUN_02dc61f4(PTR_DAT_067608d0);
                    uVar6 = thunk_FUN_02d9d534();
                    puVar8 = 
                    Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceObject>_TryGetValue__
                    ;
LAB_05a921a4:
                    uVar7 = thunk_FUN_02dc61f4(puVar8);
                    FUN_0503de34(uVar6,uVar7,0);
                    uVar7 = thunk_FUN_02dc61f4(
                                              Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceObject>_get_Count__
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_02d609b4(uVar6,uVar7);
                  }
                  if (*(char *)(lVar9 + 0x2bd) != '\0') {
                    if (*plVar11 == 0) break;
                    FUN_06094564(*plVar11,0,0);
                  }
                  if (*plVar11 == 0) break;
                  FUN_060978f8(*plVar11,0);
                  bVar3 = false;
                  **(undefined1 **)(*(long *)PTR_DAT_0676d0f0 + 0xb8) = 0;
                }
              }
            }
            else if (!bVar2) {
              lVar9 = *plVar11;
              if (*(int *)(*(long *)Method_System_Runtime_Serialization_DataNode<bool>__ctor__ +
                          0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_060a56ec(param_2 + 0x10,lVar9,1,0);
              puVar12 = (undefined8 *)
                        Method_System_Runtime_Serialization_DataNode<byte[]>_GetValue__;
              lVar9 = *plVar11;
              if (*(int *)(*(long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000089E_PostfixBurstDelegate_TypeInfo
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_059efc74(lVar9,0);
              *plVar11 = *(long *)(param_1 + 0x40);
              thunk_FUN_02dd37b4(plVar11);
            }
            FUN_05a91204(param_1,param_2,param_3,puVar5);
          }
          lVar9 = *(long *)(param_1 + 0x30);
          iVar13 = iVar13 + 1;
        } while (lVar9 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


