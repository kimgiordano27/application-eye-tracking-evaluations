/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_removed_t$$Dispose
ENTRY_POINT: 05fea83c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_vx_evt_session_removed_t__Dispose(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  int unaff_w22;
  long lVar9;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float unaff_s8;
  float unaff_s9;
  long in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000038;
  
  while (param_1 != 0) {
    FUN_05fe5ab4();
    do {
      if (in_stack_00000038 == 0) goto LAB_05fea8b0;
      uVar6 = FUN_0364d32c(in_stack_00000038,&stack0x00000020,*unaff_x29);
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000020 == (long *)0x0) goto LAB_05fea8b0;
        (**(code **)(*in_stack_00000020 + 0x208))
                  (in_stack_00000020,*(undefined8 *)(*in_stack_00000020 + 0x210));
      }
      if (in_stack_00000038 == 0) goto LAB_05fea8b0;
      uVar6 = FUN_0364d32c(in_stack_00000038,&stack0x00000018,*unaff_x27);
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_05fea8b0;
        (**(code **)(*in_stack_00000018 + 0x208))
                  (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x210));
      }
      do {
        do {
          unaff_w22 = unaff_w22 + 1;
          if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_05fea8b0;
          iVar3 = FUN_044190b4(*(long *)(unaff_x20 + 0x48),*unaff_x26);
          if (iVar3 <= unaff_w22) {
            lVar7 = FUN_05fea328();
            puVar1 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmittingAsync>d__168>__
            ;
            if (lVar7 == 0) goto LAB_05fea8b0;
            lVar7 = FUN_0364c2b0(lVar7,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmittingAsync>d__168>__
                                );
            lVar8 = *(long *)(unaff_x20 + 0x48);
            if (lVar8 == 0) goto LAB_05fea8b0;
            lVar9 = 0;
            iVar3 = 0;
            goto LAB_05fea8e8;
          }
          uVar6 = FUN_05fea458();
        } while ((uVar6 & 1) == 0);
        uVar4 = FUN_05fea4e4();
        lVar7 = in_stack_00000038;
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x25);
        }
        uVar6 = FUN_0634eb94(lVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if (in_stack_00000038 == 0) goto LAB_05fea8b0;
          FUN_0634f038(in_stack_00000038,uVar4 & 1,0);
        }
      } while (unaff_s8 < unaff_s9 || ((uVar4 ^ 0xffffffff) & 1) != 0);
      if (in_stack_00000038 == 0) goto LAB_05fea8b0;
      uVar6 = FUN_0364d32c(in_stack_00000038,&stack0x00000028,*unaff_x28);
      param_1 = in_stack_00000028;
    } while ((uVar6 & 1) == 0);
  }
  goto LAB_05fea8b0;
  while( true ) {
    *(long *)(lVar7 + 0x48) = lVar9;
    LeanTween__value((long *)(lVar7 + 0x48),lVar9);
    uVar6 = FUN_05fea458();
    if ((uVar6 & 1) == 0) {
      iVar3 = iVar3 + 1;
    }
    else {
      uVar6 = FUN_05fea4e4();
      lVar8 = *(long *)(unaff_x20 + 0x48);
      lVar2 = lVar7;
      if ((uVar6 & 1) == 0) {
        lVar2 = lVar9;
      }
      while( true ) {
        lVar9 = lVar2;
        if (lVar8 == 0) goto LAB_05fea8b0;
        iVar3 = iVar3 + 1;
        iVar5 = FUN_044190b4(lVar8,*unaff_x26);
        if (iVar5 <= iVar3) {
          *(undefined8 *)(lVar7 + 0x50) = 0;
          LeanTween__value((undefined8 *)(lVar7 + 0x50),0);
          return;
        }
        uVar6 = FUN_05fea458();
        if (((uVar6 & 1) != 0) && (uVar6 = FUN_05fea4e4(), (uVar6 & 1) != 0)) break;
        lVar8 = *(long *)(unaff_x20 + 0x48);
        lVar2 = lVar9;
      }
      if (in_stack_00000010 == 0) break;
      lVar8 = FUN_0364c2b0(in_stack_00000010,*(undefined8 *)puVar1);
      *(long *)(lVar7 + 0x50) = lVar8;
      LeanTween__value((long *)(lVar7 + 0x50),lVar8);
      lVar7 = lVar8;
    }
    lVar8 = *(long *)(unaff_x20 + 0x48);
    if (lVar8 == 0) break;
LAB_05fea8e8:
    iVar5 = FUN_044190b4(lVar8,*unaff_x26);
    if (iVar5 <= iVar3) {
      return;
    }
    if (lVar7 == 0) break;
  }
LAB_05fea8b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


