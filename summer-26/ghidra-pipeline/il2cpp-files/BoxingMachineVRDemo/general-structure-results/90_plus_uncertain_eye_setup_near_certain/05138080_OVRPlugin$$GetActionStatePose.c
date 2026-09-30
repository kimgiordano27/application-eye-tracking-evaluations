/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 05138080
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000002c;
  
  _in_stack_00000010 = FUN_042a16bc(param_1,0);
  uVar6 = FUN_0467cf10(&stack0x00000010,*(undefined8 *)PTR_DAT_0676aa98);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
    thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)PTR_DAT_06781588 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0301ebd8(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    uVar6 = FUN_0467cf5c(&stack0x00000010,*(undefined8 *)PTR_DAT_0676aa90);
    if ((uVar6 & 1) == 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 8);
      uVar2 = thunk_FUN_02dc61f4(PTR_DAT_067815f8);
      uVar2 = FUN_05095eec(uVar9,uVar2,0);
      uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06781640);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar2,uVar9);
    }
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = FUN_050954a0(*(long *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar10 = FUN_042a16bc(lVar3,0,*(undefined8 *)PTR_DAT_0676aaa0);
    _in_stack_00000010 = auVar10;
    uVar6 = FUN_0467cf10(&stack0x00000010,*(undefined8 *)PTR_DAT_0676aa98);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
      thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_06781588 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0301ebd8(unaff_x19 + 2,&stack0x00000010);
    }
    else {
      FUN_0467cf5c(&stack0x00000010,*(undefined8 *)PTR_DAT_0676aa90);
      plVar4 = *(long **)(unaff_x19 + 8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar1 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      plVar4 = *(long **)(unaff_x19 + 8);
      if (iVar1 != 4) {
        lVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar2 = FUN_04f8e414(0);
        plVar7 = *(long **)(unaff_x19 + 8);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uStack000000000000002c =
             (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        uVar9 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
        uVar9 = thunk_FUN_02d9d164(uVar9,&stack0x0000002c);
        uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067815f0);
        uVar2 = FUN_050f0ec0(uVar8,uVar2,uVar9,0);
        uVar2 = FUN_05095eec(plVar4,uVar2,0);
        uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06781640);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar2,uVar9);
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780c40);
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != *(long *)(PTR_DAT_0675e258 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar4);
        }
      }
      FUN_0512fd34(lVar3,plVar4);
      plVar4 = (long *)(unaff_x19 + 0xe);
      *plVar4 = lVar3;
      thunk_FUN_02dd37b4(plVar4,lVar3);
      lVar3 = *(long *)(unaff_x19 + 0xe);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
      uVar2 = thunk_FUN_02d9d438(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_0677d968);
      FUN_0512b384(lVar3,uVar2,uVar9);
      if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar3 = FUN_0512bd30(*plVar4,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                           *(undefined8 *)(unaff_x19 + 10));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar10 = FUN_0507b064(lVar3,0,0);
      uVar6 = FUN_04f2d31c();
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar10;
        thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
        if (*(int *)(*(long *)PTR_DAT_06781588 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03024544(unaff_x19 + 2);
      }
      else {
        FUN_04f2d338();
        puVar5 = (undefined8 *)(unaff_x19 + 0xe);
        uVar2 = *puVar5;
        *unaff_x19 = 0xfffffffe;
        *puVar5 = 0;
        thunk_FUN_02dd37b4(puVar5,0);
        if (*(int *)(*(long *)PTR_DAT_06781588 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03ded864(unaff_x19 + 2,uVar2,*(undefined8 *)PTR_DAT_06781638);
      }
    }
  }
  return;
}


