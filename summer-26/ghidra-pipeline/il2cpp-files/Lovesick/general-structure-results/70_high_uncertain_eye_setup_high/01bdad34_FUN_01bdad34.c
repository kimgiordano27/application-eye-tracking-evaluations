/*
FUNCTION_NAME: FUN_01bdad34
ENTRY_POINT: 01bdad34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bdb078) */

void FUN_01bdad34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  
  if ((DAT_0377e856 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eac68);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_7536);
    DAT_0377e856 = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar10 = *(long **)(*(long *)(param_1 + 0x38) + 0x10), plVar10 != (long *)0x0)) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_033eac68) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01bdae1c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)PTR_DAT_033eac68,0);
LAB_01bdae1c:
    uVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    FUN_01bd2278(uVar6,param_2);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (plVar10 = *(long **)(*(long *)(param_1 + 0x38) + 0x10), plVar10 != (long *)0x0)) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01bdae94;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_00d59724(plVar10,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__
                            ,0);
LAB_01bdae94:
      puVar4 = StringLiteral_10310;
      plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
      puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar2 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
      puVar1 = Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>__ctor__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01bdaf14;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,0);
LAB_01bdaf14:
        uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar10 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar8 == 0) goto LAB_01bdb028;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_01bdb010;
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01bdaf70;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,0);
LAB_01bdaf70:
        uVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        plVar11 = *(long **)(param_1 + 0x18);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01bdafd4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,0);
LAB_01bdafd4:
        uVar6 = (*(code *)*puVar5)(plVar11,uVar6,puVar5[1]);
        FUN_01bd24ec(uVar6,param_2);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_01bdb010:
    if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_01bdb044;
    }
  }
LAB_01bdb028:
  puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0);
LAB_01bdb044:
  (*(code *)*puVar5)(plVar10,puVar5[1]);
  return;
}


