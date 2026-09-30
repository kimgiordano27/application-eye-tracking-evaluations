/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryNode
ENTRY_POINT: 02c4e6bc
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined1 *unaff_x20;
  ushort *unaff_x21;
  long *unaff_x22;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  undefined1 *puVar9;
  long *unaff_x27;
  undefined1 *puVar10;
  ushort *puVar11;
  ushort *unaff_x29;
  ushort *in_stack_00000008;
  
  puVar9 = unaff_x20;
  puVar11 = unaff_x21;
  if (param_1 == 0) {
    plVar4 = (long *)0x0;
    if (unaff_x27 == (long *)0x0) goto LAB_02c4e724;
LAB_02c4e738:
    iVar3 = (**(code **)(*unaff_x27 + 0x188))();
    if (iVar3 != 1) {
LAB_02c4e770:
      puVar10 = unaff_x20 + unaff_w24;
      if (unaff_w26 != 0) {
        if (unaff_x19 == 0) goto LAB_02c4e9d0;
        goto LAB_02c4e77c;
      }
      goto LAB_02c4e7dc;
    }
    if (unaff_x27[2] == 0) goto LAB_02c4e9d0;
    uVar2 = FUN_02a4b568(unaff_x27[2],0,0);
    if (0x7f < uVar2) goto LAB_02c4e770;
    if (unaff_w26 != 0) {
      if (unaff_w24 == 0) {
        FUN_02a6c0d8();
      }
      *unaff_x20 = (char)uVar2;
      unaff_w24 = unaff_w24 + -1;
      puVar9 = unaff_x20 + 1;
    }
    if (unaff_w24 < unaff_w25) {
      FUN_02a6c0d8();
      unaff_x29 = unaff_x21 + unaff_w24;
    }
    while (puVar11 < unaff_x29) {
      uVar1 = *puVar11;
      if (0x7f < *puVar11) {
        uVar1 = uVar2;
      }
      *puVar9 = (char)uVar1;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    if (unaff_x19 == 0) goto LAB_02c4e91c;
    *(undefined2 *)(unaff_x19 + 0x20) = 0;
    uVar7 = (long)puVar11 - (long)unaff_x21;
  }
  else {
    plVar4 = (long *)FUN_02c4e548();
    if (plVar4 == (long *)0x0) goto LAB_02c4e9d0;
    iVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x31) != '\0')) {
      uVar5 = (**(code **)(*unaff_x22 + 0x1b8))();
      FUN_015d6ff8();
      uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
      FUN_015d6ff8(uVar8);
      uVar8 = thunk_FUN_0187f3ac(uVar8,0);
      uVar6 = thunk_FUN_01851c08(PTR_DAT_038005d8);
      uVar5 = FUN_02a2f440(uVar6,uVar5,uVar8,0);
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar8 = thunk_FUN_01861bbc();
      System_Threading_Tasks_Task__Finish(uVar8,uVar5,0);
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380ca58);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar8,uVar5);
    }
    plVar4[4] = unaff_x19;
    plVar4[2] = (long)unaff_x21;
    plVar4[3] = (long)unaff_x29;
    thunk_FUN_0188fd20(plVar4 + 4);
    *(undefined1 *)((long)plVar4 + 0x2a) = 0;
    *(undefined2 *)(plVar4 + 5) = 1;
    *(undefined4 *)((long)plVar4 + 0x2c) = 0;
    if (unaff_x27 != (long *)0x0) goto LAB_02c4e738;
LAB_02c4e724:
    puVar10 = unaff_x20 + unaff_w24;
    if (unaff_w26 != 0) {
LAB_02c4e77c:
      plVar4 = (long *)FUN_02c4e548();
      if (plVar4 == (long *)0x0) {
LAB_02c4e9d0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      plVar4[2] = (long)unaff_x21;
      plVar4[3] = (long)unaff_x29;
      plVar4[4] = unaff_x19;
      thunk_FUN_0188fd20();
      *(undefined1 *)((long)plVar4 + 0x2a) = 0;
      *(undefined4 *)((long)plVar4 + 0x2c) = 0;
      *(undefined2 *)(plVar4 + 5) = 1;
      in_stack_00000008 = unaff_x21;
      (**(code **)(*plVar4 + 0x1d8))
                (plVar4,unaff_w26,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
      puVar11 = in_stack_00000008;
    }
LAB_02c4e7dc:
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
        if ((unaff_x29 <= puVar11) && (uVar2 == 0)) goto LAB_02c4e8f4;
        if (uVar2 == 0) {
          uVar2 = *puVar11;
          puVar11 = puVar11 + 1;
        }
        if (uVar2 < 0x80) break;
        if (plVar4 == (long *)0x0) {
          if (unaff_x19 == 0) {
            plVar4 = (long *)unaff_x22[5];
            if (plVar4 == (long *)0x0) goto LAB_02c4e9d0;
            plVar4 = (long *)(**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180))
            ;
          }
          else {
            plVar4 = (long *)FUN_02c4e548();
          }
          if (plVar4 == (long *)0x0) goto LAB_02c4e9d0;
          plVar4[4] = unaff_x19;
          plVar4[2] = (long)unaff_x21;
          plVar4[3] = (long)unaff_x29;
          thunk_FUN_0188fd20(plVar4 + 4);
          *(undefined1 *)((long)plVar4 + 0x2a) = 0;
          *(undefined2 *)(plVar4 + 5) = 1;
          *(undefined4 *)((long)plVar4 + 0x2c) = 0;
        }
        in_stack_00000008 = puVar11;
        (**(code **)(*plVar4 + 0x1d8))
                  (plVar4,uVar2,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
        puVar11 = in_stack_00000008;
      }
      if (puVar10 <= puVar9) break;
      *puVar9 = (char)uVar2;
      puVar9 = puVar9 + 1;
    }
    if ((plVar4 == (long *)0x0) || (*(char *)((long)plVar4 + 0x2a) == '\0')) {
      puVar11 = puVar11 + -1;
    }
    else {
      (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    }
    FUN_02a6c0d8();
LAB_02c4e8f4:
    if (unaff_x19 == 0) goto LAB_02c4e91c;
    if ((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x29) == '\0')) {
      *(undefined2 *)(unaff_x19 + 0x20) = 0;
    }
    uVar7 = (long)puVar11 - (long)unaff_x21;
  }
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  *(int *)(unaff_x19 + 0x34) = (int)(uVar7 >> 1);
LAB_02c4e91c:
  return (int)puVar9 - (int)unaff_x20;
}


