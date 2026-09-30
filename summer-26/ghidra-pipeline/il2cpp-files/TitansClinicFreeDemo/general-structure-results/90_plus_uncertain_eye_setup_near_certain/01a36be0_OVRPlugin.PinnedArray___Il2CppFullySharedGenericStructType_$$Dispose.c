/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$Dispose
ENTRY_POINT: 01a36be0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__Dispose(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  
  FUN_01a35bd8(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      if (lVar6 == 0) goto LAB_01a36ce8;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_01a36cec:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x20 == 0) goto LAB_01a36ce8;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar6 + lVar8 + 0x20),
                         *(undefined8 *)(lVar6 + lVar8 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x21 + 0x10);
        if (lVar6 == 0) goto LAB_01a36ce8;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_01a36cec;
        if (param_2 == 0) {
LAB_01a36ce8:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar1 = *(undefined8 *)(lVar6 + lVar8 + 0x20);
        uVar2 = *(undefined8 *)(lVar6 + lVar8 + 0x28);
        lVar6 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_01a36ce8;
        uVar3 = *(uint *)(param_2 + 0x18);
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
          *(uint *)(param_2 + 0x18) = uVar3 + 1;
          puVar5 = (undefined8 *)(lVar6 + 0x20);
          *puVar5 = uVar1;
          *(undefined8 *)(lVar6 + 0x28) = uVar2;
          thunk_FUN_01286abc(puVar5,0);
        }
        else {
          FUN_01a36450(param_2,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((long)uVar9 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return param_2;
}


