/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 06e2f350
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char in_NG;
  char in_OV;
  uint uVar4;
  int iVar5;
  int in_w3;
  long in_x4;
  long in_x5;
  uint in_w8;
  long lVar6;
  undefined8 in_x9;
  long lVar7;
  undefined8 in_x10;
  int in_w11;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 uVar8;
  uint unaff_w25;
  uint uVar9;
  undefined8 uVar10;
  uint unaff_w28;
  int iStack0000000000000004;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  iStack0000000000000004 = in_w11;
  uStack0000000000000008 = in_x9;
  uStack0000000000000010 = in_x10;
  if (in_NG == in_OV) {
    do {
      uVar9 = unaff_w25 * 2;
      uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      if ((int)uVar9 < in_stack_00000018._4_4_) {
        uVar1 = uVar9 + in_w3;
        if ((uVar4 <= uVar1 - 1) || (uVar4 <= uVar1))
        goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
        if (in_x4 == 0) {
LAB_06e2f4e4:
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar7 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w21;
        lVar6 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w21;
        uVar10 = *(undefined8 *)(lVar7 + 0x20);
        uVar2 = *(undefined4 *)(lVar7 + 0x28);
        uVar8 = *(undefined8 *)(lVar6 + 0x20);
        uVar3 = *(undefined4 *)(lVar6 + 0x28);
        if ((*(ushort *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        uVar4 = (**(code **)(in_x4 + 0x18))
                          (*(undefined8 *)(in_x4 + 0x40),uVar10,uVar2,uVar8,uVar3,
                           *(undefined8 *)(in_x4 + 0x28));
        uVar9 = uVar9 | uVar4 >> 0x1f;
        unaff_w28 = unaff_w20 + uVar9;
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w28)
        goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
      }
      else {
        unaff_w28 = unaff_w20 + uVar9;
        if (uVar4 <= unaff_w28)
        goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
        if (in_x4 == 0) goto LAB_06e2f4e4;
      }
      lVar6 = unaff_x19 + (long)(int)unaff_w28 * (long)unaff_w21;
      uVar8 = *(undefined8 *)(lVar6 + 0x20);
      uVar2 = *(undefined4 *)(lVar6 + 0x28);
      if ((*(ushort *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      iVar5 = (**(code **)(in_x4 + 0x18))
                        (*(undefined8 *)(in_x4 + 0x40),uStack0000000000000010,uStack0000000000000008
                         ,uVar8,uVar2,*(undefined8 *)(in_x4 + 0x28));
      if (-1 < iVar5) {
        unaff_w28 = unaff_w20 + unaff_w25;
        break;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w28) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w25))
      goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
      lVar7 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w25) * (long)unaff_w21;
      uVar2 = *(undefined4 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
      *(undefined4 *)(lVar7 + 0x28) = uVar2;
      unaff_w25 = uVar9;
    } while ((int)uVar9 <= iStack0000000000000004);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w28 < in_w8) {
    lVar6 = unaff_x19 + (long)(int)unaff_w28 * 0xc;
    *(undefined8 *)(lVar6 + 0x20) = uStack0000000000000010;
    *(int *)(lVar6 + 0x28) = (int)uStack0000000000000008;
    return;
  }
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


