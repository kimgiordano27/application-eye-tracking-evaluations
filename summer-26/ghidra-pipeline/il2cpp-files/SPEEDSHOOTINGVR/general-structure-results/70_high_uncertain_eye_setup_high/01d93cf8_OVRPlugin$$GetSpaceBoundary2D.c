/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 01d93cf8
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

undefined8 OVRPlugin__GetSpaceBoundary2D(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    FUN_017d3030();
LAB_01d93bbc:
    do {
      lVar6 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01d93c08;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348();
LAB_01d93c08:
      uVar8 = (*(code *)*puVar2)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_01d93fc8;
        lVar6 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_01d93d48;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_01d93d30;
      }
      lVar6 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01d93c64;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348();
LAB_01d93c64:
      lVar6 = (*(code *)*puVar2)();
      if (lVar6 == 0) {
        thunk_FUN_010303a8(PTR_DAT_02359920);
        uVar3 = thunk_FUN_010400dc();
        uVar5 = thunk_FUN_010303a8(PTR_DAT_023599b8);
        FUN_01cc6734(uVar3,uVar5,0);
        uVar5 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar3,uVar5);
      }
      uVar3 = FUN_01cd0fe8(lVar6,0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534(uVar3,uVar3);
      }
      uVar8 = (**(code **)(*unaff_x19 + 0x288))();
    } while ((uVar8 & 1) == 0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
  } while (*(uint *)(lVar7 + 0x18) <= uVar1);
  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
  plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
  *plVar4 = lVar6;
  thunk_FUN_0106e12c(plVar4,lVar6);
  goto LAB_01d93bbc;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_01d93d30:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_01d93fbc;
    }
  }
LAB_01d93d48:
  puVar2 = (undefined8 *)FUN_0103c348();
LAB_01d93fbc:
  (*(code *)*puVar2)();
LAB_01d93fc8:
  if (unaff_x20 != 0) {
    uVar3 = FUN_017d49bc();
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


