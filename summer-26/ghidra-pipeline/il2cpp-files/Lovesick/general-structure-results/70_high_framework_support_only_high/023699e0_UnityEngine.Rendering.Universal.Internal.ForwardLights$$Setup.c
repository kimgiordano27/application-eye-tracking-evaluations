/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.ForwardLights$$Setup
ENTRY_POINT: 023699e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02369db4) */
/* WARNING: Removing unreachable block (ram,0x02369f94) */

void UnityEngine_Rendering_Universal_Internal_ForwardLights__Setup(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int unaff_w19;
  long lVar13;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long lVar14;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  
code_r0x023699e0:
  puVar3 = (undefined8 *)FUN_00d59724(unaff_x23,param_2,0);
  do {
    uVar4 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if ((uVar4 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_02369da8;
      lVar10 = *unaff_x23;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 == 0) goto LAB_02369d80;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_033eb588) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02369a60;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(unaff_x23,*(long *)PTR_DAT_033eb588,0);
LAB_02369a60:
    lVar10 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_022fb2d8(lVar5,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar6,*(undefined8 *)PTR_DAT_033ee588);
    *(long *)(lVar5 + 0x18) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar6,*(undefined8 *)PTR_DAT_033f6e48);
    *(long *)(lVar5 + 0x20) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_022f9928(lVar6,lVar10,0);
    *(long *)(lVar5 + 0x10) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01298da0(lVar6,*(undefined8 *)
                        Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                         *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x18));
    lVar11 = *(long *)(lVar10 + 0x10);
    if (lVar11 == 0) {
LAB_02369ec0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar14 = 8;
    while( true ) {
      uVar4 = lVar14 - 8;
      if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar4) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uStack0000000000000040 = *(undefined4 *)(lVar11 + lVar14 * 4);
      uVar8 = FUN_0129eff4(lVar6,&stack0x00000040,(long)&stack0x00000038 + 4,*unaff_x22);
      if ((uVar8 & 1) == 0) {
        if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000038._4_4_ = *(int *)(*(long *)(lVar5 + 0x18) + 0x18);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(int *)(lVar7 + lVar14 * 4) = in_stack_00000038._4_4_;
        lVar11 = *(long *)(lVar10 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uStack0000000000000040 = *(undefined4 *)(lVar11 + lVar14 * 4);
        in_stack_00000048._4_4_ = in_stack_00000038._4_4_;
        FUN_0129a054(lVar6,&stack0x00000040,(long)&stack0x00000048 + 4,
                     *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
        lVar11 = *(long *)(lVar10 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar13 = *(long *)(lVar5 + 0x18);
        FUN_0132138c(in_stack_00000030,*(undefined4 *)(lVar11 + lVar14 * 4),&stack0x00000040,
                     *(undefined8 *)
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                    );
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_00ca0af8(lVar13,CONCAT44(uStack0000000000000044,uStack0000000000000040),
                     *(undefined8 *)OVRManager_XrApi_TypeInfo);
        lVar11 = *(long *)(lVar10 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar13 = *(long *)(lVar5 + 0x20);
        uStack0000000000000040 = *(undefined4 *)(lVar11 + lVar14 * 4);
        FUN_01299bc0();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_00ac20f0(lVar13,in_stack_00000048._4_4_ + unaff_w19,*unaff_x24);
      }
      else {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(int *)(lVar7 + lVar14 * 4) = in_stack_00000038._4_4_;
      }
      lVar11 = *(long *)(lVar10 + 0x10);
      lVar14 = lVar14 + 1;
      if (lVar11 == 0) goto LAB_02369ec0;
    }
    lVar10 = *(long *)(lVar5 + 0x10);
    uVar9 = FUN_010df6b8(lVar7,*(undefined8 *)StringLiteral_8567);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar9,uVar9);
    }
    FUN_022f8ff8(lVar10,uVar9,0);
    FUN_00ca11d0(in_stack_00000028,lVar5,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
    lVar10 = *in_stack_00000020;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    param_2 = *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    unaff_x23 = in_stack_00000020;
    unaff_x29 = in_stack_00000028;
    if (uVar4 == 0) goto code_r0x023699e0;
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    while (*(long *)(piVar12 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar12 = piVar12 + 4;
      if (uVar4 == 0) goto code_r0x023699e0;
    }
    puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_10310) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02369d9c;
    }
  }
LAB_02369d80:
  puVar3 = (undefined8 *)FUN_00d59724(unaff_x23,*(long *)StringLiteral_10310,0);
LAB_02369d9c:
  (*(code *)*puVar3)(unaff_x23,puVar3[1]);
LAB_02369da8:
  puVar1 = PTR_DAT_033f7248;
  FUN_022fabf0(unaff_x29,in_stack_00000010,in_stack_00000030,0,0);
  if ((in_stack_00000008 & 0x100000000) != 0) {
    FUN_023563ac(in_stack_00000010,in_stack_00000018,0);
  }
  FUN_023135a0(in_stack_00000010,0,0);
  lVar10 = *(long *)puVar1;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar1;
  }
  puVar2 = StringLiteral_5105;
  lVar5 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar1;
    }
    uVar9 = **(undefined8 **)(lVar10 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar5,uVar9,*(undefined8 *)StringLiteral_8655,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar5;
  }
  puVar1 = StringLiteral_2051;
  uVar9 = FUN_010dcdb8(unaff_x29,lVar5,
                       *(undefined8 *)
                        Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                      );
  FUN_010dfe04(uVar9,*(undefined8 *)puVar1);
  return;
}


