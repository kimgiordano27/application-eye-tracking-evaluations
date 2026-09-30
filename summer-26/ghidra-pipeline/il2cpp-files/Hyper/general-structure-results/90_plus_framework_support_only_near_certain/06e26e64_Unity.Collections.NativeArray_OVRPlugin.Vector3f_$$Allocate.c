/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Allocate
ENTRY_POINT: 06e26e64
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Allocate(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  uint uVar8;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  long *in_stack_000000e8;
  
                    /* try { // try from 06e26e70 to 06f26e83 has its CatchHandler @ 06e26cac */
  plVar2 = (long *)(**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  puVar1 = PTR_DAT_0ac09ba8;
  in_stack_00000098 = &stack0x000000e8;
                    /* try { // try from 06e26e84 to 06f26e9b has its CatchHandler @ 06e26f08 */
  in_stack_00000090 = 0;
  do {
    in_stack_000000e8 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
                    /* try { // try from 06e26e9c to 06f26ef7 has its CatchHandler @ 06e26cac */
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06e26ee8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar2,*(long *)puVar1,0);
LAB_06e26ee8:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar2 = in_stack_000000e8;
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)*in_stack_00000098;
      if (plVar2 == (long *)0x0) goto LAB_06e270ec;
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_06e270c4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06e26f6c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar2,lVar4,0);
LAB_06e26f6c:
    (*(code *)*puVar3)(&stack0x00000048,plVar2,puVar3[1]);
    memcpy(&stack0x000000a0,&stack0x00000048,0x48);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar8 = *(uint *)(unaff_x20 + 0x18);
    if (uVar8 == *(uint *)(lVar4 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
                ();
      uVar8 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar8 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar8 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar4 = lVar4 + (long)(int)uVar8 * 0x48;
    memcpy((void *)(lVar4 + 0x20),&stack0x00000000,0x48);
    thunk_FUN_049ee3d8(lVar4 + 0x20,0);
    plVar2 = in_stack_000000e8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06e270e0;
    }
  }
LAB_06e270c4:
  puVar3 = (undefined8 *)FUN_04980e68(plVar2,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e270e0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_06e270ec:
  if (in_stack_00000090 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


