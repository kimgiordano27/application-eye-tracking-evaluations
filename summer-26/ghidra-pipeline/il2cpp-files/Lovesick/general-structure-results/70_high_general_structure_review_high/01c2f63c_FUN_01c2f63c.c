/*
FUNCTION_NAME: FUN_01c2f63c
ENTRY_POINT: 01c2f63c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c2fb38) */

long FUN_01c2f63c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = System_Net_FileWebRequest_TypeInfo;
  if ((DAT_0377ea3a & 1) == 0) {
    thunk_FUN_00d48444(System_Linq_Expressions_ParameterExpression_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_object>_GetEnumerator__)
    ;
    thunk_FUN_00d48444(Method_TinyJSON_Variant_ToUInt16__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldGetter__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmls_n_s32__);
    thunk_FUN_00d48444(StringLiteral_1968);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebResponseStream_<InitReadAsync>d__52>__
                      );
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableValue_TypeInfo
                      );
    thunk_FUN_00d48444(System_Net_FileWebRequest_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11161);
    thunk_FUN_00d48444(GasPumpSpinners_<CountCoroutine>d__18_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_UIRenderDevice_DrawRanges<ushort,_Vertex>__
                      );
    thunk_FUN_00d48444(StringLiteral_7583);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_Numerics_Vector<ulong>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Threading_Timer_Init__);
    thunk_FUN_00d48444(PTR_DAT_033ebe80);
    thunk_FUN_00d48444(StringLiteral_13237);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_OnNewDevice__);
    DAT_0377ea3a = 1;
  }
  puVar2 = Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_OnNewDevice__;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01c26244(param_1,param_2);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar11);
    lVar11 = *(long *)puVar2;
  }
  puVar1 = StringLiteral_11161;
  lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar13 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar11 + 0xb8);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar13 == 0) goto LAB_01c2fc44;
    FUN_012d239c(lVar13,uVar14,*(undefined8 *)PTR_DAT_033ebe80,0);
    lVar11 = *(long *)puVar2;
    *(long *)(*(long *)(lVar11 + 0xb8) + 8) = lVar13;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar11);
    lVar11 = *(long *)puVar2;
  }
  puVar1 = GasPumpSpinners_<CountCoroutine>d__18_TypeInfo;
  lVar15 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar15 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar11 + 0xb8);
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar15 == 0) goto LAB_01c2fc44;
    FUN_012d239c(lVar15,uVar14,*(undefined8 *)StringLiteral_13237,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar15;
  }
  lVar11 = FUN_010df764(uVar7,lVar13,lVar15,
                        *(undefined8 *)
                         Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldGetter__
                       );
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmls_n_s32__;
  if (lVar11 != 0) {
    uVar7 = FUN_01299a34(lVar11,*(undefined8 *)Method_TinyJSON_Variant_ToUInt16__);
    lVar13 = FUN_010dfe04(uVar7,*(undefined8 *)puVar1);
    puVar6 = StringLiteral_7583;
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = Method_UnityEngine_UIElements_UIR_UIRenderDevice_DrawRanges<ushort,_Vertex>__;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebResponseStream_<InitReadAsync>d__52>__
    ;
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_object>_GetEnumerator__;
    puVar1 = System_Linq_Expressions_ParameterExpression_TypeInfo;
    if (lVar13 != 0) {
      FUN_01323390(lVar13,&local_98,*(undefined8 *)System_Numerics_Vector<ulong>_TypeInfo);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      do {
        do {
          uVar8 = FUN_012b894c(&local_80,*(undefined8 *)puVar3);
          if ((uVar8 & 1) == 0) {
            FUN_012b8948(&local_80,*(undefined8 *)StringLiteral_1968);
            return lVar11;
          }
          uVar7 = FUN_00bedf58(&local_80,
                               *(undefined8 *)
                                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableValue_TypeInfo
                              );
          plVar9 = (long *)FUN_0111dd08(uVar7,*(undefined8 *)Method_System_Threading_Timer_Init__);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar13 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01c2f9b8;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_01c2f9b8:
          plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
LAB_01c2f9cc:
          lVar13 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01c2fa18;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar5,0);
LAB_01c2fa18:
          uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar8 & 1) != 0) {
            lVar13 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_01c2fa74;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_01c2fa74:
            lVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar14 = UnityEngine_UIElements_Slider_UxmlFactory___ctor(lVar13,0);
            uVar8 = FUN_0129aa60(lVar11,uVar14,*(undefined8 *)puVar2);
            if ((uVar8 & 1) == 0) {
              uVar14 = UnityEngine_UIElements_Slider_UxmlFactory___ctor(lVar13,0);
              FUN_0129a054(lVar11,uVar14,uVar7,*(undefined8 *)puVar1);
            }
            goto LAB_01c2f9cc;
          }
        } while (plVar9 == (long *)0x0);
        lVar13 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_10310) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01c2fb28;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_10310,0);
LAB_01c2fb28:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      } while( true );
    }
  }
LAB_01c2fc44:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


