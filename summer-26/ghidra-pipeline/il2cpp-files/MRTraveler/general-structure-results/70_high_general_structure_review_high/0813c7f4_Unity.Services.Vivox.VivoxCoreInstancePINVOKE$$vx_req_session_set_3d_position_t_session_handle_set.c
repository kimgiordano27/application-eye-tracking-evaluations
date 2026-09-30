/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_session_handle_set
ENTRY_POINT: 0813c7f4
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_set
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x6c8));
  FUN_03c8f898(PTR_DAT_08e69550);
  FUN_03c8f898(PTR_DAT_08f03630);
  FUN_03c8f898(PTR_DAT_08f036d0);
  FUN_03c8f898(PTR_DAT_08f036d8);
  FUN_03c8f898(PTR_DAT_08ee7cb8);
  FUN_03c8f898(PTR_DAT_08e86440);
  FUN_03c8f898(PTR_DAT_08e86448);
  FUN_03c8f898(PTR_DAT_08f036e0);
  FUN_03c8f898(PTR_DAT_08e719c0);
  *(undefined1 *)(unaff_x20 + 0xe24) = 1;
  puVar2 = PTR_DAT_08e719c0;
  puVar1 = PTR_DAT_08e69550;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
LAB_0813c8c4:
    FUN_05ac7d7c(&stack0x00000018,*(undefined8 *)PTR_DAT_08f036d0);
    lVar6 = *(long *)puVar2;
  }
  else {
    if (*unaff_x19 == 1) {
      in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xc);
      unaff_x19[0xc] = 0;
      unaff_x19[0xd] = 0;
      *unaff_x19 = -1;
      goto LAB_0813ca3c;
    }
    uVar3 = FUN_0813c094();
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08f029e0);
      uVar9 = thunk_FUN_03cf5234();
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08f036e8);
      FUN_0813b54c(uVar9,uVar5);
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08f036f0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar9,uVar5);
    }
    if (*(int *)(*(long *)PTR_DAT_08e69810 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar3 = FUN_0859d3e0(0);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08f029e0);
      uVar9 = thunk_FUN_03cf5234();
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08f036f8);
      FUN_0813b54c(uVar9,uVar5);
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08f036f0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar9,uVar5);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_09428e2c == '\0') {
      FUN_03c8f898(PTR_DAT_08e719c0);
      DAT_09428e2c = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar6);
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar6);
      }
      if (DAT_09428e2e == '\0') {
        FUN_03c8f898(PTR_DAT_08e719c0);
        DAT_09428e2e = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar6);
        lVar6 = *(long *)puVar2;
      }
      if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) == 0) {
        uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86448);
        FUN_05ac9c70(uVar9,*(undefined8 *)PTR_DAT_08ee7cb8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (DAT_09428e2f == '\0') {
          FUN_03c8f898(PTR_DAT_08e719c0);
          DAT_09428e2f = '\x01';
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar6 = *(long *)puVar2;
        }
        puVar4 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
        *puVar4 = uVar9;
        thunk_FUN_03d233cc(puVar4,uVar9);
        lVar6 = *(long *)puVar2;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar6);
      }
      if (DAT_09428e2e == '\0') {
        FUN_03c8f898(PTR_DAT_08e719c0);
        DAT_09428e2e = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      in_stack_00000018 = FUN_05c0b91c(lVar6,*(undefined8 *)PTR_DAT_08f036e0);
      uVar3 = FUN_05ac7d38(&stack0x00000018,*(undefined8 *)PTR_DAT_08f036d8);
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
        thunk_FUN_03d233cc(unaff_x19 + 10,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_04523a34(unaff_x19 + 2,&stack0x00000018);
        return;
      }
      goto LAB_0813c8c4;
    }
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar6);
  }
  if (DAT_09428e2c == '\0') {
    FUN_03c8f898(PTR_DAT_08e719c0);
    DAT_09428e2c = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar6 = *(long *)puVar2;
  }
  plVar8 = (long *)**(undefined8 **)(lVar6 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar6 = *plVar8;
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f03630) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_0813ca0c;
      }
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08f03630,5);
LAB_0813ca0c:
  lVar6 = (*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = FUN_071787d8(lVar6,0);
  uVar3 = FUN_0701d1d0(&stack0x00000008,0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
    thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0452583c(unaff_x19 + 2,&stack0x00000008);
    return;
  }
LAB_0813ca3c:
  FUN_0701d29c(&stack0x00000008,0);
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701e078(unaff_x19 + 2,0);
  return;
}


