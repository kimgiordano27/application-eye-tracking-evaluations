/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_create_t_session_handle_get
ENTRY_POINT: 081635b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_create_t_session_handle_get
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e83810);
  FUN_03c8f898(PTR_DAT_08e83818);
  FUN_03c8f898(PTR_DAT_08f04d88);
  FUN_03c8f898(PTR_DAT_08f04d90);
  *(undefined1 *)(unaff_x20 + 0xfaf) = 1;
  puVar1 = PTR_DAT_08e69550;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 10);
    uVar2 = FUN_06f7ad2c(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80470);
      uVar4 = thunk_FUN_03cf5234();
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08f04a78);
      uVar10 = thunk_FUN_03ce5214(PTR_DAT_08f04a38);
      FUN_070660f4(uVar4,uVar5,uVar10,0);
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08f04d98);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar4,uVar5);
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar9 = *(long **)(lVar6 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e83800) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08163688;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e83800,0);
LAB_08163688:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04d78);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f04a00) {
          lVar7 = lVar7 + (long)(*piVar8 + 7) * 0x10 + 0x138;
          goto LAB_08163708;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    lVar7 = FUN_03cf1348(plVar9,*(long *)PTR_DAT_08f04a00,7);
LAB_08163708:
    FUN_04d6ed0c(uVar4,plVar9,*(undefined8 *)(lVar7 + 8),0);
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04d80);
    FUN_08175824(uVar5,uVar10,0,0,0,0);
    lVar6 = FUN_048bd440(lVar6,*(undefined8 *)PTR_DAT_08f04d90,uVar4,uVar5,
                         *(undefined8 *)PTR_DAT_08f04d88);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar6,*(undefined8 *)PTR_DAT_08e83818);
    uVar2 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08e83810);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04523e14(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e83808);
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701e078(unaff_x19 + 2,0);
  return;
}


