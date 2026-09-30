/*
FUNCTION_NAME: FUN_038b43a4
ENTRY_POINT: 038b43a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 120
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x038b45a8) */

void FUN_038b43a4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_04837f67 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04837f67 = 1;
  }
  lVar2 = FUN_038b3bec(param_1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_0406f868(lVar2,0);
  puVar1 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_03825b0c(param_2,0x226,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    if (DAT_04837f9f == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                        );
      DAT_04837f9f = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0xdc) = 8;
    FUN_038b4670(&local_70,param_1,param_2);
    if (DAT_04837e2a == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                        );
      DAT_04837e2a = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(lVar2 + 0xb8);
    *(undefined8 *)(lVar2 + 0xc0) = uStack_38;
    *(undefined8 *)(lVar2 + 0xb8) = uStack_40;
    *(undefined8 *)(lVar2 + 0xb0) = uStack_48;
    *(undefined8 *)(lVar2 + 0xa8) = local_50;
    *(undefined8 *)(lVar2 + 0xa0) = uStack_58;
    *(undefined8 *)(lVar2 + 0x98) = uStack_60;
    *(undefined8 *)(lVar2 + 0x90) = uStack_68;
    *(undefined8 *)(lVar2 + 0x88) = local_70;
    lVar2 = FUN_038b3ca0(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0407c270(lVar2,0);
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_038b4580;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_038b4580:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
  }
  return;
}


