/*
FUNCTION_NAME: FUN_01bcbd5c
ENTRY_POINT: 01bcbd5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01bcc0d4) */

void FUN_01bcbd5c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_0377e7cd & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventDescriptor>__ctor__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_ToggleVoiceAudioOnTouch_OnSelected__);
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__);
    thunk_FUN_00d48444(StringLiteral_8028);
    DAT_0377e7cd = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar8 = 0;
    }
    else {
      lVar6 = FUN_01bc86f8();
      if (lVar6 == 0) goto LAB_01bcc0cc;
      uVar8 = *(undefined8 *)(lVar6 + 0x18);
    }
    *(undefined8 *)(param_2 + 0x40) = uVar8;
    puVar1 = Method_ToggleVoiceAudioOnTouch_OnSelected__;
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
      uVar8 = *(undefined8 *)StringLiteral_8028;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)Method_ToggleVoiceAudioOnTouch_OnSelected__) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_01bcbe6c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)Method_ToggleVoiceAudioOnTouch_OnSelected__,4);
LAB_01bcbe6c:
      uVar5 = (*(code *)*puVar7)(plVar11,uVar8,puVar7[1]);
      *(undefined4 *)(param_2 + 0x38) = uVar5;
      plVar11 = *(long **)(param_1 + 0x10);
      if (plVar11 != (long *)0x0) {
        lVar6 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto FUN_01bcbed8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,1);
FUN_01bcbed8:
        plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
        if (plVar11 != (long *)0x0) {
          lVar6 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01bcbf40;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_00d59724(plVar11,*(long *)
                                         Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__
                                ,0);
LAB_01bcbf40:
          puVar4 = StringLiteral_10310;
          plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar3 = Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__;
          puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
          puVar1 = Method_System_Collections_Generic_List<EventDescriptor>__ctor__;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
LAB_01bcbf74:
          lVar6 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01bcbfc0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar2,0);
LAB_01bcbfc0:
          uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          if ((uVar9 & 1) != 0) {
            lVar6 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_01bcc01c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,0);
LAB_01bcc01c:
            uVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            uVar9 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar3,0);
            if ((uVar9 & 1) != 0) {
              uVar8 = FUN_01bc703c(param_2);
              FUN_01bcd1e0(param_1,uVar8,*(undefined8 *)(param_2 + 0x40));
            }
            goto LAB_01bcbf74;
          }
          if (plVar11 != (long *)0x0) {
            lVar6 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                  puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_01bcc0a8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar4,0);
LAB_01bcc0a8:
            (*(code *)*puVar7)(plVar11,puVar7[1]);
          }
          return;
        }
      }
    }
  }
LAB_01bcc0cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


