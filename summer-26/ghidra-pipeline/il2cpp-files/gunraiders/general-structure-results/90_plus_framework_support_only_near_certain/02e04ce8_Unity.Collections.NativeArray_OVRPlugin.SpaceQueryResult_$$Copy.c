/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 02e04ce8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e04f64) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uStack0000000000000048 = param_1._8_8_;
  uStack0000000000000040 = param_1._0_8_;
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  uStack0000000000000050 = uStack0000000000000040;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  uStack0000000000000058 = uStack0000000000000048;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 02e04d10 to 02f04d6f has its CatchHandler @ 02e04e88 */
    lVar5 = FUN_01c72394(lVar5);
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02e04d64;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_02e04d64:
  puVar1 = PTR_DAT_0422fce8;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_04230960;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02e04dd4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar2,0);
LAB_02e04dd4:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_02e04f10;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394(lVar5);
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02e04e4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar4,lVar5,0);
LAB_02e04e4c:
    (*(code *)*puVar3)(&stack0x00000020,plVar4,puVar3[1]);
    uStack0000000000000048 = in_stack_00000028;
    uStack0000000000000040 = in_stack_00000020;
    uStack0000000000000058 = in_stack_00000038;
    uStack0000000000000050 = in_stack_00000030;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_02e03548();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    in_stack_00000028 = uStack0000000000000048;
    in_stack_00000020 = uStack0000000000000040;
    in_stack_00000038 = uStack0000000000000058;
    in_stack_00000030 = uStack0000000000000050;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar5 = lVar5 + (long)(int)uVar7 * 0x20;
    *(undefined8 *)(lVar5 + 0x28) = uStack0000000000000048;
    *(undefined8 *)(lVar5 + 0x20) = uStack0000000000000040;
    *(undefined8 *)(lVar5 + 0x38) = uStack0000000000000058;
    *(undefined8 *)(lVar5 + 0x30) = uStack0000000000000050;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02e04f2c;
    }
  }
LAB_02e04f10:
  puVar3 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar1,0);
LAB_02e04f2c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


