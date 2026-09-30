/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_base__set
ENTRY_POINT: 0788dde4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0788e2b4) */
/* WARNING: Removing unreachable block (ram,0x0788e0b8) */
/* WARNING: Removing unreachable block (ram,0x0788e344) */
/* WARNING: Removing unreachable block (ram,0x0788e33c) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_base__set(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar14;
  undefined1 auVar15 [16];
  ulong in_stack_00000018;
  long *in_stack_00000028;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084c3f08);
  FUN_03a8a718(PTR_DAT_084c3f10);
  FUN_03a8a718(PTR_DAT_08488568);
  FUN_03a8a718(PTR_DAT_084b1ba8);
  FUN_03a8a718(PTR_DAT_084b1bb0);
  FUN_03a8a718(PTR_DAT_08491c38);
  *(undefined1 *)(unaff_x21 + 0x7bc) = 1;
  in_stack_00000028 = (long *)0x0;
  in_stack_00000018 = 0;
  if ((unaff_x20 == 0) || (unaff_x19 == 0)) {
    if (unaff_x20 == 0) {
      return unaff_x19;
    }
    return unaff_x20;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Collections_Generic_List<List<IDeserializable>>_TypeInfo);
  FUN_0788dcb0(lVar8,uVar1,uVar3,uVar2,uVar4);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
    *(long *)(lVar8 + 0x10) = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_03afed3c();
  }
  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a12f0);
  FUN_05f9f7c4(lVar9,*(undefined8 *)PTR_DAT_084a12e8);
  plVar14 = *(long **)(unaff_x19 + 0x28);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_084c3f08) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0788df20;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)PTR_DAT_084c3f08,0);
LAB_0788df20:
    in_stack_00000028 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
    puVar7 = PTR_DAT_084c3f10;
    puVar6 = PTR_DAT_084b7750;
    puVar5 = PTR_DAT_08488568;
    do {
      plVar14 = in_stack_00000028;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *in_stack_00000028;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0788dfa4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar5,0);
LAB_0788dfa4:
      uVar12 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      plVar14 = in_stack_00000028;
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000028 == (long *)0x0) break;
        lVar11 = *in_stack_00000028;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_0788e084;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0788e06c;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *in_stack_00000028;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar7) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0788e008;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar7,0);
LAB_0788e008:
      auVar15 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05fa052c(lVar9,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar6);
    } while( true );
  }
  goto LAB_0788e0bc;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_new_message_set:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08488550) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0788e29c;
    }
  }
LAB_0788e280:
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)PTR_DAT_08488550,0);
LAB_0788e29c:
  (*(code *)*puVar10)(plVar14,puVar10[1]);
  goto LAB_0788e2b8;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0788e06c:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08488550) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0788e0a0;
    }
  }
LAB_0788e084:
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)PTR_DAT_08488550,0);
LAB_0788e0a0:
  (*(code *)*puVar10)(plVar14,puVar10[1]);
LAB_0788e0bc:
  plVar14 = *(long **)(lVar8 + 0x28);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_084c3f08) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0788e11c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)PTR_DAT_084c3f08,0);
LAB_0788e11c:
    in_stack_00000028 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
    puVar7 = PTR_DAT_084c3f10;
    puVar6 = PTR_DAT_084b7750;
    puVar5 = PTR_DAT_08488568;
    do {
      plVar14 = in_stack_00000028;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *in_stack_00000028;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0788e1a0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar5,0);
LAB_0788e1a0:
      uVar12 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      plVar14 = in_stack_00000028;
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000028 == (long *)0x0) break;
        lVar11 = *in_stack_00000028;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_0788e280;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_new_message_set
        ;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *in_stack_00000028;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar7) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0788e204;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar7,0);
LAB_0788e204:
      auVar15 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05fa052c(lVar9,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar6);
    } while( true );
  }
LAB_0788e2b8:
  *(long *)(lVar8 + 0x28) = lVar9;
  thunk_FUN_03afed3c((undefined8 *)(lVar8 + 0x28),lVar9);
  in_stack_00000018 = *(ulong *)(lVar8 + 0x18);
  puVar10 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(lVar8 + 0x18) & 0xff) != 0) {
    puVar10 = &stack0x00000018;
  }
  in_stack_00000018 = *(ulong *)(lVar8 + 0x20);
  *(undefined8 *)(lVar8 + 0x18) = *puVar10;
  puVar10 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(lVar8 + 0x20) & 0xff) != 0) {
    puVar10 = &stack0x00000018;
  }
  *(undefined8 *)(lVar8 + 0x20) = *puVar10;
  return lVar8;
}


