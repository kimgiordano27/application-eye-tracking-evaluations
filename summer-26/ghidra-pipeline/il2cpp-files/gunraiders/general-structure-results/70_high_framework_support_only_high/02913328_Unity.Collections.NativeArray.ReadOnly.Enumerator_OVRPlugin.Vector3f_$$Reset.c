/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$Reset
ENTRY_POINT: 02913328
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
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Reset
          (undefined8 param_1,long *param_2)

{
  uint uVar1;
  bool in_CY;
  ulong uVar2;
  uint uVar3;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int iVar4;
  uint uVar5;
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
  
  uVar3 = (uint)param_1;
  if (!in_CY) {
    iVar4 = 0;
    do {
      uVar3 = (uint)param_1;
      lVar6 = (long)(int)unaff_w25;
      if (*(int *)(unaff_x26 + lVar6 * 0x40 + 0x20) == unaff_w27) {
        if (param_2 == (long *)0x0) goto LAB_02913544;
        uVar2 = (**(code **)(*param_2 + 0x1b8))
                          (param_2,*(undefined8 *)(unaff_x26 + lVar6 * 0x40 + 0x28));
        if ((uVar2 & 1) != 0) {
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
        uVar3 = *(uint *)(unaff_x26 + 0x18);
      }
      if (uVar3 <= unaff_w25) goto LAB_02913540;
      unaff_w25 = *(uint *)(unaff_x26 + lVar6 * 0x40 + 0x24);
      if ((int)uVar3 <= iVar4) {
        FUN_032f2aac(0);
      }
      param_1 = *(undefined8 *)(unaff_x26 + 0x18);
      iVar4 = iVar4 + 1;
      uVar3 = (uint)param_1;
    } while (unaff_w25 < uVar3);
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar5 = *(uint *)(unaff_x21 + 0x20);
    if (uVar5 == uVar3) {
      FUN_029138f4();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar5 + 1;
      if (lVar6 == 0) goto LAB_02913544;
      uVar3 = *(uint *)(lVar6 + 0x18);
      iVar4 = 0;
      if (uVar3 != 0) {
        iVar4 = unaff_w27 / (int)uVar3;
      }
      uVar1 = unaff_w27 - iVar4 * uVar3;
      if (uVar3 <= uVar1) goto LAB_02913540;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar6 + (ulong)uVar1 * 4 + 0x20);
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
  iVar4 = *unaff_x28;
  *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
  *(int *)(lVar6 + 0x24) = iVar4 + -1;
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


