/*
FUNCTION_NAME: FUN_03ca5820
ENTRY_POINT: 03ca5820
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03ca5820(int *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    piVar3 = param_1 + 1;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x20);
    plVar4 = (long *)(param_1 + 2);
    if (*plVar4 == 0) {
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = FUN_02d966a4(lVar2,1);
      *plVar4 = lVar2;
      LeanTween__value(plVar4,lVar2);
      lVar2 = *plVar4;
      if (lVar2 == 0) goto LAB_03ca5908;
      if (*(int *)(lVar2 + 0x18) == 0)
      goto System_Array_InternalEnumerator<OVRPlugin_Bone>__Dispose;
    }
    else {
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      FUN_034e24a4(plVar4,iVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
      lVar2 = *plVar4;
      if (lVar2 == 0) {
LAB_03ca5908:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar2 + 0x18) <= *param_1 - 1U) {
System_Array_InternalEnumerator<OVRPlugin_Bone>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar2 = lVar2 + (long)(int)(*param_1 - 1U) * 4;
    }
    piVar3 = (int *)(lVar2 + 0x20);
  }
  *piVar3 = param_2;
  *param_1 = *param_1 + 1;
  return;
}


