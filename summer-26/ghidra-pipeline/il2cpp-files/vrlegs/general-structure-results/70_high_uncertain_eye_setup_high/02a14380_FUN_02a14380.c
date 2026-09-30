/*
FUNCTION_NAME: FUN_02a14380
ENTRY_POINT: 02a14380
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a14524) */

int FUN_02a14380(long param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  char local_34 [4];
  
  puVar3 = PTR_DAT_03ccf250;
  if ((DAT_041280bd & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ccf250);
    DAT_041280bd = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar3;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0xb8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar5,local_34,0);
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar8 = param_2 >> 7;
  *(byte *)(lVar4 + 0x20) = (byte)param_2 & 0x7f;
  if (uVar8 == 0) {
    iVar6 = 1;
  }
  else {
    uVar7 = 0;
    do {
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(byte *)(lVar4 + uVar7 + 0x20) = *(byte *)(lVar4 + uVar7 + 0x20) | 0x80;
      lVar4 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = uVar7 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      bVar2 = (byte)uVar8;
      uVar8 = uVar8 >> 7;
      *(byte *)(lVar4 + uVar7 + 0x21) = bVar2 & 0x7f;
      uVar7 = uVar1;
    } while (uVar8 != 0);
    iVar6 = (int)uVar1 + 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (param_1 != 0) {
    FUN_029b3ef8(param_1,**(undefined8 **)(*(long *)puVar3 + 0xb8),0,iVar6,0);
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


