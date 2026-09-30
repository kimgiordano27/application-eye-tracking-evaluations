/*
FUNCTION_NAME: FUN_01c03e74
ENTRY_POINT: 01c03e74
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_16;telemetry_or_network_hits_4
*/


void FUN_01c03e74(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* catch() { ... } // from try @ 01c03ec0 with catch @ 01c03e80 */
  if ((DAT_03fed39d & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<SewUVs>b__4_1__);
                    /* try { // try from 01c03eb4 to 01d03ebf has its CatchHandler @ 01c03f4c */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
                    /* try { // try from 01c03ec0 to 01d03f67 has its CatchHandler @ 01c03e80 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c__DisplayClass0_0_<AutoStitch>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c__DisplayClass4_0_<SewUVs>b__0__
                      );
    DAT_03fed39d = 1;
  }
  if (param_6 == 0) {
    if (*(char *)(param_5 + 0xac) == '\0') {
      return;
    }
    plVar3 = (long *)(param_5 + 0xa0);
  }
  else {
    if ((param_6 != 1) || (*(char *)(param_5 + 0xad) == '\0')) {
      return;
    }
    plVar3 = (long *)(param_5 + 0x98);
  }
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x90);
    uVar6 = FUN_03928d34(lVar4,0);
    uVar2 = param_2;
    uVar8 = param_3;
    uVar7 = FUN_039274a0(lVar4,0);
                    /* catch() { ... } // from try @ 01c03eb4 with catch @ 01c03f4c */
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = FUN_01f259b0(uVar6,param_2,param_3,uVar7,uVar2,uVar8,param_4,uVar5,
                         *(undefined8 *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    if (lVar1 != 0) {
      lVar1 = FUN_01ed7390(lVar1,*(undefined8 *)
                                  Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<SewUVs>b__4_1__
                          );
      FUN_039291ac(lVar4,0);
      if (lVar1 != 0) {
        uVar2 = FUN_01c076f8(lVar1);
        FUN_03920cb0(lVar1,uVar2,0);
        if (param_6 == 0) {
          *(undefined1 *)(param_5 + 0xac) = 0;
          FUN_03920818(*(undefined4 *)(param_5 + 0xa8),param_5,
                       *(undefined8 *)
                        Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c__DisplayClass4_0_<SewUVs>b__0__
                       ,0);
          lVar4 = *(long *)(param_5 + 0x120);
          if (lVar4 == 0) goto LAB_01c0408c;
          lVar1 = *(long *)(param_5 + 0x148);
        }
        else {
          *(undefined1 *)(param_5 + 0xad) = 0;
          FUN_03920818(*(undefined4 *)(param_5 + 0xa8),param_5,
                       *(undefined8 *)
                        Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c__DisplayClass0_0_<AutoStitch>b__0__
                       ,0);
          lVar4 = *(long *)(param_5 + 0x120);
          if (lVar4 == 0) goto LAB_01c0408c;
          lVar1 = *(long *)(param_5 + 0x140);
        }
        if (lVar1 != 0) {
          FUN_038ea93c(*(undefined4 *)(lVar4 + 0x20),lVar1,*(undefined8 *)(param_5 + 0x138),0);
          return;
        }
      }
    }
  }
LAB_01c0408c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


