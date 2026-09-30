/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_session
ENTRY_POINT: 085a3264
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x085a3424) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_session
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *in_stack_00000018;
  
  puVar2 = (undefined8 *)FUN_040b1e00();
  (*(code *)*puVar2)();
  puVar1 = PTR_DAT_0932fee0;
  lVar3 = *(long *)PTR_DAT_0932fee0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar2[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932fec0);
    FUN_06ac88dc(lVar7,uVar8,*(undefined8 *)PTR_DAT_0932fed8,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar7;
    thunk_FUN_040ec700(plVar4,lVar7);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *in_stack_00000018;
  lVar9 = *(long *)PTR_DAT_0932fec8;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto FUN_085a3370;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar3 = FUN_040b1e00(in_stack_00000018);
FUN_085a3370:
  lVar3 = thunk_FUN_04096bb4(*(undefined8 *)(lVar3 + 8),lVar9);
  (**(code **)(lVar3 + 8))(in_stack_00000018,lVar7,lVar3);
  if (in_stack_00000018 != (long *)0x0) {
    lVar3 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_085a33f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085a33f4:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


