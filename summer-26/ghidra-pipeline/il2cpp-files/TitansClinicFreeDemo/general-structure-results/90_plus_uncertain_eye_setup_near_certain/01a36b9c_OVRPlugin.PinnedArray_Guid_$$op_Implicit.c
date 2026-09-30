/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$op_Implicit
ENTRY_POINT: 01a36b9c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_PinnedArray<Guid>__op_Implicit(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f795cc(8);
  }
  if ((*(byte *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  lVar4 = thunk_FUN_0124bba8();
  FUN_01a35bd8(lVar4,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_01a36ce8;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
LAB_01a36cec:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (param_2 == 0) goto LAB_01a36ce8;
      uVar5 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar7 + lVar9 + 0x20),
                         *(undefined8 *)(lVar7 + lVar9 + 0x28),*(undefined8 *)(param_2 + 0x28));
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) goto LAB_01a36ce8;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_01a36cec;
        if (lVar4 == 0) {
LAB_01a36ce8:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar1 = *(undefined8 *)(lVar7 + lVar9 + 0x20);
        uVar2 = *(undefined8 *)(lVar7 + lVar9 + 0x28);
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_01a36ce8;
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar3 + 1;
          puVar6 = (undefined8 *)(lVar7 + 0x20);
          *puVar6 = uVar1;
          *(undefined8 *)(lVar7 + 0x28) = uVar2;
          thunk_FUN_01286abc(puVar6,0);
        }
        else {
          FUN_01a36450(lVar4,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((long)uVar10 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar4;
}


