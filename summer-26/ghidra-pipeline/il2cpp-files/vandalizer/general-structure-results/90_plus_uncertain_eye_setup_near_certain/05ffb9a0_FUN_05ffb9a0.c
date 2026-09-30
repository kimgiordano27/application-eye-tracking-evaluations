/*
FUNCTION_NAME: FUN_05ffb9a0
ENTRY_POINT: 05ffb9a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05ffb9a0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined4 local_24;
  
  if ((DAT_07a468dc & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f2f80);
    DAT_07a468dc = 1;
  }
  puVar1 = PTR_DAT_075f2f80;
  local_24 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar3 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f2f80) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto OVRManager__SetAppSpacePosition;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)PTR_DAT_075f2f80,2);
OVRManager__SetAppSpacePosition:
  fVar6 = (float)(*(code *)*puVar2)(param_2,puVar2[1]);
  if (0.0 < fVar6) {
    fVar6 = (float)FUN_05fffdd0(param_1,param_2,&local_24,1,0);
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_05ffbab4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)puVar1,2);
LAB_05ffbab4:
    fVar7 = (float)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (fVar6 <= fVar7) {
      FUN_05ffc068(param_1,param_2,local_24);
    }
  }
  return;
}


