/*
FUNCTION_NAME: FUN_075b20bc
ENTRY_POINT: 075b20bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x075b22f4) */
/* WARNING: Removing unreachable block (ram,0x075b2304) */

void FUN_075b20bc(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_0826e0e2 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(OVRManager_SystemHeadsetType_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8f4a8);
    DAT_0826e0e2 = 1;
  }
  local_74[0] = '\0';
  iVar1 = *(int *)(param_1 + 0x28);
  lVar4 = FUN_062af240(0);
  if (lVar4 == 0) {
LAB_075b22f0:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar3 = FUN_062b0bcc(lVar4,0);
  if (iVar1 == iVar3) {
    if (param_2 == 0) goto LAB_075b22f0;
    (**(code **)(param_2 + 0x18))
              (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    plVar5 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8f4a8);
    FUN_062a5e98(plVar5,0,0);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    local_74[0] = '\0';
    FUN_062a77c0(uVar11,local_74,0);
    lVar4 = *(long *)(param_1 + 0x18);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    FUN_075b2424(&local_90,param_2,param_3,plVar5);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_60 = local_80;
    lVar7 = *(long *)(lVar4 + 0x10);
    lVar9 = *(long *)OVRManager_SystemHeadsetType_TypeInfo;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
      lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
      *(undefined8 *)(lVar7 + 0x30) = local_80;
      *(undefined8 *)(lVar7 + 0x28) = uStack_88;
      *(undefined8 *)(lVar7 + 0x20) = local_90;
      thunk_FUN_037aeb94(lVar7 + 0x20,0);
    }
    else {
      uStack_48 = uStack_88;
      local_50 = local_90;
      local_40 = local_80;
      FUN_04b9a80c(lVar4,&local_50,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    if (local_74[0] != '\0') {
      thunk_FUN_03749964(uVar11,0);
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_075b22cc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d896f8,0);
LAB_075b22cc:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


