/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDestroy
ENTRY_POINT: 057c173c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__OnDestroy(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  
  FUN_02fe925c();
  FUN_02fe925c(PTR_DAT_06f9cfe0);
  FUN_02fe925c(PTR_DAT_06f9cfe8);
  FUN_02fe925c(PTR_DAT_06f9cff0);
  FUN_02fe925c(PTR_DAT_06f9cff8);
  FUN_02fe925c(PTR_DAT_06f9b4e8);
  *(undefined1 *)(unaff_x22 + 0x211) = 1;
  if (unaff_x19 == 0) {
LAB_057c18b8:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar3 = FUN_057c1690(*(undefined4 *)(unaff_x19 + 0xc0),*(undefined4 *)(unaff_x19 + 0xc4));
  puVar1 = PTR_DAT_06f9b4e8;
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0xa0);
  lVar4 = *(long *)PTR_DAT_06f9b4e8;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar1;
  }
  uVar3 = thunk_FUN_05971620(uVar8,**(undefined8 **)(lVar4 + 0xb8),0);
  if ((uVar3 & 1) == 0) {
    if ((*(long *)(unaff_x20 + 0x18) == 0) ||
       (plVar5 = (long *)FUN_06b0d958(*(long *)(unaff_x20 + 0x18),0), plVar5 == (long *)0x0))
    goto LAB_057c18b8;
    lVar4 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06f9b058) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_057c1854;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06f9b058,2);
LAB_057c1854:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 != 1) {
      return;
    }
    FUN_06abd770();
    FUN_06af97c8(*(undefined8 *)(unaff_x20 + 0x18),*(undefined4 *)(unaff_x19 + 0x9c),0);
  }
  else {
    FUN_06adbd00(*(undefined8 *)(unaff_x20 + 0x18),0);
  }
  FUN_057c18bc();
  return;
}


