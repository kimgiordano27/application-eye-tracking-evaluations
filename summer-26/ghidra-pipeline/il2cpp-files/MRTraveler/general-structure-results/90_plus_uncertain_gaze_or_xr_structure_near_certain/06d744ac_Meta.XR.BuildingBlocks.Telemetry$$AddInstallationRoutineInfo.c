/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddInstallationRoutineInfo
ENTRY_POINT: 06d744ac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddInstallationRoutineInfo(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  char cStack0000000000000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  
  if ((*(byte *)(unaff_x20 + 0x9ad) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e824a8);
    FUN_03c8f898(PTR_DAT_08e824b0);
    FUN_03c8f898(PTR_DAT_08e824b8);
    FUN_03c8f898(PTR_DAT_08e824d0);
    FUN_03c8f898(PTR_DAT_08e8f338);
    FUN_03c8f898(PTR_DAT_08e8f340);
    FUN_03c8f898(PTR_DAT_08e8f348);
    *(undefined1 *)(unaff_x20 + 0x9ad) = 1;
  }
  _cStack0000000000000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    return;
  }
  auVar6 = ZEXT816(0);
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN_06d5f820(*(long *)(param_1 + 0x178),0);
    puVar4 = PTR_DAT_08e8f338;
    puVar3 = PTR_DAT_08e824d0;
    puVar2 = PTR_DAT_08e824b0;
    puVar1 = PTR_DAT_08e824a8;
    auVar6._8_8_ = in_stack_00000028;
    auVar6._0_8_ = in_stack_00000020;
    if (*(long *)(param_1 + 0x168) != 0) {
      FUN_05213710(&stack0x00000070,*(long *)(param_1 + 0x168),*(undefined8 *)PTR_DAT_08e824d0);
      in_stack_00000038 = in_stack_00000078;
      in_stack_00000030 = in_stack_00000070;
      in_stack_00000040 = in_stack_00000080;
      while (uVar5 = FUN_049dc4d0(&stack0x00000030,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
        if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        (**(code **)(*in_stack_00000040 + 0x278))
                  (in_stack_00000040,param_1,*(undefined8 *)(param_1 + 0xa0),
                   *(undefined8 *)(*in_stack_00000040 + 0x280));
      }
      FUN_049dc4cc(&stack0x00000030,*(undefined8 *)puVar1);
      auVar6._8_8_ = in_stack_00000028;
      auVar6._0_8_ = in_stack_00000020;
      _cStack0000000000000050 = 0;
      in_stack_00000058 = 0;
      in_stack_00000060 = (long *)0x0;
      if (*(long *)(param_1 + 0x168) != 0) {
        FUN_05213710(&stack0x00000070,*(long *)(param_1 + 0x168),*(undefined8 *)puVar3);
        in_stack_00000038 = in_stack_00000078;
        in_stack_00000030 = in_stack_00000070;
        in_stack_00000040 = in_stack_00000080;
        while (uVar5 = FUN_049dc4d0(&stack0x00000030,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
          in_stack_00000008 = in_stack_00000058;
          in_stack_00000000 = _cStack0000000000000050;
          in_stack_00000010 = in_stack_00000060;
          if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          in_stack_00000078 = in_stack_00000058;
          in_stack_00000070 = _cStack0000000000000050;
          in_stack_00000080 = in_stack_00000060;
          auVar6 = (**(code **)(*in_stack_00000040 + 0x298))
                             (in_stack_00000040,&stack0x00000070,param_1,
                              *(undefined8 *)(param_1 + 0xa0),
                              *(undefined8 *)(*in_stack_00000040 + 0x2a0));
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          in_stack_00000080 = (long *)0x0;
          FUN_056b762c(&stack0x00000070,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar4);
          in_stack_00000058 = in_stack_00000078;
          _cStack0000000000000050 = in_stack_00000070;
          in_stack_00000060 = in_stack_00000080;
        }
        FUN_049dc4cc(&stack0x00000030,*(undefined8 *)puVar1);
        puVar4 = PTR_DAT_08e8f348;
        if (cStack0000000000000050 != '\0') {
          _in_stack_00000020 = FUN_056b7644(&stack0x00000050,*(undefined8 *)PTR_DAT_08e8f348);
          uVar5 = FUN_085994e8(&stack0x00000020,0);
          if ((uVar5 & 1) == 0) {
            auVar6 = FUN_056b7644(&stack0x00000050,*(undefined8 *)puVar4);
            _in_stack_00000020 = auVar6;
            FUN_0859945c(&stack0x00000020,0);
          }
        }
        auVar6 = _in_stack_00000020;
        if (*(long *)(param_1 + 0x168) != 0) {
          FUN_05213710(*(long *)(param_1 + 0x168),*(undefined8 *)puVar3);
          in_stack_00000038 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000000;
          in_stack_00000040 = in_stack_00000010;
          while( true ) {
            uVar5 = FUN_049dc4d0(&stack0x00000030,*(undefined8 *)puVar2);
            if ((uVar5 & 1) == 0) {
              FUN_049dc4cc(&stack0x00000030,*(undefined8 *)puVar1);
              FUN_06d74890(param_1);
              return;
            }
            if (in_stack_00000040 == (long *)0x0) break;
            (**(code **)(*in_stack_00000040 + 0x288))
                      (in_stack_00000040,param_1,*(undefined8 *)(param_1 + 0xa0),
                       *(undefined8 *)(*in_stack_00000040 + 0x290));
          }
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
      }
    }
  }
  _in_stack_00000020 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


