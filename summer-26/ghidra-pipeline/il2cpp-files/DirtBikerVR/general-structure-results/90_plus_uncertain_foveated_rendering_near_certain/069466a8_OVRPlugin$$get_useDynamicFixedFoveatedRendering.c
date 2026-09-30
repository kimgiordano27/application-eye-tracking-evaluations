/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 069466a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 in_w10;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  
  *(undefined4 *)(unaff_x19 + 0x1c) = in_w10;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0();
    }
    if (*(long *)(unaff_x20 + 0x48) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0x10);
      uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + 0x28);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_084b6428;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_03afed3c();
        }
        else {
          FUN_04de85b0();
        }
        lVar6 = *(long *)puVar2;
        uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar6 = *(long *)puVar2;
        }
        puVar3 = PTR_DAT_084b6528;
        puVar7 = *(undefined8 **)(lVar6 + 0xb8);
        lVar8 = puVar7[4];
        if (lVar8 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar9 = *puVar7;
          lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6540);
          FUN_049639e4(lVar8,uVar9,*(undefined8 *)PTR_DAT_084b6548,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
          *plVar4 = lVar8;
          thunk_FUN_03afed3c(plVar4,lVar8);
        }
        FUN_044d3220(uVar5,lVar8,*(undefined8 *)puVar3);
        FUN_04de87c0();
        lVar6 = *(long *)puVar2;
        uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar6 = *(long *)puVar2;
        }
        puVar3 = PTR_DAT_084b6530;
        puVar7 = *(undefined8 **)(lVar6 + 0xb8);
        lVar8 = puVar7[5];
        if (lVar8 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar9 = *puVar7;
          lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6538);
          FUN_049639e4(lVar8,uVar9,*(undefined8 *)PTR_DAT_084b6550,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
          *plVar4 = lVar8;
          thunk_FUN_03afed3c(plVar4,lVar8);
        }
        FUN_044d3220(uVar5,lVar8,*(undefined8 *)puVar3);
        FUN_04de87c0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


