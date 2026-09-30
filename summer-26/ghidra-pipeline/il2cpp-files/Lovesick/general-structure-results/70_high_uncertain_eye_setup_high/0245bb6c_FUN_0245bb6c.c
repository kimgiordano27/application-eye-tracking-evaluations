/*
FUNCTION_NAME: FUN_0245bb6c
ENTRY_POINT: 0245bb6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0245bb6c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = OVR_OpenVR_CVRCompositor_TypeInfo;
  if ((DAT_037824e6 & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_CVRCompositor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Span<Vector2Int>__ctor__);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MemberInfo,_WeakValueSetter>__ctor__
                      );
    DAT_037824e6 = 1;
  }
  puVar4 = Method_System_Collections_Generic_Dictionary<MemberInfo,_WeakValueSetter>__ctor__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023ca264(param_2,*(undefined8 *)puVar4,0,0);
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_90__;
  puVar3 = Method_System_Span<Vector2Int>__ctor__;
  lVar8 = *(long *)(param_1 + 0x1f8);
  if (lVar8 != 0) {
    uVar6 = 0;
    lVar7 = 0x58;
    do {
      if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar6) {
        if (*(long *)(param_1 + 0x210) != 0) {
          FUN_01342a94(param_1 + 0x210,*(undefined8 *)puVar3);
        }
        if (*(long *)(param_1 + 0x220) != 0) {
          FUN_01342a94(param_1 + 0x220,*(undefined8 *)puVar3);
          return;
        }
        return;
      }
      lVar9 = *(long *)(param_1 + 0x200);
      if (lVar9 == 0) break;
      if ((*(uint *)(lVar9 + 0x18) <= uVar6) || (*(uint *)(lVar8 + 0x18) <= uVar6)) {
LAB_0245bd28:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar1 = lVar9 + uVar6 * 4;
      iVar2 = *(int *)(lVar1 + 0x20);
      if ((DAT_03782504 & 1) == 0) {
        thunk_FUN_00d48444(puVar4);
        DAT_03782504 = 1;
      }
      iVar5 = 0;
      if (*(long *)(lVar8 + lVar7) != 0) {
        iVar5 = *(int *)(*(long *)(lVar8 + lVar7) + 8);
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_0245bd28;
      if (iVar2 <= iVar5) {
        iVar2 = iVar5;
      }
      *(int *)(lVar1 + 0x20) = iVar2;
      lVar8 = *(long *)(param_1 + 0x1f8);
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0245bd28;
      lVar8 = lVar8 + lVar7;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x78;
      FUN_0245bd78(lVar8 + -0x38);
      lVar8 = *(long *)(param_1 + 0x1f8);
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


