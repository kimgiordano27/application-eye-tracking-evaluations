/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsReadOnly
ENTRY_POINT: 03cb63e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb670c) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsReadOnly
               (long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  undefined8 in_stack_00000090;
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
  
  if ((DAT_06bb4c85 & 1) == 0) {
    FUN_02f08768(&DAT_068ed850);
                    /* try { // try from 03cb641c to 03db641f has its CatchHandler @ 03cb6440 */
                    /* try { // try from 03cb6420 to 03db6423 has its CatchHandler @ 03cb643c */
    FUN_02f08768(&DAT_068ed8f8);
                    /* try { // try from 03cb6424 to 03db642b has its CatchHandler @ 03cb6448 */
    DAT_06bb4c85 = 1;
  }
                    /* try { // try from 03cb642c to 03db646b has its CatchHandler @ 03cb6158 */
  in_stack_000000e0 = 0;
  in_stack_000000e8 = (long *)0x0;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb6350 with catch @ 03cb6438
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb6420 with catch @ 03cb643c
                        */
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03cb64b8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0(param_2,lVar4,0);
LAB_03cb64b8:
  plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  puVar1 = PTR_DAT_067c91b8;
  in_stack_00000098 = &stack0x000000e8;
  in_stack_00000090 = 0;
  do {
    in_stack_000000e8 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb6530;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar1,0);
LAB_03cb6530:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_000000e8;
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
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c(lVar4);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb65b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar3,lVar4,0);
LAB_03cb65b4:
    (*(code *)*puVar2)(&stack0x00000048,plVar3,puVar2[1]);
    memcpy(&stack0x000000a0,&stack0x00000048,0x48);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = *(uint *)(param_1 + 0x18);
    if (uVar8 == *(uint *)(lVar4 + 0x18)) {
      FUN_03cb4b24(param_1,uVar8 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
      uVar8 = *(uint *)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar8 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = uVar8 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    memcpy((void *)(lVar4 + (long)(int)uVar8 * 0x48 + 0x20),&stack0x00000000,0x48);
    plVar3 = in_stack_000000e8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03cb66d0;
    }
  }
LAB_03cb66b4:
  puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000e8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb66d0:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


