/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.CGDataRequestMetaCGOptions$$ToString
ENTRY_POINT: 02ee9558
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ee9784) */

long FluffyUnderware_Curvy_Generator_CGDataRequestMetaCGOptions__ToString(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x22;
  char cStack000000000000000c;
  long in_stack_00000018;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x30));
  FUN_01ab69ac(PTR_DAT_03d20eb8);
  FUN_01ab69ac(PTR_DAT_03d21038);
  FUN_01ab69ac(PTR_DAT_03d210a0);
  FUN_01ab69ac(PTR_DAT_03d21040);
  FUN_01ab69ac(PTR_DAT_03d21048);
  FUN_01ab69ac(PTR_DAT_03d1f430);
  *(undefined1 *)(unaff_x20 + 0x817) = 1;
  lVar2 = *unaff_x22;
  cStack000000000000000c = 0;
  in_stack_00000018 = 0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x22;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    FUN_0219f8b8();
    lVar2 = in_stack_00000018;
    if (in_stack_00000018 == 0) {
      lVar2 = *unaff_x22;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *unaff_x22;
      }
      if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) goto LAB_02ee9780;
      FUN_0219f8b8();
      lVar2 = in_stack_00000018;
      if (in_stack_00000018 == 0) {
        lVar2 = *unaff_x22;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar2 = *unaff_x22;
        }
        uVar6 = **(undefined8 **)(lVar2 + 0xb8);
        cStack000000000000000c = '\0';
        FUN_027e0bd8(uVar6,&stack0x0000000c,0);
        lVar2 = *unaff_x22;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar2 = *unaff_x22;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar1 = FUN_0219b384(lVar2,*(undefined8 *)PTR_DAT_03d210a0);
        if (0x1ff < iVar1) {
          uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d21048);
          FUN_0219a508(uVar3,0x19,*(undefined8 *)PTR_DAT_03d21038);
          lVar2 = *unaff_x22;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar2 = *unaff_x22;
          }
          puVar4 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
          *puVar4 = uVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar3);
        }
        lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d21030);
        FUN_02ee93c4();
        lVar5 = *unaff_x22;
        in_stack_00000018 = lVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *unaff_x22;
        }
        if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0219b83c();
        lVar2 = in_stack_00000018;
        if (cStack000000000000000c != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
        }
      }
    }
    return lVar2;
  }
LAB_02ee9780:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


