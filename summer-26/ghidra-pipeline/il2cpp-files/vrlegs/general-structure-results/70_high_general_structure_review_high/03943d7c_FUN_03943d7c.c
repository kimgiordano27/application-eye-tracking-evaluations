/*
FUNCTION_NAME: FUN_03943d7c
ENTRY_POINT: 03943d7c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_3
*/


void FUN_03943d7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_025be440(param_2,0);
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_04138ca0 == (code *)0x0) {
        DAT_04138ca0 = (code *)FUN_01ab6968(
                                           "UnityEngine.Networking.UnityWebRequest::get_isModifiable()"
                                           );
      }
      uVar2 = (*DAT_04138ca0)(param_1);
      if ((uVar2 & 1) != 0) {
        if (DAT_04138cc8 == (code *)0x0) {
          DAT_04138cc8 = (code *)FUN_01ab6968(
                                             "UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)"
                                             );
        }
        iVar1 = (*DAT_04138cc8)(param_1,param_2,param_3);
        if (iVar1 == 0) {
          return;
        }
        uVar4 = FUN_039425d8();
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar5 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar5,uVar4,0);
        uVar4 = thunk_FUN_01a6ca08(
                                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar4);
      }
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar4 = thunk_FUN_01a89e68();
      uVar5 = thunk_FUN_01a6ca08(
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__
                                );
      FUN_0276a4a8(uVar4,uVar5,0);
      goto LAB_03943e9c;
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar4 = thunk_FUN_01a89e68();
    puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__;
  }
  else {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar4 = thunk_FUN_01a89e68();
    puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_SetLength__;
  }
  uVar5 = thunk_FUN_01a6ca08(puVar3);
  FUN_026b274c(uVar4,uVar5,0);
LAB_03943e9c:
  uVar5 = thunk_FUN_01a6ca08(
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar5);
}


