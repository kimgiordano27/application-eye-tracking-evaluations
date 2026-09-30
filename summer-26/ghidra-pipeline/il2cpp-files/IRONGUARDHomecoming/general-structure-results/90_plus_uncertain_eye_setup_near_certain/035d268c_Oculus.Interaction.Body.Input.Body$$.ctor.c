/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.Body$$.ctor
ENTRY_POINT: 035d268c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035d2ab4) */
/* WARNING: Removing unreachable block (ram,0x035d2c64) */

void Oculus_Interaction_Body_Input_Body___ctor(void)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar10;
  long lVar11;
  int unaff_w24;
  undefined8 uVar12;
  long *unaff_x25;
  int iVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  if (*(int *)(*(long *)Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar11 = *(long *)(unaff_x19 + 8);
  if (lVar11 == 0) {
    lVar11 = thunk_FUN_01f117cc();
    thunk_FUN_01f3e6f0();
    *(undefined4 *)(lVar11 + 0x24) = 0xffffffff;
    FUN_035ac8e8(lVar11,0);
    thunk_FUN_01f3e6f0();
    *(undefined4 *)(lVar11 + 0x20) = 1;
  }
  else {
    if (*(int *)(*(long *)Method_Drawing_CommandBuilder_Reserve<CommandBuilder_PlaneData>__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = FUN_035d0428(lVar11,0);
  }
  *(long *)(unaff_x19 + 0x10) = lVar11;
  thunk_FUN_01f51358(unaff_x19 + 0x10,lVar11);
  plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_System_DateTimeParse_<>c_<DoStrictParse>b__98_0__,2);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *(long *)(unaff_x19 + 10);
  if ((lVar11 != 0) &&
     (lVar6 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
    uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,0);
  }
  if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar5[4] = lVar11;
  thunk_FUN_01f51358(plVar5 + 4,lVar11);
  lVar11 = *(long *)(unaff_x19 + 0x10);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = unaff_x19[0xc];
  FUN_035cf660(lVar11);
  in_stack_00000038 = lVar11;
  thunk_FUN_01f51358(&stack0x00000038,lVar11);
  lVar11 = in_stack_00000038;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar11 = FUN_035e6340(uVar1,lVar11,0);
  if ((lVar11 != 0) &&
     (lVar6 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
    uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,0);
  }
  if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar5[5] = lVar11;
  thunk_FUN_01f51358(plVar5 + 5,lVar11);
  lVar11 = FUN_035e74ac(plVar5,0);
  *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(unaff_x19 + 10);
  thunk_FUN_01f51358();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  _in_stack_00000020 =
       FUN_0277c878(lVar11,0,*(undefined8 *)
                              Method_UnityEngine_Rendering_DebugDisplaySettingsUI_<>c__DisplayClass3_0_<RegisterDebug>b__0__
                   );
  uVar7 = FUN_02a65e64(&stack0x00000020,
                       *(undefined8 *)
                        Method_UI_DamageTextsController_<>c__DisplayClass17_0_<SpawnText>b__0__);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
    thunk_FUN_01f51358(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_02124ae4(unaff_x19 + 2,&stack0x00000020);
    return;
  }
  lVar11 = FUN_02a65eb0(&stack0x00000020,
                        *(undefined8 *)
                         Method_UI_DamageTextsController_<>c__DisplayClass16_0_<Spawn>b__0__);
  plVar5 = (long *)(unaff_x19 + 0x12);
  if (*plVar5 == lVar11) {
    *plVar5 = 0;
    thunk_FUN_01f51358(plVar5,0);
    lVar11 = *(long *)(unaff_x19 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_035cf660(lVar11);
    FUN_035cf744(lVar11,0);
    uVar4 = 1;
    iVar13 = 10;
    iVar10 = 10;
    if (unaff_w24 < 0) goto FUN_035d2bf4;
LAB_035d28bc:
    iVar13 = iVar10;
    bVar2 = true;
  }
  else {
    uVar4 = 0;
    iVar13 = 0xb;
    iVar10 = 0xb;
    if (-1 < unaff_w24) goto LAB_035d28bc;
FUN_035d2bf4:
    plVar5 = *(long **)(unaff_x19 + 0x10);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_035d2c50;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_035d2c50:
      (*(code *)*puVar8)(plVar5,puVar8[1]);
    }
    bVar2 = false;
  }
  if (iVar13 != 0xb) {
    if (iVar13 == 10) goto LAB_035d2a4c;
    if (iVar13 != 0) {
      return;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01f51358(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_035ce230(uVar12,(long)&stack0x00000018 + 4);
  uVar7 = FUN_035d1d44();
  if ((uVar7 & 1) == 0) {
    iVar10 = 0xd;
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035cd7fc(unaff_x19 + 8);
    uVar4 = 0;
    iVar10 = 10;
  }
  if (!bVar2 && in_stack_00000018._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar12);
  }
  if (iVar10 != 0xd) {
    if (iVar10 == 10) goto LAB_035d2a4c;
    if (iVar10 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  auVar14 = FUN_0277b12c(*(long *)(unaff_x19 + 10),0,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_ToList<MarkToMarkAdjustmentRecord>__);
  uVar7 = FUN_02a65cec();
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar14;
    thunk_FUN_01f51358(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_021248d0(unaff_x19 + 2);
    return;
  }
  uVar4 = FUN_02a65d38();
LAB_035d2a4c:
  *unaff_x19 = 0xfffffffe;
  puVar3 = Method_System_Collections_Generic_Stack<ValueTuple<bool,_GradientFill>>__ctor__;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f4d88(unaff_x19 + 2,uVar4 & 1,*(undefined8 *)puVar3);
  return;
}


