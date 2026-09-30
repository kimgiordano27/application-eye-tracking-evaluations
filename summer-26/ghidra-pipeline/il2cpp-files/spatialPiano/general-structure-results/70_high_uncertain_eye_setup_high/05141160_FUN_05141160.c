/*
FUNCTION_NAME: FUN_05141160
ENTRY_POINT: 05141160
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05141344) */
/* WARNING: Removing unreachable block (ram,0x0514155c) */
/* WARNING: Removing unreachable block (ram,0x05141428) */
/* WARNING: Removing unreachable block (ram,0x051415ac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_05141160(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 uVar13;
  char local_64 [4];
  long *local_60;
  char local_54;
  
  puVar1 = System_Action<InputAction_CallbackContext>_TypeInfo;
  if ((DAT_06bb9fec & 1) == 0) {
    FUN_02f08768(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_02f08768(System_Action<InputAction_CallbackContext>_TypeInfo);
    DAT_06bb9fec = 1;
  }
  lVar6 = *(long *)puVar1;
  local_54 = '\0';
  local_60 = (long *)0x0;
  local_64[0] = '\0';
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  iVar4 = thunk_FUN_02f3b768(0);
  if (lVar6 == 0) {
LAB_051415a8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_0514027c(lVar6);
  local_60 = (long *)0x0;
  local_54 = '\x01';
  uVar7 = FUN_05140154(lVar6);
  puVar2 = System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
  do {
    iVar5 = thunk_FUN_02f3b768(0);
    if (0x1d < iVar5 - iVar4) {
LAB_051413f4:
      uVar13 = 1;
      goto LAB_05141564;
    }
    local_64[0] = '\0';
    if (lVar6 == 0) {
LAB_05141420:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05140ca4(lVar6,uVar7,&local_60,local_64);
    if (local_60 == (long *)0x0) {
      uVar13 = 1;
      local_54 = local_64[0];
      goto LAB_05141564;
    }
    if (lVar6 == 0) goto LAB_05141420;
    FUN_051401dc();
    if (local_60 == (long *)0x0) goto LAB_051413f4;
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar1;
    }
    plVar3 = local_60;
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 5) == '\0') {
      if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *local_60;
      lVar8 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0514139c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(local_60,lVar8,0);
LAB_0514139c:
      (*(code *)*puVar9)(plVar3,puVar9[1]);
      local_60 = (long *)0x0;
    }
    else {
      thunk_FUN_02f585b0(1,0);
      plVar3 = local_60;
      if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *local_60;
      lVar8 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05141308;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(local_60,lVar8,0);
LAB_05141308:
      (*(code *)*puVar9)(plVar3,puVar9[1]);
      local_60 = (long *)0x0;
      thunk_FUN_02f585b0(0,0);
    }
    uVar11 = thunk_FUN_02f2dec8(0);
  } while ((uVar11 & 1) != 0);
  uVar13 = 0;
LAB_05141564:
  if (local_54 != '\0') {
    if (lVar6 == 0) goto LAB_051415a8;
    FUN_051401dc();
  }
  return uVar13;
}


