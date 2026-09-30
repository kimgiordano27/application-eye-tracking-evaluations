/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 027d4d94
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


void OVRManager__remove_SpaceQueryComplete(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar4 = PTR_DAT_03cfca30;
  if ((DAT_04125006 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfca30);
    DAT_04125006 = 1;
  }
  iVar7 = *(int *)(*(long *)puVar4 + 0xe0);
  if (iVar7 == 0) {
    thunk_FUN_01a58e78();
    iVar7 = *(int *)(*(long *)puVar4 + 0xe0);
  }
  uVar10 = (param_2 & 0xffffffff) * (param_1 & 0xffffffff);
  uVar9 = (param_2 >> 0x20) * (param_1 & 0xffffffff);
  uVar1 = uVar9 << 0x20;
  uVar3 = uVar10 + uVar1;
  if (iVar7 == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = (param_2 & 0xffffffff) * (param_1 >> 0x20);
  uVar2 = uVar8 << 0x20;
  uVar1 = (param_2 >> 0x20) * (param_1 >> 0x20) + (uVar9 >> 0x20) + (uVar8 >> 0x20) +
          (ulong)CARRY8(uVar10,uVar1);
  if (CARRY8(uVar3,uVar2)) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 >> 0x20 == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    *(ulong *)(param_3 + 8) = uVar3 + uVar2;
    *(int *)(param_3 + 4) = (int)uVar1;
    return;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
  uVar5 = thunk_FUN_01a89e68();
  uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
  FUN_0277bb94(uVar5,uVar6,0);
  uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb08);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5,uVar6);
}


