/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$.ctor
ENTRY_POINT: 03ca5eec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>___ctor(int *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ulong local_28;
  
  local_28 = 0;
  if (param_2 < 0) {
LAB_03ca5fe4:
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar3 = thunk_FUN_02dd3144();
    uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0d1d0);
    FUN_05453f78(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3,param_3);
  }
  iVar1 = *param_1;
  if (iVar1 <= param_2) goto LAB_03ca5fe4;
  if (param_2 == 0) {
    if (iVar1 == 2) {
      lVar6 = *(long *)(param_1 + 2);
      if (lVar6 == 0) {
LAB_03ca6024:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_03ca6028:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      param_1[1] = *(int *)(lVar6 + 0x20);
      *(undefined4 *)(lVar6 + 0x20) = 0;
      goto LAB_03ca5f50;
    }
    if (iVar1 - 1U == 0) {
      param_1[1] = 0;
      goto LAB_03ca5f50;
    }
    lVar6 = *(long *)(param_1 + 2);
    if (lVar6 == 0) goto LAB_03ca6024;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_03ca6028;
    lVar2 = *(long *)(param_3 + 0x20);
    local_28 = (ulong)(iVar1 - 1U) << 0x20;
    param_1[1] = *(int *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    puVar5 = (ulong *)((long)&local_28 + 4);
    param_2 = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x20);
    lVar6 = *(long *)(param_1 + 2);
    param_2 = param_2 + -1;
    local_28 = (ulong)(iVar1 - 1);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    puVar5 = &local_28;
  }
  FUN_0352f3b0(lVar6,puVar5,param_2,*(undefined8 *)(lVar2 + 0xc0));
LAB_03ca5f50:
  *param_1 = *param_1 + -1;
  return;
}


