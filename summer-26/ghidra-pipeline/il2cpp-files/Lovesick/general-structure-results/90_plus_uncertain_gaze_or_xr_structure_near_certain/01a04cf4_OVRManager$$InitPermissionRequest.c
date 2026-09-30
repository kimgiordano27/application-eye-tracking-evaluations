/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 01a04cf4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRManager__InitPermissionRequest(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  int *piVar4;
  long *unaff_x20;
  uint unaff_w23;
  uint uVar5;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  (**(code **)(param_1 + (long)(in_w9 + 7) * 0x10 + 0x138))();
  uVar1 = FUN_01a09068();
  uVar5 = unaff_w23;
  if ((uVar1 & 1) != 0) {
    lVar3 = *unaff_x20;
                    /* try { // try from 01a04d20 to 01b04d4b has its CatchHandler @ 01a04efc */
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_01a04d6c;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a04d6c:
    (*(code *)*puVar2)(&stack0x00000008);
                    /* try { // try from 01a04d84 to 01b04db3 has its CatchHandler @ 01a04ef8 */
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar1 = FUN_01a28c80();
    if ((uVar1 & 1) == 0) {
      lVar3 = *unaff_x20;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
                    /* try { // try from 01a04df0 to 01b04e23 has its CatchHandler @ 01a04ef4 */
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
            goto LAB_01a04df4;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a04df4:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar1 = FUN_01a29580();
                    /* try { // try from 01a04e24 to 01b04ec7 has its CatchHandler @ 01a049c0 */
      uVar5 = unaff_w23 | 2;
      if ((uVar1 & 1) == 0) {
        uVar5 = unaff_w23;
      }
    }
  }
  return uVar5;
}


