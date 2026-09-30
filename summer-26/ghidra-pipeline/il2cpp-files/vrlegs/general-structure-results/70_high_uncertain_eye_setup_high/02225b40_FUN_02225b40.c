/*
FUNCTION_NAME: FUN_02225b40
ENTRY_POINT: 02225b40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02225cf8) */

void FUN_02225b40(long param_1,undefined8 ****param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *__dest;
  void *__dest_00;
  ulong __n;
  long lVar7;
  long lVar8;
  undefined8 local_80;
  char local_74 [4];
  undefined8 ***local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar5 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)&local_80 - uVar5);
  __dest_00 = (void *)((long)__dest - uVar5);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_74[0] = '\0';
  local_70 = param_2;
  FUN_027e0bd8(local_80,local_74,0);
  lVar8 = *(long *)(param_3 + 0x20);
  lVar7 = *(long *)(lVar8 + 0xc0);
  iVar2 = *(int *)(*(long *)(lVar7 + 0x10) + 0x28);
  if (-1 < iVar2) {
    param_2 = &local_70;
  }
  memcpy(__dest,param_2,__n);
  if (iVar2 < 0) {
    memcpy(__dest_00,__dest,__n);
    lVar7 = *(long *)(lVar8 + 0xc0);
  }
  else {
    __dest_00 = (void *)*__dest;
  }
  uVar4 = FUN_02225d70(param_1,__dest_00,*(undefined8 *)(lVar7 + 0xa8));
  if (-1 < (int)uVar4) {
    while (uVar4 != 0) {
      plVar6 = *(long **)(param_1 + 0x28);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = uVar4;
      if (-1 < (int)(uVar4 - 1)) {
        uVar1 = uVar4 - 1;
      }
      if (*(uint *)(plVar6 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar1 = (int)uVar1 >> 1;
      if (*(uint *)(plVar6 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_02226554((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar4 + 0x20,
                   (long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar1 + 0x20,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90));
      uVar4 = uVar1;
    }
    FUN_02225f20(param_1,__dest,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0))
    ;
  }
  if (local_74[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(local_80,0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


