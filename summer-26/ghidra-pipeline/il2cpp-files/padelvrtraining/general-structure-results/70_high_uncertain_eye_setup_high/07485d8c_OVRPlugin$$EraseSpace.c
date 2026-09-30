/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 07485d8c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__EraseSpace(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 in_ZR;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  int iVar10;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
code_r0x07485d8c:
                    /* catch() { ... } // from try @ 07485c5c with catch @ 07485d8c */
  if ((bool)in_ZR) {
                    /* catch() { ... } // from try @ 07485bb8 with catch @ 07485d90 */
    lVar7 = *unaff_x19;
                    /* catch() { ... } // from try @ 07485c2c with catch @ 07485d94 */
                    /* catch() { ... } // from try @ 07485c18 with catch @ 07485d98 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch() { ... } // from try @ 07485d84 with catch @ 07485d9c */
                    /* catch() { ... } // from try @ 07485d80 with catch @ 07485da0 */
                    /* catch() { ... } // from try @ 07485d7c with catch @ 07485da4 */
    if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 07485cfc with catch @ 07485da8 */
                    /* catch() { ... } // from try @ 07485be0 with catch @ 07485dac */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 07485bbc with catch @ 07485db0 */
                    /* catch() { ... } // from try @ 07485b90 with catch @ 07485db4 */
                    /* catch() { ... } // from try @ 07485ccc with catch @ 07485db8 */
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
                    /* try { // try from 07485ddc to 07585df3 has its CatchHandler @ 07485e70 */
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07485de8;
        }
                    /* catch() { ... } // from try @ 07485d78 with catch @ 07485dbc */
        uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 07485d74 with catch @ 07485dc0 */
        piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 07485ca8 with catch @ 07485dc4 */
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485de8:
                    /* try { // try from 07485df4 to 07585e5f has its CatchHandler @ 07485abc */
    uVar8 = (*(code *)*puVar6)();
    if ((uVar8 & 1) != 0) {
      iVar10 = unaff_x20[5];
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uStack0000000000000008 = 1;
      if ((in_stack_00000000._4_1_ & iVar10 == 1) != 0) {
LAB_07485e4c:
        return uStack0000000000000008 & 1;
      }
    }
  }
switchD_07485b80_default:
  do {
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) {
      uStack0000000000000008 = uStack0000000000000008 & (uStack000000000000000c ^ 1);
      goto LAB_07485e4c;
    }
    iVar10 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    iVar4 = unaff_x20[4];
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    switch(unaff_w21) {
    case 1:
      goto joined_r0x07485b94;
    case 2:
      iVar2 = iVar1;
joined_r0x07485b94:
      if (iVar2 != 0) goto LAB_07485ba4;
      goto switchD_07485b80_default;
    case 3:
      iVar10 = iVar3;
    case 0:
      break;
    case 4:
      iVar10 = iVar4;
      break;
    default:
      goto switchD_07485b80_default;
    }
    if (iVar10 == 0) goto switchD_07485b80_default;
LAB_07485ba4:
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07485c08;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485c08:
    uVar5 = (*(code *)*puVar6)();
    iVar10 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    iVar4 = unaff_x20[4];
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03db619c(*unaff_x29);
    }
    uStack000000000000000c = uStack000000000000000c | uVar5;
    switch(unaff_w21) {
    case 0:
      break;
    case 1:
      iVar10 = iVar2;
      break;
    case 2:
      iVar10 = iVar1;
      break;
    case 3:
      iVar10 = iVar3;
      break;
    case 4:
      iVar10 = iVar4;
      break;
    default:
      goto switchD_07485c68_default;
    }
    if (iVar10 == 2) {
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07485d30;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485d30:
      uVar8 = (*(code *)*puVar6)();
      if ((uVar8 & 1) != 0) {
        iVar10 = unaff_x20[5];
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uStack0000000000000008 = 1;
        if (iVar10 == 1) goto LAB_07485e4c;
      }
      goto switchD_07485b80_default;
    }
switchD_07485c68_default:
    iVar10 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    iVar4 = unaff_x20[4];
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    switch(unaff_w21) {
    case 0:
      goto switchD_07485d14_caseD_0;
    case 1:
      iVar10 = iVar2;
      goto switchD_07485d14_caseD_0;
    case 2:
      iVar10 = iVar1;
      goto switchD_07485d14_caseD_0;
    case 3:
      iVar10 = iVar3;
      goto switchD_07485d14_caseD_0;
    case 4:
      iVar10 = iVar4;
      goto switchD_07485d14_caseD_0;
    }
  } while( true );
switchD_07485d14_caseD_0:
  in_ZR = iVar10 == 1;
  goto code_r0x07485d8c;
}


