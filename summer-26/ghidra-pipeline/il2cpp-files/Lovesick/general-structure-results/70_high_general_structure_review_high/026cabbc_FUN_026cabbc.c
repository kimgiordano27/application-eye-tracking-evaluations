/*
FUNCTION_NAME: FUN_026cabbc
ENTRY_POINT: 026cabbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_026cabbc(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar4 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  if ((DAT_03787053 & 1) == 0) {
    thunk_FUN_00d48444(Method_ToggleScriptsOnTouch_OnSelected__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(UnityEngine_UIVertex_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9489);
    thunk_FUN_00d48444(StringLiteral_13536);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(StringLiteral_6003);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<DecodeFile>d__107>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Vertex>__ctor__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_03787053 = 1;
  }
  puVar10 = StringLiteral_6003;
  puVar9 = StringLiteral_3287;
  puVar8 = StringLiteral_3033;
  puVar7 = Method_ToggleScriptsOnTouch_OnSelected__;
  puVar6 = Method_System_Collections_Generic_List<Vertex>__ctor__;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<DecodeFile>d__107>__
  ;
  puVar3 = System_Runtime_InteropServices_InAttribute_TypeInfo;
  puVar2 = PTR_DAT_033ea8a0;
  lVar17 = *(long *)puVar4;
  iVar16 = 0;
  while( true ) {
    lVar11 = *(long *)puVar7;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar7;
    }
    if (*(int *)(*(long *)(lVar11 + 0xb8) + 0x10) <= iVar16) break;
    lVar17 = FUN_015f5b28(lVar17,*(undefined8 *)puVar9,0);
    iVar16 = iVar16 + 1;
  }
  plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,0xc);
  if (plVar12 == (long *)0x0) {
LAB_026cb188:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar17 != 0) &&
     (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0))
  goto LAB_026cb190;
  if ((int)plVar12[3] == 0) goto LAB_026cb18c;
  plVar12[4] = lVar17;
  plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar8,6);
  uVar18 = *(undefined8 *)puVar5;
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar17 = *(long *)puVar6;
  }
  else {
    lVar17 = FUN_026e1668(*(long *)(param_1 + 0x40),0);
  }
  if (plVar13 == (long *)0x0) goto LAB_026cb188;
  if ((lVar17 != 0) &&
     (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0)) {
LAB_026cb190:
    uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar18,0);
  }
  if ((int)plVar13[3] != 0) {
    plVar13[4] = lVar17;
    lVar17 = thunk_FUN_00d93c64(param_1,0);
    if ((lVar17 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
    goto LAB_026cb190;
    if (1 < *(uint *)(plVar13 + 3)) {
      plVar13[5] = lVar17;
      lVar17 = param_1 + 0x20;
      local_64 = FUN_02688390(lVar17,0);
      lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
      if ((lVar11 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
      goto LAB_026cb190;
      if (2 < *(uint *)(plVar13 + 3)) {
        plVar13[6] = lVar11;
        local_68 = FUN_02688470(lVar17,0);
        lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
        if ((lVar11 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_026cb190;
        if (3 < *(uint *)(plVar13 + 3)) {
          plVar13[7] = lVar11;
          local_6c = FUN_026883a0(lVar17,0);
          lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_6c);
          if ((lVar11 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
          goto LAB_026cb190;
          if (4 < *(uint *)(plVar13 + 3)) {
            plVar13[8] = lVar11;
            local_70 = FUN_02688480(lVar17,0);
            lVar17 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_70);
            if ((lVar17 != 0) &&
               (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
            goto LAB_026cb190;
            if (5 < *(uint *)(plVar13 + 3)) {
              plVar13[9] = lVar17;
              lVar17 = FUN_026f7364(uVar18,plVar13,0);
              if ((lVar17 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) goto LAB_026cb190;
              puVar4 = StringLiteral_13536;
              plVar13 = (long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
              uVar15 = *(uint *)(plVar12 + 3);
              if (1 < uVar15) {
                plVar12[5] = lVar17;
                puVar2 = UnityEngine_UIVertex_TypeInfo;
                if (*(long *)UnityEngine_UIVertex_TypeInfo != 0) {
                  lVar17 = thunk_FUN_00d6225c(*(long *)UnityEngine_UIVertex_TypeInfo,
                                              *(undefined8 *)(*plVar12 + 0x40));
                  if (lVar17 == 0) goto LAB_026cb190;
                  uVar15 = *(uint *)(plVar12 + 3);
                }
                if (2 < uVar15) {
                  plVar12[6] = *(long *)puVar2;
                  lVar17 = FUN_017840ac(param_1 + 0x10,0);
                  if ((lVar17 != 0) &&
                     (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar11 == 0)) goto LAB_026cb190;
                  uVar15 = *(uint *)(plVar12 + 3);
                  if (3 < uVar15) {
                    plVar12[7] = lVar17;
                    if (*(long *)puVar10 != 0) {
                      lVar17 = thunk_FUN_00d6225c(*(long *)puVar10,*(undefined8 *)(*plVar12 + 0x40))
                      ;
                      if (lVar17 == 0) goto LAB_026cb190;
                      uVar15 = *(uint *)(plVar12 + 3);
                    }
                    if (4 < uVar15) {
                      plVar12[8] = *(long *)puVar10;
                      lVar17 = FUN_017840ac(param_1 + 0x14,0);
                      if ((lVar17 != 0) &&
                         (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar11 == 0)) goto LAB_026cb190;
                      uVar15 = *(uint *)(plVar12 + 3);
                      if (5 < uVar15) {
                        plVar12[9] = lVar17;
                        plVar1 = plVar13;
                        if (*(int *)(param_1 + 0x30) != 0) {
                          plVar1 = (long *)puVar4;
                        }
                        lVar17 = *plVar1;
                        if (lVar17 != 0) {
                          lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar12 + 0x40));
                          if (lVar11 == 0) goto LAB_026cb190;
                          uVar15 = *(uint *)(plVar12 + 3);
                        }
                        if (6 < uVar15) {
                          plVar12[10] = lVar17;
                          puVar2 = StringLiteral_9489;
                          if (*(long *)StringLiteral_9489 != 0) {
                            lVar17 = thunk_FUN_00d6225c(*(long *)StringLiteral_9489,
                                                        *(undefined8 *)(*plVar12 + 0x40));
                            if (lVar17 == 0) goto LAB_026cb190;
                            uVar15 = *(uint *)(plVar12 + 3);
                          }
                          if (7 < uVar15) {
                            plVar12[0xb] = *(long *)puVar2;
                            lVar17 = FUN_017840ac(param_1 + 0x18,0);
                            if ((lVar17 != 0) &&
                               (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar11 == 0)) goto LAB_026cb190;
                            uVar15 = *(uint *)(plVar12 + 3);
                            if (8 < uVar15) {
                              plVar12[0xc] = lVar17;
                              if (*(long *)puVar10 != 0) {
                                lVar17 = thunk_FUN_00d6225c(*(long *)puVar10,
                                                            *(undefined8 *)(*plVar12 + 0x40));
                                if (lVar17 == 0) goto LAB_026cb190;
                                uVar15 = *(uint *)(plVar12 + 3);
                              }
                              if (9 < uVar15) {
                                plVar12[0xd] = *(long *)puVar10;
                                lVar17 = FUN_017840ac(param_1 + 0x1c,0);
                                if ((lVar17 != 0) &&
                                   (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)
                                                                        (*plVar12 + 0x40)),
                                   lVar11 == 0)) goto LAB_026cb190;
                                uVar15 = *(uint *)(plVar12 + 3);
                                if (10 < uVar15) {
                                  plVar12[0xe] = lVar17;
                                  if (*(int *)(param_1 + 0x34) != 0) {
                                    plVar13 = (long *)puVar4;
                                  }
                                  lVar17 = *plVar13;
                                  if (lVar17 != 0) {
                                    lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)
                                                                        (*plVar12 + 0x40));
                                    if (lVar11 == 0) goto LAB_026cb190;
                                    uVar15 = *(uint *)(plVar12 + 3);
                                  }
                                  if (0xb < uVar15) {
                                    plVar12[0xf] = lVar17;
                                    FUN_01600844(plVar12,0);
                                    return;
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
          }
        }
      }
    }
  }
LAB_026cb18c:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


