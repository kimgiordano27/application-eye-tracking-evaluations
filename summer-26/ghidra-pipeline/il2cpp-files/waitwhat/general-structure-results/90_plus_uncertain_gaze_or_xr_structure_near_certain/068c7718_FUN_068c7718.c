/*
FUNCTION_NAME: FUN_068c7718
ENTRY_POINT: 068c7718
PROGRAM: waitwhat-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_068c7718(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 local_24;
  
  if ((DAT_075591f6 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_03188a78(System_Net_FtpWebRequest_<>c_TypeInfo);
    DAT_075591f6 = 1;
  }
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_44 = 0;
  uStack_50 = 0;
  FUN_068b07f0(param_1,param_2);
  if ((*(char *)(param_1 + 0x2e8) != '\0') && (*(char *)(param_1 + 0x3a4) != '\0')) {
    uVar11 = FUN_069e3174(0);
    *(undefined1 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = uVar11;
  }
  lVar4 = FUN_068b06d0(param_1);
  if (lVar4 == 0) goto LAB_068c78e8;
  if (*(int *)(lVar4 + 0x18) != 1) {
    return;
  }
  if (param_2 == 0) goto LAB_068c78e8;
  cVar1 = *(char *)(param_1 + 0x2f4);
  uVar5 = FUN_06852520(param_2,0);
  puVar2 = OVRPlugin_OVRP_1_2_0_TypeInfo;
  plVar6 = (long *)thunk_FUN_031c3cac(uVar5,*(undefined8 *)OVRPlugin_OVRP_1_2_0_TypeInfo);
  if (plVar6 == (long *)0x0) {
LAB_068c7874:
    if (cVar1 != '\0') {
      return;
    }
  }
  else {
    lVar8 = *plVar6;
    lVar4 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto UnityEngine_Vector2__get_normalized;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08(plVar6,lVar4,0);
UnityEngine_Vector2__get_normalized:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 == 0) goto LAB_068c7874;
    lVar8 = *plVar6;
    lVar4 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_068c7888;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08(plVar6,lVar4,0);
LAB_068c7888:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 != 2) {
      return;
    }
  }
  local_24 = 0;
  uVar9 = FUN_068c45bc(param_1,&local_60,&local_24);
  if ((uVar9 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    FUN_06a6354c(&local_60,0);
    if (lVar4 == 0) {
LAB_068c78e8:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_069e7098(lVar4,0);
  }
  return;
}


