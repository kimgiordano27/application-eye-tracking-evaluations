/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<__Il2CppFullySharedGenericType>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 01135cdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__get_ToDisplayStringsDelegate
               (undefined8 param_1,undefined8 param_2,undefined8 ****param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  void *__dest;
  ulong __n;
  void *__dest_00;
  undefined8 uStack_20;
  undefined8 ***pppuStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lVar3 = tpidr_el0;
  lStack_8 = *(long *)(lVar3 + 0x28);
  plVar10 = *(long **)(param_4 + 0x38);
  uStack_20 = param_2;
  pppuStack_18 = param_3;
  if (plVar10 == (long *)0x0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_7349);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<HandDescription>_get_Current__
                      );
    plVar10 = *(long **)(param_4 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_00d59478(param_4);
      plVar10 = *(long **)(param_4 + 0x38);
    }
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0x28) < 0) {
    iVar4 = thunk_FUN_00d42afc();
    uVar15 = iVar4 - 0x10;
  }
  else {
    uVar15 = 8;
  }
  lVar5 = **(long **)(param_4 + 0x38);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0x28) < 0) {
    uVar6 = thunk_FUN_00d42afc();
  }
  else {
    uVar6 = 0x18;
  }
  lVar14 = (long)&uStack_20 - ((uVar6 & 0xffffffff) + 0xf & 0x1fffffff0);
  __n = (ulong)uVar15;
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)(lVar14 - uVar6);
  __dest_00 = (void *)((long)__dest - uVar6);
  plVar10 = *(long **)(param_4 + 0x38);
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
    plVar10 = *(long **)(param_4 + 0x38);
  }
  ppppuVar1 = param_3;
  if (-1 < *(int *)(lVar5 + 0x28)) {
    ppppuVar1 = &pppuStack_18;
  }
  memcpy(__dest,ppppuVar1,__n);
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  plVar10 = (long *)thunk_FUN_00d61fa0(lVar5,__dest);
  plVar11 = *(long **)(param_4 + 0x38);
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c(lVar5);
    plVar11 = *(long **)(param_4 + 0x38);
    param_3 = (undefined8 ****)pppuStack_18;
  }
  if (-1 < *(int *)(lVar5 + 0x28)) {
    param_3 = &pppuStack_18;
  }
  memcpy(__dest_00,param_3,__n);
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  plVar11 = (long *)thunk_FUN_00d61fa0(lVar5,__dest_00);
  if ((plVar11 != (long *)0x0) &&
     (*plVar11 == *(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
     )) {
    if (plVar10 != (long *)0x0) {
      if (*(long *)(*plVar10 + 0x40) ==
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) {
        puVar9 = (undefined4 *)thunk_FUN_00d624a0(plVar10);
        FUN_0230ef88(param_1,uStack_20,*puVar9,0);
        goto LAB_01136350;
      }
      goto LAB_01136388;
    }
LAB_01136384:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar11 = *(long **)(param_4 + 0x38);
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
    plVar11 = *(long **)(param_4 + 0x38);
  }
  ppppuVar1 = (undefined8 ****)pppuStack_18;
  if (-1 < *(int *)(lVar5 + 0x28)) {
    ppppuVar1 = &pppuStack_18;
  }
  memcpy(__dest,ppppuVar1,__n);
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  plVar11 = (long *)thunk_FUN_00d61fa0(lVar5,__dest);
  if ((plVar11 == (long *)0x0) ||
     (*plVar11 != *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo)) {
    plVar11 = *(long **)(param_4 + 0x38);
    lVar5 = *plVar11;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
      plVar11 = *(long **)(param_4 + 0x38);
    }
    ppppuVar1 = (undefined8 ****)pppuStack_18;
    if (-1 < *(int *)(lVar5 + 0x28)) {
      ppppuVar1 = &pppuStack_18;
    }
    memcpy(__dest,ppppuVar1,__n);
    lVar5 = *plVar11;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar11 = (long *)thunk_FUN_00d61fa0(lVar5,__dest);
    if ((plVar11 == (long *)0x0) || (*plVar11 != *(long *)StringLiteral_9958)) {
      plVar11 = *(long **)(param_4 + 0x38);
      lVar5 = *plVar11;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
        plVar11 = *(long **)(param_4 + 0x38);
      }
      ppppuVar1 = (undefined8 ****)pppuStack_18;
      if (-1 < *(int *)(lVar5 + 0x28)) {
        ppppuVar1 = &pppuStack_18;
      }
      memcpy(__dest,ppppuVar1,__n);
      lVar5 = *plVar11;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      plVar11 = (long *)thunk_FUN_00d61fa0(lVar5,__dest);
      if (plVar11 != (long *)0x0) {
        if (*plVar11 ==
            *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
          if ((plVar10 != (long *)0x0) &&
             (*plVar10 !=
              *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
             ) goto LAB_01136388;
          FUN_0230f068(param_1,uStack_20,plVar10,0);
          goto LAB_01136350;
        }
      }
      plVar11 = *(long **)(param_4 + 0x38);
      lVar5 = *plVar11;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
        plVar11 = *(long **)(param_4 + 0x38);
      }
      ppppuVar1 = (undefined8 ****)pppuStack_18;
      if (-1 < *(int *)(lVar5 + 0x28)) {
        ppppuVar1 = &pppuStack_18;
      }
      memcpy(__dest,ppppuVar1,__n);
      lVar5 = *plVar11;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      plVar11 = (long *)thunk_FUN_00d61fa0(lVar5,__dest);
      if ((plVar11 == (long *)0x0) || (*plVar11 != *(long *)StringLiteral_7349)) {
        plVar11 = *(long **)(param_4 + 0x38);
        lVar5 = *plVar11;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
          plVar11 = *(long **)(param_4 + 0x38);
        }
        ppppuVar1 = (undefined8 ****)pppuStack_18;
        if (-1 < *(int *)(lVar5 + 0x28)) {
          ppppuVar1 = &pppuStack_18;
        }
        memcpy(__dest,ppppuVar1,__n);
        lVar5 = *plVar11;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar5,__dest);
        if (plVar11 != (long *)0x0) {
          lVar5 = *(long *)StringLiteral_11347;
          bVar2 = *(byte *)(lVar5 + 300);
          if ((bVar2 <= *(byte *)(*plVar11 + 300)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) {
            if ((plVar10 != (long *)0x0) &&
               ((*(byte *)(*plVar10 + 300) < bVar2 ||
                (*(long *)(*(long *)(*plVar10 + 200) + ((ulong)bVar2 - 1) * 8) != lVar5))))
            goto LAB_01136388;
            FUN_0230f160(param_1,uStack_20,plVar10,0);
            goto LAB_01136350;
          }
        }
        uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar10 = (long *)FUN_01780344(uVar12,0);
        if (plVar10 == (long *)0x0) goto LAB_01136384;
        uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        plVar10 = *(long **)(param_4 + 0x38);
        lVar5 = *plVar10;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c(lVar5);
          plVar10 = *(long **)(param_4 + 0x38);
        }
        lVar7 = *plVar10;
        lVar13 = plVar10[2];
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        ppppuVar1 = (undefined8 ****)pppuStack_18;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          ppppuVar1 = &pppuStack_18;
        }
        FUN_00da59dc(lVar5,lVar13,lVar14,ppppuVar1,0,&uStack_10);
        uVar12 = FUN_01600ba0(*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<HandDescription>_get_Current__
                              ,uVar12,uStack_20,uStack_10,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar12,0);
      }
      else {
        if (plVar10 == (long *)0x0) goto LAB_01136384;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_7349 + 0x40)) {
LAB_01136388:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar10);
        }
        puVar9 = (undefined4 *)thunk_FUN_00d624a0(plVar10);
        FUN_0230f0d0(*puVar9,puVar9[1],puVar9[2],puVar9[3],param_1,uStack_20,0);
      }
    }
    else {
      if (plVar10 == (long *)0x0) goto LAB_01136384;
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)StringLiteral_9958 + 0x40))
      goto LAB_01136388;
      puVar8 = (undefined1 *)thunk_FUN_00d624a0(plVar10);
      FUN_0230ef14(param_1,uStack_20,*puVar8,0);
    }
  }
  else {
    if (plVar10 == (long *)0x0) goto LAB_01136384;
    if (*(long *)(*plVar10 + 0x40) !=
        *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
    goto LAB_01136388;
    puVar9 = (undefined4 *)thunk_FUN_00d624a0(plVar10);
    FUN_0230eff8(*puVar9,param_1,uStack_20,0);
  }
LAB_01136350:
  if (*(long *)(lVar3 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


