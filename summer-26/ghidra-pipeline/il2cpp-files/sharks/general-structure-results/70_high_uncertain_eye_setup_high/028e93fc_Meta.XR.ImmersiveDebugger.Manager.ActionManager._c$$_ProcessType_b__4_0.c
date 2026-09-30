/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager.<>c$$<ProcessType>b__4_0
ENTRY_POINT: 028e93fc
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager_<>c__<ProcessType>b__4_0
               (undefined8 *param_1,undefined8 *****param_2,long param_3)

{
  undefined8 *****pppppuVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 **ppuVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  long lVar12;
  undefined8 ***__dest;
  long *plVar13;
  code *pcVar14;
  ulong __n;
  undefined8 uVar15;
  long *aplStack_50 [2];
  long *plStack_40;
  undefined8 ****ppppuStack_38;
  undefined8 ***pppuStack_30;
  long **pplStack_28;
  long **pplStack_20;
  undefined8 uStack_18;
  char acStack_c [4];
  long lStack_8;
  
  lVar5 = tpidr_el0;
  lStack_8 = *(long *)(lVar5 + 0x28);
  plVar13 = (long *)(param_3 + 0x20);
  lVar11 = *plVar13;
  uVar4 = *(ushort *)(lVar11 + 0x135);
  lVar7 = lVar11;
  ppppuStack_38 = param_2;
  if ((uVar4 & 1) == 0) {
    lVar11 = FUN_0185daa4(lVar11);
    uVar4 = *(ushort *)(*plVar13 + 0x135);
    lVar7 = *plVar13;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x140) + 0xfc);
  __dest = (undefined8 ***)((long)aplStack_50 - (__n + 0xf & 0x1fffffff0));
  aplStack_50[1] = (long *)0x0;
  plStack_40 = (long *)0x0;
  aplStack_50[0] = (long *)0x0;
  if ((uVar4 & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar7 = *plVar13;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (lVar7 == 0) {
LAB_028e9c04:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar12 = *plVar13;
  pppuVar2 = (undefined8 ***)*param_1;
  uVar3 = param_1[1];
  uVar4 = *(ushort *)(lVar12 + 0x135);
  lVar11 = lVar12;
  if ((uVar4 & 1) == 0) {
    lVar12 = FUN_0185daa4(lVar12);
    uVar4 = *(ushort *)(*plVar13 + 0x135);
    lVar11 = *plVar13;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0xb0);
  if ((uVar4 & 1) == 0) {
    lVar11 = FUN_0185daa4(lVar11);
  }
  pplStack_28 = aplStack_50 + 2;
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0xb0);
  pppuStack_30 = &pplStack_20;
  pplStack_20 = (long **)pppuVar2;
  uStack_18 = uVar3;
  (**(code **)(lVar11 + 0x10))(uVar15,lVar11,lVar7,&pppuStack_30,acStack_c);
  plVar6 = plStack_40;
  if (acStack_c[0] != '\0') {
    if (plStack_40 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar4 = *(ushort *)(lVar11 + 0x135);
      lVar7 = lVar11;
      if ((uVar4 & 1) == 0) {
        lVar11 = FUN_0185daa4(lVar11);
                    /* try { // try from 028e9588 to 029e95af has its CatchHandler @ 028e9744 */
        uVar4 = *(ushort *)(*plVar13 + 0x135);
        lVar7 = *plVar13;
      }
      pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x148);
      lVar11 = lVar7;
      if ((uVar4 & 1) == 0) {
        lVar7 = FUN_0185daa4(lVar7);
        uVar4 = *(ushort *)(*plVar13 + 0x135);
        lVar11 = *plVar13;
      }
      pppppuVar1 = (undefined8 *****)ppppuStack_38;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x140) + 0x28)) {
        pppppuVar1 = &ppppuStack_38;
      }
      if ((uVar4 & 1) == 0) {
        lVar11 = FUN_0185daa4(lVar11);
      }
      (*pcVar14)(plVar6,pppppuVar1,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x148));
      goto LAB_028e9bd4;
    }
    goto LAB_028e9c04;
  }
  lVar7 = *plVar13;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar7 = *plVar13;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar7 == 0) goto LAB_028e9c04;
  lVar12 = *plVar13;
  pppuVar2 = (undefined8 ***)*param_1;
  uVar3 = param_1[1];
  uVar4 = *(ushort *)(lVar12 + 0x135);
  lVar11 = lVar12;
  if ((uVar4 & 1) == 0) {
    lVar12 = FUN_0185daa4(lVar12);
    uVar4 = *(ushort *)(*plVar13 + 0x135);
    lVar11 = *plVar13;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0xd0);
  if ((uVar4 & 1) == 0) {
    lVar11 = FUN_0185daa4(lVar11);
  }
  pplStack_28 = aplStack_50 + 1;
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0xd0);
  pppuStack_30 = &pplStack_20;
  pplStack_20 = (long **)pppuVar2;
  uStack_18 = uVar3;
  (**(code **)(lVar11 + 0x10))(uVar15,lVar11,lVar7,&pppuStack_30,acStack_c);
  ppuVar9 = (undefined8 **)aplStack_50[1];
  if (acStack_c[0] == '\0') {
    lVar7 = *plVar13;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar11 = *plVar13;
    uVar4 = *(ushort *)(lVar11 + 0x135);
    lVar7 = lVar11;
    if ((uVar4 & 1) == 0) {
      lVar11 = FUN_0185daa4(lVar11);
      uVar4 = *(ushort *)(*plVar13 + 0x135);
      lVar7 = *plVar13;
    }
    pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0xf0);
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    uVar8 = (*pcVar14)(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xf0));
    if ((uVar8 & 1) == 0) goto LAB_028e9bd4;
    lVar7 = *plVar13;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar7 = *plVar13;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
    if (lVar7 == 0) goto LAB_028e9c04;
    lVar12 = *plVar13;
    pppuVar2 = (undefined8 ***)*param_1;
    uVar3 = param_1[1];
    uVar4 = *(ushort *)(lVar12 + 0x135);
    lVar11 = lVar12;
    if ((uVar4 & 1) == 0) {
      lVar12 = FUN_0185daa4(lVar12);
      uVar4 = *(ushort *)(*plVar13 + 0x135);
      lVar11 = *plVar13;
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0xf8);
    if ((uVar4 & 1) == 0) {
      lVar11 = FUN_0185daa4(lVar11);
    }
    pplStack_28 = aplStack_50;
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0xf8);
    pppuStack_30 = &pplStack_20;
    pplStack_20 = (long **)pppuVar2;
    uStack_18 = uVar3;
    (**(code **)(lVar11 + 0x10))(uVar15,lVar11,lVar7,&pppuStack_30,acStack_c);
    ppuVar9 = (undefined8 **)aplStack_50[0];
    if (acStack_c[0] == '\0') {
      lVar7 = *plVar13;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar7 = *plVar13;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4();
      }
      lVar11 = *plVar13;
      pppuVar2 = (undefined8 ***)*param_1;
      uVar3 = param_1[1];
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0185daa4();
      }
      pppppuVar1 = (undefined8 *****)ppppuStack_38;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x140) + 0x28)) {
        pppppuVar1 = &ppppuStack_38;
      }
      memcpy(__dest,pppppuVar1,__n);
      if (lVar7 != 0) {
        lVar12 = *plVar13;
        uVar4 = *(ushort *)(lVar12 + 0x135);
        lVar11 = lVar12;
        if ((uVar4 & 1) == 0) {
          lVar12 = FUN_0185daa4(lVar12);
          uVar4 = *(ushort *)(*plVar13 + 0x135);
          lVar11 = *plVar13;
        }
        uVar15 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x168);
        lVar12 = lVar11;
        if ((uVar4 & 1) == 0) {
          lVar11 = FUN_0185daa4(lVar11);
          uVar4 = *(ushort *)(*plVar13 + 0x135);
          lVar12 = *plVar13;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x168);
        if ((uVar4 & 1) == 0) {
          lVar12 = FUN_0185daa4(lVar12);
        }
        if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x140) + 0x28)) {
          __dest = (undefined8 ***)*__dest;
        }
        pppuStack_30 = &pplStack_20;
        pplStack_28 = (long **)__dest;
        pplStack_20 = (long **)pppuVar2;
        uStack_18 = uVar3;
        (**(code **)(lVar11 + 0x10))(uVar15,lVar11,lVar7,&pppuStack_30,__dest);
        lVar11 = *plVar13;
        uVar4 = *(ushort *)(lVar11 + 0x135);
        lVar7 = lVar11;
        if ((uVar4 & 1) == 0) {
          lVar11 = FUN_0185daa4(lVar11);
          uVar4 = *(ushort *)(*plVar13 + 0x135);
          lVar7 = *plVar13;
        }
        pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x108);
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_0185daa4(lVar7);
        }
        (*pcVar14)(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x108));
        goto LAB_028e9bd4;
      }
      goto LAB_028e9c04;
    }
    lVar7 = *plVar13;
    pppuVar2 = (undefined8 ***)*param_1;
    uVar3 = param_1[1];
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    pppppuVar1 = (undefined8 *****)ppppuStack_38;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x140) + 0x28)) {
      pppppuVar1 = &ppppuStack_38;
    }
    memcpy(__dest,pppppuVar1,__n);
    if (ppuVar9 == (undefined8 **)0x0) goto LAB_028e9c04;
    lVar11 = *plVar13;
    uVar4 = *(ushort *)(lVar11 + 0x135);
    lVar7 = lVar11;
    if ((uVar4 & 1) == 0) {
      lVar11 = FUN_0185daa4(lVar11);
      uVar4 = *(ushort *)(*plVar13 + 0x135);
      lVar7 = *plVar13;
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x160);
    lVar11 = lVar7;
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar4 = *(ushort *)(*plVar13 + 0x135);
      lVar11 = *plVar13;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x160);
    if ((uVar4 & 1) == 0) {
      lVar11 = FUN_0185daa4(lVar11);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x140) + 0x28)) {
      __dest = (undefined8 ***)*__dest;
    }
    pppuStack_30 = &pplStack_20;
    pcVar14 = *(code **)(lVar7 + 0x10);
    ppppuVar10 = &pppuStack_30;
    pplStack_28 = (long **)__dest;
    pplStack_20 = (long **)pppuVar2;
    uStack_18 = uVar3;
  }
  else {
    lVar7 = *plVar13;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    pppppuVar1 = (undefined8 *****)ppppuStack_38;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x140) + 0x28)) {
      pppppuVar1 = &ppppuStack_38;
    }
    memcpy(__dest,pppppuVar1,__n);
    if (ppuVar9 == (undefined8 **)0x0) goto LAB_028e9c04;
    lVar11 = *plVar13;
    uVar4 = *(ushort *)(lVar11 + 0x135);
    lVar7 = lVar11;
    if ((uVar4 & 1) == 0) {
      lVar11 = FUN_0185daa4(lVar11);
      uVar4 = *(ushort *)(*plVar13 + 0x135);
      lVar7 = *plVar13;
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x158);
    lVar11 = lVar7;
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar4 = *(ushort *)(*plVar13 + 0x135);
      lVar11 = *plVar13;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x158);
    if ((uVar4 & 1) == 0) {
      lVar11 = FUN_0185daa4(lVar11);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x140) + 0x28)) {
      __dest = (undefined8 ***)*__dest;
    }
    pcVar14 = *(code **)(lVar7 + 0x10);
    ppppuVar10 = (undefined8 ****)&pplStack_20;
    pplStack_20 = (long **)__dest;
  }
  (*pcVar14)(uVar15,lVar7,ppuVar9,ppppuVar10,__dest);
LAB_028e9bd4:
  if (*(long *)(lVar5 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


