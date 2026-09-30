/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 03202bf8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(ulong param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  if ((int)param_1 < 1) {
    uVar9 = 0;
  }
  else {
    lVar10 = 0;
    uVar9 = 0;
    do {
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) goto LAB_03202d70;
      if (*(uint *)(lVar3 + 0x18) <= uVar9) goto LAB_03202d74;
      if (unaff_x20 == 0) goto LAB_03202d70;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + lVar10 + 0x20),
                         *(undefined4 *)(lVar3 + lVar10 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
        break;
      }
      param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0xc;
    } while ((long)uVar9 < (long)param_1);
  }
  if ((int)param_1 <= (int)uVar9) {
    return 0;
  }
  uVar2 = uVar9 & 0xffffffff;
  do {
    uVar9 = (ulong)((int)uVar9 + 1);
    do {
      iVar7 = (int)uVar9;
      uVar11 = (uint)uVar2;
      if ((int)param_1 <= iVar7) {
        *(uint *)(unaff_x19 + 0x18) = uVar11;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)param_1 - uVar11;
      }
      uVar4 = uVar9 & 0xffffffff;
      uVar9 = (ulong)iVar7;
      lVar10 = ((-(uVar4 >> 0x1f) & 0xfffffffe00000000 | uVar4 << 1) + (long)iVar7) * 4;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_03202d70;
        if (*(uint *)(lVar3 + 0x18) <= (uint)uVar9) goto LAB_03202d74;
        if (unaff_x20 == 0) goto LAB_03202d70;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + lVar10 + 0x20),
                           *(undefined4 *)(lVar3 + lVar10 + 0x28),*(undefined8 *)(unaff_x20 + 0x28))
        ;
        if ((uVar4 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0xc;
      } while ((long)uVar9 < (long)param_1);
      uVar8 = (uint)uVar9;
    } while ((int)param_1 <= (int)uVar8);
    lVar10 = *(long *)(unaff_x19 + 0x10);
    if (lVar10 == 0) {
LAB_03202d70:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((*(uint *)(lVar10 + 0x18) <= uVar8) || (*(uint *)(lVar10 + 0x18) <= uVar11)) {
LAB_03202d74:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar6 = (undefined8 *)(lVar10 + 0x20 + (long)(int)uVar8 * 0xc);
    uVar1 = *(undefined4 *)(puVar6 + 1);
    puVar5 = (undefined8 *)(lVar10 + 0x20 + (long)(int)uVar11 * 0xc);
    *puVar5 = *puVar6;
    *(undefined4 *)(puVar5 + 1) = uVar1;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar2 = (ulong)(uVar11 + 1);
  } while( true );
}


