/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU.<StartSpaceMap>d__57$$MoveNext
ENTRY_POINT: 014a6608
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;ray_or_cast_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014a6564) */

void Meta_XR_MRUtilityKit_SpaceMapGPU_<StartSpaceMap>d__57__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_x9;
  int *piVar11;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar12;
  int unaff_w23;
  long *plVar13;
  undefined8 *unaff_x27;
  long unaff_x28;
  ulong in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  
  if (in_x9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
                    /* try { // try from 014a6640 to 015a6643 has its CatchHandler @ 014a66a0 */
                    /* try { // try from 014a6644 to 015a66cb has its CatchHandler @ 014a61b4 */
        puVar3 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_014a6648;
      }
      in_x9 = in_x9 + -1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_014a6648:
  (*(code *)*puVar3)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778();
  }
  if (unaff_w23 != 1) {
    if (unaff_w23 != 1) {
      if (unaff_w23 != 1) {
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      puVar3 = (undefined8 *)__cxa_begin_catch();
      uVar4 = thunk_FUN_00d48444(
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                                );
      uVar5 = thunk_FUN_00d43524(uVar4,*(undefined8 *)*puVar3);
      if ((uVar5 & 1) == 0) {
        puVar9 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar9 = *puVar3;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar9,&PTR_PTR_03274860,0);
      }
      plVar13 = (long *)*puVar3;
      __cxa_end_catch();
      lVar6 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                                );
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03776dd1 == '\0') {
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                          );
        DAT_03776dd1 = '\x01';
      }
      lVar6 = *(long *)
               Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)
                 Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
      }
      if (plVar13 != (long *)0x0) {
        plVar12 = (long *)**(undefined8 **)(lVar6 + 0xb8);
        uVar4 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
        if (plVar12 != (long *)0x0) {
          lVar6 = thunk_FUN_00d48444(StringLiteral_11440);
          uVar7 = thunk_FUN_00d48444(StringLiteral_7842);
          uVar8 = thunk_FUN_00d48444(
                                    Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass4_0_<DORotate>b__0__
                                    );
          lVar10 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar6) {
                puVar3 = (undefined8 *)(lVar10 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                goto LAB_014a6bcc;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_00d59724(plVar12,lVar6,9);
LAB_014a6bcc:
          (*(code *)*puVar3)(plVar12,uVar4,0,0,0,0,uVar7,uVar8);
          goto LAB_014a69ec;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    puVar3 = (undefined8 *)__cxa_begin_catch();
    uVar4 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                              );
    uVar5 = thunk_FUN_00d43524(uVar4,*(undefined8 *)*puVar3);
    if ((uVar5 & 1) == 0) {
      puVar9 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar9 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&PTR_PTR_03274860,0);
    }
    plVar13 = (long *)*puVar3;
    __cxa_end_catch();
    lVar6 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                              );
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03776dd1 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                        );
      DAT_03776dd1 = '\x01';
    }
    lVar6 = *(long *)
             Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)
               Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar12 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    uVar4 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar6 = thunk_FUN_00d48444(StringLiteral_11440);
    uVar7 = thunk_FUN_00d48444(StringLiteral_7842);
    uVar8 = thunk_FUN_00d48444(
                              Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass4_0_<DORotate>b__0__
                              );
    lVar10 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_014a69a4;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar12,lVar6,9);
LAB_014a69a4:
    (*(code *)*puVar3)(plVar12,uVar4,0,0,0,0,uVar7,uVar8);
    goto LAB_014a69d8;
  }
  puVar3 = (undefined8 *)__cxa_begin_catch();
  uVar4 = thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            );
  uVar5 = thunk_FUN_00d43524(uVar4,*(undefined8 *)*puVar3);
  if ((uVar5 & 1) == 0) {
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = *puVar3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&PTR_PTR_03274860,0);
  }
  plVar13 = (long *)*puVar3;
  __cxa_end_catch();
  lVar6 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                            );
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014a6640 with catch @ 014a66a0
                        */
  if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014a64d8 with catch @ 014a66a4
                        */
    thunk_FUN_00d32864();
  }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014a648c with catch @ 014a66a8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014a6458 with catch @ 014a66ac
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014a6540 with catch @ 014a66b0
                        */
  if (DAT_03776dd1 == '\0') {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014a6428 with catch @ 014a66b4
                        */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                      );
    DAT_03776dd1 = '\x01';
  }
                    /* try { // try from 014a66cc to 015a66cf has its CatchHandler @ 014a66dc */
  lVar6 = *(long *)
           Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
                    /* catch() { ... } // from try @ 014a66cc with catch @ 014a66dc */
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)
             Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
  }
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 014a66f4 to 015a6717 has its CatchHandler @ 014a672c */
  plVar12 = (long *)**(undefined8 **)(lVar6 + 0xb8);
  uVar4 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 014a6718 to 015a6723 has its CatchHandler @ 014a61b4 */
  lVar6 = thunk_FUN_00d48444(StringLiteral_11440);
                    /* try { // try from 014a6724 to 015a672b has its CatchHandler @ 014a672c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 014a66f4 with catch @ 014a672c
                       catch(type#2 @ 00000000) { ... } // from try @ 014a6724 with catch @ 014a672c
                        */
  uVar7 = thunk_FUN_00d48444(StringLiteral_7842);
                    /* try { // try from 014a6730 to 015a6a37 has its CatchHandler @ 014a6730
                       catch() { ... } // from try @ 014a6730 with catch @ 014a6730
                       catch() { ... } // from try @ 014a6a78 with catch @ 014a6730
                       catch() { ... } // from try @ 014a6aac with catch @ 014a6730
                       catch() { ... } // from try @ 014a6b90 with catch @ 014a6730
                       catch() { ... } // from try @ 014a6dd0 with catch @ 014a6730
                       catch() { ... } // from try @ 014a6de4 with catch @ 014a6730
                       catch() { ... } // from try @ 014a6e64 with catch @ 014a6730 */
  uVar8 = thunk_FUN_00d48444(
                            Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass4_0_<DORotate>b__0__
                            );
  lVar10 = *plVar12;
  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar10 + (long)(*piVar11 + 9) * 0x10 + 0x138);
        goto LAB_014a6794;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724(plVar12,lVar6,9);
LAB_014a6794:
  (*(code *)*puVar3)(plVar12,uVar4,0,0,0,0,uVar7,uVar8);
LAB_014a6508:
  uVar5 = (ulong)*(uint *)(in_stack_00000048 + 0x18);
  in_stack_00000040 = in_stack_00000040 + 1;
  if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000040) {
LAB_014a69d8:
    do {
      uVar5 = (ulong)*(uint *)(in_stack_00000038 + 0x18);
      in_stack_00000030 = in_stack_00000030 + 1;
      if ((long)(int)*(uint *)(in_stack_00000038 + 0x18) <= (long)in_stack_00000030) {
LAB_014a69ec:
        do {
          puVar2 = 
          Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
          in_stack_00000020 = in_stack_00000020 + 1;
          if ((long)(int)*(uint *)(in_stack_00000028 + 0x18) <= (long)in_stack_00000020) {
            lVar6 = *(long *)
                     Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
            ;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar6 = *(long *)puVar2;
            }
            *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8) = unaff_x19;
            return;
          }
          if (*(uint *)(in_stack_00000028 + 0x18) <= in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar13 = *(long **)(in_stack_00000028 + in_stack_00000020 * 8 + 0x20);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          in_stack_00000038 =
               (**(code **)(*plVar13 + 0x238))(plVar13,*(undefined8 *)(*plVar13 + 0x240));
          if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        } while ((int)*(ulong *)(in_stack_00000038 + 0x18) < 1);
        in_stack_00000030 = 0;
        uVar5 = *(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff;
      }
      if (uVar5 <= in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_x28 = *(long *)(in_stack_00000038 + in_stack_00000030 * 8 + 0x20);
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000048 = FUN_0178c5b0(unaff_x28,0);
      if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    } while ((int)*(ulong *)(in_stack_00000048 + 0x18) < 1);
    in_stack_00000040 = 0;
    uVar5 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
  }
  if (uVar5 <= in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  uVar4 = *(undefined8 *)(in_stack_00000048 + in_stack_00000040 * 8 + 0x20);
  uVar7 = *(undefined8 *)Method_Meta_WitAi_VoiceService_set_UsePlatformIntegrations__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01780344(uVar7,0);
  plVar13 = (long *)FUN_016b2cb0(uVar4,uVar7,0);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = *plVar13;
  uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_014a6184;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_00d59724(plVar13,*(long *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__,0);
LAB_014a6184:
  plVar13 = (long *)(*(code *)*puVar3)(plVar13,puVar3[1]);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar6 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_014a61e4;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar13,*unaff_x21,0);
LAB_014a61e4:
    uVar5 = (*(code *)*puVar3)(plVar13,puVar3[1]);
    if ((uVar5 & 1) == 0) break;
    lVar6 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)UnityEngine_UIElements_UIR_Implementation_CommandGenerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_014a6248;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)
                                   UnityEngine_UIElements_UIR_Implementation_CommandGenerator_TypeInfo
                          ,0);
LAB_014a6248:
    plVar12 = (long *)(*(code *)*puVar3)(plVar13,puVar3[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar1 = *(byte *)(*(long *)System_IO_MonoIO_TypeInfo + 300);
    if ((*(byte *)(*plVar12 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_IO_MonoIO_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar12);
    }
    lVar6 = FUN_0129210c();
    lVar10 = thunk_FUN_00d62348(*unaff_x20);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar10,0);
    *(long *)(lVar10 + 0x10) = unaff_x28;
    *(undefined8 *)(lVar10 + 0x18) = uVar4;
    *(long **)(lVar10 + 0x20) = plVar12;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00bc397c(lVar6,lVar10,*unaff_x27);
  } while( true );
  if (plVar13 != (long *)0x0) {
    lVar6 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_014a64ec;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_10310,0);
LAB_014a64ec:
    (*(code *)*puVar3)(plVar13,puVar3[1]);
  }
  goto LAB_014a6508;
}


