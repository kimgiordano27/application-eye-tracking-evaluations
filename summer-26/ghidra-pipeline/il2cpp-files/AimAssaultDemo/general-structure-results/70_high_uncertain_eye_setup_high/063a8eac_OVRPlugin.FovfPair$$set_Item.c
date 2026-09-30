/*
FUNCTION_NAME: OVRPlugin.FovfPair$$set_Item
ENTRY_POINT: 063a8eac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_FovfPair__set_Item(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x23;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xa68));
  FUN_0373b518(PTR_DAT_07d91a70);
  FUN_0373b518(PTR_DAT_07db6c00);
  FUN_0373b518(PTR_DAT_07d91a80);
  FUN_0373b518(PTR_DAT_07d91a88);
  FUN_0373b518(PTR_DAT_07db6bc8);
  FUN_0373b518(PTR_DAT_07db6bd0);
  FUN_0373b518(PTR_DAT_07db6c38);
  FUN_0373b518(PTR_DAT_07db6c10);
  FUN_0373b518(PTR_DAT_07db6c18);
  FUN_0373b518(PTR_DAT_07db6bd8);
  *(undefined1 *)(unaff_x19 + 0x6a7) = 1;
  puVar1 = PTR_DAT_07db6c00;
  if (unaff_x23 != (long *)0x0) {
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_063a8f9c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a8f9c:
    lVar4 = (*(code *)*puVar2)();
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        if (*(int *)(lVar4 + 0x18) != 1) {
          FUN_078d9dec();
          return;
        }
        lVar4 = *unaff_x23;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_063a9628;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a9628:
        lVar4 = (*(code *)*puVar2)();
        if (lVar4 == 0) goto LAB_063a972c;
        uVar3 = FUN_049cec24(lVar4,0,*(undefined8 *)PTR_DAT_07db6c18);
        FUN_063a8640(uVar3,uVar3);
        lVar4 = *unaff_x23;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_063a96ac;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a96ac:
        (*(code *)*puVar2)();
        FUN_063a97c8();
      }
      return;
    }
  }
LAB_063a972c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


