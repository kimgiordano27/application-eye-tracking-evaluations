/*
FUNCTION_NAME: FUN_01c37adc
ENTRY_POINT: 01c37adc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c37dc4) */

undefined8 FUN_01c37adc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char local_34 [4];
  
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<AnimationMultiSfxPlayer_Mapping>_Dispose__;
  if ((DAT_0377ea7a & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_ResourcesAPI_TypeInfo);
    thunk_FUN_00d48444(Method_System_Array_Resize<Color>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<AnimationMultiSfxPlayer_Mapping>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(UnityEngine_UIElements_UIDocumentList_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_Compression_DeflateStream_Flush__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DialogueValue>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_8589);
    thunk_FUN_00d48444(StringLiteral_7075);
    DAT_0377ea7a = 1;
  }
  lVar4 = *(long *)puVar1;
  local_34[0] = '\0';
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  thunk_FUN_00d8e500();
  if (lVar4 == 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    local_34[0] = '\0';
    FUN_017d75a8(uVar7,local_34,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    thunk_FUN_00d8e500();
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_System_IO_Compression_DeflateStream_Flush__);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_017b46ec(lVar4,0);
      puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
      puVar2 = 
      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
      uVar8 = *(undefined8 *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
      ;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar5 = (long *)FUN_01780344(uVar8,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x318))(plVar5,*(undefined8 *)(*plVar5 + 800));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar6 = (**(code **)(*plVar5 + 600))
                        (plVar5,*(undefined8 *)StringLiteral_8589,*(undefined8 *)(*plVar5 + 0x260));
      if (lVar6 == 0) {
        uVar8 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar5 = (long *)FUN_01780344(uVar8,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x318))(plVar5,*(undefined8 *)(*plVar5 + 800));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar6 = (**(code **)(*plVar5 + 600))
                          (plVar5,*(undefined8 *)
                                   Method_System_Collections_Generic_List<DialogueValue>_get_Count__
                           ,*(undefined8 *)(*plVar5 + 0x260));
      }
      puVar2 = Method_System_Array_Resize<Color>__;
      *(long *)(lVar4 + 0x10) = lVar6;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012d239c(lVar6,lVar4,*(undefined8 *)UnityEngine_UIElements_UIDocumentList_TypeInfo,0);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_ResourcesAPI_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01c2ae2c(lVar4,*(undefined8 *)StringLiteral_7075,1,lVar6);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      thunk_FUN_00d8e500();
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar4;
    }
    if (local_34[0] != '\0') {
      thunk_FUN_00d56f10(uVar7,0);
    }
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  thunk_FUN_00d8e500();
  return uVar7;
}


