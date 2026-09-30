/*
FUNCTION_NAME: OVRTask.TaskSource<__Il2CppFullySharedGenericType>$$SetException
ENTRY_POINT: 01fa16e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01fa1a14) */

void OVRTask_TaskSource<__Il2CppFullySharedGenericType>__SetException(void *param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  undefined1 *puVar6;
  long lVar7;
  void *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x22;
  long *unaff_x23;
  void *pvVar11;
  void *unaff_x24;
  size_t unaff_x25;
  long *plVar12;
  undefined1 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  memset(param_1,param_2,unaff_x25);
  puVar6 = &stack0x00000000 + -unaff_x19;
  *(undefined1 **)(unaff_x29 + -0x38) = puVar6;
  memset(puVar6,0,unaff_x25);
  puVar6 = puVar6 + -unaff_x19;
  memset(puVar6,0,unaff_x25);
  puVar1 = PTR_DAT_03cc0af8;
  lVar2 = *(long *)PTR_DAT_03cc0af8;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  plVar12 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (plVar12 == (long *)0x0) goto LAB_01fa19e0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar9 = *(undefined8 *)PTR_DAT_03cc9c30;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar9 = FUN_0277b678(uVar9,0);
  *(undefined1 *)(unaff_x29 + -0x14) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar9;
  FUN_027e0bd8(uVar9,unaff_x29 + -0x14,0);
  plVar10 = *(long **)(unaff_x22 + 0x38);
  pvVar11 = *(void **)(unaff_x29 + -0x28);
  if (-1 < *(int *)(*plVar10 + 0x28)) {
    pvVar11 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x24,pvVar11,unaff_x25);
  uVar3 = FUN_01ab6bfc(*plVar10);
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -0x18) = 0;
    if (unaff_x23 == (long *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*unaff_x23 + 0x168))();
    }
    lVar7 = *plVar12;
    lVar8 = *(long *)PTR_DAT_03cc9c48;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar4 = *(long *)PTR_DAT_03cc4bb8;
    if (lVar2 != 0) {
      lVar4 = lVar2;
    }
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar2 = lVar7 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_01fa1998;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    lVar2 = FUN_01a472ec(plVar12);
LAB_01fa1998:
    lVar2 = thunk_FUN_01a41d84(*(undefined8 *)(lVar2 + 8),lVar8);
    (**(code **)(lVar2 + 8))
              (plVar12,0,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x18,lVar4,lVar2);
  }
  else {
    pvVar11 = *(void **)(unaff_x29 + -0x28);
    if (-1 < *(int *)(**(long **)(unaff_x22 + 0x38) + 0x28)) {
      pvVar11 = (void *)(unaff_x29 + -0x10);
    }
    if (unaff_x23 == (long *)0x0) {
      memcpy(unaff_x20,pvVar11,unaff_x25);
      memcpy(unaff_x27,unaff_x20,unaff_x25);
      pvVar11 = *(void **)(unaff_x29 + -0x38);
LAB_01fa186c:
      memcpy(puVar6,unaff_x27,unaff_x25);
      lVar2 = *(long *)PTR_DAT_03cc4bb8;
      unaff_x27 = puVar6;
    }
    else {
      memcpy(unaff_x28,pvVar11,unaff_x25);
      lVar2 = (**(code **)(*unaff_x23 + 0x168))();
      memcpy(unaff_x27,unaff_x28,unaff_x25);
      pvVar11 = *(void **)(unaff_x29 + -0x38);
      if (lVar2 == 0) goto LAB_01fa186c;
    }
    memcpy(pvVar11,unaff_x27,unaff_x25);
    lVar4 = *plVar12;
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_01fa1958;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    lVar4 = FUN_01a472ec(plVar12);
LAB_01fa1958:
    lVar4 = thunk_FUN_01a41d84(*(undefined8 *)(lVar4 + 8),lVar7);
    (**(code **)(lVar4 + 8))(plVar12,0,*(undefined8 *)(unaff_x29 + -0x30),pvVar11,lVar2,lVar4);
  }
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x40),0);
  }
LAB_01fa19e0:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


