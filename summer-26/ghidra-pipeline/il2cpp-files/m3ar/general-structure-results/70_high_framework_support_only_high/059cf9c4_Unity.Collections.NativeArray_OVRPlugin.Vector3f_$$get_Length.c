/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Length
ENTRY_POINT: 059cf9c4
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Length(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  do {
    uStack0000000000000008 = param_1[1];
    uStack0000000000000000 = *param_1;
    uStack0000000000000018 = param_1[3];
    uStack0000000000000010 = param_1[2];
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = uStack0000000000000010;
    uStack0000000000000058 = uStack0000000000000018;
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar3 = *(int *)(unaff_x19 + 0x18);
    if (((uVar4 & 1) == 0) || (unaff_x22 = unaff_x22 + 1, (long)iVar3 <= (long)unaff_x22)) {
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar3) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) {
LAB_059cfa94:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21))
        goto LAB_059cfa98;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x20);
        puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x20);
        uVar9 = *puVar1;
        uVar8 = puVar1[3];
        uVar7 = puVar1[2];
        unaff_w21 = unaff_w21 + 1;
        puVar2[1] = puVar1[1];
        *puVar2 = uVar9;
        puVar2[3] = uVar8;
        puVar2[2] = uVar7;
        iVar3 = *(int *)(unaff_x19 + 0x18);
        unaff_x22 = (ulong)(uVar6 + 1);
      }
      if (iVar3 <= (int)unaff_x22) {
        FUN_075082e0(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w21;
      }
      unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xffffffe000000000 | (unaff_x22 & 0xffffffff) << 5;
      unaff_x22 = (ulong)(int)unaff_x22;
    }
    unaff_x23 = unaff_x23 + 0x20;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) goto LAB_059cfa94;
    if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) {
LAB_059cfa98:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if (unaff_x20 == 0) goto LAB_059cfa94;
    param_1 = (undefined8 *)(lVar5 + unaff_x23);
  } while( true );
}


