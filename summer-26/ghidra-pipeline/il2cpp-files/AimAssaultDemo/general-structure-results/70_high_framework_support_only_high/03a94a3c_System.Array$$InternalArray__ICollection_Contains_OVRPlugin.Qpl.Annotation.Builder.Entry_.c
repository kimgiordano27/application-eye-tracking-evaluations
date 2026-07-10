/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03a94a3c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (float param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  if (param_1 <= 0.0) {
    *(undefined4 *)(param_4 + 0x50) = 1;
    if (param_3 != 0) {
      if (*(int *)(param_3 + 0x18) != 0) {
        return;
      }
      goto LAB_03a94bc8;
    }
  }
  else {
    lVar1 = *(long *)(param_4 + 0x40);
    if (lVar1 != 0) {
      uVar2 = (uint)*(ulong *)(lVar1 + 0x18);
      if (1 < (int)uVar2) {
        lVar4 = 0;
        lVar5 = 0;
        do {
          if (param_1 <= *(float *)(lVar1 + 0x24 + lVar4 * 4)) {
            uVar3 = (int)lVar4 + 1;
            lVar5 = lVar5 >> 0x20;
            goto LAB_03a94ac0;
          }
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 0x100000000;
        } while ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) - 1 != lVar4);
      }
      uVar3 = 0;
      lVar5 = 0;
LAB_03a94ac0:
      if ((uint)lVar5 < uVar2) {
        if (param_3 == 0) goto LAB_03a94bc4;
        if (((uint)lVar5 < *(uint *)(param_3 + 0x18)) && (uVar3 < *(uint *)(param_3 + 0x18))) {
          lVar4 = param_3 + (long)(int)uVar3 * 0xc;
          param_3 = param_3 + lVar5 * 0xc;
          fVar6 = *(float *)(lVar1 + lVar5 * 4 + 0x20);
          uVar10 = *(undefined8 *)(param_3 + 0x20);
          fVar9 = *(float *)(param_3 + 0x28);
          uVar7 = *(undefined8 *)(lVar4 + 0x20);
          fVar8 = *(float *)(lVar4 + 0x28);
          *(uint *)(param_4 + 0x50) = uVar3;
          fVar6 = *(float *)(param_4 + 0x38) * (param_1 - fVar6);
          fVar11 = (float)uVar7 - (float)uVar10;
          fVar12 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
          fVar8 = fVar8 - fVar9;
          if (DAT_0825295d == '\0') {
            FUN_0373b518(PTR_DAT_07d863e8);
            DAT_0825295d = '\x01';
          }
          if (fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12 <= fVar6 * fVar6) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) != 0) {
            return;
          }
          thunk_FUN_03798b70();
          return;
        }
      }
LAB_03a94bc8:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
  }
LAB_03a94bc4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


