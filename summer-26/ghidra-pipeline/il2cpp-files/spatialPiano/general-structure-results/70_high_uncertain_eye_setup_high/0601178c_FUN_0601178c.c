/*
FUNCTION_NAME: FUN_0601178c
ENTRY_POINT: 0601178c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0601178c(undefined4 param_1,float param_2,undefined1 param_3 [16],undefined4 param_4,
                 long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  long local_18;
  
  if ((DAT_06bc52fe & 1) == 0) {
    FUN_02f08768(Method_OVRManager_<>c_<_cctor>b__519_0__);
    DAT_06bc52fe = 1;
  }
  lVar4 = *(long *)(param_5 + 0x20);
  local_18 = 0;
  if (lVar4 != 0) {
    fVar6 = (float)FUN_060a37f0(lVar4,0);
    fVar7 = (float)FUN_060a5d90(param_1,lVar4,0);
    if ((*(long *)(param_5 + 0x20) != 0) &&
       (fVar12 = fVar6, fVar11 = param_2, lVar4 = FUN_060ed7ac(*(long *)(param_5 + 0x20),0),
       lVar4 != 0)) {
      fVar8 = (float)FUN_060ffbe4(lVar4,0);
      if (DAT_06bb42bf == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bb42bf = '\x01';
      }
      fVar8 = fVar7 - fVar8;
      fVar11 = param_2 - fVar11;
      fVar12 = fVar6 - fVar12;
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar9 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar11 * fVar11);
      if (fVar9 <= DAT_011b06e4) {
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c1 = '\x01';
        }
        pfVar3 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
        fVar8 = *pfVar3;
        fVar11 = pfVar3[1];
        fVar12 = pfVar3[2];
      }
      else {
        fVar8 = fVar8 / fVar9;
        fVar11 = fVar11 / fVar9;
        fVar12 = fVar12 / fVar9;
      }
      lVar5 = *(long *)(param_5 + 0x48);
      lVar4 = FUN_060ed7ac(param_5,0);
      if ((lVar4 != 0) && (uVar1 = thunk_FUN_0610061c(lVar4,0), lVar5 != 0)) {
        uVar2 = FUN_04480188(lVar5,uVar1,&local_18,
                             *(undefined8 *)Method_OVRManager_<>c_<_cctor>b__519_0__);
        if ((uVar2 & 1) != 0) {
          if (local_18 == 0) goto LAB_060119f4;
          fVar7 = (float)FUN_06101764(fVar7,param_2,fVar6,local_18,0);
        }
        uVar1 = FUN_060ed7ac(param_5,0);
        uVar10 = FUN_060df954(fVar8,fVar11,fVar12,0);
        local_70 = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        local_58 = 0;
        local_60 = 0;
        uStack_5c = 0;
        FUN_060fda18(fVar7,param_2,fVar6,uVar10,fVar11,fVar12,param_4,&local_70,0);
        uStack_7c = CONCAT44(local_58,uStack_5c);
        uStack_88 = uStack_68;
        local_90 = local_70;
        uStack_84 = uStack_64;
        uStack_80 = local_60;
        FUN_05efac28(uVar1,&local_90,0);
        return;
      }
    }
  }
LAB_060119f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


