/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceColorFrameAvailable
ENTRY_POINT: 0569da24
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceColorFrameAvailable
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar6;
  long unaff_x23;
  ulong uVar7;
  long lVar8;
  long *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    FUN_054a74e4(param_1,param_2,param_3,param_4);
LAB_0569da28:
    do {
      unaff_x28 = unaff_x28 + 1;
      if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x28) {
        lVar3 = FUN_054a62f8(in_stack_00000008,0);
        puVar1 = Oculus_Platform_Request<UserList>_TypeInfo;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
                    /* try { // try from 0569da50 to 0579da77 has its CatchHandler @ 0569dfe0 */
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar7 = 0;
          uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar7) {
LAB_0569db00:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar6 = *(undefined8 *)(lVar3 + 0x20 + uVar7 * 8);
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_054a874c(uVar6,0);
            uVar4 = FUN_054bd424();
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar1);
            }
            FUN_0569d85c(uVar6,uVar4);
            uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        return;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x28) goto LAB_0569db00;
      param_1 = *(undefined8 *)(unaff_x29 + unaff_x28 * 8);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054be0f4(param_1,0);
      if (unaff_x19 != 0) {
        lVar8 = *unaff_x22;
        lVar3 = *(long *)(lVar8 + 0x38);
        if (lVar3 == 0) {
          FUN_02dcfd74(lVar8);
          lVar3 = *(long *)(lVar8 + 0x38);
        }
        if (*(long *)(*(long *)(lVar3 + 0x10) + 0x38) == 0) {
          FUN_02dcfd74(*(long *)(lVar3 + 0x10));
        }
        iVar2 = FUN_03885e74();
        if (-1 < iVar2) goto LAB_0569da28;
      }
      if (unaff_x21 == 0) break;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054a874c(param_1,0);
      uVar7 = FUN_035fd530();
    } while ((uVar7 & 1) == 0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_054a874c(param_1,0);
    param_2 = FUN_054bd424();
    param_3 = 1;
    param_4 = 0;
  } while( true );
}


