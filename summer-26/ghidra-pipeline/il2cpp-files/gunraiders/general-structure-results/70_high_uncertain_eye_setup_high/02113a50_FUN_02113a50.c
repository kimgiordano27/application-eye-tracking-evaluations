/*
FUNCTION_NAME: FUN_02113a50
ENTRY_POINT: 02113a50
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02113a50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  puVar2 = PTR_DAT_042393a8;
  if ((DAT_0452f713 & 1) == 0) {
    FUN_01c5d288(OVR_SoundFXRef___TypeInfo);
    FUN_01c5d288(PTR_DAT_042393a8);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(OVRPlugin_Recti___TypeInfo);
    DAT_0452f713 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = OVRPlugin_Recti___TypeInfo;
  puVar3 = OVR_SoundFXRef___TypeInfo;
  puVar1 = PTR_DAT_0422f9e8;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
  if (lVar5 != 0) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar10 = 0;
      uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        uVar9 = *(undefined8 *)(lVar5 + 0x20 + uVar10 * 8);
        lVar6 = FUN_0211c7d4(0);
        if (lVar6 == 0) goto LAB_02113be4;
        lVar6 = FUN_023c4e78(lVar6,uVar9,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar1);
        }
        uVar8 = FUN_03d4dd60(lVar6,0);
        if ((uVar8 & 1) != 0) {
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar7 = *(long *)puVar2;
          }
          if (lVar6 == 0) goto LAB_02113be4;
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
          if (lVar7 == 0) goto LAB_02113be4;
          uVar8 = FUN_02d503d4(lVar7,*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)puVar3);
          if ((uVar8 & 1) == 0) {
            lVar7 = *(long *)(lVar6 + 0x18);
            if (lVar7 == 0) goto LAB_02113be4;
            if (*(char *)(lVar7 + 0x1b) == '\0') {
              *(undefined1 *)(lVar7 + 0x1b) = 1;
            }
            *(long *)(lVar7 + 0x10) = lVar6;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_02104688(lVar7);
          }
        }
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    return;
  }
LAB_02113be4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


