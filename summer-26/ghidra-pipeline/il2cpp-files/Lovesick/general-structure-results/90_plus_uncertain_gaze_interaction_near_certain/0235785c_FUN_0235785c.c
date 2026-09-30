/*
FUNCTION_NAME: FUN_0235785c
ENTRY_POINT: 0235785c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02358240) */
/* WARNING: Removing unreachable block (ram,0x02357fc4) */
/* WARNING: Removing unreachable block (ram,0x0235822c) */

void FUN_0235785c(long *param_1,int param_2,long *param_3,long *param_4,long *param_5,long *param_6,
                 long *param_7,long *param_8,undefined8 param_9)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  
  if ((DAT_03781d35 & 1) == 0) {
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_get_Item__);
    thunk_FUN_00d48444(PTR_DAT_033f41a0);
    thunk_FUN_00d48444(StringLiteral_4688);
    thunk_FUN_00d48444(StringLiteral_1876);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__);
    thunk_FUN_00d48444(Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_DataSource<ControllerDataAsset>__ctor__);
    thunk_FUN_00d48444(Method_InfiniteGrabbableSpawner_ObjectGrabbed__);
    thunk_FUN_00d48444(UnityEngine_MeshRenderer_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Color>_Insert__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_16__
                      );
    DAT_03781d35 = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar13 = *param_1;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_get_Item__) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_023579c0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_00d59724(param_1,*(long *)
                                 Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_get_Item__,0
                       );
LAB_023579c0:
  plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
  plVar19 = (long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_023579ec:
  lVar13 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *plVar19) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_02357a3c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(plVar8,*plVar19,0);
LAB_02357a3c:
  uVar15 = (*(code *)*puVar7)(plVar8,puVar7[1]);
  if ((uVar15 & 1) != 0) {
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_4688) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02357aa4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_4688,0);
LAB_02357aa4:
    lVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = FUN_0230bcf4(lVar13,0);
    uVar9 = FUN_0268fd10(lVar13,0);
    lVar10 = FUN_0230bd48(lVar13,0,0);
    lVar20 = *(long *)(lVar13 + 0x20);
    plVar11 = (long *)FUN_0230fbe8(lVar13,0);
    lVar14 = *(long *)(lVar13 + 0x40);
    lVar13 = FUN_0230c72c(lVar13,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar13 = FUN_02665444(lVar13,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = *(int *)(lVar13 + 0x18);
    if (0 < (int)uVar4) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = 0;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar17 = *(undefined8 *)(lVar10 + 0x20 + uVar15 * 8);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_16__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_023345a0(uVar9,uVar17,0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(param_9,0,0);
        lVar18 = *param_3;
        if ((uVar12 & 1) == 0) {
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ca0af8(lVar18,uVar17,*(undefined8 *)OVRManager_XrApi_TypeInfo);
        }
        else {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_16__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_02334784(param_9,uVar17,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar17,uVar17);
          }
          FUN_00ca0af8(lVar18,uVar17,*(undefined8 *)OVRManager_XrApi_TypeInfo);
        }
        uVar15 = uVar15 + 1;
      } while (uVar4 != uVar15);
    }
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
      uVar15 = 0;
      uVar12 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar18 = *(long *)(lVar20 + 0x20 + uVar15 * 8);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_022f9928(lVar10,lVar18,0);
        FUN_022fa0bc(lVar10,param_2,0);
        if ((*(char *)(lVar10 + 0x4c) == '\0') && (*(char *)(lVar10 + 0x1c) == '\0')) {
          *(undefined1 *)(lVar10 + 0x4c) = 1;
          if (*param_5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00c9e4d8(*param_5,lVar10,
                       *(undefined8 *)Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__)
          ;
        }
        if (iVar1 < 1) {
          uVar9 = 0;
        }
        else {
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar5 = FUN_02300d90(*(undefined4 *)(lVar18 + 0x48),0,iVar1 + -1,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar9 = *(undefined8 *)(lVar13 + (long)(int)uVar5 * 8 + 0x20);
        }
        if (*param_8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar6 = FUN_01323730(*param_8,uVar9,
                             *(undefined8 *)Method_InfiniteGrabbableSpawner_ObjectGrabbed__);
        if (iVar6 < 0) {
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_0268b4e0(uVar9,0,0);
          if ((uVar12 & 1) == 0) {
            lVar18 = *param_8;
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(lVar18 + 0x18);
            FUN_00ac9cc0(lVar18,uVar9,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__);
          }
          else {
            *(undefined4 *)(lVar10 + 0x48) = 0;
          }
        }
        else {
          *(int *)(lVar10 + 0x48) = iVar6;
        }
        if (*param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_00c9e4d8(*param_4,lVar10,
                     *(undefined8 *)Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
        uVar12 = (ulong)*(uint *)(lVar20 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar20 + 0x18));
    }
    plVar19 = (long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Collections_Generic_List<Color>_Insert__;
    puVar2 = Method_Oculus_Interaction_Input_DataSource<ControllerDataAsset>__ctor__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_033f41a0) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02357e30;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)PTR_DAT_033f41a0,0);
LAB_02357e30:
    plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar10 = *plVar11;
      lVar13 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02357e90;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar11,lVar13,0);
LAB_02357e90:
      uVar15 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      if ((uVar15 & 1) == 0) goto LAB_02357f4c;
      lVar13 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_1876) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02357ef4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_1876,0);
LAB_02357ef4:
      uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0232ed50(lVar13,uVar9,0);
      FUN_0232f588(lVar13,param_2,0);
      if (*param_6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ca2928(*param_6,lVar13,*(undefined8 *)puVar2);
    } while( true );
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar13 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar15 == 0) goto LAB_02358114;
  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
  goto LAB_023580fc;
LAB_02357f4c:
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10310) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02357fac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10310,0);
LAB_02357fac:
    (*(code *)*puVar7)(plVar11,puVar7[1]);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
    uVar15 = 0;
    uVar12 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
    do {
      if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar9 = *(undefined8 *)(lVar14 + 0x20 + uVar15 * 8);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Collections_Generic_List<Color>_Insert__);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0232ed50(lVar13,uVar9,0);
      FUN_0232f588(lVar13,param_2,0);
      if (*param_7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ca2928(*param_7,lVar13,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Input_DataSource<ControllerDataAsset>__ctor__);
      uVar12 = (ulong)*(uint *)(lVar14 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((long)uVar15 < (long)(int)*(uint *)(lVar14 + 0x18));
  }
  param_2 = uVar4 + param_2;
  goto LAB_023579ec;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_023580fc:
    if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10310) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_02358138;
    }
  }
LAB_02358114:
  puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_10310,0);
LAB_02358138:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


