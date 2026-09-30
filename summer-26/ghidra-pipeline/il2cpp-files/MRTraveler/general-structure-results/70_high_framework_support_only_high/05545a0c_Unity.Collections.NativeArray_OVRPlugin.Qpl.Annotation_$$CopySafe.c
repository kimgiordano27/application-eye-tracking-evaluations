/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 05545a0c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05545b50) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x100))();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110);
  (*(code *)puVar4[2])(*puVar4,puVar4,lVar2,0,&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
                    /* try { // try from 05545a6c to 05645ab3 has its CatchHandler @ 05545a6c
                       catch() { ... } // from try @ 05545a6c with catch @ 05545a6c
                       catch() { ... } // from try @ 05545bbc with catch @ 05545a6c
                       catch() { ... } // from try @ 05545bec with catch @ 05545a6c
                       catch() { ... } // from try @ 05545c60 with catch @ 05545a6c */
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x138))
                      (&stack0x00000020);
    if ((uVar3 & 1) == 0) {
      FUN_04ac6ed8(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140));
      return;
    }
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x120);
    (*(code *)puVar4[2])(*puVar4,puVar4,&stack0x00000020,0,&stack0x00000008);
    plVar1 = in_stack_00000008;
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 05545ab4 to 05645bbb has its CatchHandler @ 05545bbc */
      lVar2 = FUN_03cf1244(lVar2);
    }
    lVar5 = *plVar1;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_05545b0c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar1,lVar2,3);
LAB_05545b0c:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  } while( true );
}


