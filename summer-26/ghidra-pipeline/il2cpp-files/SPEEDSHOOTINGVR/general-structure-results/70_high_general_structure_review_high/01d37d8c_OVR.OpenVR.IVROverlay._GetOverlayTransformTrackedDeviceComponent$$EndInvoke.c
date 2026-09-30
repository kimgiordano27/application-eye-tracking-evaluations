/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetOverlayTransformTrackedDeviceComponent$$EndInvoke
ENTRY_POINT: 01d37d8c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVROverlay__GetOverlayTransformTrackedDeviceComponent__EndInvoke(int param_1)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int unaff_w19;
  long *unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  long *unaff_x29;
  double dVar17;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000038;
  
code_r0x01d37d8c:
  if (param_1 < 0xc) {
    lVar10 = FUN_01cfc48c();
    if (lVar10 == 0) goto LAB_01d38abc;
    if (*(int *)(lVar10 + 0x10) < 1) goto LAB_01d389cc;
    lVar10 = FUN_01cfc48c();
  }
  else {
    lVar10 = FUN_01cfcb84();
    if (lVar10 == 0) goto LAB_01d38abc;
    if (*(int *)(lVar10 + 0x10) < 1) goto LAB_01d389cc;
    lVar10 = FUN_01cfcb84();
  }
  if ((lVar10 != 0) && (FUN_01c49538(lVar10,0,0), unaff_x24 != 0)) {
    FUN_01dc37f8();
LAB_01d389cc:
    uVar12 = in_stack_00000038;
    unaff_w27 = iStack0000000000000034 + unaff_w27;
    if ((int)unaff_w22 <= (int)unaff_w27) {
      return;
    }
    if (unaff_w22 <= unaff_w27) goto LAB_01d38ab8;
    uVar3 = *(ushort *)(unaff_x23 + (long)(int)unaff_w27 * 2);
    if (uVar3 < 0x4c) {
      if (uVar3 < 0x30) {
        if (uVar3 < 0x26) {
          if (uVar3 == 0x22) {
LAB_01d37f48:
            if (*(int *)(*unaff_x20 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            iStack0000000000000034 = FUN_01d3764c();
          }
          else {
            if (uVar3 != 0x25) goto switchD_01d37e08_caseD_65;
            if (*(int *)(*unaff_x20 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            iVar8 = FUN_01d377f4();
            uVar12 = in_stack_00000038;
            if ((iVar8 < 0) || (iVar8 == 0x25)) goto LAB_01d38ac0;
            uStack0000000000000028 = (undefined2)iVar8;
            if (*(long *)(*(long *)PTR_DAT_02357b18 + 0x38) == 0) {
              FUN_0103c2a0(*(long *)PTR_DAT_02357b18);
            }
            if (*(int *)(*unaff_x20 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            FUN_01d379bc(uVar12,&stack0x00000028,1);
LAB_01d37cf8:
            iStack0000000000000034 = 2;
          }
          goto LAB_01d389cc;
        }
        if (uVar3 == 0x27) goto LAB_01d37f48;
        if (uVar3 == 0x2f) {
          FUN_01cfc8dc();
          if (unaff_x24 != 0) goto LAB_01d3820c;
          goto LAB_01d38abc;
        }
      }
      else if (uVar3 < 0x47) {
        if (uVar3 == 0x3a) {
          FUN_01cfd044();
          if (unaff_x24 == 0) goto LAB_01d38abc;
LAB_01d3820c:
          FUN_01dc3848();
          iStack0000000000000034 = unaff_w19;
          goto LAB_01d389cc;
        }
        if (uVar3 == 0x46) goto switchD_01d37e08_caseD_66;
      }
      else {
        if (uVar3 == 0x48) {
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iStack0000000000000034 = FUN_01d3749c();
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01022c14(*unaff_x29);
          }
          FUN_01c61eac(&stack0x00000038,0);
          goto LAB_01d38640;
        }
        if (uVar3 == 0x4b) {
          iStack0000000000000034 = unaff_w19;
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          FUN_01d38ed0(uVar12,in_stack_00000018);
          goto OVR_OpenVR_IVROverlay__GetOverlayInputMethod__BeginInvoke;
        }
      }
    }
    else {
      if (0x6d < uVar3) {
        if (0x74 < uVar3) {
          if (uVar3 != 0x79) {
            if (uVar3 != 0x7a) goto switchD_01d37e08_caseD_65;
            if (*(int *)(*unaff_x20 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            iStack0000000000000034 = FUN_01d3749c();
            FUN_01d38b18(in_stack_00000038,in_stack_00000018);
            goto LAB_01d389cc;
          }
          if (unaff_x25 == (long *)0x0) goto LAB_01d38abc;
          iStack0000000000000030 = (**(code **)(*unaff_x25 + 0x268))();
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14(*unaff_x20);
          }
          iStack0000000000000034 = FUN_01d3749c();
          if (((((in_stack_00000010 & 1) == 0) &&
               (*(char *)(*(long *)(*(long *)PTR_DAT_02355800 + 0xb8) + 1) == '\0')) &&
              (iStack0000000000000030 == 1)) &&
             (uVar1 = iStack0000000000000034 + unaff_w27, (int)uVar1 < in_stack_00000008._4_4_)) {
            if (unaff_w22 <= uVar1) goto LAB_01d38ab8;
            if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) != 0x27) goto LAB_01d383c4;
            if (unaff_w22 <= uVar1 + 1) goto LAB_01d38ab8;
            if (*(long *)PTR_DAT_02355870 != 0) {
              sVar7 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
              sVar6 = FUN_01c49538(*(long *)PTR_DAT_02355870,0,0);
              unaff_w19 = 1;
              if (sVar7 != sVar6) goto LAB_01d383c4;
              if ((*(long *)PTR_DAT_02355868 != 0) &&
                 (FUN_01c49538(*(long *)PTR_DAT_02355868,0,0), unaff_x24 != 0))
              goto code_r0x01d383b0;
            }
            goto LAB_01d38abc;
          }
LAB_01d383c4:
          uVar11 = FUN_01cfe790();
          if ((uVar11 & 1) == 0) {
            if ((in_stack_00000010 & 0x100000000) == 0) {
              if (*(int *)(*(long *)PTR_DAT_02355568 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              if (DAT_0247d372 == '\0') {
                FUN_00fdc2e4(PTR_DAT_02355568);
                DAT_0247d372 = (char)unaff_w19;
              }
              puVar5 = PTR_DAT_02355568;
              lVar10 = *(long *)PTR_DAT_02355568;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01022c14();
                lVar10 = *(long *)puVar5;
              }
              unaff_w19 = 1;
              if (**(char **)(lVar10 + 0xb8) == '\0') {
                if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                  thunk_FUN_01022c14();
                }
                FUN_01d37420();
                goto OVR_OpenVR_IVROverlay__GetOverlayInputMethod__BeginInvoke;
              }
            }
            if (2 < iStack0000000000000034) {
              uVar12 = FUN_01d47d28((long)&stack0x00000030 + 4,0);
              uVar12 = FUN_01c45a74(*(undefined8 *)PTR_DAT_02357b20,uVar12,0);
              if (*(int *)(*(long *)PTR_DAT_0234c0c0 + 0xe0) == 0) {
                thunk_FUN_01022c14(*(long *)PTR_DAT_0234c0c0);
              }
              uVar13 = FUN_01d22d48(0);
              FUN_01d47f04(&stack0x00000030,uVar12,uVar13,0);
              if (unaff_x24 == 0) goto LAB_01d38abc;
              FUN_01dc3848();
              goto LAB_01d389cc;
            }
            if (*(int *)(*unaff_x20 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
          }
          else if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          FUN_01d372b8();
          goto OVR_OpenVR_IVROverlay__GetOverlayInputMethod__BeginInvoke;
        }
        if (uVar3 == 0x73) {
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iStack0000000000000034 = FUN_01d3749c();
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01022c14(*unaff_x29);
          }
          System_Type__get_IsSZArray(&stack0x00000038,0);
          goto LAB_01d38640;
        }
        if (uVar3 != 0x74) goto switchD_01d37e08_caseD_65;
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        iVar8 = FUN_01d3749c();
        iStack0000000000000034 = iVar8;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x29);
        }
        param_1 = FUN_01c61eac(&stack0x00000038,0);
        if (iVar8 != 1) {
          if (param_1 < 0xc) {
            FUN_01cfc48c();
          }
          else {
            FUN_01cfcb84();
          }
joined_r0x01d3888c:
          if (unaff_x24 != 0) goto LAB_01d38890;
          goto LAB_01d38abc;
        }
        goto code_r0x01d37d8c;
      }
      cVar4 = (char)unaff_w19;
      if (0x5c < uVar3) {
        switch(uVar3) {
        case 100:
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iStack0000000000000034 = FUN_01d3749c();
          if (unaff_x25 == (long *)0x0) goto LAB_01d38abc;
          if (2 < iStack0000000000000034) {
            uVar9 = (**(code **)(*unaff_x25 + 0x1f8))();
            iVar8 = iStack0000000000000034;
            if (*(int *)(*unaff_x20 + 0xe0) == 0) {
              thunk_FUN_01022c14(*unaff_x20);
            }
            FUN_01d37524(uVar9,iVar8);
            if (unaff_x24 != 0) {
              FUN_01dc3848();
              goto OVR_OpenVR_IVROverlay__GetOverlayInputMethod__BeginInvoke;
            }
            goto LAB_01d38abc;
          }
          (**(code **)(*unaff_x25 + 0x1e8))();
          if ((in_stack_00000010 & 0x100000000) == 0) {
            if (*(int *)(*(long *)PTR_DAT_02355568 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            if (DAT_0247d372 == '\0') {
              FUN_00fdc2e4(PTR_DAT_02355568);
              DAT_0247d372 = cVar4;
            }
            puVar5 = PTR_DAT_02355568;
            lVar10 = *(long *)PTR_DAT_02355568;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar10 = *(long *)puVar5;
            }
            unaff_w19 = 1;
            if (**(char **)(lVar10 + 0xb8) == '\0') {
              if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              FUN_01d37420();
              goto LAB_01d389cc;
            }
          }
          lVar10 = *unaff_x20;
          goto LAB_01d38924;
        default:
          goto switchD_01d37e08_caseD_65;
        case 0x66:
switchD_01d37e08_caseD_66:
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iStack0000000000000034 = FUN_01d3749c();
          if (7 < iStack0000000000000034) {
LAB_01d38ac0:
            if (in_stack_00000000 == 0) {
              FUN_01dcc86c();
            }
            thunk_FUN_010303a8(PTR_DAT_023508f8);
            uVar12 = thunk_FUN_010400dc();
            uVar13 = thunk_FUN_010303a8(PTR_DAT_02355908);
            FUN_01d36fec(uVar12,uVar13);
            uVar13 = thunk_FUN_010303a8(PTR_DAT_02357b28);
                    /* WARNING: Subroutine does not return */
            FUN_00fdc400(uVar12,uVar13);
          }
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar10 = FUN_01c5ec0c(&stack0x00000038,0);
          iVar8 = iStack0000000000000034;
          if (*(int *)(*(long *)PTR_DAT_0234be70 + 0xe0) == 0) {
            thunk_FUN_01022c14(*(long *)PTR_DAT_0234be70);
          }
          dVar17 = (double)thunk_FUN_01039268(0x4024000000000000,(double)(7 - iVar8),0);
          unaff_x29 = (long *)PTR_DAT_0234c928;
          lVar2 = -0x8000000000000000;
          if (dVar17 != INFINITY) {
            lVar2 = (long)dVar17;
          }
          lVar14 = 0;
          if (lVar2 != 0) {
            lVar14 = (lVar10 % 10000000) / lVar2;
          }
          iVar8 = (int)lVar14;
          if (uVar3 == 0x66) {
            lVar10 = *unaff_x20;
            unaff_w19 = 1;
            iStack000000000000002c = iVar8;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar10 = *unaff_x20;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
            if (lVar10 != 0) {
              if (*(uint *)(lVar10 + 0x18) <= iStack0000000000000034 - 1U) {
LAB_01d38ab8:
                    /* WARNING: Subroutine does not return */
                FUN_00fdc53c();
              }
              uVar12 = *(undefined8 *)(lVar10 + (long)(int)(iStack0000000000000034 - 1U) * 8 + 0x20)
              ;
              if (*(int *)(*(long *)PTR_DAT_0234c0c0 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              uVar13 = FUN_01d22d48(0);
              FUN_01d47f04((long)&stack0x00000028 + 4,uVar12,uVar13,0);
              goto joined_r0x01d3888c;
            }
            goto LAB_01d38abc;
          }
          iVar16 = iStack0000000000000034;
          if ((0 < iStack0000000000000034) && (iVar15 = iStack0000000000000034, iVar8 % 10 == 0)) {
            do {
              lVar10 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x26),8);
              lVar14 = (lVar10 >> 2) - (lVar10 >> 0x3f);
              iVar16 = iVar15 + -1;
              if (iVar15 < 2) break;
              lVar10 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x26),8);
              iVar15 = iVar16;
            } while (lVar14 == ((lVar10 >> 2) - (lVar10 >> 0x3f)) * 10);
          }
          if (iVar16 < 1) {
            if (unaff_x24 == 0) goto LAB_01d38abc;
            iVar8 = FUN_01dc4000();
            unaff_w19 = 1;
            if (0 < iVar8) {
              FUN_01dc4000();
              sVar7 = FUN_01dca3c4();
              if (sVar7 == 0x2e) {
                FUN_01dc4000();
                FUN_01dcae90();
              }
            }
            goto LAB_01d389cc;
          }
          lVar10 = *unaff_x20;
          iStack000000000000002c = (int)lVar14;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01022c14();
            lVar10 = *unaff_x20;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
          if (lVar10 == 0) goto LAB_01d38abc;
          if (*(uint *)(lVar10 + 0x18) <= iVar16 - 1U) goto LAB_01d38ab8;
          uVar12 = *(undefined8 *)(lVar10 + (ulong)(iVar16 - 1U) * 8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_0234c0c0 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar13 = FUN_01d22d48(0);
          FUN_01d47f04((long)&stack0x00000028 + 4,uVar12,uVar13,0);
          unaff_w19 = 1;
          break;
        case 0x67:
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iStack0000000000000034 = FUN_01d3749c();
          if (unaff_x25 == (long *)0x0) goto LAB_01d38abc;
          (**(code **)(*unaff_x25 + 0x228))();
          FUN_01cfc64c();
          break;
        case 0x68:
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iStack0000000000000034 = FUN_01d3749c();
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01022c14(*unaff_x29);
          }
          FUN_01c61eac(&stack0x00000038,0);
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          FUN_01d372b8();
OVR_OpenVR_IVROverlay__GetOverlayInputMethod__BeginInvoke:
          unaff_w19 = 1;
          goto LAB_01d389cc;
        case 0x6d:
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iStack0000000000000034 = FUN_01d3749c();
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01022c14(*unaff_x29);
          }
          FUN_01c61f34(&stack0x00000038,0);
LAB_01d38640:
          FUN_01d372b8();
          goto LAB_01d389cc;
        }
        if (unaff_x24 == 0) goto LAB_01d38abc;
LAB_01d38890:
        FUN_01dc3848();
        goto LAB_01d389cc;
      }
      if (uVar3 == 0x4d) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        iStack0000000000000034 = FUN_01d3749c();
        if (unaff_x25 == (long *)0x0) goto LAB_01d38abc;
        uVar9 = (**(code **)(*unaff_x25 + 0x248))();
        if (2 < iStack0000000000000034) {
          if ((in_stack_00000010 & 0x100000000) == 0) {
            if (*(int *)(*(long *)PTR_DAT_02355568 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            if (DAT_0247d372 == '\0') {
              FUN_00fdc2e4(PTR_DAT_02355568);
              DAT_0247d372 = cVar4;
            }
            puVar5 = PTR_DAT_02355568;
            lVar10 = *(long *)PTR_DAT_02355568;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar10 = *(long *)puVar5;
            }
            uVar12 = in_stack_00000038;
            iVar8 = iStack0000000000000034;
            unaff_w19 = 1;
            if (**(char **)(lVar10 + 0xb8) == '\0') {
              if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              FUN_01d3758c(uVar12,uVar9,iVar8);
              if (unaff_x24 != 0) {
                FUN_01dc3848();
                unaff_x29 = (long *)PTR_DAT_0234c928;
                goto OVR_OpenVR_IVROverlay__GetOverlayInputMethod__BeginInvoke;
              }
              goto LAB_01d38abc;
            }
          }
          uVar11 = FUN_01cfd3b0();
          iVar8 = iStack0000000000000034;
          lVar10 = *unaff_x20;
          if (((uVar11 & 1) == 0) || (iStack0000000000000034 < 4)) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01022c14(lVar10);
            }
            FUN_01d37558(uVar9,iVar8);
          }
          else {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01022c14(lVar10);
            }
            FUN_01d37864();
            FUN_01cfd3f0();
          }
          if (unaff_x24 == 0) goto LAB_01d38abc;
          FUN_01dc3848();
          unaff_x29 = (long *)PTR_DAT_0234c928;
          goto LAB_01d389cc;
        }
        if ((in_stack_00000010 & 0x100000000) == 0) {
          if (*(int *)(*(long *)PTR_DAT_02355568 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          if (DAT_0247d372 == '\0') {
            FUN_00fdc2e4(PTR_DAT_02355568);
            DAT_0247d372 = cVar4;
          }
          puVar5 = PTR_DAT_02355568;
          lVar10 = *(long *)PTR_DAT_02355568;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01022c14();
            lVar10 = *(long *)puVar5;
          }
          unaff_w19 = 1;
          if (**(char **)(lVar10 + 0xb8) == '\0') {
            if (*(int *)(*unaff_x20 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            FUN_01d37420();
            unaff_x29 = (long *)PTR_DAT_0234c928;
            goto LAB_01d389cc;
          }
        }
        lVar10 = *unaff_x20;
LAB_01d38924:
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01d372b8();
        unaff_x29 = (long *)PTR_DAT_0234c928;
        goto LAB_01d389cc;
      }
      if (uVar3 == 0x5c) {
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        iVar8 = FUN_01d377f4();
        if (iVar8 < 0) goto LAB_01d38ac0;
        if (unaff_x24 != 0) {
          FUN_01dc37f8();
          goto LAB_01d37cf8;
        }
        goto LAB_01d38abc;
      }
    }
switchD_01d37e08_caseD_65:
    if (unaff_x24 == 0) goto LAB_01d38abc;
    FUN_01dc37f8();
    iStack0000000000000034 = unaff_w19;
    goto LAB_01d389cc;
  }
LAB_01d38abc:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
code_r0x01d383b0:
  FUN_01dc37f8();
  goto LAB_01d389cc;
}


