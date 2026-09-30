/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_21
ENTRY_POINT: 01dc2564
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_<>c__<_cctor>b__819_21(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  byte *unaff_x24;
  byte *unaff_x26;
  ushort *puVar3;
  ushort *unaff_x27;
  int iVar4;
  byte *unaff_x28;
  ushort *unaff_x29;
  long in_stack_00000000;
  
code_r0x01dc2564:
  plVar1 = *(long **)(in_stack_00000000 + 0x30);
  if (plVar1 == (long *)0x0) {
LAB_01dc2640:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  plVar1 = (long *)(**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
  do {
    if (plVar1 == (long *)0x0) goto LAB_01dc2640;
    plVar1[2] = unaff_x21;
    plVar1[3] = (long)unaff_x29;
    do {
      if (unaff_x23 == 0) goto LAB_01dc2640;
      if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      *(byte *)(unaff_x23 + 0x20) = unaff_w22;
      uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
      if ((uVar2 & 1) == 0) {
        plVar1[2] = 0;
        (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
LAB_01dc25d4:
        iVar4 = (int)unaff_x28;
        FUN_01dd7354(in_stack_00000000);
joined_r0x01dc2638:
        if (unaff_x20 != 0) {
          *(int *)(unaff_x20 + 0x2c) = iVar4 - (int)unaff_x21;
        }
        uVar2 = (long)unaff_x27 - unaff_x19;
        if ((long)uVar2 < 0) {
          uVar2 = uVar2 + 1;
        }
        return uVar2 >> 1;
      }
      unaff_x28 = unaff_x24;
      if (unaff_x26 <= unaff_x24) {
        iVar4 = (int)unaff_x24;
        goto joined_r0x01dc2638;
      }
      while( true ) {
        unaff_w22 = *unaff_x28;
        unaff_x24 = unaff_x28 + 1;
        if ((char)unaff_w22 < '\0') break;
        if (unaff_x29 <= unaff_x27) goto LAB_01dc25d4;
        puVar3 = unaff_x27 + 1;
        *unaff_x27 = (ushort)unaff_w22;
        unaff_x27 = puVar3;
        unaff_x28 = unaff_x24;
        if (unaff_x26 == unaff_x24) {
          iVar4 = (int)unaff_x26;
          goto joined_r0x01dc2638;
        }
      }
    } while (plVar1 != (long *)0x0);
    if (unaff_x20 == 0) goto code_r0x01dc2564;
    plVar1 = (long *)FUN_01dc236c();
  } while( true );
}


