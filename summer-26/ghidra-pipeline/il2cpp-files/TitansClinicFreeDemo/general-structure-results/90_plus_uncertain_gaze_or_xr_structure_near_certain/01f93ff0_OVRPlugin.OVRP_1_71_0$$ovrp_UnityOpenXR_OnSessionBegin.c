/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 01f93ff0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint in_w8;
  long unaff_x19;
  undefined8 *puVar6;
  uint uVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  long in_stack_00000038;
  long in_stack_00000040;
  
  for (; uVar7 = (uint)unaff_x20, (int)uVar7 < (int)(in_w8 - 1); unaff_x20 = unaff_x20 + 1) {
    if (in_w8 <= uVar7) goto LAB_01f9340c;
    plVar5 = *(long **)(unaff_x21 + unaff_x20 * 8);
    if ((plVar5 == (long *)0x0) ||
       (lVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200)),
       unaff_x22 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_0124baac(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(unaff_x22 + 3) <= uVar7) goto LAB_01f9340c;
    *unaff_x27 = lVar3;
    thunk_FUN_01286abc(unaff_x27,lVar3);
    in_w8 = *(uint *)(unaff_x23 + 0x18);
    unaff_x27 = unaff_x27 + 1;
  }
  if (in_stack_00000038 == 0) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (unaff_w29 < *(uint *)(in_stack_00000038 + 0x18)) {
    puVar6 = (undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
    uVar8 = *puVar6;
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar2 = FUN_01f801dc(uVar8,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar5 = *(long **)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20);
      if ((plVar5 == (long *)0x0) ||
         (lVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200)),
         unaff_x22 == (long *)0x0)) goto LAB_01f92644;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_0124baac(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_01f941d8;
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    else {
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
      uVar9 = *puVar6;
      uVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      lVar3 = thunk_FUN_01f894b8(uVar9,uVar8,0);
      if (unaff_x22 == (long *)0x0) goto LAB_01f92644;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_0124baac(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
LAB_01f941d8:
        uVar8 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar8,0);
      }
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar7 < uVar1) {
      unaff_x22[(long)(int)uVar7 + 4] = lVar3;
      thunk_FUN_01286abc(unaff_x22 + (long)(int)uVar7 + 4,lVar3);
      *unaff_x28 = unaff_x22;
      thunk_FUN_01286abc();
      if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
        return *unaff_x26;
      }
    }
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


