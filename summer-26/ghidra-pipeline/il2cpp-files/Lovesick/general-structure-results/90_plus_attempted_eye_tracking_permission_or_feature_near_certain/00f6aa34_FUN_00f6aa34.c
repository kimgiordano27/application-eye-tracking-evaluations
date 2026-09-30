/*
FUNCTION_NAME: FUN_00f6aa34
ENTRY_POINT: 00f6aa34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_00f6aa34(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined2 local_d4 [2];
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_b0;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_80;
  
  puVar4 = Method_Oculus_Interaction_Throw_RANSACVelocityCalculator_<>c_<_ctor>b__18_0__;
  if ((DAT_037757e1 & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_5329);
    thunk_FUN_00d48444(StringLiteral_4253);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(StringLiteral_7567);
    thunk_FUN_00d48444(PTR_DAT_033ebc98);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadCrossAppDomainMap__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Text_UTF8Encoding_GetCharCount__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_n_s16__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Throw_RANSACVelocityCalculator_<>c_<_ctor>b__18_0__
                      );
    thunk_FUN_00d48444(Method_System_Uri_FromHex__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_Dispose__);
    thunk_FUN_00d48444(
                      Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetInternalData<OVRAnchor_FetchTaskData>__
                      );
    thunk_FUN_00d48444(StringLiteral_6105);
    thunk_FUN_00d48444(StringLiteral_3600);
    DAT_037757e1 = 1;
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_d4[0] = 0;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  if ((lVar8 == 0) || (FUN_017b46ec(lVar8,0), param_2 == 0)) goto LAB_00f6b0f4;
  lVar9 = FUN_01602744(param_2,0x2c,0,0);
  *(long *)(lVar8 + 0x10) = lVar9;
  if (lVar9 == 0) goto LAB_00f6b0f4;
  if (*(int *)(lVar9 + 0x18) != 2) {
    return;
  }
  uVar10 = thunk_FUN_015fe514(*(undefined8 *)(lVar9 + 0x20),
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_get_Current__
                              ,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x38);
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Text_UTF8Encoding_GetCharCount__);
  if ((lVar9 == 0) ||
     (FUN_0136b58c(lVar9,lVar8,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_n_s16__,0
                  ), lVar15 == 0)) goto LAB_00f6b0f4;
  FUN_01322b20(lVar15,lVar9,&local_a0,*(undefined8 *)PTR_DAT_033ebc98);
  puVar4 = StringLiteral_302;
  if (local_a0 == 0) {
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) goto LAB_00f6b0f4;
    if (1 < *(uint *)(lVar8 + 0x18)) {
      uVar20 = FUN_01600424(*(undefined8 *)
                             Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetInternalData<OVRAnchor_FetchTaskData>__
                            ,*(undefined8 *)(lVar8 + 0x28),
                            *(undefined8 *)Method_System_Uri_FromHex__,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      FUN_02660dac(uVar20,0);
      return;
    }
    goto LAB_00f6b0f8;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_00f6b0f4;
  iVar7 = FUN_01323730(*(long *)(param_1 + 0x38),local_a0,
                       *(undefined8 *)
                        Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadCrossAppDomainMap__
                      );
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (((*(long *)(param_1 + 0x18) == 0) || (param_3 == 0)) ||
     (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x58), lVar9 == 0)) goto LAB_00f6b0f4;
  FUN_0132138c(lVar9,*(undefined4 *)(param_3 + 0x6c),&local_a0,*(undefined8 *)OVREyeGaze_TypeInfo);
  fVar18 = (float)local_a0;
  uVar20 = *(undefined8 *)(param_3 + 0x44);
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  fVar17 = (float)FUN_00e5eea4(param_3,0);
  piVar16 = (int *)(param_3 + 0x70);
  iVar3 = *piVar16;
  uVar2 = *(undefined4 *)(param_3 + 0x6c);
  fVar19 = (float)((ulong)uVar20 >> 0x20) - (float)((ulong)uVar21 >> 0x20);
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  FUN_02687cb0(CONCAT44(fVar19,(float)uVar20 - (float)uVar21),fVar19,0,
               fVar17 + *(float *)(param_1 + 0x30),
               fVar18 + *(float *)(param_3 + 0x48) + *(float *)(param_1 + 0x34),0,&local_d0,0);
  local_b8 = CONCAT44(iVar7,uVar2);
  uVar20 = *(undefined8 *)(param_1 + 0x48);
  local_b0 = iVar3;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_02681b9c(uVar20,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00f6b0f4;
    FUN_02687c20(*(long *)(param_1 + 0x48) + 0x28,0);
    fVar18 = fVar19;
    FUN_02687c20(&local_d0,0);
    if (fVar19 == fVar18) {
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 == (long *)0x0) goto LAB_00f6b0f4;
      if ((*(int *)((long)plVar11 + 0x74) == *piVar16 + -1) && ((int)plVar11[0xe] == iVar7)) {
        uStack_98 = uStack_c8;
        local_a0 = local_d0;
        uStack_88 = local_b8;
        uStack_90 = uStack_c0;
        local_80 = local_b0;
        (**(code **)(*plVar11 + 0x188))(plVar11,&local_a0,*(undefined8 *)(*plVar11 + 400));
        goto LAB_00f6ae1c;
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
LAB_00f6ae1c:
  uVar20 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_0268b4e0(uVar20,0,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
  if (lVar9 != 0) {
    FUN_0268b098(lVar9,0);
    puVar5 = StringLiteral_5329;
    puVar1 = (undefined8 *)StringLiteral_4253;
    puVar4 = PTR_DAT_033ea8a0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar10 = FUN_00e3703c(*(long *)(param_1 + 0x18),0);
      if ((uVar10 & 1) == 0) {
        puVar1 = (undefined8 *)puVar5;
      }
      plVar11 = (long *)FUN_010e5800(lVar9,*puVar1);
      iVar3 = local_b0;
      uVar6 = local_b8;
      uVar21 = uStack_c0;
      uVar20 = uStack_c8;
      lVar9 = local_d0;
      plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,6);
      puVar4 = StringLiteral_3600;
      if (plVar12 != (long *)0x0) {
        if ((*(long *)StringLiteral_3600 != 0) &&
           (lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_3600,*(undefined8 *)(*plVar12 + 0x40)
                                       ), lVar15 == 0)) goto LAB_00f6b0fc;
        uVar14 = *(uint *)(plVar12 + 3);
        if (uVar14 != 0) {
          plVar12[4] = *(long *)puVar4;
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) goto LAB_00f6b0f4;
          if (1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = *(long *)(lVar8 + 0x28);
            if (lVar8 != 0) {
              lVar15 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar15 == 0) goto LAB_00f6b0fc;
              uVar14 = *(uint *)(plVar12 + 3);
            }
            puVar4 = Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_Dispose__;
            if (1 < uVar14) {
              plVar12[5] = lVar8;
              lVar8 = *(long *)puVar4;
              if (lVar8 != 0) {
                lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40));
                if (lVar8 == 0) goto LAB_00f6b0fc;
                uVar14 = *(uint *)(plVar12 + 3);
              }
              if (2 < uVar14) {
                plVar12[6] = *(long *)puVar4;
                lVar8 = FUN_0176eb1c(piVar16,0);
                if ((lVar8 != 0) &&
                   (lVar15 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar15 == 0
                   )) {
LAB_00f6b0fc:
                  uVar20 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar20,0);
                }
                puVar4 = StringLiteral_6105;
                uVar14 = *(uint *)(plVar12 + 3);
                if (3 < uVar14) {
                  plVar12[7] = lVar8;
                  lVar8 = *(long *)puVar4;
                  if (lVar8 != 0) {
                    lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40));
                    if (lVar8 == 0) goto LAB_00f6b0fc;
                    uVar14 = *(uint *)(plVar12 + 3);
                  }
                  puVar5 = Newtonsoft_Json_JsonReader_State_TypeInfo;
                  if (4 < uVar14) {
                    plVar12[8] = *(long *)puVar4;
                    local_d4[0] = FUN_00e5ec0c(param_3,0);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar5);
                    }
                    lVar8 = FUN_016e8b00(local_d4,0);
                    if ((lVar8 != 0) &&
                       (lVar15 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar15 == 0)) goto LAB_00f6b0fc;
                    if (5 < *(uint *)(plVar12 + 3)) {
                      plVar12[9] = lVar8;
                      uVar13 = FUN_01600844(plVar12,0);
                      if ((*(long *)(param_1 + 0x38) != 0) &&
                         (FUN_0132138c(*(long *)(param_1 + 0x38),iVar7,&local_a0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                      ), lVar8 = local_a0, plVar11 != (long *)0x0)) {
                        uStack_98 = uVar20;
                        local_a0 = lVar9;
                        uStack_88 = uVar6;
                        uStack_90 = uVar21;
                        local_80 = iVar3;
                        (**(code **)(*plVar11 + 0x178))
                                  (plVar11,&local_a0,param_1,uVar13,lVar8,
                                   *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                                   *(undefined8 *)(*plVar11 + 0x180));
                        if (*(long *)(param_1 + 0x40) != 0) {
                          FUN_00acf528(*(long *)(param_1 + 0x40),plVar11,
                                       *(undefined8 *)StringLiteral_7567);
                          *(long **)(param_1 + 0x48) = plVar11;
                          return;
                        }
                      }
                      goto LAB_00f6b0f4;
                    }
                  }
                }
              }
            }
          }
        }
LAB_00f6b0f8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
  }
LAB_00f6b0f4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


