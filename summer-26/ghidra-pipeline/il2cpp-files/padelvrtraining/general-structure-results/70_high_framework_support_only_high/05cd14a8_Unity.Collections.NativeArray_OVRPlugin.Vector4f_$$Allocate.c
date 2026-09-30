/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Allocate
ENTRY_POINT: 05cd14a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Allocate(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x22;
  int in_stack_00000008;
  
  lVar1 = FUN_03d8f26c();
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 05cd14cc to 05dd14cf has its CatchHandler @ 05cd1568 */
      if (*(long *)(piVar7 + -2) == lVar1) {
                    /* try { // try from 05cd14f8 to 05dd1507 has its CatchHandler @ 05cd156c */
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_05cd1500;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_05cd1500:
  (*(code *)*puVar2)();
  iVar4 = *(int *)(unaff_x19 + 0x144);
  if (iVar4 == *(int *)(unaff_x19 + 0x140)) {
                    /* try { // try from 05cd1524 to 05dd153b has its CatchHandler @ 05cd1570 */
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      plVar8 = *(long **)(*(long *)(unaff_x19 + 0x90) + 0x18);
      uVar9 = *(undefined8 *)(unaff_x19 + 0xd0);
      in_stack_00000008 = iVar4 + 1;
      uVar3 = FUN_07175a38(&stack0x00000008,0);
      uVar3 = FUN_06fd2168(uVar9,*(undefined8 *)PTR_DAT_091fcc38,uVar3,0);
      lVar5 = *(long *)PTR_DAT_091a0c08;
      lVar1 = *(long *)(lVar5 + 0x38);
      if (lVar1 == 0) {
        FUN_03d8f2c8(lVar5);
        lVar1 = *(long *)(lVar5 + 0x38);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar1 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar9 = **(undefined8 **)(lVar1 + 0xb8);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091faf08) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_05cd161c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091faf08,1);
LAB_05cd161c:
        (*(code *)*puVar2)(plVar8,2,uVar3,uVar9,puVar2[1]);
        iVar4 = *(int *)(unaff_x19 + 0x144);
        *(int *)(unaff_x19 + 0x140) = iVar4 + 10;
        goto LAB_05cd11a8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
LAB_05cd11a8:
  *(int *)(unaff_x19 + 0x144) = iVar4 + 1;
  return;
}


