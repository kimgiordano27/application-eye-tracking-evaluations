/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 05d05fe4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsInsightPassthroughSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xcc0);
  FUN_04057394();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  uVar3 = thunk_FUN_0301080c(*puVar8);
  FUN_0510fa84();
  if (lVar6 != 0) {
    FUN_04056fd8(lVar6,uVar3,*(undefined8 *)PTR_DAT_06fb8498);
    puVar1 = PTR_DAT_06fb8450;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
      uVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8450);
      FUN_051110bc();
      puVar2 = PTR_DAT_06fb8470;
      if (plVar7 != (long *)0x0) {
        lVar6 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb8470) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_05d060d8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06fb8470,1);
LAB_05d060d8:
        (*(code *)*puVar8)(plVar7,uVar3,puVar8[1]);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
          uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
          FUN_051110bc();
          if (plVar7 != (long *)0x0) {
            lVar6 = *plVar7;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                  goto LAB_05d0616c;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar8 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)puVar2,1);
LAB_05d0616c:
            (*(code *)*puVar8)(plVar7,uVar3,puVar8[1]);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              FUN_05c39d84(*(long *)(unaff_x19 + 0x28),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


