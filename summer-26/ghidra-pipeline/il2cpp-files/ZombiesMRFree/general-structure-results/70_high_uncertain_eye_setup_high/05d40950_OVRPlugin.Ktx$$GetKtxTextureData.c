/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 05d40950
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureData(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w20;
  undefined4 *unaff_x22;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  lVar1 = FUN_05d40a5c();
  if (lVar1 == 0) {
    uStack0000000000000000 = *unaff_x22;
    uStack0000000000000004 = unaff_x22[1];
    uStack0000000000000008 = unaff_x22[2];
    uStack000000000000000c = unaff_x22[3];
    uStack0000000000000010 = unaff_x22[4];
    uStack0000000000000014 = unaff_x22[5];
    in_stack_00000018 = unaff_x22[6];
  }
  else {
    plVar2 = (long *)FUN_05d40a5c();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb5318) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_05d40a2c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*(long *)PTR_DAT_06fb5318,2);
LAB_05d40a2c:
    (*(code *)*puVar3)(plVar2);
  }
  if ((unaff_w20 & 1) != 0) {
    FUN_05d40abc(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008);
  }
  if ((unaff_w20 >> 1 & 1) != 0) {
    FUN_05d40b14(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                 in_stack_00000018);
  }
  return;
}


