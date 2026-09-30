/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0193d398
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_03a220fa & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f2ba0);
    FUN_017fc350(PTR_DAT_037f2b10);
    DAT_03a220fa = 1;
  }
  puVar1 = PTR_DAT_037f2b10;
  fVar6 = (float)FUN_033ef010(0);
  if (fVar6 - *(float *)(param_4 + 0x40) <= *(float *)(param_4 + 0x44)) {
    iVar3 = *(int *)(param_4 + 0x34) + 1;
  }
  else {
    iVar3 = 1;
  }
  *(int *)(param_4 + 0x34) = iVar3;
  uVar5 = *(undefined8 *)(param_4 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar2 = FUN_033ed0cc(uVar5,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_4 + 0x38);
    if (DAT_03a21eca == '\0') {
      FUN_017fc350(PTR_DAT_037f2bb0);
      DAT_03a21eca = '\x01';
    }
    puVar4 = *(undefined4 **)(*(long *)PTR_DAT_037f2bb0 + 0xb8);
    uVar10 = *puVar4;
    uVar9 = puVar4[1];
    uVar8 = puVar4[2];
    uVar7 = puVar4[3];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_01b80b9c(param_1,param_2,param_3,uVar10,uVar9,uVar8,uVar7,uVar5,
                 *(undefined8 *)PTR_DAT_037f2ba0);
  }
  uVar7 = FUN_033ef010(0);
  *(undefined4 *)(param_4 + 0x40) = uVar7;
  if (2 < *(int *)(param_4 + 0x34)) {
    if (*(long *)(param_4 + 0x20) != 0) {
      FUN_033e9700(*(long *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28),1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  return;
}


