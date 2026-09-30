/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 01a36be8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  
  FUN_01a35bd8(param_2,*(undefined8 *)(param_1 + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      if (lVar6 == 0) goto LAB_01a36ce8;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
LAB_01a36cec:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x20 == 0) goto LAB_01a36ce8;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar6 + lVar7 + 0x20),
                         *(undefined8 *)(lVar6 + lVar7 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x21 + 0x10);
        if (lVar6 == 0) goto LAB_01a36ce8;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_01a36cec;
        if (unaff_x22 == 0) {
LAB_01a36ce8:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar1 = *(undefined8 *)(lVar6 + lVar7 + 0x20);
        uVar2 = *(undefined8 *)(lVar6 + lVar7 + 0x28);
        lVar6 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_01a36ce8;
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
          *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
          puVar5 = (undefined8 *)(lVar6 + 0x20);
          *puVar5 = uVar1;
          *(undefined8 *)(lVar6 + 0x28) = uVar2;
          thunk_FUN_01286abc(puVar5,0);
        }
        else {
          FUN_01a36450();
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((long)uVar8 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


