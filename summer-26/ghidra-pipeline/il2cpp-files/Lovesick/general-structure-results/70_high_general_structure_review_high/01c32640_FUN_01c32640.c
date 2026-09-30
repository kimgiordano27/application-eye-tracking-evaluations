/*
FUNCTION_NAME: FUN_01c32640
ENTRY_POINT: 01c32640
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_01c32640(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  
  if ((DAT_0377ea48 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<TriangulationPoint>__);
    thunk_FUN_00d48444(System_Net_FileWebRequest_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6845);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_index__
                      );
    thunk_FUN_00d48444(Unity_Mathematics_bool3x4_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea7f8);
    thunk_FUN_00d48444(PTR_DAT_033f5360);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackedImageManager_CreateRuntimeLibrary__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<AnimationMultiSfxPlayer_Mapping>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0377ea48 = 1;
  }
  puVar4 = PTR_DAT_033f5360;
  puVar3 = PTR_DAT_033ea7f8;
  if (param_4 == 0) {
    lVar8 = *(long *)PTR_DAT_033f5360;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar4;
    }
    uVar13 = **(undefined8 **)(lVar8 + 0xb8);
    param_4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (param_4 == 0) goto LAB_01c32b50;
    FUN_012dd3f8(param_4,uVar13,*(undefined8 *)Unity_Mathematics_bool3x4_TypeInfo);
  }
  FUN_012df150(param_4,param_1,*(undefined8 *)StringLiteral_6845);
  if ((param_1 != (long *)0x0) &&
     (lVar8 = thunk_FUN_00d93c64(param_1,0),
     puVar3 = 
     Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_index__,
     lVar8 != 0)) {
    uVar9 = FUN_0178b958(lVar8,0);
    puVar5 = 
    Method_System_Collections_Generic_List_Enumerator<AnimationMultiSfxPlayer_Mapping>_Dispose__;
    puVar4 = System_Net_FileWebRequest_TypeInfo;
    if ((uVar9 & 1) == 0) {
      uVar13 = thunk_FUN_00d93c64(param_1,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar10 = FUN_01c32b68();
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      lVar8 = FUN_01c26244(uVar13,uVar10);
      puVar3 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
      if (lVar8 == 0) goto LAB_01c32b50;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        uVar16 = 0;
        puVar15 = (undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_ARTrackedImageManager_CreateRuntimeLibrary__;
        do {
          if (uVar1 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar14 = *(long **)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
          if (plVar14 == (long *)0x0) goto LAB_01c32b50;
          bVar2 = *(byte *)(*(long *)puVar3 + 300);
          if ((*(byte *)(*plVar14 + 300) < bVar2) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar14);
          }
          lVar11 = (**(code **)(*plVar14 + 0x268))(plVar14,*(undefined8 *)(*plVar14 + 0x270));
          if (lVar11 == 0) goto LAB_01c32b50;
          uVar9 = FUN_0178c0dc(lVar11,0);
          if ((uVar9 & 1) == 0) {
            uVar13 = (**(code **)(*plVar14 + 0x268))(plVar14,*(undefined8 *)(*plVar14 + 0x270));
            uVar10 = *puVar15;
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar10 = FUN_01780344(uVar10,0);
            uVar9 = FUN_01789ac0(uVar13,uVar10,0);
            if ((uVar9 & 1) == 0) {
              uVar13 = (**(code **)(*plVar14 + 0x268))(plVar14,*(undefined8 *)(*plVar14 + 0x270));
              uVar10 = *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
              ;
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
              }
              uVar10 = FUN_01780344(uVar10,0);
              uVar9 = FUN_01789ac0(uVar13,uVar10,0);
              if (((uVar9 & 1) == 0) &&
                 (lVar11 = (**(code **)(*plVar14 + 0x2f8))
                                     (plVar14,param_1,*(undefined8 *)(*plVar14 + 0x300)),
                 lVar11 != 0)) {
                lVar12 = thunk_FUN_00d93c64(lVar11,0);
                if (lVar12 == 0) goto LAB_01c32b50;
                uVar9 = FUN_0178c0dc(lVar12,0);
                if ((uVar9 & 1) == 0) {
                  uVar13 = *puVar15;
                  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0)
                      == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar13 = FUN_01780344(uVar13,0);
                  uVar9 = FUN_01789ac0(lVar12,uVar13,0);
                  puVar15 = (undefined8 *)
                            Method_UnityEngine_XR_ARFoundation_ARTrackedImageManager_CreateRuntimeLibrary__
                  ;
                  if ((uVar9 & 1) == 0) {
                    uVar13 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                    ;
                    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0
                                ) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar13 = FUN_01780344(uVar13,0);
                    uVar9 = FUN_01789ac0(lVar12,uVar13,0);
                    puVar15 = (undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARTrackedImageManager_CreateRuntimeLibrary__
                    ;
                    puVar4 = 
                    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_index__
                    ;
                    if ((uVar9 & 1) == 0) {
                      if (lVar11 == param_2) {
                        FUN_016aafe0(plVar14,param_1,param_3,0);
                        lVar11 = param_3;
                      }
                      uVar9 = FUN_012ddcec(param_4,lVar11,*(undefined8 *)puVar4);
                      if ((uVar9 & 1) == 0) {
                        FUN_01c32640(lVar11,param_2,param_3,param_4);
                      }
                    }
                  }
                }
              }
            }
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar1);
      }
    }
    else {
      bVar2 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo + 300
                       );
      if ((*(byte *)(*param_1 + 300) < bVar2) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_1);
      }
      iVar6 = FUN_0178a528(param_1,0);
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          lVar8 = FUN_0178a588(param_1,iVar6,0);
          if (lVar8 != 0) {
            if (lVar8 == param_2) {
              FUN_01794eec(param_1,param_3,iVar6,0);
              lVar8 = param_3;
            }
            uVar9 = FUN_012ddcec(param_4,lVar8,*(undefined8 *)puVar3);
            if ((uVar9 & 1) == 0) {
              FUN_01c32640(lVar8,param_2,param_3,param_4);
            }
          }
          iVar6 = iVar6 + 1;
          iVar7 = FUN_0178a528(param_1,0);
        } while (iVar6 < iVar7);
      }
    }
    return;
  }
LAB_01c32b50:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


