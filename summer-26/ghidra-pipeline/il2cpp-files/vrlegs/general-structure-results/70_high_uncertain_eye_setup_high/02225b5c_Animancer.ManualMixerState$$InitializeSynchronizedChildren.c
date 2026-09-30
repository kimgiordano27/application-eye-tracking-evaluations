/*
FUNCTION_NAME: Animancer.ManualMixerState$$InitializeSynchronizedChildren
ENTRY_POINT: 02225b5c
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

void Animancer_ManualMixerState__InitializeSynchronizedChildren
               (long param_1,void *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *__dest;
  void *__dest_00;
  ulong __n;
  long lVar8;
  long lVar9;
  long unaff_x29;
  undefined8 auStack_20 [4];
  
  lVar3 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar3 + 0x28);
  *(void **)(unaff_x29 + -0x10) = param_2;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)auStack_20 - uVar6);
  __dest_00 = (void *)((long)__dest - uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(unaff_x29 + -0x14) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = uVar5;
  FUN_027e0bd8(uVar5,unaff_x29 + -0x14,0);
  lVar9 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(lVar9 + 0xc0);
  iVar2 = *(int *)(*(long *)(lVar8 + 0x10) + 0x28);
  if (-1 < iVar2) {
    param_2 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(__dest,param_2,__n);
  if (iVar2 < 0) {
    memcpy(__dest_00,__dest,__n);
    lVar8 = *(long *)(lVar9 + 0xc0);
  }
  else {
    __dest_00 = (void *)*__dest;
  }
  uVar4 = FUN_02225d70(param_1,__dest_00,*(undefined8 *)(lVar8 + 0xa8));
  if (-1 < (int)uVar4) {
    while (uVar4 != 0) {
      plVar7 = *(long **)(param_1 + 0x28);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = uVar4;
      if (-1 < (int)(uVar4 - 1)) {
        uVar1 = uVar4 - 1;
      }
      if (*(uint *)(plVar7 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar1 = (int)uVar1 >> 1;
      if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_02226554((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar4 + 0x20,
                   (long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90));
      uVar4 = uVar1;
    }
    FUN_02225f20(param_1,__dest,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0))
    ;
  }
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x20),0);
  }
  if (*(long *)(lVar3 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


