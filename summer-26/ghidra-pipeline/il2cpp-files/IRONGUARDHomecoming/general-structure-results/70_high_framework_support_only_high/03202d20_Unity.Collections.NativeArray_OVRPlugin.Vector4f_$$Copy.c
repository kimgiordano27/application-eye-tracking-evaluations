/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 03202d20
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


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *in_x9;
  undefined8 in_x10;
  long unaff_x19;
  long unaff_x20;
  int iVar5;
  uint uVar6;
  ulong unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long lVar7;
  
  do {
    uVar1 = *(undefined4 *)(in_x9 + 1);
    puVar3 = (undefined8 *)(param_1 + (int)unaff_w23 * unaff_x22);
    *puVar3 = in_x10;
    *(undefined4 *)(puVar3 + 1) = uVar1;
    uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_w23 = unaff_w23 + 1;
    unaff_x21 = (ulong)((int)unaff_x21 + 1);
    do {
      iVar5 = (int)unaff_x21;
      if ((int)uVar4 <= iVar5) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w23;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)uVar4 - unaff_w23;
      }
      uVar4 = unaff_x21 & 0xffffffff;
      unaff_x21 = (ulong)iVar5;
      lVar7 = ((-(uVar4 >> 0x1f) & 0xfffffffe00000000 | uVar4 << 1) + (long)iVar5) * 4;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_03202d70;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x21) goto LAB_03202d74;
        if (unaff_x20 == 0) goto LAB_03202d70;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + lVar7 + 0x20),
                           *(undefined4 *)(lVar2 + lVar7 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x21 = unaff_x21 + 1;
        lVar7 = lVar7 + 0xc;
      } while ((long)unaff_x21 < (long)uVar4);
      uVar6 = (uint)unaff_x21;
    } while ((int)uVar4 <= (int)uVar6);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_03202d70:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((*(uint *)(param_1 + 0x18) <= uVar6) || (*(uint *)(param_1 + 0x18) <= unaff_w23)) {
LAB_03202d74:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    param_1 = param_1 + 0x20;
    in_x9 = (undefined8 *)(param_1 + (int)uVar6 * unaff_x22);
    in_x10 = *in_x9;
  } while( true );
}


