/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 07485800
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


uint OVRPlugin__SetSpaceComponentStatus(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool in_ZR;
  uint uVar5;
  undefined8 *puVar6;
  byte in_w8;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = 0;
  iVar10 = 0;
  do {
                    /* try { // try from 07485810 to 07585817 has its CatchHandler @ 0748594c */
    iVar12 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    iVar4 = unaff_x20[4];
                    /* try { // try from 07485824 to 07585843 has its CatchHandler @ 07485950 */
    if (*(int *)(*(long *)PTR_DAT_0921fba8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    switch(iVar10) {
    case 0:
      break;
    case 1:
      iVar12 = iVar2;
      break;
    case 2:
      iVar12 = iVar1;
      break;
    case 3:
      iVar12 = iVar3;
                    /* try { // try from 07485868 to 0758586f has its CatchHandler @ 07485978 */
      break;
    case 4:
      iVar12 = iVar4;
      break;
    default:
      goto switchD_07485854_default;
    }
    if (iVar12 == 2) {
      if (unaff_x19 == (long *)0x0) goto LAB_07485a78;
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 0748588c to 0758588f has its CatchHandler @ 0748596c */
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
                    /* try { // try from 074858c4 to 075858c7 has its CatchHandler @ 07485948 */
LAB_07485924:
      uVar8 = (*(code *)*puVar6)();
      if ((uVar8 & 1) == 0) {
        uVar11 = 0;
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
      uVar11 = uVar11 | uVar5;
    }
    else {
switchD_07485854_default:
                    /* try { // try from 074858c8 to 07585933 has its CatchHandler @ 074856a4 */
      if ((!in_ZR & in_w8) != 0) {
        iVar12 = *unaff_x20;
        iVar2 = unaff_x20[1];
        iVar1 = unaff_x20[2];
        iVar3 = unaff_x20[3];
        iVar4 = unaff_x20[4];
        if (*(int *)(*(long *)PTR_DAT_0921fba8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        switch(iVar10) {
        case 0:
          break;
        case 1:
          iVar12 = iVar2;
          break;
        case 2:
          iVar12 = iVar1;
          break;
        case 3:
          iVar12 = iVar3;
          break;
        case 4:
          iVar12 = iVar4;
          break;
        default:
          goto switchD_0748590c_default;
        }
        if (iVar12 == 1) {
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
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_07485a24;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485a24:
          uVar8 = (*(code *)*puVar6)();
          if ((uVar8 & 1) != 0) {
            uVar11 = 1;
            goto LAB_07485a58;
          }
        }
      }
    }
switchD_0748590c_default:
    iVar10 = iVar10 + 1;
    if (iVar10 == 5) {
LAB_07485a58:
      return uVar11 & 1;
    }
  } while( true );
}


