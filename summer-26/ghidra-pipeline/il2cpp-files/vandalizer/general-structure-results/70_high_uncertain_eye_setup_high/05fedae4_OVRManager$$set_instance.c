/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 05fedae4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fedd44) */
/* WARNING: Removing unreachable block (ram,0x05fedf60) */
/* WARNING: Removing unreachable block (ram,0x05fedf68) */

undefined8 OVRManager__set_instance(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  long *unaff_x24;
  uint uVar11;
  long unaff_x26;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000a8;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  uStack0000000000000020 = 0;
  uStack0000000000000010 = uStack0000000000000000;
  uStack0000000000000018 = uStack0000000000000008;
  FUN_05fee0ec();
  *(undefined8 *)(unaff_x26 + 0x30) = uStack0000000000000008;
  *(undefined8 *)(unaff_x26 + 0x28) = uStack0000000000000000;
  *(undefined8 *)(unaff_x26 + 0x40) = uStack0000000000000018;
  *(undefined8 *)(unaff_x26 + 0x38) = uStack0000000000000010;
  in_stack_000000a8 = uStack0000000000000020;
  thunk_FUN_0329bf60(&stack0x00000088,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar2 = PTR_DAT_075f6b60;
  uVar5 = FUN_06e587d8(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (unaff_x21 != (long *)0x0) {
      lVar8 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05fedbb0;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_05fedbb0:
      plVar7 = (long *)(*(code *)*puVar6)();
      puVar3 = PTR_DAT_075f6b68;
      puVar1 = PTR_DAT_0759e2a8;
      uVar11 = 0;
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar8 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05fedc24;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar1,0);
LAB_05fedc24:
        uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_05fedd38;
          lVar8 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 == 0) goto LAB_05fedd10;
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_05fedcf8;
        }
        lVar8 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05fedc80;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar3,0);
LAB_05fedc80:
        lVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(char *)(lVar8 + 0xb0) == '\0') {
          if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          FUN_06e6a5c4(*(long *)(unaff_x20 + 0x28),0);
          uVar4 = FUN_05fee2a0();
          uVar11 = uVar11 | uVar4;
        }
      } while( true );
    }
    goto LAB_05fedf58;
  }
  goto LAB_05fedd4c;
LAB_05fede88:
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0759b580) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05fedee4;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_0759b580,0);
LAB_05fedee4:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
LAB_05fedef4:
  memcpy(&stack0x00000000,&stack0x00000060,0x58);
  unaff_x19[1] = in_stack_00000030;
  *unaff_x19 = in_stack_00000028;
  unaff_x19[3] = in_stack_00000040;
  unaff_x19[2] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000048;
  thunk_FUN_0329bf60();
  return in_stack_00000080;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_05fedcf8:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05fedd2c;
    }
  }
LAB_05fedd10:
  puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_0759b580,0);
LAB_05fedd2c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_05fedd38:
  if ((uVar11 & 1) != 0) goto LAB_05fedef4;
LAB_05fedd4c:
  if (unaff_x21 != (long *)0x0) {
    lVar8 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05fedd9c;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_05fedd9c:
    plVar7 = (long *)(*(code *)*puVar6)();
    puVar1 = PTR_DAT_075f6b68;
    puVar2 = PTR_DAT_0759e2a8;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      lVar8 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05fede0c;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar2,0);
LAB_05fede0c:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar5 & 1) == 0) goto LAB_05fede88;
      lVar8 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05fede68;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar1,0);
LAB_05fede68:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      FUN_05fee418();
    } while( true );
  }
LAB_05fedf58:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


