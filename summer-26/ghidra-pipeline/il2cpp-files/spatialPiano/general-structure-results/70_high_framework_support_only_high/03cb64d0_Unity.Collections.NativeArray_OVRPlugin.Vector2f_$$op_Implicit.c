/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Implicit
ENTRY_POINT: 03cb64d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb670c) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Implicit(long *param_1)

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
  uint uVar8;
  long *in_stack_000000e8;
  
  puVar1 = PTR_DAT_067c91b8;
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb6530;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(param_1,*(long *)puVar1,0);
LAB_03cb6530:
    uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
    plVar2 = in_stack_000000e8;
    if ((uVar6 & 1) == 0) {
      if (in_stack_000000e8 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_000000e8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03cb66b4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb65b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar2,lVar4,0);
LAB_03cb65b4:
    (*(code *)*puVar3)(&stack0x00000048,plVar2,puVar3[1]);
    memcpy(&stack0x000000a0,&stack0x00000048,0x48);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = *(uint *)(unaff_x20 + 0x18);
    if (uVar8 == *(uint *)(lVar4 + 0x18)) {
      FUN_03cb4b24();
      uVar8 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar8 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar8 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    memcpy((void *)(lVar4 + (long)(int)uVar8 * 0x48 + 0x20),&stack0x00000000,0x48);
    param_1 = in_stack_000000e8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03cb66d0;
    }
  }
LAB_03cb66b4:
  puVar3 = (undefined8 *)FUN_02f421d0(in_stack_000000e8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb66d0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


