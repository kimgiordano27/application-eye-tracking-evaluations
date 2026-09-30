/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 02adbc54
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_EmptyArray<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor(uint param_1)

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
  uint uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  param_1 = param_1 & 0x7fffffff;
  iVar8 = 0;
  if (uVar1 != 0) {
    iVar8 = (int)param_1 / (int)uVar1;
  }
  uVar7 = param_1 - iVar8 * uVar1;
  if (uVar7 < uVar1) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = *(int *)(unaff_x22 + (ulong)uVar7 * 4 + 0x20) - 1;
    if (uVar7 < uVar1) {
      iVar8 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar7 * 0x10 + 0x20) == param_1) {
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01dde7f8(lVar3);
          }
          lVar4 = *unaff_x21;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_02adbd10;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_02adbd10:
          uVar5 = (*(code *)*puVar2)();
          if ((uVar5 & 1) != 0) {
            return uVar7;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar7) goto LAB_02adbd88;
        uVar7 = *(uint *)(unaff_x23 + (long)(int)uVar7 * 0x10 + 0x24);
        if ((int)uVar1 <= iVar8) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar8 = iVar8 + 1;
      } while (uVar7 < uVar1);
    }
    return uVar7;
  }
LAB_02adbd88:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


