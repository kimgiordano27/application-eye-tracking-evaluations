/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<__Il2CppFullySharedGenericType>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 01135d48
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__set_ToDisplayStringsDelegate
               (long param_1)

{
  void *__src;
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x21;
  long lVar11;
  long lVar12;
  uint uVar13;
  void *__dest;
  ulong __n;
  void *unaff_x26;
  void *pvVar14;
  long unaff_x28;
  long unaff_x29;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xff0));
  thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
  thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List_Enumerator<HandDescription>_get_Current__
                    );
  plVar8 = *(long **)(unaff_x21 + 0x38);
  if (plVar8 == (long *)0x0) {
    FUN_00d59478();
    plVar8 = *(long **)(unaff_x21 + 0x38);
  }
  lVar4 = *plVar8;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    uVar13 = iVar3 - 0x10;
  }
  else {
    uVar13 = 8;
  }
  lVar4 = **(long **)(unaff_x21 + 0x38);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0x28) < 0) {
    uVar5 = thunk_FUN_00d42afc();
  }
  else {
    uVar5 = 0x18;
  }
  lVar12 = (long)&stack0x00000000 - ((uVar5 & 0xffffffff) + 0xf & 0x1fffffff0);
  __n = (ulong)uVar13;
  uVar5 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)(lVar12 - uVar5);
  pvVar14 = (void *)((long)__dest - uVar5);
  plVar8 = *(long **)(unaff_x21 + 0x38);
  lVar4 = *plVar8;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
    plVar8 = *(long **)(unaff_x21 + 0x38);
  }
  __src = unaff_x26;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    __src = (void *)(unaff_x29 + -0x68);
  }
  memcpy(__dest,__src,__n);
  lVar4 = *plVar8;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  plVar8 = (long *)thunk_FUN_00d61fa0(lVar4,__dest);
  plVar9 = *(long **)(unaff_x21 + 0x38);
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c(lVar4);
    unaff_x26 = *(void **)(unaff_x29 + -0x68);
    plVar9 = *(long **)(unaff_x21 + 0x38);
  }
  if (-1 < *(int *)(lVar4 + 0x28)) {
    unaff_x26 = (void *)(unaff_x29 + -0x68);
  }
  memcpy(pvVar14,unaff_x26,__n);
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  plVar9 = (long *)thunk_FUN_00d61fa0(lVar4,pvVar14);
  if ((plVar9 != (long *)0x0) &&
     (*plVar9 == *(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__)
     ) {
    if (plVar8 != (long *)0x0) {
      if (*(long *)(*plVar8 + 0x40) ==
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) {
        thunk_FUN_00d624a0(plVar8);
        FUN_0230ef88();
        goto LAB_01136350;
      }
      goto LAB_01136388;
    }
LAB_01136384:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar9 = *(long **)(unaff_x21 + 0x38);
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
    plVar9 = *(long **)(unaff_x21 + 0x38);
  }
  pvVar14 = *(void **)(unaff_x29 + -0x68);
  if (-1 < *(int *)(lVar4 + 0x28)) {
    pvVar14 = (void *)(unaff_x29 + -0x68);
  }
  memcpy(__dest,pvVar14,__n);
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  plVar9 = (long *)thunk_FUN_00d61fa0(lVar4,__dest);
  if ((plVar9 == (long *)0x0) ||
     (*plVar9 != *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo)) {
    plVar9 = *(long **)(unaff_x21 + 0x38);
    lVar4 = *plVar9;
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
      plVar9 = *(long **)(unaff_x21 + 0x38);
    }
    pvVar14 = *(void **)(unaff_x29 + -0x68);
    if (-1 < *(int *)(lVar4 + 0x28)) {
      pvVar14 = (void *)(unaff_x29 + -0x68);
    }
    memcpy(__dest,pvVar14,__n);
    lVar4 = *plVar9;
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar4,__dest);
    if ((plVar9 == (long *)0x0) || (*plVar9 != *(long *)StringLiteral_9958)) {
      plVar9 = *(long **)(unaff_x21 + 0x38);
      lVar4 = *plVar9;
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
        plVar9 = *(long **)(unaff_x21 + 0x38);
      }
      pvVar14 = *(void **)(unaff_x29 + -0x68);
      if (-1 < *(int *)(lVar4 + 0x28)) {
        pvVar14 = (void *)(unaff_x29 + -0x68);
      }
      memcpy(__dest,pvVar14,__n);
      lVar4 = *plVar9;
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0(lVar4,__dest);
      if (plVar9 != (long *)0x0) {
        if (*plVar9 ==
            *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
          if ((plVar8 != (long *)0x0) &&
             (*plVar8 !=
              *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
             ) goto LAB_01136388;
          FUN_0230f068();
          goto LAB_01136350;
        }
      }
      plVar9 = *(long **)(unaff_x21 + 0x38);
      lVar4 = *plVar9;
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
        plVar9 = *(long **)(unaff_x21 + 0x38);
      }
      pvVar14 = *(void **)(unaff_x29 + -0x68);
      if (-1 < *(int *)(lVar4 + 0x28)) {
        pvVar14 = (void *)(unaff_x29 + -0x68);
      }
      memcpy(__dest,pvVar14,__n);
      lVar4 = *plVar9;
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0(lVar4,__dest);
      if ((plVar9 == (long *)0x0) || (*plVar9 != *(long *)StringLiteral_7349)) {
        plVar9 = *(long **)(unaff_x21 + 0x38);
        lVar4 = *plVar9;
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
          plVar9 = *(long **)(unaff_x21 + 0x38);
        }
        pvVar14 = *(void **)(unaff_x29 + -0x68);
        if (-1 < *(int *)(lVar4 + 0x28)) {
          pvVar14 = (void *)(unaff_x29 + -0x68);
        }
        memcpy(__dest,pvVar14,__n);
        lVar4 = *plVar9;
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar4,__dest);
        if (plVar9 != (long *)0x0) {
          lVar4 = *(long *)StringLiteral_11347;
          bVar2 = *(byte *)(lVar4 + 300);
          if ((bVar2 <= *(byte *)(*plVar9 + 300)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar2 - 1) * 8) == lVar4)) {
            if ((plVar8 != (long *)0x0) &&
               ((*(byte *)(*plVar8 + 300) < bVar2 ||
                (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) != lVar4))))
            goto LAB_01136388;
            FUN_0230f160();
            goto LAB_01136350;
          }
        }
        uVar10 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar8 = (long *)FUN_01780344(uVar10,0);
        if (plVar8 == (long *)0x0) goto LAB_01136384;
        uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        plVar8 = *(long **)(unaff_x21 + 0x38);
        lVar4 = *plVar8;
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c(lVar4);
          plVar8 = *(long **)(unaff_x21 + 0x38);
        }
        lVar6 = *plVar8;
        lVar11 = plVar8[2];
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar1 = *(long *)(unaff_x29 + -0x68);
        if (-1 < *(int *)(lVar6 + 0x28)) {
          lVar1 = unaff_x29 + -0x68;
        }
        FUN_00da59dc(lVar4,lVar11,lVar12,lVar1,0,unaff_x29 + -0x60);
        uVar10 = FUN_01600ba0(*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<HandDescription>_get_Current__
                              ,uVar10,*(undefined8 *)(unaff_x29 + -0x70),
                              *(undefined8 *)(unaff_x29 + -0x60),0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar10,0);
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_01136384;
        if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)StringLiteral_7349 + 0x40)) {
LAB_01136388:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
        puVar7 = (undefined4 *)thunk_FUN_00d624a0(plVar8);
        FUN_0230f0d0(*puVar7,puVar7[1],puVar7[2],puVar7[3]);
      }
    }
    else {
      if (plVar8 == (long *)0x0) goto LAB_01136384;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)StringLiteral_9958 + 0x40))
      goto LAB_01136388;
      thunk_FUN_00d624a0(plVar8);
      FUN_0230ef14();
    }
  }
  else {
    if (plVar8 == (long *)0x0) goto LAB_01136384;
    if (*(long *)(*plVar8 + 0x40) !=
        *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
    goto LAB_01136388;
    puVar7 = (undefined4 *)thunk_FUN_00d624a0(plVar8);
    FUN_0230eff8(*puVar7);
  }
LAB_01136350:
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


