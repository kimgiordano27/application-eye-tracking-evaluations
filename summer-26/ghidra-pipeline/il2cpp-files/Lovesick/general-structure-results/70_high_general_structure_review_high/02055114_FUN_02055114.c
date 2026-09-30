/*
FUNCTION_NAME: FUN_02055114
ENTRY_POINT: 02055114
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_02055114(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  
  if ((DAT_03780b5d & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_String_LastIndexOf__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s16__);
    thunk_FUN_00d48444(Method_System_Collections_Specialized_BitVector32_CreateMask__);
    thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<Transform>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<LocomotionVignetteProvider>_get_Count__
                      );
    thunk_FUN_00d48444(MicCheckPuzzle_<Flickerlightshaft>d__16_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1fa0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_SimpleTuple<Vector3,_Vector3,_List<int>>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_2193);
    DAT_03780b5d = 1;
  }
  puVar4 = StringLiteral_2193;
  puVar3 = Method_System_String_LastIndexOf__;
  puVar1 = Method_System_Collections_Specialized_BitVector32_CreateMask__;
  if ((*(byte *)(param_1 + 0x50) >> 3 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_String_LastIndexOf__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02055000(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    bVar9 = *(byte *)(param_1 + 0x50) >> 1 & 1;
  }
  else {
    bVar9 = 1;
  }
  if ((((*(byte *)(param_1 + 0x50) & 1) != 0) && (uVar5 = FUN_020720a4(param_1,0), bVar9 == 0)) &&
     ((uVar5 & 1) == 0)) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0205558c();
    puVar1 = MicCheckPuzzle_<Flickerlightshaft>d__16_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_020556e0(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
    }
  }
  if ((bVar9 == 0) || (uVar5 = FUN_020720a4(param_1,0), (uVar5 & 1) != 0)) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0205558c();
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s16__;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_020556e0(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
    }
    *param_2 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar5 = FUN_020720b4(param_1,0),
       puVar1 = Method_System_Collections_Generic_List<LocomotionVignetteProvider>_get_Count__,
       (uVar5 & 1) == 0)) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02055000(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
    }
    goto LAB_02055448;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0205558c();
  puVar1 = PTR_DAT_033f1fa0;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_020556e0(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
  }
  lVar10 = *param_2;
  if (lVar10 == 0) {
    if (*(int *)(*(long *)Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar10 = FUN_017d6668(0);
    *param_2 = lVar10;
    if (lVar10 != 0) goto UnityEngine_InputSystem_FastKeyboard__Initialize_ctrlKeyboardspace;
  }
  else {
UnityEngine_InputSystem_FastKeyboard__Initialize_ctrlKeyboardspace:
    thunk_FUN_00d8e500();
    *(long *)(param_1 + 0x40) = lVar10;
    if ((param_3 & 1) == 0) {
      *param_2 = 0;
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0205558c();
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
    lVar10 = *(long *)(param_1 + 0x40);
    thunk_FUN_00d8e500();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,0);
    }
    puVar1 = Method_UnityEngine_Object_Instantiate<Transform>__;
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar6[4] = lVar10;
    uVar8 = FUN_016a060c(*(undefined8 *)puVar1,plVar6,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_020555f0(param_1,uVar8,*(undefined8 *)puVar4);
  }
LAB_02055448:
  uVar5 = FUN_020720b4(param_1,0);
  if ((uVar5 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar1 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
    uVar5 = FUN_0205558c();
    puVar2 = Method_UnityEngine_ProBuilder_SimpleTuple<Vector3,_Vector3,_List<int>>__ctor__;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_020556e0(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
    }
    FUN_020723b4(param_1,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    uVar8 = 1;
  }
  return uVar8;
}


