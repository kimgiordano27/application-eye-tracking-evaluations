/*
FUNCTION_NAME: FUN_06e2f2ec
ENTRY_POINT: 06e2f2ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_06e2f2ec(long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1 == 0) {
LAB_06e2f4e4:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar5 = param_4 + -1;
  uVar8 = *(uint *)(param_1 + 0x18);
  uVar6 = iVar5 + param_2;
  if (uVar6 < uVar8) {
    lVar10 = param_1 + (long)(int)uVar6 * 0xc;
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    uVar12 = *(undefined8 *)(lVar10 + 0x20);
    uVar2 = *(undefined4 *)(lVar10 + 0x28);
    if ((int)param_2 <= iVar1 >> 1) {
      do {
        uVar8 = param_2 * 2;
        uVar9 = (uint)*(undefined8 *)(param_1 + 0x18);
        if ((int)uVar8 < param_3) {
          uVar6 = uVar8 + param_4;
          if ((uVar9 <= uVar6 - 1) || (uVar9 <= uVar6))
          goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
          if (param_5 == 0) goto LAB_06e2f4e4;
          lVar11 = param_1 + (long)(int)(uVar6 - 1) * 0xc;
          lVar10 = param_1 + (long)(int)uVar6 * 0xc;
          uVar14 = *(undefined8 *)(lVar11 + 0x20);
          uVar3 = *(undefined4 *)(lVar11 + 0x28);
          uVar13 = *(undefined8 *)(lVar10 + 0x20);
          uVar4 = *(undefined4 *)(lVar10 + 0x28);
          if ((*(ushort *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_04980b34();
          }
          uVar6 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar14,uVar3,uVar13,uVar4,
                             *(undefined8 *)(param_5 + 0x28));
          uVar8 = uVar8 | uVar6 >> 0x1f;
          uVar6 = iVar5 + uVar8;
          if (*(uint *)(param_1 + 0x18) <= uVar6)
          goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
        }
        else {
          uVar6 = iVar5 + uVar8;
          if (uVar9 <= uVar6)
          goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
          if (param_5 == 0) goto LAB_06e2f4e4;
        }
        lVar10 = param_1 + (long)(int)uVar6 * 0xc;
        uVar13 = *(undefined8 *)(lVar10 + 0x20);
        uVar3 = *(undefined4 *)(lVar10 + 0x28);
        if ((*(ushort *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        iVar7 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),uVar12,uVar2,uVar13,uVar3,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar7) {
          uVar6 = iVar5 + param_2;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= uVar6) || (*(uint *)(param_1 + 0x18) <= iVar5 + param_2))
        goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
        lVar11 = param_1 + (long)(int)(iVar5 + param_2) * 0xc;
        uVar3 = *(undefined4 *)(lVar10 + 0x28);
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
        *(undefined4 *)(lVar11 + 0x28) = uVar3;
        param_2 = uVar8;
      } while ((int)uVar8 <= iVar1 >> 1);
      uVar8 = *(uint *)(param_1 + 0x18);
    }
    if (uVar6 < uVar8) {
      param_1 = param_1 + (long)(int)uVar6 * 0xc;
      *(undefined8 *)(param_1 + 0x20) = uVar12;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      return;
    }
  }
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


