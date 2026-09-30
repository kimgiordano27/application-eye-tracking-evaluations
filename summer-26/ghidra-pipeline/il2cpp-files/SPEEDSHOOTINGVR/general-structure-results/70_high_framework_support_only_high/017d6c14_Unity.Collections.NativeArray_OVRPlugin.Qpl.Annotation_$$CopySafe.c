/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 017d6c14
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d5a4a0(8);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_017d6d80;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_017d6d84;
      if (param_2 == 0) goto LAB_017d6d80;
      lVar4 = lVar4 + lVar8;
      uVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                         *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c),
                         *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
      if ((uVar3 & 1) != 0) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x18);
        break;
      }
      uVar3 = (ulong)*(int *)(param_1 + 0x18);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((long)uVar6 < (long)uVar3);
  }
  if ((int)uVar3 <= (int)uVar6) {
    return 0;
  }
  uVar9 = uVar6 & 0xffffffff;
  do {
    uVar6 = (ulong)((int)uVar6 + 1);
    do {
      uVar7 = (uint)uVar9;
      if ((int)uVar3 <= (int)uVar6) {
        *(uint *)(param_1 + 0x18) = uVar7;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return (int)uVar3 - uVar7;
      }
      uVar10 = -(uVar6 >> 0x1f & 1) & 0xfffffff000000000 | (uVar6 & 0xffffffff) << 4;
      uVar6 = (ulong)(int)uVar6;
      do {
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) goto LAB_017d6d80;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar6) goto LAB_017d6d84;
        if (param_2 == 0) goto LAB_017d6d80;
        lVar8 = lVar8 + uVar10;
        uVar3 = (**(code **)(param_2 + 0x18))
                          (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),
                           *(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c),
                           *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)*(uint *)(param_1 + 0x18);
          break;
        }
        uVar3 = (ulong)*(int *)(param_1 + 0x18);
        uVar6 = uVar6 + 1;
        uVar10 = uVar10 + 0x10;
      } while ((long)uVar6 < (long)uVar3);
      uVar5 = (uint)uVar6;
    } while ((int)uVar3 <= (int)uVar5);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_017d6d80:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((*(uint *)(lVar8 + 0x18) <= uVar5) || (*(uint *)(lVar8 + 0x18) <= uVar7)) {
LAB_017d6d84:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    puVar1 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar5 * 0x10);
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar7 * 0x10);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
    uVar9 = (ulong)(uVar7 + 1);
  } while( true );
}


