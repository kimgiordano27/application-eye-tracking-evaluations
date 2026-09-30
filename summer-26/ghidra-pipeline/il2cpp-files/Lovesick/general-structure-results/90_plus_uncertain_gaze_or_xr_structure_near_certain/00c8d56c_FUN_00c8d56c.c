/*
FUNCTION_NAME: FUN_00c8d56c
ENTRY_POINT: 00c8d56c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_00c8d56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint local_34;
  
  if (DAT_037819f5 == '\0') {
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(OVRTelemetryConstants_OVRManager_TypeInfo);
    DAT_037819f5 = '\x01';
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
  uVar2 = *(ushort *)(param_1 + 0x10);
  iVar7 = 0x38000000;
  if (((uint)uVar2 << 0xd & 0xf800000) != 0xf800000) {
    iVar7 = 0;
  }
  iVar7 = ((uint)uVar2 << 0xd & 0xfffe000) + iVar7;
  fVar1 = (float)(iVar7 + 0x38800000) + -6.1035156e-05;
  if ((uVar2 & 0x7c00) != 0) {
    fVar1 = (float)(iVar7 + 0x38000000);
  }
  local_34 = (uint)fVar1 | (uVar2 & 0x8000) << 0x10;
  lVar4 = FUN_0178423c(&local_34,param_2,param_3,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_00c8d86c:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    uVar2 = *(ushort *)(param_1 + 0x12);
    iVar7 = 0x38000000;
    if (((uint)uVar2 << 0xd & 0xf800000) != 0xf800000) {
      iVar7 = 0;
    }
    iVar7 = ((uint)uVar2 << 0xd & 0xfffe000) + iVar7;
    fVar1 = (float)(iVar7 + 0x38800000) + -6.1035156e-05;
    if ((uVar2 & 0x7c00) != 0) {
      fVar1 = (float)(iVar7 + 0x38000000);
    }
    local_34 = (uint)fVar1 | (uVar2 & 0x8000) << 0x10;
    lVar4 = FUN_0178423c(&local_34,param_2,param_3,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_00c8d86c;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      uVar2 = *(ushort *)(param_1 + 0x14);
      iVar7 = 0x38000000;
      if (((uint)uVar2 << 0xd & 0xf800000) != 0xf800000) {
        iVar7 = 0;
      }
      iVar7 = ((uint)uVar2 << 0xd & 0xfffe000) + iVar7;
      fVar1 = (float)(iVar7 + 0x38800000) + -6.1035156e-05;
      if ((uVar2 & 0x7c00) != 0) {
        fVar1 = (float)(iVar7 + 0x38000000);
      }
      local_34 = (uint)fVar1 | (uVar2 & 0x8000) << 0x10;
      lVar4 = FUN_0178423c(&local_34,param_2,param_3,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_00c8d86c;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        uVar2 = *(ushort *)(param_1 + 0x16);
        iVar7 = 0x38000000;
        if (((uint)uVar2 << 0xd & 0xf800000) != 0xf800000) {
          iVar7 = 0;
        }
        iVar7 = ((uint)uVar2 << 0xd & 0xfffe000) + iVar7;
        fVar1 = (float)(iVar7 + 0x38800000) + -6.1035156e-05;
        if ((uVar2 & 0x7c00) != 0) {
          fVar1 = (float)(iVar7 + 0x38000000);
        }
        local_34 = (uint)fVar1 | (uVar2 & 0x8000) << 0x10;
        lVar4 = FUN_0178423c(&local_34,param_2,param_3,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_00c8d86c;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          FUN_01600be4(*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo,plVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


