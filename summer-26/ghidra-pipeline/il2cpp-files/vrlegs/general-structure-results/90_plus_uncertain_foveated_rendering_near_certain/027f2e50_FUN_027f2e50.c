/*
FUNCTION_NAME: FUN_027f2e50
ENTRY_POINT: 027f2e50
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_foveation_hits_1;functionality_foveated_rendering
*/


void FUN_027f2e50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_03cfd5c8;
  puVar1 = PTR_DAT_03cc9e10;
  local_48 = param_4;
  if ((DAT_04125164 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cfd5c8);
    DAT_04125164 = 1;
  }
  plVar3 = (long *)thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_025c6edc(plVar3,param_2,param_5,param_3,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = OVRManager__SetFoveatedRenderingLevel(&local_48,0);
  if ((uVar4 & 1) == 0) {
    if (param_2 == 0) goto LAB_027f2fac;
  }
  else {
    uVar4 = FUN_027e971c(param_1);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_027d75b4(&local_48,0);
      if ((uVar4 & 1) != 0) goto LAB_027f2f20;
      uVar5 = param_1;
      plVar6 = plVar3;
      if (param_2 == 0) goto LAB_027f2fac;
    }
    else {
LAB_027f2f20:
      if (param_2 == 0) goto LAB_027f2fac;
      uVar5 = 0;
      plVar6 = (long *)0x0;
    }
    FUN_027edb7c(param_2,local_48,uVar5,plVar6);
  }
  uVar4 = FUN_027e971c(param_2);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_027f1c88(param_1,plVar3,0), (uVar4 & 1) == 0)) {
    if (plVar3 == (long *)0x0) {
LAB_027f2fac:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar3 + 0x178))(plVar3,param_1,1,*(undefined8 *)(*plVar3 + 0x180));
  }
  return;
}


