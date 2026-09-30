/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 0554508c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x055451e8) */

long * Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar5;
  int iVar6;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  long *in_stack_00000068;
  
  uStack0000000000000058 = in_stack_00000020;
  uStack0000000000000050 = in_stack_00000018;
  uStack0000000000000060 = in_stack_00000028;
  uStack0000000000000040 = param_1;
  do {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))
                      (&stack0x00000040);
    if ((uVar1 & 1) == 0) {
      plVar5 = (long *)0x0;
      iVar6 = 6;
      goto LAB_05545198;
    }
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    (*(code *)puVar4[2])(*puVar4,puVar4,&stack0x00000040,0,&stack0x00000008);
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000038 = in_stack_00000010;
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
    (*(code *)puVar4[2])(*puVar4,puVar4,&stack0x00000030,0,&stack0x00000008);
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = (**(code **)(*in_stack_00000008 + 0x2c8))();
  } while ((uVar1 & 1) == 0);
  puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  (*(code *)puVar4[2])(*puVar4,puVar4,&stack0x00000030,0,&stack0x00000008);
  in_stack_00000068 = in_stack_00000008;
  if (*(long *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8);
  in_stack_00000008 = unaff_x20;
  (*(code *)puVar4[2])(*puVar4,puVar4,*(long *)(unaff_x22 + 0x18),&stack0x00000008);
  iVar6 = 5;
  plVar5 = in_stack_00000068;
LAB_05545198:
  FUN_04ac1c5c(&stack0x00000040,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
  if ((iVar6 == 6) || (iVar6 == 0)) {
    if ((unaff_x21 & 1) != 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e84e08);
      uVar2 = FUN_06f6be0c();
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar3 = thunk_FUN_03cf5234();
      FUN_07100530(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar3);
    }
    plVar5 = (long *)0x0;
  }
  return plVar5;
}


