/*
FUNCTION_NAME: FUN_00e821a0
ENTRY_POINT: 00e821a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x00e824e4) */

undefined8 FUN_00e821a0(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03774f85 & 1) == 0) {
    thunk_FUN_00d48444(Method_NaughtyAttributes_DropdownList<Vector3>_Add__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_DeltaStateEvent_From__);
    thunk_FUN_00d48444(OVRTriangleMesh_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6766);
    thunk_FUN_00d48444(System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7269);
    thunk_FUN_00d48444(Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>__ctor__);
    thunk_FUN_00d48444(StringLiteral_4626);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Dropdown_DropdownItem>__ctor__);
    thunk_FUN_00d48444(StringLiteral_11486);
    thunk_FUN_00d48444(System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_object>_TryGetValue__);
    thunk_FUN_00d48444(StringLiteral_9460);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__);
    thunk_FUN_00d48444(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    thunk_FUN_00d48444(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__1__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<VoiceSession>_RemoveListener__);
    thunk_FUN_00d48444(PTR_DAT_033f3d78);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Character>_Clear__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(StringLiteral_12098);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_MoveNext__
                      );
    thunk_FUN_00d48444(Sirenix_Serialization_BindTypeNameToTypeAttribute_var);
    DAT_03774f85 = 1;
  }
  puVar8 = StringLiteral_7269;
  puVar7 = StringLiteral_4626;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u64__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_object>_TryGetValue__;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  lVar13 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    puVar3 = StringLiteral_302;
    puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar1 = Sirenix_Serialization_BindTypeNameToTypeAttribute_var;
    if (*(long *)(param_4 + 0x28) != 0) {
      uVar12 = FUN_0268b6ac(*(long *)(param_4 + 0x28),0);
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar1,uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      FUN_02660dac(uVar12,0);
      uVar12 = *(undefined8 *)(param_4 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0268b5e4(uVar12,0);
      if ((uVar10 & 1) != 0) {
        if ((lVar13 == 0) || (*(long *)(lVar13 + 0x98) == 0)) goto LAB_00e82808;
        FUN_0132448c(*(long *)(lVar13 + 0x98),*(undefined8 *)(param_4 + 0x28),
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__);
      }
      if (*(long *)(param_4 + 0x28) != 0) {
        uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x88);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0268c114(uVar12,0);
        if (*(long *)(param_4 + 0x28) != 0) {
          uVar12 = FUN_0268fd4c(*(long *)(param_4 + 0x28),0);
          FUN_0268c114(uVar12,0);
          if ((lVar13 != 0) &&
             (lVar9 = FUN_0112fd4c(*(undefined8 *)(lVar13 + 0x80),
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<TMP_Character>_Clear__),
             puVar1 = StringLiteral_11486, lVar9 != 0)) {
            FUN_0268b75c(lVar9,*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_MoveNext__
                         ,0);
            lVar15 = *(long *)(lVar13 + 0x98);
            FUN_010e5b20(lVar9,&local_b8,*(undefined8 *)puVar1);
            puVar1 = Method_UnityEngine_InputSystem_LowLevel_DeltaStateEvent_From__;
            if (lVar15 != 0) {
              FUN_00ac58b0(lVar15,local_b8,
                           *(undefined8 *)
                            System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_TypeInfo);
              FUN_010db7b0(*(undefined8 *)(lVar13 + 0x98),&local_b8,*(undefined8 *)puVar1);
              if (local_b8 != 0) {
                lVar15 = *(long *)(local_b8 + 0x68);
                lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
                if ((lVar9 != 0) &&
                   (FUN_026c8404(lVar9,lVar13,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>__ctor__
                                 ,0), lVar15 != 0)) {
                  FUN_026c84dc(lVar15,lVar9,0);
                  FUN_00e81e50(lVar13);
                  puVar2 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_RemoveListener__;
                  puVar1 = PTR_DAT_033f3d78;
                  lVar9 = *(long *)(lVar13 + 0x98);
                  if (lVar9 != 0) {
                    iVar14 = 0;
                    while (iVar14 < *(int *)(lVar9 + 0x18)) {
                      FUN_0132138c(lVar9,iVar14,&local_b8,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 00e82768 with catch @ 00e8273c */
                      if ((local_b8 == 0) || (lVar9 = FUN_0268fd10(local_b8,0), lVar9 == 0))
                      goto LAB_00e82808;
                      lVar9 = FUN_0269fe30(lVar9,0);
                    /* try { // try from 00e8274c to 00f8275f has its CatchHandler @ 00e8279c */
                    /* try { // try from 00e82760 to 00f82767 has its CatchHandler @ 00e8278c */
                    /* try { // try from 00e82768 to 00f827a7 has its CatchHandler @ 00e8273c */
                      if ((*(long *)(lVar13 + 0x88) == 0) ||
                         ((FUN_0132138c(*(long *)(lVar13 + 0x88),iVar14,&local_b8,
                                        *(undefined8 *)puVar1), local_b8 == 0 ||
                          (FUN_0269f578(local_b8,0), lVar9 == 0)))) goto LAB_00e82808;
                      FUN_0269f618(lVar9,0);
                    /* catch() { ... } // from try @ 00e82760 with catch @ 00e8278c */
                    /* catch() { ... } // from try @ 00e8274c with catch @ 00e8279c */
                      if ((*(long *)(lVar13 + 0x98) == 0) ||
                         ((FUN_0132138c(*(long *)(lVar13 + 0x98),iVar14,&local_b8,
                                        *(undefined8 *)puVar2), local_b8 == 0 ||
                          (lVar9 = FUN_0268fd10(local_b8,0), lVar9 == 0)))) goto LAB_00e82808;
                      lVar9 = FUN_0269fe30(lVar9,0);
                      if ((*(long *)(lVar13 + 0x88) == 0) ||
                         ((FUN_0132138c(*(long *)(lVar13 + 0x88),iVar14,&local_b8,
                                        *(undefined8 *)puVar1), local_b8 == 0 ||
                          (FUN_0269f810(local_b8,0), lVar9 == 0)))) goto LAB_00e82808;
                      FUN_0269f894(lVar9,0);
                      lVar9 = *(long *)(lVar13 + 0x98);
                      iVar14 = iVar14 + 1;
                      if (lVar9 == 0) goto LAB_00e82808;
                    }
                    if (*(long *)(lVar13 + 0xb0) != 0) {
                      lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                        (*(long *)(lVar13 + 0xb0),0);
                      if ((((*(long *)(lVar13 + 0x98) != 0) &&
                           (FUN_0132138c(*(long *)(lVar13 + 0x98),0,&local_b8,*(undefined8 *)puVar2)
                           , local_b8 != 0)) && (lVar13 = FUN_0268fd10(local_b8,0), lVar13 != 0)) &&
                         (fVar16 = (float)FUN_0269f578(lVar13,0), lVar9 != 0)) {
                        FUN_0269f618(fVar16 + 0.0,param_2 + DAT_028aa160,param_3 + 0.0,lVar9,0);
                        if (*(long *)(param_4 + 0x30) != 0) {
                          FUN_01323390(*(long *)(param_4 + 0x30),&local_b8,*(undefined8 *)puVar4);
                          uStack_98 = uStack_b0;
                          local_a0 = local_b8;
                          local_90 = local_a8;
                          while( true ) {
                            uVar10 = FUN_012b894c(&local_a0,*(undefined8 *)puVar8);
                            if ((uVar10 & 1) == 0) {
                              FUN_012b8948(&local_a0,
                                           *(undefined8 *)
                                            System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo
                                          );
                              return 0;
                            }
                            lVar13 = FUN_00ac5ba8(&local_a0,*(undefined8 *)puVar7);
                            if (lVar13 == 0) break;
                            FUN_026ea898(lVar13,0);
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    *(undefined8 *)(param_4 + 0x28) = 0;
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar9 != 0) {
      FUN_01320e50(lVar9,*(undefined8 *)
                          System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
      *(long *)(param_4 + 0x30) = lVar9;
      puVar6 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
      puVar5 = Method_NaughtyAttributes_DropdownList<Vector3>_Add__;
      puVar3 = Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>__ctor__;
      puVar2 = OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo;
      puVar1 = OVRTriangleMesh_TypeInfo;
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x98) != 0)) {
        FUN_01323390(*(long *)(lVar13 + 0x98),&local_b8,*(undefined8 *)StringLiteral_9460);
        uStack_78 = uStack_b0;
        local_80 = local_b8;
        local_70 = local_a8;
        while (uVar10 = FUN_012b894c(&local_80,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
          plVar11 = (long *)FUN_00ac5aa0(&local_80,*(undefined8 *)puVar6);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((char)plVar11[0xc] == '\0') {
            uVar12 = FUN_010c3404(plVar11,*(undefined8 *)puVar5);
            lVar13 = FUN_010dfe04(uVar12,*(undefined8 *)puVar1);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01323390(lVar13,&local_b8,*(undefined8 *)puVar4);
            uStack_98 = uStack_b0;
            local_a0 = local_b8;
            local_90 = local_a8;
            while (uVar10 = FUN_012b894c(&local_a0,*(undefined8 *)puVar8), (uVar10 & 1) != 0) {
              lVar13 = FUN_00ac5ba8(&local_a0,*(undefined8 *)puVar7);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar10 = FUN_026ea490(lVar13,0);
              if ((uVar10 & 1) != 0) {
                FUN_026ea974(lVar13,0);
                if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac5cb0(*(long *)(param_4 + 0x30),lVar13,*(undefined8 *)puVar2);
              }
            }
            FUN_012b8948(&local_a0,
                         *(undefined8 *)System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo
                        );
          }
          else {
            *(long **)(param_4 + 0x28) = plVar11;
            *(undefined1 *)(plVar11 + 0xc) = 0;
            (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
          }
        }
        FUN_012b8948(&local_80,*(undefined8 *)StringLiteral_6766);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
        if (lVar13 != 0) {
          FUN_0268a094(0x3f800000,lVar13,0);
          *(long *)(param_4 + 0x18) = lVar13;
          *(undefined4 *)(param_4 + 0x10) = 1;
          return 1;
        }
      }
    }
  }
LAB_00e82808:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


