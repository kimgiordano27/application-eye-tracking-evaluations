/*
FUNCTION_NAME: FUN_03345ce0
ENTRY_POINT: 03345ce0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
FUN_03345ce0(long param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            char *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  undefined4 uVar11;
  
  if (param_7 == (char *)0x0) {
    uVar7 = 0xfffffffa;
  }
  else {
    uVar7 = 0xfffffffa;
    if ((param_8 == 0x70) && (*param_7 == '1')) {
      if (param_1 != 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        puVar6 = Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__;
        pcVar10 = *(code **)(param_1 + 0x40);
        if (*(code **)(param_1 + 0x40) == (code *)0x0) {
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(undefined **)(param_1 + 0x40) = puVar6;
          pcVar10 = (code *)puVar6;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          *(undefined **)(param_1 + 0x48) = Method_OVRTask_SetResult<OVRResult<OVRPlugin_Result>>__;
        }
        uVar1 = 6;
        if (param_2 != 0xffffffff) {
          uVar1 = param_2;
        }
        if ((int)param_4 < 0) {
          uVar11 = 0;
          param_4 = -param_4;
          bVar5 = 1;
        }
        else if ((int)param_4 < 0x10) {
          bVar5 = 0;
          uVar11 = 1;
        }
        else {
          uVar11 = 2;
          bVar5 = 1;
          param_4 = param_4 - 0x10;
        }
        if (4 < param_6) {
          return 0xfffffffe;
        }
        if (9 < uVar1) {
          return 0xfffffffe;
        }
        if (param_3 != 8) {
          return 0xfffffffe;
        }
        if (8 < param_5 - 1U) {
          return 0xfffffffe;
        }
        if ((param_4 & 0xfffffff8) != 8) {
          return 0xfffffffe;
        }
        if (!(bool)(param_4 == 8 & bVar5)) {
          uVar2 = 9;
          if (param_4 != 8) {
            uVar2 = param_4;
          }
          plVar8 = (long *)(*pcVar10)(*(undefined8 *)(param_1 + 0x50),1,0x1740);
          if (plVar8 != (long *)0x0) {
            iVar3 = 1 << (ulong)(uVar2 & 0x1f);
            *(long **)(param_1 + 0x38) = plVar8;
            *(undefined4 *)(plVar8 + 1) = 0x2a;
            *(uint *)((long)plVar8 + 0x54) = uVar2;
            *(int *)(plVar8 + 0xb) = iVar3 + -1;
            iVar4 = 1 << (ulong)(param_5 + 7U & 0x1f);
            *(int *)((long)plVar8 + 0x84) = iVar4;
            *(uint *)(plVar8 + 0x11) = param_5 + 7U;
            *plVar8 = param_1;
            *(undefined4 *)(plVar8 + 6) = uVar11;
            plVar8[7] = 0;
            *(int *)(plVar8 + 10) = iVar3;
            *(int *)((long)plVar8 + 0x8c) = iVar4 + -1;
            *(uint *)(plVar8 + 0x12) = (param_5 + 9U & 0xff) / 3;
            lVar9 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,2);
            plVar8[0xc] = lVar9;
            lVar9 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),(int)plVar8[10],2)
            ;
            plVar8[0xe] = lVar9;
            lVar9 = (**(code **)(param_1 + 0x40))
                              (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar8 + 0x84),
                               2);
            iVar3 = 1 << (ulong)(param_5 + 6U & 0x1f);
            plVar8[0xf] = lVar9;
            plVar8[0x2e7] = 0;
            *(int *)(plVar8 + 0x2e1) = iVar3;
            lVar9 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,4);
            uVar2 = *(uint *)(plVar8 + 0x2e1);
            plVar8[2] = lVar9;
            plVar8[3] = (ulong)uVar2 << 2;
            puVar6 = Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__;
            if ((((plVar8[0xc] != 0) && (plVar8[0xe] != 0)) && (lVar9 != 0)) && (plVar8[0xf] != 0))
            {
              *(uint *)((long)plVar8 + 0xc4) = uVar1;
              *(uint *)(plVar8 + 0x19) = param_6;
              plVar8[0x2e0] = lVar9 + (ulong)uVar2;
              *(uint *)(plVar8 + 0x2e2) = uVar2 * 3 + -3;
              *(undefined1 *)(plVar8 + 9) = 8;
              uVar7 = FUN_0334600c(param_1);
              return uVar7;
            }
            *(undefined4 *)(plVar8 + 1) = 0x29a;
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar6 + 0x30);
            FUN_03345f64(param_1);
          }
          return 0xfffffffc;
        }
      }
      uVar7 = 0xfffffffe;
    }
  }
  return uVar7;
}


