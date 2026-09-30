/*
FUNCTION_NAME: FUN_020ae830
ENTRY_POINT: 020ae830
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


/* WARNING: Removing unreachable block (ram,0x020aeaa4) */

void FUN_020ae830(long param_1,long param_2,uint param_3,undefined8 ****param_4,long param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong __n;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long local_80;
  char local_74 [4];
  undefined8 ***local_70;
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  plVar5 = *(long **)(*(long *)(param_5 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar5[0xd] + 0xfc);
  local_70 = param_4;
  if ((*(byte *)(*plVar5 + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar2 = thunk_FUN_01a89e68();
  FUN_02212fcc(lVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8));
  lVar3 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  local_88 = **(undefined8 **)(lVar3 + 0xb8);
  local_74[0] = '\0';
  FUN_027e0bd8(local_88,local_74,0);
  cVar1 = *(char *)(param_1 + 0x1c);
  thunk_FUN_01a4b338();
  if (cVar1 == '\0') {
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cda238);
    uVar6 = FUN_027b3d94(uVar6,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cc17e0);
    uVar4 = thunk_FUN_01a89e68();
    FUN_0277b418(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,param_5);
  }
  plVar5 = (long *)thunk_FUN_01a59484(*(undefined8 *)(param_1 + 0x20),
                                      *(undefined8 *)
                                       (**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80));
  lVar3 = *plVar5;
  thunk_FUN_01a4b338();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a4b338();
  FUN_018820a8(lVar2,*(undefined8 *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80),lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  thunk_FUN_01a4b338();
  FUN_018820a8(lVar2,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80) + 0x20,uVar6);
  lVar7 = *(long *)(param_5 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x68) + 0x28)) {
    param_4 = &local_70;
  }
  memcpy(auStack_90 + -(__n + 0xf & 0x1fffffff0),param_4,__n);
  FUN_01ab69d4(lVar2,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x60,
               auStack_90 + -(__n + 0xf & 0x1fffffff0),__n);
  if (lVar3 != 0) {
    thunk_FUN_01a4b338();
    FUN_018820a8(lVar3,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80) + 0x20,lVar2)
    ;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a4b338();
  FUN_018820a8(lVar3,*(undefined8 *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80),lVar2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a4b338();
  if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar5 = (long *)(param_2 + (long)(int)param_3 * 8 + 0x20);
  *plVar5 = lVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar2);
  if (local_74[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(local_88,0);
  }
  if (*(long *)(local_80 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


