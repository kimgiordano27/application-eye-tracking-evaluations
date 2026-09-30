/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRDestroyTimer$$StartTimer
ENTRY_POINT: 02d41c58
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


uint HurricaneVR_Framework_Components_HVRDestroyTimer__StartTimer
               (undefined8 param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int in_w8;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  if (in_w8 + 1 <= (int)param_3) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      if ((*(uint *)(param_2 + 0x18) <= param_3) ||
         (plVar3 = (long *)thunk_FUN_01afa70c(**(undefined8 **)(*(long *)(param_5 + 0x20) + 0xc0)),
         *(uint *)(param_2 + 0x18) <= param_3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (DAT_03fedd7b == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fedd7b = '\x01';
      }
      if ((plVar3 != (long *)0x0) && (*plVar3 == *(long *)puVar2)) {
        puVar4 = (undefined4 *)thunk_FUN_01afac30(plVar3);
        uVar8 = puVar4[1];
        uVar7 = puVar4[2];
        uVar6 = puVar4[3];
        lVar1 = param_2 + (long)(int)param_3 * 0x10;
        uVar5 = FUN_030525d4(*puVar4,lVar1 + 0x20,0);
        if (((uVar5 & 1) != 0) && (uVar5 = FUN_030525d4(uVar8,lVar1 + 0x24,0), (uVar5 & 1) != 0)) {
          lVar1 = param_2 + (long)(int)param_3 * 0x10;
          uVar5 = FUN_030525d4(uVar7,lVar1 + 0x28,0);
          if (((uVar5 & 1) != 0) && (uVar5 = FUN_030525d4(uVar6,lVar1 + 0x2c,0), (uVar5 & 1) != 0))
          {
            return param_3;
          }
        }
      }
      param_3 = param_3 - 1;
    } while (in_w8 + 1 <= (int)param_3);
  }
  return 0xffffffff;
}


