/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 06946300
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084b64f0);
  FUN_03a8a718(PTR_DAT_084b64f8);
  FUN_03a8a718(PTR_DAT_084b6500);
  FUN_03a8a718(PTR_DAT_084b6518);
  FUN_03a8a718(PTR_DAT_084b6520);
  FUN_03a8a718(PTR_DAT_084b6428);
  *(undefined1 *)(unaff_x20 + 0xfc9) = 1;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x30);
    *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x6c) = 0;
    if (lVar5 != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x48);
      *(undefined4 *)(lVar5 + 0x6c) = 0;
      puVar1 = PTR_DAT_084b6428;
      if (lVar3 != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x38);
        *(undefined4 *)(lVar3 + 0x6c) = 0;
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar5 = *(long *)puVar1;
        }
        puVar4 = *(undefined8 **)(lVar5 + 0xb8);
        lVar3 = puVar4[2];
        if (lVar3 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar7 = *puVar4;
          lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b64e8);
          FUN_05e38d24(lVar3,uVar7,*(undefined8 *)PTR_DAT_084b6518,0);
          plVar2 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          *plVar2 = lVar3;
          thunk_FUN_03afed3c(plVar2,lVar3);
        }
        if (lVar6 != 0) {
          FUN_04de9000(lVar6,lVar3,*(undefined8 *)PTR_DAT_084b64f8);
          lVar5 = *(long *)puVar1;
          lVar3 = *(long *)(unaff_x19 + 0x58);
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar5 = *(long *)puVar1;
          }
          puVar4 = *(undefined8 **)(lVar5 + 0xb8);
          lVar6 = puVar4[3];
          if (lVar6 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar7 = *puVar4;
            lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b64f0);
            FUN_05e38d24(lVar6,uVar7,*(undefined8 *)PTR_DAT_084b6520,0);
            plVar2 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
            *plVar2 = lVar6;
            thunk_FUN_03afed3c(plVar2,lVar6);
          }
          if (lVar3 != 0) {
            FUN_04de9000(lVar3,lVar6,*(undefined8 *)PTR_DAT_084b6500);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


