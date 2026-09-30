/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSeatPoseDebugger>b__56_0
ENTRY_POINT: 08a66e48
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSeatPoseDebugger>b__56_0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  in_stack_00000028 = FUN_0775b55c(param_1,*(undefined8 *)PTR_DAT_0ac0b070);
  uVar3 = FUN_07683eec(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0b068);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
    thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_05a21018(unaff_x19 + 2,&stack0x00000028);
    return;
  }
  uVar3 = FUN_07683f2c(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0b060);
  puVar1 = PTR_DAT_0ac46eb8;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *(long *)puVar1;
    }
    plVar6 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar7 = *(undefined8 *)PTR_DAT_0ac53e50;
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_08a66c9c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a66c9c:
    (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
    *(undefined1 *)(unaff_x19 + 0x10) = 1;
  }
  else if (*(char *)(unaff_x19 + 0x10) == '\0') {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar6 = *(long **)(unaff_x20 + 0x10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x2f) * 0x10 + 0x138);
          goto LAB_08a66ee4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac4c9f0,0x2f);
LAB_08a66ee4:
    plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac4e5c8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_08a66f50;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac4e5c8,4);
LAB_08a66f50:
    uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar3 & 1) != 0) {
      FUN_08997230(0x3fc00000);
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *(long *)(unaff_x20 + 0xb0);
    *(undefined1 *)(*(long *)(unaff_x19 + 0xc) + 0x28) = 1;
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),1,*(undefined8 *)(lVar4 + 0x28));
    }
    puVar1 = PTR_DAT_0ac46eb8;
    *(undefined1 *)(unaff_x20 + 0x180) = 0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *(long *)puVar1;
    }
    plVar6 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar7 = *(undefined8 *)PTR_DAT_0ac53e40;
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08a6706c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a6706c:
    (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
    goto LAB_08a66d58;
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0xe);
  if (*(int *)(*(long *)PTR_DAT_0ac10af0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar4 = FUN_08dfc834(2000,uVar7,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000018 = FUN_08df2f04(lVar4,0);
  uVar3 = FUN_08c80df8(&stack0x00000018,0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000018;
    thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_05a28838(unaff_x19 + 2,&stack0x00000018);
    return;
  }
  FUN_08c80ec0(&stack0x00000018,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(int *)(unaff_x20 + 0x184) = *(int *)(unaff_x20 + 0x184) + -1;
  lVar4 = FUN_08a64fa4();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000018 = FUN_08df2f04(lVar4,0);
  uVar3 = FUN_08c80df8(&stack0x00000018,0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000018;
    thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_05a28838(unaff_x19 + 2,&stack0x00000018);
    return;
  }
  FUN_08c80ec0(&stack0x00000018,0);
LAB_08a66d58:
  lVar4 = *unaff_x25;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


