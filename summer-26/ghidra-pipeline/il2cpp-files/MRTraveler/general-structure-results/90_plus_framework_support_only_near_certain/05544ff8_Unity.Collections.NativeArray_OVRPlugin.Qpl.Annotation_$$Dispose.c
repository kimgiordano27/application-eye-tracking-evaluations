/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 05544ff8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x055451e8) */

long * Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *plVar6;
  int iVar7;
  long *in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 *in_stack_00000038;
  long *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_00000078;
  
  thunk_FUN_03cd7500();
  lVar1 = FUN_08484e48(*unaff_x23,0);
  if (lVar1 != 0) {
    FUN_046005e8();
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
      in_stack_00000008 = unaff_x20;
      (*(code *)puVar5[2])
                (*puVar5,puVar5,*(long *)(unaff_x22 + 0x18),&stack0x00000008,
                 (long)&stack0x00000078 + 4);
      plVar6 = in_stack_00000068;
      if (in_stack_00000078._4_1_ == '\0') {
        if (*(long *)(unaff_x22 + 0x10) == 0) goto LAB_055451e4;
        puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        (*(code *)puVar5[2])(*puVar5,puVar5,*(long *)(unaff_x22 + 0x10),0,&stack0x00000008);
        in_stack_00000040 = in_stack_00000008;
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000060 = in_stack_00000028;
        in_stack_00000048 = &stack0x00000068;
        do {
          uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))
                            (&stack0x00000040);
          if ((uVar2 & 1) == 0) {
            plVar6 = (long *)0x0;
            iVar7 = 6;
            goto LAB_05545198;
          }
          puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
          (*(code *)puVar5[2])(*puVar5,puVar5,&stack0x00000040,0,&stack0x00000008);
          in_stack_00000030 = in_stack_00000008;
          puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
          in_stack_00000038 = &stack0x00000068;
          (*(code *)puVar5[2])(*puVar5,puVar5,&stack0x00000030,0,&stack0x00000008);
          if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar2 = (**(code **)(*in_stack_00000008 + 0x2c8))();
        } while ((uVar2 & 1) == 0);
        puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
        (*(code *)puVar5[2])(*puVar5,puVar5,&stack0x00000030,0,&stack0x00000008);
        in_stack_00000068 = in_stack_00000008;
        if (*(long *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8);
        (*(code *)puVar5[2])(*puVar5,puVar5,*(long *)(unaff_x22 + 0x18),&stack0x00000008);
        iVar7 = 5;
        plVar6 = in_stack_00000068;
LAB_05545198:
        FUN_04ac1c5c(&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
        if ((iVar7 == 6) || (iVar7 == 0)) {
          if ((unaff_x21 & 1) != 0) {
            thunk_FUN_03ce5214(PTR_DAT_08e84e08);
            uVar3 = FUN_06f6be0c();
            thunk_FUN_03ce5214(PTR_DAT_08e71970);
            uVar4 = thunk_FUN_03cf5234();
            FUN_07100530(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar4);
          }
          plVar6 = (long *)0x0;
        }
      }
      return plVar6;
    }
  }
LAB_055451e4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


