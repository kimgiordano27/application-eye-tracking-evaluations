/*
FUNCTION_NAME: FUN_01bdbb9c
ENTRY_POINT: 01bdbb9c
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


/* WARNING: Removing unreachable block (ram,0x01bdbe14) */

byte FUN_01bdbb9c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  
  if ((DAT_0377e85e & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    DAT_0377e85e = 1;
  }
  plVar4 = (long *)FUN_01bdb884(param_1);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_01bdbc58;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_00d59724(plVar4,*(long *)
                                Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__
                        ,0);
LAB_01bdbc58:
  puVar3 = StringLiteral_10310;
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar1 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01bdbcd0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar2,0);
LAB_01bdbcd0:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      bVar10 = 0;
      iVar12 = 5;
      iVar11 = 5;
      goto joined_r0x01bdbd88;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01bdbd2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar1,0);
LAB_01bdbd2c:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar6,uVar6);
    }
    lVar7 = (**(code **)(*param_2 + 0x218))(param_2,uVar6,0,*(undefined8 *)(*param_2 + 0x220));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  } while (*(int *)(lVar7 + 0x18) < 1);
  bVar10 = 1;
  iVar12 = 4;
  iVar11 = 4;
joined_r0x01bdbd88:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01bdbdd8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar3,0);
LAB_01bdbdd8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
    iVar11 = iVar12;
  }
  return iVar11 == 4 & bVar10;
}


