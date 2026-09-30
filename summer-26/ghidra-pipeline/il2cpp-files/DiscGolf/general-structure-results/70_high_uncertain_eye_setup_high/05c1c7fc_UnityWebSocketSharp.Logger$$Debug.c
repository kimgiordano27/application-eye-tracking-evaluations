/*
FUNCTION_NAME: UnityWebSocketSharp.Logger$$Debug
ENTRY_POINT: 05c1c7fc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c1cd3c) */
/* WARNING: Removing unreachable block (ram,0x05c1cd8c) */

void UnityWebSocketSharp_Logger__Debug(void)

{
  long lVar1;
  bool in_ZR;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int in_w8;
  int *piVar8;
  undefined4 *unaff_x19;
  long lVar9;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined1 *in_stack_00000068;
  char *in_stack_00000070;
  undefined8 *in_stack_00000078;
  int iStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined1 *in_stack_00000098;
  char *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  
  if (!in_ZR) {
    if (in_w8 == 0) {
      _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
      *(undefined8 *)(unaff_x19 + 0x16) = 0;
      iStack000000000000008c = -1;
      *unaff_x19 = 0xffffffff;
    }
    else {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar10 = *(undefined8 *)(unaff_x21 + 0x40);
      uVar11 = *(undefined8 *)(unaff_x21 + 0xa8);
      uVar12 = *(undefined8 *)(unaff_x19 + 10);
      uVar13 = *(undefined8 *)(unaff_x21 + 0x78);
      iStack000000000000008c = in_w8;
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
      FUN_05c1cfa8(uVar4,uVar10,uVar11,uVar12,uVar13);
      *(undefined8 *)(unaff_x19 + 0xe) = uVar4;
      LeanTween__value(unaff_x19 + 0xe,uVar4);
      plVar6 = (long *)(unaff_x19 + 0x10);
      *plVar6 = 0;
      LeanTween__value(plVar6,0);
      *(undefined2 *)(unaff_x19 + 0x12) = 0;
      in_stack_00000098 = (undefined1 *)&stack0x0000008c;
      in_stack_000000a8 = &stack0x00000058;
      in_stack_00000058 = *(undefined8 *)(unaff_x21 + 0x128);
      in_stack_00000090 = 0;
      in_stack_000000a0 = (char *)((long)&stack0x00000050 + 4);
      in_stack_00000050._4_1_ = 0;
      FUN_0554bf68(in_stack_00000058,(long)&stack0x00000050 + 4,0);
      FUN_05c1adf8();
      *(byte *)(unaff_x19 + 0x12) = (byte)in_stack_00000000 & 1;
      *(byte *)((long)unaff_x19 + 0x49) = (byte)((ulong)in_stack_00000000 >> 8) & 1;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000010;
      LeanTween__value(plVar6);
      if ((iStack000000000000008c < 0) && (*in_stack_000000a0 != '\0')) {
        thunk_FUN_02da42ec(*in_stack_000000a8,0);
      }
      lVar9 = *plVar6;
      if (lVar9 == 0) {
        if (in_stack_00000008 != 0) {
          _in_stack_00000030 =
               FUN_0481d044(in_stack_00000008,0,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<StylePropertyId,_string>_TryGetValue__
                           );
          uVar5 = FUN_04b88f80(&stack0x00000030,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<StylePropertyId,_string>_Add__
                              );
          if ((uVar5 & 1) == 0) {
            iStack000000000000008c = 1;
            *unaff_x19 = 1;
            *(undefined1 (*) [16])(unaff_x19 + 0x18) = _in_stack_00000030;
            LeanTween__value(unaff_x19 + 0x18,0);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<string,_ZipArchiveEntry>_Remove__
                        + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_031de7e0(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          goto LAB_05c1c9b8;
        }
        uVar4 = 0;
        goto LAB_05c1c9d4;
      }
      if (*(char *)((long)unaff_x19 + 0x49) == '\0') goto LAB_05c1cd70;
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = FUN_05c35198(*(long *)(unaff_x19 + 10),0,*(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      _in_stack_00000040 = FUN_0555c350(lVar9,0,0);
      uVar5 = FUN_05410178(&stack0x00000040,0);
      if ((uVar5 & 1) == 0) {
        iStack000000000000008c = 0;
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000040;
        LeanTween__value(unaff_x19 + 0x14,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<string,_ZipArchiveEntry>_Remove__
                    + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_031dea28(unaff_x19 + 2,&stack0x00000040);
        return;
      }
    }
    FUN_05410190(&stack0x00000040,0);
    lVar9 = *(long *)(unaff_x19 + 0x10);
LAB_05c1cd70:
    uVar4 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<StylePropertyId,_UsageHints>_Add__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(lVar9,uVar4);
  }
  _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a) = 0;
  iStack000000000000008c = -1;
  *unaff_x19 = 0xffffffff;
LAB_05c1c9b8:
  uVar4 = FUN_04b88fc8(&stack0x00000030,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<StylePropertyId,_string>__ctor__
                      );
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05c1c9d4:
  in_stack_00000058 = *(undefined8 *)(unaff_x21 + 0x128);
  in_stack_00000098 = (undefined1 *)&stack0x0000008c;
  in_stack_000000a8 = &stack0x00000058;
  in_stack_00000090 = 0;
  in_stack_000000a0 = (char *)((long)&stack0x00000050 + 4);
  in_stack_00000050._4_1_ = 0;
  FUN_0554bf68(in_stack_00000058,(long)&stack0x00000050 + 4,0);
  lVar9 = *(long *)(unaff_x21 + 0xe8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (((*(char *)(lVar9 + 0x30) == '\0') || (*(char *)(lVar9 + 0x32) != '\0')) ||
     (plVar6 = *(long **)(unaff_x21 + 0xd8), plVar6 == (long *)0x0)) {
    uVar5 = 1;
  }
  else {
    lVar9 = *plVar6;
    uVar10 = *(undefined8 *)(unaff_x21 + 0x40);
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05c1cd24;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar6,*(long *)
                                  Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__
                          ,1);
LAB_05c1cd24:
    uVar5 = (*(code *)*puVar7)(plVar6,uVar10,puVar7[1]);
  }
  if (*(char *)(unaff_x19 + 0x12) == '\0') {
    bVar2 = (uVar5 & 1) == 0;
    lVar9 = 0x171;
    if (bVar2) {
      lVar9 = 0x181;
    }
    lVar1 = 0x174;
    if (bVar2) {
      lVar1 = 0x184;
    }
    if (*(char *)(unaff_x21 + lVar9) != '\0' && *(int *)(unaff_x21 + lVar1) != 0) {
      plVar6 = *(long **)(unaff_x19 + 0xe);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (iVar3 < 400) {
        if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar9 = *(long *)(*(long *)(unaff_x19 + 10) + 0x48);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined1 *)(lVar9 + 0x18) = 1;
      }
    }
    if (*(long *)(unaff_x21 + 0xf8) != 0) {
      FUN_05c310d4(*(long *)(unaff_x21 + 0xf8),0);
    }
    FUN_04a88530();
    uVar10 = 0;
    iVar3 = 0x14;
    in_stack_00000068 = (undefined1 *)0x0;
    in_stack_00000060 = 0;
    in_stack_00000078 = (undefined8 *)0x0;
    in_stack_00000070 = (char *)0x0;
  }
  else {
    if (*(char *)(unaff_x21 + 0xe0) != '\0') {
      *(undefined1 *)(unaff_x21 + 0xe0) = 0;
      if (*(long *)(unaff_x21 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05ced5b8(*(long *)(unaff_x21 + 0x90),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,0);
    }
    uVar10 = FUN_05c1a630();
    iVar3 = 0x16;
  }
  if ((iStack000000000000008c < 0) && (*in_stack_000000a0 != '\0')) {
    thunk_FUN_02da42ec(*in_stack_000000a8,0);
  }
  if (iVar3 != 0x16) {
    if (iVar3 == 0x14) goto LAB_05c1cba8;
    if (iVar3 != 0) {
      return;
    }
  }
  in_stack_00000098 = (undefined1 *)0x0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = (undefined8 *)0x0;
  in_stack_000000a0 = (char *)0x0;
  FUN_04a88530(&stack0x00000090,*(undefined8 *)(unaff_x19 + 0xe),1,
               *(undefined1 *)((long)unaff_x19 + 0x49),uVar4,uVar10,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<StylePropertyId,_UsageHints>__ctor__);
  in_stack_00000068 = in_stack_00000098;
  in_stack_00000060 = in_stack_00000090;
  in_stack_00000078 = in_stack_000000a8;
  in_stack_00000070 = in_stack_000000a0;
LAB_05c1cba8:
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  LeanTween__value(unaff_x19 + 0xe,0);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  LeanTween__value(unaff_x19 + 0x10,0);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_Dictionary<string,_ZipArchiveEntry>_Remove__ +
              0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  in_stack_00000098 = in_stack_00000068;
  in_stack_00000090 = in_stack_00000060;
  in_stack_000000a8 = in_stack_00000078;
  in_stack_000000a0 = in_stack_00000070;
  FUN_03fa1828(unaff_x19 + 2,&stack0x00000090,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolume_CellData_PerScenarioData>_TryGetValue__
              );
  return;
}


