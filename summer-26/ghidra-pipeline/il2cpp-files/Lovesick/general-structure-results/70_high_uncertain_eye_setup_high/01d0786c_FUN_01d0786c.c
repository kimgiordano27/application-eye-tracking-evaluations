/*
FUNCTION_NAME: FUN_01d0786c
ENTRY_POINT: 01d0786c
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


/* WARNING: Removing unreachable block (ram,0x01d07cf8) */

long * FUN_01d0786c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  
  if ((DAT_0377f254 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<PlayableDirector>__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0377f254 = 1;
  }
  puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<PlayableDirector>__;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (param_2 != (long *)0x0) {
    plVar14 = (long *)0x0;
    do {
      uVar11 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_01780344(uVar11,0);
      uVar5 = FUN_0178a8c4(param_2,uVar11,0);
      if ((uVar5 & 1) == 0) {
        return (long *)0x0;
      }
      uVar5 = (**(code **)(*param_2 + 0x3b8))(param_2,*(undefined8 *)(*param_2 + 0x3c0));
      if ((uVar5 & 1) != 0) {
        uVar11 = (**(code **)(*param_2 + 0x468))(param_2,*(undefined8 *)(*param_2 + 0x470));
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
        }
        uVar5 = FUN_01d02640(uVar11,param_1);
        if ((uVar5 & 1) != 0) {
          return param_2;
        }
      }
      if (param_1 == 0) {
LAB_01d07cf4:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = FUN_0178b0b0(param_1,0);
      if ((uVar5 & 1) != 0) {
        plVar6 = (long *)FUN_016abab8(param_2,0);
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x9a8))(plVar6,*(undefined8 *)(*plVar6 + 0x9b0))
           , plVar6 == (long *)0x0)) goto LAB_01d07cf4;
        lVar9 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01d07a44;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_00d59724(plVar6,*(long *)
                                      Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__
                              ,0);
LAB_01d07a44:
        plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar9 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01d07aa4;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar4,0);
LAB_01d07aa4:
          uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar5 & 1) == 0) {
            iVar13 = 5;
            iVar12 = 5;
            goto joined_r0x01d07b70;
          }
          lVar9 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01d07b00;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01d07b00:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar8 = (long *)FUN_01d0786c(param_1,uVar11);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = FUN_0178a8c4(plVar8,0,0);
        } while ((uVar5 & 1) == 0);
        iVar13 = 8;
        iVar12 = 8;
        plVar14 = plVar8;
joined_r0x01d07b70:
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_10310) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01d07bc8;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_10310,0);
LAB_01d07bc8:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
          iVar12 = iVar13;
        }
        if ((iVar12 != 5) && (iVar12 != 0)) {
          return plVar14;
        }
      }
      param_2 = (long *)(**(code **)(*param_2 + 0x888))(param_2,*(undefined8 *)(*param_2 + 0x890));
    } while (param_2 != (long *)0x0);
  }
  return (long *)0x0;
}


