/*
FUNCTION_NAME: FUN_0234aba4
ENTRY_POINT: 0234aba4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_0234aba4(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  int iVar24;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d1c & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_MemberAssignment_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
    thunk_FUN_00d48444(StringLiteral_10283);
    thunk_FUN_00d48444(StringLiteral_7647);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<Grabbable>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u16__);
    thunk_FUN_00d48444(Method_MetaXRAcousticGeometry_<>c_<GatherGeometryInternal>b__85_0__);
    thunk_FUN_00d48444(Method_System_ComponentModel_ArrayConverter_ConvertTo__);
    thunk_FUN_00d48444(StringLiteral_1816);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<OVRSkeleton_BoneId,_HumanBodyBones>_Dispose__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_s16__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<ParametricDoor>_AddListener__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<MedleyArcadeDoorRing>_get_Current__
                      );
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Security_Cryptography_X509Certificates_RSACertificateExtensions_GetRSAPublicKey__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Texture2D_var);
    DAT_03781d1c = 1;
  }
  uStack_88 = 0;
  local_80 = 0;
  local_90 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_0268b4e0(param_1,0,0);
  puVar1 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  if ((uVar10 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar11 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                               );
    FUN_016ec5b8(uVar11,uVar12,0);
    uVar12 = thunk_FUN_00d48444(Method_System_Xml_XmlTextWriter_WriteComment__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,uVar12);
  }
  if (param_1 != 0) {
    lVar23 = *(long *)(param_1 + 0x28);
    uVar11 = FUN_0230fea8(param_1,0);
    uVar12 = FUN_0230bd48(param_1,0,0);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar13 != 0) {
      FUN_01320f6c(lVar13,uVar12,*(undefined8 *)StringLiteral_9754);
      lVar14 = FUN_0231559c(param_1,param_2,0);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar15 != 0) {
        FUN_01320e50(lVar15,*(undefined8 *)PTR_DAT_033ee588);
        puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_s16__;
        puVar5 = 
        Method_System_Security_Cryptography_X509Certificates_RSACertificateExtensions_GetRSAPublicKey__
        ;
        puVar4 = 
        Method_System_Collections_Generic_List_Enumerator<MedleyArcadeDoorRing>_get_Current__;
        puVar3 = OVRManager_XrApi_TypeInfo;
        puVar2 = System_Linq_Expressions_MemberAssignment_TypeInfo;
        puVar1 = UnityEngine_Texture2D_var;
        if (lVar14 != 0) {
          FUN_012de890(lVar14,&local_a8,
                       *(undefined8 *)Method_System_Linq_Enumerable_Where<Grabbable>__);
          uStack_88 = uStack_a0;
          local_90 = local_a8;
          local_80 = local_98;
          while (uVar10 = FUN_012b69b4(&local_90,*(undefined8 *)puVar2), (uVar10 & 1) != 0) {
            uVar7 = FUN_00ae9e5c(&local_90,
                                 *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__)
            ;
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar23 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar16 = *(long *)(lVar23 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar8 = FUN_0232333c(lVar16,0,0);
            FUN_0132138c(lVar13,uVar8,&local_78,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            uVar12 = local_78;
            lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_02339644(lVar16,uVar12,0);
            FUN_00ca0af8(lVar15,lVar16,*(undefined8 *)puVar3);
          }
          FUN_012b69b0(&local_90,
                       *(undefined8 *)System_Collections_Generic_List<HingedComboComponent>_TypeInfo
                      );
          lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar16 != 0) {
            FUN_01320e50(lVar16,*(undefined8 *)puVar6);
            lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            if (lVar17 != 0) {
              FUN_01320e50(lVar17,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<OVRSkeleton_BoneId,_HumanBodyBones>_Dispose__
                          );
              if (param_3 != (long *)0x0) {
                iVar24 = 0;
                do {
                  lVar21 = *param_3;
                  uVar10 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar10 != 0) {
                    piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) ==
                          *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u16__) {
                        puVar18 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
                        goto LAB_0234af84;
                      }
                      uVar10 = uVar10 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar18 = (undefined8 *)
                            FUN_00d59724(param_3,*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u16__
                                         ,0);
LAB_0234af84:
                  iVar9 = (*(code *)*puVar18)(param_3,puVar18[1]);
                  if (iVar9 <= iVar24) {
                    lVar23 = FUN_0234b440(lVar15,lVar17);
                    uVar12 = 0;
                    if (lVar23 != 0) {
                      uVar12 = FUN_010dfe04(lVar14,*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                           );
                      *(undefined8 *)(lVar23 + 0x20) = uVar12;
                      uVar12 = *(undefined8 *)(param_1 + 0x20);
                      lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo
                                                 );
                      if (lVar14 == 0) break;
                      FUN_01320f6c(lVar14,uVar12,
                                   *(undefined8 *)
                                    System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
                      plVar20 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_10283,1);
                      if (plVar20 == (long *)0x0) break;
                      lVar15 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar20 + 0x40));
                      if (lVar15 == 0) {
                        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                        FUN_00da5038(uVar11,0);
                      }
                      if ((int)plVar20[3] == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      plVar20[4] = lVar23;
                      FUN_022fad74(plVar20,lVar13,lVar14,uVar11,0,0);
                      FUN_02310a38(param_1,lVar13,0,0);
                      FUN_0230f6a8(param_1,lVar14,0);
                      FUN_0230ff4c(param_1,uVar11,0);
                      uVar12 = *(undefined8 *)(lVar23 + 0x10);
                    }
                    return uVar12;
                  }
                  lVar21 = *param_3;
                  uVar10 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar10 != 0) {
                    piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) ==
                          *(long *)
                           Method_MetaXRAcousticGeometry_<>c_<GatherGeometryInternal>b__85_0__) {
                        puVar18 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
                        goto LAB_0234afec;
                      }
                      uVar10 = uVar10 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar18 = (undefined8 *)
                            FUN_00d59724(param_3,*(long *)
                                                  Method_MetaXRAcousticGeometry_<>c_<GatherGeometryInternal>b__85_0__
                                         ,0);
LAB_0234afec:
                  uVar12 = (*(code *)*puVar18)(param_3,iVar24,puVar18[1]);
                  uVar12 = FUN_0231559c(param_1,uVar12,0);
                  FUN_00ca0ce8(lVar16,uVar12,
                               *(undefined8 *)
                                Method_System_ComponentModel_ArrayConverter_ConvertTo__);
                  lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                               Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
                  if (lVar21 == 0) break;
                  FUN_01320e50(lVar21,*(undefined8 *)PTR_DAT_033ee588);
                  FUN_00ca0ed8(lVar17,lVar21,*(undefined8 *)StringLiteral_1816);
                  FUN_0132138c(lVar16,iVar24,&local_a8,
                               *(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<ParametricDoor>_AddListener__);
                  if (local_a8 == 0) break;
                  FUN_012de890(local_a8,&local_a8,
                               *(undefined8 *)Method_System_Linq_Enumerable_Where<Grabbable>__);
                  uStack_88 = uStack_a0;
                  local_90 = local_a8;
                  local_80 = local_98;
                  while (uVar10 = FUN_012b69b4(&local_90,*(undefined8 *)puVar2), (uVar10 & 1) != 0)
                  {
                    uVar7 = FUN_00ae9e5c(&local_90,
                                         *(undefined8 *)
                                          Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
                    local_6c = uVar7;
                    FUN_012df150(lVar14,&local_6c,*(undefined8 *)StringLiteral_7647);
                    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(uint *)(lVar23 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    lVar19 = *(long *)(lVar23 + (long)(int)uVar7 * 8 + 0x20);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar8 = FUN_0232333c(lVar19,0,0);
                    FUN_0132138c(lVar13,uVar8,&local_68,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                );
                    uVar12 = local_68;
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_02339644(lVar19,uVar12,0);
                    FUN_00ca0af8(lVar21,lVar19,*(undefined8 *)puVar3);
                  }
                  FUN_012b69b0(&local_90,
                               *(undefined8 *)
                                System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
                  iVar24 = iVar24 + 1;
                } while( true );
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


