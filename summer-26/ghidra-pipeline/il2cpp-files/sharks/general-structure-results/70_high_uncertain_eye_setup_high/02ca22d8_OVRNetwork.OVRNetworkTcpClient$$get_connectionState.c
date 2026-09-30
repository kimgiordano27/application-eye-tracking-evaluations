/*
FUNCTION_NAME: OVRNetwork.OVRNetworkTcpClient$$get_connectionState
ENTRY_POINT: 02ca22d8
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRNetwork_OVRNetworkTcpClient__get_connectionState(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x520));
  FUN_017fc350(PTR_DAT_0380e528);
  FUN_017fc350(PTR_DAT_0380e530);
  FUN_017fc350(PTR_DAT_0380e388);
  FUN_017fc350(PTR_DAT_0380e538);
  FUN_017fc350(PTR_DAT_0380e390);
  FUN_017fc350(PTR_DAT_0380e398);
  FUN_017fc350(PTR_DAT_0380e3a0);
  FUN_017fc350(PTR_DAT_0380e3a8);
  FUN_017fc350(PTR_DAT_0380e3b0);
  FUN_017fc350(PTR_DAT_0380e3b8);
  FUN_017fc350(PTR_DAT_0380e418);
  FUN_017fc350(PTR_DAT_037f2b10);
  FUN_017fc350(PTR_DAT_0380e540);
  FUN_017fc350(PTR_DAT_0380e548);
  FUN_017fc350(PTR_DAT_0380e550);
  FUN_017fc350(PTR_DAT_0380e558);
  FUN_017fc350(PTR_DAT_0380e560);
  FUN_017fc350(PTR_DAT_0380e568);
  FUN_017fc350(PTR_DAT_0380e570);
  *(undefined1 *)(unaff_x22 + 0x25c) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  _uStack0000000000000030 = 0;
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar5 = FUN_021aeed8(*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_0380e530);
    if (iVar5 != 0) {
      if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_02ca2908;
      System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current
                (*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_0380e528);
    }
    puVar2 = PTR_DAT_0380e520;
    puVar1 = PTR_DAT_037f2b10;
    lVar11 = *(long *)(unaff_x21 + 0x18);
    if (lVar11 != 0) {
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar13 = 0;
        uVar9 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          iVar5 = *(int *)(lVar11 + 0x20 + uVar13 * 4);
          if (iVar5 != 0x37) {
            if (unaff_x20 == 0) goto LAB_02ca2908;
            uVar6 = FUN_033b19b8();
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)puVar1);
            }
            uVar9 = FUN_033ea488(uVar6,0,0);
            if ((uVar9 & 1) != 0) {
              uVar6 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e558);
              if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
              }
              FUN_033bdab0(uVar6,0);
            }
            uVar6 = FUN_033b19b8();
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)puVar1);
            }
            uVar9 = FUN_033e963c(uVar6,0,0);
            if ((uVar9 & 1) != 0) {
              lVar7 = FUN_033b19b8();
              if (lVar7 == 0) goto LAB_02ca2908;
              uVar9 = FUN_033b1a30(lVar7,0);
              if ((uVar9 & 1) == 0) {
                uVar6 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e560);
                uVar6 = FUN_02a43498(uVar6,*(undefined8 *)PTR_DAT_0380e570,0);
                if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
                }
                FUN_033bdab0(uVar6,0);
              }
            }
            uVar6 = FUN_033b16f8();
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)puVar1);
            }
            uVar9 = FUN_033ea488(uVar6,0,0);
            if ((uVar9 & 1) == 0) {
              lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380e510);
              FUN_02c108e4(lVar7,0);
              if (lVar7 == 0) goto LAB_02ca2908;
              *(undefined8 *)(lVar7 + 0x10) = uVar6;
              thunk_FUN_0188fd20((undefined8 *)(lVar7 + 0x10),uVar6);
              if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_02ca2908;
              FUN_021af148(*(long *)(unaff_x21 + 0x10),iVar5,lVar7,*(undefined8 *)puVar2);
            }
          }
          uVar9 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      if ((*(long *)(unaff_x21 + 0x10) != 0) &&
         (lVar11 = FUN_021aeee8(*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_0380e390),
         puVar3 = PTR_DAT_0380e3b0, puVar2 = PTR_DAT_0380e3a0, lVar11 != 0)) {
        FUN_025fb728(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_0380e3b8);
        in_stack_00000020 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
        in_stack_00000028 = in_stack_00000010;
        _uStack0000000000000030 = in_stack_00000018;
        do {
          uVar9 = UnityEngine_UIElements_FieldMouseDragger<__Il2CppFullySharedGenericType>__ProcessDownEvent
                            (&stack0x00000020,*(undefined8 *)puVar2);
          uVar13 = _uStack0000000000000030;
          if ((uVar9 & 1) == 0) {
            FUN_02350030(&stack0x00000020,*(undefined8 *)PTR_DAT_0380e398);
            return;
          }
          if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar4 = uStack0000000000000030;
          lVar11 = FUN_021af0a8(*(long *)(unaff_x21 + 0x10),_uStack0000000000000030 & 0xffffffff,
                                *(undefined8 *)PTR_DAT_0380e388);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar7 = *unaff_x19;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0380e418) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02ca26e8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_0185dba8();
LAB_02ca26e8:
          lVar7 = (*(code *)*puVar8)();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar7 = FUN_021af0a8(lVar7,uVar13 & 0xffffffff,*(undefined8 *)PTR_DAT_0380e538);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          if (*(int *)(lVar7 + 0x10) == 0x37) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar6 = *(undefined8 *)(lVar11 + 0x10);
          }
          else {
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar6 = FUN_033b16f8();
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
          }
          puVar8 = (undefined8 *)(lVar11 + 0x30);
          *puVar8 = uVar6;
          thunk_FUN_0188fd20(puVar8);
          if (*(int *)(lVar7 + 0x14) == 0x37) {
            uVar6 = FUN_02ca34a0(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x10));
          }
          else {
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar6 = FUN_033b16f8();
          }
          puVar12 = (undefined8 *)(lVar11 + 0x38);
          *puVar12 = uVar6;
          thunk_FUN_0188fd20(puVar12);
          if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar6 = FUN_033f2cf8(*(long *)(lVar11 + 0x10),0);
          *(undefined8 *)(lVar11 + 0x68) = uVar6;
          thunk_FUN_0188fd20();
          uVar6 = *puVar8;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar13 = FUN_033ea488(uVar6,0,0);
          if ((uVar13 & 1) != 0) {
            uStack0000000000000008 = uVar4;
            uVar6 = thunk_FUN_018617ec(*(undefined8 *)puVar3,&stack0x00000008);
            uVar6 = FUN_02a50b00(*(undefined8 *)PTR_DAT_0380e568,uVar6,
                                 *(undefined8 *)(lVar11 + 0x10),0);
            if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_033bdab0(uVar6,0);
            *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
            thunk_FUN_0188fd20(puVar8);
          }
          uVar6 = *puVar12;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar13 = FUN_033ea488(uVar6,0,0);
          if ((uVar13 & 1) != 0) {
            uStack0000000000000008 = uVar4;
            uVar6 = thunk_FUN_018617ec(*(undefined8 *)puVar3,&stack0x00000008);
            uVar6 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e550,uVar6,0);
            if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_033bdab0(uVar6,0);
          }
        } while( true );
      }
    }
  }
LAB_02ca2908:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


