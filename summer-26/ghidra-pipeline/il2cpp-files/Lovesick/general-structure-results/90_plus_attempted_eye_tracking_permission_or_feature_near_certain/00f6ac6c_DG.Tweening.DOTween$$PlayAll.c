/*
FUNCTION_NAME: DG.Tweening.DOTween$$PlayAll
ENTRY_POINT: 00f6ac6c
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


void DG_Tweening_DOTween__PlayAll(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  int in_stack_00000090;
  float fStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  int in_stack_000000c0;
  
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_00f6b0f4;
  FUN_0132138c(*(long *)(param_1 + 0x58),*(undefined4 *)(unaff_x20 + 0x6c),&stack0x000000a0,
               *(undefined8 *)OVREyeGaze_TypeInfo);
  fVar16 = fStack00000000000000a0;
  uVar18 = *(undefined8 *)(unaff_x20 + 0x44);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x30);
  fVar15 = (float)FUN_00e5eea4();
  piVar14 = (int *)(unaff_x20 + 0x70);
  iVar3 = *piVar14;
  uVar2 = *(undefined4 *)(unaff_x20 + 0x6c);
  fVar17 = (float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000090 = 0;
  FUN_02687cb0(CONCAT44(fVar17,(float)uVar18 - (float)uVar19),fVar17,0,
               fVar15 + *(float *)(unaff_x19 + 0x30),
               fVar16 + *(float *)(unaff_x20 + 0x48) + *(float *)(unaff_x19 + 0x34),0,
               &stack0x00000070,0);
  in_stack_00000088 = CONCAT44(param_2,uVar2);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x48);
  in_stack_00000090 = iVar3;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_02681b9c(uVar18,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00f6b0f4;
    FUN_02687c20(*(long *)(unaff_x19 + 0x48) + 0x28,0);
    fVar16 = fVar17;
    FUN_02687c20(&stack0x00000070,0);
    if (fVar17 == fVar16) {
      plVar9 = *(long **)(unaff_x19 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_00f6b0f4;
      if ((*(int *)((long)plVar9 + 0x74) == *piVar14 + -1) && ((int)plVar9[0xe] == param_2)) {
        in_stack_000000a8 = in_stack_00000078;
        _fStack00000000000000a0 = in_stack_00000070;
        in_stack_000000b8 = in_stack_00000088;
        in_stack_000000b0 = in_stack_00000080;
        in_stack_000000c0 = in_stack_00000090;
        (**(code **)(*plVar9 + 0x188))(plVar9,&stack0x000000a0,*(undefined8 *)(*plVar9 + 400));
        goto LAB_00f6ae1c;
      }
    }
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
  }
LAB_00f6ae1c:
  uVar18 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0268b4e0(uVar18,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
  if (lVar10 != 0) {
    FUN_0268b098(lVar10,0);
    puVar5 = StringLiteral_5329;
    puVar1 = (undefined8 *)StringLiteral_4253;
    puVar4 = PTR_DAT_033ea8a0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      uVar8 = FUN_00e3703c(*(long *)(unaff_x19 + 0x18),0);
      if ((uVar8 & 1) == 0) {
        puVar1 = (undefined8 *)puVar5;
      }
      plVar9 = (long *)FUN_010e5800(lVar10,*puVar1);
      iVar3 = in_stack_00000090;
      uVar7 = in_stack_00000088;
      uVar6 = in_stack_00000080;
      uVar19 = in_stack_00000078;
      uVar18 = in_stack_00000070;
      plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,6);
      puVar4 = StringLiteral_3600;
      if (plVar11 != (long *)0x0) {
        if ((*(long *)StringLiteral_3600 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(*(long *)StringLiteral_3600,*(undefined8 *)(*plVar11 + 0x40)
                                       ), lVar10 == 0)) goto LAB_00f6b0fc;
        uVar13 = *(uint *)(plVar11 + 3);
        if (uVar13 != 0) {
          plVar11[4] = *(long *)puVar4;
          lVar10 = *(long *)(unaff_x22 + 0x10);
          if (lVar10 == 0) goto LAB_00f6b0f4;
          if (1 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = *(long *)(lVar10 + 0x28);
            if (lVar10 != 0) {
              lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar12 == 0) goto LAB_00f6b0fc;
              uVar13 = *(uint *)(plVar11 + 3);
            }
            puVar4 = Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_Dispose__;
            if (1 < uVar13) {
              plVar11[5] = lVar10;
              lVar10 = *(long *)puVar4;
              if (lVar10 != 0) {
                lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                if (lVar10 == 0) goto LAB_00f6b0fc;
                uVar13 = *(uint *)(plVar11 + 3);
              }
              if (2 < uVar13) {
                plVar11[6] = *(long *)puVar4;
                lVar10 = FUN_0176eb1c(piVar14,0);
                if ((lVar10 != 0) &&
                   (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar12 == 0)) {
LAB_00f6b0fc:
                  uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar18,0);
                }
                puVar4 = StringLiteral_6105;
                uVar13 = *(uint *)(plVar11 + 3);
                if (3 < uVar13) {
                  plVar11[7] = lVar10;
                  lVar10 = *(long *)puVar4;
                  if (lVar10 != 0) {
                    lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
                    if (lVar10 == 0) goto LAB_00f6b0fc;
                    uVar13 = *(uint *)(plVar11 + 3);
                  }
                  puVar5 = Newtonsoft_Json_JsonReader_State_TypeInfo;
                  if (4 < uVar13) {
                    plVar11[8] = *(long *)puVar4;
                    in_stack_00000068._4_2_ = FUN_00e5ec0c();
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar5);
                    }
                    lVar10 = FUN_016e8b00((long)&stack0x00000068 + 4,0);
                    if ((lVar10 != 0) &&
                       (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar12 == 0)) goto LAB_00f6b0fc;
                    if (5 < *(uint *)(plVar11 + 3)) {
                      plVar11[9] = lVar10;
                      FUN_01600844(plVar11,0);
                      if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                         (FUN_0132138c(*(long *)(unaff_x19 + 0x38),param_2,&stack0x000000a0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                      ), plVar9 != (long *)0x0)) {
                        in_stack_000000a8 = uVar19;
                        _fStack00000000000000a0 = uVar18;
                        in_stack_000000b8 = uVar7;
                        in_stack_000000b0 = uVar6;
                        in_stack_000000c0 = iVar3;
                        (**(code **)(*plVar9 + 0x178))(plVar9,&stack0x000000a0);
                        if (*(long *)(unaff_x19 + 0x40) != 0) {
                          FUN_00acf528(*(long *)(unaff_x19 + 0x40),plVar9,
                                       *(undefined8 *)StringLiteral_7567);
                          *(long **)(unaff_x19 + 0x48) = plVar9;
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
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
  }
LAB_00f6b0f4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


