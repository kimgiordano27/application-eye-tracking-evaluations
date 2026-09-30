/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 03cb65e4
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

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(void)

{
  long *plVar1;
  undefined8 *puVar2;
  uint in_w8;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long *in_stack_000000e8;
  
  do {
    if (unaff_w24 == in_w8) {
      FUN_03cb4b24();
      unaff_w24 = *(uint *)(unaff_x20 + 0x18);
      unaff_x21 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = unaff_w24 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = unaff_w24 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    memcpy((void *)(unaff_x21 + (long)(int)unaff_w24 * (long)unaff_w23 + 0x20),&stack0x00000000,0x48
          );
    plVar1 = in_stack_000000e8;
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *in_stack_000000e8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03cb6530;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000e8,*unaff_x22,0);
LAB_03cb6530:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_000000e8;
    if ((uVar5 & 1) == 0) {
      if (in_stack_000000e8 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_000000e8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_03cb66b4;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03cb65b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar1,lVar3,0);
LAB_03cb65b4:
    (*(code *)*puVar2)(&stack0x00000048,plVar1,puVar2[1]);
    memcpy(&stack0x000000a0,&stack0x00000048,0x48);
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    unaff_w24 = *(uint *)(unaff_x20 + 0x18);
    in_w8 = *(uint *)(unaff_x21 + 0x18);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03cb66d0;
    }
  }
LAB_03cb66b4:
  puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000e8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb66d0:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


