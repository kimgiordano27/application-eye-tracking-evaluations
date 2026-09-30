/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 06e2f308
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iStack000000000000001c;
  
  iStack000000000000001c = param_3;
  if (param_1 == 0) {
LAB_06e2f4e4:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar4 = param_4 + -1;
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar5 = iVar4 + param_2;
  if (uVar5 < uVar7) {
    lVar9 = param_1 + (long)(int)uVar5 * 0xc;
    if (param_3 < 0) {
      param_3 = param_3 + 1;
    }
    uVar11 = *(undefined8 *)(lVar9 + 0x20);
    uVar1 = *(undefined4 *)(lVar9 + 0x28);
    if ((int)param_2 <= param_3 >> 1) {
      do {
        uVar7 = param_2 * 2;
        uVar8 = (uint)*(undefined8 *)(param_1 + 0x18);
        if ((int)uVar7 < iStack000000000000001c) {
          uVar5 = uVar7 + param_4;
          if ((uVar8 <= uVar5 - 1) || (uVar8 <= uVar5))
          goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
          if (param_5 == 0) goto LAB_06e2f4e4;
          lVar10 = param_1 + (long)(int)(uVar5 - 1) * 0xc;
          lVar9 = param_1 + (long)(int)uVar5 * 0xc;
          uVar13 = *(undefined8 *)(lVar10 + 0x20);
          uVar2 = *(undefined4 *)(lVar10 + 0x28);
          uVar12 = *(undefined8 *)(lVar9 + 0x20);
          uVar3 = *(undefined4 *)(lVar9 + 0x28);
          if ((*(ushort *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_04980b34();
          }
          uVar5 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar13,uVar2,uVar12,uVar3,
                             *(undefined8 *)(param_5 + 0x28));
          uVar7 = uVar7 | uVar5 >> 0x1f;
          uVar5 = iVar4 + uVar7;
          if (*(uint *)(param_1 + 0x18) <= uVar5)
          goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
        }
        else {
          uVar5 = iVar4 + uVar7;
          if (uVar8 <= uVar5)
          goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
          if (param_5 == 0) goto LAB_06e2f4e4;
        }
        lVar9 = param_1 + (long)(int)uVar5 * 0xc;
        uVar12 = *(undefined8 *)(lVar9 + 0x20);
        uVar2 = *(undefined4 *)(lVar9 + 0x28);
        if ((*(ushort *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        iVar6 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),uVar11,uVar1,uVar12,uVar2,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar6) {
          uVar5 = iVar4 + param_2;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= uVar5) || (*(uint *)(param_1 + 0x18) <= iVar4 + param_2))
        goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
        lVar10 = param_1 + (long)(int)(iVar4 + param_2) * 0xc;
        uVar2 = *(undefined4 *)(lVar9 + 0x28);
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
        *(undefined4 *)(lVar10 + 0x28) = uVar2;
        param_2 = uVar7;
      } while ((int)uVar7 <= param_3 >> 1);
      uVar7 = *(uint *)(param_1 + 0x18);
    }
    if (uVar5 < uVar7) {
      param_1 = param_1 + (long)(int)uVar5 * 0xc;
      *(undefined8 *)(param_1 + 0x20) = uVar11;
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      return;
    }
  }
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


