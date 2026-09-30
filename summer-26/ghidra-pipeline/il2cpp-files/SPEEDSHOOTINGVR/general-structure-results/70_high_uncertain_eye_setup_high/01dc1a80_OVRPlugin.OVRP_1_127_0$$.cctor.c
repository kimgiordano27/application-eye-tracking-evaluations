/*
FUNCTION_NAME: OVRPlugin.OVRP_1_127_0$$.cctor
ENTRY_POINT: 01dc1a80
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_127_0___cctor(long param_1)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 uVar6;
  long *unaff_x20;
  ushort *unaff_x21;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  ushort *puVar7;
  ushort *unaff_x27;
  ushort *in_stack_00000008;
  
  puVar7 = unaff_x21;
  if (param_1 == 0) {
    plVar3 = (long *)0x0;
    if (unaff_x25 != (long *)0x0) goto LAB_01dc1ad8;
LAB_01dc1b2c:
    if (unaff_w24 == 0) goto LAB_01dc1b88;
  }
  else {
    plVar3 = (long *)FUN_01dc1d00();
    if (plVar3 == (long *)0x0) goto LAB_01dc1c5c;
    iVar2 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if ((0 < iVar2) && (*(char *)(unaff_x19 + 0x31) != '\0')) {
      uVar4 = (**(code **)(*unaff_x20 + 0x1b8))();
                    /* try { // try from 01dc1c70 to 01ec1c87 has its CatchHandler @ 01dc1d24 */
      FUN_00e5db80();
      uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
      FUN_00e5db80(uVar6);
      uVar6 = thunk_FUN_0105d828(uVar6,0);
      uVar5 = thunk_FUN_010303a8(PTR_DAT_0235ab18);
      uVar4 = FUN_01c433dc(uVar5,uVar4,uVar6,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar6 = thunk_FUN_010400dc();
      FUN_01c65ad0(uVar6,uVar4,0);
      uVar4 = thunk_FUN_010303a8(PTR_DAT_0235ab20);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar6,uVar4);
    }
    plVar3[4] = unaff_x19;
    plVar3[2] = (long)unaff_x21;
    plVar3[3] = (long)unaff_x27;
    thunk_FUN_0106e12c(plVar3 + 4);
    *(undefined2 *)(plVar3 + 5) = 0;
    *(undefined1 *)((long)plVar3 + 0x2a) = 0;
    *(undefined4 *)((long)plVar3 + 0x2c) = 0;
    if (unaff_x25 == (long *)0x0) goto LAB_01dc1b2c;
LAB_01dc1ad8:
    iVar2 = (**(code **)(*unaff_x25 + 0x188))();
    if (iVar2 == 1) {
      if (unaff_w24 != 0) {
        unaff_w23 = unaff_w23 + 1;
      }
      return unaff_w23;
    }
    if (unaff_w24 == 0) goto LAB_01dc1b88;
    if (unaff_x19 == 0) goto LAB_01dc1c5c;
  }
  plVar3 = (long *)FUN_01dc1d00();
  if (plVar3 == (long *)0x0) {
LAB_01dc1c5c:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  plVar3[2] = (long)unaff_x21;
  plVar3[3] = (long)unaff_x27;
  plVar3[4] = unaff_x19;
  thunk_FUN_0106e12c();
  *(undefined2 *)(plVar3 + 5) = 0;
  *(undefined1 *)((long)plVar3 + 0x2a) = 0;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  in_stack_00000008 = unaff_x21;
  (**(code **)(*plVar3 + 0x1d8))(plVar3,unaff_w24,&stack0x00000008,*(undefined8 *)(*plVar3 + 0x1e0))
  ;
  puVar7 = in_stack_00000008;
LAB_01dc1b88:
  iVar2 = 0;
  do {
    while( true ) {
      if (plVar3 == (long *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
        *(bool *)((long)plVar3 + 0x2a) = uVar1 != 0;
        if (uVar1 == 0) {
          *(undefined4 *)((long)plVar3 + 0x2c) = 0;
        }
      }
      if ((unaff_x27 <= puVar7) && (uVar1 == 0)) {
        return iVar2;
      }
      if (uVar1 == 0) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
      }
      if (0x7f < uVar1) break;
      iVar2 = iVar2 + 1;
    }
    if (plVar3 == (long *)0x0) {
      if (unaff_x19 == 0) {
        plVar3 = (long *)unaff_x20[5];
        if (plVar3 == (long *)0x0) goto LAB_01dc1c5c;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      }
      else {
        plVar3 = (long *)FUN_01dc1d00();
      }
      if (plVar3 == (long *)0x0) goto LAB_01dc1c5c;
      plVar3[4] = unaff_x19;
      plVar3[2] = (long)unaff_x21;
      plVar3[3] = (long)unaff_x27;
      thunk_FUN_0106e12c(plVar3 + 4);
      *(undefined2 *)(plVar3 + 5) = 0;
      *(undefined1 *)((long)plVar3 + 0x2a) = 0;
      *(undefined4 *)((long)plVar3 + 0x2c) = 0;
    }
    in_stack_00000008 = puVar7;
    (**(code **)(*plVar3 + 0x1d8))(plVar3,uVar1,&stack0x00000008,*(undefined8 *)(*plVar3 + 0x1e0));
    puVar7 = in_stack_00000008;
  } while( true );
}


