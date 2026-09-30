/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 033e52a4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_Quatf__ToString(void)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong uVar7;
  int unaff_w24;
  long lVar8;
  ulong unaff_x28;
  byte unaff_w29;
  ulong in_stack_00000000;
  int iStack0000000000000008;
  char cStack000000000000000c;
  
code_r0x033e52a4:
  do {
    FUN_033e5018();
    do {
      while( true ) {
        if ((int)unaff_x22 == 0xd) {
          FUN_033e506c();
          *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
          if (iStack0000000000000008 < 1) {
            iVar5 = 0;
            goto LAB_033e5348;
          }
          uVar7 = 0;
          lVar8 = (in_stack_00000000 >> 0x20) << 0x20;
          goto LAB_033e52e8;
        }
        uVar7 = FUN_033e4bc0();
        bVar3 = unaff_w29 & 1;
        unaff_x22 = uVar7 >> 0x20;
        unaff_w29 = cStack000000000000000c != '\0' || bVar3 != 0;
        iVar5 = (int)(uVar7 >> 0x20);
        if (iVar5 != 8) break;
        if (unaff_x20 == 0) goto LAB_033e5340;
        iVar5 = FUN_034180e4();
        if (unaff_w24 < iVar5) {
          FUN_034180e4();
          FUN_034185b4();
          if (cStack000000000000000c != '\0' || bVar3 != 0) goto code_r0x033e52a4;
        }
      }
      if (iVar5 == 0xd) {
        if (unaff_x20 == 0) goto LAB_033e5340;
        unaff_w24 = FUN_034180e4();
      }
      else if (unaff_x20 == 0) goto LAB_033e5340;
      FUN_03419818();
    } while (cStack000000000000000c == '\0' && bVar3 == 0);
  } while( true );
  while( true ) {
    uVar4 = FUN_03418984();
    if (unaff_x21 == 0) goto LAB_033e5340;
    if ((ulong)*(uint *)(unaff_x21 + 0x18) <= (in_stack_00000000 >> 0x20) + uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar7 = uVar7 + 1;
    lVar1 = lVar8 >> 0x1f;
    lVar8 = lVar8 + 0x100000000;
    *(undefined2 *)(unaff_x21 + lVar1 + 0x20) = uVar4;
    if (unaff_x28 == uVar7) break;
LAB_033e52e8:
    iVar5 = FUN_034180e4();
    if ((long)iVar5 <= (long)uVar7) goto LAB_033e533c;
  }
  uVar7 = unaff_x28 & 0xffffffff;
LAB_033e533c:
  iVar5 = (int)uVar7;
  if (unaff_x20 != 0) {
LAB_033e5348:
    iVar6 = FUN_034180e4();
    iVar2 = iVar5;
    if (iVar5 < iVar6) {
      do {
        FUN_03418984();
        FUN_033e41c4();
        iVar2 = iVar2 + 1;
        iVar6 = FUN_034180e4();
      } while (iVar2 < iVar6);
    }
    return iVar5;
  }
LAB_033e5340:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


