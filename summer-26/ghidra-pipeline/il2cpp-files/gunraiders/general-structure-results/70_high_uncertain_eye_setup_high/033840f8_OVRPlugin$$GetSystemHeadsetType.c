/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 033840f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemHeadsetType(void)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined2 *puVar7;
  uint uVar8;
  
  if (unaff_x19 == 0) {
LAB_0338429c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar3 = FUN_0314e438();
  puVar1 = PTR_DAT_042303d0;
  if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042303d0);
  }
  uVar4 = FUN_0324ca78(uVar3,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = FUN_03158e74();
  if (lVar5 == 0) goto LAB_0338429c;
  if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
LAB_0338427c:
    FUN_03151314(0,lVar5,0);
    return;
  }
  uVar4 = 0;
  uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
  puVar7 = (undefined2 *)(lVar5 + 0x20);
LAB_03384168:
  if (uVar4 == 1) {
    if ((uVar6 & 0xfffffffe) == 0) goto LAB_03384298;
    uVar2 = *(undefined2 *)(lVar5 + 0x22);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_0324ca78(uVar2,0);
    if ((uVar6 & 1) == 0) goto LAB_0338427c;
    uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
  }
  if ((uVar4 != 0) && ((int)(uVar4 + 1) < (int)uVar6)) {
    if (uVar6 <= uVar4 + 1) goto LAB_03384298;
    uVar2 = puVar7[1];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_0324ca78(uVar2,0);
    if ((uVar6 & 1) == 0) {
      uVar8 = (uint)uVar4;
      if (*(uint *)(lVar5 + 0x18) <= uVar8 + 1) goto LAB_03384298;
      uVar2 = puVar7[1];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar4 = FUN_0324dc50(uVar2,0);
      if ((uVar4 & 1) == 0) goto LAB_0338427c;
      if ((uVar8 < *(uint *)(lVar5 + 0x18)) &&
         (uVar2 = FUN_033842a0(*puVar7), uVar8 < *(uint *)(lVar5 + 0x18))) {
        *puVar7 = uVar2;
        goto LAB_0338427c;
      }
      goto LAB_03384298;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < uVar6) {
    uVar2 = FUN_033842a0(*puVar7);
    uVar8 = *(uint *)(lVar5 + 0x18);
    uVar6 = (ulong)uVar8;
    if (uVar6 <= uVar4) goto LAB_03384298;
    uVar4 = uVar4 + 1;
    *puVar7 = uVar2;
    puVar7 = puVar7 + 1;
    if ((long)(int)uVar8 <= (long)uVar4) goto LAB_0338427c;
    goto LAB_03384168;
  }
LAB_03384298:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


