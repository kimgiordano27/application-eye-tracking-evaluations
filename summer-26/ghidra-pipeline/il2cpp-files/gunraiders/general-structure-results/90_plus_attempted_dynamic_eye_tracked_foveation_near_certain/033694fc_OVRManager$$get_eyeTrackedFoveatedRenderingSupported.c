/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 033694fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_9;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined1 auVar8 [16];
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x498));
  FUN_01c5d288(PTR_DAT_04230108);
  FUN_01c5d288(PTR_DAT_042304a8);
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__);
  FUN_01c5d288(PTR_DAT_042304e0);
  uVar2 = FUN_01c5d288(PTR_DAT_0422fa28);
  *(undefined1 *)(unaff_x22 + 0x54d) = 1;
  switch(unaff_w21) {
  case 0:
    return;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x1a8);
    goto LAB_03369878;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x1c8);
    goto LAB_03369878;
  case 3:
    auVar8 = FUN_0336c7fc();
    if (unaff_x20 == (long *)0x0) {
OVRManager__get_systemHeadsetType:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(auVar8._0_8_,auVar8._8_8_);
    }
    (**(code **)(*unaff_x20 + 0x168))();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x1e8);
    break;
  case 4:
    auVar8 = FUN_0336c7fc();
    if (unaff_x20 == (long *)0x0) goto OVRManager__get_systemHeadsetType;
    (**(code **)(*unaff_x20 + 0x168))();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x208);
    break;
  case 5:
    if (unaff_x20 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar2 = (**(code **)(*unaff_x20 + 0x168))();
      uVar6 = uVar2;
    }
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar2;
    if (unaff_x19 == (long *)0x0) goto OVRManager__get_systemHeadsetType;
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x528);
    break;
  case 6:
    if (unaff_x20 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar2 = (**(code **)(*unaff_x20 + 0x168))();
      uVar6 = uVar2;
    }
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar2;
    if (unaff_x19 == (long *)0x0) goto OVRManager__get_systemHeadsetType;
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x2b8);
    break;
  case 7:
    FUN_0336c7fc();
    puVar1 = PTR_DAT_04230358;
    if ((unaff_x20 != (long *)0x0) && (*unaff_x20 == *(long *)PTR_DAT_04230358)) {
      thunk_FUN_01c49834();
      thunk_FUN_01c49334(*(undefined8 *)puVar1);
      (**(code **)(*unaff_x19 + 0x518))();
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    FUN_03252aa8();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x2f8);
    break;
  case 8:
    FUN_0336c7fc();
    if (unaff_x20 != (long *)0x0) {
      lVar3 = *unaff_x20;
      if (lVar3 == *(long *)PTR_DAT_04230108) {
        thunk_FUN_01c49834();
        UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x398);
        goto FUN_03369a80;
      }
      if (lVar3 == *(long *)PTR_DAT_042304a8) {
        puVar4 = (undefined8 *)thunk_FUN_01c49834();
        lVar3 = *unaff_x19;
        uVar2 = *puVar4;
        goto LAB_03369aa8;
      }
      if (lVar3 == *(long *)PTR_DAT_042304e0) {
        puVar5 = (undefined4 *)thunk_FUN_01c49834();
                    /* WARNING: Could not recover jumptable at 0x03369af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x318))(*puVar5);
        return;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    uVar2 = FUN_03253790();
    lVar3 = *unaff_x19;
LAB_03369aa8:
                    /* WARNING: Could not recover jumptable at 0x03369ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x328))(uVar2);
    return;
  case 9:
    if (unaff_x20 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar2 = (**(code **)(*unaff_x20 + 0x168))();
      uVar6 = uVar2;
    }
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar2;
    if (unaff_x19 == (long *)0x0) goto OVRManager__get_systemHeadsetType;
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x2c8);
    break;
  case 10:
    FUN_0336c7fc();
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    FUN_0325057c();
                    /* WARNING: Could not recover jumptable at 0x03369834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x338))();
    return;
  case 0xb:
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x288);
    goto LAB_03369878;
  case 0xc:
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x298);
    goto LAB_03369878;
  case 0xd:
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x1b8);
    goto LAB_03369878;
  case 0xe:
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x1d8);
    goto LAB_03369878;
  case 0xf:
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x1f8);
LAB_03369878:
                    /* WARNING: Could not recover jumptable at 0x0336988c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 0x10:
    FUN_0336c7fc();
    if ((unaff_x20 != (long *)0x0) &&
       (*unaff_x20 == *(long *)UnityEngine_ISubsystemDescriptor_TypeInfo)) {
      thunk_FUN_01c49834();
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x3b8);
FUN_03369a80:
                    /* WARNING: Could not recover jumptable at 0x03369a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    FUN_03253e3c();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x3a8);
    break;
  case 0x11:
    FUN_0336c7fc();
    if (unaff_x20 != (long *)0x0) {
      if (*unaff_x20 ==
          *(long *)Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__) {
        thunk_FUN_01c49834();
        UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x3c8);
        goto FUN_03369a80;
      }
      lVar3 = thunk_FUN_01c495e4();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x4f8);
    break;
  default:
    thunk_FUN_01c273e8(PTR_DAT_042308a0);
    uVar2 = thunk_FUN_01c49334();
    uVar6 = thunk_FUN_01c273e8(PTR_DAT_04231be0);
    uVar7 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<PhotonPlayerHealth_PlayerKillStats>_get_Current__
                              );
    uVar2 = FUN_03373998(uVar6,uVar2,uVar7,0);
    uVar6 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_Dispose__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x033699f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


