/*
FUNCTION_NAME: FUN_0582a404
ENTRY_POINT: 0582a404
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_0582a404(long *param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  long *local_68;
  
  puVar3 = Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo;
  puVar1 = Unity_XR_Oculus_OculusUsages_TypeInfo;
  puVar2 = PTR_DAT_06a0f8a8;
  if ((DAT_06dc06e9 & 1) == 0) {
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarEyesPose_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarFacePose_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0aae0);
    FUN_02d965b8(PTR_DAT_06a0f1a8);
    FUN_02d965b8(PTR_DAT_06a0f1b0);
    FUN_02d965b8(PTR_DAT_06a0f1b8);
    FUN_02d965b8(PTR_DAT_06a0f8a8);
    FUN_02d965b8(PTR_DAT_06a0f3e8);
    FUN_02d965b8(PTR_DAT_06a0f3f0);
    FUN_02d965b8(PTR_DAT_06a0f8c0);
    FUN_02d965b8(PTR_DAT_06a0f8c8);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a187a8);
    FUN_02d965b8(Unity_XR_Oculus_OculusUsages_TypeInfo);
    DAT_06dc06e9 = 1;
  }
  local_68 = (long *)0x0;
  FUN_0588c430(param_1,*(undefined8 *)puVar3,0);
  FUN_058915a4(*param_2,*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_069fb9c0;
  uVar12 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar5 = (long *)FUN_054f73b4(uVar12,0);
  if (plVar5 == (long *)0x0) goto LAB_0582a974;
  uVar6 = (**(code **)(*plVar5 + 0x328))(plVar5,param_1,*(undefined8 *)(*plVar5 + 0x330));
  if ((uVar6 & 1) != 0) {
    uVar12 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar12 = FUN_054f73b4(uVar12,0);
    uVar6 = FUN_055006dc(param_1,uVar12,0);
    puVar2 = PTR_DAT_06a0aae0;
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_06a0f8c8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_058912cc(param_1,*(undefined8 *)puVar3,1,1,0);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 == 0) goto LAB_0582a974;
      uVar6 = FUN_046dc574(lVar7,param_1,&local_68,
                           *(undefined8 *)Oculus_Avatar2_OvrAvatarEyesPose_TypeInfo);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_06a0f8c8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        local_68 = (long *)FUN_0589513c(param_1,0);
        if (param_1 == (long *)0x0) goto LAB_0582a974;
        uVar6 = (**(code **)(*param_1 + 0x648))(param_1,*(undefined8 *)(*param_1 + 0x650));
        if ((uVar6 & 1) == 0) {
          FUN_046dc764(lVar7,param_1,local_68,
                       *(undefined8 *)Oculus_Avatar2_OvrAvatarFacePose_TypeInfo);
        }
      }
      plVar5 = local_68;
      if (*(int *)(*(long *)PTR_DAT_06a0f8c0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar7 = FUN_05891648(plVar5,0);
      if (lVar7 == 0) goto LAB_0582a974;
      if (*(long *)(lVar7 + 0x18) == 0) {
        if (param_3 == 0) goto LAB_0582a974;
        iVar4 = FUN_045e4584(param_3,*(undefined8 *)PTR_DAT_06a0f3e8);
        if (0 < iVar4) goto LAB_0582aa24;
      }
      else {
        if (param_3 == 0) goto LAB_0582a974;
        iVar4 = FUN_045e4584(param_3,*(undefined8 *)PTR_DAT_06a0f3e8);
        puVar2 = PTR_DAT_06a0f1b0;
        if (iVar4 != *(int *)(lVar7 + 0x18)) {
LAB_0582aa24:
          uVar12 = FUN_0583c9fc(0);
          goto LAB_0582a9f8;
        }
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0f1b8);
        FUN_03c22a18(lVar8,*(undefined8 *)puVar2);
        puVar1 = PTR_DAT_06a187a8;
        puVar2 = PTR_DAT_06a0f1a8;
        iVar4 = (int)*(undefined8 *)(lVar7 + 0x18);
        if (0 < iVar4) {
          uVar6 = 0;
          do {
            plVar5 = (long *)FUN_045e4610(param_3,uVar6 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0f3f0
                                         );
            if (*(uint *)(lVar7 + 0x18) <= (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            plVar13 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
            FUN_05891114(plVar5,*(undefined8 *)puVar1,uVar6 & 0xffffffff,0);
            if ((plVar13 == (long *)0x0) ||
               (plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x1f0)),
               plVar5 == (long *)0x0)) goto LAB_0582a974;
            uVar9 = FUN_05840a94(plVar5,0);
            if ((uVar9 & 1) != 0) {
              if (plVar13 == (long *)0x0) goto LAB_0582a974;
              uVar9 = FUN_05502130(plVar13,0);
              if ((uVar9 & 1) != 0) {
                plVar13 = (long *)(**(code **)(*plVar13 + 0x4a8))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x4b0));
                goto LAB_0582a7b8;
              }
              FUN_02979e58(plVar5);
              plVar5 = (long *)(**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400))
              ;
              FUN_02979e58();
              pcVar11 = *(code **)(*plVar5 + 0x9b8);
              uVar12 = *(undefined8 *)(*plVar5 + 0x9c0);
LAB_0582a9e8:
              uVar12 = (*pcVar11)(plVar5,uVar12);
              uVar12 = FUN_0583d4e0(uVar12,plVar13,0);
              goto LAB_0582a9f8;
            }
LAB_0582a7b8:
            uVar12 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
            if (*(int *)(*(long *)PTR_DAT_06a0f8c8 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)PTR_DAT_06a0f8c8);
            }
            uVar9 = FUN_058913b8(uVar12,plVar13,0);
            if ((uVar9 & 1) == 0) {
              FUN_02979e58(plVar5);
              pcVar11 = *(code **)(*plVar5 + 0x188);
              uVar12 = *(undefined8 *)(*plVar5 + 400);
              goto LAB_0582a9e8;
            }
            if (lVar8 == 0) goto LAB_0582a974;
            uVar9 = FUN_03c23c0c(lVar8,plVar5,*(undefined8 *)puVar2);
            if ((uVar9 & 1) == 0) {
              uVar12 = thunk_FUN_02dfd288(PTR_DAT_06a187a8);
              uVar12 = FUN_0583ac64(plVar5,uVar12,uVar6 & 0xffffffff,0);
              goto LAB_0582a9f8;
            }
            uVar6 = uVar6 + 1;
          } while (iVar4 != (int)uVar6);
        }
      }
      if (local_68 == (long *)0x0) {
LAB_0582a974:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar12 = (**(code **)(*local_68 + 0x498))(local_68,*(undefined8 *)(*local_68 + 0x4a0));
      lVar7 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
      }
      uVar10 = FUN_054f73b4(lVar7 + 0x20,0);
      uVar6 = FUN_05501380(uVar12,uVar10,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      if (local_68 == (long *)0x0) goto LAB_0582a974;
      uVar12 = (**(code **)(*local_68 + 0x498))(local_68,*(undefined8 *)(*local_68 + 0x4a0));
      plVar5 = (long *)*param_2;
      if (plVar5 == (long *)0x0) goto LAB_0582a974;
      uVar10 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      if (*(int *)(*(long *)PTR_DAT_06a0f8c8 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a0f8c8);
      }
      uVar6 = FUN_058913b8(uVar12,uVar10,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
      if (local_68 == (long *)0x0) goto LAB_0582a974;
      uVar12 = (**(code **)(*local_68 + 0x498))(local_68,*(undefined8 *)(*local_68 + 0x4a0));
      if (*(int *)(*(long *)PTR_DAT_06a0aae0 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a0aae0);
      }
      uVar6 = FUN_05891480(uVar12,param_2,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
      param_2 = (long *)*param_2;
      FUN_02979e58(param_2);
      uVar12 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      plVar5 = local_68;
      FUN_02979e58(local_68);
      lVar7 = *plVar5;
      uVar10 = (**(code **)(lVar7 + 0x498))(plVar5,*(undefined8 *)(lVar7 + 0x4a0));
      uVar12 = FUN_0583c428(uVar12,uVar10,0);
      goto LAB_0582a9f8;
    }
  }
  uVar12 = FUN_0583cc48(param_4,0);
LAB_0582a9f8:
  uVar10 = thunk_FUN_02dfd288(Oculus_Avatar2_OvrAvatarFaceTrackingBehaviorOvrPlugin_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar12,uVar10);
}


