/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 01f93dd8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionStateChange(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *puVar8;
  uint uVar9;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000038;
  long in_stack_00000040;
  
  do {
    plVar5 = unaff_x21 + 1;
    *unaff_x21 = unaff_x25;
    thunk_FUN_01286abc(param_1,param_2);
    lVar7 = *unaff_x28;
    unaff_x20 = unaff_x20 + 1;
    if (lVar7 == 0) goto LAB_01f92644;
    if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)unaff_x20) {
      uVar9 = *(uint *)(unaff_x23 + 0x18);
      if ((int)(uVar9 - 1) <= (int)unaff_x20) goto LAB_01f94000;
      goto LAB_01f93f8c;
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_x20) break;
    if (unaff_x22 == (long *)0x0) goto LAB_01f92644;
    param_2 = *(long *)(lVar7 + unaff_x20 * 8 + 0x20);
    if ((param_2 != 0) &&
       (lVar7 = thunk_FUN_0124baac(param_2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar7 == 0))
    goto LAB_01f941d8;
    param_1 = plVar5;
    unaff_x21 = plVar5;
    unaff_x25 = param_2;
  } while (unaff_x20 < *(uint *)(unaff_x22 + 3));
  goto LAB_01f9340c;
  while( true ) {
    plVar2 = *(long **)(unaff_x23 + 0x20 + unaff_x20 * 8);
    if ((plVar2 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200)),
       unaff_x22 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar7 != 0) &&
       (lVar3 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(unaff_x22 + 3) <= (uint)unaff_x20) goto LAB_01f9340c;
    *plVar5 = lVar7;
    thunk_FUN_01286abc(plVar5,lVar7);
    uVar9 = *(uint *)(unaff_x23 + 0x18);
    unaff_x20 = unaff_x20 + 1;
    plVar5 = plVar5 + 1;
    if ((int)(uVar9 - 1) <= (int)unaff_x20) break;
LAB_01f93f8c:
    if (uVar9 <= (uint)unaff_x20) goto LAB_01f9340c;
  }
LAB_01f94000:
  if (in_stack_00000038 == 0) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (unaff_w29 < *(uint *)(in_stack_00000038 + 0x18)) {
    puVar8 = (undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
    uVar6 = *puVar8;
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f801dc(uVar6,0,0);
    uVar9 = (uint)unaff_x20;
    if ((uVar4 & 1) == 0) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
      plVar5 = *(long **)(unaff_x23 + (long)(int)uVar9 * 8 + 0x20);
      if ((plVar5 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200)),
         unaff_x22 == (long *)0x0)) goto LAB_01f92644;
      if ((lVar7 != 0) &&
         (lVar3 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
      goto LAB_01f941d8;
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    else {
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
      uVar10 = *puVar8;
      uVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      lVar7 = thunk_FUN_01f894b8(uVar10,uVar6,0);
      if (unaff_x22 == (long *)0x0) goto LAB_01f92644;
      if ((lVar7 != 0) &&
         (lVar3 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
LAB_01f941d8:
        uVar6 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar6,0);
      }
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar9 < uVar1) {
      unaff_x22[(long)(int)uVar9 + 4] = lVar7;
      thunk_FUN_01286abc(unaff_x22 + (long)(int)uVar9 + 4,lVar7);
      *unaff_x28 = (long)unaff_x22;
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


