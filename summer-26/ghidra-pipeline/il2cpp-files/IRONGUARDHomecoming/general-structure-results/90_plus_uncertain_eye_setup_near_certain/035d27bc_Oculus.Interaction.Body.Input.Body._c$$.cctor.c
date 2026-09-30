/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.Body.<>c$$.cctor
ENTRY_POINT: 035d27bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035d2ab4) */
/* WARNING: Removing unreachable block (ram,0x035d2c64) */

void Oculus_Interaction_Body_Input_Body_<>c___cctor(void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  long *plVar9;
  int unaff_w24;
  undefined8 uVar10;
  long *unaff_x25;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar4 = thunk_FUN_01f116d0();
  if (lVar4 == 0) {
    uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,0);
  }
  if (*(uint *)(unaff_x21 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(unaff_x21 + 0x28) = unaff_x22;
  thunk_FUN_01f51358();
  lVar4 = FUN_035e74ac();
  *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(unaff_x19 + 10);
  thunk_FUN_01f51358();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  _in_stack_00000020 =
       FUN_0277c878(lVar4,0,*(undefined8 *)
                             Method_UnityEngine_Rendering_DebugDisplaySettingsUI_<>c__DisplayClass3_0_<RegisterDebug>b__0__
                   );
  uVar5 = FUN_02a65e64(&stack0x00000020,
                       *(undefined8 *)
                        Method_UI_DamageTextsController_<>c__DisplayClass17_0_<SpawnText>b__0__);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
    thunk_FUN_01f51358(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_02124ae4(unaff_x19 + 2,&stack0x00000020);
    return;
  }
  lVar4 = FUN_02a65eb0(&stack0x00000020,
                       *(undefined8 *)
                        Method_UI_DamageTextsController_<>c__DisplayClass16_0_<Spawn>b__0__);
  plVar9 = (long *)(unaff_x19 + 0x12);
  if (*plVar9 == lVar4) {
    *plVar9 = 0;
    thunk_FUN_01f51358(plVar9,0);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_035cf660(lVar4);
    FUN_035cf744(lVar4,0);
    uVar3 = 1;
    iVar11 = 10;
    iVar8 = 10;
    if (unaff_w24 < 0) goto FUN_035d2bf4;
LAB_035d28bc:
    iVar11 = iVar8;
    bVar1 = true;
  }
  else {
    uVar3 = 0;
    iVar11 = 0xb;
    iVar8 = 0xb;
    if (-1 < unaff_w24) goto LAB_035d28bc;
FUN_035d2bf4:
    plVar9 = *(long **)(unaff_x19 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_035d2c50;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_035d2c50:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    bVar1 = false;
  }
  if (iVar11 != 0xb) {
    if (iVar11 == 10) goto LAB_035d2a4c;
    if (iVar11 != 0) {
      return;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01f51358(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_035ce230(uVar10,(long)&stack0x00000018 + 4);
  uVar5 = FUN_035d1d44();
  if ((uVar5 & 1) == 0) {
    iVar8 = 0xd;
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035cd7fc(unaff_x19 + 8);
    uVar3 = 0;
    iVar8 = 10;
  }
  if (!bVar1 && in_stack_00000018._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar10);
  }
  if (iVar8 != 0xd) {
    if (iVar8 == 10) goto LAB_035d2a4c;
    if (iVar8 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  auVar12 = FUN_0277b12c(*(long *)(unaff_x19 + 10),0,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_ToList<MarkToMarkAdjustmentRecord>__);
  uVar5 = FUN_02a65cec();
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar12;
    thunk_FUN_01f51358(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_021248d0(unaff_x19 + 2);
    return;
  }
  uVar3 = FUN_02a65d38();
LAB_035d2a4c:
  *unaff_x19 = 0xfffffffe;
  puVar2 = Method_System_Collections_Generic_Stack<ValueTuple<bool,_GradientFill>>__ctor__;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f4d88(unaff_x19 + 2,uVar3 & 1,*(undefined8 *)puVar2);
  return;
}


