/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_IsCreated
ENTRY_POINT: 03cb5744
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb5aa0) */
/* WARNING: Removing unreachable block (ram,0x03cb5a9c) */
/* WARNING: Removing unreachable block (ram,0x03cb5ae4) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_IsCreated(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  long *in_stack_000000a8;
  
  lVar2 = FUN_02f41e9c();
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03cb58d8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0();
LAB_03cb58d8:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_067c91b8;
  in_stack_00000050 = &stack0x000000a8;
  in_stack_00000048 = 0;
  do {
    in_stack_000000a8 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb594c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar1,0);
LAB_03cb594c:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    plVar4 = in_stack_000000a8;
    if ((uVar6 & 1) == 0) {
      if (in_stack_000000a8 == (long *)0x0) goto LAB_03cb5a90;
      lVar2 = *in_stack_000000a8;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 == 0) goto LAB_03cb5a68;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb59d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar4,lVar2,0);
LAB_03cb59d0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    memcpy(&stack0x00000058,&stack0x00000000,0x48);
    FUN_03cb53a8();
    plVar4 = in_stack_000000a8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03cb5a84;
    }
  }
LAB_03cb5a68:
  puVar3 = (undefined8 *)FUN_02f421d0(in_stack_000000a8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb5a84:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_03cb5a90:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


