/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 074859a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetSpaceComponentStatusInternal(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  uint unaff_w23;
  int unaff_w26;
  int iVar10;
  
switchD_0748590c_default:
  do {
                    /* catch() { ... } // from try @ 07485a30 with catch @ 07485a3c */
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) goto LAB_07485a58;
    iVar10 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    iVar4 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_0921fba8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
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
      goto switchD_07485854_default;
    }
    if (iVar10 == 2) {
      if (unaff_x19 == (long *)0x0) {
LAB_07485a78:
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
            goto LAB_07485924;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485924:
      uVar8 = (*(code *)*puVar6)();
      if ((uVar8 & 1) == 0) {
        unaff_w23 = 0;
        goto LAB_07485a58;
      }
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07485990;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485990:
      uVar5 = (*(code *)*puVar6)();
      unaff_w23 = unaff_w23 | uVar5;
      goto switchD_0748590c_default;
    }
switchD_07485854_default:
  } while (unaff_w26 == 0);
  iVar10 = *unaff_x20;
  iVar2 = unaff_x20[1];
  iVar1 = unaff_x20[2];
  iVar3 = unaff_x20[3];
  iVar4 = unaff_x20[4];
  if (*(int *)(*(long *)PTR_DAT_0921fba8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  switch(unaff_w21) {
  case 0:
    break;
  case 1:
    iVar10 = iVar2;
    break;
  case 2:
    iVar10 = iVar1;
                    /* try { // try from 074859b0 to 07585a1b has its CatchHandler @ 074856a4 */
    break;
  case 3:
    iVar10 = iVar3;
    break;
  case 4:
    iVar10 = iVar4;
    break;
  default:
    goto switchD_0748590c_default;
  }
  if (iVar10 == 1) {
    if (unaff_x19 == (long *)0x0) goto LAB_07485a78;
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
                    /* try { // try from 07485a1c to 07585a2b has its CatchHandler @ 07485a2c */
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07485a24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485a24:
                    /* catch() { ... } // from try @ 07485998 with catch @ 07485a2c
                       catch() { ... } // from try @ 07485a1c with catch @ 07485a2c */
                    /* try { // try from 07485a30 to 07585a33 has its CatchHandler @ 07485a3c */
                    /* try { // try from 07485a34 to 07585a3f has its CatchHandler @ 074856a4 */
    uVar8 = (*(code *)*puVar6)();
    if ((uVar8 & 1) != 0) {
      unaff_w23 = 1;
LAB_07485a58:
      return unaff_w23 & 1;
    }
  }
  goto switchD_0748590c_default;
}


