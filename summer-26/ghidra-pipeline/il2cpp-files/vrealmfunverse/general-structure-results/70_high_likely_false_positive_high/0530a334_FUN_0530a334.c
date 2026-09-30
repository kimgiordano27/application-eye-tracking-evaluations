/*
FUNCTION_NAME: FUN_0530a334
ENTRY_POINT: 0530a334
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3
*/


void FUN_0530a334(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  
  if ((DAT_066d0356 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631c570);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo);
    FUN_02b3c81c(System_Xml_Schema_FacetsChecker_FacetsCompiler_TypeInfo);
    FUN_02b3c81c(Mono_Security_X509_X509Stores_TypeInfo);
    FUN_02b3c81c(System_Xml_XmlEventCache_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_Foldout_var);
    FUN_02b3c81c(FadeScreen_<FadeRoutine>d__16_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FieldPath_<>c_TypeInfo);
    FUN_02b3c81c(System_Xml_XmlElement_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631f5b0);
    FUN_02b3c81c(Firebase_Firestore_FieldValueProxy_Type_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632a8d0);
    FUN_02b3c81c(System_IO_FileStream_ReadDelegate_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06321ea8);
    DAT_066d0356 = 1;
  }
  puVar1 = UnityEngine_UIElements_Foldout_var;
  if ((*(long *)(param_1 + 0x20) != 0) && (param_2 != (long *)0x0)) {
    plVar21 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
    uVar7 = (**(code **)(*param_2 + 0x508))
                      (param_2,*(undefined8 *)PTR_DAT_06321ea8,*(undefined8 *)(*param_2 + 0x510));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar7 = FUN_0557ee6c(uVar7,0);
    if (plVar21 != (long *)0x0) {
      iVar5 = (**(code **)(*plVar21 + 0x1c8))(plVar21,*(undefined8 *)(*plVar21 + 0x1d0));
      if (0 < iVar5) {
        iVar5 = 0;
        do {
          plVar8 = (long *)(**(code **)(*plVar21 + 0x208))
                                     (plVar21,iVar5,*(undefined8 *)(*plVar21 + 0x210));
          if (plVar8 == (long *)0x0) goto LAB_0530ab30;
          uVar9 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
          uVar10 = FUN_04c088a0(uVar9,uVar7,4,0);
          if ((uVar10 & 1) != 0) {
            return;
          }
          iVar5 = iVar5 + 1;
          iVar6 = (**(code **)(*plVar21 + 0x1c8))(plVar21,*(undefined8 *)(*plVar21 + 0x1d0));
        } while (iVar5 < iVar6);
      }
      puVar2 = System_Xml_XmlElement_TypeInfo;
      lVar11 = (**(code **)(*param_2 + 0x548))
                         (param_2,*(undefined8 *)PTR_DAT_0631f5b0,
                          *(undefined8 *)System_Xml_XmlElement_TypeInfo,
                          *(undefined8 *)(*param_2 + 0x550));
      puVar1 = PTR_DAT_0632a8d0;
      if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) == 0)) {
        uVar7 = FUN_052b8d08(uVar7,0);
      }
      else {
        if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_0557ee6c(lVar11,0);
        lVar11 = (**(code **)(*param_2 + 0x548))
                           (param_2,*(undefined8 *)puVar1,*(undefined8 *)puVar2,
                            *(undefined8 *)(*param_2 + 0x550));
        puVar1 = System_IO_FileStream_ReadDelegate_TypeInfo;
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) == 0)) {
          uVar7 = FUN_052b8d54(uVar7,0);
        }
        else {
          if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar12 = FUN_0557ee6c(lVar11,0);
          lVar11 = (**(code **)(*param_2 + 0x548))
                             (param_2,*(undefined8 *)puVar1,*(undefined8 *)puVar2,
                              *(undefined8 *)(*param_2 + 0x550));
          puVar1 = PTR_DAT_0631c570;
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) == 0)) {
            uVar7 = FUN_052b8da0(uVar7,0);
          }
          else {
            lVar11 = FUN_04c0ebc8(lVar11,0,0);
            lVar13 = FUN_02b3c908(*(undefined8 *)puVar1,2);
            if (lVar13 == 0) goto LAB_0530ab30;
            if ((*(int *)(lVar13 + 0x18) == 0) ||
               (*(undefined2 *)(lVar13 + 0x20) = 0x20, *(int *)(lVar13 + 0x18) == 1)) {
LAB_0530ab2c:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined2 *)(lVar13 + 0x22) = 0x2b;
            puVar3 = Firebase_Firestore_FieldPath_<>c_TypeInfo;
            if (lVar11 == 0) goto LAB_0530ab30;
            lVar11 = FUN_04c0cec8(lVar11,lVar13,0);
            lVar13 = (**(code **)(*param_2 + 0x548))
                               (param_2,*(undefined8 *)puVar3,*(undefined8 *)puVar2,
                                *(undefined8 *)(*param_2 + 0x550));
            if ((lVar13 == 0) || (*(int *)(lVar13 + 0x10) == 0)) {
              uVar7 = FUN_052b8dec(uVar7,0);
              goto LAB_0530ab5c;
            }
            lVar13 = FUN_04c0ebc8(lVar13,0,0);
            lVar14 = FUN_02b3c908(*(undefined8 *)puVar1,2);
            if (lVar14 == 0) goto LAB_0530ab30;
            if ((*(int *)(lVar14 + 0x18) == 0) ||
               (*(undefined2 *)(lVar14 + 0x20) = 0x20, *(int *)(lVar14 + 0x18) == 1))
            goto LAB_0530ab2c;
            *(undefined2 *)(lVar14 + 0x22) = 0x2b;
            if ((lVar13 == 0) ||
               ((lVar13 = FUN_04c0cec8(lVar13,lVar14,0),
                puVar4 = Firebase_Firestore_FieldValueProxy_Type_TypeInfo,
                puVar3 = FadeScreen_<FadeRoutine>d__16_TypeInfo,
                puVar1 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_TypeInfo,
                lVar11 == 0 || (lVar13 == 0)))) goto LAB_0530ab30;
            uVar10 = *(ulong *)(lVar11 + 0x18);
            iVar5 = (int)uVar10;
            if (iVar5 != *(int *)(lVar13 + 0x18)) {
              uVar7 = FUN_052b8ec4(0);
              goto LAB_0530ab5c;
            }
            plVar21 = (long *)FUN_02b3c908(*(undefined8 *)
                                            UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_TypeInfo
                                           ,uVar10 & 0xffffffff);
            plVar8 = (long *)FUN_02b3c908(*(undefined8 *)puVar1,uVar10 & 0xffffffff);
            uVar15 = (**(code **)(*param_2 + 0x548))
                               (param_2,*(undefined8 *)puVar3,*(undefined8 *)puVar2,
                                *(undefined8 *)(*param_2 + 0x550));
            uVar16 = (**(code **)(*param_2 + 0x548))
                               (param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar2,
                                *(undefined8 *)(*param_2 + 0x550));
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (lVar14 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar14 == 0))
            goto LAB_0530ab30;
            lVar14 = FUN_052dedbc(lVar14,uVar9,uVar15,0);
            if (lVar14 != 0) {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (lVar17 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar17 == 0))
              goto LAB_0530ab30;
              lVar17 = FUN_052dedbc(lVar17,uVar12,uVar16,0);
              uVar9 = uVar12;
              if (lVar17 != 0) {
                if (0 < iVar5) {
                  lVar22 = 0;
                  lVar24 = 0;
                  do {
                    uVar23 = (uint)lVar24;
                    if (*(uint *)(lVar11 + 0x18) <= uVar23) goto LAB_0530ab2c;
                    uVar9 = *(undefined8 *)(lVar11 + 0x20 + lVar24 * 8);
                    lVar20 = *(long *)(lVar14 + 0x40);
                    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar9 = FUN_0557ee6c(uVar9,0);
                    if ((lVar20 == 0) ||
                       (lVar20 = FUN_052d01e8(lVar20,uVar9,0), plVar21 == (long *)0x0))
                    goto LAB_0530ab30;
                    if ((lVar20 != 0) &&
                       (lVar18 = thunk_FUN_02b79548(lVar20,*(undefined8 *)(*plVar21 + 0x40)),
                       lVar18 == 0)) {
LAB_0530ab34:
                      uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                      FUN_02b3c988(uVar7,0);
                    }
                    if (*(uint *)(plVar21 + 3) <= uVar23) goto LAB_0530ab2c;
                    plVar21[lVar24 + 4] = lVar20;
                    thunk_FUN_02bb0e9c((long)plVar21 + lVar22 + 0x20,lVar20);
                    if (*(uint *)(plVar21 + 3) <= uVar23) goto LAB_0530ab2c;
                    lVar20 = lVar11;
                    if (plVar21[lVar24 + 4] == 0) {
LAB_0530ab4c:
                      uVar9 = FUN_02a9a298(lVar20,lVar24);
                      goto LAB_0530ab54;
                    }
                    if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_0530ab2c;
                    lVar20 = *(long *)(lVar17 + 0x40);
                    uVar9 = *(undefined8 *)(lVar13 + 0x20 + lVar24 * 8);
                    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar9 = FUN_0557ee6c(uVar9,0);
                    if ((lVar20 == 0) ||
                       (lVar20 = FUN_052d01e8(lVar20,uVar9,0), plVar8 == (long *)0x0))
                    goto LAB_0530ab30;
                    if ((lVar20 != 0) &&
                       (lVar18 = thunk_FUN_02b79548(lVar20,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar18 == 0)) goto LAB_0530ab34;
                    if (*(uint *)(plVar8 + 3) <= uVar23) goto LAB_0530ab2c;
                    plVar8[lVar24 + 4] = lVar20;
                    thunk_FUN_02bb0e9c((long)plVar8 + lVar22 + 0x20,lVar20);
                    if (*(uint *)(plVar8 + 3) <= uVar23) goto LAB_0530ab2c;
                    lVar20 = lVar13;
                    if (plVar8[lVar24 + 4] == 0) goto LAB_0530ab4c;
                    lVar24 = lVar24 + 1;
                    lVar22 = lVar22 + 8;
                  } while (iVar5 != (int)lVar24);
                }
                plVar19 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo
                                                  );
                FUN_052d42e8(plVar19,uVar7,plVar21,plVar8,0,0);
                puVar1 = System_Xml_XmlEventCache_TypeInfo;
                if (plVar19 != (long *)0x0) {
                  (**(code **)(*plVar19 + 0x1e8))
                            (plVar19,param_3 & 1,*(undefined8 *)(*plVar19 + 0x1f0));
                  uVar7 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230))
                  ;
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44(*(long *)puVar1);
                  }
                  FUN_05309f34(plVar19,uVar7);
                  if ((*(long *)(param_1 + 0x20) != 0) &&
                     (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar11 != 0)) {
                    FUN_052d75cc(lVar11,plVar19,0);
                    if ((*(char *)(param_1 + 0xa0) == '\0') ||
                       (uVar10 = (**(code **)(*plVar19 + 0x1d8))
                                           (plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
                       (uVar10 & 1) == 0)) {
                      return;
                    }
                    lVar11 = *(long *)(param_1 + 0x88);
                    uVar7 = (**(code **)(*plVar19 + 0x1b8))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                    if (lVar11 != 0) {
                      lVar11 = FUN_0452dd40(lVar11,uVar7,
                                            *(undefined8 *)
                                             System_Xml_Schema_FacetsChecker_FacetsCompiler_TypeInfo
                                           );
                      uVar7 = (**(code **)(*plVar19 + 0x188))
                                        (plVar19,*(undefined8 *)(*plVar19 + 400));
                      if (lVar11 != 0) {
                        lVar13 = *(long *)(lVar11 + 0x10);
                        lVar14 = *(long *)Mono_Security_X509_X509Stores_TypeInfo;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar13 != 0) {
                          uVar23 = *(uint *)(lVar11 + 0x18);
                          if (uVar23 < *(uint *)(lVar13 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar23 + 1;
                            *(undefined8 *)(lVar13 + (long)(int)uVar23 * 8 + 0x20) = uVar7;
                            thunk_FUN_02bb0e9c();
                            return;
                          }
                          FUN_037a6538(lVar11,uVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                          return;
                        }
                      }
                    }
                  }
                }
                goto LAB_0530ab30;
              }
            }
LAB_0530ab54:
            uVar7 = FUN_052b8cbc(uVar9,0);
          }
        }
      }
LAB_0530ab5c:
      uVar9 = thunk_FUN_02ba3594(System_IO_FileStream_WriteDelegate_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar7,uVar9);
    }
  }
LAB_0530ab30:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


