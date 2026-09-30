/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$ShareAndLocalizeAnchor
ENTRY_POINT: 07768d78
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ShareAndLocalizeAnchor
          (code *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 in_x4;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  
  while( true ) {
    (*param_1)(unaff_x23,unaff_x22,4,unaff_w29 != 0,in_x4);
    do {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      unaff_w21 = unaff_w21 + 1;
      if (lVar4 == 0) goto LAB_07768dac;
      while( true ) {
        if (*(long *)(lVar4 + 0x70) == 0) goto LAB_07768dac;
        if ((int)unaff_w21 < *(int *)(*(long *)(lVar4 + 0x70) + 0x18)) break;
        unaff_w20 = unaff_w20 + 1;
        if (*(long *)(lVar4 + 0x58) == 0) goto LAB_07768dac;
        if (*(int *)(*(long *)(lVar4 + 0x58) + 0x18) <= unaff_w20) {
          return 0;
        }
        unaff_w21 = 0;
      }
      if (((*(long *)(lVar4 + 0x58) == 0) ||
          (lVar4 = FUN_05badb74(*(long *)(lVar4 + 0x58),unaff_w20,*unaff_x24), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) goto LAB_07768dac;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)unaff_w21 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_07768dac;
      uVar1 = FUN_0776deec(lVar4,0);
    } while (((uVar1 & 1) != 0) || (*(long *)(unaff_x19 + 0x28) == 0));
    unaff_x22 = (long *)FUN_0776de2c(lVar4,0);
    lVar4 = *(long *)(unaff_x19 + 0x30);
    if (lVar4 != 0) {
      uVar2 = FUN_078ab14c(*unaff_x28,unaff_x22,0);
      (**(code **)(lVar4 + 0x18))
                (0x3f000000,*(undefined8 *)(lVar4 + 0x40),uVar2,*(undefined8 *)(lVar4 + 0x28));
    }
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar4 == 0)) break;
    unaff_x23 = *(long **)(unaff_x19 + 0x28);
    lVar4 = FUN_05badb74(lVar4,unaff_w21,*unaff_x25);
    if ((lVar4 == 0) || (unaff_x23 == (long *)0x0)) break;
    unaff_w29 = (uint)*(byte *)(lVar4 + 0x18);
    if ((unaff_x22 != (long *)0x0) && (*unaff_x22 != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(unaff_x22,*unaff_x27);
    }
    lVar4 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_07768d74;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(unaff_x23,*unaff_x26,3);
LAB_07768d74:
    param_1 = (code *)*puVar3;
    in_x4 = puVar3[1];
  }
LAB_07768dac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


