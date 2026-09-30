/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__82_2
ENTRY_POINT: 08a4384c
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__82_2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int *unaff_x19;
  uint uVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  int iStack000000000000004c;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x20 + 0x448) = 1;
  puVar1 = PTR_DAT_0ac111a0;
  iStack000000000000004c = *unaff_x19;
                    /* try { // try from 08a4385c to 08b43883 has its CatchHandler @ 08a43cec */
  in_stack_00000038 = 0;
  in_stack_00000040 = *(long **)(unaff_x19 + 8);
  in_stack_00000010 = (undefined1 *)&stack0x0000004c;
  in_stack_00000030 = 0;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000040;
  if (iStack000000000000004c == 0) {
    in_stack_00000038 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    iStack000000000000004c = -1;
    *unaff_x19 = -1;
LAB_08a43904:
    FUN_08c80ec0(&stack0x00000038,0);
    if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar3 = (**(code **)(*in_stack_00000040 + 0x1c8))
                      (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x1d0));
    puVar2 = PTR_DAT_0ac46eb8;
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32acf7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac46eb8);
        DAT_0b32acf7 = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar10 = *(long *)puVar2;
      }
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar9 = (long *)**(undefined8 **)(lVar10 + 0xb8);
      uVar4 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac158c8,in_stack_00000040[6],
                           *(undefined8 *)PTR_DAT_0ac533d8,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar10 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac46ed8) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_08a43c84;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a43c84:
      (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
      uVar8 = 7;
      goto LAB_08a43c98;
    }
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar10 = *(long *)puVar2;
    }
    if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar9 = (long *)**(undefined8 **)(lVar10 + 0xb8);
    uVar4 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac158c8,in_stack_00000040[6],
                         *(undefined8 *)PTR_DAT_0ac533d0,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar10 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_08a43b14;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a43b14:
    (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
    plVar9 = in_stack_00000040;
    puVar2 = PTR_DAT_0ac11498;
    if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar10 = in_stack_00000040[9];
    if (lVar10 != 0) {
      lVar6 = *(long *)PTR_DAT_0ac11498;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *(long *)puVar2;
      }
      (**(code **)(lVar10 + 0x18))
                (*(undefined8 *)(lVar10 + 0x40),plVar9,**(undefined8 **)(lVar6 + 0xb8),
                 *(undefined8 *)(lVar10 + 0x28));
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    if (in_stack_00000040[3] != 0) {
      FUN_08de2d50(in_stack_00000040[3],0);
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    if (in_stack_00000040[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000038 = FUN_08df2f04(in_stack_00000040[5],0);
    uVar3 = FUN_08c80df8(&stack0x00000038,0);
    if ((uVar3 & 1) == 0) {
      iStack000000000000004c = 1;
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000038;
      thunk_FUN_049ee3d8(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2b63c(unaff_x19 + 2,&stack0x00000038);
      goto LAB_08a43c70;
    }
  }
  else {
    if (iStack000000000000004c != 1) {
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (in_stack_00000040[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar10 = FUN_08de5634(in_stack_00000040[2],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000038 = FUN_08df2f04(lVar10,0);
      uVar3 = FUN_08c80df8(&stack0x00000038,0);
      if ((uVar3 & 1) != 0) goto LAB_08a43904;
      iStack000000000000004c = 0;
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000038;
      thunk_FUN_049ee3d8(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2b63c(unaff_x19 + 2,&stack0x00000038);
LAB_08a43c70:
      uVar8 = 5;
      goto LAB_08a43c98;
    }
    in_stack_00000038 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    iStack000000000000004c = -1;
    *unaff_x19 = -1;
  }
  FUN_08c80ec0(&stack0x00000038,0);
  if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (in_stack_00000040[3] != 0) {
    FUN_08de3224(in_stack_00000040[3],0);
    if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  plVar9 = in_stack_00000040;
  puVar2 = PTR_DAT_0ac11498;
  lVar10 = in_stack_00000040[10];
  if (lVar10 != 0) {
    lVar6 = *(long *)PTR_DAT_0ac11498;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar6 = *(long *)puVar2;
    }
    (**(code **)(lVar10 + 0x18))
              (*(undefined8 *)(lVar10 + 0x40),plVar9,**(undefined8 **)(lVar6 + 0xb8),
               *(undefined8 *)(lVar10 + 0x28));
  }
  uVar8 = 0x13;
LAB_08a43c98:
  FUN_0451b980(&stack0x00000008);
  if ((uVar8 < 0x14) && ((1 << (ulong)uVar8 & 0x80081U) != 0)) {
    lVar10 = *(long *)puVar1;
    *unaff_x19 = -2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08c7f478(unaff_x19 + 2,0);
  }
  return;
}


