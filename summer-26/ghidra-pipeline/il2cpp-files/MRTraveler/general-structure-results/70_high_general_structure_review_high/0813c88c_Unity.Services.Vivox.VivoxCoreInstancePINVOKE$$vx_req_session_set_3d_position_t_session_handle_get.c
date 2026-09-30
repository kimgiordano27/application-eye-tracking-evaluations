/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_session_handle_get
ENTRY_POINT: 0813c88c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_get
               (void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int in_w8;
  long lVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long *plVar6;
  long *unaff_x21;
  undefined8 uVar7;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xffffffff;
LAB_0813c8c4:
    FUN_05ac7d7c(&stack0x00000018,*(undefined8 *)PTR_DAT_08f036d0);
    lVar4 = *unaff_x21;
  }
  else {
    if (in_w8 == 1) {
      in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xc);
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_0813ca3c;
    }
    uVar1 = FUN_0813c094();
    if ((uVar1 & 1) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08f029e0);
      uVar7 = thunk_FUN_03cf5234();
      uVar3 = thunk_FUN_03ce5214(PTR_DAT_08f036e8);
      FUN_0813b54c(uVar7,uVar3);
      uVar3 = thunk_FUN_03ce5214(PTR_DAT_08f036f0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7,uVar3);
    }
    if (*(int *)(*(long *)PTR_DAT_08e69810 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_0859d3e0(0);
    if ((uVar1 & 1) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08f029e0);
      uVar7 = thunk_FUN_03cf5234();
      uVar3 = thunk_FUN_03ce5214(PTR_DAT_08f036f8);
      FUN_0813b54c(uVar7,uVar3);
      uVar3 = thunk_FUN_03ce5214(PTR_DAT_08f036f0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7,uVar3);
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_09428e2c == '\0') {
      FUN_03c8f898(PTR_DAT_08e719c0);
      DAT_09428e2c = '\x01';
    }
    lVar4 = *unaff_x21;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar4);
      lVar4 = *unaff_x21;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar4);
      }
      if (DAT_09428e2e == '\0') {
        FUN_03c8f898(PTR_DAT_08e719c0);
        DAT_09428e2e = '\x01';
      }
      lVar4 = *unaff_x21;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar4);
        lVar4 = *unaff_x21;
      }
      if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86448);
        FUN_05ac9c70(uVar7,*(undefined8 *)PTR_DAT_08ee7cb8);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (DAT_09428e2f == '\0') {
          FUN_03c8f898(PTR_DAT_08e719c0);
          DAT_09428e2f = '\x01';
        }
        lVar4 = *unaff_x21;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar4 = *unaff_x21;
        }
        puVar2 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
        *puVar2 = uVar7;
        thunk_FUN_03d233cc(puVar2,uVar7);
        lVar4 = *unaff_x21;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar4);
      }
      if (DAT_09428e2e == '\0') {
        FUN_03c8f898(PTR_DAT_08e719c0);
        DAT_09428e2e = '\x01';
      }
      lVar4 = *unaff_x21;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar4 = *unaff_x21;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      in_stack_00000018 = FUN_05c0b91c(lVar4,*(undefined8 *)PTR_DAT_08f036e0);
      uVar1 = FUN_05ac7d38(&stack0x00000018,*(undefined8 *)PTR_DAT_08f036d8);
      if ((uVar1 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
        thunk_FUN_03d233cc(unaff_x19 + 10,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_04523a34(unaff_x19 + 2,&stack0x00000018);
        return;
      }
      goto LAB_0813c8c4;
    }
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar4);
  }
  if (DAT_09428e2c == '\0') {
    FUN_03c8f898(PTR_DAT_08e719c0);
    DAT_09428e2c = '\x01';
  }
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *unaff_x21;
  }
  plVar6 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar4 = *plVar6;
  uVar7 = *(undefined8 *)(unaff_x19 + 8);
  uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f03630) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_0813ca0c;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08f03630,5);
LAB_0813ca0c:
  lVar4 = (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = FUN_071787d8(lVar4,0);
  uVar1 = FUN_0701d1d0(&stack0x00000008,0);
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
    thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0452583c(unaff_x19 + 2,&stack0x00000008);
    return;
  }
LAB_0813ca3c:
  FUN_0701d29c(&stack0x00000008,0);
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701e078(unaff_x19 + 2,0);
  return;
}


