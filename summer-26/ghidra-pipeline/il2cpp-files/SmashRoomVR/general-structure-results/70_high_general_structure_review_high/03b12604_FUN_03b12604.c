/*
FUNCTION_NAME: FUN_03b12604
ENTRY_POINT: 03b12604
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_03b12604(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long param_5,long param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_70;
  ulong local_68;
  
  if ((DAT_03ffdab8 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_518);
    DAT_03ffdab8 = 1;
  }
  local_70 = 0;
  if (param_6 == 0) {
LAB_03b12810:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(int *)(param_6 + 0x148) == 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x120);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      if (DAT_03fed2da == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
        DAT_03fed2da = '\x01';
      }
      local_68 = **(ulong **)
                   (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ +
                   0xb8);
      uVar4 = FUN_03b0f094(param_6,&local_68);
      if ((uVar4 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_5 + 0x120);
        uVar4 = local_68 & 0xffffffff;
        fVar9 = (float)(local_68 >> 0x20);
        uVar5 = FUN_03b26134(param_6,0);
        if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)StringLiteral_518);
        }
        uVar4 = FUN_03af9c5c(uVar4,uVar6,uVar5,&local_70,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_5 + 0x120) != 0) {
            fVar14 = *(float *)(param_5 + 300);
            fVar2 = (float)local_70;
            fVar3 = local_70._4_4_;
            fVar13 = *(float *)(param_5 + 0x128);
            fVar7 = (float)UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                     (*(long *)(param_5 + 0x120),0);
            if (*(long *)(param_5 + 0x100) != 0) {
              fVar10 = fVar9;
              UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                        (*(long *)(param_5 + 0x100),0);
              if (*(long *)(param_5 + 0x100) != 0) {
                fVar11 = param_3;
                fVar12 = param_4;
                fVar8 = (float)FUN_03928018(*(long *)(param_5 + 0x100),0);
                if (*(long *)(param_5 + 0x120) != 0) {
                  uVar1 = *(uint *)(param_5 + 0x108);
                  UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                            (*(long *)(param_5 + 0x120),0);
                  if (1 < uVar1) {
                    fVar11 = fVar12;
                  }
                  if (fVar11 * (1.0 - *(float *)(param_5 + 0x110)) <= 0.0) {
                    return;
                  }
                  FUN_03b12814(((fVar2 - fVar13) - fVar7) - (param_3 - fVar8) * 0.5,
                               ((fVar3 - fVar14) - fVar9) - (param_4 - fVar10) * 0.5,param_5);
                  return;
                }
              }
            }
          }
          goto LAB_03b12810;
        }
      }
    }
  }
  return;
}


