/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 03699608
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined4 uVar6;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x450));
  thunk_FUN_01efb3a4(
                    Method_Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_System_Collections_IEnumerator_Reset__
                    );
  *(undefined1 *)(unaff_x20 + 0xf10) = 1;
  FUN_02f46f3c();
  plVar5 = *(long **)(unaff_x19 + 0x120);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto OVRPlugin_Qpl__MarkerStart;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                        ,0);
OVRPlugin_Qpl__MarkerStart:
  uVar6 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  *(undefined4 *)(unaff_x19 + 300) = uVar6;
  return;
}


