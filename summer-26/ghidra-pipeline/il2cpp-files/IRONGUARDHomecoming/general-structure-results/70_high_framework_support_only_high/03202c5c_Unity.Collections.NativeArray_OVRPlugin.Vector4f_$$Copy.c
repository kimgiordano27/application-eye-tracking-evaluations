/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 03202c5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(ulong param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  int iVar6;
  uint uVar7;
  ulong unaff_x21;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  if ((int)param_1 <= (int)unaff_x21) {
    return 0;
  }
  uVar9 = unaff_x21 & 0xffffffff;
  do {
    unaff_x21 = (ulong)((int)unaff_x21 + 1);
    do {
      iVar6 = (int)unaff_x21;
      uVar8 = (uint)uVar9;
      if ((int)param_1 <= iVar6) {
        *(uint *)(unaff_x19 + 0x18) = uVar8;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)param_1 - uVar8;
      }
      uVar2 = unaff_x21 & 0xffffffff;
      unaff_x21 = (ulong)iVar6;
      lVar10 = ((-(uVar2 >> 0x1f) & 0xfffffffe00000000 | uVar2 << 1) + (long)iVar6) * 4;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_03202d70;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x21) goto LAB_03202d74;
        if (unaff_x20 == 0) goto LAB_03202d70;
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + lVar10 + 0x20),
                           *(undefined4 *)(lVar3 + lVar10 + 0x28),*(undefined8 *)(unaff_x20 + 0x28))
        ;
        if ((uVar2 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x21 = unaff_x21 + 1;
        lVar10 = lVar10 + 0xc;
      } while ((long)unaff_x21 < (long)param_1);
      uVar7 = (uint)unaff_x21;
    } while ((int)param_1 <= (int)uVar7);
    lVar10 = *(long *)(unaff_x19 + 0x10);
    if (lVar10 == 0) {
LAB_03202d70:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((*(uint *)(lVar10 + 0x18) <= uVar7) || (*(uint *)(lVar10 + 0x18) <= uVar8)) {
LAB_03202d74:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar5 = (undefined8 *)(lVar10 + 0x20 + (long)(int)uVar7 * 0xc);
    uVar1 = *(undefined4 *)(puVar5 + 1);
    puVar4 = (undefined8 *)(lVar10 + 0x20 + (long)(int)uVar8 * 0xc);
    *puVar4 = *puVar5;
    *(undefined4 *)(puVar4 + 1) = uVar1;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar9 = (ulong)(uVar8 + 1);
  } while( true );
}


