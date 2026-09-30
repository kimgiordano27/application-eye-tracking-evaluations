/*
FUNCTION_NAME: Unity.VisualScripting.ProfilingUtility$$EndSample
ENTRY_POINT: 05bcdb4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_ProfilingUtility__EndSample(code *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uVar2 = (*param_1)();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = uVar2;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x21 + 0x10));
  lVar6 = *unaff_x20;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(lVar6 + 0x10) == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_067646e8);
    uVar2 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(
                              Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__
                              );
    FUN_050096cc(uVar2,uVar5,0);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_05bcce08(*unaff_x20,uVar2);
    uVar5 = thunk_FUN_02dc61f4(
                              Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar2,uVar5);
  }
  lVar3 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
  if (lVar3 != 0) {
    uVar1 = FUN_047caab4(lVar3,*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__
                        );
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb80);
    FUN_03a37aec(uVar2,uVar1,*(undefined8 *)PTR_DAT_0676a610);
    *(undefined8 *)(lVar6 + 0x18) = uVar2;
    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x18),uVar2);
    lVar6 = *unaff_x20;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_05bc9bcc(&stack0x00000008,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
    FUN_05bc9c0c(&stack0x00000008);
    if (*unaff_x20 != 0) {
      lVar6 = FUN_05bccd24();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      in_stack_00000028 = FUN_0507b03c(lVar6,0);
      uVar4 = FUN_04f2cc60(&stack0x00000028,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
        thunk_FUN_02dd37b4(unaff_x19 + 0xc,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_032e7a50(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        FUN_04f2cd2c(&stack0x00000028,0);
        if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_05bcce84();
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 10) = 0;
        thunk_FUN_02dd37b4(unaff_x19 + 10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_04f2db0c(unaff_x19 + 2,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


