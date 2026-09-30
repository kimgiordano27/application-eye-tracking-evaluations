/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraExtrinsics
ENTRY_POINT: 0569d1a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraExtrinsics
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  byte unaff_w21;
  long unaff_x22;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    FUN_054bd424(param_1,param_3,0);
    uVar2 = FUN_05362cb4();
    if (*(int *)(*(long *)Oculus_Platform_Request<UserList>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Oculus_Platform_Request<UserList>_TypeInfo);
    }
    FUN_0569d23c(unaff_x27,uVar2,unaff_w21 & 1);
    uVar3 = (ulong)*(uint *)(unaff_x26 + 0x18);
    unaff_x29 = unaff_x29 + 1;
    if ((long)(int)*(uint *)(unaff_x26 + 0x18) <= (long)unaff_x29) {
      do {
        do {
          unaff_w24 = unaff_w24 + 1;
          if ((int)*(uint *)(in_stack_00000008 + 0x18) <= (int)unaff_w24) {
            return;
          }
          if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_w24) goto LAB_0569d234;
          unaff_x25 = *(long *)(in_stack_00000008 + (long)(int)unaff_w24 * 8 + 0x20);
          if (unaff_x25 == 0) {
LAB_0569d238:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar3 = FUN_054a5e0c(*(undefined8 *)(unaff_x25 + 0x10),0);
        } while ((uVar3 & 1) == 0);
        lVar1 = *(long *)PTR_DAT_069fba08;
        if (in_stack_00000010 != 0) {
          lVar1 = in_stack_00000010;
        }
        unaff_x26 = FUN_054a64a8(*(undefined8 *)(unaff_x25 + 0x10),lVar1,in_stack_00000018._4_4_ & 1
                                 ,0);
        if (unaff_x26 == 0) goto LAB_0569d238;
        unaff_w21 = unaff_x19 != 0 | unaff_w21;
      } while ((int)*(ulong *)(unaff_x26 + 0x18) < 1);
      unaff_x29 = 0;
      uVar3 = *(ulong *)(unaff_x26 + 0x18) & 0xffffffff;
      unaff_x22 = unaff_x26 + 0x20;
    }
    if (uVar3 <= unaff_x29) {
LAB_0569d234:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x27 = *(undefined8 *)(unaff_x22 + unaff_x29 * 8);
    uVar2 = *(undefined8 *)(unaff_x25 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06a0f540 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    param_3 = FUN_054bfccc(uVar2,unaff_x27,0);
    param_1 = *(undefined8 *)(unaff_x25 + 0x18);
  } while( true );
}


