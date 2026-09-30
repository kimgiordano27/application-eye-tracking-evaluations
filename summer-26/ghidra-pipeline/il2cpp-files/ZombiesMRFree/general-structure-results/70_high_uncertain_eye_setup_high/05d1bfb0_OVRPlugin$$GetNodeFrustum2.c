/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 05d1bfb0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeFrustum2(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  
  puVar1 = PTR_DAT_06fb5bf8;
  if ((DAT_073988c3 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb5bf8);
    FUN_02fe925c(PTR_DAT_06f6d960);
    FUN_02fe925c(PTR_DAT_06fb8a50);
    FUN_02fe925c(PTR_DAT_06fb8a58);
    FUN_02fe925c(PTR_DAT_06fb8a60);
    FUN_02fe925c(PTR_DAT_06fb8a68);
    DAT_073988c3 = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar6 = *(long *)puVar1;
  }
  puVar4 = PTR_DAT_06fb8a60;
  puVar3 = PTR_DAT_06fb8a58;
  puVar2 = PTR_DAT_06fb8a50;
  if (**(long **)(lVar6 + 0xb8) == 0) {
LAB_05d1c1a0:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar6 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d960,
                       *(undefined4 *)(**(long **)(lVar6 + 0xb8) + 0x18));
  plVar10 = (long *)(param_1 + 0x10);
  *plVar10 = lVar6;
  thunk_FUN_03048534(plVar10,lVar6);
  FUN_05b32c00(param_1,0);
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_03048534((long *)(param_1 + 0x18),param_2);
  lVar6 = 8;
  while( true ) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *(long *)puVar1;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_05d1c1a0;
    uVar11 = lVar6 - 8;
    if ((long)*(int *)(**(long **)(lVar7 + 0xb8) + 0x18) <= (long)uVar11) {
      return;
    }
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8a68);
    FUN_05b32c00(lVar7,0);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar8 = *(long *)puVar1;
    }
    lVar8 = **(long **)(lVar8 + 0xb8);
    if (lVar8 == 0) goto LAB_05d1c1a0;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) break;
    if (lVar7 == 0) goto LAB_05d1c1a0;
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar8 + lVar6 * 4);
    lVar8 = *plVar10;
    uVar9 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    FUN_0494bc5c(uVar9,lVar7,*(undefined8 *)puVar4,0);
    if ((param_2 == 0) || (uVar5 = FUN_04430b40(param_2,uVar9,*(undefined8 *)puVar2), lVar8 == 0))
    goto LAB_05d1c1a0;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) break;
    *(undefined4 *)(lVar8 + lVar6 * 4) = uVar5;
    lVar6 = lVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


