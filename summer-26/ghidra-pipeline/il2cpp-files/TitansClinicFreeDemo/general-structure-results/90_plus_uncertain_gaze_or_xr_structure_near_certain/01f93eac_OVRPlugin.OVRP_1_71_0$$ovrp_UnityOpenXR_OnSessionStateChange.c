/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 01f93eac
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int in_w8;
  long *unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x26;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000040;
  
  *(uint *)(param_2 + 0x20) = in_w8 - unaff_w23;
  lVar2 = thunk_FUN_01f894b8();
  if (unaff_x22 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar4,0);
    }
    if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
      plVar5 = unaff_x22 + (long)(int)unaff_w23 + 4;
      *plVar5 = lVar2;
      thunk_FUN_01286abc(plVar5,lVar2);
      if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
        lVar2 = *unaff_x28;
        if (lVar2 == 0) goto LAB_01f92644;
        plVar5 = (long *)*plVar5;
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_027b3f80)) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(plVar5);
          }
        }
        FUN_01f89ca0(lVar2,unaff_w23,plVar5,0,*(int *)(lVar2 + 0x18) - unaff_w23,0);
        *unaff_x28 = (long)unaff_x22;
        thunk_FUN_01286abc();
        if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
          return *unaff_x26;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


