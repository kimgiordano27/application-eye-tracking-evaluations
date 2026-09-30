/*
FUNCTION_NAME: Oculus.Platform.CAPI$$StringFromNative
ENTRY_POINT: 055ad974
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Oculus_Platform_CAPI__StringFromNative(void)

{
  byte bVar1;
  bool in_ZR;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x21;
  long lVar13;
  long *unaff_x23;
  int unaff_w26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  int in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c();
  }
  puVar5 = (undefined8 *)__cxa_begin_catch();
  uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
  uVar7 = thunk_FUN_02df8d3c(uVar6,*(undefined8 *)*puVar5);
  if ((uVar7 & 1) == 0) {
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = *puVar5;
                    /* try { // try from 055adb4c to 056adb9f has its CatchHandler @ 055adf7c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&PTR_PTR_066567d8,0);
  }
  *(undefined8 *)(&stack0x00000050 + (long)in_stack_00000060 * 8) = *puVar5;
  in_stack_00000060 = in_stack_00000060 + 1;
  __cxa_end_catch();
  (**(code **)(*unaff_x19 + 0x1c8))();
  thunk_FUN_02dfd288(UnityEngine_UIElements_PanelRaycaster_var);
                    /* try { // try from 055ad9dc to 056ad9f3 has its CatchHandler @ 055adf40 */
  thunk_FUN_02dd3048();
  uVar7 = FUN_055ac320();
  if ((uVar7 & 1) == 0) {
    in_stack_00000060 = in_stack_00000060 + -1;
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(*(undefined8 *)(&stack0x00000050 + (long)in_stack_00000060 * 8));
  }
                    /* try { // try from 055ada14 to 056ada27 has its CatchHandler @ 055adf3c */
  FUN_055af384();
  in_stack_00000060 = in_stack_00000060 + -1;
  do {
    while( true ) {
      uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar7 & 1) == 0) {
                    /* try { // try from 055ada48 to 056ada5b has its CatchHandler @ 055adf70 */
        FUN_055b578c();
        goto LAB_055ada64;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 != 4) break;
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar7 = FUN_055afb58();
      if ((uVar7 & 1) == 0) {
        if (unaff_w26 == 0x1c) {
          uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          lVar10 = unaff_x19[0xc];
          uVar8 = FUN_055712a0();
          if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar7 = FUN_0558d8a0(uVar6,lVar10,uVar8,&stack0x00000068,0);
          if ((uVar7 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0547e2f8(0);
            FUN_055b0cf8();
          }
          else {
            in_stack_00000038 = in_stack_00000070;
            in_stack_00000030 = in_stack_00000068;
            thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0ac28,&stack0x00000030);
          }
        }
        else if (unaff_w26 == 0x1a) {
          uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          lVar10 = unaff_x19[9];
          lVar13 = unaff_x19[0xc];
          uVar8 = FUN_055712a0();
          if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar7 = FUN_0558d190(uVar6,(int)lVar10,lVar13,uVar8,&stack0x00000078,0);
          if ((uVar7 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0547e2f8(0);
            FUN_055b0cf8();
          }
          else {
            in_stack_00000030 = in_stack_00000078;
            thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_069fc268,&stack0x00000030);
          }
        }
        else {
          lVar10 = *in_stack_00000020;
          if ((lVar10 == 0) || (*(char *)(lVar10 + 0x12) == '\0')) {
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0547e2f8(0);
            FUN_055b0cf8();
          }
          else {
            if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            plVar11 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
            if (plVar11 == (long *)0x0) {
Oculus_Platform_CAPI_ovrKeyValuePair___ctor:
              lVar13 = 0;
            }
            else {
              bVar1 = *(byte *)(*(long *)System_Reflection_RuntimeAssembly_var + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)System_Reflection_RuntimeAssembly_var))
              goto Oculus_Platform_CAPI_ovrKeyValuePair___ctor;
              lVar13 = plVar11[6];
            }
            uVar8 = *(undefined8 *)(lVar10 + 0x18);
            uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            if (*(int *)(*(long *)UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var +
                        0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05590d40(uVar8,lVar13,uVar6,0,0);
          }
        }
        uVar7 = FUN_05574ae8();
        if ((uVar7 & 1) == 0) {
          thunk_FUN_02dfd288(System_Action<OVRColocationSession_Data>_TypeInfo);
          uVar6 = FUN_05574a94();
          uVar8 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar6,uVar8);
        }
        if (unaff_x27 == (long *)0x0) {
LAB_055ad6c8:
          FUN_055aeed0();
        }
        else {
          uVar7 = (**(code **)(*unaff_x27 + 0x1a8))();
          if ((uVar7 & 1) == 0) goto LAB_055ad6c8;
          FUN_055aeab8();
        }
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar10 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_069ff850) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_055ad74c;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c();
LAB_055ad74c:
        (*(code *)*puVar5)();
      }
    }
  } while (iVar2 == 5);
  if (iVar2 != 0xd) {
                    /* try { // try from 055adaac to 056adab3 has its CatchHandler @ 055adf38 */
    FUN_02979e58();
                    /* try { // try from 055adab8 to 056adacf has its CatchHandler @ 055adf30 */
    uVar3 = (**(code **)(*unaff_x19 + 0x188))();
    in_stack_00000030 = thunk_FUN_02dfd288(System_Drawing_Point_var);
                    /* try { // try from 055adae0 to 056adae7 has its CatchHandler @ 055adf2c */
    in_stack_00000038 = 0xffffffffffffffff;
    in_stack_00000040 = uVar3;
    uVar6 = FUN_0551e574(&stack0x00000030,0);
    uVar8 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_05362cb4(uVar8,uVar6,0);
    uVar6 = FUN_05574a94();
    uVar8 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,uVar8);
  }
LAB_055ada64:
                    /* try { // try from 055ada74 to 056ada7b has its CatchHandler @ 055adf54 */
  FUN_055b5560();
  return in_stack_00000018;
}


