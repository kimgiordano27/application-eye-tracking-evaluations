/*
FUNCTION_NAME: Unity.Services.Vivox.LoginSession$$HandleUserToUserMessage
ENTRY_POINT: 0600da30
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_1;telemetry_or_network_hits_10
*/


void Unity_Services_Vivox_LoginSession__HandleUserToUserMessage(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 *in_stack_00000000;
  undefined8 in_stack_00000018;
  
  do {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *unaff_x20;
    uVar7 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0600da84;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(unaff_x20,*unaff_x23,0);
LAB_0600da84:
    lVar4 = (*(code *)*puVar1)(unaff_x20,uVar7,puVar1[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000018 = FUN_0481d028(lVar4,*unaff_x25);
    uVar5 = FUN_047e6248(&stack0x00000018,*unaff_x26);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      LeanTween__value(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_OrthogonalLookRotation_00000354_PostfixBurstDelegate>__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f5cc8(unaff_x19 + 2,&stack0x00000018,unaff_x19,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate>__
                  );
      return;
    }
    lVar4 = FUN_047e6288(&stack0x00000018,*unaff_x27);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *unaff_x28;
    lVar8 = *(long *)(*(long *)(lVar4 + 0x20) + 0x10);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *unaff_x28;
    }
    puVar1 = *(undefined8 **)(lVar2 + 0xb8);
    lVar9 = puVar1[1];
    if (lVar9 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar1 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar7 = *puVar1;
      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_00000361_PostfixBurstDelegate>__
                                );
      FUN_04ba7c10(lVar9,uVar7,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_ElevateQuadraticToCubicBezier_0000043F_PostfixBurstDelegate>__
                   ,0);
      plVar3 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
      *plVar3 = lVar9;
      LeanTween__value(plVar3,lVar9);
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = FUN_03363ad4(lVar8,lVar9,*unaff_x29);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      if (*(long *)(in_stack_00000000 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_040103fc(*(long *)(in_stack_00000000 + 10),lVar2,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000365_PostfixBurstDelegate>__
                  );
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = *(long *)(*(long *)(lVar4 + 0x20) + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      uVar7 = 0;
      if (lVar2 != 0) {
        lVar2 = FUN_05370f84(lVar2,*(undefined8 *)
                                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_SampleCubicBezierPoint_0000043E_PostfixBurstDelegate>__
                             ,0,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar7 = *(undefined8 *)(lVar2 + 0x28);
      }
      *(undefined8 *)(in_stack_00000000 + 0xc) = uVar7;
      LeanTween__value();
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_0536c9cc(*(undefined8 *)(lVar4 + 0x10),0);
    if ((uVar5 & 1) != 0) {
      *in_stack_00000000 = 0xfffffffe;
      puVar1 = (undefined8 *)(in_stack_00000000 + 10);
      uVar7 = *puVar1;
      *puVar1 = 0;
      LeanTween__value(puVar1,0);
      *(undefined8 *)(in_stack_00000000 + 0xc) = 0;
      LeanTween__value(in_stack_00000000 + 0xc,0);
      if (*(int *)(*(long *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_OrthogonalLookRotation_00000354_PostfixBurstDelegate>__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_040b19d8(in_stack_00000000 + 2,uVar7,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_00000360_PostfixBurstDelegate>__
                  );
      return;
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    unaff_x20 = *(long **)(unaff_x24 + 0x10);
    unaff_x19 = in_stack_00000000;
  } while( true );
}


