/*
FUNCTION_NAME: Mono.Security.Interface.MonoTlsSettings$$set_SendCloseNotify
ENTRY_POINT: 02491834
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Mono_Security_Interface_MonoTlsSettings__set_SendCloseNotify(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 uVar10;
  undefined8 unaff_x28;
  long *unaff_x29;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long *in_stack_00000038;
  
code_r0x02491834:
  uVar6 = FUN_0244b03c(unaff_x26,*(undefined8 *)PTR_DAT_03ce2698,**(undefined8 **)(param_1 + 0xb8),0
                      );
  if ((uVar6 & 1) != 0) goto LAB_02491c74;
Mono_Security_Interface_MonoTlsSettings__set_DisallowUnauthenticatedCertificateRequest:
  if ((*(long *)(unaff_x21 + 0x20) != 0) &&
     (plVar7 = (long *)FUN_0244d4ac(*(long *)(unaff_x21 + 0x20),unaff_x25,unaff_x28,0),
     plVar7 != (long *)0x0)) {
    if (((int)plVar7[4] == 8) &&
       (uVar6 = FUN_024ad574(plVar7,0), puVar2 = PTR_DAT_03ce7c28, (uVar6 & 1) == 0)) {
      if (unaff_x24 == 0) {
        lVar8 = *(long *)PTR_DAT_03ce7c28;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar2;
        }
        uVar10 = **(undefined8 **)(lVar8 + 0xb8);
        unaff_x24 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce7be8);
        FUN_0219a51c(unaff_x24,uVar10,*(undefined8 *)PTR_DAT_03ce7be0);
        unaff_x21 = in_stack_00000010;
        if (unaff_x24 == 0) goto LAB_02491d2c;
      }
      if (*plVar7 != *(long *)PTR_DAT_03cd8a58) {
LAB_02491dac:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar7);
      }
      FUN_0219b9a4(unaff_x24,unaff_x25,plVar7,*(undefined8 *)PTR_DAT_03ce7bd0);
    }
LAB_02491bc8:
    uVar6 = FUN_024af700(plVar7,0);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_02410dc0(unaff_x28,0), (uVar6 & 1) == 0)) {
      if (*unaff_x20 == 0) goto LAB_02491d2c;
      FUN_023af7fc(*unaff_x20,plVar7,0);
    }
LAB_02491c74:
    do {
      while( true ) {
        unaff_w19 = unaff_w19 + 1;
        if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w19) {
          return;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        unaff_x25 = *(long **)(unaff_x22 + (long)(int)unaff_w19 * 8 + 0x20);
        if (unaff_x25 == (long *)0x0) goto LAB_02491d2c;
        iVar4 = (**(code **)(*unaff_x25 + 0x1f8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x200));
        if (iVar4 < 9) break;
        if (iVar4 == 0x10) {
          if (unaff_x24 != 0) {
            lVar8 = *unaff_x25;
            bVar1 = *(byte *)(*unaff_x27 + 0x130);
            if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27))
            goto LAB_02491d3c;
            lVar8 = (**(code **)(lVar8 + 0x3b8))(unaff_x25,1,*(undefined8 *)(lVar8 + 0x3c0));
            if ((lVar8 == 0) ||
               (uVar6 = FUN_0219f8b8(unaff_x24,lVar8,&stack0x00000030,
                                     *(undefined8 *)PTR_DAT_03ce7bd8), (uVar6 & 1) == 0)) {
              in_stack_00000030 = 0;
            }
            lVar8 = (**(code **)(*unaff_x25 + 1000))
                              (unaff_x25,1,*(undefined8 *)(*unaff_x25 + 0x3f0));
            if ((lVar8 == 0) ||
               (uVar6 = FUN_0219f8b8(unaff_x24,lVar8,&stack0x00000028,
                                     *(undefined8 *)PTR_DAT_03ce7bd8), (uVar6 & 1) == 0)) {
              in_stack_00000028 = 0;
            }
            if (in_stack_00000030 != 0 || in_stack_00000028 != 0) {
              if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              plVar7 = (long *)FUN_0244ecd8(*(long *)(unaff_x21 + 0x20),unaff_x25,unaff_x28,
                                            in_stack_00000030,in_stack_00000028,0);
              if (plVar7 != (long *)0x0) goto LAB_02491bc4;
            }
          }
        }
        else if (iVar4 != 0x80) {
switchD_0249178c_caseD_3:
          FUN_018748a8(unaff_x25);
          uVar10 = (**(code **)(*unaff_x25 + 0x168))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x170));
          thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
          uVar9 = thunk_FUN_01a89e68();
          FUN_0276e9b0(uVar9,uVar10,0);
          uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03ce7c30);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar9,uVar10);
        }
      }
      switch(iVar4) {
      case 1:
        uVar6 = FUN_02410dc0(unaff_x28,0);
        if ((uVar6 & 1) != 0) break;
      case 8:
        lVar8 = *unaff_x25;
        bVar1 = *(byte *)(*(long *)PTR_DAT_03ce7b90 + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce7b90))
        {
LAB_02491d3c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(unaff_x25);
        }
        uVar5 = (**(code **)(lVar8 + 0x2d8))(unaff_x25,*(undefined8 *)(lVar8 + 0x2e0));
        if ((uVar5 & 7) != 1)
        goto Mono_Security_Interface_MonoTlsSettings__set_DisallowUnauthenticatedCertificateRequest;
        if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_02491d2c;
        if (((~uVar5 & 0x1e0) != 0) && (*(char *)(*(long *)(unaff_x21 + 0x20) + 0x30) == '\0')) {
          unaff_x26 = FUN_02688710(unaff_x25,0);
          param_1 = *unaff_x29;
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01a58e78(param_1);
            param_1 = *unaff_x29;
          }
          goto code_r0x02491834;
        }
        break;
      case 2:
        if (unaff_x24 != 0) {
          lVar8 = *unaff_x25;
          bVar1 = *(byte *)(*(long *)PTR_DAT_03ce7bf0 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce7bf0
             )) goto LAB_02491d3c;
          lVar8 = (**(code **)(lVar8 + 0x2c8))(unaff_x25,1,*(undefined8 *)(lVar8 + 0x2d0));
          if ((lVar8 == 0) ||
             (uVar6 = FUN_0219f8b8(unaff_x24,lVar8,&stack0x00000020,*(undefined8 *)PTR_DAT_03ce7bd8)
             , (uVar6 & 1) == 0)) {
            in_stack_00000020 = 0;
          }
          lVar8 = (**(code **)(*unaff_x25 + 0x2d8))(unaff_x25,1,*(undefined8 *)(*unaff_x25 + 0x2e0))
          ;
          if ((lVar8 != 0) &&
             (uVar6 = FUN_0219f8b8(unaff_x24,lVar8,&stack0x00000018,*(undefined8 *)PTR_DAT_03ce7bd8)
             , (uVar6 & 1) != 0)) goto code_r0x02491a18;
          in_stack_00000018 = 0;
        }
        break;
      default:
        goto switchD_0249178c_caseD_3;
      case 4:
        bVar1 = *(byte *)(*(long *)PTR_DAT_03cc4aa0 + 0x130);
        if ((*(byte *)(*unaff_x25 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_03cc4aa0)) goto LAB_02491d3c;
        if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_02491d2c;
        plVar7 = (long *)FUN_0244a9a0(*(long *)(unaff_x21 + 0x20),unaff_x25,unaff_x28,0);
        if (plVar7 != (long *)0x0) {
          if ((unaff_x23 == 0) || (*(int *)(unaff_x23 + 0x18) < 1)) goto LAB_02491bc4;
          iVar4 = 0;
          while( true ) {
            FUN_02215a88(unaff_x23,iVar4,&stack0x00000038,*(undefined8 *)PTR_DAT_03ce7c18);
            plVar3 = in_stack_00000038;
            if (in_stack_00000038 == (long *)0x0) goto LAB_02491d2c;
            uVar10 = (**(code **)(*in_stack_00000038 + 0x188))
                               (in_stack_00000038,*(undefined8 *)(*in_stack_00000038 + 400));
            uVar9 = (**(code **)(*unaff_x25 + 0x208))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x210))
            ;
            uVar6 = thunk_FUN_025bd1c0(uVar10,uVar9,0);
            if ((uVar6 & 1) != 0) break;
            iVar4 = iVar4 + 1;
            unaff_x21 = in_stack_00000010;
            unaff_x27 = (long *)PTR_DAT_03cc4aa8;
            if (*(int *)(unaff_x23 + 0x18) <= iVar4) goto LAB_02491bc4;
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_03cd8660 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03cd8660)) goto LAB_02491dac;
          plVar3[8] = (long)plVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 8,plVar7);
          FUN_022190f4(unaff_x23,iVar4,*(undefined8 *)PTR_DAT_03ce7c00);
          unaff_x21 = in_stack_00000010;
          unaff_x27 = (long *)PTR_DAT_03cc4aa8;
        }
      }
    } while( true );
  }
LAB_02491d2c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
code_r0x02491a18:
  if ((in_stack_00000020 == 0) || (in_stack_00000018 == 0)) goto LAB_02491c74;
  if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_02491d2c;
  plVar7 = (long *)FUN_0244ca68(*(long *)(unaff_x21 + 0x20),unaff_x25,unaff_x28,in_stack_00000020,
                                in_stack_00000018,0);
  if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_02491d2c;
  if (*(char *)(*(long *)(unaff_x21 + 0x20) + 0x30) == '\0') {
    if (unaff_x23 == 0) {
      unaff_x23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce7c20);
      Animancer_AnimancerState__OnSetIsPlaying(unaff_x23,*(undefined8 *)PTR_DAT_03ce7c08);
      if (unaff_x23 == 0) goto LAB_02491d2c;
    }
    FUN_01b5f01c(unaff_x23,plVar7,*(undefined8 *)PTR_DAT_03ce7bf8);
  }
LAB_02491bc4:
  if (plVar7 == (long *)0x0) goto LAB_02491d2c;
  goto LAB_02491bc8;
}


