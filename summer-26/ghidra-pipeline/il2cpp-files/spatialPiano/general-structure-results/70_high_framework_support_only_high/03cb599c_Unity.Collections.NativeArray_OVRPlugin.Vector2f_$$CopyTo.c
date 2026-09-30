/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyTo
ENTRY_POINT: 03cb599c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb5aa0) */
/* WARNING: Removing unreachable block (ram,0x03cb5a9c) */
/* WARNING: Removing unreachable block (ram,0x03cb5ae4) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyTo
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_000000a8;
  
  do {
    do {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb58bc with catch @ 03cb59a4
                        */
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_03cb59d0;
      }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb5994 with catch @ 03cb59a8
                        */
      in_x9 = in_x9 - 1;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb5990 with catch @ 03cb59ac
                        */
      in_x10 = in_x10 + 4;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb57fc with catch @ 03cb59b0
                        */
    } while (in_x9 != 0);
    do {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb5848 with catch @ 03cb59b4
                        */
      puVar2 = (undefined8 *)FUN_02f421d0(unaff_x23,param_3,0);
LAB_03cb59d0:
                    /* try { // try from 03cb59d0 to 03db59d3 has its CatchHandler @ 03cb59e0 */
      (*(code *)*puVar2)(unaff_x23,puVar2[1]);
                    /* catch() { ... } // from try @ 03cb59d0 with catch @ 03cb59e0 */
      memcpy(&stack0x00000058,&stack0x00000000,0x48);
      FUN_03cb53a8();
      plVar1 = in_stack_000000a8;
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar3 = *in_stack_000000a8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03cb594c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000a8,*unaff_x24,0);
LAB_03cb594c:
      uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      unaff_x23 = in_stack_000000a8;
      if ((uVar4 & 1) == 0) {
        if (in_stack_000000a8 == (long *)0x0) goto LAB_03cb5a90;
        lVar3 = *in_stack_000000a8;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_03cb5a68;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03cb5a50;
      }
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_02f41e9c(param_3);
      }
      param_1 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_03cb5a50:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03cb5a84;
    }
  }
LAB_03cb5a68:
  puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000a8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb5a84:
  (*(code *)*puVar2)(unaff_x23,puVar2[1]);
LAB_03cb5a90:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


