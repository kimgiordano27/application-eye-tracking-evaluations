/*
FUNCTION_NAME: FUN_03ab6ef0
ENTRY_POINT: 03ab6ef0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_03ab6ef0(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_03ffd4f4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db1348);
    thunk_FUN_01ad9084(StringLiteral_2992);
    thunk_FUN_01ad9084(PTR_DAT_03db1360);
    DAT_03ffd4f4 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = param_2;
    if (*param_2 != *(long *)StringLiteral_2992) {
      plVar4 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(plVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 == (long *)0x0) {
LAB_03ab6fe4:
      plVar4 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0x130);
      if (*(byte *)(*param_2 + 0x130) < bVar1) goto LAB_03ab6fe4;
      plVar4 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__)
      {
        plVar4 = (long *)0x0;
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(plVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (param_2 == (long *)0x0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = param_2;
        if (*param_2 != *(long *)PTR_DAT_03db1348) {
          plVar4 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(plVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (param_2 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_03db1360 + 0x130);
          if (*(byte *)(*param_2 + 0x130) < bVar1) {
            param_2 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
                   *(long *)PTR_DAT_03db1360) {
            param_2 = (long *)0x0;
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(param_2,0,0);
        if ((uVar3 & 1) == 0) {
          uStack_68 = 0;
          local_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          goto LAB_03ab711c;
        }
        uStack_48 = 0;
        local_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        FUN_03ab6d5c(&local_50,param_2);
      }
      else {
        uStack_48 = 0;
        local_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        FUN_03ab6bcc(&local_50,plVar4);
      }
    }
    else {
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      FUN_03ab6c98(&local_50,plVar4);
    }
  }
  else {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    FUN_03ab6b04(&local_50,plVar4);
  }
  uStack_68 = uStack_48;
  local_70 = local_50;
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
LAB_03ab711c:
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}


