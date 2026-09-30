/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 02c22b58
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_tiledMultiResSupported(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  uint unaff_w25;
  byte unaff_w26;
  int unaff_w28;
  undefined8 in_stack_00000008;
  
code_r0x02c22b58:
  do {
    FUN_02c225cc();
LAB_02c22b5c:
    do {
      if (unaff_w28 != 0) {
        FUN_02c22620();
        *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
        if (unaff_x21 != (long *)0x0) {
          uVar5 = (**(code **)(*unaff_x21 + 0x168))();
          return uVar5;
        }
LAB_02c22bb4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      do {
        uVar4 = FUN_02c22174();
        bVar1 = unaff_w26 & 1;
        unaff_w26 = in_stack_00000008._4_1_ != '\0' || bVar1 != 0;
        iVar3 = (int)(uVar4 >> 0x20);
        if ((unaff_w25 == ((uint)uVar4 & 0xffff)) && ((uVar4 & 0xffff) != 0)) {
          if (unaff_x21 == (long *)0x0) goto LAB_02c22bb4;
          iVar2 = System_IO_BinaryReader__ReadDecimal();
          if (iVar2 == 0) {
            return 0;
          }
          if ((iVar3 == 0xd) && ((unaff_x20 & 1) != 0)) {
LAB_02c22ae8:
            unaff_w28 = 1;
            if (in_stack_00000008._4_1_ != '\0' || bVar1 != 0) goto code_r0x02c22b58;
            goto LAB_02c22b5c;
          }
        }
        else {
          if ((iVar3 == 0xd) && ((unaff_x20 & 1) != 0)) goto LAB_02c22ae8;
          if (unaff_x21 == (long *)0x0) goto LAB_02c22bb4;
        }
        if (iVar3 != 8) {
          FUN_02a5ae94();
          goto LAB_02c22b40;
        }
        iVar3 = System_IO_BinaryReader__ReadDecimal();
      } while (iVar3 < 1);
      System_IO_BinaryReader__ReadDecimal();
      FUN_02a596b4();
LAB_02c22b40:
      unaff_w28 = 0;
    } while (in_stack_00000008._4_1_ == '\0' && bVar1 == 0);
  } while( true );
}


