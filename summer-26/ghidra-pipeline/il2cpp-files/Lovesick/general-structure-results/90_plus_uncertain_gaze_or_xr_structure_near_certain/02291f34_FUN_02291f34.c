/*
FUNCTION_NAME: FUN_02291f34
ENTRY_POINT: 02291f34
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


void FUN_02291f34(ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  ushort uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint local_34;
  
  puVar3 = StringLiteral_3033;
  if ((DAT_037819e5 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(OVRTelemetryConstants_OVRManager_TypeInfo);
    DAT_037819e5 = 1;
  }
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,4);
  uVar2 = *param_1;
  iVar8 = 0x38000000;
  if (((uint)uVar2 << 0xd & 0xf800000) != 0xf800000) {
    iVar8 = 0;
  }
  iVar8 = ((uint)uVar2 << 0xd & 0xfffe000) + iVar8;
  fVar1 = (float)(iVar8 + 0x38800000) + -6.1035156e-05;
  if ((uVar2 & 0x7c00) != 0) {
    fVar1 = (float)(iVar8 + 0x38000000);
  }
  local_34 = (uint)fVar1 | (uVar2 & 0x8000) << 0x10;
  lVar5 = FUN_0178423c(&local_34,param_2,param_3,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_02292234:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    uVar2 = param_1[1];
    iVar8 = 0x38000000;
    if (((uint)uVar2 << 0xd & 0xf800000) != 0xf800000) {
      iVar8 = 0;
    }
    iVar8 = ((uint)uVar2 << 0xd & 0xfffe000) + iVar8;
    fVar1 = (float)(iVar8 + 0x38800000) + -6.1035156e-05;
    if ((uVar2 & 0x7c00) != 0) {
      fVar1 = (float)(iVar8 + 0x38000000);
    }
    local_34 = (uint)fVar1 | (uVar2 & 0x8000) << 0x10;
    lVar5 = FUN_0178423c(&local_34,param_2,param_3,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_02292234;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar5;
      uVar2 = param_1[2];
      iVar8 = 0x38000000;
      if (((uint)uVar2 << 0xd & 0xf800000) != 0xf800000) {
        iVar8 = 0;
      }
      iVar8 = ((uint)uVar2 << 0xd & 0xfffe000) + iVar8;
      fVar1 = (float)(iVar8 + 0x38800000) + -6.1035156e-05;
      if ((uVar2 & 0x7c00) != 0) {
        fVar1 = (float)(iVar8 + 0x38000000);
      }
      local_34 = (uint)fVar1 | (uVar2 & 0x8000) << 0x10;
      lVar5 = FUN_0178423c(&local_34,param_2,param_3,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_02292234;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        uVar2 = param_1[3];
        iVar8 = 0x38000000;
        if (((uint)uVar2 << 0xd & 0xf800000) != 0xf800000) {
          iVar8 = 0;
        }
        iVar8 = ((uint)uVar2 << 0xd & 0xfffe000) + iVar8;
        fVar1 = (float)(iVar8 + 0x38800000) + -6.1035156e-05;
        if ((uVar2 & 0x7c00) != 0) {
          fVar1 = (float)(iVar8 + 0x38000000);
        }
        local_34 = (uint)fVar1 | (uVar2 & 0x8000) << 0x10;
        lVar5 = FUN_0178423c(&local_34,param_2,param_3,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_02292234;
        puVar3 = OVRTelemetryConstants_OVRManager_TypeInfo;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar5;
          FUN_01600be4(*(undefined8 *)puVar3,plVar4,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


