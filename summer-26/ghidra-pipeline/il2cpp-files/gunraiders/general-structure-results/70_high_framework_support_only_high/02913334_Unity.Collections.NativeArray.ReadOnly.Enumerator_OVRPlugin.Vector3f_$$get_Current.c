/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 02913334
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__get_Current
          (undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w23;
  uint uVar5;
  long *unaff_x24;
  uint unaff_w25;
  long lVar6;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  char unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  do {
    uVar5 = (uint)param_1;
    lVar6 = (long)(int)unaff_w25;
    if (*(int *)(unaff_x26 + lVar6 * 0x40 + 0x20) == unaff_w27) {
      if (unaff_x24 == (long *)0x0) goto LAB_02913544;
      uVar4 = (**(code **)(*unaff_x24 + 0x1b8))();
      if ((uVar4 & 1) != 0) {
        if (unaff_w29 == '\x02') {
          FUN_032f29a8();
        }
        else if (unaff_w29 == '\x01') {
          uVar9 = unaff_x19[2];
          uVar8 = unaff_x19[5];
          uVar7 = unaff_x19[4];
          uVar11 = unaff_x19[1];
          uVar10 = *unaff_x19;
          if (unaff_w25 < *(uint *)(unaff_x26 + 0x18)) {
            lVar6 = unaff_x26 + lVar6 * 0x40;
            *(undefined8 *)(lVar6 + 0x48) = unaff_x19[3];
            *(undefined8 *)(lVar6 + 0x40) = uVar9;
            *(undefined8 *)(lVar6 + 0x58) = uVar8;
            *(undefined8 *)(lVar6 + 0x50) = uVar7;
            *(undefined8 *)(lVar6 + 0x38) = uVar11;
            *(undefined8 *)(lVar6 + 0x30) = uVar10;
            return 1;
          }
          goto LAB_02913540;
        }
        return 0;
      }
      uVar5 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar5 <= unaff_w25) goto LAB_02913540;
    unaff_w25 = *(uint *)(unaff_x26 + lVar6 * 0x40 + 0x24);
    if ((int)uVar5 <= unaff_w23) {
      FUN_032f2aac(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w23 = unaff_w23 + 1;
  } while (unaff_w25 < (uint)param_1);
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar5 = *(uint *)(unaff_x21 + 0x20);
    if (uVar5 == (uint)param_1) {
      FUN_029138f4();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar5 + 1;
      if (lVar6 == 0) goto LAB_02913544;
      uVar1 = *(uint *)(lVar6 + 0x18);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = unaff_w27 / (int)uVar1;
      }
      uVar3 = unaff_w27 - iVar2 * uVar1;
      if (uVar1 <= uVar3) goto LAB_02913540;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar6 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar5 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02913544:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar5) goto LAB_02913540;
    lVar6 = (long)(int)uVar5;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar5 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar5) {
LAB_02913540:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar6 = (long)(int)uVar5;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x40 + 0x24);
  }
  lVar6 = unaff_x26 + lVar6 * 0x40;
  *(int *)(lVar6 + 0x20) = unaff_w27;
  iVar2 = *unaff_x28;
  *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
  *(int *)(lVar6 + 0x24) = iVar2 + -1;
  uVar9 = unaff_x19[2];
  uVar8 = unaff_x19[5];
  uVar7 = unaff_x19[4];
  uVar11 = unaff_x19[1];
  uVar10 = *unaff_x19;
  *(undefined8 *)(lVar6 + 0x48) = unaff_x19[3];
  *(undefined8 *)(lVar6 + 0x40) = uVar9;
  *(undefined8 *)(lVar6 + 0x58) = uVar8;
  *(undefined8 *)(lVar6 + 0x50) = uVar7;
  *(undefined8 *)(lVar6 + 0x38) = uVar11;
  *(undefined8 *)(lVar6 + 0x30) = uVar10;
  *unaff_x28 = uVar5 + 1;
  return 1;
}


