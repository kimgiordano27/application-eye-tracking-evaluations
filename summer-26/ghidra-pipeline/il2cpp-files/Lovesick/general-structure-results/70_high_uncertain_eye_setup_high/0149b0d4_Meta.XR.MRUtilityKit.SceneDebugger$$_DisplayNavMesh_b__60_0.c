/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<DisplayNavMesh>b__60_0
ENTRY_POINT: 0149b0d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0149b720) */

uint Meta_XR_MRUtilityKit_SceneDebugger__<DisplayNavMesh>b__60_0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long in_x9;
  long in_x10;
  int *piVar13;
  ulong in_x11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar14;
  undefined8 unaff_x22;
  undefined8 uVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
code_r0x0149b0d4:
  if (*(long *)(*(long *)(in_x10 + 200) + in_x11 * 8 + -8) != in_x9) {
    param_1 = (long *)0x0;
  }
LAB_0149b0e8:
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec0d8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01499f08(lVar7);
  *(undefined8 *)(lVar7 + 0x10) = unaff_x22;
  *(long **)(lVar7 + 0x18) = unaff_x21;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(long *)(lVar7 + 0x20) = param_1[3];
  *(char *)(lVar7 + 0x28) = (char)param_1[5];
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = FUN_0129aa60(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
                       *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_Clear__
                      );
  if ((uVar8 & 1) == 0) {
    lVar14 = *(long *)(unaff_x19 + 0x40);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)System_Runtime_Remoting_Metadata_SoapAttribute_var);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_7391);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0129a054(lVar14,uVar15,lVar9,
                 *(undefined8 *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass3_0_<DOFieldOfView>b__0__);
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01299bc0(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),&stack0x00000008,
               *(undefined8 *)Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__
              );
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_00bc2d48(in_stack_00000008,lVar7,*(undefined8 *)PTR_DAT_033ef2e8);
  do {
    uVar8 = FUN_012b894c(&stack0x00000020,*unaff_x29);
    if ((uVar8 & 1) == 0) {
      FUN_012b8948(&stack0x00000020,*(undefined8 *)Newtonsoft_Json_Utilities_AsyncUtils_<>c_TypeInfo
                  );
      puVar2 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass52_0_TypeInfo;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        uVar15 = FUN_01299a34(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_3659);
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar7 = *(long *)puVar2;
        }
        lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar9 == 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar7);
            lVar7 = *(long *)puVar2;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_u16__);
          if (lVar9 == 0) goto LAB_0149b640;
          FUN_012d239c(lVar9,uVar11,
                       *(undefined8 *)Method_System_Collections_Generic_HashSet<string>__ctor__,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar9;
        }
        plVar10 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                    (uVar15,lVar9,
                                     *(undefined8 *)
                                      Method_Obi_ObiNativeList<AffineTransform>_GetIntPtr__);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar8 == 0) goto LAB_0149b3c8;
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          break;
        }
      }
LAB_0149b640:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_x20 = FUN_00bc269c(&stack0x00000020,*unaff_x26);
    lVar7 = FUN_0149a528();
    if (lVar7 == 0) {
      FUN_012b8948(&stack0x00000020,*(undefined8 *)Newtonsoft_Json_Utilities_AsyncUtils_<>c_TypeInfo
                  );
      in_stack_00000000._4_4_ = 0;
      goto LAB_0149b5ec;
    }
    unaff_x21 = (long *)FUN_00bc2b6c(lVar7,*unaff_x28);
    unaff_x22 = FUN_00bc2c58(lVar7,*unaff_x25);
    uVar8 = FUN_0169f70c(unaff_x21,0,0);
    if ((uVar8 & 1) == 0) {
      uVar15 = *(undefined8 *)Method_RCG_Events_ShowPromptOnMessage_OnResponseChosen__;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_01780344(uVar15,0);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar15,uVar15);
      }
      lVar7 = (**(code **)(*unaff_x21 + 0x218))
                        (unaff_x21,uVar15,0,*(undefined8 *)(*unaff_x21 + 0x220));
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar7 + 0x18) != 0) goto code_r0x0149b08c;
      plVar10 = (long *)thunk_FUN_00d93c64();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      uVar11 = FUN_015f6780(*(undefined8 *)DG_Tweening_DOTweenModuleUtils_TypeInfo,unaff_x21,0);
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar15,uVar11,0,0);
    }
    else {
      plVar10 = (long *)thunk_FUN_00d93c64();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = FUN_015f5b28(*(undefined8 *)
                             System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo,
                            *(undefined8 *)(unaff_x20 + 0x10),0);
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar15,uVar11,0,0);
    }
    in_stack_00000000._4_4_ = 0;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar13 = piVar13 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__) {
      puVar12 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0149b400;
    }
  }
LAB_0149b3c8:
  puVar12 = (undefined8 *)
            FUN_00d59724(plVar10,*(long *)
                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__
                         ,0);
LAB_0149b400:
  plVar10 = (long *)(*(code *)*puVar12)(plVar10,puVar12[1]);
  puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar5 = Method_Oculus_Interaction_ControllerSelector_<>c_<_ctor>b__26_0__;
  puVar4 = Method_System_Collections_Generic_List<NavMeshSurface>_Remove__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<HandJointId,_JointDeltaProvider_PoseData[]>_get_Keys__
  ;
  puVar1 = System_Collections_Generic_Dictionary<string,_STMFontData>_TypeInfo;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0149b488;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,0);
LAB_0149b488:
    uVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_0149b5ec;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 == 0) goto LAB_0149b5bc;
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_0149b5a4;
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0149b4e4;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar5,0);
LAB_0149b4e4:
    lVar7 = (*(code *)*puVar12)(plVar10,puVar12[1]);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *(long *)puVar2;
    }
    lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar14 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *(long *)puVar2;
      }
      uVar15 = **(undefined8 **)(lVar9 + 0xb8);
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01267c10(lVar14,uVar15,*(undefined8 *)puVar1,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar14;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132508c(lVar7,lVar14,*(undefined8 *)puVar3);
  } while( true );
code_r0x0149b08c:
  FUN_010d9fe8(lVar7,&stack0x00000008,
               *(undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Clear__);
  if (in_stack_00000008 != (long *)0x0) {
    in_x10 = *in_stack_00000008;
    in_x9 = *(long *)Method_System_Collections_Generic_List<ObiColliderHandle>_get_Count__;
    in_x11 = (ulong)*(byte *)(in_x9 + 300);
    param_1 = in_stack_00000008;
    if (*(byte *)(in_x9 + 300) <= *(byte *)(in_x10 + 300)) goto code_r0x0149b0d4;
  }
  param_1 = (long *)0x0;
  goto LAB_0149b0e8;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar13 = piVar13 + 4;
    if (uVar8 == 0) break;
LAB_0149b5a4:
    if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_10310) {
      puVar12 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0149b5d8;
    }
  }
LAB_0149b5bc:
  puVar12 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_10310,0);
LAB_0149b5d8:
  (*(code *)*puVar12)(plVar10,puVar12[1]);
LAB_0149b5ec:
  return in_stack_00000000._4_4_ & 1;
}


