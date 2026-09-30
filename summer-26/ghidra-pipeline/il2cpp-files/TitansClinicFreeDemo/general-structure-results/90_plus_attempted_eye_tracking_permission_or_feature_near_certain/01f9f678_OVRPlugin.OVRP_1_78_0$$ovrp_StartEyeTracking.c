/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 01f9f678
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


/* WARNING: Removing unreachable block (ram,0x01f9f80c) */

long * OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 in_stack_00000028;
  
  FUN_01e5b7a4(param_1,0);
                    /* try { // try from 01f9f684 to 0209f69b has its CatchHandler @ 01f9f734 */
  uVar4 = FUN_01247134();
  FUN_01e5b728(&stack0x00000008,uVar4,0);
                    /* try { // try from 01f9f6a4 to 0209f6a7 has its CatchHandler @ 01f9f72c */
                    /* try { // try from 01f9f6a8 to 0209f703 has its CatchHandler @ 01f9f748 */
  uVar3 = FUN_01e5b764(&stack0x00000008,0);
  plVar5 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027c1f20,(ulong)uVar3);
  puVar2 = PTR_DAT_027bced8;
  if (0 < (int)uVar3) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      uVar4 = thunk_FUN_01e5b420(&stack0x00000008,uVar8 & 0xffffffff,0);
      plVar6 = (long *)FUN_01ef5cd8(uVar4,in_stack_00000028,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar6);
        }
        lVar7 = thunk_FUN_0124baac(plVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar7 == 0) {
          uVar4 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar4,0);
        }
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar6);
        }
      }
      if (*(uint *)(plVar5 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar5[uVar8 + 4] = (long)plVar6;
      thunk_FUN_01286abc((long)plVar5 + lVar9,plVar6);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar3 != uVar8);
  }
  FUN_01e5b748(&stack0x00000008,0);
  FUN_01e5b7ec(&stack0x00000010,0);
  return plVar5;
}


