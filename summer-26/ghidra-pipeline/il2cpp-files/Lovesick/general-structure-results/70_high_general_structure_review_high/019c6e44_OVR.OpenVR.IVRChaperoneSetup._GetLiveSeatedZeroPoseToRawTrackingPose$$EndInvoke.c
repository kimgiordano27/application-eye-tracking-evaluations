/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 019c6e44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  
  if ((DAT_0377a6bc & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GrabbablePose>_get_Count__);
    DAT_0377a6bc = 1;
  }
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  plVar6 = *(long **)(param_2 + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar7 = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 1);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_System_Collections_Generic_List<GrabbablePose>_get_Count__) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_019c6f00;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)
                                  Method_System_Collections_Generic_List<GrabbablePose>_get_Count__,
                          2);
LAB_019c6f00:
    (*(code *)*puVar2)(plVar6,&stack0x00000080,puVar2[1]);
    FUN_019a77d4(&stack0x00000020,&stack0x00000080,param_3,0);
    uStack0000000000000074 = (undefined4)uStack0000000000000034;
    in_stack_00000078 = SUB84(uStack0000000000000034,4);
    in_stack_00000070 = uStack0000000000000030;
    in_stack_00000068 = uStack0000000000000028;
    uStack000000000000006c = uStack000000000000002c;
    in_stack_00000060 = in_stack_00000020;
    if (*(long *)(param_2 + 0x38) != 0) {
      FUN_019c6fc4();
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 4) = uVar1;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[3] = uVar7;
      *param_1 = in_stack_00000050;
      *(undefined4 *)(param_1 + 1) = in_stack_00000058;
      *(undefined8 *)((long)param_1 + 0xc) = in_stack_00000040;
      *(undefined4 *)((long)param_1 + 0x14) = in_stack_00000048;
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


