/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 05cce71c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xbc0));
  FUN_03d2d2b0(PTR_DAT_091fcbc8);
  *(undefined1 *)(unaff_x23 + 0x4ec) = 1;
  puVar1 = PTR_DAT_091fcbb8;
  iVar3 = FUN_06093590();
  if (iVar3 != 1) {
LAB_05cce834:
    puVar2 = PTR_DAT_091fcbc8;
    in_stack_000000d0 = unaff_x21[2];
    in_stack_000000c8 = unaff_x21[1];
    in_stack_000000c0 = *unaff_x21;
    in_stack_000000f0 = in_stack_000000c0;
    in_stack_000000f8 = in_stack_000000c8;
    in_stack_00000100 = in_stack_000000d0;
    FUN_060921c8(&stack0x000000d8,&stack0x000000f0,*(undefined8 *)puVar1);
    in_stack_000000a8 = in_stack_000000e0;
    in_stack_000000a0 = in_stack_000000d8;
    in_stack_000000b0 = in_stack_000000e8;
    FUN_07f09544(&stack0x000000a0,0);
    FUN_06fd2898(*(undefined8 *)puVar2,*(undefined8 *)(unaff_x19 + 0x130),
                 *(undefined8 *)(unaff_x19 + 0x138),0);
    FUN_05fbbdc8();
    return;
  }
  plVar4 = (long *)FUN_0609352c();
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091fafa0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05cce7c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091fafa0,0);
LAB_05cce7c8:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar3 == 0) goto LAB_05cce834;
    plVar4 = (long *)FUN_0609352c();
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091fcbc0) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cce8c0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091fcbc0,0);
LAB_05cce8c0:
      uVar6 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
      FUN_051b1c20(&stack0x000000d8,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8));
      puVar5 = (undefined8 *)(unaff_x19 + 0x118);
      in_stack_00000100 = in_stack_000000e8;
      in_stack_000000f8 = in_stack_000000e0;
      in_stack_000000f0 = in_stack_000000d8;
      *(undefined8 *)(unaff_x19 + 0x128) = in_stack_000000e8;
      *(undefined8 *)(unaff_x19 + 0x120) = in_stack_000000e0;
      *puVar5 = in_stack_000000d8;
      thunk_FUN_03d1023c(puVar5,0);
      uVar8 = FUN_06093294(puVar5,*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb8));
      if ((uVar8 & 1) == 0) {
        in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x128);
        in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x120);
        in_stack_000000f0 = *puVar5;
        FUN_060921c8(&stack0x000000d8,&stack0x000000f0,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
        *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_000000e8;
        *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_000000e0;
        *(undefined8 *)(unaff_x19 + 0x98) = in_stack_000000d8;
        thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
        FUN_06092a44(puVar5,*(undefined8 *)(unaff_x19 + 0xe0),
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0));
      }
      else {
        in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x128);
        in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x120);
        in_stack_000000f0 = *puVar5;
        FUN_05cceb2c();
      }
      in_stack_00000100 = unaff_x21[2];
      in_stack_000000f8 = unaff_x21[1];
      in_stack_000000f0 = *unaff_x21;
      FUN_060921c8(&stack0x000000d8,&stack0x000000f0,*(undefined8 *)puVar1);
      FUN_07f09544();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


