/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 05f1cda4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
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
  undefined8 uVar20;
  
  if (param_1 == 0) {
LAB_05f1d0c8:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar8 = *(uint *)(param_1 + 0x18);
  iVar2 = param_4 + -1;
  uVar3 = iVar2 + param_2;
  if (uVar3 < uVar8) {
    lVar6 = param_1 + (long)(int)uVar3 * 0x38;
    uVar11 = *(undefined8 *)(lVar6 + 0x28);
    uVar9 = *(undefined8 *)(lVar6 + 0x20);
    uVar15 = *(undefined8 *)(lVar6 + 0x38);
    uVar13 = *(undefined8 *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x50);
    uVar19 = *(undefined8 *)(lVar6 + 0x48);
    uVar17 = *(undefined8 *)(lVar6 + 0x40);
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((int)param_2 <= iVar1 >> 1) {
      do {
        uVar8 = param_2 * 2;
        if ((int)uVar8 < param_3) {
          if ((*(uint *)(param_1 + 0x18) <= (uVar8 + param_4) - 1) ||
             (*(uint *)(param_1 + 0x18) <= uVar8 + param_4)) goto LAB_05f1d0c4;
          if (param_5 == 0) goto LAB_05f1d0c8;
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          uVar3 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&stack0x00000290,&stack0x00000250,
                             *(undefined8 *)(param_5 + 0x28));
          uVar8 = uVar8 | uVar3 >> 0x1f;
        }
        uVar3 = iVar2 + uVar8;
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_05f1d0c4;
        lVar6 = param_1 + (long)(int)uVar3 * 0x38;
        if (param_5 == 0) goto LAB_05f1d0c8;
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        iVar4 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x00000290,&stack0x00000250,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar4) {
          uVar3 = iVar2 + param_2;
          break;
        }
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_05f1d0c4;
        uVar20 = *(undefined8 *)(lVar6 + 0x38);
        uVar18 = *(undefined8 *)(lVar6 + 0x30);
        uVar12 = *(undefined8 *)(lVar6 + 0x48);
        uVar10 = *(undefined8 *)(lVar6 + 0x40);
        uVar16 = *(undefined8 *)(lVar6 + 0x28);
        uVar14 = *(undefined8 *)(lVar6 + 0x20);
        if (*(uint *)(param_1 + 0x18) <= iVar2 + param_2) goto LAB_05f1d0c4;
        lVar5 = param_1 + (long)(int)(iVar2 + param_2) * 0x38;
        *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar6 + 0x50);
        *(undefined8 *)(lVar5 + 0x38) = uVar20;
        *(undefined8 *)(lVar5 + 0x30) = uVar18;
        *(undefined8 *)(lVar5 + 0x48) = uVar12;
        *(undefined8 *)(lVar5 + 0x40) = uVar10;
        *(undefined8 *)(lVar5 + 0x28) = uVar16;
        *(undefined8 *)(lVar5 + 0x20) = uVar14;
        thunk_FUN_044bb4b4(lVar5 + 0x28,0);
        param_2 = uVar8;
      } while ((int)uVar8 <= iVar1 >> 1);
      uVar8 = *(uint *)(param_1 + 0x18);
    }
    if (uVar3 < uVar8) {
      param_1 = param_1 + (long)(int)uVar3 * 0x38;
      *(undefined8 *)(param_1 + 0x50) = uVar7;
      *(undefined8 *)(param_1 + 0x38) = uVar15;
      *(undefined8 *)(param_1 + 0x30) = uVar13;
      *(undefined8 *)(param_1 + 0x48) = uVar19;
      *(undefined8 *)(param_1 + 0x40) = uVar17;
      *(undefined8 *)(param_1 + 0x28) = uVar11;
      *(undefined8 *)(param_1 + 0x20) = uVar9;
      thunk_FUN_044bb4b4(param_1 + 0x28,0);
      return;
    }
  }
LAB_05f1d0c4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


