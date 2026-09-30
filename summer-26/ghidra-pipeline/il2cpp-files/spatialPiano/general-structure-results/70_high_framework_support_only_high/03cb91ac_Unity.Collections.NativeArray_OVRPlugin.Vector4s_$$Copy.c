/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03cb91ac
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


/* WARNING: Removing unreachable block (ram,0x03cb92f4) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  long *in_stack_000000d8;
  
  do {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    uStack0000000000000098 = in_stack_00000048;
    uStack0000000000000090 = in_stack_00000040;
    uStack00000000000000a8 = in_stack_00000058;
    uStack00000000000000a0 = in_stack_00000050;
    uStack00000000000000b8 = in_stack_00000068;
    uStack00000000000000b0 = in_stack_00000060;
    uStack00000000000000c8 = in_stack_00000078;
    uStack00000000000000c0 = in_stack_00000070;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 == *(uint *)(lVar6 + 0x18)) {
      FUN_03cb7778();
      uVar3 = *(uint *)(unaff_x20 + 0x18);
      lVar6 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
    }
    plVar1 = in_stack_000000d8;
    if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar6 = lVar6 + (long)(int)uVar3 * 0x40;
    *(undefined8 *)(lVar6 + 0x28) = uStack0000000000000098;
    *(undefined8 *)(lVar6 + 0x20) = uStack0000000000000090;
    *(undefined8 *)(lVar6 + 0x38) = uStack00000000000000a8;
    *(undefined8 *)(lVar6 + 0x30) = uStack00000000000000a0;
    *(undefined8 *)(lVar6 + 0x48) = uStack00000000000000b8;
    *(undefined8 *)(lVar6 + 0x40) = uStack00000000000000b0;
    *(undefined8 *)(lVar6 + 0x58) = uStack00000000000000c8;
    *(undefined8 *)(lVar6 + 0x50) = uStack00000000000000c0;
    if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = *in_stack_000000d8;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb9118;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000d8,*unaff_x22,0);
LAB_03cb9118:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_000000d8;
    if ((uVar5 & 1) == 0) {
      if (in_stack_000000d8 == (long *)0x0) {
        return;
      }
      lVar6 = *in_stack_000000d8;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 == 0) goto LAB_03cb92a0;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb919c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar1,lVar6,0);
LAB_03cb919c:
    (*(code *)*puVar2)(&stack0x00000040,plVar1,puVar2[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03cb92bc;
    }
  }
LAB_03cb92a0:
  puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000d8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb92bc:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


