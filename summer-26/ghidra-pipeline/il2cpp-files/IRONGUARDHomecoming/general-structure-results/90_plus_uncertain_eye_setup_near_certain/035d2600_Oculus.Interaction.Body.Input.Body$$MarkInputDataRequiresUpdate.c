/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.Body$$MarkInputDataRequiresUpdate
ENTRY_POINT: 035d2600
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035d2ab4) */
/* WARNING: Removing unreachable block (ram,0x035d2c64) */

void Oculus_Interaction_Body_Input_Body__MarkInputDataRequiresUpdate(long param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  char cStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xdb8));
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__)
  ;
  *(undefined1 *)(unaff_x20 + 0x6d8) = 1;
  puVar3 = Method_UnityEngine_Splines_SplineDataDictionary<float4>_get_Values__;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  cStack000000000000001c = '\0';
  iVar13 = *unaff_x19;
  lVar11 = *(long *)(unaff_x19 + 0xe);
  if (iVar13 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
    iVar13 = -1;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
LAB_035d2848:
    lVar12 = FUN_02a65eb0(&stack0x00000020,
                          *(undefined8 *)
                           Method_UI_DamageTextsController_<>c__DisplayClass16_0_<Spawn>b__0__);
    plVar6 = (long *)(unaff_x19 + 0x12);
    if (*plVar6 == lVar12) {
      *plVar6 = 0;
      thunk_FUN_01f51358(plVar6,0);
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_035cf660(lVar12);
      FUN_035cf744(lVar12,0);
      uVar5 = 1;
      iVar15 = 10;
      iVar1 = 10;
      if (iVar13 < 0) goto FUN_035d2bf4;
LAB_035d28bc:
      iVar15 = iVar1;
      bVar2 = true;
    }
    else {
      uVar5 = 0;
      iVar15 = 0xb;
      iVar1 = 0xb;
      if (-1 < iVar13) goto LAB_035d28bc;
FUN_035d2bf4:
      plVar6 = *(long **)(unaff_x19 + 0x10);
      if (plVar6 != (long *)0x0) {
        lVar12 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_035d2c50;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_035d2c50:
        (*(code *)*puVar9)(plVar6,puVar9[1]);
      }
      bVar2 = false;
    }
    if (iVar15 != 0xb) {
      if (iVar15 == 10) goto LAB_035d2a4c;
      if (iVar15 != 0) {
        return;
      }
    }
    piVar10 = unaff_x19 + 0x10;
    piVar10[0] = 0;
    piVar10[1] = 0;
    thunk_FUN_01f51358(piVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = *(undefined8 *)(lVar11 + 0x20);
    cStack000000000000001c = '\0';
    FUN_035ce230(uVar14,&stack0x0000001c);
    uVar8 = FUN_035d1d44(lVar11,*(undefined8 *)(unaff_x19 + 10));
    if ((uVar8 & 1) == 0) {
      iVar13 = 0xd;
    }
    else {
      if (*(int *)(*(long *)
                    Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_035cd7fc(unaff_x19 + 8);
      uVar5 = 0;
      iVar13 = 10;
    }
    if (!bVar2 && cStack000000000000001c != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar14);
    }
    if (iVar13 != 0xd) {
      if (iVar13 == 10) goto LAB_035d2a4c;
      if (iVar13 != 0) {
        return;
      }
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    auVar16 = FUN_0277b12c(*(long *)(unaff_x19 + 10),0,
                           *(undefined8 *)
                            Method_System_Linq_Enumerable_ToList<MarkToMarkAdjustmentRecord>__);
    uVar8 = FUN_02a65cec();
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar16;
      thunk_FUN_01f51358(unaff_x19 + 0x18,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_021248d0(unaff_x19 + 2);
      return;
    }
  }
  else {
    if (iVar13 != 1) {
      if (*(int *)(*(long *)
                    Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar12 = *(long *)(unaff_x19 + 8);
      if (lVar12 == 0) {
        lVar12 = thunk_FUN_01f117cc();
        thunk_FUN_01f3e6f0();
        *(undefined4 *)(lVar12 + 0x24) = 0xffffffff;
        FUN_035ac8e8(lVar12,0);
        thunk_FUN_01f3e6f0();
        *(undefined4 *)(lVar12 + 0x20) = 1;
      }
      else {
        if (*(int *)(*(long *)Method_Drawing_CommandBuilder_Reserve<CommandBuilder_PlaneData>__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar12 = FUN_035d0428(lVar12,0);
      }
      *(long *)(unaff_x19 + 0x10) = lVar12;
      thunk_FUN_01f51358(unaff_x19 + 0x10,lVar12);
      plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_System_DateTimeParse_<>c_<DoStrictParse>b__98_0__,2);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *(long *)(unaff_x19 + 10);
      if ((lVar12 != 0) &&
         (lVar7 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
        uVar14 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar14,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar6[4] = lVar12;
      thunk_FUN_01f51358(plVar6 + 4,lVar12);
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar1 = unaff_x19[0xc];
      FUN_035cf660(lVar12);
      in_stack_00000038 = lVar12;
      thunk_FUN_01f51358(&stack0x00000038,lVar12);
      lVar12 = in_stack_00000038;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar12 = FUN_035e6340(iVar1,lVar12,0);
      if ((lVar12 != 0) &&
         (lVar7 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
        uVar14 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar14,0);
      }
      if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar6[5] = lVar12;
      thunk_FUN_01f51358(plVar6 + 5,lVar12);
      lVar12 = FUN_035e74ac(plVar6,0);
      *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(unaff_x19 + 10);
      thunk_FUN_01f51358();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      _in_stack_00000020 =
           FUN_0277c878(lVar12,0,*(undefined8 *)
                                  Method_UnityEngine_Rendering_DebugDisplaySettingsUI_<>c__DisplayClass3_0_<RegisterDebug>b__0__
                       );
      uVar8 = FUN_02a65e64(&stack0x00000020,
                           *(undefined8 *)
                            Method_UI_DamageTextsController_<>c__DisplayClass17_0_<SpawnText>b__0__)
      ;
      if ((uVar8 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
        thunk_FUN_01f51358(unaff_x19 + 0x14,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_02124ae4(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      goto LAB_035d2848;
    }
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    unaff_x19[0x1a] = 0;
    unaff_x19[0x1b] = 0;
    *unaff_x19 = -1;
    _in_stack_00000020 = ZEXT816(0);
  }
  uVar5 = FUN_02a65d38();
LAB_035d2a4c:
  *unaff_x19 = -2;
  puVar4 = Method_System_Collections_Generic_Stack<ValueTuple<bool,_GradientFill>>__ctor__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f4d88(unaff_x19 + 2,uVar5 & 1,*(undefined8 *)puVar4);
  return;
}


