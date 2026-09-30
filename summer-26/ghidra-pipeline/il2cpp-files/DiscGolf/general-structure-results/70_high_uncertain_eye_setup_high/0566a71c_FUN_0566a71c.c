/*
FUNCTION_NAME: FUN_0566a71c
ENTRY_POINT: 0566a71c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0566a8dc) */

void FUN_0566a71c(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = PTR_DAT_06a0f1a0;
  if ((DAT_06dbc62f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(PTR_DAT_069fbff0);
    DAT_06dbc62f = 1;
  }
  local_40 = 0;
  local_64 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar2 = (long *)FUN_0564de84(2,0);
  uVar3 = FUN_0566cbf8(param_2,&local_60,&local_64);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_0566cc78(param_2,&local_c0), (uVar3 & 1) != 0)) {
    if (*(int *)(param_2 + 0x200) == local_64) {
      if (*(int *)(param_2 + 0x208) == local_90._4_4_) {
        FUN_0566cef0(param_2,&local_c0);
        FUN_0566d300(param_1,param_2,&local_c0,&local_60);
      }
      else if ((*(int *)(param_2 + 0x214) != local_90._4_4_) && (*(char *)(param_2 + 0x20) == '\0'))
      {
        OVRPlugin__GetTrackingTransformRawPose(param_2);
      }
    }
    else if ((*(int *)(param_2 + 0x20c) != local_64) && (*(char *)(param_2 + 0x20) == '\0')) {
      FUN_0566cd08(param_2);
    }
  }
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0566a8b8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_069fbff0,0);
LAB_0566a8b8:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}


