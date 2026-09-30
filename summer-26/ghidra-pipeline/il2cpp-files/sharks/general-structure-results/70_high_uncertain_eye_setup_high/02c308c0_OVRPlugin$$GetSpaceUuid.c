/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 02c308c0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceUuid
               (long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long local_78;
  undefined1 auStack_70 [16];
  
  if ((DAT_03a25fdb & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380be28);
    FUN_017fc350(PTR_DAT_037f8c48);
    FUN_017fc350(PTR_DAT_0380be30);
    FUN_017fc350(PTR_DAT_0380be38);
    FUN_017fc350(PTR_DAT_0380be40);
    FUN_017fc350(PTR_DAT_0380be48);
    FUN_017fc350(PTR_DAT_0380be50);
    DAT_03a25fdb = 1;
  }
  local_78 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  iVar5 = *(int *)(param_2 + 0x20);
  thunk_FUN_0181f594();
  if (iVar5 < 2) {
    if (*(char *)(param_2 + 0x28) != '\0') goto LAB_02c30998;
    iVar5 = FUN_02c145a0(0);
    puVar4 = PTR_DAT_037f8c48;
    lVar9 = *(long *)PTR_DAT_037f8c48;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01843fdc(lVar9);
      lVar9 = *(long *)puVar4;
    }
    iVar1 = *(int *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (param_5 == 0) {
      lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380be28);
      FUN_02c33348(lVar9,param_3,param_4,param_6,param_2);
    }
    else {
      lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380be50);
      FUN_02c33348(lVar9,param_3,param_4,param_6,param_2);
      *(long *)(lVar9 + 0x30) = param_5;
      thunk_FUN_0188fd20((long *)(lVar9 + 0x30),param_5);
    }
    lVar11 = *(long *)(param_2 + 0x18);
    thunk_FUN_0181f594();
    if (lVar11 == 0) {
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar11 = *(long *)puVar4;
      }
      lVar11 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380be30,
                            *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x10));
      thunk_FUN_0181f594();
      lVar6 = FUN_01818258((long *)(param_2 + 0x18),lVar11,0);
      if (lVar6 != 0) {
        lVar11 = lVar6;
      }
      if (lVar11 == 0) goto LAB_02c30bac;
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar5 / iVar1;
    }
    uVar2 = iVar5 - iVar3 * iVar1;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_02c30bb0;
    plVar10 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
    lVar6 = *plVar10;
    thunk_FUN_0181f594();
    if (lVar6 == 0) {
      uVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380be48);
      FUN_01dbe1ac(uVar7,4,*(undefined8 *)PTR_DAT_0380be40);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
LAB_02c30bb0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      FUN_01818258(plVar10,uVar7,0);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_02c30bb0;
      lVar6 = *plVar10;
      if (lVar6 == 0) goto LAB_02c30bac;
    }
    auVar12 = FUN_01dbe250(lVar6,lVar9,*(undefined8 *)PTR_DAT_0380be38);
    local_78 = lVar9;
    thunk_FUN_0188fd20(&local_78,lVar9);
    auStack_70 = auVar12;
    thunk_FUN_0188fd20(auStack_70,0);
    iVar5 = *(int *)(param_2 + 0x20);
    thunk_FUN_0181f594();
    if (iVar5 < 2) {
LAB_02c30b98:
      *(undefined1 (*) [16])(param_1 + 1) = auStack_70;
      *param_1 = local_78;
      return;
    }
    uVar8 = FUN_02c32850(&local_78);
    if ((uVar8 & 1) == 0) goto LAB_02c30b98;
  }
  if (param_3 == 0) {
LAB_02c30bac:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  (**(code **)(param_3 + 0x18))
            (*(undefined8 *)(param_3 + 0x40),param_4,*(undefined8 *)(param_3 + 0x28));
LAB_02c30998:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


