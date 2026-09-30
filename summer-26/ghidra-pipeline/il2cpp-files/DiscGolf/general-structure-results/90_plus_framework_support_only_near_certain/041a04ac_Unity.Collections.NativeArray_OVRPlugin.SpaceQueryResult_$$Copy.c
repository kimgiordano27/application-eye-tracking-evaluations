/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 041a04ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar9 [16];
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long *in_stack_00000018;
  
  auVar9._8_8_ = unaff_x22;
  auVar9._0_8_ = unaff_x21;
code_r0x041a04ac:
  FUN_0419ed24();
  uVar5 = *(uint *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  do {
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 041a04f0 to 042a0507 has its CatchHandler @ 041a057c */
      FUN_02d96868();
    }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 041a0470 with catch @ 041a04d8
                       try { // try from 041a04d8 to 042a04ef has its CatchHandler @ 041a0424 */
    pauVar2 = (undefined1 (*) [16])(lVar4 + (long)(int)uVar5 * 0x10 + 0x20);
    *pauVar2 = auVar9;
    LeanTween__value(pauVar2,0);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041a03e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*unaff_x24,0);
LAB_041a03e8:
    uVar6 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)*in_stack_00000008;
      if (plVar8 == (long *)0x0) goto LAB_041a05a4;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_041a057c;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar3 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041a046c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,lVar4,0);
LAB_041a046c:
    auVar9 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = *(uint *)(unaff_x20 + 0x18);
    if (uVar5 == *(uint *)(lVar4 + 0x18)) goto code_r0x041a04ac;
    *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_041a0598;
    }
  }
LAB_041a057c:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar8,*unaff_x23,0);
LAB_041a0598:
  (*(code *)*puVar1)(plVar8,puVar1[1]);
LAB_041a05a4:
  if (in_stack_00000000 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


