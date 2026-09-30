/*
FUNCTION_NAME: UniGLTF.GltfSerializer$$Serialize_gltf_animations__channels
ENTRY_POINT: 02f70dc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 124
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f70f8c) */
/* WARNING: Removing unreachable block (ram,0x02f70f80) */

void UniGLTF_GltfSerializer__Serialize_gltf_animations__channels(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  uint unaff_w20;
  int iVar7;
  long unaff_x21;
  long *unaff_x23;
  uint in_stack_00000008;
  char cStack000000000000000c;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xee8));
  FUN_01ab69ac(PTR_DAT_03cbeb18);
  FUN_01ab69ac(PTR_DAT_03d24f20);
  FUN_01ab69ac(PTR_DAT_03d24f28);
  *(undefined1 *)(unaff_x21 + 0xc9d) = 1;
  cStack000000000000000c = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_02f651a8();
  puVar1 = PTR_DAT_03d24f18;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
    in_stack_00000008 = unaff_w20;
    lVar4 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000008);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar3[4] = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar4);
    FUN_026780b0(*(undefined8 *)PTR_DAT_03d24f20,plVar3,0);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x23);
    }
    FUN_02f6520c();
  }
  cStack000000000000000c = '\0';
  FUN_027e0bd8();
  if (*(char *)(unaff_x19 + 0x3b) == '\0') {
    *(undefined2 *)(unaff_x19 + 0x38) = 0;
    *(undefined1 *)(unaff_x19 + 0x3b) = 1;
    iVar7 = 5;
  }
  else {
    iVar7 = 4;
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if ((iVar7 == 5) || (iVar7 == 0)) {
    lVar4 = *(long *)(unaff_x19 + 0x30);
    if ((unaff_w20 & 1) == 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02ebcd14(lVar4,0xffffffff,0);
    }
    else {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02ebcd14(lVar4,0,0);
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02f77d1c(*(long *)(unaff_x19 + 0x28),unaff_w20);
  }
  return;
}


