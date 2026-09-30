/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetSubArray
ENTRY_POINT: 02e06e6c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetSubArray(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032e32a8(8);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar10 = 0;
  }
  else {
    lVar7 = 0;
    uVar10 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_02e06fd8;
      if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_02e06fdc;
      if (unaff_x20 == 0) goto LAB_02e06fd8;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + lVar7 + 0x20),
                         *(undefined8 *)(lVar5 + lVar7 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        uVar4 = (ulong)*(uint *)(param_1 + 0x18);
        break;
      }
      uVar4 = (ulong)*(int *)(param_1 + 0x18);
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((long)uVar10 < (long)uVar4);
  }
  if ((int)uVar4 <= (int)uVar10) {
    return 0;
  }
  uVar8 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      uVar6 = (uint)uVar8;
      if ((int)uVar4 <= (int)uVar10) {
        FUN_032f3ffc(*(undefined8 *)(param_1 + 0x10),uVar8,(int)uVar4 - uVar6,0);
        iVar1 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar6;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar1 - uVar6;
      }
      uVar11 = -(uVar10 >> 0x1f & 1) & 0xfffffff000000000 | (uVar10 & 0xffffffff) << 4;
      uVar10 = (ulong)(int)uVar10;
      do {
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) goto LAB_02e06fd8;
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar10) goto LAB_02e06fdc;
        if (unaff_x20 == 0) goto LAB_02e06fd8;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar7 + uVar11 + 0x20),
                           *(undefined8 *)(lVar7 + uVar11 + 0x28),*(undefined8 *)(unaff_x20 + 0x28))
        ;
        if ((uVar4 & 1) == 0) {
          uVar4 = (ulong)*(uint *)(param_1 + 0x18);
          break;
        }
        uVar4 = (ulong)*(int *)(param_1 + 0x18);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + 0x10;
      } while ((long)uVar10 < (long)uVar4);
      uVar9 = (uint)uVar10;
    } while ((int)uVar4 <= (int)uVar9);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_02e06fd8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((*(uint *)(lVar7 + 0x18) <= uVar9) || (*(uint *)(lVar7 + 0x18) <= uVar6)) {
LAB_02e06fdc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    puVar2 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar9 * 0x10);
    uVar12 = *puVar2;
    puVar3 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar6 * 0x10);
    puVar3[1] = puVar2[1];
    *puVar3 = uVar12;
    uVar4 = (ulong)*(uint *)(param_1 + 0x18);
    uVar8 = (ulong)(uVar6 + 1);
  } while( true );
}


