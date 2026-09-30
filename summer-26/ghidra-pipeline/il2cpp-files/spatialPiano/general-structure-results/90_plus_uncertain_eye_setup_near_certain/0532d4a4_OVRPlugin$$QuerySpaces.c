/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 0532d4a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpaces(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  
  puVar4 = (undefined8 *)FUN_02f421d0(param_1,param_2,0);
  plVar5 = (long *)(*(code *)*puVar4)();
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0532d528;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02f421d0(plVar5,*(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo,1);
LAB_0532d528:
    puVar3 = 
    UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>_TypeInfo;
    puVar2 = System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo;
    puVar1 = System_Tuple<Pose,_float,_float>_TypeInfo;
    (*(code *)*puVar4)(&stack0x00000070,plVar5,puVar4[1]);
    in_stack_00000060 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    in_stack_00000058 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000050 = in_stack_00000070;
    while (uVar6 = FUN_04aeea48(&stack0x00000050,*(undefined8 *)puVar2), uVar8 = in_stack_00000060,
          (uVar6 & 1) != 0) {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar7 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_0532d5d4;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar5,*unaff_x22,7);
LAB_0532d5d4:
      uVar6 = (*(code *)*puVar4)(plVar5,uVar8 & 0xffffffff,&stack0x00000030,puVar4[1]);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uStack0000000000000078 = in_stack_00000038;
        in_stack_00000070 = in_stack_00000030;
        uStack0000000000000084 = (undefined4)uStack0000000000000044;
        in_stack_00000088 = SUB84(uStack0000000000000044,4);
        uStack0000000000000080 = uStack0000000000000040;
        FUN_048b42ec(*(long *)(unaff_x19 + 0x40),uVar8 & 0xffffffff,&stack0x00000070,
                     *(undefined8 *)puVar3);
      }
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar7 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
            goto LAB_0532d66c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar5,*unaff_x22,8);
LAB_0532d66c:
      uVar6 = (*(code *)*puVar4)(plVar5,uVar8 & 0xffffffff,&stack0x00000010,puVar4[1]);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uStack0000000000000078 = in_stack_00000018;
        in_stack_00000070 = in_stack_00000010;
        uStack0000000000000084 = (undefined4)uStack0000000000000024;
        in_stack_00000088 = SUB84(uStack0000000000000024,4);
        uStack0000000000000080 = uStack0000000000000020;
        FUN_048b42ec(*(long *)(unaff_x19 + 0x48),uVar8 & 0xffffffff,&stack0x00000070,
                     *(undefined8 *)puVar3);
      }
    }
    FUN_04aeea44(&stack0x00000050,*(undefined8 *)puVar1);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


