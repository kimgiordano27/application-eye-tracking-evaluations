/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Cowatching_SetViewerData
ENTRY_POINT: 055b2fdc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Oculus_Platform_CAPI__ovr_Cowatching_SetViewerData(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *in_x9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long lVar8;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  while (plVar2 = (long *)(*in_x9)(), plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    uVar3 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar3 & 1) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar7 = FUN_0547e2f8(0);
      uVar6 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
LAB_055b322c:
      FUN_055873e0(uVar6,uVar7);
LAB_055b3234:
      uVar6 = FUN_05574a94();
      uVar7 = thunk_FUN_02dfd288(System_Action<IntPtr,_int,_IntPtr,_int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_055d29a8();
    if (unaff_x24 == 0) break;
    FUN_053f2720();
LAB_055b303c:
    uVar3 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar3 & 1) == 0) {
      FUN_055b578c();
      goto LAB_055b3074;
    }
    iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar1 != 4) goto code_r0x055b2fc4;
    in_x9 = *(code **)(*unaff_x19 + 0x198);
  }
LAB_055b3198:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
code_r0x055b2fc4:
  if (iVar1 == 5) goto LAB_055b303c;
  if (iVar1 != 0xd) {
    FUN_02979e58();
    (**(code **)(*unaff_x19 + 0x188))();
    thunk_FUN_02dfd288(System_Drawing_Point_var);
    uVar6 = FUN_0551e574();
    uVar7 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_05362cb4(uVar7,uVar6,0);
    goto LAB_055b3234;
  }
LAB_055b3074:
  if (*(char *)(unaff_x20 + 0x2a) == '\0') {
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar7 = FUN_0547e2f8(0);
    FUN_02979e58();
    uVar6 = thunk_FUN_02dfd288(System_Action<string,_string,_LogType>_TypeInfo);
    goto LAB_055b322c;
  }
  lVar8 = *(long *)(unaff_x20 + 0xc0);
  if (lVar8 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar7 = FUN_0547e2f8(0);
    uVar6 = thunk_FUN_02dfd288(
                              System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                              );
    goto LAB_055b322c;
  }
  plVar2 = (long *)FUN_02d966a4(*unaff_x27,2);
  if (plVar2 == (long *)0x0) goto LAB_055b3198;
  if ((unaff_x24 != 0) && (lVar4 = thunk_FUN_02dd3048(), lVar4 == 0)) {
LAB_055b3264:
    uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = unaff_x24;
    LeanTween__value();
    if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_055b3198;
    lVar4 = thunk_FUN_02dd2d7c(*unaff_x26);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
    goto LAB_055b3264;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar4;
      LeanTween__value(plVar2 + 5,lVar4);
      uVar6 = (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),plVar2,*(undefined8 *)(lVar8 + 0x28));
      if (unaff_x22 != 0) {
        FUN_055b4f70();
      }
      FUN_055b5334();
      FUN_055b5560();
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


