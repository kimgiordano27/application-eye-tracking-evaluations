/*
FUNCTION_NAME: FUN_07508630
ENTRY_POINT: 07508630
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_07508630(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  lVar5 = **(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04980b34(lVar5);
  }
  lVar5 = thunk_FUN_04983f60(lVar5);
  FUN_0750a620(lVar5,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8));
  lVar9 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  if (lVar9 != *(long *)(*(long *)(lVar2 + 0xb8) + 8)) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar2 = FUN_08d9f700(*(long *)(param_1 + 0x10),0), lVar5 == 0)) goto LAB_075088cc;
    lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_04980b34(lVar9);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_04983e64(lVar2,lVar9);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar2,lVar9);
      }
    }
    lVar9 = *(long *)(param_2 + 0x20);
    plVar10 = (long *)(lVar5 + 0x10);
    *plVar10 = lVar3;
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_04980b34(lVar9);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_04983e64(lVar2,lVar9);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar2,lVar9);
      }
    }
    thunk_FUN_049ee3d8(plVar10,lVar3);
    lVar9 = *plVar10;
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34(lVar2);
    }
    lVar2 = thunk_FUN_04983e64(lVar9,lVar2);
    if ((lVar2 == 0) || (*(int *)(param_1 + 0x18) < 1))
    goto System_Span<OVRPlugin_Vector2f>__get_IsEmpty;
    uVar12 = 0;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar12) {
LAB_075088d0:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar11 = *(long **)(lVar2 + uVar12 * 8 + 0x20);
      if (plVar11 == (long *)0x0) goto LAB_075088cc;
      lVar3 = *plVar10;
      lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_04980b34(lVar9);
      }
      lVar6 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07508870;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar11,lVar9,0);
LAB_07508870:
      uVar13 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if (lVar3 == 0) goto LAB_075088cc;
      if (*(uint *)(lVar3 + 0x18) <= uVar12) goto LAB_075088d0;
      iVar1 = *(int *)(param_1 + 0x18);
      lVar9 = uVar12 * 4;
      uVar12 = uVar12 + 1;
      *(undefined4 *)(lVar3 + lVar9 + 0x20) = uVar13;
    } while ((int)uVar12 < iVar1);
  }
  if (lVar5 != 0) {
System_Span<OVRPlugin_Vector2f>__get_IsEmpty:
    *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    return lVar5;
  }
LAB_075088cc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


