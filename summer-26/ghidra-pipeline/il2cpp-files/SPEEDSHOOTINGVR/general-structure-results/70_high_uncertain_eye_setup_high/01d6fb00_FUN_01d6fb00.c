/*
FUNCTION_NAME: FUN_01d6fb00
ENTRY_POINT: 01d6fb00
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


int FUN_01d6fb00(long *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
  if ((DAT_0247d752 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234d9d8);
    DAT_0247d752 = 1;
  }
  iVar10 = param_3 - param_2;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 1;
  }
  iVar10 = param_2 + (iVar10 >> 1);
  FUN_01d6f3c4(param_1,param_2,iVar10);
  FUN_01d6f3c4(param_1,param_2,param_3);
  FUN_01d6f3c4(param_1,iVar10,param_3);
  if (*param_1 != 0) {
    uVar3 = FUN_01d60e94(*param_1,iVar10);
    param_3 = param_3 + -1;
    FUN_01d6f56c(param_1,iVar10,param_3);
    puVar1 = PTR_DAT_0234d9d8;
    iVar10 = param_3;
    if (param_3 <= param_2) {
LAB_01d6fce0:
      FUN_01d6f56c(param_1,param_2,param_3);
      return param_2;
    }
    while (*param_1 != 0) {
      plVar11 = (long *)param_1[2];
      param_2 = param_2 + 1;
      uVar4 = FUN_01d60e94(*param_1,param_2);
      if (plVar11 == (long *)0x0) break;
      lVar7 = *plVar11;
      lVar6 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01d6fc28;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0103c348(plVar11,lVar6,0);
LAB_01d6fc28:
      iVar2 = (*(code *)*puVar5)(plVar11,uVar4,uVar3,puVar5[1]);
      if (-1 < iVar2) {
        do {
          if (*param_1 == 0) goto OVRManager__StaticShutdownMixedRealityCapture;
          plVar11 = (long *)param_1[2];
          iVar10 = iVar10 + -1;
          uVar4 = FUN_01d60e94(*param_1,iVar10);
          if (plVar11 == (long *)0x0) goto OVRManager__StaticShutdownMixedRealityCapture;
          lVar7 = *plVar11;
          lVar6 = *(long *)puVar1;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_01d6fcac;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_0103c348(plVar11,lVar6,0);
LAB_01d6fcac:
          iVar2 = (*(code *)*puVar5)(plVar11,uVar3,uVar4,puVar5[1]);
        } while (iVar2 < 0);
        if (iVar10 <= param_2) goto LAB_01d6fce0;
        FUN_01d6f56c(param_1,param_2,iVar10);
      }
    }
  }
OVRManager__StaticShutdownMixedRealityCapture:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


