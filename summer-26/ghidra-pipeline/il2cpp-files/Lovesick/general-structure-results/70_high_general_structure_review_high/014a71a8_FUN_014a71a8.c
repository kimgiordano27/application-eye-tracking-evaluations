/*
FUNCTION_NAME: FUN_014a71a8
ENTRY_POINT: 014a71a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_014a71a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__;
  if ((DAT_03776ce6 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_TMP_Character>_get_Item__)
    ;
    thunk_FUN_00d48444(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef7a0);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputBindingCompositeContext_ReadValue<Vector3,_Vector3MagnitudeComparer>__
                      );
    thunk_FUN_00d48444(StringLiteral_3312);
    thunk_FUN_00d48444(StringLiteral_12196);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteRawValueAsync>d__121>__
                      );
    thunk_FUN_00d48444(UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo);
    DAT_03776ce6 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = 
  Method_UnityEngine_InputSystem_InputBindingCompositeContext_ReadValue<Vector3,_Vector3MagnitudeComparer>__
  ;
  if (lVar3 != 0) {
    FUN_01497c7c(lVar3,0);
    *(long *)(param_1 + 0x40) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_033ef7a0;
    if (lVar3 != 0) {
      FUN_014ff088(lVar3,0);
      *(long *)(param_1 + 0x48) = lVar3;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = StringLiteral_12196;
      puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
      if (lVar3 != 0) {
        FUN_014ff00c(lVar3,0);
        *(long *)(param_1 + 0x50) = lVar3;
        FUN_014a5950(param_1);
        plVar7 = *(long **)(param_1 + 0x40);
        uVar8 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01780344(uVar8,0);
        puVar2 = StringLiteral_3312;
        puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo;
        if (plVar7 != (long *)0x0) {
          lVar3 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
          uVar9 = *(undefined8 *)UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo;
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo)
              {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
                goto LAB_014a7364;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_00d59724(plVar7,*(long *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo
                                ,9);
LAB_014a7364:
          (*(code *)*puVar4)(plVar7,uVar9,uVar8,puVar4[1]);
          plVar7 = *(long **)(param_1 + 0x40);
          uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
          puVar2 = Method_System_Collections_Generic_Dictionary<uint,_TMP_Character>_get_Item__;
          if (plVar7 != (long *)0x0) {
            lVar3 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
            uVar9 = *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteRawValueAsync>d__121>__
            ;
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
                  goto LAB_014a73f4;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar1,9);
LAB_014a73f4:
            (*(code *)*puVar4)(plVar7,uVar9,uVar8,puVar4[1]);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar3 != 0) {
              FUN_014990ac(lVar3,param_1,0);
              uVar8 = FUN_014990d4(lVar3,0);
              *(undefined8 *)(param_1 + 0x58) = uVar8;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


