/*
FUNCTION_NAME: OVRTask.TaskSource<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 01fa1724
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

void OVRTask_TaskSource<__Il2CppFullySharedGenericType>___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  void *unaff_x19;
  long lVar6;
  void *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x22;
  long *unaff_x23;
  void *pvVar10;
  void *unaff_x24;
  size_t unaff_x25;
  long *plVar11;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  puVar1 = PTR_DAT_03cc0af8;
  lVar2 = *(long *)PTR_DAT_03cc0af8;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  plVar11 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (plVar11 == (long *)0x0) goto LAB_01fa19e0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = *(undefined8 *)PTR_DAT_03cc9c30;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_0277b678(uVar8,0);
  *(undefined1 *)(unaff_x29 + -0x14) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar8;
  FUN_027e0bd8(uVar8,unaff_x29 + -0x14,0);
  plVar9 = *(long **)(unaff_x22 + 0x38);
  pvVar10 = *(void **)(unaff_x29 + -0x28);
  if (-1 < *(int *)(*plVar9 + 0x28)) {
    pvVar10 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x24,pvVar10,unaff_x25);
  uVar3 = FUN_01ab6bfc(*plVar9);
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -0x18) = 0;
    if (unaff_x23 == (long *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*unaff_x23 + 0x168))();
    }
    lVar6 = *plVar11;
    lVar7 = *(long *)PTR_DAT_03cc9c48;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar4 = *(long *)PTR_DAT_03cc4bb8;
    if (lVar2 != 0) {
      lVar4 = lVar2;
    }
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar2 = lVar6 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_01fa1998;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    lVar2 = FUN_01a472ec(plVar11);
LAB_01fa1998:
    lVar2 = thunk_FUN_01a41d84(*(undefined8 *)(lVar2 + 8),lVar7);
    (**(code **)(lVar2 + 8))
              (plVar11,0,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x18,lVar4,lVar2);
  }
  else {
    pvVar10 = *(void **)(unaff_x29 + -0x28);
    if (-1 < *(int *)(**(long **)(unaff_x22 + 0x38) + 0x28)) {
      pvVar10 = (void *)(unaff_x29 + -0x10);
    }
    if (unaff_x23 == (long *)0x0) {
      memcpy(unaff_x20,pvVar10,unaff_x25);
      memcpy(unaff_x27,unaff_x20,unaff_x25);
      pvVar10 = *(void **)(unaff_x29 + -0x38);
LAB_01fa186c:
      memcpy(unaff_x19,unaff_x27,unaff_x25);
      lVar2 = *(long *)PTR_DAT_03cc4bb8;
      unaff_x27 = unaff_x19;
    }
    else {
      memcpy(unaff_x28,pvVar10,unaff_x25);
      lVar2 = (**(code **)(*unaff_x23 + 0x168))();
      memcpy(unaff_x27,unaff_x28,unaff_x25);
      pvVar10 = *(void **)(unaff_x29 + -0x38);
      if (lVar2 == 0) goto LAB_01fa186c;
    }
    memcpy(pvVar10,unaff_x27,unaff_x25);
    lVar4 = *plVar11;
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
          goto LAB_01fa1958;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    lVar4 = FUN_01a472ec(plVar11);
LAB_01fa1958:
    lVar4 = thunk_FUN_01a41d84(*(undefined8 *)(lVar4 + 8),lVar6);
    (**(code **)(lVar4 + 8))(plVar11,0,*(undefined8 *)(unaff_x29 + -0x30),pvVar10,lVar2,lVar4);
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


