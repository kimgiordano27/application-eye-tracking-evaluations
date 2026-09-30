/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSurfacePositionDebugger>b__83_0
ENTRY_POINT: 08a43868
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSurfacePositionDebugger>b__83_0(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int in_w9;
  int *piVar6;
  undefined4 *unaff_x19;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  long *plVar10;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  undefined1 *puStack0000000000000018;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  long *plStack0000000000000040;
  int iStack000000000000004c;
  
  plStack0000000000000040 = *(long **)(unaff_x19 + 8);
  puStack0000000000000010 = (undefined1 *)&stack0x0000004c;
  uStack0000000000000030 = 0;
  plVar10 = *(long **)(unaff_x22 + 0x1a0);
  uStack0000000000000008 = 0;
  puStack0000000000000018 = (undefined1 *)&stack0x00000040;
  if (in_w9 == 0) {
    in_stack_00000038 = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x19 + 10) = 0;
    iStack000000000000004c = -1;
    *unaff_x19 = 0xffffffff;
LAB_08a43904:
    FUN_08c80ec0(&stack0x00000038,0);
    if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar2 = (**(code **)(*plStack0000000000000040 + 0x1c8))
                      (plStack0000000000000040,*(undefined8 *)(*plStack0000000000000040 + 0x1d0));
    puVar1 = PTR_DAT_0ac46eb8;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32acf7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac46eb8);
        DAT_0b32acf7 = '\x01';
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar9 = *(long *)puVar1;
      }
      if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar8 = (long *)**(undefined8 **)(lVar9 + 0xb8);
      uVar3 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac158c8,plStack0000000000000040[6],
                           *(undefined8 *)PTR_DAT_0ac533d8,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar9 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac46ed8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_08a43c84;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a43c84:
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      uVar7 = 7;
      goto LAB_08a43c98;
    }
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *(long *)puVar1;
    }
    if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar8 = (long *)**(undefined8 **)(lVar9 + 0xb8);
    uVar3 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac158c8,plStack0000000000000040[6],
                         *(undefined8 *)PTR_DAT_0ac533d0,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar9 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_08a43b14;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a43b14:
    (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
    plVar8 = plStack0000000000000040;
    puVar1 = PTR_DAT_0ac11498;
    if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar9 = plStack0000000000000040[9];
    if (lVar9 != 0) {
      lVar5 = *(long *)PTR_DAT_0ac11498;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar5 = *(long *)puVar1;
      }
      (**(code **)(lVar9 + 0x18))
                (*(undefined8 *)(lVar9 + 0x40),plVar8,**(undefined8 **)(lVar5 + 0xb8),
                 *(undefined8 *)(lVar9 + 0x28));
      if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    if (plStack0000000000000040[3] != 0) {
      FUN_08de2d50(plStack0000000000000040[3],0);
      if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    if (plStack0000000000000040[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000038 = FUN_08df2f04(plStack0000000000000040[5],0);
    uVar2 = FUN_08c80df8(&stack0x00000038,0);
    if ((uVar2 & 1) == 0) {
      iStack000000000000004c = 1;
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000038;
      thunk_FUN_049ee3d8(unaff_x19 + 10,0);
      if (*(int *)(*plVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2b63c(unaff_x19 + 2,&stack0x00000038);
      goto LAB_08a43c70;
    }
  }
  else {
    if (in_w9 != 1) {
      if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (plStack0000000000000040[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      iStack000000000000004c = in_w9;
      lVar9 = FUN_08de5634(plStack0000000000000040[2],0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000038 = FUN_08df2f04(lVar9,0);
      uVar2 = FUN_08c80df8(&stack0x00000038,0);
      if ((uVar2 & 1) != 0) goto LAB_08a43904;
      iStack000000000000004c = 0;
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000038;
      thunk_FUN_049ee3d8(unaff_x19 + 10,0);
      if (*(int *)(*plVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2b63c(unaff_x19 + 2,&stack0x00000038);
LAB_08a43c70:
      uVar7 = 5;
      goto LAB_08a43c98;
    }
    in_stack_00000038 = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x19 + 10) = 0;
    iStack000000000000004c = -1;
    *unaff_x19 = 0xffffffff;
  }
  FUN_08c80ec0(&stack0x00000038,0);
  if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (plStack0000000000000040[3] != 0) {
    FUN_08de3224(plStack0000000000000040[3],0);
    if (plStack0000000000000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  plVar8 = plStack0000000000000040;
  puVar1 = PTR_DAT_0ac11498;
  lVar9 = plStack0000000000000040[10];
  if (lVar9 != 0) {
    lVar5 = *(long *)PTR_DAT_0ac11498;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar5 = *(long *)puVar1;
    }
    (**(code **)(lVar9 + 0x18))
              (*(undefined8 *)(lVar9 + 0x40),plVar8,**(undefined8 **)(lVar5 + 0xb8),
               *(undefined8 *)(lVar9 + 0x28));
  }
  uVar7 = 0x13;
LAB_08a43c98:
  FUN_0451b980(&stack0x00000008);
  if ((uVar7 < 0x14) && ((1 << (ulong)uVar7 & 0x80081U) != 0)) {
    lVar9 = *plVar10;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08c7f478(unaff_x19 + 2,0);
  }
  return;
}


