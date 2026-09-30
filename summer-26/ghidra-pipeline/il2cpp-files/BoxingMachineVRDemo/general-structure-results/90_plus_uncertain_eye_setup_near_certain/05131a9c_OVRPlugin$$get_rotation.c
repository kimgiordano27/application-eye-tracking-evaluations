/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 05131a9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x22;
  undefined1 auVar9 [16];
  
  uVar2 = FUN_0467cf5c(&stack0x00000010,**(undefined8 **)(param_1 + 0xa90));
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  if ((uVar2 & 1) == 0) {
    lVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_04f8e414(0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar4 = (long *)thunk_FUN_02d709fc();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781150);
    uVar5 = FUN_050f0ec0(uVar7,uVar5,uVar6,0);
    uVar8 = FUN_05095eec(uVar8,uVar5,0);
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781358);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar8,uVar5);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar3 = FUN_0512c3a0();
  if (lVar3 != 0) {
    auVar9 = FUN_0507b064(lVar3,0,0);
    uVar2 = FUN_04f2d31c();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar9;
      thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e830c(unaff_x19 + 2);
    }
    else {
      FUN_04f2d338();
      plVar4 = *(long **)(unaff_x19 + 8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar1 = (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(*plVar4 + 0x270));
      if ((int)unaff_x19[0x10] < iVar1) {
        uVar8 = *(undefined8 *)(unaff_x19 + 8);
        lVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_04f8e414(0);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar4 = (long *)thunk_FUN_02d709fc();
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781158);
        uVar5 = FUN_050f0ec0(uVar7,uVar5,uVar6,0);
        uVar8 = FUN_05095eec(uVar8,uVar5,0);
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781358);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar8,uVar5);
      }
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_04f2db0c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


