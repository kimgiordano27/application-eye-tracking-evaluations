/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_4
ENTRY_POINT: 01dc1e38
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_<>c__<_cctor>b__819_4(void)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  undefined8 uVar9;
  undefined1 *unaff_x20;
  ushort *unaff_x21;
  long *unaff_x22;
  int unaff_w24;
  int unaff_w25;
  undefined1 *puVar10;
  long *unaff_x27;
  undefined1 *puVar11;
  ushort *puVar12;
  ushort *unaff_x29;
  ushort *in_stack_00000008;
  
  sVar2 = *(short *)(unaff_x19 + 0x20);
  puVar10 = unaff_x20;
  puVar12 = unaff_x21;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    plVar5 = (long *)0x0;
    if (unaff_x27 == (long *)0x0) goto LAB_01dc1edc;
LAB_01dc1ef0:
    iVar4 = (**(code **)(*unaff_x27 + 0x188))();
    if (iVar4 != 1) {
LAB_01dc1f28:
      puVar11 = unaff_x20 + unaff_w24;
      if (sVar2 != 0) {
        if (unaff_x19 == 0) goto LAB_01dc2188;
        goto LAB_01dc1f34;
      }
      goto LAB_01dc1f94;
    }
    if (unaff_x27[2] == 0) goto LAB_01dc2188;
    uVar3 = FUN_01c49538(unaff_x27[2],0,0);
    if (0x7f < uVar3) goto LAB_01dc1f28;
    if (sVar2 != 0) {
      if (unaff_w24 == 0) {
        FUN_01dd63d0();
      }
      *unaff_x20 = (char)uVar3;
      unaff_w24 = unaff_w24 + -1;
      puVar10 = unaff_x20 + 1;
    }
    if (unaff_w24 < unaff_w25) {
      FUN_01dd63d0();
      unaff_x29 = unaff_x21 + unaff_w24;
    }
    while (puVar12 < unaff_x29) {
      uVar1 = *puVar12;
      if (0x7f < *puVar12) {
        uVar1 = uVar3;
      }
      *puVar10 = (char)uVar1;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    if (unaff_x19 == 0) goto LAB_01dc20d4;
    *(undefined2 *)(unaff_x19 + 0x20) = 0;
    uVar8 = (long)puVar12 - (long)unaff_x21;
  }
  else {
    plVar5 = (long *)FUN_01dc1d00();
    if (plVar5 == (long *)0x0) goto LAB_01dc2188;
    iVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if ((0 < iVar4) && (*(char *)(unaff_x19 + 0x31) != '\0')) {
      uVar6 = (**(code **)(*unaff_x22 + 0x1b8))();
      FUN_00e5db80();
      uVar9 = *(undefined8 *)(unaff_x19 + 0x10);
      FUN_00e5db80(uVar9);
      uVar9 = thunk_FUN_0105d828(uVar9,0);
      uVar7 = thunk_FUN_010303a8(PTR_DAT_0235ab18);
      uVar6 = FUN_01c433dc(uVar7,uVar6,uVar9,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar9 = thunk_FUN_010400dc();
      FUN_01c65ad0(uVar9,uVar6,0);
      uVar6 = thunk_FUN_010303a8(PTR_DAT_0235ab28);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar9,uVar6);
    }
    plVar5[4] = unaff_x19;
    plVar5[2] = (long)unaff_x21;
    plVar5[3] = (long)unaff_x29;
    thunk_FUN_0106e12c(plVar5 + 4);
    *(undefined1 *)((long)plVar5 + 0x2a) = 0;
    *(undefined2 *)(plVar5 + 5) = 1;
    *(undefined4 *)((long)plVar5 + 0x2c) = 0;
    if (unaff_x27 != (long *)0x0) goto LAB_01dc1ef0;
LAB_01dc1edc:
    puVar11 = unaff_x20 + unaff_w24;
    if (sVar2 != 0) {
LAB_01dc1f34:
      plVar5 = (long *)FUN_01dc1d00();
      if (plVar5 == (long *)0x0) {
LAB_01dc2188:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      plVar5[2] = (long)unaff_x21;
      plVar5[3] = (long)unaff_x29;
      plVar5[4] = unaff_x19;
      thunk_FUN_0106e12c();
      *(undefined1 *)((long)plVar5 + 0x2a) = 0;
      *(undefined4 *)((long)plVar5 + 0x2c) = 0;
      *(undefined2 *)(plVar5 + 5) = 1;
      in_stack_00000008 = unaff_x21;
      (**(code **)(*plVar5 + 0x1d8))(plVar5,sVar2,&stack0x00000008,*(undefined8 *)(*plVar5 + 0x1e0))
      ;
      puVar12 = in_stack_00000008;
    }
LAB_01dc1f94:
    while( true ) {
      while( true ) {
        if (plVar5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
          *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
          if (uVar3 == 0) {
            *(undefined4 *)((long)plVar5 + 0x2c) = 0;
          }
        }
        if ((unaff_x29 <= puVar12) && (uVar3 == 0)) goto LAB_01dc20ac;
        if (uVar3 == 0) {
          uVar3 = *puVar12;
          puVar12 = puVar12 + 1;
        }
        if (uVar3 < 0x80) break;
        if (plVar5 == (long *)0x0) {
          if (unaff_x19 == 0) {
            plVar5 = (long *)unaff_x22[5];
            if (plVar5 == (long *)0x0) goto LAB_01dc2188;
            plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180))
            ;
          }
          else {
            plVar5 = (long *)FUN_01dc1d00();
          }
          if (plVar5 == (long *)0x0) goto LAB_01dc2188;
          plVar5[4] = unaff_x19;
          plVar5[2] = (long)unaff_x21;
          plVar5[3] = (long)unaff_x29;
          thunk_FUN_0106e12c(plVar5 + 4);
          *(undefined1 *)((long)plVar5 + 0x2a) = 0;
          *(undefined2 *)(plVar5 + 5) = 1;
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
        in_stack_00000008 = puVar12;
        (**(code **)(*plVar5 + 0x1d8))
                  (plVar5,uVar3,&stack0x00000008,*(undefined8 *)(*plVar5 + 0x1e0));
        puVar12 = in_stack_00000008;
      }
      if (puVar11 <= puVar10) break;
      *puVar10 = (char)uVar3;
      puVar10 = puVar10 + 1;
    }
    if ((plVar5 == (long *)0x0) || (*(char *)((long)plVar5 + 0x2a) == '\0')) {
      puVar12 = puVar12 + -1;
    }
    else {
      (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    }
    FUN_01dd63d0();
LAB_01dc20ac:
    if (unaff_x19 == 0) goto LAB_01dc20d4;
    if ((plVar5 != (long *)0x0) && (*(char *)((long)plVar5 + 0x29) == '\0')) {
      *(undefined2 *)(unaff_x19 + 0x20) = 0;
    }
    uVar8 = (long)puVar12 - (long)unaff_x21;
  }
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  *(int *)(unaff_x19 + 0x34) = (int)(uVar8 >> 1);
LAB_01dc20d4:
  return (int)puVar10 - (int)unaff_x20;
}


