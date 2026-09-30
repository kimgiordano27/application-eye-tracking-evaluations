/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_3
ENTRY_POINT: 01dc1dcc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_<>c__<_cctor>b__819_3
              (long *param_1,ushort *param_2,int param_3,undefined1 *param_4,int param_5,
              long param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  short sVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *in_stack_00000008;
  
  if ((DAT_0247daa4 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235aa98);
    DAT_0247daa4 = 1;
  }
  puVar14 = param_2 + param_3;
  in_stack_00000008 = (ushort *)0x0;
  puVar11 = param_4;
  puVar13 = param_2;
  if (param_6 == 0) {
    plVar7 = (long *)param_1[5];
    if ((plVar7 != (long *)0x0) && (*plVar7 == *(long *)PTR_DAT_0235aa98)) {
      sVar10 = 0;
      plVar4 = (long *)0x0;
      goto LAB_01dc1ef0;
    }
    plVar4 = (long *)0x0;
    puVar12 = param_4 + param_5;
LAB_01dc1f94:
    while( true ) {
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
        if ((puVar14 <= puVar13) && (uVar2 == 0)) goto LAB_01dc20ac;
        if (uVar2 == 0) {
          uVar2 = *puVar13;
          puVar13 = puVar13 + 1;
        }
        if (uVar2 < 0x80) break;
        if (plVar4 == (long *)0x0) {
          if (param_6 == 0) {
            plVar7 = (long *)param_1[5];
            if (plVar7 == (long *)0x0) goto LAB_01dc2188;
            plVar4 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180))
            ;
          }
          else {
            plVar4 = (long *)FUN_01dc1d00(param_6);
          }
          if (plVar4 == (long *)0x0) goto LAB_01dc2188;
          plVar4[4] = param_6;
          plVar4[2] = (long)param_2;
          plVar4[3] = (long)puVar14;
          thunk_FUN_0106e12c(plVar4 + 4,param_6);
          *(undefined1 *)((long)plVar4 + 0x2a) = 0;
          *(undefined2 *)(plVar4 + 5) = 1;
          *(undefined4 *)((long)plVar4 + 0x2c) = 0;
        }
        in_stack_00000008 = puVar13;
        (**(code **)(*plVar4 + 0x1d8))
                  (plVar4,uVar2,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
        puVar13 = in_stack_00000008;
      }
      if (puVar12 <= puVar11) break;
      *puVar11 = (char)uVar2;
      puVar11 = puVar11 + 1;
    }
    if ((plVar4 == (long *)0x0) || (*(char *)((long)plVar4 + 0x2a) == '\0')) {
      puVar13 = puVar13 + -1;
    }
    else {
      (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    }
    FUN_01dd63d0(param_1,param_6,puVar11 == param_4,0);
LAB_01dc20ac:
    if (param_6 == 0) goto LAB_01dc20d4;
    if ((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x29) == '\0')) {
      *(undefined2 *)(param_6 + 0x20) = 0;
    }
    uVar8 = (long)puVar13 - (long)param_2;
  }
  else {
    plVar7 = *(long **)(param_6 + 0x10);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if (*plVar7 != *(long *)PTR_DAT_0235aa98) {
      plVar7 = (long *)0x0;
    }
    sVar10 = *(short *)(param_6 + 0x20);
    if (*(long *)(param_6 + 0x18) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)FUN_01dc1d00(param_6);
      if (plVar4 == (long *)0x0) goto LAB_01dc2188;
      iVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((0 < iVar3) && (*(char *)(param_6 + 0x31) != '\0')) {
        uVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_00e5db80(param_6);
        uVar9 = *(undefined8 *)(param_6 + 0x10);
        FUN_00e5db80(uVar9);
        uVar9 = thunk_FUN_0105d828(uVar9,0);
        uVar6 = thunk_FUN_010303a8(PTR_DAT_0235ab18);
        uVar5 = FUN_01c433dc(uVar6,uVar5,uVar9,0);
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar9 = thunk_FUN_010400dc();
        FUN_01c65ad0(uVar9,uVar5,0);
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0235ab28);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar9,uVar5);
      }
      plVar4[4] = param_6;
      plVar4[2] = (long)param_2;
      plVar4[3] = (long)puVar14;
      thunk_FUN_0106e12c(plVar4 + 4,param_6);
      *(undefined1 *)((long)plVar4 + 0x2a) = 0;
      *(undefined2 *)(plVar4 + 5) = 1;
      *(undefined4 *)((long)plVar4 + 0x2c) = 0;
    }
    if (plVar7 == (long *)0x0) {
      puVar12 = param_4 + param_5;
      if (sVar10 == 0) goto LAB_01dc1f94;
LAB_01dc1f34:
      plVar4 = (long *)FUN_01dc1d00(param_6);
      if (plVar4 == (long *)0x0) {
LAB_01dc2188:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      plVar4[2] = (long)param_2;
      plVar4[3] = (long)puVar14;
      plVar4[4] = param_6;
      thunk_FUN_0106e12c(plVar4 + 4,param_6);
      *(undefined1 *)((long)plVar4 + 0x2a) = 0;
      *(undefined4 *)((long)plVar4 + 0x2c) = 0;
      *(undefined2 *)(plVar4 + 5) = 1;
      in_stack_00000008 = param_2;
      (**(code **)(*plVar4 + 0x1d8))
                (plVar4,sVar10,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
      puVar13 = in_stack_00000008;
      goto LAB_01dc1f94;
    }
LAB_01dc1ef0:
    iVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (iVar3 != 1) {
LAB_01dc1f28:
      puVar12 = param_4 + param_5;
      if (sVar10 == 0) goto LAB_01dc1f94;
      if (param_6 == 0) goto LAB_01dc2188;
      goto LAB_01dc1f34;
    }
    if (plVar7[2] == 0) goto LAB_01dc2188;
    uVar2 = FUN_01c49538(plVar7[2],0,0);
    if (0x7f < uVar2) goto LAB_01dc1f28;
    if (sVar10 != 0) {
      if (param_5 == 0) {
        FUN_01dd63d0(param_1,param_6,1,0);
      }
      *param_4 = (char)uVar2;
      param_5 = param_5 + -1;
      puVar11 = param_4 + 1;
    }
    if (param_5 < param_3) {
      FUN_01dd63d0(param_1,param_6,param_5 < 1,0);
      puVar14 = param_2 + param_5;
    }
    while (puVar13 < puVar14) {
      uVar1 = *puVar13;
      if (0x7f < *puVar13) {
        uVar1 = uVar2;
      }
      *puVar11 = (char)uVar1;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    if (param_6 == 0) goto LAB_01dc20d4;
    *(undefined2 *)(param_6 + 0x20) = 0;
    uVar8 = (long)puVar13 - (long)param_2;
  }
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  *(int *)(param_6 + 0x34) = (int)(uVar8 >> 1);
LAB_01dc20d4:
  return (int)puVar11 - (int)param_4;
}


