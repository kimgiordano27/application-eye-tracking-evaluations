/*
FUNCTION_NAME: FUN_0183b658
ENTRY_POINT: 0183b658
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0183b9cc) */

byte FUN_0183b658(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  
  if ((DAT_03779549 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7740);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventDescriptor>__ctor__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_03779549 = 1;
  }
  puVar1 = StringLiteral_7740;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 0x80);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_7740) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_0183b730;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_7740,4);
LAB_0183b730:
      uVar9 = (*(code *)*puVar6)(plVar11,param_3,puVar6[1]);
      if ((uVar9 & 1) != 0) {
        return 1;
      }
    }
    plVar11 = *(long **)(param_2 + 0x88);
    if (plVar11 == (long *)0x0) {
      bVar5 = 0;
    }
    else {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0183b7ac;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,2);
LAB_0183b7ac:
      plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
      if (plVar11 == (long *)0x0) goto LAB_0183b9c4;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto FUN_0183b814;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)
                                     Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__
                            ,0);
FUN_0183b814:
      puVar4 = StringLiteral_10310;
      plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
      puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar1 = Method_System_Collections_Generic_List<EventDescriptor>__ctor__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0183b894;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar2,0);
LAB_0183b894:
        uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          bVar5 = 0;
          iVar13 = 3;
          iVar12 = 3;
          goto joined_r0x0183b944;
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0183b8f0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,0);
LAB_0183b8f0:
        uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0201fbe8(param_3,uVar7,0);
      } while ((uVar9 & 1) == 0);
      bVar5 = 1;
      iVar13 = 6;
      iVar12 = 6;
joined_r0x0183b944:
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0183b994;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar4,0);
LAB_0183b994:
        (*(code *)*puVar6)(plVar11,puVar6[1]);
        iVar12 = iVar13;
      }
      bVar5 = iVar12 == 6 & bVar5;
    }
    return bVar5;
  }
LAB_0183b9c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


