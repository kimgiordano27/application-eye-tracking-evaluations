/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 087b14f8
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___ctor(uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  param_1 = param_1 & 0x7fffffff;
  iVar7 = 0;
  if (uVar1 != 0) {
    iVar7 = (int)param_1 / (int)uVar1;
  }
  uVar8 = param_1 - iVar7 * uVar1;
  if (uVar8 < uVar1) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar8 = *(int *)(unaff_x22 + (ulong)uVar8 * 4 + 0x20) - 1;
    if (uVar8 < uVar1) {
      iVar7 = 0;
      do {
        if (*(uint *)(unaff_x23 + 0x20 + (long)(int)uVar8 * 0x24) == param_1) {
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_04980b34(lVar3);
          }
          lVar4 = *unaff_x21;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_087b15c4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_04980e68();
LAB_087b15c4:
          uVar5 = (*(code *)*puVar2)();
          if ((uVar5 & 1) != 0) {
            return uVar8;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar8)
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
        ;
        uVar8 = *(uint *)(unaff_x23 + 0x20 + (long)(int)uVar8 * 0x24 + 4);
        if ((int)uVar1 <= iVar7) {
          FUN_08d9d998(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar7 = iVar7 + 1;
      } while (uVar8 < uVar1);
    }
    return uVar8;
  }

  System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
  :
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


