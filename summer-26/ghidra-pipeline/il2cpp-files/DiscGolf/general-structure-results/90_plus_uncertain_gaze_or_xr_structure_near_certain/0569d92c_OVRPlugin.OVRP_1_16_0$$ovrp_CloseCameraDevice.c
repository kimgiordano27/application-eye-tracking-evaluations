/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 0569d92c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 130
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar7;
  long unaff_x23;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x27;
  ulong unaff_x28;
  undefined8 in_stack_00000008;
  
  param_1 = param_1 & 0xffffffff;
  plVar7 = *(long **)(unaff_x22 + 0x178);
  do {
    if (param_1 <= unaff_x28) goto LAB_0569db00;
    uVar8 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x28 * 8);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_054be0f4(uVar8,0);
    if (unaff_x19 == 0) {
LAB_0569d9ac:
      if (unaff_x21 != 0) {
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054a874c(uVar8,0);
        uVar3 = FUN_035fd530();
        if ((uVar3 & 1) == 0) goto LAB_0569da28;
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054a874c(uVar8,0);
      uVar4 = FUN_054bd424();
      FUN_054a74e4(uVar8,uVar4,1,0);
    }
    else {
      lVar9 = *plVar7;
      lVar5 = *(long *)(lVar9 + 0x38);
      if (lVar5 == 0) {
        FUN_02dcfd74(lVar9);
        lVar5 = *(long *)(lVar9 + 0x38);
      }
      if (*(long *)(*(long *)(lVar5 + 0x10) + 0x38) == 0) {
        FUN_02dcfd74(*(long *)(lVar5 + 0x10));
      }
      iVar2 = FUN_03885e74();
      if (iVar2 < 0) goto LAB_0569d9ac;
    }
LAB_0569da28:
    param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
    unaff_x28 = unaff_x28 + 1;
  } while ((long)unaff_x28 < (long)(int)*(uint *)(unaff_x23 + 0x18));
  lVar5 = FUN_054a62f8(in_stack_00000008,0);
  puVar1 = Oculus_Platform_Request<UserList>_TypeInfo;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar3 = 0;
    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar3) {
LAB_0569db00:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar8 = *(undefined8 *)(lVar5 + 0x20 + uVar3 * 8);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054a874c(uVar8,0);
      uVar4 = FUN_054bd424();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar1);
      }
      FUN_0569d85c(uVar8,uVar4);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return;
}


