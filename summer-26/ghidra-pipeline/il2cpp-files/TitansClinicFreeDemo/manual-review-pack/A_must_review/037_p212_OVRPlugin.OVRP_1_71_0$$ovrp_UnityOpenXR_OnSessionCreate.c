/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 01f93c20
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


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(long param_1)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x19;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 *unaff_x26;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000038;
  long in_stack_00000040;
  
  plVar3 = (long *)FUN_01230af8(**(undefined8 **)(param_1 + 0x650),*(undefined4 *)(unaff_x23 + 0x18)
                               );
  uVar2 = *(int *)(unaff_x23 + 0x18) - 1;
  FUN_01f89ca0(*unaff_x28,0,plVar3,0,uVar2,0);
  if (unaff_w29 < *(uint *)(in_stack_00000038 + 0x18)) {
    uVar7 = *unaff_x19;
    lVar4 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    if (lVar4 == 0) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined4 *)(lVar4 + 0x20) = 1;
      lVar4 = thunk_FUN_01f894b8(uVar7,lVar4,0);
      if (plVar3 == (long *)0x0) goto LAB_01f92644;
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_0124baac(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
        uVar7 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar7,0);
      }
      if (uVar2 < *(uint *)(plVar3 + 3)) {
        plVar6 = plVar3 + (long)(int)uVar2 + 4;
        *plVar6 = lVar4;
        thunk_FUN_01286abc(plVar6,lVar4);
        if (uVar2 < *(uint *)(plVar3 + 3)) {
          lVar4 = *unaff_x28;
          if (lVar4 == 0) goto LAB_01f92644;
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_01f92644;
            bVar1 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
            if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_027b3f80)) {
                    /* WARNING: Subroutine does not return */
              FUN_01230f60();
            }
            FUN_01f89750(plVar6,*(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20),0,0);
            *unaff_x28 = (long)plVar3;
            thunk_FUN_01286abc();
            if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
              return *unaff_x26;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


