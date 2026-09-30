/*
FUNCTION_NAME: FUN_027f1f70
ENTRY_POINT: 027f1f70
PROGRAM: vrlegs-libil2cpp.so
SCORE: 116
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_foveation_hits_1;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x027f249c) */
/* WARNING: Removing unreachable block (ram,0x027f20e8) */
/* WARNING: Removing unreachable block (ram,0x027f22b0) */
/* WARNING: Removing unreachable block (ram,0x027f2330) */
/* WARNING: Removing unreachable block (ram,0x027f22f0) */
/* WARNING: Removing unreachable block (ram,0x027f225c) */
/* WARNING: Removing unreachable block (ram,0x027f2038) */

byte FUN_027f1f70(undefined8 param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  int local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte local_4c;
  undefined8 local_30;
  byte local_21;
  
  local_30 = param_3;
  if ((DAT_04125155 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cc9e20);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_04125155 = 1;
  }
  local_68 = 0;
  local_6c = 0;
  bVar1 = FUN_025bb184(0);
  if ((bVar1 & 1) != 0) {
    FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
    lVar5 = FUN_027f8e00(0);
    if (lVar5 == 0) {
      local_7c = 0;
    }
    else {
      local_7c = 3;
    }
    if (local_7c == 0) {
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e20);
      uVar6 = FUN_027f8db0(0);
      FUN_018748a8(uVar6);
      local_64 = FUN_025ca734(uVar6,0);
    }
    else {
      if (local_7c != 3) {
        return local_21;
      }
      FUN_018748a8(lVar5);
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      FUN_018748a8(uVar6);
      local_64 = FUN_025ca734(uVar6,0);
    }
    if (lVar5 == 0) {
      local_6c = local_64;
      local_7c = 0;
    }
    else {
      local_68 = local_64;
      local_7c = 5;
    }
    if (local_7c == 0) {
      local_70 = 0;
      local_74 = local_6c;
    }
    else {
      if (local_7c != 5) {
        return local_21;
      }
      FUN_018748a8(lVar5);
      local_70 = OVRPlugin__SetControllerLocalizedVibration(lVar5);
      local_74 = local_68;
    }
    uVar3 = OVRPlugin__SetControllerLocalizedVibration(param_1);
    FUN_025bb268(local_74,local_70,uVar3,0);
  }
  local_4c = FUN_027e971c(param_1);
  local_4c = local_4c & 1;
  if (local_4c == 0) {
    local_7c = 0;
  }
  else {
    local_7c = 7;
  }
  if (local_7c == 0) {
    if (param_2 == -1) {
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e10);
      bVar1 = OVRManager__SetFoveatedRenderingLevel(&local_30,0);
      if ((((bVar1 & 1) == 0) && (bVar1 = FUN_027f2528(param_1), (bVar1 & 1) != 0)) &&
         (bVar1 = FUN_027e971c(param_1), (bVar1 & 1) != 0)) {
        bVar1 = 1;
        local_4c = 1;
        goto LAB_027f237c;
      }
    }
    local_4c = FUN_027ef264(param_1,param_2,local_30);
    local_4c = local_4c & 1;
    bVar1 = local_4c;
  }
  else {
    bVar1 = 0;
    if (local_7c != 7) {
      return local_21;
    }
  }
LAB_027f237c:
  bVar1 = FUN_025bb184(bVar1,0);
  if ((bVar1 & 1) == 0) {
    local_7c = 9;
  }
  else {
    local_7c = 0;
  }
  if (local_7c == 0) {
    FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
    lVar5 = FUN_027f8e00(0);
    if (lVar5 == 0) {
      local_7c = 10;
    }
    else {
      local_7c = 0;
    }
    if (local_7c == 0) {
      FUN_018748a8(lVar5);
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      FUN_018748a8(uVar6);
      uVar3 = FUN_025ca734(uVar6,0);
      FUN_018748a8(lVar5);
      uVar4 = OVRPlugin__SetControllerLocalizedVibration(lVar5);
      uVar2 = OVRPlugin__SetControllerLocalizedVibration(param_1);
      FUN_025bb2ec(uVar3,uVar4,uVar2,0);
    }
    else {
      if (local_7c != 10) {
        return local_21;
      }
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e20);
      uVar6 = FUN_027f8db0(0);
      FUN_018748a8(uVar6);
      uVar3 = FUN_025ca734(uVar6,0);
      uVar4 = OVRPlugin__SetControllerLocalizedVibration(param_1);
      FUN_025bb2ec(uVar3,0,uVar4,0);
    }
  }
  else if (local_7c != 9) {
    return local_21;
  }
  return local_4c;
}


