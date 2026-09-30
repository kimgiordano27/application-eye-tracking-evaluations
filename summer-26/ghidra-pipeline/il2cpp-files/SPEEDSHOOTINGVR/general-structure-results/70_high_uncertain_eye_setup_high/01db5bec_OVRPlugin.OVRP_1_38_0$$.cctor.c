/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$.cctor
ENTRY_POINT: 01db5bec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_38_0___cctor(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined1 unaff_w23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    FUN_017d2db4(param_1,param_2,param_3,param_4);
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) {
LAB_01db5d34:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_017d4638(lVar4,*(int *)(lVar4 + 0x18) + -1,*unaff_x25);
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) goto LAB_01db5d34;
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_01db5c38:
      cVar1 = *(char *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      if (cVar1 != '\0') {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        plVar5 = (long *)thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_0235a5f0);
        uVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a5c0);
        if (plVar5 == (long *)0x0) goto LAB_01db5d34;
        FUN_01359ba8(uVar6,plVar5,*(undefined8 *)(*plVar5 + 400),0);
        if (lVar4 == 0) goto LAB_01db5d34;
        FUN_017d4928(lVar4,uVar6,*(undefined8 *)PTR_DAT_0235a5d0);
        thunk_FUN_00ffe618();
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
      }
      *(long *)(unaff_x19 + 0x20) = unaff_x20;
      if (unaff_x20 == 0x7fffffffffffffff) {
        uVar3 = 0xffffffff;
      }
      else {
        lVar4 = thunk_FUN_01027094();
        if (unaff_x20 - lVar4 < 0x138800000000) {
          auVar2 = SEXT816(unaff_x20 - lVar4) * SEXT816(0x346dc5d63886594b);
          uVar3 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        }
        else {
          uVar3 = 0x7ffffffe;
        }
      }
      return uVar3;
    }
    param_2 = (ulong)((int)unaff_x21 - 1);
    while( true ) {
      uVar3 = (int)param_2 + 1;
      param_2 = (ulong)uVar3;
      if (*(int *)(lVar4 + 0x18) <= (int)uVar3) goto LAB_01db5c38;
      lVar4 = FUN_017d2d60(lVar4,param_2,*unaff_x28);
      if (lVar4 == 0) goto LAB_01db5d34;
      if (*(char *)(lVar4 + 0x41) != '\0') break;
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) goto LAB_01db5d34;
    }
    *(undefined1 *)(lVar4 + 0x42) = 0;
    thunk_FUN_00ffe618();
    param_1 = *(long *)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 0x10) = unaff_w23;
    if (param_1 == 0) goto LAB_01db5d34;
    param_3 = FUN_017d2d60(param_1,*(int *)(param_1 + 0x18) + -1,*unaff_x28);
    param_4 = *unaff_x29;
    unaff_x21 = param_2;
  } while( true );
}


