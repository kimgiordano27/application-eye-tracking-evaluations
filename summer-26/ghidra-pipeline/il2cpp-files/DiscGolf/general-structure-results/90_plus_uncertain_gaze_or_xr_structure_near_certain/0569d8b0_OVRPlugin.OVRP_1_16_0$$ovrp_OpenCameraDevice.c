/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_OpenCameraDevice
ENTRY_POINT: 0569d8b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_16_0__ovrp_OpenCameraDevice(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar9;
  long lVar10;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x178));
  FUN_02d965b8(PTR_DAT_06a0f540);
  *(undefined1 *)(unaff_x22 + 0x885) = 1;
  uVar4 = FUN_054a5e0c();
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 0569d8e0 to 0579d903 has its CatchHandler @ 0569df88 */
    FUN_054a667c();
  }
  FUN_054a5c7c();
  lVar5 = FUN_054a5f88();
  puVar2 = UnityEngine_UIElements_EventCallback<NavigationSubmitEvent>_TypeInfo;
  puVar1 = PTR_DAT_06a0f540;
  if (lVar5 != 0) {
                    /* try { // try from 0569d90c to 0579d90f has its CatchHandler @ 0569dfdc */
                    /* try { // try from 0569d910 to 0579d9eb has its CatchHandler @ 0569d374 */
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar4 = 0;
      uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar4) goto LAB_0569db00;
        uVar9 = *(undefined8 *)(lVar5 + 0x20 + uVar4 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054be0f4(uVar9,0);
        if (unaff_x19 == 0) {
LAB_0569d9ac:
          if (unaff_x21 != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_054a874c(uVar9,0);
            uVar7 = FUN_035fd530();
            if ((uVar7 & 1) == 0) goto LAB_0569da28;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_054a874c(uVar9,0);
          uVar6 = FUN_054bd424();
          FUN_054a74e4(uVar9,uVar6,1,0);
        }
        else {
          lVar10 = *(long *)puVar2;
          lVar8 = *(long *)(lVar10 + 0x38);
          if (lVar8 == 0) {
            FUN_02dcfd74(lVar10);
            lVar8 = *(long *)(lVar10 + 0x38);
          }
          if (*(long *)(*(long *)(lVar8 + 0x10) + 0x38) == 0) {
            FUN_02dcfd74(*(long *)(lVar8 + 0x10));
          }
          iVar3 = FUN_03885e74();
          if (iVar3 < 0) goto LAB_0569d9ac;
        }
LAB_0569da28:
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    lVar5 = FUN_054a62f8(unaff_x23,0);
    puVar2 = Oculus_Platform_Request<UserList>_TypeInfo;
    if (lVar5 != 0) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar4 = 0;
        uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar4) {
LAB_0569db00:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          uVar9 = *(undefined8 *)(lVar5 + 0x20 + uVar4 * 8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_054a874c(uVar9,0);
          uVar6 = FUN_054bd424();
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar2);
          }
          FUN_0569d85c(uVar9,uVar6);
          uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


