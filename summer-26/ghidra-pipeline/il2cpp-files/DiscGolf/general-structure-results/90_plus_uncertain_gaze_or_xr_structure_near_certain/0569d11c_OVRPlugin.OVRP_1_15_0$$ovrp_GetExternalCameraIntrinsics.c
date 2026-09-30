/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraIntrinsics
ENTRY_POINT: 0569d11c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraIntrinsics(long *param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 in_x3;
  ulong uVar3;
  long in_x9;
  long unaff_x19;
  byte unaff_w21;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x27;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    bVar1 = !(bool)in_ZR;
    lVar2 = *param_1;
    if (in_x9 != 0) {
      lVar2 = in_x9;
    }
    lVar2 = FUN_054a64a8(*(undefined8 *)(unaff_x25 + 0x10),lVar2,in_stack_00000018._4_4_ & 1,in_x3);
    if (lVar2 == 0) break;
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar6) goto LAB_0569d234;
        uVar4 = *(undefined8 *)(lVar2 + 0x20 + uVar6 * 8);
        uVar5 = *(undefined8 *)(unaff_x25 + 0x10);
        if (*(int *)(*(long *)PTR_DAT_06a0f540 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_054bfccc(uVar5,uVar4,0);
        FUN_054bd424(*(undefined8 *)(unaff_x25 + 0x18),uVar5,0);
        uVar5 = FUN_05362cb4();
        if (*(int *)(*(long *)Oculus_Platform_Request<UserList>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)Oculus_Platform_Request<UserList>_TypeInfo);
        }
        FUN_0569d23c(uVar4,uVar5,bVar1 | unaff_w21 & 1);
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
        unaff_x27 = in_stack_00000008;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    do {
      unaff_w24 = unaff_w24 + 1;
      if ((int)*(uint *)(unaff_x27 + 0x18) <= (int)unaff_w24) {
        return;
      }
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_w24) {
LAB_0569d234:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      unaff_x25 = *(long *)(unaff_x27 + (long)(int)unaff_w24 * 8 + 0x20);
      if (unaff_x25 == 0) goto LAB_0569d238;
      uVar6 = FUN_054a5e0c(*(undefined8 *)(unaff_x25 + 0x10),0);
    } while ((uVar6 & 1) == 0);
    in_ZR = unaff_x19 == 0;
    in_x3 = 0;
    param_1 = (long *)PTR_DAT_069fba08;
    in_x9 = in_stack_00000010;
    unaff_w21 = bVar1 | unaff_w21;
  }
LAB_0569d238:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


