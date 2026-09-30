/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 02cc080c
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_037f3cd0;
  if ((DAT_03a283b1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f3cd0);
    FUN_017fc350(PTR_DAT_037f3cb8);
    FUN_017fc350(PTR_DAT_037f8190);
    FUN_017fc350(PTR_DAT_0380f498);
    DAT_03a283b1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar3 = FUN_02d01d50(0);
  puVar2 = PTR_DAT_0380f498;
  puVar1 = PTR_DAT_037f8190;
  if ((uVar3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_037f3cb8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar4 = FUN_02d1a074(0);
    lVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar1);
    FUN_03078818(lVar5,*(undefined8 *)puVar2,0,0);
    if ((lVar5 == 0) ||
       (plVar6 = (long *)UnityEngine_InputSystem_Utilities_JsonParser_JsonValue__op_Implicit
                                   (lVar5,uVar4,0), plVar6 == (long *)0x0)) goto LAB_02cc09d8;
    uVar3 = FUN_03073374(plVar6,0);
    uVar8 = 0;
    uVar9 = 0;
    uVar7 = 0;
    if ((uVar3 & 1) != 0) {
      lVar5 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
      if ((lVar5 == 0) || (lVar5 = thunk_FUN_0307353c(lVar5,1,0), lVar5 == 0)) {
LAB_02cc09d8:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar4 = FUN_030723a0(lVar5,0);
      uVar8 = FUN_02be1540(uVar4,0);
      lVar5 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
      if ((lVar5 == 0) || (lVar5 = thunk_FUN_0307353c(lVar5,2,0), lVar5 == 0)) goto LAB_02cc09d8;
      uVar4 = FUN_030723a0(lVar5,0);
      uVar9 = FUN_02be1540(uVar4,0);
      lVar5 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
      if ((lVar5 == 0) || (lVar5 = thunk_FUN_0307353c(lVar5,3,0), lVar5 == 0)) goto LAB_02cc09d8;
      uVar4 = FUN_030723a0(lVar5,0);
      uVar7 = FUN_02be1540(uVar4,0);
    }
    *(undefined4 *)param_1 = uVar8;
    *(undefined4 *)((long)param_1 + 4) = uVar9;
    *(undefined4 *)(param_1 + 1) = uVar7;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


