/*
FUNCTION_NAME: RootMotion.FinalIK.IKConstraintBend$$GetDir
ENTRY_POINT: 029919c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02991f34) */
/* WARNING: Removing unreachable block (ram,0x02991f0c) */
/* WARNING: Removing unreachable block (ram,0x02991ecc) */
/* WARNING: Removing unreachable block (ram,0x02991be0) */
/* WARNING: Removing unreachable block (ram,0x02991bec) */
/* WARNING: Removing unreachable block (ram,0x02991f70) */
/* WARNING: Removing unreachable block (ram,0x02991bf4) */
/* WARNING: Removing unreachable block (ram,0x02991c00) */
/* WARNING: Removing unreachable block (ram,0x02991fb4) */
/* WARNING: Removing unreachable block (ram,0x02991c08) */
/* WARNING: Removing unreachable block (ram,0x02991c10) */
/* WARNING: Removing unreachable block (ram,0x02991fc0) */
/* WARNING: Removing unreachable block (ram,0x02991c18) */
/* WARNING: Removing unreachable block (ram,0x02991fc4) */
/* WARNING: Removing unreachable block (ram,0x02991c28) */
/* WARNING: Removing unreachable block (ram,0x02991c3c) */
/* WARNING: Removing unreachable block (ram,0x02991fd8) */
/* WARNING: Removing unreachable block (ram,0x02991c58) */
/* WARNING: Removing unreachable block (ram,0x02991c68) */
/* WARNING: Removing unreachable block (ram,0x02991fe8) */
/* WARNING: Removing unreachable block (ram,0x02991c70) */
/* WARNING: Removing unreachable block (ram,0x02991fec) */
/* WARNING: Removing unreachable block (ram,0x02991c9c) */
/* WARNING: Removing unreachable block (ram,0x02991ca8) */
/* WARNING: Removing unreachable block (ram,0x02991ff0) */
/* WARNING: Removing unreachable block (ram,0x02991cb0) */
/* WARNING: Removing unreachable block (ram,0x02991ff4) */
/* WARNING: Removing unreachable block (ram,0x02991cb4) */
/* WARNING: Removing unreachable block (ram,0x02991ff8) */
/* WARNING: Removing unreachable block (ram,0x02991cbc) */
/* WARNING: Removing unreachable block (ram,0x02991cc8) */
/* WARNING: Removing unreachable block (ram,0x02991ce4) */
/* WARNING: Removing unreachable block (ram,0x02991cec) */
/* WARNING: Removing unreachable block (ram,0x02991d0c) */
/* WARNING: Removing unreachable block (ram,0x02991d10) */
/* WARNING: Removing unreachable block (ram,0x02991df0) */
/* WARNING: Removing unreachable block (ram,0x02991e00) */
/* WARNING: Removing unreachable block (ram,0x02991e0c) */
/* WARNING: Removing unreachable block (ram,0x02991e10) */
/* WARNING: Removing unreachable block (ram,0x02991e1c) */
/* WARNING: Removing unreachable block (ram,0x02991e24) */
/* WARNING: Removing unreachable block (ram,0x02991f74) */
/* WARNING: Removing unreachable block (ram,0x02991e2c) */
/* WARNING: Removing unreachable block (ram,0x02991e38) */
/* WARNING: Removing unreachable block (ram,0x02991fb8) */
/* WARNING: Removing unreachable block (ram,0x02991e40) */
/* WARNING: Removing unreachable block (ram,0x02991fbc) */
/* WARNING: Removing unreachable block (ram,0x02991e48) */
/* WARNING: Removing unreachable block (ram,0x02991e60) */
/* WARNING: Removing unreachable block (ram,0x02991d1c) */
/* WARNING: Removing unreachable block (ram,0x02991ec8) */
/* WARNING: Removing unreachable block (ram,0x02991d24) */
/* WARNING: Removing unreachable block (ram,0x02991dac) */
/* WARNING: Removing unreachable block (ram,0x02991d44) */
/* WARNING: Removing unreachable block (ram,0x02991db4) */
/* WARNING: Removing unreachable block (ram,0x02991d4c) */
/* WARNING: Removing unreachable block (ram,0x02991d8c) */
/* WARNING: Removing unreachable block (ram,0x02991d98) */
/* WARNING: Removing unreachable block (ram,0x02991d9c) */
/* WARNING: Removing unreachable block (ram,0x02991da8) */
/* WARNING: Removing unreachable block (ram,0x02991ec4) */
/* WARNING: Removing unreachable block (ram,0x02991e18) */
/* WARNING: Removing unreachable block (ram,0x02991fac) */

undefined4 RootMotion_FinalIK_IKConstraintBend__GetDir(long *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  long *unaff_x23;
  long *plVar9;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x174);
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027401e4(uVar1,0x10,0);
  FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07b08);
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cca060) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02991a60;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01a472ec();
LAB_02991a60:
  (*(code *)*puVar2)();
  lVar6 = unaff_x20[2];
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (2 < *(byte *)(lVar6 + 0x40)) {
    plVar9 = *(long **)(lVar6 + 0x48);
    in_stack_00000028 = (**(code **)(*unaff_x20 + 0x178))();
    uVar3 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000028);
    lVar6 = FUN_0298d23c();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000010 = *(undefined4 *)(lVar6 + 0x70);
    uVar4 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000010);
    if (unaff_x20[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20[0x25] + 0x18);
    uVar5 = thunk_FUN_01a89a98(*unaff_x28,(long)&stack0x00000008 + 4);
    uVar3 = FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07b10,uVar3,uVar4,uVar5,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cca060) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02991b74;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03cca060,0);
LAB_02991b74:
    (*(code *)*puVar2)(plVar9,3,uVar3,puVar2[1]);
  }
  *(undefined1 *)(unaff_x20 + 8) = 6;
  FUN_0298e1e4();
  (**(code **)(*unaff_x20 + 0x1c8))();
  FUN_02990210();
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
  }
  if (in_stack_00000020._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return 0;
}


