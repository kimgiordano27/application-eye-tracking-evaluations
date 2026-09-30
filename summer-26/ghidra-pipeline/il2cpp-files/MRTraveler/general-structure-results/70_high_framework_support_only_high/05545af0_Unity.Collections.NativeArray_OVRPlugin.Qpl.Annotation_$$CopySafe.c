/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 05545af0
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
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *in_stack_00000008;
  
  do {
    puVar2 = (undefined8 *)FUN_03cf1348(unaff_x20,param_2,param_3);
    while( true ) {
      (*(code *)*puVar2)(unaff_x20,puVar2[1]);
      uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x138))
                        (&stack0x00000020);
      if ((uVar1 & 1) == 0) {
        FUN_04ac6ed8(&stack0x00000020,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140));
        return;
      }
      puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
      (*(code *)puVar2[2])(*puVar2,puVar2,&stack0x00000020,0,&stack0x00000008);
      unaff_x20 = in_stack_00000008;
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
      if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
        param_2 = FUN_03cf1244(param_2);
      }
      lVar3 = *unaff_x20;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 == 0) break;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      while (*(long *)(piVar4 + -2) != param_2) {
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
        if (uVar1 == 0) goto LAB_05545aec;
      }
      puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 3) * 0x10 + 0x138);
    }
LAB_05545aec:
    param_3 = 3;
  } while( true );
}


