/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 07485920
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetSpaceComponentStatus(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  uint unaff_w23;
  int unaff_w26;
  int iVar10;
  
code_r0x07485920:
  puVar7 = (undefined8 *)(param_1 + 0x138);
LAB_07485924:
  uVar6 = (*(code *)*puVar7)();
                    /* try { // try from 07485934 to 07585937 has its CatchHandler @ 07485974 */
  if ((uVar6 & 1) == 0) {
    unaff_w23 = 0;
LAB_07485a58:
    return unaff_w23 & 1;
  }
                    /* try { // try from 07485938 to 0758593b has its CatchHandler @ 07485970 */
  lVar8 = *unaff_x19;
                    /* try { // try from 0748593c to 0758593f has its CatchHandler @ 07485968 */
                    /* try { // try from 07485940 to 07585943 has its CatchHandler @ 07485964 */
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 07485944 to 07585947 has its CatchHandler @ 07485960 */
                    /* catch() { ... } // from try @ 074858c4 with catch @ 07485948
                       try { // try from 07485948 to 07585997 has its CatchHandler @ 074856a4 */
                    /* catch() { ... } // from try @ 07485810 with catch @ 0748594c */
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 07485824 with catch @ 07485950 */
                    /* catch() { ... } // from try @ 07485784 with catch @ 07485954 */
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 074857f4 with catch @ 07485958 */
                    /* catch() { ... } // from try @ 074857e0 with catch @ 0748595c */
                    /* catch() { ... } // from try @ 07485944 with catch @ 07485960 */
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
                    /* catch() { ... } // from try @ 07485788 with catch @ 07485980 */
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_07485990;
      }
                    /* catch() { ... } // from try @ 07485940 with catch @ 07485964 */
      uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 0748593c with catch @ 07485968 */
      piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 0748588c with catch @ 0748596c */
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 07485938 with catch @ 07485970 */
                    /* catch() { ... } // from try @ 07485934 with catch @ 07485974 */
                    /* catch() { ... } // from try @ 07485868 with catch @ 07485978 */
  puVar7 = (undefined8 *)FUN_03d8f370();
                    /* catch() { ... } // from try @ 074857a8 with catch @ 0748597c */
LAB_07485990:
                    /* try { // try from 07485998 to 075859af has its CatchHandler @ 07485a2c */
  uVar5 = (*(code *)*puVar7)();
  unaff_w23 = unaff_w23 | uVar5;
switchD_0748590c_default:
  do {
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
    if (iVar10 == 2) break;
switchD_07485854_default:
    if (unaff_w26 != 0) {
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
        goto switchD_0748590c_default;
      }
      if (iVar10 == 1) {
        if (unaff_x19 == (long *)0x0) goto LAB_07485a78;
        lVar8 = *unaff_x19;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_07485a24;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_03d8f370();
LAB_07485a24:
        uVar6 = (*(code *)*puVar7)();
        if ((uVar6 & 1) != 0) {
          unaff_w23 = 1;
          goto LAB_07485a58;
        }
      }
    }
  } while( true );
  if (unaff_x19 == (long *)0x0) {
LAB_07485a78:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  param_1 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
        param_1 = param_1 + (long)*piVar9 * 0x10;
        goto code_r0x07485920;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370();
  goto LAB_07485924;
}


