/*
FUNCTION_NAME: FUN_076d9240
ENTRY_POINT: 076d9240
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_076d9240(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_0954826a & 1) == 0) {
                    /* try { // try from 076d9258 to 077d9383 has its CatchHandler @ 076d9258
                       catch() { ... } // from try @ 076d9258 with catch @ 076d9258
                       catch() { ... } // from try @ 076d9518 with catch @ 076d9258
                       catch() { ... } // from try @ 076d9574 with catch @ 076d9258
                       catch() { ... } // from try @ 076d9584 with catch @ 076d9258
                       catch() { ... } // from try @ 076d95d4 with catch @ 076d9258
                       catch() { ... } // from try @ 076d968c with catch @ 076d9258 */
    FUN_0403162c(PTR_DAT_08f8e6c8);
    FUN_0403162c(PTR_DAT_08fae0f0);
    DAT_0954826a = 1;
  }
  plVar6 = *(long **)(param_1 + 0x80);
  if (plVar6 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fae0f0) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_076d92d4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08fae0f0,0);
LAB_076d92d4:
  plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
  if (plVar6 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f8e6c8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_076d9340;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f8e6c8,6);
LAB_076d9340:
  iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar9 = *(undefined4 *)(param_1 + 0x68);
      uVar10 = *(undefined4 *)(param_1 + 0x6c);
      lVar3 = *plVar6;
      uVar7 = *(undefined4 *)(param_1 + 0x60);
      uVar8 = *(undefined4 *)(param_1 + 100);
      goto LAB_076d93cc;
    }
    if (iVar1 == 1) {
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar9 = *(undefined4 *)(param_1 + 0x58);
      uVar10 = *(undefined4 *)(param_1 + 0x5c);
      lVar3 = *plVar6;
      uVar7 = *(undefined4 *)(param_1 + 0x50);
      uVar8 = *(undefined4 *)(param_1 + 0x54);
      goto LAB_076d93cc;
    }
  }
  else {
    if (iVar1 == 3) {
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar9 = *(undefined4 *)(param_1 + 0x78);
      uVar10 = *(undefined4 *)(param_1 + 0x7c);
      lVar3 = *plVar6;
      uVar7 = *(undefined4 *)(param_1 + 0x70);
      uVar8 = *(undefined4 *)(param_1 + 0x74);
    }
    else {
      if (iVar1 != 2) goto LAB_076d93d8;
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar9 = *(undefined4 *)(param_1 + 0x48);
      uVar10 = *(undefined4 *)(param_1 + 0x4c);
      lVar3 = *plVar6;
      uVar7 = *(undefined4 *)(param_1 + 0x40);
      uVar8 = *(undefined4 *)(param_1 + 0x44);
    }
LAB_076d93cc:
    (**(code **)(lVar3 + 0x2a8))(uVar7,uVar8,uVar9,uVar10,plVar6,*(undefined8 *)(lVar3 + 0x2b0));
  }
LAB_076d93d8:
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = FUN_08584ab0(*(long *)(param_1 + 0x20),0);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (iVar1 = FUN_0859a678(*(long *)(param_1 + 0x20),0), lVar3 != 0)) {
      FUN_08588638(lVar3,0 < iVar1,0);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar3 = FUN_08584ab0(*(long *)(param_1 + 0x28),0), lVar3 != 0)) {
        FUN_08588638(lVar3,*(char *)(param_1 + 0x88) == '\0',0);
        return;
      }
    }
  }
OVRPlugin_ControllerState6___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


