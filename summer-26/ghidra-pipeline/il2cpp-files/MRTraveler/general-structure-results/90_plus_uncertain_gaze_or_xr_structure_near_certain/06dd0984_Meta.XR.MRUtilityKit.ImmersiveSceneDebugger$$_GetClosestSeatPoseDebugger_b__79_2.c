/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__79_2
ENTRY_POINT: 06dd0984
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06dd0bb0) */
/* WARNING: Removing unreachable block (ram,0x06dd0ce4) */

void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__79_2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
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
  
  FUN_06a4d5c4(param_1,*unaff_x25);
  uVar9 = thunk_FUN_03cf5234(*unaff_x24);
  FUN_04e4b630(uVar9,*unaff_x23);
  if ((unaff_x19 != (long *)0x0) &&
     (plVar10 = (long *)(**(code **)(*unaff_x19 + 0x2e8))(), puVar3 = PTR_DAT_08e91138,
     plVar10 != (long *)0x0)) {
    iVar7 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
    puVar2 = PTR_DAT_08e91170;
    puVar1 = PTR_DAT_08e91120;
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        plVar11 = (long *)(**(code **)(*plVar10 + 0x188))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 400));
        if ((((plVar11 == (long *)0x0) ||
             (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x310)),
             plVar11 == (long *)0x0)) ||
            (plVar12 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                         (plVar11,*(undefined8 *)puVar2,
                                          *(undefined8 *)(*plVar11 + 0x1b0)), plVar12 == (long *)0x0
            )) || (uVar9 = (**(code **)(*plVar12 + 0x1c8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x1d0)), param_1 == 0))
        goto LAB_06dd0ca4;
        uVar13 = FUN_06a4e574(param_1,uVar9,*(undefined8 *)puVar1);
        if ((uVar13 & 1) == 0) {
          FUN_06a4e36c(param_1,uVar9,plVar11,*(undefined8 *)puVar3);
        }
        iVar7 = iVar7 + 1;
        iVar8 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
      } while (iVar7 < iVar8);
    }
    puVar5 = PTR_DAT_08e91178;
    puVar4 = PTR_DAT_08e91150;
    puVar2 = PTR_DAT_08e91128;
    puVar1 = PTR_DAT_08e752e0;
    if (*(long *)(unaff_x21 + 0x18) != 0) {
      FUN_052e51e0(*(long *)(unaff_x21 + 0x18),*(undefined8 *)PTR_DAT_08e91168);
      in_stack_00000048 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000000;
      in_stack_00000058 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000010;
      do {
        while( true ) {
          uVar13 = FUN_049f0ae4(&stack0x00000040,*(undefined8 *)puVar4);
          lVar6 = in_stack_00000058;
          uVar9 = in_stack_00000050;
          if ((uVar13 & 1) == 0) {
            FUN_049f0ae0(&stack0x00000040,*(undefined8 *)PTR_DAT_08e91148);
            return;
          }
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar13 = FUN_06a4feb4(param_1,in_stack_00000050,&stack0x00000038,*(undefined8 *)puVar2);
          if ((uVar13 & 1) != 0) break;
          if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar10 = (long *)FUN_046c43fc(uVar9,lVar6,0,0,*(undefined8 *)PTR_DAT_08e91160);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          in_stack_00000038 =
               (long *)(**(code **)(*plVar10 + 0x308))(plVar10,*(undefined8 *)(*plVar10 + 0x310));
          FUN_06a4e36c(param_1,uVar9,in_stack_00000038,*(undefined8 *)puVar3);
          (**(code **)(*unaff_x19 + 0x208))();
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_05213710(lVar6,*(undefined8 *)PTR_DAT_08e752f0);
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000030 = in_stack_00000010;
        while (uVar13 = FUN_049dc4d0(&stack0x00000020,*(undefined8 *)puVar1),
              uVar9 = in_stack_00000030, (uVar13 & 1) != 0) {
          if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          plVar10 = (long *)(**(code **)(*in_stack_00000038 + 0x1a8))
                                      (in_stack_00000038,*(undefined8 *)puVar5,
                                       *(undefined8 *)(*in_stack_00000038 + 0x1b0));
          uVar9 = FUN_06e1373c(uVar9,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30(uVar9,uVar9);
          }
          (**(code **)(*plVar10 + 0x208))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x210));
        }
        FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e752d8);
      } while( true );
    }
  }
LAB_06dd0ca4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


