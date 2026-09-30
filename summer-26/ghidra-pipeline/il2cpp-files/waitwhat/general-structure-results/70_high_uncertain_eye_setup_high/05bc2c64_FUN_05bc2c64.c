/*
FUNCTION_NAME: FUN_05bc2c64
ENTRY_POINT: 05bc2c64
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float FUN_05bc2c64(long *param_1,long *param_2,undefined4 *param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0754eac7 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112248);
    FUN_03188a78(PTR_DAT_07112228);
    DAT_0754eac7 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (param_1 == (long *)0x0) goto LAB_05bc2ebc;
  lVar2 = *param_1;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112228) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_05bc2d18;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08(param_1,*(long *)PTR_DAT_07112228,4);
LAB_05bc2d18:
  lVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
  *param_3 = 0;
  uVar4 = FUN_05bc2ec0(param_1,param_2);
  fVar7 = 0.0;
  if ((uVar4 & 1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_05bc2ebc;
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112248) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto OVRPlugin__SetMultimodalHandsControllersSupported;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(param_2,*(long *)PTR_DAT_07112248,8);
OVRPlugin__SetMultimodalHandsControllersSupported:
    (*(code *)*puVar1)(&local_78,param_2,puVar1[1]);
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    if (lVar2 == 0) goto LAB_05bc2ebc;
    fVar6 = (float)FUN_05be39d4(lVar2,&local_60,param_4 & 1,0);
    if (0.0 < fVar6) {
      *param_3 = 1;
      fVar7 = fVar6;
    }
  }
  uVar4 = FUN_05bc2f70(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    return fVar7;
  }
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112248) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_05bc2e54;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(param_2,*(long *)PTR_DAT_07112248,9);
LAB_05bc2e54:
    (*(code *)*puVar1)(&local_78,param_2,puVar1[1]);
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    if (lVar2 != 0) {
      fVar6 = (float)FUN_05be3d74(lVar2,&local_60,param_4 & 1,0);
      if (fVar6 <= fVar7) {
        return fVar7;
      }
      *param_3 = 2;
      return fVar6;
    }
  }
LAB_05bc2ebc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


