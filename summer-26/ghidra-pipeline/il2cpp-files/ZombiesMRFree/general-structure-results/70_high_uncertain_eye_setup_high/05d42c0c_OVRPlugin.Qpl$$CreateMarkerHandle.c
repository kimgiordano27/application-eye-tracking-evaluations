/*
FUNCTION_NAME: OVRPlugin.Qpl$$CreateMarkerHandle
ENTRY_POINT: 05d42c0c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl__CreateMarkerHandle(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  ulong uVar9;
  long *unaff_x22;
  long lVar10;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb7978);
    FUN_02fe925c(PTR_DAT_06fb6b68);
    FUN_02fe925c(PTR_DAT_06fb4a40);
    FUN_02fe925c(PTR_DAT_06fb9070);
    FUN_02fe925c(PTR_DAT_06fb9078);
    *(undefined1 *)(unaff_x19 + 0xb15) = 1;
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *unaff_x22;
  }
  puVar3 = PTR_DAT_06fb9078;
  puVar2 = PTR_DAT_06fb6b68;
  if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_05d42d98:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar5 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06fb7978,
                       *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
  lVar10 = 0;
  uVar9 = 0;
  lVar4 = lVar5 + 0x20;
  while( true ) {
    lVar6 = *unaff_x22;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar6 = *unaff_x22;
    }
    lVar8 = **(long **)(lVar6 + 0xb8);
    if (lVar8 == 0) goto LAB_05d42d98;
    if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar9) {
      return lVar5;
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar8 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar8 == 0) goto LAB_05d42d98;
    }
    lVar6 = FUN_04430018(lVar8,uVar9 & 0xffffffff,*(undefined8 *)puVar3);
    if (lVar6 == 0) goto LAB_05d42d98;
    iVar1 = *(int *)(lVar6 + 0x18) + -1;
    uVar7 = FUN_02fe9340(*(undefined8 *)puVar2,iVar1);
    if (lVar5 == 0) goto LAB_05d42d98;
    if (*(uint *)(lVar5 + 0x18) <= uVar9) break;
    *(undefined8 *)(lVar4 + uVar9 * 8) = uVar7;
    thunk_FUN_03048534(lVar4 + lVar10,uVar7);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_05d42d98;
    uVar7 = FUN_04430018(**(long **)(*unaff_x22 + 0xb8),uVar9 & 0xffffffff,*(undefined8 *)puVar3);
    if (*(uint *)(lVar5 + 0x18) <= uVar9) break;
    FUN_05b1314c(uVar7,*(undefined8 *)(lVar4 + uVar9 * 8),iVar1,0);
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


