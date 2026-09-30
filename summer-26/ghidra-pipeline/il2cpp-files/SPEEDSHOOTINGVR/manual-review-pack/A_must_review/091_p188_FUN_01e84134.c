/*
FUNCTION_NAME: FUN_01e84134
ENTRY_POINT: 01e84134
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 FUN_01e84134(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  int local_34;
  
  puVar3 = PTR_DAT_0234c2e8;
  if ((DAT_0247e2a7 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c1b8);
    FUN_00fdc2e4(PTR_DAT_0235cc10);
    FUN_00fdc2e4(PTR_DAT_0235f2b0);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    FUN_00fdc2e4(PTR_DAT_0234bad0);
    DAT_0247e2a7 = 1;
  }
  lVar6 = *(long *)puVar3;
  local_34 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar6 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_0234bad0;
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x78) == 0) {
    uVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bad0,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar6);
      lVar6 = *(long *)puVar3;
    }
    puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78);
    *puVar8 = uVar7;
    thunk_FUN_0106e12c(puVar8,uVar7);
    uVar7 = FUN_01e79184();
    puVar4 = PTR_DAT_0235f2b0;
    lVar6 = *(long *)PTR_DAT_0235f2b0;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar6);
      lVar6 = *(long *)puVar4;
    }
    uVar9 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                      (uVar7,**(undefined8 **)(lVar6 + 0xb8),0);
    if ((uVar9 & 1) != 0) {
      local_34 = 0;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      iVar5 = FUN_01eb48cc(0,&local_34,0);
      iVar1 = local_34;
      if ((iVar5 == 0) && (0 < local_34)) {
        uVar7 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235cc10);
        FUN_01e159fc(uVar7,iVar1 << 2,0);
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar6 = *(long *)puVar3;
        }
        puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x70);
        *puVar8 = uVar7;
        thunk_FUN_0106e12c(puVar8,uVar7);
        lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
        if (lVar6 == 0) {
LAB_01e843dc:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar7 = FUN_01e155c0(lVar6,0,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)puVar4);
        }
        iVar5 = FUN_01eb48cc(uVar7,&local_34,0);
        if (iVar5 == 0) {
          if (local_34 <= iVar1) {
            iVar1 = local_34;
          }
          if (0 < iVar1) {
            uVar7 = FUN_00fdc388(*(undefined8 *)puVar2,iVar1);
            lVar6 = *(long *)puVar3;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01022c14(lVar6);
              lVar6 = *(long *)puVar3;
            }
            puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78);
            *puVar8 = uVar7;
            thunk_FUN_0106e12c(puVar8,uVar7);
            lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
            if (lVar6 == 0) goto LAB_01e843dc;
            uVar7 = FUN_01e155c0(lVar6,0,0);
            uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78);
            if (*(int *)(*(long *)PTR_DAT_0234c1b8 + 0xe0) == 0) {
              thunk_FUN_01022c14(*(long *)PTR_DAT_0234c1b8);
            }
            System_Threading_Tasks_Task__RecordInternalCancellationRequest(uVar7,uVar10,0,iVar1,0);
          }
        }
      }
    }
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar6 = *(long *)puVar3;
  }
  return *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78);
}


