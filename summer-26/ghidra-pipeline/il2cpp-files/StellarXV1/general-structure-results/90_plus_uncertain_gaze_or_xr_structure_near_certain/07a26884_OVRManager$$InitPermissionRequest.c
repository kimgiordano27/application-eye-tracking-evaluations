/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 07a26884
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRManager__InitPermissionRequest(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  uint uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 4) * 0x10 + 0x138);
      goto LAB_07a268c0;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a268c0:
  lVar2 = (*(code *)*puVar1)();
  if (unaff_x19 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar3 = FUN_07a2bca8();
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      if (lVar2 == 0) goto LAB_07a26a90;
      uStack000000000000004c = FUN_07a4b988(lVar2,0);
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ecfe8) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_07a26960;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a26960:
      (*(code *)*puVar1)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (*(int *)(*(long *)PTR_DAT_092ecfe0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_07a4b15c(&stack0x00000020,(long)&stack0x00000048 + 4,0);
      uVar6 = uStack000000000000004c;
    }
    uVar3 = FUN_07a2bd58();
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) {
LAB_07a26a90:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uStack0000000000000048 = OVRPlugin__GetBoundaryVisibility(lVar2,0);
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ecfe8) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto LAB_07a26a28;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a26a28:
      (*(code *)*puVar1)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (*(int *)(*(long *)PTR_DAT_092ecfe0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_07a4b15c(&stack0x00000020,&stack0x00000048,0);
      uVar6 = uStack0000000000000048 | uVar6;
    }
  }
  return uVar6;
}


