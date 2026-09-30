/*
FUNCTION_NAME: UnityWebSocketSharp.Net.WebHeaderCollection$$.ctor
ENTRY_POINT: 05c2c950
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityWebSocketSharp_Net_WebHeaderCollection___ctor(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x27;
  ulong uVar12;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack000000000000005c;
  
  (**(code **)(*param_2 + 0x1d8))
            (param_2,**(undefined8 **)(param_1 + 0xf10),*(undefined8 *)(*param_2 + 0x1e0));
  plVar5 = (long *)*unaff_x22;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*plVar5 + 0x248))(plVar5,in_stack_00000000,*(undefined8 *)(*plVar5 + 0x250));
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Remove__;
  if ((in_stack_00000000 != 0) && (0 < (int)*(ulong *)(unaff_x27 + 0x18))) {
    uVar12 = 0;
    uVar7 = *(ulong *)(unaff_x27 + 0x18) & 0xffffffff;
    do {
      if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar9 = *(undefined8 *)(unaff_x27 + 0x20 + uVar12 * 8);
      lVar11 = *unaff_x22;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar11 = FUN_05d065d0(uVar9,lVar11,in_stack_00000000,0);
      if (lVar11 != 0) {
        uVar12 = thunk_FUN_0536b75c(*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)PTR_DAT_06a1a6b8,0
                                   );
        FUN_053798ac();
        FUN_053798ac();
        if ((uVar12 & 1) != 0) {
          FUN_053798ac();
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + 1;
        }
        break;
      }
      uVar7 = (ulong)*(uint *)(unaff_x27 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(unaff_x27 + 0x18));
  }
  FUN_053798ac();
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  plVar5 = (long *)FUN_05389424(0);
  uVar9 = (**(code **)(*unaff_x21 + 0x168))();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860(uVar9,uVar9);
  }
  lVar11 = (**(code **)(*plVar5 + 600))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x260));
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar5 = *(long **)(unaff_x19 + 10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = (**(code **)(*plVar5 + 0x318))
                     (plVar5,lVar11,0,*(undefined4 *)(lVar11 + 0x18),
                      *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar5 + 800));
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  _in_stack_00000040 = FUN_0555c350(lVar11,0,0);
  uVar12 = FUN_05410178(&stack0x00000040,0);
  if ((uVar12 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000040;
    LeanTween__value(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0353b230(unaff_x19 + 2,&stack0x00000040);
    return;
  }
  FUN_05410190(&stack0x00000040,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = FUN_05c2c134();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  _in_stack_00000030 =
       FUN_048146f8(lVar11,0,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<uint,_Glyph>__ctor__);
  uVar12 = FUN_04b88740(&stack0x00000030,
                        *(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<uint,_Character>_get_Item__);
  if ((uVar12 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000030;
    LeanTween__value(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_03536bf0(unaff_x19 + 2,&stack0x00000030);
    return;
  }
  FUN_04b88788(&stack0x00000008,&stack0x00000030,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<uint,_Character>_TryGetValue__);
  uVar6 = in_stack_00000018;
  uVar9 = in_stack_00000010;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar5 = (long *)(unaff_x20 + 0x48);
  *plVar5 = in_stack_00000008;
  LeanTween__value(plVar5);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x58),uVar9);
  cVar3 = *(char *)(unaff_x19 + 0xe);
  iStack000000000000005c = (int)uVar6;
  *(int *)(unaff_x20 + 0x30) = iStack000000000000005c;
  if ((((cVar3 == '\0') || (*(int *)(unaff_x20 + 0x28) == 1)) && (*plVar5 != 0)) &&
     (iStack000000000000005c == 0x197)) {
    lVar11 = FUN_05ccbaa0(*plVar5,*(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo,0);
    uVar12 = FUN_0536c9cc(lVar11,0);
    if ((uVar12 & 1) == 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar9 = FUN_05371c64(lVar11,0);
      uVar12 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)PTR_DAT_06a132d8,0);
      if ((uVar12 & 1) != 0) {
        *(undefined1 *)(unaff_x20 + 0x2d) = 1;
      }
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = (**(code **)(*plVar5 + 0x248))
                      (plVar5,*(undefined8 *)
                               UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                       ,*(undefined8 *)(*plVar5 + 0x250));
    *(undefined8 *)(unaff_x20 + 0x40) = uVar9;
    LeanTween__value();
  }
  else if (iStack000000000000005c == 200) {
    bVar4 = *plVar5 != 0;
    goto LAB_05c2cc08;
  }
  bVar4 = false;
LAB_05c2cc08:
  *(bool *)(unaff_x20 + 0x2c) = bVar4;
  if ((*(long *)(unaff_x20 + 0x40) == 0) &&
     ((iVar2 = *(int *)(unaff_x20 + 0x30), iVar2 == 0x197 || (iVar2 == 0x191)))) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    thunk_FUN_02dfd288(OVRPlugin_OVRP_1_58_0_TypeInfo);
    uVar9 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_05c1d84c(uVar9,uVar10,uVar6,iVar2,uVar8,0);
    puVar1 = Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_Clear__;
    if (*(int *)(unaff_x20 + 0x30) != 0x197) {
      puVar1 = Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_Add__;
    }
    uVar6 = thunk_FUN_02dfd288(puVar1);
    thunk_FUN_02dfd288(PTR_DAT_06a10338);
    uVar8 = thunk_FUN_02dd3144();
    FUN_05ce6238(uVar8,uVar6,0,7,uVar9,0);
    uVar9 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_ContainsKey__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,uVar9);
  }
  lVar11 = *unaff_x23;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05410914(unaff_x19 + 2,0);
  return;
}


