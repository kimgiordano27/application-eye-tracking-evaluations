/*
FUNCTION_NAME: DG.Tweening.DOTween$$Kill
ENTRY_POINT: 00f6aaa8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void DG_Tweening_DOTween__Kill(void)

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
  uint uVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar14;
  undefined8 *unaff_x22;
  long unaff_x23;
  int *piVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined2 uStack000000000000006c;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  int in_stack_00000090;
  float fStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  int in_stack_000000c0;
  
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
  thunk_FUN_00d48444(Method_Oculus_Interaction_Throw_RANSACVelocityCalculator_<>c_<_ctor>b__18_0__);
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
  *(undefined1 *)(unaff_x23 + 0x7e1) = 1;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  uStack000000000000006c = 0;
  lVar8 = thunk_FUN_00d62348(*unaff_x22);
  if ((lVar8 == 0) || (FUN_017b46ec(lVar8,0), unaff_x21 == 0)) goto LAB_00f6b0f4;
  lVar9 = FUN_01602744();
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
  lVar14 = *(long *)(unaff_x19 + 0x38);
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Text_UTF8Encoding_GetCharCount__);
  if ((lVar9 == 0) ||
     (FUN_0136b58c(lVar9,lVar8,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_n_s16__,0
                  ), lVar14 == 0)) goto LAB_00f6b0f4;
  FUN_01322b20(lVar14,lVar9,&stack0x000000a0,*(undefined8 *)PTR_DAT_033ebc98);
  puVar4 = StringLiteral_302;
  if (_fStack00000000000000a0 == 0) {
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) goto LAB_00f6b0f4;
    if (1 < *(uint *)(lVar8 + 0x18)) {
      uVar19 = FUN_01600424(*(undefined8 *)
                             Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetInternalData<OVRAnchor_FetchTaskData>__
                            ,*(undefined8 *)(lVar8 + 0x28),
                            *(undefined8 *)Method_System_Uri_FromHex__,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      FUN_02660dac(uVar19,0);
      return;
    }
    goto LAB_00f6b0f8;
  }
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_00f6b0f4;
  iVar7 = FUN_01323730(*(long *)(unaff_x19 + 0x38),_fStack00000000000000a0,
                       *(undefined8 *)
                        Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadCrossAppDomainMap__
                      );
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (((*(long *)(unaff_x19 + 0x18) == 0) || (unaff_x20 == 0)) ||
     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x58), lVar9 == 0)) goto LAB_00f6b0f4;
  FUN_0132138c(lVar9,*(undefined4 *)(unaff_x20 + 0x6c),&stack0x000000a0,
               *(undefined8 *)OVREyeGaze_TypeInfo);
  fVar17 = fStack00000000000000a0;
  uVar19 = *(undefined8 *)(unaff_x20 + 0x44);
  uVar20 = *(undefined8 *)(unaff_x19 + 0x30);
  fVar16 = (float)FUN_00e5eea4();
  piVar15 = (int *)(unaff_x20 + 0x70);
  iVar3 = *piVar15;
  uVar2 = *(undefined4 *)(unaff_x20 + 0x6c);
  fVar18 = (float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar20 >> 0x20);
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000090 = 0;
  FUN_02687cb0(CONCAT44(fVar18,(float)uVar19 - (float)uVar20),fVar18,0,
               fVar16 + *(float *)(unaff_x19 + 0x30),
               fVar17 + *(float *)(unaff_x20 + 0x48) + *(float *)(unaff_x19 + 0x34),0,
               &stack0x00000070,0);
  in_stack_00000088 = CONCAT44(iVar7,uVar2);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x48);
  in_stack_00000090 = iVar3;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_02681b9c(uVar19,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00f6b0f4;
    FUN_02687c20(*(long *)(unaff_x19 + 0x48) + 0x28,0);
    fVar17 = fVar18;
    FUN_02687c20(&stack0x00000070,0);
    if (fVar18 == fVar17) {
      plVar11 = *(long **)(unaff_x19 + 0x48);
      if (plVar11 == (long *)0x0) goto LAB_00f6b0f4;
      if ((*(int *)((long)plVar11 + 0x74) == *piVar15 + -1) && ((int)plVar11[0xe] == iVar7)) {
        in_stack_000000a8 = in_stack_00000078;
        _fStack00000000000000a0 = in_stack_00000070;
        in_stack_000000b8 = in_stack_00000088;
        in_stack_000000b0 = in_stack_00000080;
        in_stack_000000c0 = in_stack_00000090;
        (**(code **)(*plVar11 + 0x188))(plVar11,&stack0x000000a0,*(undefined8 *)(*plVar11 + 400));
        goto LAB_00f6ae1c;
      }
    }
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
  }
LAB_00f6ae1c:
  uVar19 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_0268b4e0(uVar19,0,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
  if (lVar9 != 0) {
    FUN_0268b098(lVar9,0);
    puVar5 = StringLiteral_5329;
    puVar1 = (undefined8 *)StringLiteral_4253;
    puVar4 = PTR_DAT_033ea8a0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      uVar10 = FUN_00e3703c(*(long *)(unaff_x19 + 0x18),0);
      if ((uVar10 & 1) == 0) {
        puVar1 = (undefined8 *)puVar5;
      }
      plVar11 = (long *)FUN_010e5800(lVar9,*puVar1);
      iVar3 = in_stack_00000090;
      uVar6 = in_stack_00000088;
      uVar20 = in_stack_00000080;
      uVar19 = in_stack_00000078;
      lVar9 = in_stack_00000070;
      plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,6);
      puVar4 = StringLiteral_3600;
      if (plVar12 != (long *)0x0) {
        if ((*(long *)StringLiteral_3600 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_3600,*(undefined8 *)(*plVar12 + 0x40)
                                       ), lVar14 == 0)) goto LAB_00f6b0fc;
        uVar13 = *(uint *)(plVar12 + 3);
        if (uVar13 != 0) {
          plVar12[4] = *(long *)puVar4;
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) goto LAB_00f6b0f4;
          if (1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = *(long *)(lVar8 + 0x28);
            if (lVar8 != 0) {
              lVar14 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar14 == 0) goto LAB_00f6b0fc;
              uVar13 = *(uint *)(plVar12 + 3);
            }
            puVar4 = Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_Dispose__;
            if (1 < uVar13) {
              plVar12[5] = lVar8;
              lVar8 = *(long *)puVar4;
              if (lVar8 != 0) {
                lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40));
                if (lVar8 == 0) goto LAB_00f6b0fc;
                uVar13 = *(uint *)(plVar12 + 3);
              }
              if (2 < uVar13) {
                plVar12[6] = *(long *)puVar4;
                lVar8 = FUN_0176eb1c(piVar15,0);
                if ((lVar8 != 0) &&
                   (lVar14 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0
                   )) {
LAB_00f6b0fc:
                  uVar19 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar19,0);
                }
                puVar4 = StringLiteral_6105;
                uVar13 = *(uint *)(plVar12 + 3);
                if (3 < uVar13) {
                  plVar12[7] = lVar8;
                  lVar8 = *(long *)puVar4;
                  if (lVar8 != 0) {
                    lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40));
                    if (lVar8 == 0) goto LAB_00f6b0fc;
                    uVar13 = *(uint *)(plVar12 + 3);
                  }
                  puVar5 = Newtonsoft_Json_JsonReader_State_TypeInfo;
                  if (4 < uVar13) {
                    plVar12[8] = *(long *)puVar4;
                    uStack000000000000006c = FUN_00e5ec0c();
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar5);
                    }
                    lVar8 = FUN_016e8b00(&stack0x0000006c,0);
                    if ((lVar8 != 0) &&
                       (lVar14 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) goto LAB_00f6b0fc;
                    if (5 < *(uint *)(plVar12 + 3)) {
                      plVar12[9] = lVar8;
                      FUN_01600844(plVar12,0);
                      if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                         (FUN_0132138c(*(long *)(unaff_x19 + 0x38),iVar7,&stack0x000000a0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                      ), plVar11 != (long *)0x0)) {
                        in_stack_000000a8 = uVar19;
                        _fStack00000000000000a0 = lVar9;
                        in_stack_000000b8 = uVar6;
                        in_stack_000000b0 = uVar20;
                        in_stack_000000c0 = iVar3;
                        (**(code **)(*plVar11 + 0x178))(plVar11,&stack0x000000a0);
                        if (*(long *)(unaff_x19 + 0x40) != 0) {
                          FUN_00acf528(*(long *)(unaff_x19 + 0x40),plVar11,
                                       *(undefined8 *)StringLiteral_7567);
                          *(long **)(unaff_x19 + 0x48) = plVar11;
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


