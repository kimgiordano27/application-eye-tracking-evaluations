/*
FUNCTION_NAME: FUN_01ff9c60
ENTRY_POINT: 01ff9c60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ffa184) */
/* WARNING: Removing unreachable block (ram,0x01ffa190) */

void FUN_01ff9c60(long *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  char local_64 [4];
  
  puVar5 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if ((DAT_03780843 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f1220);
    thunk_FUN_00d48444(StringLiteral_3942);
    thunk_FUN_00d48444(System_Func<JsonSchema,_string>_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_IReadOnlyCollection<CommonTouch>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
                      );
    thunk_FUN_00d48444(StringLiteral_2098);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03780843 = 1;
  }
  lVar8 = *(long *)puVar5;
  local_64[0] = '\0';
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  thunk_FUN_00d8e500();
  if (lVar8 == 0) {
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar5;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x50);
    local_64[0] = '\0';
    FUN_017d75a8(uVar13,local_64,0);
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar5;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    thunk_FUN_00d8e500();
    if (lVar8 == 0) {
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1220);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01747a0c(lVar8,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      thunk_FUN_00d8e500();
      *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar8;
    }
    if (local_64[0] != '\0') {
      thunk_FUN_00d56f10(uVar13,0);
    }
  }
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar5;
  }
  plVar14 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
  thunk_FUN_00d8e500();
  if (plVar14 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar14 + 0x2e8))(plVar14,param_1,*(undefined8 *)(*plVar14 + 0x2f0));
    if ((uVar9 & 1) == 0) {
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar5;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x50);
      local_64[0] = '\0';
      FUN_017d75a8(uVar13,local_64,0);
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar5;
      }
      plVar14 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
      thunk_FUN_00d8e500();
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar9 = (**(code **)(*plVar14 + 0x2e8))(plVar14,param_1,*(undefined8 *)(*plVar14 + 0x2f0));
      if ((uVar9 & 1) == 0) {
        lVar8 = *(long *)puVar5;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar5;
        }
        plVar14 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
        thunk_FUN_00d8e500();
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar14 + 0x318))(plVar14,param_1,0,*(undefined8 *)(*plVar14 + 800));
        iVar12 = 7;
      }
      else {
        iVar12 = 6;
      }
      if (local_64[0] != '\0') {
        thunk_FUN_00d56f10(uVar13,0);
      }
      puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
      if ((iVar12 == 7) || (iVar12 == 0)) {
        uVar13 = *(undefined8 *)StringLiteral_3942;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_01780344(uVar13,0);
        if ((param_1 == (long *)0x0) ||
           (lVar8 = (**(code **)(*param_1 + 0x218))
                              (param_1,uVar13,0,*(undefined8 *)(*param_1 + 0x220)),
           puVar7 = StringLiteral_2098,
           puVar4 = Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__,
           puVar3 = System_Func<JsonSchema,_string>_TypeInfo, lVar8 == 0)) goto LAB_01ffa174;
        uVar11 = (uint)*(undefined8 *)(lVar8 + 0x18);
        uVar17 = uVar11 - 1;
        if (-1 < (int)uVar17) {
          if (uVar17 < uVar11) {
            bVar2 = false;
            plVar14 = (long *)(lVar8 + (long)(int)uVar17 * 8 + 0x20);
            do {
              plVar10 = (long *)*plVar14;
              if (plVar10 == (long *)0x0) goto LAB_01ffa174;
              if (*plVar10 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              lVar15 = plVar10[2];
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar6);
              }
              uVar13 = FUN_00da52a8(lVar15,*(undefined8 *)puVar4,*(undefined8 *)puVar7);
              uVar9 = FUN_0178a8c4(uVar13,0,0);
              if ((uVar9 & 1) != 0) {
                uVar16 = *(undefined8 *)
                          System_Collections_Generic_IReadOnlyCollection<CommonTouch>_TypeInfo;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar10 = (long *)FUN_01780344(uVar16,0);
                if (plVar10 == (long *)0x0) goto LAB_01ffa174;
                uVar9 = (**(code **)(*plVar10 + 0x2c8))
                                  (plVar10,uVar13,*(undefined8 *)(*plVar10 + 0x2d0));
                if ((uVar9 & 1) != 0) {
                  plVar10 = (long *)FUN_0179c590(uVar13,0);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar5);
                  }
                  if (plVar10 != (long *)0x0) {
                    bVar1 = *(byte *)(*(long *)
                                       Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
                                     + 300);
                    if ((*(byte *)(*plVar10 + 300) < bVar1) ||
                       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)
                         Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
                       )) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(plVar10);
                    }
                  }
                  FUN_01ff8e74(plVar10,param_1);
                  bVar2 = true;
                }
              }
              uVar17 = uVar17 - 1;
              if ((int)uVar17 < 0) {
                if (bVar2) {
                  return;
                }
                goto LAB_01ffa0d8;
              }
              plVar14 = plVar14 + -1;
            } while (uVar17 < *(uint *)(lVar8 + 0x18));
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
LAB_01ffa0d8:
        uVar13 = (**(code **)(*param_1 + 0x888))(param_1,*(undefined8 *)(*param_1 + 0x890));
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        uVar9 = FUN_0178a8c4(uVar13,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_0178a8c4(uVar13,param_1,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01ff9c60(uVar13);
          }
        }
      }
    }
    return;
  }
LAB_01ffa174:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


