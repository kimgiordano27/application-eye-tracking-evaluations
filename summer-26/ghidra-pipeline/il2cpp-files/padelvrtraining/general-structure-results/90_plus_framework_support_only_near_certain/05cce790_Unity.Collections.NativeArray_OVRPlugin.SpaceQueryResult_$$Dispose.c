/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 05cce790
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar9;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05cce7c8;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cce7c8:
  iVar2 = (*(code *)*puVar3)();
  puVar1 = PTR_DAT_091fcbc8;
  if (iVar2 == 0) {
    in_stack_000000d0 = unaff_x21[2];
    in_stack_000000c8 = unaff_x21[1];
    in_stack_000000c0 = *unaff_x21;
    in_stack_000000f0 = in_stack_000000c0;
    in_stack_000000f8 = in_stack_000000c8;
    in_stack_00000100 = in_stack_000000d0;
    FUN_060921c8(&stack0x000000d8,&stack0x000000f0,*unaff_x24);
    in_stack_000000a8 = unaff_x23[1];
    in_stack_000000a0 = *unaff_x23;
    in_stack_000000b0 = in_stack_000000e8;
    FUN_07f09544(&stack0x000000a0,0);
    FUN_06fd2898(*(undefined8 *)puVar1,*(undefined8 *)(unaff_x19 + 0x130),
                 *(undefined8 *)(unaff_x19 + 0x138),0);
    FUN_05fbbdc8();
  }
  else {
    plVar4 = (long *)FUN_0609352c();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091fcbc0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05cce8c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091fcbc0,0);
LAB_05cce8c0:
    uVar5 = (*(code *)*puVar3)(plVar4,0,puVar3[1]);
    FUN_051b1c20(&stack0x000000d8,uVar5,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8));
    in_stack_000000f8 = unaff_x23[1];
    in_stack_000000f0 = *unaff_x23;
    puVar3 = (undefined8 *)(unaff_x19 + 0x118);
    in_stack_00000100 = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x128) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x120) = in_stack_000000f8;
    *puVar3 = in_stack_000000f0;
    thunk_FUN_03d1023c(puVar3,0);
    uVar7 = FUN_06093294(puVar3,*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb8));
    if ((uVar7 & 1) == 0) {
      in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x128);
      in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x120);
      in_stack_000000f0 = *puVar3;
      FUN_060921c8(&stack0x000000d8,&stack0x000000f0,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
      uVar9 = unaff_x23[1];
      uVar5 = *unaff_x23;
      *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_000000e8;
      *(undefined8 *)(unaff_x19 + 0xa0) = uVar9;
      *(undefined8 *)(unaff_x19 + 0x98) = uVar5;
      thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
      FUN_06092a44(puVar3,*(undefined8 *)(unaff_x19 + 0xe0),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0));
    }
    else {
      in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x128);
      in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x120);
      in_stack_000000f0 = *puVar3;
      FUN_05cceb2c();
    }
    in_stack_00000100 = unaff_x21[2];
    in_stack_000000f8 = unaff_x21[1];
    in_stack_000000f0 = *unaff_x21;
    FUN_060921c8(&stack0x000000d8,&stack0x000000f0,*unaff_x24);
    FUN_07f09544();
  }
  return;
}


