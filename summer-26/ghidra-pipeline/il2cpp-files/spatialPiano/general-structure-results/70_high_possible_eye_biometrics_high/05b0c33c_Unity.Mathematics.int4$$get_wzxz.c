/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_wzxz
ENTRY_POINT: 05b0c33c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Mathematics_int4__get_wzxz(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  long unaff_x23;
  undefined8 uStack0000000000000018;
  
  puVar4 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputControlLayout_ControlItem>__
  ;
  uStack0000000000000018 = param_3;
  if ((*(byte *)(unaff_x23 + 0x841) & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchShareAnchors_OnBatchShareAsyncComplete__
                );
    FUN_02f08768(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputControlLayout_ControlItem>__
                );
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__);
    FUN_02f08768(Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
    FUN_02f08768(Method_System_Text_ASCIIEncoding_GetCharCount__);
    *(undefined1 *)(unaff_x23 + 0x841) = 1;
  }
  uVar7 = FUN_0344c7c8(&stack0x00000018,*(undefined8 *)puVar4);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_05b52a80(uStack0000000000000018,0);
    piVar11 = (int *)0x0;
    if (lVar8 == 0) {
LAB_05b0c598:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8(piVar11);
    }
    iVar1 = *(int *)(lVar8 + 0x14);
    iVar5 = FUN_05b50038(0);
    if (iVar1 == iVar5) {
      if (param_2 == 0) {
        lVar9 = FUN_05abbe04(param_1,0);
        lVar10 = FUN_040499dc();
        puVar4 = PTR_DAT_067ca498;
        piVar11 = (int *)0x0;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar10 + 0x14);
          if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067ca498);
          }
          piVar11 = (int *)FUN_05b572b0(lVar8,0);
          if (piVar11 != (int *)0x0) {
            iVar1 = *piVar11;
            bVar3 = *(byte *)(piVar11 + 8);
            uVar7 = *(ulong *)(param_1 + 0x1c8) >> 0x20;
            if ((int)(*(ulong *)(param_1 + 0x1c8) >> 0x20) < 1) {
              return 0;
            }
            iVar5 = 0;
            piVar12 = (int *)((ulong)uVar2 + lVar9);
            while (piVar12 != (int *)0x0) {
              if ((*piVar12 == iVar1) ||
                 (((piVar11 = (int *)FUN_05b5008c(piVar12,0), ((ulong)piVar11 & 1) == 0 &&
                   (bVar3 < 6)) && ((1 << (ulong)(bVar3 & 0x1f) & 0x26U) != 0)))) {
                lVar8 = *(long *)(param_1 + 0x1b8);
                if (lVar8 == 0) break;
                lVar9 = lVar8;
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  piVar11 = (int *)thunk_FUN_02f6670c();
                  lVar9 = *(long *)(param_1 + 0x1b8);
                  if (lVar9 == 0) break;
                }
                iVar1 = *(int *)(lVar8 + 0x14);
                iVar6 = FUN_05b59e64(lVar9 + 0x10,0);
                iVar5 = ((iVar6 + iVar1) - *(int *)(param_1 + 0x14)) - iVar5;
                goto FUN_05b0c58c;
              }
              piVar11 = (int *)0x0;
              uVar7 = uVar7 - 1;
              iVar5 = iVar5 + -0x38;
              piVar12 = piVar12 + 0xe;
              if (uVar7 == 0) {
                return 0;
              }
            }
          }
        }
        goto LAB_05b0c598;
      }
      lVar8 = FUN_034417fc(param_2,*(undefined8 *)
                                    Method_UnityEngine_XR_OpenXR_Features_Meta_BatchShareAnchors_OnBatchShareAsyncComplete__
                          );
      if (lVar8 == 0) {
        return 0;
      }
      if ((*(long *)(lVar8 + 0x80) == param_1) && (lVar8 == *(long *)(param_1 + 0x1b8))) {
        iVar5 = *(int *)(lVar8 + 0x14);
        if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067ca498);
        }
        iVar5 = iVar5 - *(int *)(param_1 + 0x14);
FUN_05b0c58c:
        *param_4 = iVar5;
        return 1;
      }
    }
  }
  return 0;
}


