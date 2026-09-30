/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetUint64TrackedDeviceProperty$$Invoke
ENTRY_POINT: 04317c4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


bool Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetUint64TrackedDeviceProperty__Invoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_0406ae20();
      goto LAB_04317c84;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_04317c84:
  in_stack_00000018 = (*(code *)*puVar2)();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364(*unaff_x23);
  }
  FUN_074c25d4(&stack0x00000010);
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (plVar3 = (long *)FUN_054b8ffc(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_08f73868),
     plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f73278) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04317d30;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar3,*(long *)PTR_DAT_08f73278,0);
LAB_04317d30:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    uVar1 = in_stack_00000010;
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f73260) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_04317da0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar3,*(long *)PTR_DAT_08f73260,1);
LAB_04317da0:
      in_stack_00000008 = (*(code *)*puVar2)(plVar3,uVar1,puVar2[1]);
      lVar5 = FUN_074c32b4(&stack0x00000008,0);
      if (*(long *)(unaff_x19 + 0x18) < lVar5) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar5 = FUN_074c32b4(&stack0x00000018,0);
        lVar4 = FUN_074c32b4(&stack0x00000008,0);
        if (lVar4 < lVar5) {
          return *(long *)(unaff_x19 + 0x18) != 0;
        }
      }
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


