/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 06e26dc4
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  uint uVar8;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  FUN_04947ee4(PTR_DAT_0ac09b90);
  FUN_04947ee4(PTR_DAT_0ac09ba8);
  *(undefined1 *)(unaff_x22 + 0xf5a) = 1;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = (long *)0x0;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e26ce0 with catch @ 06e26df8
                       try { // try from 06e26df8 to 06f26e1b has its CatchHandler @ 06e26cac */
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e26d00 with catch @ 06e26e04
                        */
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 06e26e1c to 06f26e33 has its CatchHandler @ 06e26f08 */
    lVar4 = FUN_04980b34(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
                    /* try { // try from 06e26e34 to 06f26e57 has its CatchHandler @ 06e26cac */
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_06e26e70;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 06e26e58 to 06f26e6f has its CatchHandler @ 06e26f08 */
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_06e26e70:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_0ac09ba8;
  in_stack_00000098 = &stack0x000000e8;
  in_stack_00000090 = 0;
  do {
    in_stack_000000e8 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06e26ee8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,0);
LAB_06e26ee8:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_000000e8;
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)*in_stack_00000098;
      if (plVar3 == (long *)0x0) goto LAB_06e270ec;
      lVar4 = *plVar3;
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
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06e26f6c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar3,lVar4,0);
LAB_06e26f6c:
    (*(code *)*puVar2)(&stack0x00000048,plVar3,puVar2[1]);
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
    plVar3 = in_stack_000000e8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06e270e0;
    }
  }
LAB_06e270c4:
  puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e270e0:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_06e270ec:
  if (in_stack_00000090 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


