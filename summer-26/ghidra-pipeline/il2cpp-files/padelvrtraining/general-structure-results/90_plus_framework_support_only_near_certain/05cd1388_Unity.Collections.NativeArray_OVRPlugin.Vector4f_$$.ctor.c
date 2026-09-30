/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 05cd1388
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd146c) */
/* WARNING: Removing unreachable block (ram,0x05cd1650) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  int iStack0000000000000008;
  char cStack000000000000000c;
  
  FUN_071ddf10(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xd8));
                    /* try { // try from 05cd139c to 05dd13bf has its CatchHandler @ 05cd1220 */
  lVar1 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091af3f8);
  FUN_071e8eb0(lVar1,param_2,0);
  if (lVar1 == 0) goto LAB_05cd164c;
                    /* try { // try from 05cd13c0 to 05dd13d7 has its CatchHandler @ 05cd1470 */
  FUN_071e91bc(lVar1,0);
                    /* try { // try from 05cd13d8 to 05dd13eb has its CatchHandler @ 05cd1220 */
  uVar2 = FUN_06fc5244(*(undefined8 *)PTR_DAT_091fcc48,*(undefined8 *)(unaff_x19 + 0xc0),0);
                    /* try { // try from 05cd13ec to 05dd1403 has its CatchHandler @ 05cd1470 */
  FUN_076bc8dc(lVar1,uVar2,0);
  *(undefined1 *)(unaff_x19 + 0x118) = 1;
                    /* try { // try from 05cd1404 to 05dd145f has its CatchHandler @ 05cd1220 */
  uVar3 = FUN_05cd1038();
  if ((uVar3 & 1) == 0) {
    if ((unaff_x20 == 0) || (plVar9 = *(long **)(unaff_x19 + 0x138), plVar9 == (long *)0x0))
    goto LAB_05cd164c;
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c(lVar1);
    }
    lVar6 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_05cd1500;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar9,lVar1,3);
LAB_05cd1500:
    (*(code *)*puVar4)(plVar9);
    iVar5 = *(int *)(unaff_x19 + 0x144);
    if (iVar5 == *(int *)(unaff_x19 + 0x140)) {
      if (*(long *)(unaff_x19 + 0x90) == 0) {
LAB_05cd164c:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar9 = *(long **)(*(long *)(unaff_x19 + 0x90) + 0x18);
      uVar8 = *(undefined8 *)(unaff_x19 + 0xd0);
      iStack0000000000000008 = iVar5 + 1;
      uVar2 = FUN_07175a38(&stack0x00000008,0);
      uVar2 = FUN_06fd2168(uVar8,*(undefined8 *)PTR_DAT_091fcc38,uVar2,0);
      lVar6 = *(long *)PTR_DAT_091a0c08;
      lVar1 = *(long *)(lVar6 + 0x38);
      if (lVar1 == 0) {
        FUN_03d8f2c8(lVar6);
        lVar1 = *(long *)(lVar6 + 0x38);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar1 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      if (plVar9 == (long *)0x0) goto LAB_05cd164c;
      lVar6 = *plVar9;
      uVar8 = **(undefined8 **)(lVar1 + 0xb8);
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091faf08) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_05cd161c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091faf08,1);
LAB_05cd161c:
      (*(code *)*puVar4)(plVar9,2,uVar2,uVar8,puVar4[1]);
      iVar5 = *(int *)(unaff_x19 + 0x144);
      *(int *)(unaff_x19 + 0x140) = iVar5 + 10;
    }
    *(int *)(unaff_x19 + 0x144) = iVar5 + 1;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x120);
    cStack000000000000000c = '\0';
    FUN_071e78b0(uVar2,(long)&stack0x00000008 + 4,0);
    if (*(long *)(unaff_x19 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_060724dc();
    if (cStack000000000000000c != '\0') {
      thunk_FUN_03d180a8(uVar2,0);
    }
    if (*(long *)(unaff_x19 + 0x128) == 0) goto LAB_05cd164c;
    FUN_071e01f8(*(long *)(unaff_x19 + 0x128),0);
  }
  return;
}


