/*
FUNCTION_NAME: OVRPlugin$$GetDesiredEyeTextureFormat
ENTRY_POINT: 01d80cf0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDesiredEyeTextureFormat(void)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long lVar8;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long lVar9;
  undefined4 uStack000000000000001c;
  char in_stack_00000020;
  char cStack0000000000000024;
  undefined8 in_stack_00000028;
  
  FUN_00fdc2e4(PTR_DAT_023590c0);
  FUN_00fdc2e4(PTR_DAT_0234bce0);
  *(undefined1 *)(unaff_x24 + 0x7db) = 1;
  cStack0000000000000024 = '\0';
  in_stack_00000020 = '\0';
  uStack000000000000001c = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d7f060(unaff_w21,&stack0x00000028,unaff_w22 & 1,&stack0x00000024,&stack0x00000020,
               &stack0x0000001c);
  lVar6 = FUN_01d80e70();
  if (lVar6 != 0) {
    FUN_0174876c();
    cVar2 = cStack0000000000000024;
    cVar1 = in_stack_00000020;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
                    /* try { // try from 01d80d98 to 01e80d9f has its CatchHandler @ 01d80e68 */
      lVar9 = 0;
      do {
        if (uVar4 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        lVar8 = *(long *)(lVar6 + 0x20 + lVar9 * 8);
        if (lVar8 == 0) goto LAB_01d80e6c;
        uVar4 = FUN_01cd31bc(lVar8,0);
        uVar5 = FUN_01cd31bc(lVar8,0);
        uVar3 = in_stack_00000028;
        if ((uVar4 & (unaff_w21 ^ 2)) == uVar5) {
          if (cVar2 != '\0') {
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar7 = FUN_01d7f224(lVar8,uVar3,cVar1 != '\0');
            if ((uVar7 & 1) == 0) goto LAB_01d80e28;
          }
          FUN_0174899c();
        }
LAB_01d80e28:
        uVar4 = *(uint *)(lVar6 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar4);
    }
    unaff_x19[2] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    return;
  }
LAB_01d80e6c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


