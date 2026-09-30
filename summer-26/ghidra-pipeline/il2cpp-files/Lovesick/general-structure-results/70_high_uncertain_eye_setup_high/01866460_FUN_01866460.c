/*
FUNCTION_NAME: FUN_01866460
ENTRY_POINT: 01866460
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01866838) */

undefined4 FUN_01866460(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  
  if ((DAT_037796bf & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_037796bf = 1;
  }
  puVar5 = StringLiteral_10310;
  puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__;
  uVar12 = 0;
  do {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0178a8c4(param_1,0,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if ((param_1 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0)),
       plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0186658c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar1,0);
LAB_0186658c:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar10 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_018665ec;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar4,0);
LAB_018665ec:
      uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar6 & 1) == 0) {
        uVar14 = 8;
        uVar13 = 8;
        goto joined_r0x018666cc;
      }
      lVar10 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01866648;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_01866648:
      uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01789ac0(uVar9,param_2,0);
      if ((uVar6 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_0178a8c4(uVar9,0,0);
    } while (((uVar6 & 1) == 0) || (uVar6 = FUN_01866460(uVar9,param_2), (uVar6 & 1) == 0));
    uVar12 = 1;
    uVar14 = 7;
    uVar13 = 7;
joined_r0x018666cc:
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0186671c;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar5,0);
LAB_0186671c:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar13 = uVar14;
    }
    if ((uVar13 | 8) != 8) {
      return uVar12;
    }
    param_1 = (long *)(**(code **)(*param_1 + 0x888))(param_1,*(undefined8 *)(*param_1 + 0x890));
  } while( true );
}


