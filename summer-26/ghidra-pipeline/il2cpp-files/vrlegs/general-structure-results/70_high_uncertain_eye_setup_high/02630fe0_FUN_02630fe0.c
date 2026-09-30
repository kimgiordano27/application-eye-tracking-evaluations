/*
FUNCTION_NAME: FUN_02630fe0
ENTRY_POINT: 02630fe0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02631258) */

void FUN_02630fe0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  char local_34 [4];
  
  puVar1 = PTR_DAT_03cf26c8;
  if ((DAT_04124010 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf26d0);
    FUN_01ab69ac(PTR_DAT_03cf26d8);
    FUN_01ab69ac(PTR_DAT_03cf26e0);
    FUN_01ab69ac(PTR_DAT_03cf26c8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_04124010 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  plVar4 = (long *)**(long **)(lVar3 + 0xb8);
  if (plVar4 == (long *)0x0) {
LAB_02631250:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
  local_34[0] = '\0';
  FUN_027e0bd8(uVar5,local_34,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  plVar4 = (long *)**(long **)(lVar3 + 0xb8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
  if (iVar2 == 0) {
    lVar3 = 0;
    uVar12 = 3;
  }
  else {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    plVar4 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    uVar11 = *(undefined8 *)PTR_DAT_03cf26d8;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_0277b678(uVar11,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar11,uVar11);
    }
    lVar6 = (**(code **)(*plVar4 + 0x428))(plVar4,uVar11,*(undefined8 *)(*plVar4 + 0x430));
    if (lVar6 == 0) {
      lVar3 = 0;
    }
    else {
      uVar11 = *(undefined8 *)PTR_DAT_03cf26d0;
      lVar3 = thunk_FUN_01a89d6c(lVar6,uVar11);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar6,uVar11);
      }
    }
    uVar12 = 4;
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
  }
  puVar1 = PTR_DAT_03cf26e0;
  if ((uVar12 | 4) == 4) {
    if (lVar3 == 0) goto LAB_02631250;
    uVar12 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar12) {
      uVar10 = 0;
      do {
        if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar4 = *(long **)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
        if (plVar4 == (long *)0x0) goto LAB_02631250;
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0263121c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar1,0);
LAB_0263121c:
        (*(code *)*puVar7)(plVar4,param_1,puVar7[1]);
        uVar12 = *(uint *)(lVar3 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar12);
    }
  }
  return;
}


