/*
FUNCTION_NAME: System.Xml.HtmlEncodedRawTextWriter$$WriteHtmlAttributeTextBlock
ENTRY_POINT: 07cef6f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x07cf0184) */
/* WARNING: Removing unreachable block (ram,0x07cf0340) */
/* WARNING: Removing unreachable block (ram,0x07cefd68) */
/* WARNING: Removing unreachable block (ram,0x07cefd6c) */
/* WARNING: Removing unreachable block (ram,0x07cf0350) */
/* WARNING: Removing unreachable block (ram,0x07cf0360) */
/* WARNING: Removing unreachable block (ram,0x07cf02a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Xml_HtmlEncodedRawTextWriter__WriteHtmlAttributeTextBlock(long *param_1,byte param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  
  puVar5 = PTR_DAT_092b7a60;
  if ((DAT_09899a9b & 1) == 0) {
    FUN_04077588(PTR_DAT_092ff300);
    FUN_04077588(PTR_DAT_092b7a60);
    FUN_04077588(PTR_DAT_092ff190);
    FUN_04077588(PTR_DAT_092e1958);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092860c8);
    FUN_04077588(PTR_DAT_09300728);
    FUN_04077588(PTR_DAT_09300730);
    DAT_09899a9b = 1;
  }
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar8 = *(long *)puVar5;
  }
  if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_07cf0270;
  uVar9 = FUN_04f5cf30(**(long **)(lVar8 + 0xb8),*(undefined8 *)PTR_DAT_09300730,
                       *(undefined4 *)((long)param_1 + 0x7c),param_2 & 1,
                       *(undefined8 *)PTR_DAT_092ff300);
  if (*(byte *)(param_1 + 0xf) == (param_2 & 1))
  goto System_Xml_HtmlEncodedRawTextWriterIndent__WriteEndElement;
  if ((param_1[2] != 0) && ((param_2 & 1) != 0)) {
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar10 = FUN_07cb8ed8(lVar8,0);
    if ((uVar10 & 1) != 0) {
      lVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = FUN_07cb02a0(lVar8,0);
      FUN_07ceef60(param_1,uVar11);
    }
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *(long *)(lVar8 + 0x48);
    FUN_07cee988(param_1);
    lVar17 = param_1[5];
    FUN_07cee988(param_1);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = FUN_07ce847c(lVar8,lVar17,param_1[6]);
    if (lVar8 != 0) {
      FUN_07ce67f8();
    }
    FUN_07cf0698(param_1);
  }
  if ((param_2 & 1) == 0) {
    lVar8 = param_1[6];
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar12 = *(long **)(lVar8 + 0x20);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar7 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (iVar7 == 4) {
      uVar9 = FUN_07cd0a60(0);
      uVar11 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar9,uVar11);
    }
    lVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar17 = *(long *)(lVar8 + 0x40);
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07ceb6c4(lVar17,*(undefined8 *)(lVar8 + 0x90));
  }
  else {
    lVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar17 = *(long *)(lVar8 + 0x40);
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07ceb504(lVar17,*(undefined8 *)(lVar8 + 0x90),0);
  }
  FUN_07cf0b44(param_1,*(undefined8 *)PTR_DAT_09300728);
  if ((param_2 & 1) != 0) {
    FUN_07cef2bc(param_1);
    lVar8 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if (lVar8 != 0) {
      lVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      lVar17 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      pcVar1 = *(code **)(*param_1 + 0x188);
      if (lVar8 == lVar17) {
        lVar8 = (*pcVar1)(param_1,*(undefined8 *)(*param_1 + 400));
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar12 = *(long **)(lVar8 + 0x38);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0))
        ;
        puVar6 = PTR_DAT_092e1958;
        puVar4 = PTR_DAT_092860c8;
        do {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *plVar12;
          lVar8 = *(long *)puVar4;
          uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar8) {
                puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_07cefc28;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_040b1e00(plVar12,lVar8,0);
LAB_07cefc28:
          uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          puVar3 = PTR_DAT_092860c0;
          if ((uVar10 & 1) == 0) {
            plVar12 = (long *)thunk_FUN_040b4e00(plVar12,*(undefined8 *)PTR_DAT_092860c0);
            if (plVar12 == (long *)0x0) goto LAB_07cefd88;
            lVar8 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 == 0) goto LAB_07cefd34;
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_07cefd1c;
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *plVar12;
          lVar8 = *(long *)puVar4;
          uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar8) {
                puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_07cefc90;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_040b1e00(plVar12,lVar8,1);
LAB_07cefc90:
          plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0();
          }
          FUN_07cf0bb0(plVar14,param_1);
        } while( true );
      }
      lVar8 = (*pcVar1)(param_1);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar12 = *(long **)(lVar8 + 0x38);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0));
      puVar6 = PTR_DAT_092e1958;
      puVar4 = PTR_DAT_092860c8;
      do {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar17 = *plVar12;
        lVar8 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar8) {
              puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_07cefa44;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_040b1e00(plVar12,lVar8,0);
LAB_07cefa44:
        uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        puVar3 = PTR_DAT_092860c0;
        if ((uVar10 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_040b4e00(plVar12,*(undefined8 *)PTR_DAT_092860c0);
          if (plVar12 == (long *)0x0) break;
          lVar8 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_07cefb80;
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_07cefb68;
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar17 = *plVar12;
        lVar8 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar8) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_07cefaac;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_040b1e00(plVar12,lVar8,1);
LAB_07cefaac:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0();
        }
        FUN_07cf60bc(plVar14,param_1,0x600);
      } while( true );
    }
    goto LAB_07cefe30;
  }
  lVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6ce8(lVar8,*(int *)(lVar8 + 0x50) + -1,0);
  goto LAB_07cefe54;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_07cefd1c:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_07cefd7c;
    }
  }
LAB_07cefd34:
  puVar13 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)puVar3,0);
LAB_07cefd7c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_07cefd88:
  lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar8 + 0x20) != 0) {
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar11 = *(undefined8 *)(lVar8 + 0x90);
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x40);
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar7 = FUN_074e37dc(uVar11,uVar18,1,*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x60),0);
    if (iVar7 == 0) {
      if (param_1[2] != 0) {
        uVar9 = FUN_07cd1cc4(*(undefined8 *)(param_1[2] + 0x40),0);
        uVar11 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar9,uVar11);
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 *)(lVar8 + 0xb0) = 0;
  goto LAB_07cefe30;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_07cf0138:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_07cf016c;
    }
  }
LAB_07cf0150:
  puVar13 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)puVar3,0);
LAB_07cf016c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_07cf0178:
  if (*(char *)((long)param_1 + 0x7a) != '\0') {
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar8 + 0x98) != 0) {
      lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(lVar8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(*(long *)(lVar8 + 0x98) + 0x10) == 0) {
        lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        if (lVar8 != 0) {
          uVar9 = FUN_07cd0aa0(*(undefined8 *)(lVar8 + 0x90),0);
          uVar11 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar9,uVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(lVar8 + 0x98) = 0;
  thunk_FUN_040ec700((undefined8 *)(lVar8 + 0x98),0);
  goto System_Xml_HtmlEncodedRawTextWriterIndent__WriteEndElement;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_07cefb68:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_07cefd50;
    }
  }
LAB_07cefb80:
  puVar13 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)puVar3,0);
LAB_07cefd50:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_07cefe30:
  lVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6ce8(lVar8,*(int *)(lVar8 + 0x50) + 1,0);
LAB_07cefe54:
  *(byte *)(param_1 + 0xf) = param_2 & 1;
  lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6d48(lVar8,0);
  if ((param_2 & 1) != 0) {
    lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar11 = FUN_07cb02a0(lVar8,0);
    uVar10 = FUN_074e5d94(uVar11,0);
    if ((uVar10 & 1) != 0) {
      lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar7 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar8,0);
      if (1 < iVar7) {
LAB_07ceff38:
        lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar12 = (long *)FUN_07cb5de8(lVar8,0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0))
        ;
        puVar6 = PTR_DAT_092ff190;
        puVar4 = PTR_DAT_092860c8;
        lVar8 = 0;
        do {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar15 = *plVar12;
          lVar17 = *(long *)puVar4;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar17) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_07ceffe0;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_040b1e00(plVar12,lVar17,0);
LAB_07ceffe0:
          uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          puVar3 = PTR_DAT_092860c0;
          if ((uVar10 & 1) == 0) {
            plVar12 = (long *)thunk_FUN_040b4e00(plVar12,*(undefined8 *)PTR_DAT_092860c0);
            if (plVar12 == (long *)0x0) goto LAB_07cf0178;
            lVar8 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 == 0) goto LAB_07cf0150;
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_07cf0138;
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar15 = *plVar12;
          lVar17 = *(long *)puVar4;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar17) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_07cf0048;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_040b1e00(plVar12,lVar17,1);
LAB_07cf0048:
          plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *plVar14;
          bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((*(byte *)(lVar17 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar14);
          }
          uVar10 = (**(code **)(lVar17 + 0x1d8))(plVar14,*(undefined8 *)(lVar17 + 0x1e0));
          if ((uVar10 & 1) != 0) {
            pcVar1 = *(code **)(*plVar14 + 0x1b8);
            if (lVar8 == 0) {
              lVar8 = (*pcVar1)(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar8 = FUN_07cb02a0(lVar8,0);
            }
            else {
              lVar17 = (*pcVar1)(plVar14);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar11 = FUN_07cb02a0(lVar17,0);
              iVar7 = FUN_074e345c(lVar8,uVar11,4,0);
              if (iVar7 != 0) {
                *(undefined1 *)(param_1 + 0xf) = 0;
                lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
                if (lVar8 != 0) {
                  uVar9 = FUN_07cd0c04(*(undefined8 *)(lVar8 + 0x90),0);
                  uVar11 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar9,uVar11);
                }
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
            }
          }
        } while( true );
      }
      lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar7 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar8,0);
      if (0 < iVar7) {
        lVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar12 = *(long **)(*(long *)(lVar8 + 0x20) + 0x30);
        uVar11 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar11,uVar11);
        }
        uVar10 = (**(code **)(*plVar12 + 0x248))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x250));
        if ((uVar10 & 1) == 0) goto LAB_07ceff38;
      }
    }
  }
System_Xml_HtmlEncodedRawTextWriterIndent__WriteEndElement:
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar8 = *(long *)puVar5;
  }
  if (**(long **)(lVar8 + 0xb8) != 0) {
    FUN_0760fa08(**(long **)(lVar8 + 0xb8),3,uVar9,0);
    return;
  }
LAB_07cf0270:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


