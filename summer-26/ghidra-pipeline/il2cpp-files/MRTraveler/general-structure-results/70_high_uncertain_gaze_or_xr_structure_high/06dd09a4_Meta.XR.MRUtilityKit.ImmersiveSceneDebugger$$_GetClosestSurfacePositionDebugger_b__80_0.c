/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSurfacePositionDebugger>b__80_0
ENTRY_POINT: 06dd09a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06dd0bb0) */
/* WARNING: Removing unreachable block (ram,0x06dd0ce4) */

void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSurfacePositionDebugger>b__80_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  plVar7 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
  if (plVar7 != (long *)0x0) {
    iVar5 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
    puVar1 = PTR_DAT_08e91170;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        plVar8 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,iVar5,*(undefined8 *)(*plVar7 + 400))
        ;
        if ((((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x310)),
             plVar8 == (long *)0x0)) ||
            (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)puVar1,
                                         *(undefined8 *)(*plVar8 + 0x1b0)), plVar8 == (long *)0x0))
           || ((**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0)),
              unaff_x20 == 0)) goto LAB_06dd0ca4;
        uVar9 = FUN_06a4e574();
        if ((uVar9 & 1) == 0) {
          FUN_06a4e36c();
        }
        iVar5 = iVar5 + 1;
        iVar6 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
      } while (iVar5 < iVar6);
    }
    puVar3 = PTR_DAT_08e91178;
    puVar2 = PTR_DAT_08e91150;
    puVar1 = PTR_DAT_08e752e0;
    if (*(long *)(unaff_x21 + 0x18) != 0) {
      FUN_052e51e0(*(long *)(unaff_x21 + 0x18),*(undefined8 *)PTR_DAT_08e91168);
      in_stack_00000048 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000000;
      in_stack_00000058 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000010;
      do {
        while( true ) {
          uVar9 = FUN_049f0ae4(&stack0x00000040,*(undefined8 *)puVar2);
          lVar4 = in_stack_00000058;
          uVar10 = in_stack_00000050;
          if ((uVar9 & 1) == 0) {
            FUN_049f0ae0(&stack0x00000040,*(undefined8 *)PTR_DAT_08e91148);
            return;
          }
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar9 = FUN_06a4feb4();
          if ((uVar9 & 1) != 0) break;
          if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar7 = (long *)FUN_046c43fc(uVar10,lVar4,0,0,*(undefined8 *)PTR_DAT_08e91160);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          in_stack_00000038 =
               (long *)(**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310));
          FUN_06a4e36c();
          (**(code **)(*unaff_x19 + 0x208))();
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_05213710(lVar4,*(undefined8 *)PTR_DAT_08e752f0);
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000030 = in_stack_00000010;
        while (uVar9 = FUN_049dc4d0(&stack0x00000020,*(undefined8 *)puVar1),
              uVar10 = in_stack_00000030, (uVar9 & 1) != 0) {
          if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          plVar7 = (long *)(**(code **)(*in_stack_00000038 + 0x1a8))
                                     (in_stack_00000038,*(undefined8 *)puVar3,
                                      *(undefined8 *)(*in_stack_00000038 + 0x1b0));
          uVar10 = FUN_06e1373c(uVar10,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30(uVar10,uVar10);
          }
          (**(code **)(*plVar7 + 0x208))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x210));
        }
        FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e752d8);
      } while( true );
    }
  }
LAB_06dd0ca4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


