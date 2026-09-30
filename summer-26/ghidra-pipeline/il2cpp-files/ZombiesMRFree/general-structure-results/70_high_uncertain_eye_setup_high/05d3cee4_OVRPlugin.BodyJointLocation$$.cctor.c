/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$.cctor
ENTRY_POINT: 05d3cee4
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


void OVRPlugin_BodyJointLocation___cctor(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_07398ac6 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb7268);
    FUN_02fe925c(PTR_DAT_06f9acc8);
    FUN_02fe925c(PTR_DAT_06fb8f70);
    DAT_07398ac6 = 1;
  }
  if ((param_2 == 0) || (plVar8 = *(long **)(param_1 + 0x48), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar5 = *plVar8;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06f9acc8) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05d3cf8c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9acc8,0);
LAB_05d3cf8c:
  iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  if (iVar1 == iVar2) {
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb7268);
      FUN_051110bc(uVar4,param_1,*(undefined8 *)PTR_DAT_06fb8f70,0);
      FUN_05cc016c(lVar5,uVar4,0);
    }
    uVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb7268);
    FUN_051110bc(uVar4,param_1,*(undefined8 *)PTR_DAT_06fb8f70,0);
    FUN_05cc00bc(param_2,uVar4,0);
    *(long *)(param_1 + 0x58) = param_2;
    thunk_FUN_03048534((long *)(param_1 + 0x58),param_2);
    return;
  }
  return;
}


