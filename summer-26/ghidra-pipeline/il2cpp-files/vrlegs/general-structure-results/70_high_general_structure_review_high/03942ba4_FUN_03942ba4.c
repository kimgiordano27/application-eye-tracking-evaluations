/*
FUNCTION_NAME: FUN_03942ba4
ENTRY_POINT: 03942ba4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_03942ba4(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DAT_04138ca0 == (code *)0x0) {
    DAT_04138ca0 = (code *)FUN_01ab6968("UnityEngine.Networking.UnityWebRequest::get_isModifiable()"
                                       );
  }
  uVar2 = (*DAT_04138ca0)(param_1);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar3 = thunk_FUN_01a89e68();
    uVar4 = thunk_FUN_01a6ca08(
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Clear__
                              );
    FUN_0276a4a8(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01a6ca08(
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Merge__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,uVar4);
  }
  if (DAT_04138cf0 == (code *)0x0) {
    DAT_04138cf0 = (code *)FUN_01ab6968(
                                       "UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)"
                                       );
  }
  iVar1 = (*DAT_04138cf0)(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x18),param_2);
    return;
  }
  uVar3 = FUN_039425d8();
  thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
  uVar4 = thunk_FUN_01a89e68();
  FUN_0276a4a8(uVar4,uVar3,0);
  uVar3 = thunk_FUN_01a6ca08(
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Merge__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar3);
}


