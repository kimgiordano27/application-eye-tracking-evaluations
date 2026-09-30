/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 0567b998
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 128
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0567bb84) */

undefined4 OVRPlugin__GetFaceState(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x19;
  long lVar13;
  undefined8 *unaff_x23;
  long unaff_x27;
  undefined8 uVar14;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  ulong in_stack_000000f0;
  undefined8 in_stack_00000120;
  
  if (*(long *)(unaff_x19 + 0x58) == 0) {
LAB_0567be34:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04e03038(&stack0x00000028,*(long *)(unaff_x19 + 0x58),
               *(undefined8 *)System_Collections_Generic_List<SetItemBody>_TypeInfo);
  puVar3 = System_Collections_Generic_List<SidewalkPresetClass>_TypeInfo;
  puVar2 = System_Collections_Generic_List<ShopItemPane>_TypeInfo;
  puVar1 = System_Collections_Generic_List<SerializedCommand>_TypeInfo;
  unaff_x23[5] = in_stack_00000030;
  unaff_x23[4] = in_stack_00000028;
  unaff_x23[7] = in_stack_00000040;
  unaff_x23[6] = in_stack_00000038;
  puVar4 = System_Collections_Generic_List<SpriteGlyph>_TypeInfo;
  in_stack_00000030 = (undefined8 *)&stack0x000000e0;
  lVar13 = 0;
  in_stack_00000028 = 0;
  while (uVar7 = FUN_0521b27c(&stack0x000000e0,*(undefined8 *)puVar3), uVar8 = in_stack_000000f0,
        lVar9 = in_stack_00000028, (uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = FUN_04e02e4c(*(long *)(unaff_x19 + 0x70),in_stack_000000f0 & 0xffffffff,
                         *(undefined8 *)puVar1);
    if ((uVar7 & 1) == 0) {
      lVar9 = *(long *)(unaff_x19 + 0x50);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar10 = (uint)(uVar8 >> 0x20);
      if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar9 = lVar9 + (ulong)uVar10 * 0x18;
      uVar14 = *(undefined8 *)(lVar9 + 0x20);
      uVar11 = *(undefined8 *)(lVar9 + 0x30);
      unaff_x23[1] = *(undefined8 *)(lVar9 + 0x28);
      *unaff_x23 = uVar14;
      in_stack_000000d0 = uVar11;
      if (lVar13 == 0) {
        if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar5 = FUN_04e028fc(*(long *)(unaff_x19 + 0x58),*(undefined8 *)puVar2);
        if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar6 = FUN_04e028fc(*(long *)(unaff_x19 + 0x70),*(undefined8 *)puVar2);
        lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Collections_Generic_List<StylePropertyValue>_TypeInfo);
        iVar5 = iVar5 - iVar6;
        if (iVar5 < 5) {
          iVar5 = 4;
        }
        FUN_04152420(lVar13,iVar5,
                     *(undefined8 *)System_Collections_Generic_List<StylePropertyName>_TypeInfo);
        unaff_x23 = &stack0x000000c0;
        in_stack_00000060 = in_stack_000000d0;
        in_stack_00000058 = in_stack_000000c8;
        in_stack_00000050 = in_stack_000000c0;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
      else {
        in_stack_00000058 = *(undefined8 *)(lVar9 + 0x28);
        in_stack_00000050 = *(undefined8 *)(lVar9 + 0x20);
        in_stack_00000060 = *(undefined8 *)(lVar9 + 0x30);
      }
      lVar9 = *(long *)(lVar13 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar10 = *(uint *)(lVar13 + 0x18);
      if (uVar10 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar10 * 0x18;
        *(uint *)(lVar13 + 0x18) = uVar10 + 1;
        *(undefined8 *)(lVar9 + 0x28) = in_stack_00000058;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_00000050;
        *(undefined8 *)(lVar9 + 0x30) = in_stack_00000060;
        LeanTween__value(lVar9 + 0x20,0);
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
        unaff_x23[0xb] = in_stack_00000058;
        unaff_x23[10] = in_stack_00000050;
        in_stack_00000120 = in_stack_00000060;
        FUN_04152ccc(lVar13,&stack0x00000110,uVar11);
      }
    }
  }
  FUN_0521b384(in_stack_00000030,*(undefined8 *)System_Collections_Generic_List<SideObject>_TypeInfo
              );
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar9);
  }
  if (lVar13 != 0) {
    FUN_041548b8(lVar13,*(undefined8 *)System_Collections_Generic_List<StylePropertyId>_TypeInfo);
    FUN_0415398c(&stack0x00000028,lVar13,
                 *(undefined8 *)System_Collections_Generic_List<string>_TypeInfo);
    puVar1 = System_Collections_Generic_List<SimulatedHandExpression>_TypeInfo;
    in_stack_00000098 = in_stack_00000030;
    in_stack_00000090 = in_stack_00000028;
    in_stack_000000a8 = in_stack_00000040;
    in_stack_000000a0 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000048;
    in_stack_00000028 = 0;
    in_stack_00000030 = &stack0x00000090;
    while (uVar8 = FUN_0519611c(&stack0x00000090,*(undefined8 *)puVar1), (uVar8 & 1) != 0) {
      in_stack_00000078 = in_stack_000000a8;
      in_stack_00000070 = in_stack_000000a0;
      in_stack_00000080 = in_stack_000000b0;
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      OVRPlugin__set_HandSkeletonVersion();
    }
    FUN_05196118(&stack0x00000090,
                 *(undefined8 *)System_Collections_Generic_List<SideObjectLog>_TypeInfo);
    iVar5 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar5) {
      FUN_0550afb4(*(undefined8 *)(lVar13 + 0x10),0,iVar5,0);
    }
  }
  if (unaff_x27 == 0) goto LAB_0567be34;
  *(undefined8 *)(unaff_x27 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x68);
  LeanTween__value((undefined8 *)(unaff_x27 + 0xf0));
  FUN_037708e8(*(undefined8 *)(unaff_x27 + 0xf8),*(undefined8 *)(unaff_x19 + 0x70),
               *(undefined8 *)System_Collections_Generic_List<StyleSelector>_TypeInfo);
  if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0567be34;
  FUN_04e02de0(*(long *)(unaff_x19 + 0x70),
               *(undefined8 *)
                System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo);
  if (*(long *)(unaff_x27 + 0x100) == 0) goto LAB_0567be34;
  FUN_04df51a0(*(long *)(unaff_x27 + 0x100),
               *(undefined8 *)System_Collections_Generic_List<IDataNode>_TypeInfo);
  if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_0563c9e8(0);
  uVar11 = DAT_010fc420;
  if ((uVar8 & 1) != 0) {
LAB_0567bd20:
    *(undefined8 *)(unaff_x19 + 0x10) = uVar11;
    return 1;
  }
  if (*(int *)(unaff_x19 + 0x60) != 0) {
    if (unaff_x27 == 0) goto LAB_0567be34;
    FUN_05673c14();
  }
  if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_0563c9e8(0);
  uVar11 = DAT_010fc4d0;
  if ((uVar8 & 1) != 0) goto LAB_0567bd20;
  if (unaff_x27 == 0) goto LAB_0567be34;
  if (*(long *)(unaff_x27 + 0x198) == 0) {
    if (*(int *)(unaff_x19 + 0x60) != 0) {
      uVar11 = FUN_05674288();
      FUN_035040c4(uVar11,*(undefined8 *)
                           System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo);
      *(undefined8 *)(unaff_x27 + 0xb8) = uVar11;
      goto LAB_0567bdf4;
    }
  }
  else {
    FUN_05674018();
    OVRPlugin__get_tiledMultiResLevel();
  }
  lVar9 = *(long *)System_Collections_Generic_List<IContext>_TypeInfo;
  lVar13 = *(long *)(lVar9 + 0x38);
  if (lVar13 == 0) {
    FUN_02dcfd74(lVar9);
    lVar13 = *(long *)(lVar9 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02dcfd18();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar13 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02dcfd18();
  }
  uVar11 = **(undefined8 **)(lVar13 + 0xb8);
  *(undefined8 *)(unaff_x27 + 0xb8) = uVar11;
LAB_0567bdf4:
  LeanTween__value(unaff_x27 + 0xb8,uVar11);
  FUN_05677158();
  *(undefined4 *)(unaff_x27 + 0x200) = *(undefined4 *)(unaff_x19 + 0x20);
  return 0;
}


