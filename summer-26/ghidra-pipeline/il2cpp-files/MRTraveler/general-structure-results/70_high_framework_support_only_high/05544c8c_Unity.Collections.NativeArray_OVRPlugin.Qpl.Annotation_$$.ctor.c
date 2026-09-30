/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 05544c8c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05544cd4) */

int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
              (code *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    iVar1 = (*param_1)(param_2,param_3);
    unaff_w20 = iVar1 + unaff_w20;
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))
                      (&stack0x00000040);
    if ((uVar2 & 1) == 0) {
      FUN_04ac1c5c(&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
      return unaff_w20;
    }
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    (*(code *)puVar3[2])(*puVar3,puVar3,&stack0x00000040,0,&stack0x00000008);
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000038 = in_stack_00000010;
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    (*(code *)puVar3[2])(*puVar3,puVar3,&stack0x00000030,0,&stack0x00000008);
    param_2 = in_stack_00000008;
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244(lVar4);
    }
    lVar5 = *param_2;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05544c84;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(param_2,lVar4,0);
LAB_05544c84:
    param_1 = (code *)*puVar3;
    param_3 = puVar3[1];
  } while( true );
}


