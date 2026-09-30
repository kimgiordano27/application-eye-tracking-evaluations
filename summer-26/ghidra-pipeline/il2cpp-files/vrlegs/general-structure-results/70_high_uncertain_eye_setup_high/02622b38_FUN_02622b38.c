/*
FUNCTION_NAME: FUN_02622b38
ENTRY_POINT: 02622b38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02622d5c) */
/* WARNING: Removing unreachable block (ram,0x02622d30) */
/* WARNING: Removing unreachable block (ram,0x02622d68) */

void FUN_02622b38(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  char local_34 [4];
  
  puVar1 = PTR_DAT_03cf2220;
  if ((DAT_04123f9c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf22b8);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cf2220);
    FUN_01ab69ac(PTR_DAT_03cf22c0);
    FUN_01ab69ac(PTR_DAT_03cc76f0);
    DAT_04123f9c = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x40);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar9,local_34,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar2 + 0xb8);
  if (*(char *)(lVar6 + 0x19) == '\0') {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    if (*(char *)(lVar6 + 0x18) == '\0') {
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf22c0);
      FUN_025a01cc(lVar2,0);
      uVar3 = thunk_FUN_01a3d4cc(0);
      plVar4 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc76f0);
      FUN_0269e28c(plVar4,uVar3,0);
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf22b8);
      FUN_02622ea0(uVar3,1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_025a03ac(lVar2,plVar4,uVar3,0);
      if (plVar4 != (long *)0x0) {
        lVar2 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cbed08) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02622d18;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cbed08,0);
LAB_02622d18:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *(long *)puVar1;
      }
      *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x19) = 1;
    }
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return;
}


