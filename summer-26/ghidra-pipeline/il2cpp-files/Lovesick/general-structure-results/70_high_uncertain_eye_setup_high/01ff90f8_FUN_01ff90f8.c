/*
FUNCTION_NAME: FUN_01ff90f8
ENTRY_POINT: 01ff90f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ff93f4) */
/* WARNING: Removing unreachable block (ram,0x01ff9574) */
/* WARNING: Removing unreachable block (ram,0x01ff947c) */
/* WARNING: Removing unreachable block (ram,0x01ff9584) */

long * FUN_01ff90f8(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char local_64 [4];
  
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if ((DAT_0378085d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiRigidbodyHandle>__ctor__);
    thunk_FUN_00d48444(StringLiteral_3919);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Selectable>__ctor__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0378085d = 1;
  }
  local_64[0] = '\0';
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = Method_SoccerBlocker_HideCrowd__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = Method_System_Collections_Generic_List<Selectable>__ctor__;
  FUN_01ff9c60(param_1);
  do {
    while( true ) {
      uVar9 = param_1;
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      plVar6 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
      if (plVar6 == (long *)0x0) goto LAB_01ff9568;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x310))
      ;
      if (plVar6 == (long *)0x0) break;
LAB_01ff9228:
      if (*plVar6 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
LAB_01ff923c:
      param_1 = uVar9;
      if (plVar6 != (long *)0x0) {
        return plVar6;
      }
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    plVar6 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar6 == (long *)0x0) goto LAB_01ff9568;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x310));
    if (plVar6 != (long *)0x0) goto LAB_01ff9228;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    param_1 = FUN_01fff244(uVar9);
    lVar5 = *(long *)puVar3;
    uVar10 = *(undefined8 *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
    }
    uVar10 = FUN_01780344(uVar10,0);
    uVar7 = FUN_01789ac0(uVar9,uVar10,0);
    if ((uVar7 & 1) != 0) {
LAB_01ff92bc:
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      local_64[0] = '\0';
      FUN_017d75a8(uVar10,local_64,0);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      plVar6 = (long *)**(long **)(lVar5 + 0xb8);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x310))
      ;
      if (plVar6 == (long *)0x0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3919);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01fd81bc(lVar5,0);
        plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01fd81bc(plVar6,0);
        plVar6[5] = lVar5;
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar2;
        }
        plVar8 = (long *)**(long **)(lVar5 + 0xb8);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar8 + 0x318))(plVar8,uVar9,plVar6,*(undefined8 *)(*plVar8 + 800));
      }
      else if (*plVar6 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
      if (local_64[0] != '\0') {
        thunk_FUN_00d56f10(uVar10,0);
      }
      goto LAB_01ff923c;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_01789ac0(param_1,0,0);
    if ((uVar7 & 1) != 0) goto LAB_01ff92bc;
  } while ((param_2 & 1) == 0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_List<ObiRigidbodyHandle>__ctor__);
  if (lVar5 != 0) {
    FUN_01fd8194(lVar5,param_1,0);
    plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (plVar6 != (long *)0x0) {
      FUN_01fd81bc(plVar6,0);
      plVar6[5] = lVar5;
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      local_64[0] = '\0';
      FUN_017d75a8(uVar10,local_64,0);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      plVar8 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x318))(plVar8,uVar9,plVar6,*(undefined8 *)(*plVar8 + 800));
        if (local_64[0] != '\0') {
          thunk_FUN_00d56f10(uVar10,0);
        }
        return plVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_01ff9568:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


