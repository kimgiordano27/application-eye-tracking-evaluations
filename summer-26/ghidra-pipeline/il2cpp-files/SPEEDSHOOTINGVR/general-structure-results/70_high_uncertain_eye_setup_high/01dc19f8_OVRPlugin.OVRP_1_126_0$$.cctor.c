/*
FUNCTION_NAME: OVRPlugin.OVRP_1_126_0$$.cctor
ENTRY_POINT: 01dc19f8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_126_0___cctor(ulong param_1,long *param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x22;
  int unaff_w23;
  short sVar9;
  ushort *puVar10;
  ushort *in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235aa98);
    *(undefined1 *)(unaff_x22 + 0xaa3) = 1;
  }
  puVar1 = param_3 + unaff_w23;
  in_stack_00000008 = (ushort *)0x0;
  puVar10 = param_3;
  if (unaff_x19 == 0) {
    plVar7 = (long *)param_2[5];
    if (plVar7 == (long *)0x0) {
      plVar4 = (long *)0x0;
      goto LAB_01dc1b88;
    }
    plVar4 = (long *)0x0;
    if (*plVar7 != *(long *)PTR_DAT_0235aa98) goto LAB_01dc1b88;
    sVar9 = 0;
LAB_01dc1ad8:
    iVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (iVar3 == 1) {
      if (sVar9 != 0) {
        unaff_w23 = unaff_w23 + 1;
      }
      return unaff_w23;
    }
    if (sVar9 == 0) goto LAB_01dc1b88;
    if (unaff_x19 == 0) goto LAB_01dc1c5c;
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x10);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if (*plVar7 != *(long *)PTR_DAT_0235aa98) {
      plVar7 = (long *)0x0;
    }
    sVar9 = *(short *)(unaff_x19 + 0x20);
    if (*(long *)(unaff_x19 + 0x18) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)FUN_01dc1d00();
      if (plVar4 == (long *)0x0) goto LAB_01dc1c5c;
      iVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x31) != '\0')) {
        uVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        FUN_00e5db80();
        uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
        FUN_00e5db80(uVar8);
        uVar8 = thunk_FUN_0105d828(uVar8,0);
        uVar6 = thunk_FUN_010303a8(PTR_DAT_0235ab18);
        uVar5 = FUN_01c433dc(uVar6,uVar5,uVar8,0);
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar8 = thunk_FUN_010400dc();
        FUN_01c65ad0(uVar8,uVar5,0);
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0235ab20);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar8,uVar5);
      }
      plVar4[4] = unaff_x19;
      plVar4[2] = (long)param_3;
      plVar4[3] = (long)puVar1;
      thunk_FUN_0106e12c(plVar4 + 4);
      *(undefined2 *)(plVar4 + 5) = 0;
      *(undefined1 *)((long)plVar4 + 0x2a) = 0;
      *(undefined4 *)((long)plVar4 + 0x2c) = 0;
    }
    if (plVar7 != (long *)0x0) goto LAB_01dc1ad8;
    if (sVar9 == 0) goto LAB_01dc1b88;
  }
  plVar4 = (long *)FUN_01dc1d00();
  if (plVar4 == (long *)0x0) {
LAB_01dc1c5c:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  plVar4[2] = (long)param_3;
  plVar4[3] = (long)puVar1;
  plVar4[4] = unaff_x19;
  thunk_FUN_0106e12c();
  *(undefined2 *)(plVar4 + 5) = 0;
  *(undefined1 *)((long)plVar4 + 0x2a) = 0;
  *(undefined4 *)((long)plVar4 + 0x2c) = 0;
  in_stack_00000008 = param_3;
  (**(code **)(*plVar4 + 0x1d8))(plVar4,sVar9,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
  puVar10 = in_stack_00000008;
LAB_01dc1b88:
  iVar3 = 0;
  do {
    while( true ) {
      if (plVar4 == (long *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
        *(bool *)((long)plVar4 + 0x2a) = uVar2 != 0;
        if (uVar2 == 0) {
          *(undefined4 *)((long)plVar4 + 0x2c) = 0;
        }
      }
      if ((puVar1 <= puVar10) && (uVar2 == 0)) {
        return iVar3;
      }
      if (uVar2 == 0) {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
      }
      if (0x7f < uVar2) break;
      iVar3 = iVar3 + 1;
    }
    if (plVar4 == (long *)0x0) {
      if (unaff_x19 == 0) {
        plVar7 = (long *)param_2[5];
        if (plVar7 == (long *)0x0) goto LAB_01dc1c5c;
        plVar4 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      }
      else {
        plVar4 = (long *)FUN_01dc1d00();
      }
      if (plVar4 == (long *)0x0) goto LAB_01dc1c5c;
      plVar4[4] = unaff_x19;
      plVar4[2] = (long)param_3;
      plVar4[3] = (long)puVar1;
      thunk_FUN_0106e12c(plVar4 + 4);
      *(undefined2 *)(plVar4 + 5) = 0;
      *(undefined1 *)((long)plVar4 + 0x2a) = 0;
      *(undefined4 *)((long)plVar4 + 0x2c) = 0;
    }
    in_stack_00000008 = puVar10;
    (**(code **)(*plVar4 + 0x1d8))(plVar4,uVar2,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
    puVar10 = in_stack_00000008;
  } while( true );
}


