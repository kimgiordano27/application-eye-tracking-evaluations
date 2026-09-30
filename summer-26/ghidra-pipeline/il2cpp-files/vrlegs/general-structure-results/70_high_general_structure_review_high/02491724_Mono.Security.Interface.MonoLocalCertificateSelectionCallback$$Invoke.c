/*
FUNCTION_NAME: Mono.Security.Interface.MonoLocalCertificateSelectionCallback$$Invoke
ENTRY_POINT: 02491724
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Mono_Security_Interface_MonoLocalCertificateSelectionCallback__Invoke(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint in_w8;
  long lVar10;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar11;
  long *plVar12;
  long *unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long *in_stack_00000038;
  
  lVar11 = 0;
  do {
    if (in_w8 <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar12 = *(long **)(unaff_x22 + (long)(int)unaff_w19 * 8 + 0x20);
    if (plVar12 == (long *)0x0) goto LAB_02491d2c;
    iVar4 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
    if (iVar4 < 9) {
      switch(iVar4) {
      case 1:
        uVar6 = FUN_02410dc0(unaff_x28,0);
        if ((uVar6 & 1) == 0) goto switchD_0249178c_caseD_8;
        break;
      case 2:
        if (lVar11 != 0) {
          lVar10 = *plVar12;
          bVar1 = *(byte *)(*(long *)PTR_DAT_03ce7bf0 + 0x130);
          if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03ce7bf0)) goto LAB_02491d3c;
          lVar10 = (**(code **)(lVar10 + 0x2c8))(plVar12,1,*(undefined8 *)(lVar10 + 0x2d0));
          if ((lVar10 == 0) ||
             (uVar6 = FUN_0219f8b8(lVar11,lVar10,&stack0x00000020,*(undefined8 *)PTR_DAT_03ce7bd8),
             (uVar6 & 1) == 0)) {
            in_stack_00000020 = 0;
          }
          lVar10 = (**(code **)(*plVar12 + 0x2d8))(plVar12,1,*(undefined8 *)(*plVar12 + 0x2e0));
          if ((lVar10 == 0) ||
             (uVar6 = FUN_0219f8b8(lVar11,lVar10,&stack0x00000018,*(undefined8 *)PTR_DAT_03ce7bd8),
             (uVar6 & 1) == 0)) {
            in_stack_00000018 = 0;
          }
          else if ((in_stack_00000020 != 0) && (in_stack_00000018 != 0)) {
            if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_02491d2c;
            plVar7 = (long *)FUN_0244ca68(*(long *)(unaff_x21 + 0x20),plVar12,unaff_x28,
                                          in_stack_00000020,in_stack_00000018,0);
            if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_02491d2c;
            if (*(char *)(*(long *)(unaff_x21 + 0x20) + 0x30) == '\0') {
              if (unaff_x23 == 0) {
                unaff_x23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce7c20);
                Animancer_AnimancerState__OnSetIsPlaying(unaff_x23,*(undefined8 *)PTR_DAT_03ce7c08);
                if (unaff_x23 == 0) goto LAB_02491d2c;
              }
              FUN_01b5f01c(unaff_x23,plVar7,*(undefined8 *)PTR_DAT_03ce7bf8);
            }
            goto LAB_02491bc4;
          }
        }
        break;
      default:
switchD_0249178c_caseD_3:
        FUN_018748a8(plVar12);
        uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
        uVar9 = thunk_FUN_01a89e68();
        FUN_0276e9b0(uVar9,uVar8,0);
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03ce7c30);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar9,uVar8);
      case 4:
        bVar1 = *(byte *)(*(long *)PTR_DAT_03cc4aa0 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_03cc4aa0)) goto LAB_02491d3c;
        if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_02491d2c;
        plVar7 = (long *)FUN_0244a9a0(*(long *)(unaff_x21 + 0x20),plVar12,unaff_x28,0);
        if (plVar7 == (long *)0x0) break;
        if ((unaff_x23 != 0) && (0 < *(int *)(unaff_x23 + 0x18))) {
          iVar4 = 0;
          do {
            FUN_02215a88(unaff_x23,iVar4,&stack0x00000038,*(undefined8 *)PTR_DAT_03ce7c18);
            plVar3 = in_stack_00000038;
            if (in_stack_00000038 == (long *)0x0) goto LAB_02491d2c;
            uVar8 = (**(code **)(*in_stack_00000038 + 0x188))
                              (in_stack_00000038,*(undefined8 *)(*in_stack_00000038 + 400));
            uVar9 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210));
            uVar6 = thunk_FUN_025bd1c0(uVar8,uVar9,0);
            if ((uVar6 & 1) != 0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_03cd8660 + 0x130);
              if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_03cd8660)) goto LAB_02491dac;
              plVar3[8] = (long)plVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 8,plVar7);
              FUN_022190f4(unaff_x23,iVar4,*(undefined8 *)PTR_DAT_03ce7c00);
              unaff_x27 = (long *)PTR_DAT_03cc4aa8;
              goto LAB_02491c74;
            }
            iVar4 = iVar4 + 1;
            unaff_x27 = (long *)PTR_DAT_03cc4aa8;
          } while (iVar4 < *(int *)(unaff_x23 + 0x18));
        }
LAB_02491bc4:
        if (plVar7 == (long *)0x0) goto LAB_02491d2c;
LAB_02491bc8:
        uVar6 = FUN_024af700(plVar7,0);
        if (((uVar6 & 1) == 0) || (uVar6 = FUN_02410dc0(unaff_x28,0), (uVar6 & 1) == 0)) {
          if (*unaff_x20 == 0) {
LAB_02491d2c:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_023af7fc(*unaff_x20,plVar7,0);
        }
        break;
      case 8:
switchD_0249178c_caseD_8:
        lVar10 = *plVar12;
        bVar1 = *(byte *)(*(long *)PTR_DAT_03ce7b90 + 0x130);
        if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce7b90)
           ) {
LAB_02491d3c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar12);
        }
        uVar5 = (**(code **)(lVar10 + 0x2d8))(plVar12,*(undefined8 *)(lVar10 + 0x2e0));
        if ((uVar5 & 7) != 1) {
Mono_Security_Interface_MonoTlsSettings__set_DisallowUnauthenticatedCertificateRequest:
          if ((*(long *)(unaff_x21 + 0x20) == 0) ||
             (plVar7 = (long *)FUN_0244d4ac(*(long *)(unaff_x21 + 0x20),plVar12,unaff_x28,0),
             plVar7 == (long *)0x0)) goto LAB_02491d2c;
          if (((int)plVar7[4] == 8) &&
             (uVar6 = FUN_024ad574(plVar7,0), puVar2 = PTR_DAT_03ce7c28, (uVar6 & 1) == 0)) {
            if (lVar11 == 0) {
              lVar11 = *(long *)PTR_DAT_03ce7c28;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar11 = *(long *)puVar2;
              }
              uVar8 = **(undefined8 **)(lVar11 + 0xb8);
              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce7be8);
              FUN_0219a51c(lVar11,uVar8,*(undefined8 *)PTR_DAT_03ce7be0);
              if (lVar11 == 0) goto LAB_02491d2c;
            }
            if (*plVar7 != *(long *)PTR_DAT_03cd8a58) {
LAB_02491dac:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar7);
            }
            FUN_0219b9a4(lVar11,plVar12,plVar7,*(undefined8 *)PTR_DAT_03ce7bd0);
          }
          goto LAB_02491bc8;
        }
        if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_02491d2c;
        if (((~uVar5 & 0x1e0) != 0) && (*(char *)(*(long *)(unaff_x21 + 0x20) + 0x30) == '\0')) {
          uVar8 = FUN_02688710(plVar12,0);
          lVar10 = *unaff_x29;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar10);
            lVar10 = *unaff_x29;
          }
          uVar6 = FUN_0244b03c(uVar8,*(undefined8 *)PTR_DAT_03ce2698,
                               **(undefined8 **)(lVar10 + 0xb8),0);
          if ((uVar6 & 1) == 0)
          goto 
          Mono_Security_Interface_MonoTlsSettings__set_DisallowUnauthenticatedCertificateRequest;
        }
      }
    }
    else if (iVar4 == 0x10) {
      if (lVar11 != 0) {
        lVar10 = *plVar12;
        bVar1 = *(byte *)(*unaff_x27 + 0x130);
        if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27))
        goto LAB_02491d3c;
        lVar10 = (**(code **)(lVar10 + 0x3b8))(plVar12,1,*(undefined8 *)(lVar10 + 0x3c0));
        if ((lVar10 == 0) ||
           (uVar6 = FUN_0219f8b8(lVar11,lVar10,&stack0x00000030,*(undefined8 *)PTR_DAT_03ce7bd8),
           (uVar6 & 1) == 0)) {
          in_stack_00000030 = 0;
        }
        lVar10 = (**(code **)(*plVar12 + 1000))(plVar12,1,*(undefined8 *)(*plVar12 + 0x3f0));
        if ((lVar10 == 0) ||
           (uVar6 = FUN_0219f8b8(lVar11,lVar10,&stack0x00000028,*(undefined8 *)PTR_DAT_03ce7bd8),
           (uVar6 & 1) == 0)) {
          in_stack_00000028 = 0;
        }
        if (in_stack_00000030 != 0 || in_stack_00000028 != 0) {
          if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar7 = (long *)FUN_0244ecd8(*(long *)(unaff_x21 + 0x20),plVar12,unaff_x28,
                                        in_stack_00000030,in_stack_00000028,0);
          if (plVar7 != (long *)0x0) goto LAB_02491bc4;
        }
      }
    }
    else if (iVar4 != 0x80) goto switchD_0249178c_caseD_3;
LAB_02491c74:
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    unaff_w19 = unaff_w19 + 1;
    if ((int)in_w8 <= (int)unaff_w19) {
      return;
    }
  } while( true );
}


