/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsMaterialGroup$$Clone
ENTRY_POINT: 02f09b84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f09cd4) */
/* WARNING: Removing unreachable block (ram,0x02f09ca8) */

void FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroup__Clone(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  long *unaff_x25;
  char cStack000000000000000c;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x23 + 0x8fe) = 1;
  puVar1 = PTR_DAT_03d22248;
  uVar4 = **(undefined8 **)(*unaff_x25 + 0xb8);
  thunk_FUN_01a4b338();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x20 + 0x20),uVar4);
  FUN_027b3d9c();
  if (unaff_x22 == 0) {
    unaff_x22 = **(long **)(*unaff_x25 + 0xb8);
  }
  *(long *)(unaff_x20 + 0x18) = unaff_x22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((long *)(unaff_x20 + 0x18),unaff_x22);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar4,&stack0x0000000c,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02f09d40();
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21b8);
  FUN_027ce35c();
  if (lVar2 != 0) {
    FUN_01b5f01c(lVar2,uVar3,*(undefined8 *)PTR_DAT_03d139c0);
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x20 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


