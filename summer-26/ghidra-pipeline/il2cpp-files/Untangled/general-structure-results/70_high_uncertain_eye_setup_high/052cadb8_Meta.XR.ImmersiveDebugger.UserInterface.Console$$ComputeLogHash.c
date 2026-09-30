/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$ComputeLogHash
ENTRY_POINT: 052cadb8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Console__ComputeLogHash
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_071c109c & 1) == 0) {
                    /* try { // try from 052cadcc to 053cadf3 has its CatchHandler @ 052cafec */
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d03818);
    DAT_071c109c = 1;
  }
  puVar1 = PTR_DAT_06d01e20;
  plVar5 = *(long **)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
                    /* try { // try from 052cae0c to 053cae6b has its CatchHandler @ 052caff0 */
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((plVar5 == (long *)0x0) || (plVar5[0x19] == 0)) goto LAB_052cb198;
    FUN_052cb19c(plVar5[0x19],*(undefined8 *)(param_4 + 0x28));
    uVar6 = *(undefined8 *)(param_4 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar6,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_4 + 0x28);
    }
    else {
      lVar3 = *(long *)(param_4 + 0x30);
    }
    if (lVar3 == 0) goto LAB_052cb198;
    uVar6 = FUN_066c67b0(lVar3,0);
    *(undefined8 *)(param_4 + 0x38) = uVar6;
                    /* try { // try from 052cae80 to 053cae93 has its CatchHandler @ 052cafe8 */
    thunk_FUN_02f411dc((undefined8 *)(param_4 + 0x38),uVar6);
    *(undefined1 *)(param_4 + 0x40) = 0;
    *(undefined4 *)(param_4 + 0x44) = 0;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar6,0);
  if ((uVar2 & 1) != 0) {
    if (plVar5 == (long *)0x0) goto LAB_052cb198;
    fVar9 = *(float *)(plVar5 + 0x28);
    if (*(float *)(param_4 + 0x44) < fVar9) {
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_052cb198;
      uVar2 = FUN_0528dd08(*(long *)(param_4 + 0x28),0);
      if ((uVar2 & 1) == 0) {
        if ((*(long *)(param_4 + 0x28) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_4 + 0x28) + 0xa8), lVar3 == 0)) goto LAB_052cb198;
        fVar7 = (float)FUN_067413b4(lVar3,0);
        if (DAT_071babf8 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf8 = '\x01';
        }
        puVar1 = PTR_DAT_06d03010;
        if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        fVar10 = *(float *)(plVar5 + 0x27);
        param_3 = param_3 * param_3;
        if (fVar10 < SQRT(param_3 + fVar7 * fVar7 + fVar9 * fVar9)) {
          if ((*(long *)(param_4 + 0x28) == 0) ||
             (lVar3 = *(long *)(*(long *)(param_4 + 0x28) + 0xa8), lVar3 == 0)) goto LAB_052cb198;
          fVar9 = (float)FUN_067413b4(lVar3,0);
          param_3 = param_3 * DAT_013f6b68;
          fVar10 = fVar10 * DAT_013f6b68;
          FUN_06741454(fVar9 * DAT_013f6b68,lVar3,0);
        }
        fVar9 = (float)(**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if (*(long *)(param_4 + 0x38) == 0) goto LAB_052cb198;
        fVar7 = param_3;
        fVar11 = fVar10;
        fVar8 = (float)FUN_066d48c0(*(long *)(param_4 + 0x38),0);
        if (DAT_071babf8 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf8 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        if (*(float *)((long)plVar5 + 0x144) <=
            SQRT((fVar10 - fVar11) * (fVar10 - fVar11) +
                 (fVar9 - fVar8) * (fVar9 - fVar8) + (param_3 - fVar7) * (param_3 - fVar7))) {
LAB_052cb14c:
          fVar7 = *(float *)(param_4 + 0x44);
          fVar9 = (float)FUN_066d1758(0);
          *(float *)(param_4 + 0x44) = fVar7 + fVar9;
          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
          FUN_066cf184(uVar6,0);
          *(undefined8 *)(param_4 + 0x18) = uVar6;
          thunk_FUN_02f411dc((undefined8 *)(param_4 + 0x18),uVar6);
          *(undefined4 *)(param_4 + 0x10) = 1;
          return 1;
        }
        if (plVar5[0x19] == 0) goto LAB_052cb198;
        uVar2 = FUN_052cb1ec(plVar5[0x19],*(undefined8 *)(param_4 + 0x28),
                             *(undefined8 *)(param_4 + 0x30));
        if ((uVar2 & 1) == 0) goto LAB_052cb14c;
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_052cb198;
        lVar3 = *(long *)(*(long *)(param_4 + 0x28) + 0xa8);
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        puVar1 = PTR_DAT_06d02c10;
        if (lVar3 == 0) goto LAB_052cb198;
        puVar4 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
        FUN_0674158c(*puVar4,puVar4[1],puVar4[2],lVar3,0);
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_052cb198;
        lVar3 = *(long *)(*(long *)(param_4 + 0x28) + 0xa8);
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        if (lVar3 == 0) goto LAB_052cb198;
        puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        FUN_06741454(*puVar4,puVar4[1],puVar4[2],lVar3,0);
        *(undefined1 *)(param_4 + 0x40) = 1;
      }
    }
  }
  if (*(char *)(param_4 + 0x40) == '\0') {
    if ((plVar5 == (long *)0x0) || (plVar5[0x19] == 0)) goto LAB_052cb198;
    FUN_052cb430(plVar5[0x19],*(undefined8 *)(param_4 + 0x28));
    (**(code **)(*plVar5 + 0x328))(plVar5,*(undefined8 *)(*plVar5 + 0x330));
  }
  else if (plVar5 == (long *)0x0) {
LAB_052cb198:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar5[0x2b] = 0;
  thunk_FUN_02f411dc(plVar5 + 0x2b,0);
  return 0;
}


