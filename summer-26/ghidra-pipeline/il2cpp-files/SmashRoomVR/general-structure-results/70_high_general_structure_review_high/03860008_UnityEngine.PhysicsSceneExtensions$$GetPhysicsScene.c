/*
FUNCTION_NAME: UnityEngine.PhysicsSceneExtensions$$GetPhysicsScene
ENTRY_POINT: 03860008
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


void UnityEngine_PhysicsSceneExtensions__GetPhysicsScene(ulong param_1,long *param_2)

{
  ulong uVar1;
  long unaff_x20;
  long *plVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  ulong in_stack_00000010;
  undefined4 in_stack_00000018;
  
  plVar2 = *(long **)(unaff_x20 + 0xcf8);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da7730);
    thunk_FUN_01ad9084(PTR_DAT_03da5fc0);
    thunk_FUN_01ad9084(PTR_DAT_03da5fc8);
    thunk_FUN_01ad9084(PTR_DAT_03da7720);
    *(undefined1 *)(unaff_x21 + 0x685) = 1;
  }
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  lVar3 = param_2[4];
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_03922f24(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = FUN_03925d6c(0);
    if (*(int *)((long)param_2 + 0x44) != 0) {
      uVar1 = (**(code **)(*param_2 + 0x178))
                        (param_2,&stack0x00000010,*(undefined8 *)(*param_2 + 0x180));
      if ((uVar1 & 1) != 0) {
        lVar3 = param_2[0xf];
        FUN_035a0b10(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,in_stack_00000018,0);
        if (lVar3 == 0) goto LAB_038601b8;
        FUN_021ef618(lVar3,*(undefined8 *)PTR_DAT_03da5fc8);
      }
      lVar3 = param_2[0xf];
      if (*(float *)((long)param_2 + 0x3c) <= 0.0) {
        if (lVar3 == 0) goto LAB_038601b8;
        FUN_021ef670((float)uVar4 * *(float *)(param_2 + 7),lVar3,*(undefined8 *)PTR_DAT_03da5fc0);
      }
      else {
        if (lVar3 == 0) goto LAB_038601b8;
        FUN_0385d084(uVar4,*(undefined4 *)((long)param_2 + 100),(int)param_2[0xd]);
      }
    }
    if (*(int *)((long)param_2 + 0x54) == 0) {
      return;
    }
    uVar1 = (**(code **)(*param_2 + 0x188))(param_2);
    if ((uVar1 & 1) != 0) {
      if (param_2[0x10] == 0) goto LAB_038601b8;
      FUN_021ee304(0,0,0,0,param_2[0x10],*(undefined8 *)PTR_DAT_03da7720);
    }
    lVar3 = param_2[0x10];
    if (*(float *)((long)param_2 + 0x3c) <= 0.0) {
      if (lVar3 == 0) goto LAB_038601b8;
      FUN_021ee3d0((float)uVar4 * *(float *)(param_2 + 7),lVar3,*(undefined8 *)PTR_DAT_03da7730);
    }
    else {
      if (lVar3 == 0) {
LAB_038601b8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0385cb6c(uVar4,*(undefined4 *)((long)param_2 + 100),(int)param_2[0xd]);
    }
  }
  return;
}


