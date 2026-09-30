/*
FUNCTION_NAME: FUN_03b19e34
ENTRY_POINT: 03b19e34
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


/* WARNING: Removing unreachable block (ram,0x03b19ff0) */

void FUN_03b19e34(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long *param_5,undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_50;
  ulong local_48;
  
  if ((DAT_03ffdb00 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_518);
    DAT_03ffdb00 = 1;
  }
  local_50 = 0;
  lVar3 = param_5[0x2a];
  if (lVar3 == 0) {
    lVar3 = param_5[0x28];
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(lVar3,0);
    if (*(uint *)(param_5 + 0x22) < 2) {
      param_4 = param_3;
    }
    if (0.0 < param_4) {
      if (DAT_03fed2da == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
        DAT_03fed2da = '\x01';
      }
      local_48 = **(ulong **)
                   (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ +
                   0xb8);
      uVar2 = FUN_03b0f094(param_6,&local_48);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_48 & 0xffffffff;
        fVar6 = (float)(local_48 >> 0x20);
        if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03af9c5c(uVar2,lVar3,param_7,&local_50,0);
        if ((uVar2 & 1) != 0) {
          fVar8 = (float)local_50;
          fVar1 = local_50._4_4_;
          fVar4 = (float)UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                   (lVar3,0);
          local_50 = CONCAT44(fVar1 - fVar6,fVar8 - fVar4);
          fVar5 = *(float *)(param_5 + 0x2b);
          fVar7 = *(float *)((long)param_5 + 0x15c);
          fVar6 = (fVar1 - fVar6) - fVar7;
          if (*(uint *)(param_5 + 0x22) < 2) {
            fVar6 = (fVar8 - fVar4) - fVar5;
          }
          UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(lVar3,0)
          ;
          if (*(uint *)(param_5 + 0x22) < 2) {
            fVar7 = fVar5;
          }
          fVar6 = fVar6 / fVar7;
          fVar8 = fVar6;
          if (1.0 < fVar6) {
            fVar8 = 1.0;
          }
          if (fVar6 < 0.0) {
            fVar8 = 0.0;
          }
          fVar6 = 1.0 - fVar8;
          if ((*(uint *)(param_5 + 0x22) & 0xfffffffd) != 1) {
            fVar6 = fVar8;
          }
          if (fVar6 < 0.0) {
            fVar6 = 0.0;
          }
          (**(code **)(*param_5 + 0x428))
                    (*(float *)((long)param_5 + 0x114) +
                     fVar6 * (*(float *)(param_5 + 0x23) - *(float *)((long)param_5 + 0x114)),
                     param_5,*(undefined8 *)(*param_5 + 0x430));
        }
      }
    }
  }
  return;
}


