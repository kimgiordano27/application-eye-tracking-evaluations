/*
FUNCTION_NAME: FUN_02113bec
ENTRY_POINT: 02113bec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_02113bec(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  puVar3 = OVRPlugin_SpaceComponentType___TypeInfo;
  puVar2 = PTR_DAT_0422fb28;
  if ((DAT_0452f712 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_SpaceQueryResult___TypeInfo);
    FUN_01c5d288(OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_01c5d288(OVR_SoundFXRef___TypeInfo);
    FUN_01c5d288(PTR_DAT_042393a8);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_0452f712 = 1;
  }
  uVar7 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar7 = FUN_032e04b8(uVar7,0);
  lVar4 = FUN_03d44b60(uVar7,0);
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo;
    lVar5 = thunk_FUN_01c495e4(lVar4,uVar7);
    puVar3 = OVR_SoundFXRef___TypeInfo;
    puVar2 = PTR_DAT_042393a8;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar4,uVar7);
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        lVar4 = *(long *)puVar2;
        lVar9 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar2;
        }
        if (lVar9 == 0) goto LAB_02113d5c;
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
        if (lVar4 == 0) goto LAB_02113d5c;
        uVar6 = FUN_02d503d4(lVar4,*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          lVar4 = *(long *)(lVar9 + 0x20);
          if (lVar4 == 0) goto LAB_02113d5c;
          if (*(long *)(lVar4 + 0x10) == 0) {
            *(long *)(lVar4 + 0x10) = lVar9;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_02104688(lVar4);
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    return;
  }
LAB_02113d5c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


