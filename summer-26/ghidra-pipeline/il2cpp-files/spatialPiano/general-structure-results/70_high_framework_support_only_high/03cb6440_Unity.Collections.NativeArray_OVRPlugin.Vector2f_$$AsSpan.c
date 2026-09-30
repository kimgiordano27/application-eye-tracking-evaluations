/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsSpan
ENTRY_POINT: 03cb6440
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

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsSpan(undefined8 param_1)

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
  uint uVar8;
  undefined8 in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  long *in_stack_000000e8;
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb641c with catch @ 03cb6440
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb6390 with catch @ 03cb6444
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb6424 with catch @ 03cb6448
                        */
  uStack00000000000000a0 = param_1;
  uStack00000000000000b0 = param_1;
  uStack00000000000000c0 = param_1;
  uStack00000000000000d0 = param_1;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb6278 with catch @ 03cb644c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb62c4 with catch @ 03cb6450
                        */
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
                    /* try { // try from 03cb646c to 03db646f has its CatchHandler @ 03cb6478 */
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 03cb646c with catch @ 03cb6478 */
  if (uVar6 != 0) {
                    /* try { // try from 03cb647c to 03db6483 has its CatchHandler @ 03cb648c */
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 03cb6484 to 03db648f has its CatchHandler @ 03cb6158 */
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03cb64b8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_03cb64b8:
  plVar3 = (long *)(*(code *)*puVar2)();
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
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
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


