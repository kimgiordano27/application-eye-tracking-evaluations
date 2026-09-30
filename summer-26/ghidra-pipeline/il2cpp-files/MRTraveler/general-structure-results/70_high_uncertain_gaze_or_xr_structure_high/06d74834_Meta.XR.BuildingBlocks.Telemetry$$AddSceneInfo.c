/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 06d74834
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06d74884) */

void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(void)

{
  undefined *puVar1;
  bool in_ZR;
  ulong uVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined1 auVar5 [16];
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
  
  if (!in_ZR) {
    FUN_049dc4cc(&stack0x00000030,*unaff_x22);
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0();
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar4 = *plVar3;
  __cxa_end_catch();
  FUN_049dc4cc(&stack0x00000030,*unaff_x22);
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar4);
  }
  _cStack0000000000000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  if (*(long *)(unaff_x19 + 0x168) != 0) {
    FUN_05213710(&stack0x00000070,*(long *)(unaff_x19 + 0x168),*unaff_x24);
    in_stack_00000038 = in_stack_00000078;
    in_stack_00000030 = in_stack_00000070;
    in_stack_00000040 = in_stack_00000080;
    while (uVar2 = FUN_049dc4d0(&stack0x00000030,*unaff_x23), (uVar2 & 1) != 0) {
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
      auVar5 = (**(code **)(*in_stack_00000040 + 0x298))(in_stack_00000040,&stack0x00000070);
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      in_stack_00000080 = (long *)0x0;
      FUN_056b762c(&stack0x00000070,auVar5._0_8_,auVar5._8_8_,*unaff_x25);
      in_stack_00000058 = in_stack_00000078;
      _cStack0000000000000050 = in_stack_00000070;
      in_stack_00000060 = in_stack_00000080;
    }
    FUN_049dc4cc(&stack0x00000030,*unaff_x22);
    puVar1 = PTR_DAT_08e8f348;
    if (cStack0000000000000050 != '\0') {
      _in_stack_00000020 = FUN_056b7644(&stack0x00000050,*(undefined8 *)PTR_DAT_08e8f348);
      uVar2 = FUN_085994e8(&stack0x00000020,0);
      if ((uVar2 & 1) == 0) {
        auVar5 = FUN_056b7644(&stack0x00000050,*(undefined8 *)puVar1);
        _in_stack_00000020 = auVar5;
        FUN_0859945c(&stack0x00000020,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x168) != 0) {
      FUN_05213710(*(long *)(unaff_x19 + 0x168),*unaff_x24);
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      in_stack_00000040 = in_stack_00000010;
      while( true ) {
        uVar2 = FUN_049dc4d0(&stack0x00000030,*unaff_x23);
        if ((uVar2 & 1) == 0) {
          FUN_049dc4cc(&stack0x00000030,*unaff_x22);
          FUN_06d74890();
          return;
        }
        if (in_stack_00000040 == (long *)0x0) break;
        (**(code **)(*in_stack_00000040 + 0x288))();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


