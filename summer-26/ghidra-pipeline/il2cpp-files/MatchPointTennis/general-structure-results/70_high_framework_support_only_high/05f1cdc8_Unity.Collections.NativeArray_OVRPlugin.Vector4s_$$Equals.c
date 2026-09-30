/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 05f1cdc8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
               long param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  uint uVar7;
  uint unaff_w29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar5 = unaff_x19 + (long)(int)unaff_w29 * (long)(int)unaff_x26;
  uVar10 = *(undefined8 *)(lVar5 + 0x28);
  uVar8 = *(undefined8 *)(lVar5 + 0x20);
  uVar14 = *(undefined8 *)(lVar5 + 0x38);
  uVar12 = *(undefined8 *)(lVar5 + 0x30);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  uVar18 = *(undefined8 *)(lVar5 + 0x48);
  uVar16 = *(undefined8 *)(lVar5 + 0x40);
  iVar1 = param_3;
  if (param_3 < 0) {
    iVar1 = param_3 + 1;
  }
  if ((int)unaff_w24 <= iVar1 >> 1) {
    do {
      uVar7 = unaff_w24 * 2;
      if ((int)uVar7 < param_3) {
        if ((*(uint *)(unaff_x19 + 0x18) <= (uVar7 + param_4) - 1) ||
           (*(uint *)(unaff_x19 + 0x18) <= uVar7 + param_4)) goto LAB_05f1d0c4;
        if (param_5 == 0) goto LAB_05f1d0c8;
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        uVar2 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x00000290,&stack0x00000250,
                           *(undefined8 *)(param_5 + 0x28));
        uVar7 = uVar7 | uVar2 >> 0x1f;
      }
      unaff_w29 = unaff_w25 + uVar7;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f1d0c4;
      lVar5 = unaff_x19 + (long)(int)unaff_w29 * (long)(int)unaff_x26;
      if (param_5 == 0) {
LAB_05f1d0c8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      iVar3 = (**(code **)(param_5 + 0x18))
                        (*(undefined8 *)(param_5 + 0x40),&stack0x00000290,&stack0x00000250,
                         *(undefined8 *)(param_5 + 0x28));
      if (-1 < iVar3) {
        unaff_w29 = unaff_w25 + unaff_w24;
        break;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f1d0c4;
      uVar19 = *(undefined8 *)(lVar5 + 0x38);
      uVar17 = *(undefined8 *)(lVar5 + 0x30);
      uVar11 = *(undefined8 *)(lVar5 + 0x48);
      uVar9 = *(undefined8 *)(lVar5 + 0x40);
      uVar15 = *(undefined8 *)(lVar5 + 0x28);
      uVar13 = *(undefined8 *)(lVar5 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_05f1d0c4;
      lVar4 = unaff_x19 + (int)(unaff_w25 + unaff_w24) * unaff_x26;
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar5 + 0x50);
      *(undefined8 *)(lVar4 + 0x38) = uVar19;
      *(undefined8 *)(lVar4 + 0x30) = uVar17;
      *(undefined8 *)(lVar4 + 0x48) = uVar11;
      *(undefined8 *)(lVar4 + 0x40) = uVar9;
      *(undefined8 *)(lVar4 + 0x28) = uVar15;
      *(undefined8 *)(lVar4 + 0x20) = uVar13;
      thunk_FUN_044bb4b4(lVar4 + 0x28,0);
      unaff_w24 = uVar7;
    } while ((int)uVar7 <= iVar1 >> 1);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w29 < in_w8) {
    lVar5 = unaff_x19 + (long)(int)unaff_w29 * 0x38;
    *(undefined8 *)(lVar5 + 0x50) = uVar6;
    *(undefined8 *)(lVar5 + 0x38) = uVar14;
    *(undefined8 *)(lVar5 + 0x30) = uVar12;
    *(undefined8 *)(lVar5 + 0x48) = uVar18;
    *(undefined8 *)(lVar5 + 0x40) = uVar16;
    *(undefined8 *)(lVar5 + 0x28) = uVar10;
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
    thunk_FUN_044bb4b4(lVar5 + 0x28,0);
    return;
  }
LAB_05f1d0c4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


