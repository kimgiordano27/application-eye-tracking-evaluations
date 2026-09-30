/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_HasCameraDeviceOpened
ENTRY_POINT: 0569d9a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_16_0__ovrp_HasCameraDeviceOpened(int param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar7;
  long *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    if (-1 < param_1) goto LAB_0569da28;
    do {
      if (unaff_x21 == 0) {
LAB_0569d9e8:
                    /* try { // try from 0569d9ec to 0579da13 has its CatchHandler @ 0569dfe8 */
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054a874c(unaff_x24,0);
        uVar3 = FUN_054bd424();
        FUN_054a74e4(unaff_x24,uVar3,1,0);
      }
      else {
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054a874c(unaff_x24,0);
        uVar2 = FUN_035fd530();
        if ((uVar2 & 1) != 0) goto LAB_0569d9e8;
      }
LAB_0569da28:
      unaff_x28 = unaff_x28 + 1;
      if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x28) {
        lVar4 = FUN_054a62f8(in_stack_00000008,0);
        puVar1 = Oculus_Platform_Request<UserList>_TypeInfo;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar2 = 0;
          uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar2) {
LAB_0569db00:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar3 = *(undefined8 *)(lVar4 + 0x20 + uVar2 * 8);
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_054a874c(uVar3,0);
            uVar5 = FUN_054bd424();
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar1);
            }
            FUN_0569d85c(uVar3,uVar5);
            uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        return;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x28) goto LAB_0569db00;
      unaff_x24 = *(undefined8 *)(unaff_x29 + unaff_x28 * 8);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054be0f4(unaff_x24,0);
    } while (unaff_x19 == 0);
    lVar7 = *unaff_x22;
    lVar4 = *(long *)(lVar7 + 0x38);
    if (lVar4 == 0) {
      FUN_02dcfd74(lVar7);
      lVar4 = *(long *)(lVar7 + 0x38);
    }
    if (*(long *)(*(long *)(lVar4 + 0x10) + 0x38) == 0) {
      FUN_02dcfd74(*(long *)(lVar4 + 0x10));
    }
    param_1 = FUN_03885e74();
  } while( true );
}


