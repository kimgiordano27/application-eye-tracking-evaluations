/*
FUNCTION_NAME: DG.Tweening.DOTween$$Pause
ENTRY_POINT: 00f6abe8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_DOTween__Pause(ulong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  long unaff_x22;
  int *piVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000068;
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
  
  if ((param_1 & 1) == 0) {
    return;
  }
  lVar14 = *(long *)(unaff_x19 + 0x38);
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Text_UTF8Encoding_GetCharCount__);
  if ((lVar8 == 0) || (FUN_0136b58c(), lVar14 == 0)) goto LAB_00f6b0f4;
  FUN_01322b20(lVar14,lVar8,&stack0x000000a0,*(undefined8 *)PTR_DAT_033ebc98);
  puVar4 = StringLiteral_302;
  if (_fStack00000000000000a0 == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x10);
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
     (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x58), lVar8 == 0)) goto LAB_00f6b0f4;
  FUN_0132138c(lVar8,*(undefined4 *)(unaff_x20 + 0x6c),&stack0x000000a0,
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
  uVar9 = FUN_02681b9c(uVar19,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00f6b0f4;
    FUN_02687c20(*(long *)(unaff_x19 + 0x48) + 0x28,0);
    fVar17 = fVar18;
    FUN_02687c20(&stack0x00000070,0);
    if (fVar18 == fVar17) {
      plVar10 = *(long **)(unaff_x19 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_00f6b0f4;
      if ((*(int *)((long)plVar10 + 0x74) == *piVar15 + -1) && ((int)plVar10[0xe] == iVar7)) {
        in_stack_000000a8 = in_stack_00000078;
        _fStack00000000000000a0 = in_stack_00000070;
        in_stack_000000b8 = in_stack_00000088;
        in_stack_000000b0 = in_stack_00000080;
        in_stack_000000c0 = in_stack_00000090;
        (**(code **)(*plVar10 + 0x188))(plVar10,&stack0x000000a0,*(undefined8 *)(*plVar10 + 400));
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
  uVar9 = FUN_0268b4e0(uVar19,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
  if (lVar8 != 0) {
    FUN_0268b098(lVar8,0);
    puVar5 = StringLiteral_5329;
    puVar1 = (undefined8 *)StringLiteral_4253;
    puVar4 = PTR_DAT_033ea8a0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      uVar9 = FUN_00e3703c(*(long *)(unaff_x19 + 0x18),0);
      if ((uVar9 & 1) == 0) {
        puVar1 = (undefined8 *)puVar5;
      }
      plVar10 = (long *)FUN_010e5800(lVar8,*puVar1);
      iVar3 = in_stack_00000090;
      uVar6 = in_stack_00000088;
      uVar20 = in_stack_00000080;
      uVar19 = in_stack_00000078;
      lVar8 = in_stack_00000070;
      plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,6);
      puVar4 = StringLiteral_3600;
      if (plVar11 != (long *)0x0) {
        if ((*(long *)StringLiteral_3600 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_3600,*(undefined8 *)(*plVar11 + 0x40)
                                       ), lVar14 == 0)) goto LAB_00f6b0fc;
        uVar13 = *(uint *)(plVar11 + 3);
        if (uVar13 != 0) {
          plVar11[4] = *(long *)puVar4;
          lVar14 = *(long *)(unaff_x22 + 0x10);
          if (lVar14 == 0) goto LAB_00f6b0f4;
          if (1 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = *(long *)(lVar14 + 0x28);
            if (lVar14 != 0) {
              lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar12 == 0) goto LAB_00f6b0fc;
              uVar13 = *(uint *)(plVar11 + 3);
            }
            puVar4 = Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_Dispose__;
            if (1 < uVar13) {
              plVar11[5] = lVar14;
              lVar14 = *(long *)puVar4;
              if (lVar14 != 0) {
                lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                if (lVar14 == 0) goto LAB_00f6b0fc;
                uVar13 = *(uint *)(plVar11 + 3);
              }
              if (2 < uVar13) {
                plVar11[6] = *(long *)puVar4;
                lVar14 = FUN_0176eb1c(piVar15,0);
                if ((lVar14 != 0) &&
                   (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar12 == 0)) {
LAB_00f6b0fc:
                  uVar19 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar19,0);
                }
                puVar4 = StringLiteral_6105;
                uVar13 = *(uint *)(plVar11 + 3);
                if (3 < uVar13) {
                  plVar11[7] = lVar14;
                  lVar14 = *(long *)puVar4;
                  if (lVar14 != 0) {
                    lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                    if (lVar14 == 0) goto LAB_00f6b0fc;
                    uVar13 = *(uint *)(plVar11 + 3);
                  }
                  puVar5 = Newtonsoft_Json_JsonReader_State_TypeInfo;
                  if (4 < uVar13) {
                    plVar11[8] = *(long *)puVar4;
                    in_stack_00000068._4_2_ = FUN_00e5ec0c();
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar5);
                    }
                    lVar14 = FUN_016e8b00((long)&stack0x00000068 + 4,0);
                    if ((lVar14 != 0) &&
                       (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar12 == 0)) goto LAB_00f6b0fc;
                    if (5 < *(uint *)(plVar11 + 3)) {
                      plVar11[9] = lVar14;
                      FUN_01600844(plVar11,0);
                      if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                         (FUN_0132138c(*(long *)(unaff_x19 + 0x38),iVar7,&stack0x000000a0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                      ), plVar10 != (long *)0x0)) {
                        in_stack_000000a8 = uVar19;
                        _fStack00000000000000a0 = lVar8;
                        in_stack_000000b8 = uVar6;
                        in_stack_000000b0 = uVar20;
                        in_stack_000000c0 = iVar3;
                        (**(code **)(*plVar10 + 0x178))(plVar10,&stack0x000000a0);
                        if (*(long *)(unaff_x19 + 0x40) != 0) {
                          FUN_00acf528(*(long *)(unaff_x19 + 0x40),plVar10,
                                       *(undefined8 *)StringLiteral_7567);
                          *(long **)(unaff_x19 + 0x48) = plVar10;
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


