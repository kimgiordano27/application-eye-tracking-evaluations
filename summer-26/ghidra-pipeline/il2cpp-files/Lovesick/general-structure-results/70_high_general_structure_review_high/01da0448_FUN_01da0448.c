/*
FUNCTION_NAME: FUN_01da0448
ENTRY_POINT: 01da0448
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01da0448(long param_1,long *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong local_68;
  
  if ((DAT_0377f6dc & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_UIElements_EventCallback<PointerCaptureOutEvent>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(StringLiteral_7091);
    thunk_FUN_00d48444(Oculus_Interaction_VirtualPointable_<>c_TypeInfo);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_ValueTuple<Type,_int>__ctor__);
    DAT_0377f6dc = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01da0c48;
  plVar9 = param_2;
  if (param_2[0xc] == 0) {
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 == (long *)0x0) goto LAB_01da0c48;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                               (plVar9,param_2[0xe],*(undefined8 *)(*plVar9 + 0x310));
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 300
                       );
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
    }
  }
  puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  puVar4 = Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo;
  plVar10 = (long *)FUN_01d9d0a4(param_1,plVar9);
  if (plVar10 == (long *)0x0) {
    if ((plVar9 == (long *)0x0) || (plVar9[0xf] == 0)) goto LAB_01da0c48;
    lVar16 = *(long *)(plVar9[0xf] + 0x10);
    uVar11 = FUN_015ff8a0(lVar16,0);
    if ((uVar11 & 1) == 0) {
      if (plVar9[0xf] == 0) goto LAB_01da0c48;
      uVar11 = FUN_015fe7e8(*(undefined8 *)(plVar9[0xf] + 0x18),*(undefined8 *)puVar4,0);
      plVar13 = (long *)plVar9[0xf];
      if (plVar13 == (long *)0x0) goto LAB_01da0c48;
      if ((uVar11 & 1) == 0) {
        lVar17 = plVar13[2];
      }
      else {
        lVar17 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      }
      goto LAB_01da0834;
    }
    uVar12 = *(undefined8 *)puVar5;
    lVar16 = **(long **)(*(long *)
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                        + 0xb8);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01780344(uVar12,0);
LAB_01da0838:
    lVar17 = 0;
    local_68 = uVar11;
  }
  else {
    lVar16 = *plVar10;
    bVar1 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
    if ((*(byte *)(lVar16 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f19d8)) {
      bVar1 = *(byte *)(*(long *)StringLiteral_13941 + 300);
      if ((*(byte *)(lVar16 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_13941
         )) {
        if (plVar10[7] == 0) {
          uVar12 = FUN_01d34a9c(0);
        }
        else {
          FUN_00ac2be8(plVar10);
          uVar12 = FUN_01d34a50(plVar10[7],0);
        }
        goto LAB_01da0d94;
      }
      if (plVar10[0x16] == 0) goto LAB_01da0c48;
      lVar17 = *(long *)(plVar10[0x16] + 0x10);
      lVar16 = lVar17;
LAB_01da0834:
      uVar11 = FUN_01da5e7c(param_1,lVar17);
      goto LAB_01da0838;
    }
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                 UnityEngine_UIElements_EventCallback<PointerCaptureOutEvent>_TypeInfo
                               );
    if (lVar17 == 0) goto LAB_01da0c48;
    FUN_01d8d998(lVar17,plVar10,0);
    lVar16 = FUN_01eca598(plVar10,0);
    if (lVar16 == 0) goto LAB_01da0c48;
    if (*(long *)(lVar16 + 0x10) == 0) {
LAB_01da07a8:
      local_68 = FUN_01da5e7c(param_1,*(undefined8 *)(lVar17 + 0x10));
      lVar16 = *(long *)(lVar17 + 0x28);
      uVar11 = local_68;
      if (*(int *)(lVar17 + 0x30) == 1) {
        uVar12 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01780344(uVar12,0);
        uVar11 = FUN_01789ac0(local_68,uVar12,0);
        if ((uVar11 & 1) != 0) {
          uVar12 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01780344(uVar12,0);
          local_68 = uVar11;
        }
      }
    }
    else {
      lVar16 = FUN_01eca598(plVar10,0);
      if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) goto LAB_01da0c48;
      if (*(int *)(*(long *)(lVar16 + 0x10) + 0x10) == 0) goto LAB_01da07a8;
      lVar16 = FUN_01eca598(plVar10,0);
      if (lVar16 == 0) goto LAB_01da0c48;
      uVar11 = FUN_015fe7e8(*(undefined8 *)(lVar16 + 0x18),*(undefined8 *)puVar4,0);
      if ((uVar11 & 1) == 0) goto LAB_01da07a8;
      plVar13 = (long *)FUN_01eca598(plVar10,0);
      if (plVar13 == (long *)0x0) goto LAB_01da0c48;
      lVar16 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      plVar13 = (long *)FUN_01eca598(plVar10,0);
      if (plVar13 == (long *)0x0) goto LAB_01da0c48;
      uVar12 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      uVar11 = FUN_01da5e7c(param_1,uVar12);
      local_68 = uVar11;
    }
  }
  puVar4 = Method_System_Collections_Generic_List<Type>_Add__;
  uVar12 = FUN_01d99104(uVar11,plVar9);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  puVar4 = UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo;
  uVar12 = FUN_01f6a2b8(uVar12,0);
  if (((param_4 & 1) == 0) || (*(char *)(param_1 + 0xa0) != '\0')) {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_01da0c48;
    uVar11 = FUN_01d2fd6c(*(long *)(param_3 + 0x40),uVar12,1,0);
    if ((uVar11 & 1) == 0) goto LAB_01da0940;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_01da0c48;
    plVar13 = (long *)FUN_01d2de3c(*(long *)(param_3 + 0x40),uVar12,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (plVar13 == (long *)0x0) goto LAB_01da0c48;
      iVar7 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (iVar7 != 2) {
        FUN_00ac2be8(plVar13);
        uVar12 = FUN_01d34d70(plVar13[6],0);
LAB_01da0d94:
        uVar14 = thunk_FUN_00d48444(
                                   System_Linq_Expressions_Interpreter_OrInstruction_OrByte_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,uVar14);
      }
      if (param_2[0x10] == 0) goto LAB_01da0c48;
      uVar11 = FUN_015ff8a0(*(undefined8 *)(param_2[0x10] + 0x18),0);
      if (((uVar11 & 1) != 0) && (uVar11 = FUN_015ff8a0(plVar13[0x17],0), (uVar11 & 1) != 0)) {
        return;
      }
      if (param_2[0x10] == 0) goto LAB_01da0c48;
      uVar19 = *(undefined8 *)(param_2[0x10] + 0x18);
      uVar14 = FUN_01d2a2c4(plVar13,0);
      uVar11 = FUN_015fe560(uVar19,uVar14,4,0);
      if ((uVar11 & 1) != 0) {
        return;
      }
      goto LAB_01da0940;
    }
    bVar2 = false;
    plVar3 = (long *)
             Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
    ;
  }
  else {
LAB_01da0940:
    plVar13 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (plVar13 == (long *)0x0) goto LAB_01da0c48;
    FUN_01d258dc(plVar13,uVar12,local_68,0,2,0);
    bVar2 = true;
    plVar3 = (long *)
             Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
    ;
  }
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__ =
       (undefined *)plVar3;
  if (plVar9 == (long *)0x0) goto LAB_01da0c48;
  lVar18 = plVar9[9];
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01d982fc(plVar13,lVar18);
  FUN_01d98be0(param_1,plVar13,plVar9[9]);
  FUN_01d98850(plVar13,plVar9[9]);
  if (plVar13 == (long *)0x0) goto LAB_01da0c48;
  lVar18 = FUN_01d294bc(plVar13,0);
  if (lVar18 != 0) {
    lVar18 = FUN_01d294bc(plVar13,0);
    if (lVar18 == 0) goto LAB_01da0c48;
    if (*(int *)(lVar18 + 0x10) != 0) {
      plVar15 = *(long **)(param_1 + 0x30);
      if (plVar15 == (long *)0x0) goto LAB_01da0c48;
      (**(code **)(*plVar15 + 0x308))(plVar15,plVar13,*(undefined8 *)(*plVar15 + 0x310));
    }
  }
  puVar4 = StringLiteral_7091;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar17 + 0x28) + 0x10) < 1)) {
LAB_01da0a50:
    plVar13[0x1c] = lVar16;
  }
  else {
    if (*(int *)(*plVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar16 = FUN_01d98168(plVar10,*(undefined8 *)puVar4);
    if (lVar16 != 0) {
      lVar16 = FUN_01d8e504(lVar17,0);
      goto LAB_01da0a50;
    }
  }
  FUN_01d25c54(plVar13,lVar17,0);
  FUN_01d26550(plVar13,*(int *)((long)param_2 + 0x6c) != 3,0);
  if (param_2[0x10] == 0) {
LAB_01da0c48:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01d2a33c(plVar13,*(undefined8 *)(param_2[0x10] + 0x18),0);
  uVar12 = FUN_01d2a2c4(plVar13,0);
  uVar12 = FUN_01d9d020(uVar12,param_2,*(undefined8 *)puVar4,uVar12);
  FUN_01d2a33c(plVar13,uVar12,0);
  if (bVar2) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      FUN_01d26550(plVar13,1,0);
      uVar12 = FUN_01d2a2c4(plVar13,0);
      uVar12 = FUN_01da4260(param_1,uVar12);
      FUN_01d286f0(plVar13,uVar12,0);
    }
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_01da0c48;
    FUN_01d2e180(*(long *)(param_3 + 0x40),plVar13,0);
  }
  puVar5 = Method_System_ValueTuple<Type,_int>__ctor__;
  puVar4 = Oculus_Interaction_VirtualPointable_<>c_TypeInfo;
  iVar7 = *(int *)((long)param_2 + 0x6c);
  if (iVar7 == 2) {
    uVar12 = (**(code **)(*plVar13 + 0x1e8))(plVar13,4,*(undefined8 *)(*plVar13 + 0x1f0));
    uVar8 = FUN_01d9a8bc(uVar12,plVar9,*(undefined8 *)puVar5,1);
    FUN_01d26550(plVar13,uVar8 & 1,0);
    if (*(int *)(*plVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar16 = FUN_01d98168(plVar9,*(undefined8 *)puVar4);
    if (lVar16 != 0) {
      uVar12 = FUN_01d2ca20(plVar13,lVar16,0);
      FUN_01d28d14(plVar13,uVar12,0);
    }
    iVar7 = *(int *)((long)param_2 + 0x6c);
  }
  if (iVar7 == 3) {
    if (*(int *)(*plVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar16 = FUN_01d98168(plVar9,*(undefined8 *)puVar4);
  }
  else {
    lVar16 = plVar9[10];
  }
  if ((lVar16 == 0) && (*(int *)((long)plVar9 + 0x6c) == 1)) {
    lVar16 = plVar9[0xb];
  }
  if (lVar16 != 0) {
    uVar12 = FUN_01d2ca20(plVar13,lVar16,0);
    FUN_01d28d14(plVar13,uVar12,0);
  }
  return;
}


