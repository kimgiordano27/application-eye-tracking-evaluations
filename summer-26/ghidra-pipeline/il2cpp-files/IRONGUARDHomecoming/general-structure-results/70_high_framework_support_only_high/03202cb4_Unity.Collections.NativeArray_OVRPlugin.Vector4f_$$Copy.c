/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 03202cb4
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


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  code *in_x9;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  
  do {
    uVar2 = (*in_x9)(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(unaff_x19 + 0x18);
LAB_03202ce8:
      uVar7 = (uint)unaff_x21;
      if ((int)uVar7 < iVar3) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) {
LAB_03202d70:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((*(uint *)(lVar4 + 0x18) <= uVar7) || (*(uint *)(lVar4 + 0x18) <= unaff_w23))
        goto LAB_03202d74;
        puVar6 = (undefined8 *)(lVar4 + 0x20 + (int)uVar7 * unaff_x22);
        uVar1 = *(undefined4 *)(puVar6 + 1);
        puVar5 = (undefined8 *)(lVar4 + 0x20 + (int)unaff_w23 * unaff_x22);
        *puVar5 = *puVar6;
        *(undefined4 *)(puVar5 + 1) = uVar1;
        iVar3 = *(int *)(unaff_x19 + 0x18);
        unaff_w23 = unaff_w23 + 1;
        uVar7 = uVar7 + 1;
      }
      if (iVar3 <= (int)uVar7) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w23;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w23;
      }
      unaff_x21 = (long)(int)uVar7;
      unaff_x24 = ((-(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1) +
                  (long)(int)uVar7) * 4;
    }
    else {
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_x21 = unaff_x21 + 1;
      unaff_x24 = unaff_x24 + 0xc;
      if (iVar3 <= unaff_x21) goto LAB_03202ce8;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_03202d70;
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x21) {
LAB_03202d74:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (unaff_x20 == 0) goto LAB_03202d70;
    param_1 = param_1 + unaff_x24;
    in_x9 = *(code **)(unaff_x20 + 0x18);
  } while( true );
}


