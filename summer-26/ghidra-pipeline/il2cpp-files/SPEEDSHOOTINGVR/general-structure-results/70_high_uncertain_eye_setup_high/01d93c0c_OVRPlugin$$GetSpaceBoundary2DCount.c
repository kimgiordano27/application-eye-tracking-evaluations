/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2DCount
ENTRY_POINT: 01d93c0c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d94118) */

undefined8 OVRPlugin__GetSpaceBoundary2DCount(code *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
  while (uVar2 = (*param_1)(), (uVar2 & 1) != 0) {
    lVar7 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01d93c64;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348();
LAB_01d93c64:
    lVar7 = (*(code *)*puVar3)();
    if (lVar7 == 0) {
      thunk_FUN_010303a8(PTR_DAT_02359920);
      uVar4 = thunk_FUN_010400dc();
      uVar6 = thunk_FUN_010303a8(PTR_DAT_023599b8);
      FUN_01cc6734(uVar4,uVar6,0);
      uVar6 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar4,uVar6);
    }
    uVar4 = FUN_01cd0fe8(lVar7,0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534(uVar4,uVar4);
    }
    uVar2 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar2 & 1) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar8 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = lVar7;
        thunk_FUN_0106e12c(plVar5,lVar7);
      }
      else {
                    /* try { // try from 01d93cec to 01e93f57 has its CatchHandler @ 01d93cec
                       catch() { ... } // from try @ 01d93cec with catch @ 01d93cec
                       catch() { ... } // from try @ 01d94024 with catch @ 01d93cec
                       catch() { ... } // from try @ 01d940c4 with catch @ 01d93cec
                       catch() { ... } // from try @ 01d940cc with catch @ 01d93cec
                       catch() { ... } // from try @ 01d9417c with catch @ 01d93cec */
        FUN_017d3030();
      }
    }
    lVar7 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01d93c08;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348();
LAB_01d93c08:
    param_1 = (code *)*puVar3;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar7 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0234bef0) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01d93fbc;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348();
LAB_01d93fbc:
    (*(code *)*puVar3)();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar4 = FUN_017d49bc();
  return uVar4;
}


