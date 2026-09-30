/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$set_Item
ENTRY_POINT: 047a8628
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x047a87e0) */
/* WARNING: Removing unreachable block (ram,0x047a87dc) */
/* WARNING: Removing unreachable block (ram,0x047a8824) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *plStack0000000000000058;
  
  puVar1 = PTR_DAT_079f49a8;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = param_1;
  do {
    plStack0000000000000058 = param_2;
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_IsCreated;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(param_2,*(long *)puVar1,0);
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_IsCreated:
    uVar6 = (*(code *)*puVar3)(param_2,puVar3[1]);
    plVar2 = plStack0000000000000058;
    if ((uVar6 & 1) == 0) {
      if (plStack0000000000000058 == (long *)0x0) goto LAB_047a87d0;
      lVar4 = *plStack0000000000000058;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_047a87a8;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (plStack0000000000000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_047a8710;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar2,lVar4,0);
LAB_047a8710:
    (*(code *)*puVar3)(&stack0x00000008,plVar2,puVar3[1]);
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    FUN_047a80d8();
    param_2 = plStack0000000000000058;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_047a87c4;
    }
  }
LAB_047a87a8:
  puVar3 = (undefined8 *)FUN_0367cd30(plStack0000000000000058,*(long *)PTR_DAT_079f4598,0);
LAB_047a87c4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_047a87d0:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


