/*
FUNCTION_NAME: OVRPlugin$$GetFaceState2
ENTRY_POINT: 0567baa4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0567bb84) */

undefined4 OVRPlugin__GetFaceState2(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined **in_x9;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w22;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long *unaff_x29;
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
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  
code_r0x0567baa4:
  iVar1 = unaff_w22 - unaff_w23;
  if (unaff_w22 - unaff_w23 < 5) {
    iVar1 = unaff_w20;
  }
  FUN_04152420(param_1,iVar1,*(undefined8 *)in_x9[0xad]);
  in_stack_00000060 = in_stack_000000d0;
  in_stack_00000058 = in_stack_000000c8;
  in_stack_00000050 = in_stack_000000c0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  do {
    lVar6 = *(long *)(param_1 + 0x10);
    lVar8 = *unaff_x29;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = *(uint *)(param_1 + 0x18);
    if (uVar7 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar7 * (long)(int)unaff_w27;
      *(uint *)(param_1 + 0x18) = uVar7 + 1;
      *(undefined8 *)(lVar6 + 0x28) = in_stack_00000058;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_00000050;
      *(undefined8 *)(lVar6 + 0x30) = in_stack_00000060;
      LeanTween__value(lVar6 + 0x20,0);
    }
    else {
      in_stack_00000118 = in_stack_00000058;
      in_stack_00000110 = in_stack_00000050;
      in_stack_00000120 = in_stack_00000060;
      FUN_04152ccc(param_1,&stack0x00000110,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    do {
      uVar3 = FUN_0521b27c(&stack0x000000e0,*unaff_x24);
      uVar4 = in_stack_000000f0;
      lVar6 = in_stack_00000028;
      if ((uVar3 & 1) == 0) {
        FUN_0521b384(in_stack_00000030,
                     *(undefined8 *)System_Collections_Generic_List<SideObject>_TypeInfo);
        if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96858(lVar6);
        }
        if (param_1 != 0) {
          FUN_041548b8(param_1,*(undefined8 *)
                                System_Collections_Generic_List<StylePropertyId>_TypeInfo);
          FUN_0415398c(&stack0x00000028,param_1,
                       *(undefined8 *)System_Collections_Generic_List<string>_TypeInfo);
          puVar2 = System_Collections_Generic_List<SimulatedHandExpression>_TypeInfo;
          in_stack_00000098 = in_stack_00000030;
          in_stack_00000090 = in_stack_00000028;
          in_stack_000000a8 = in_stack_00000040;
          in_stack_000000a0 = in_stack_00000038;
          in_stack_000000b0 = in_stack_00000048;
          in_stack_00000028 = 0;
          in_stack_00000030 = &stack0x00000090;
          while (uVar4 = FUN_0519611c(&stack0x00000090,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
            in_stack_00000078 = in_stack_000000a8;
            in_stack_00000070 = in_stack_000000a0;
            in_stack_00000080 = in_stack_000000b0;
            if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            OVRPlugin__set_HandSkeletonVersion();
          }
          FUN_05196118(&stack0x00000090,
                       *(undefined8 *)System_Collections_Generic_List<SideObjectLog>_TypeInfo);
          iVar1 = *(int *)(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x18) = 0;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0550afb4(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
          }
        }
        if (unaff_x28 == 0) {
LAB_0567be34:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(unaff_x28 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x68);
        LeanTween__value((undefined8 *)(unaff_x28 + 0xf0));
        FUN_037708e8(*(undefined8 *)(unaff_x28 + 0xf8),*(undefined8 *)(unaff_x19 + 0x70),
                     *(undefined8 *)System_Collections_Generic_List<StyleSelector>_TypeInfo);
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0567be34;
        FUN_04e02de0(*(long *)(unaff_x19 + 0x70),
                     *(undefined8 *)
                      System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo
                    );
        if (*(long *)(unaff_x28 + 0x100) == 0) goto LAB_0567be34;
        FUN_04df51a0(*(long *)(unaff_x28 + 0x100),
                     *(undefined8 *)System_Collections_Generic_List<IDataNode>_TypeInfo);
        if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_0563c9e8(0);
        uVar5 = DAT_010fc420;
        if ((uVar4 & 1) != 0) {
LAB_0567bd20:
          *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
          return 1;
        }
        if (*(int *)(unaff_x19 + 0x60) != 0) {
          if (unaff_x28 == 0) goto LAB_0567be34;
          FUN_05673c14();
        }
        if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_0563c9e8(0);
        uVar5 = DAT_010fc4d0;
        if ((uVar4 & 1) != 0) goto LAB_0567bd20;
        if (unaff_x28 == 0) goto LAB_0567be34;
        if (*(long *)(unaff_x28 + 0x198) == 0) {
          if (*(int *)(unaff_x19 + 0x60) != 0) {
            uVar5 = FUN_05674288();
            FUN_035040c4(uVar5,*(undefined8 *)
                                System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo
                        );
            *(undefined8 *)(unaff_x28 + 0xb8) = uVar5;
            goto LAB_0567bdf4;
          }
        }
        else {
          FUN_05674018();
          OVRPlugin__get_tiledMultiResLevel();
        }
        lVar8 = *(long *)System_Collections_Generic_List<IContext>_TypeInfo;
        lVar6 = *(long *)(lVar8 + 0x38);
        if (lVar6 == 0) {
          FUN_02dcfd74(lVar8);
          lVar6 = *(long *)(lVar8 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02dcfd18();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02dcfd18();
        }
        uVar5 = **(undefined8 **)(lVar6 + 0xb8);
        *(undefined8 *)(unaff_x28 + 0xb8) = uVar5;
LAB_0567bdf4:
        LeanTween__value(unaff_x28 + 0xb8,uVar5);
        FUN_05677158();
        *(undefined4 *)(unaff_x28 + 0x200) = *(undefined4 *)(unaff_x19 + 0x20);
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = FUN_04e02e4c(*(long *)(unaff_x19 + 0x70),in_stack_000000f0 & 0xffffffff,*unaff_x25);
    } while ((uVar3 & 1) != 0);
    lVar6 = *(long *)(unaff_x19 + 0x50);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = (uint)(uVar4 >> 0x20);
    if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar6 = lVar6 + (ulong)uVar7 * (ulong)unaff_w27;
    in_stack_000000c8 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_000000c0 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_000000d0 = *(undefined8 *)(lVar6 + 0x30);
    if (param_1 == 0) break;
    in_stack_00000058 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_00000050 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_00000060 = *(undefined8 *)(lVar6 + 0x30);
  } while( true );
  if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  unaff_w22 = FUN_04e028fc(*(long *)(unaff_x19 + 0x58),*unaff_x26);
  if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  unaff_w23 = FUN_04e028fc(*(long *)(unaff_x19 + 0x70),*unaff_x26);
  param_1 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Collections_Generic_List<StylePropertyValue>_TypeInfo);
  in_x9 = &System_Collections_Generic_List<LayoutManager>_TypeInfo;
  goto code_r0x0567baa4;
}


