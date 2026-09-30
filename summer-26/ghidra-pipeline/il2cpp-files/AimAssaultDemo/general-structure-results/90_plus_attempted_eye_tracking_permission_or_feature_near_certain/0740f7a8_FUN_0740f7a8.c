/*
FUNCTION_NAME: FUN_0740f7a8
ENTRY_POINT: 0740f7a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 111
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_data_collection_or_telemetry_hits_4
*/


undefined1  [16]
FUN_0740f7a8(long param_1,long *param_2,undefined8 param_3,uint *param_4,undefined8 param_5,
            undefined8 param_6,ulong param_7)

{
  int iVar1;
  undefined1 uVar2;
  float fVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  ulong local_80;
  undefined4 local_78;
  ulong local_70;
  undefined4 local_68;
  
  if ((DAT_0826995c & 1) == 0) {
    FUN_0373b518(Unity_Multiplayer_Tools_MetricTypes_ServerLogEvent_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    DAT_0826995c = 1;
  }
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  if ((*param_2 == 0) ||
     (lVar6 = FUN_07445304(*param_2,0),
     puVar4 = Unity_Multiplayer_Tools_MetricTypes_ServerLogEvent_TypeInfo, lVar6 == 0))
  goto LAB_0740fa50;
  iVar1 = *(int *)(lVar6 + 0x18);
  if ((iVar1 == 1) && ((param_7 & 1) != 0)) {
    if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x178) != '\0')) {
      plVar10 = *(long **)(param_1 + 0x170);
      if (plVar10 == (long *)0x0) {
LAB_0740fa50:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Unity_Multiplayer_Tools_MetricTypes_ServerLogEvent_TypeInfo) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0740f8ac;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_0377596c(plVar10,*(long *)
                                     Unity_Multiplayer_Tools_MetricTypes_ServerLogEvent_TypeInfo,0);
LAB_0740f8ac:
      iVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      if (iVar5 != 1) goto LAB_0740f908;
      plVar10 = *(long **)(param_1 + 0x170);
      if (plVar10 == (long *)0x0) goto LAB_0740fa50;
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0740f964;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar4,2);
LAB_0740f964:
      uVar11 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      if (DAT_082531ec == '\0') {
        FUN_0373b518(PTR_DAT_07d86cd0);
        DAT_082531ec = '\x01';
      }
      fVar14 = ABS((float)uVar11);
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      fVar15 = **(float **)(*(long *)PTR_DAT_07d86cd0 + 0xb8) * 8.0;
      fVar3 = fVar14 * DAT_0158684c;
      if (fVar14 * DAT_0158684c <= fVar15) {
        fVar3 = fVar15;
      }
      if (fVar3 <= ABS(0.0 - (float)uVar11)) {
        uVar2 = *(undefined1 *)(param_1 + 0x38);
        uVar12 = FUN_075b6260(0);
        FUN_0740fa54(uVar11,uVar12,*(undefined4 *)(param_1 + 0x30),param_4,param_1 + 0x140,uVar2,
                     param_1 + 0x14c,param_1 + 0x158,&local_70);
        local_80 = local_70 & 0xffffffff;
        goto LAB_0740f9e0;
      }
    }
  }
  else {
LAB_0740f908:
    if (((1 < iVar1) && ((param_7 & 1) != 0)) && (*(char *)(param_1 + 0x2d) != '\0')) {
      FUN_0740fb84(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x34),param_3,param_4,
                   param_5,param_6,*(undefined1 *)(param_1 + 0x38),param_1 + 0x14c,param_1 + 0x158,
                   &local_80);
      local_80 = local_80 & 0xffffffff;
      goto LAB_0740f9e0;
    }
  }
  local_80 = (ulong)*param_4;
LAB_0740f9e0:
  auVar13._8_8_ = 0;
  auVar13._0_8_ = local_80;
  return auVar13;
}


