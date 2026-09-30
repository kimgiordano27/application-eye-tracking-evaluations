/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_base_t$$Dispose
ENTRY_POINT: 05feeca4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_req_base_t__Dispose(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar7;
  long *plVar8;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_02d965b8();
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<CleanupAsync>d__117>__
              );
  FUN_02d965b8(PTR_DAT_069fd9c8);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<DeleteAsync>d__122>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<RelayHandler_<JoinAllocationAsync>d__17>__
              );
  *(undefined1 *)(unaff_x21 + 0x942) = 1;
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_0552aca4(lVar2,0);
  if (lVar2 == 0) goto LAB_05fef018;
  *(long *)(lVar2 + 0x10) = unaff_x19;
  LeanTween__value();
  uVar1 = *(uint *)(unaff_x19 + 0x98);
  if ((uVar1 | 4) != 4) {
    plVar8 = *(long **)(unaff_x19 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_05fef018;
    lVar2 = *plVar8;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
           ) {
          puVar7 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto Unity_Services_Vivox_vx_req_connector_create_t___ctor;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar8,*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
                          ,0);
Unity_Services_Vivox_vx_req_connector_create_t___ctor:
    uVar4 = (*(code *)*puVar7)(plVar8,uVar1,puVar7[1]);
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar4,*(undefined8 *)(lVar2 + 0x28))
      ;
    }
    if (*(int *)(*(long *)PTR_DAT_069fd9c8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    goto LAB_05fef004;
  }
  uVar3 = FUN_05fee724();
  if ((uVar3 & 1) == 0) {
    if ((unaff_x20 == 0) || (*(char *)(unaff_x20 + 0x10) != '\0')) {
      plVar8 = *(long **)(unaff_x19 + 0xa8);
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ServicePointScheduler_<RunScheduler>d__32>__
                                );
      if (plVar8 != (long *)0x0) {
        lVar2 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<CleanupAsync>d__117>__
               ) {
              lVar2 = lVar2 + (long)*piVar6 * 0x10 + 0x138;
              goto LAB_05feef10;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        lVar2 = FUN_02dd004c(plVar8,*(long *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<CleanupAsync>d__117>__
                             ,0);
LAB_05feef10:
        FUN_03b6fe3c(uVar4,plVar8,*(undefined8 *)(lVar2 + 8),0);
        goto LAB_05feef2c;
      }
LAB_05fef018:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05fef018;
    FUN_05ff5a50(*(long *)(unaff_x19 + 0x88),0);
    plVar8 = *(long **)(unaff_x19 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_05fef018;
    lVar5 = *plVar8;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar2 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
    ;
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_05feefa0;
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05fef018;
    puVar7 = (undefined8 *)(lVar2 + 0x18);
    *puVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x88) + 0x10);
    LeanTween__value(puVar7);
    uVar3 = FUN_0536c9cc(*puVar7,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ServicePointScheduler_<RunScheduler>d__32>__
                                );
      FUN_03b6fe3c(uVar4,lVar2,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<DeleteAsync>d__122>__
                   ,0);
LAB_05feef2c:
      FUN_05fef078();
      return;
    }
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05fef018;
    FUN_05ff5a50(*(long *)(unaff_x19 + 0x88),0);
    plVar8 = *(long **)(unaff_x19 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_05fef018;
    lVar5 = *plVar8;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar2 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
    ;
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_05feefa0;
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
  }
  puVar7 = (undefined8 *)FUN_02dd004c(plVar8,lVar2,1);
  goto LAB_05feefb0;
LAB_05feefa0:
  puVar7 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
LAB_05feefb0:
  uVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
  lVar2 = *(long *)(unaff_x19 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar4,*(undefined8 *)(lVar2 + 0x28));
  }
  FUN_05fef178();
  if (*(int *)(*(long *)PTR_DAT_069fd9c8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
LAB_05fef004:
  FUN_0555ca9c(uVar4,0);
  return;
}


