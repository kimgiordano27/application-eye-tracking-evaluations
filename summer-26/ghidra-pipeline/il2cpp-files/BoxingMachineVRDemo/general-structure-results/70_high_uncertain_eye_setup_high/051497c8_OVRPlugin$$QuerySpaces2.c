/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces2
ENTRY_POINT: 051497c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpaces2(int param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x25;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long lStack0000000000000018;
  
  lStack0000000000000018 = *(long *)(unaff_x25 + 0x28);
  if ((DAT_06b79d86 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067677e0);
    FUN_02d6084c(PTR_DAT_0677d8b0);
    FUN_02d6084c(PTR_DAT_06760758);
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_06767820);
    DAT_06b79d86 = 1;
  }
  puVar3 = PTR_DAT_067677e0;
  puVar2 = PTR_DAT_0675e258;
  if ((((param_2 == (long *)0x0) || (*param_2 != *(long *)(PTR_DAT_0675e258 + 0x90))) &&
      ((param_3 == (long *)0x0 || (*param_3 != *(long *)(PTR_DAT_0675e258 + 0x90))))) ||
     ((param_1 != 0x3f && (param_1 != 0)))) {
    if (((param_2 != (long *)0x0) && (*param_2 == *(long *)PTR_DAT_067677e0)) ||
       ((param_3 != (long *)0x0 && (*param_3 == *(long *)PTR_DAT_067677e0)))) {
      if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_05149ea8;
      if (*(int *)(*(long *)PTR_DAT_0677d8b0 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      auVar17 = FUN_050da398(param_2,0);
      uVar6 = auVar17._8_8_;
      uVar4 = auVar17._0_8_;
      auVar17 = FUN_050da398(param_3,0);
      uVar7 = auVar17._8_8_;
      uVar5 = auVar17._0_8_;
      if (param_1 < 0x2b) {
        if (param_1 < 0xd) {
          if (param_1 == 0) goto LAB_05149ce0;
          if (param_1 == 0xc) goto LAB_05149c34;
        }
        else {
          if (param_1 == 0x1a) goto LAB_05149cb4;
          if (param_1 == 0x2a) goto LAB_05149b9c;
        }
        goto LAB_05149f6c;
      }
      if (param_1 < 0x42) {
        if (param_1 == 0x3f) {
LAB_05149ce0:
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          auVar17 = FUN_054774c0(uVar4,uVar6,uVar5,uVar7,0);
        }
        else {
          if (param_1 != 0x41) goto LAB_05149f6c;
LAB_05149c34:
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          auVar17 = FUN_05477974(uVar4,uVar6,uVar5,uVar7,0);
        }
      }
      else if (param_1 == 0x45) {
LAB_05149cb4:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        auVar17 = FUN_0547756c(uVar4,uVar6,uVar5,uVar7,0);
      }
      else {
        if (param_1 != 0x49) goto LAB_05149f6c;
LAB_05149b9c:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        auVar17 = FUN_05475ffc(uVar4,uVar6,uVar5,uVar7,0);
      }
      uVar4 = *(undefined8 *)puVar3;
LAB_05149da8:
      _in_stack_00000008 = auVar17;
      uVar4 = thunk_FUN_02d9d164(uVar4,&stack0x00000008);
      goto LAB_05149dac;
    }
    if (((((param_2 != (long *)0x0) && (*param_2 == *(long *)(PTR_DAT_0675e258 + 0x70))) ||
         ((param_3 != (long *)0x0 && (*param_3 == *(long *)(PTR_DAT_0675e258 + 0x70))))) ||
        ((param_2 != (long *)0x0 && (*param_2 == *(long *)PTR_DAT_06767820)))) ||
       ((param_3 != (long *)0x0 && (*param_3 == *(long *)PTR_DAT_06767820)))) {
      if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_05149ea8;
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      auVar17 = FUN_04f8a7e0(param_2,uVar4,0);
      uVar6 = auVar17._8_8_;
      uVar4 = auVar17._0_8_;
      uVar5 = FUN_04f8e414(0);
      auVar17 = FUN_04f8a7e0(param_3,uVar5,0);
      puVar2 = PTR_DAT_06767820;
      uVar7 = auVar17._8_8_;
      uVar5 = auVar17._0_8_;
      if (0x2a < param_1) {
        if (param_1 < 0x42) {
          if (param_1 != 0x3f) {
            if (param_1 == 0x41) {
LAB_05149c80:
              if (*(int *)(*(long *)PTR_DAT_06767820 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              auVar17 = FUN_050660bc(uVar4,uVar6,uVar5,uVar7,0);
              goto LAB_05149d98;
            }
            goto LAB_05149f6c;
          }
LAB_05149d68:
          if (*(int *)(*(long *)PTR_DAT_06767820 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          auVar17 = FUN_05065ea4(uVar4,uVar6,uVar5,uVar7,0);
        }
        else if (param_1 == 0x45) {
LAB_05149d34:
          if (*(int *)(*(long *)PTR_DAT_06767820 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          auVar17 = FUN_0506600c(uVar4,uVar6,uVar5,uVar7,0);
        }
        else {
          if (param_1 != 0x49) goto LAB_05149f6c;
LAB_05149be0:
          if (*(int *)(*(long *)PTR_DAT_06767820 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          auVar17 = FUN_05065f58(uVar4,uVar6,uVar5,uVar7,0);
        }
LAB_05149d98:
        uVar4 = *(undefined8 *)puVar2;
        goto LAB_05149da8;
      }
      if (param_1 < 0xd) {
        if (param_1 == 0) goto LAB_05149d68;
        if (param_1 == 0xc) goto LAB_05149c80;
      }
      else {
        if (param_1 == 0x1a) goto LAB_05149d34;
        if (param_1 == 0x2a) goto LAB_05149be0;
      }
      goto LAB_05149f6c;
    }
    if ((((param_2 == (long *)0x0) || (*param_2 != *(long *)(PTR_DAT_0675e258 + 0x78))) &&
        ((param_3 == (long *)0x0 || (*param_3 != *(long *)(PTR_DAT_0675e258 + 0x78))))) &&
       (((param_2 == (long *)0x0 || (*param_2 != *(long *)(PTR_DAT_0675e258 + 0x80))) &&
        ((param_3 == (long *)0x0 || (*param_3 != *(long *)(PTR_DAT_0675e258 + 0x80))))))) {
      if (param_2 == (long *)0x0) {
        lVar8 = *(long *)(PTR_DAT_0675e258 + 0x50);
        lVar9 = *(long *)(PTR_DAT_0675e258 + 0x68);
        lVar10 = *(long *)(PTR_DAT_0675e258 + 0x38);
        lVar11 = *(long *)(PTR_DAT_0675e258 + 0x40);
        lVar12 = *(long *)(PTR_DAT_0675e258 + 0x30);
        lVar13 = *(long *)(PTR_DAT_0675e258 + 0x18);
LAB_05149dd0:
        if ((param_3 == (long *)0x0) ||
           ((((lVar14 = *param_3, lVar14 != *(long *)(PTR_DAT_0675e258 + 0x48) && (lVar14 != lVar8))
             && ((lVar14 != lVar9 &&
                 (((lVar14 != lVar10 && (lVar14 != lVar11)) && (lVar14 != lVar12)))))) &&
            (lVar14 != lVar13)))) goto LAB_05149f6c;
      }
      else {
        lVar14 = *param_2;
        if (((((lVar14 != *(long *)(PTR_DAT_0675e258 + 0x48)) &&
              (lVar8 = *(long *)(PTR_DAT_0675e258 + 0x50), lVar14 != lVar8)) &&
             (lVar9 = *(long *)(PTR_DAT_0675e258 + 0x68), lVar14 != lVar9)) &&
            ((lVar10 = *(long *)(PTR_DAT_0675e258 + 0x38), lVar14 != lVar10 &&
             (lVar11 = *(long *)(PTR_DAT_0675e258 + 0x40), lVar14 != lVar11)))) &&
           ((lVar12 = *(long *)(PTR_DAT_0675e258 + 0x30), lVar14 != lVar12 &&
            (lVar13 = *(long *)(PTR_DAT_0675e258 + 0x18), lVar14 != lVar13)))) goto LAB_05149dd0;
      }
      if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
        if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f8e414(0);
        if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
        }
        lVar10 = FUN_04f898a8(param_2,uVar4,0);
        uVar4 = FUN_04f8e414(0);
        lVar11 = FUN_04f898a8(param_3,uVar4,0);
        if (param_1 < 0x2b) {
          if (param_1 < 0xd) {
            if (param_1 == 0) goto LAB_05149fa8;
            if (param_1 == 0xc) goto LAB_05149f90;
          }
          else {
            if (param_1 == 0x1a) goto LAB_05149f9c;
            if (param_1 == 0x2a) goto LAB_05149f30;
          }
        }
        else if (param_1 < 0x42) {
          if (param_1 == 0x3f) {
LAB_05149fa8:
            uVar4 = *(undefined8 *)(puVar2 + 0x68);
            auVar17._8_8_ = in_stack_00000010;
            auVar17._0_8_ = lVar11 + lVar10;
            goto LAB_05149da8;
          }
          if (param_1 == 0x41) {
LAB_05149f90:
            uVar4 = *(undefined8 *)(puVar2 + 0x68);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = in_stack_00000010;
            auVar17 = auVar1 << 0x40;
            if (lVar11 != 0) {
              auVar17._8_8_ = in_stack_00000010;
              auVar17._0_8_ = lVar10 / lVar11;
            }
            goto LAB_05149da8;
          }
        }
        else {
          if (param_1 == 0x45) {
LAB_05149f9c:
            uVar4 = *(undefined8 *)(puVar2 + 0x68);
            auVar17._8_8_ = in_stack_00000010;
            auVar17._0_8_ = lVar11 * lVar10;
            goto LAB_05149da8;
          }
          if (param_1 == 0x49) {
LAB_05149f30:
            uVar4 = *(undefined8 *)(puVar2 + 0x68);
            auVar17._8_8_ = in_stack_00000010;
            auVar17._0_8_ = lVar10 - lVar11;
            goto LAB_05149da8;
          }
        }
LAB_05149f6c:
        *param_4 = 0;
        thunk_FUN_02dd37b4(param_4,0);
        uVar4 = 0;
        goto LAB_05149ebc;
      }
    }
    else if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      dVar15 = (double)FUN_04f8a60c(param_2,uVar4,0);
      uVar4 = FUN_04f8e414(0);
      dVar16 = (double)FUN_04f8a60c(param_3,uVar4,0);
      if (param_1 < 0x2b) {
        if (param_1 < 0xd) {
          if (param_1 == 0) goto LAB_05149f48;
          if (param_1 == 0xc) goto LAB_05149f0c;
        }
        else {
          if (param_1 == 0x1a) goto LAB_05149f3c;
          if (param_1 == 0x2a) goto LAB_05149d28;
        }
        goto LAB_05149f6c;
      }
      if (param_1 < 0x42) {
        if (param_1 == 0x3f) {
LAB_05149f48:
          uVar4 = *(undefined8 *)(puVar2 + 0x80);
          auVar17._8_8_ = in_stack_00000010;
          auVar17._0_8_ = dVar15 + dVar16;
        }
        else {
          if (param_1 != 0x41) goto LAB_05149f6c;
LAB_05149f0c:
          uVar4 = *(undefined8 *)(puVar2 + 0x80);
          auVar17._8_8_ = in_stack_00000010;
          auVar17._0_8_ = dVar15 / dVar16;
        }
      }
      else if (param_1 == 0x45) {
LAB_05149f3c:
        uVar4 = *(undefined8 *)(puVar2 + 0x80);
        auVar17._8_8_ = in_stack_00000010;
        auVar17._0_8_ = dVar15 * dVar16;
      }
      else {
        if (param_1 != 0x49) goto LAB_05149f6c;
LAB_05149d28:
        uVar4 = *(undefined8 *)(puVar2 + 0x80);
        auVar17._8_8_ = in_stack_00000010;
        auVar17._0_8_ = dVar15 - dVar16;
      }
      goto LAB_05149da8;
    }
LAB_05149ea8:
    uVar4 = 0;
    *param_4 = 0;
  }
  else {
    if (param_2 == (long *)0x0) {
      uVar4 = 0;
      if (param_3 != (long *)0x0) goto LAB_05149884;
LAB_05149ad8:
      uVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      if (param_3 == (long *)0x0) goto LAB_05149ad8;
LAB_05149884:
      uVar5 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    }
    uVar4 = FUN_04e83184(uVar4,uVar5,0);
LAB_05149dac:
    *param_4 = uVar4;
  }
  thunk_FUN_02dd37b4(param_4,uVar4);
  uVar4 = 1;
LAB_05149ebc:
  if (*(long *)(unaff_x25 + 0x28) != lStack0000000000000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


