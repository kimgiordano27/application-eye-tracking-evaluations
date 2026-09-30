/*
FUNCTION_NAME: FUN_075b09a0
ENTRY_POINT: 075b09a0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_075b09a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  local_50 = param_4;
  uStack_4c = param_5;
  local_48 = param_6;
  uStack_44 = param_7;
  local_40 = param_1;
  uStack_3c = param_2;
  local_38 = param_3;
  if ((DAT_0826e05b & 1) == 0) {
    FUN_0373b518(OVRControllerTest_BoolMonitor_TypeInfo);
    FUN_0373b518(OVRManager_<>c_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo);
    FUN_0373b518(PTR_DAT_07d96ab0);
    FUN_0373b518(PTR_DAT_07d8f658);
    DAT_0826e05b = 1;
  }
  if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_075bd1f8(0,*(undefined8 *)PTR_DAT_07d8f658,0);
  }
  if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_075bd1f8(0,*(undefined8 *)PTR_DAT_07d96ab0,0);
  }
  if (param_8 != 0) {
    lVar4 = *(long *)(param_8 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075bd1f8(param_8,*(undefined8 *)PTR_DAT_07d8f658,0);
    }
    if (param_9 != 0) {
      lVar3 = *(long *)(param_9 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_075bd1f8(param_9,*(undefined8 *)PTR_DAT_07d96ab0,0);
      }
      if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      puVar1 = OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo;
      if (DAT_0826e0a8 == (code *)0x0) {
        DAT_0826e0a8 = (code *)FUN_0373b4dc(
                                           "UnityEngine.Object::Internal_InstantiateSingleWithParent_Injected(System.IntPtr,System.IntPtr,UnityEngine.Vector3&,UnityEngine.Quaternion&)"
                                           );
      }
      uVar2 = (*DAT_0826e0a8)(lVar4,lVar3,&local_40,&local_50);
      FUN_07521584(uVar2,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


