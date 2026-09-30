/*
FUNCTION_NAME: FUN_01d0f7b4
ENTRY_POINT: 01d0f7b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d0f998) */

void FUN_01d0f7b4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined1 local_38 [4];
  char local_34 [4];
  
  puVar2 = PTR_DAT_03cc0af8;
  if ((DAT_04120cfd & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9c48);
    FUN_01ab69ac(PTR_DAT_03cc9c30);
    FUN_01ab69ac(PTR_DAT_03cc0af8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cc4bb8);
    DAT_04120cfd = 1;
  }
  lVar3 = *(long *)puVar2;
  local_38[0] = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  plVar9 = (long *)*puVar4;
  if (plVar9 != (long *)0x0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    if (1 < *(byte *)(puVar4 + 1)) {
      uVar8 = *(undefined8 *)PTR_DAT_03cc9c30;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_0277b678(uVar8,0);
      local_34[0] = '\0';
      FUN_027e0bd8(uVar8,local_34,0);
      local_38[0] = 0;
      if (param_1 == (long *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      }
      lVar5 = *plVar9;
      lVar10 = *(long *)PTR_DAT_03cc9c48;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      lVar1 = *(long *)PTR_DAT_03cc4bb8;
      if (lVar3 != 0) {
        lVar1 = lVar3;
      }
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
            lVar3 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
            goto LAB_01d0f93c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar3 = FUN_01a472ec(plVar9);
LAB_01d0f93c:
      lVar3 = thunk_FUN_01a41d84(*(undefined8 *)(lVar3 + 8),lVar10);
      (**(code **)(lVar3 + 8))(plVar9,2,param_2,local_38,lVar1,lVar3);
      if (local_34[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
      }
    }
  }
  return;
}


