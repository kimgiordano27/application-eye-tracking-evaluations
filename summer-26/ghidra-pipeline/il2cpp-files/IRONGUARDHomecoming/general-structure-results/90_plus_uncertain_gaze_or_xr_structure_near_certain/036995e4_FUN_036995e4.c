/*
FUNCTION_NAME: FUN_036995e4
ENTRY_POINT: 036995e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_036995e4(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  
  puVar1 = 
  Method_Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_System_Collections_IEnumerator_Reset__
  ;
  if ((DAT_04833f10 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__);
    thunk_FUN_01efb3a4(
                      Method_Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_System_Collections_IEnumerator_Reset__
                      );
    DAT_04833f10 = 1;
  }
  FUN_02f46f3c(param_1,*(undefined8 *)puVar1);
  plVar6 = *(long **)(param_1 + 0x120);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto OVRPlugin_Qpl__MarkerStart;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                        ,0);
OVRPlugin_Qpl__MarkerStart:
  uVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  *(undefined4 *)(param_1 + 300) = uVar7;
  return;
}


