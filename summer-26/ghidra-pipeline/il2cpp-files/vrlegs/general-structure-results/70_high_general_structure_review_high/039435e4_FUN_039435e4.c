/*
FUNCTION_NAME: FUN_039435e4
ENTRY_POINT: 039435e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_8
*/


undefined8 FUN_039435e4(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  if ((DAT_04138c80 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbf0c0);
    FUN_01ab69ac(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
                );
    DAT_04138c80 = 1;
  }
  if (DAT_04138ca8 == (code *)0x0) {
    DAT_04138ca8 = (code *)FUN_01ab6968("UnityEngine.Networking.UnityWebRequest::get_result()");
  }
  uVar1 = (*DAT_04138ca8)(param_1);
  if (uVar1 < 2) {
    uVar3 = 0;
  }
  else {
    if (uVar1 != 3) {
      if (DAT_04138c78 == (code *)0x0) {
        DAT_04138c78 = (code *)FUN_01ab6968("UnityEngine.Networking.UnityWebRequest::GetError()");
      }
      uVar2 = (*DAT_04138c78)(param_1);
      if (DAT_04138c18 == (code *)0x0) {
        DAT_04138c18 = (code *)FUN_01ab6968(
                                           "UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)"
                                           );
      }
                    /* WARNING: Could not recover jumptable at 0x03943784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*DAT_04138c18)(uVar2);
      return uVar3;
    }
    if (DAT_04138c98 == (code *)0x0) {
      DAT_04138c98 = (code *)FUN_01ab6968(
                                         "UnityEngine.Networking.UnityWebRequest::get_responseCode()"
                                         );
    }
    local_28 = (*DAT_04138c98)(param_1);
    uVar3 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbf0c0,&local_28);
    if (DAT_04138c98 == (code *)0x0) {
      DAT_04138c98 = (code *)FUN_01ab6968(
                                         "UnityEngine.Networking.UnityWebRequest::get_responseCode()"
                                         );
    }
    uVar4 = (*DAT_04138c98)(param_1);
    if (DAT_04138c20 == (code *)0x0) {
      DAT_04138c20 = (code *)FUN_01ab6968(
                                         "UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)"
                                         );
    }
    uVar4 = (*DAT_04138c20)(uVar4);
    uVar3 = FUN_025be86c(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
                         ,uVar3,uVar4,0);
  }
  return uVar3;
}


