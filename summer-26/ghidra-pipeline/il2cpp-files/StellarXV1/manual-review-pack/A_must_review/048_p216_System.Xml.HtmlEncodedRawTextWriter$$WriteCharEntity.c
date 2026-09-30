/*
FUNCTION_NAME: System.Xml.HtmlEncodedRawTextWriter$$WriteCharEntity
ENTRY_POINT: 07cef7a8
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

void System_Xml_HtmlEncodedRawTextWriter__WriteCharEntity(long *param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  byte unaff_w20;
  long lVar16;
  undefined8 uVar17;
  long *unaff_x23;
  
  if (*param_1 == 0) goto LAB_07cf0270;
  uVar7 = FUN_04f5cf30(*param_1,*(undefined8 *)PTR_DAT_09300730,
                       *(undefined4 *)((long)unaff_x19 + 0x7c),unaff_w20 & 1,
                       *(undefined8 *)PTR_DAT_092ff300);
  if (*(byte *)(unaff_x19 + 0xf) == (unaff_w20 & 1))
  goto System_Xml_HtmlEncodedRawTextWriterIndent__WriteEndElement;
  if ((unaff_x19[2] != 0) && ((unaff_w20 & 1) != 0)) {
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar9 = FUN_07cb8ed8(lVar8,0);
    if ((uVar9 & 1) != 0) {
      lVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07cb02a0(lVar8,0);
      FUN_07ceef60();
    }
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *(long *)(lVar8 + 0x48);
    FUN_07cee988();
    lVar16 = unaff_x19[5];
    FUN_07cee988();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = FUN_07ce847c(lVar8,lVar16,unaff_x19[6]);
    if (lVar8 != 0) {
      FUN_07ce67f8();
    }
    FUN_07cf0698();
  }
  if ((unaff_w20 & 1) == 0) {
    lVar8 = unaff_x19[6];
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar10 = *(long **)(lVar8 + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar6 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
    if (iVar6 == 4) {
      uVar7 = FUN_07cd0a60(0);
      uVar13 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar7,uVar13);
    }
    lVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar16 = *(long *)(lVar8 + 0x40);
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07ceb6c4(lVar16,*(undefined8 *)(lVar8 + 0x90));
  }
  else {
    lVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar16 = *(long *)(lVar8 + 0x40);
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07ceb504(lVar16,*(undefined8 *)(lVar8 + 0x90),0);
  }
  FUN_07cf0b44();
  if ((unaff_w20 & 1) != 0) {
    FUN_07cef2bc();
    lVar8 = (**(code **)(*unaff_x19 + 0x198))();
    if (lVar8 != 0) {
      lVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
      lVar16 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar8 == lVar16) {
        lVar8 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar10 = *(long **)(lVar8 + 0x38);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0))
        ;
        puVar5 = PTR_DAT_092e1958;
        puVar4 = PTR_DAT_092860c8;
        do {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar10;
          lVar8 = *(long *)puVar4;
          uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar8) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_07cefc28;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_040b1e00(plVar10,lVar8,0);
LAB_07cefc28:
          uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          puVar3 = PTR_DAT_092860c0;
          if ((uVar9 & 1) == 0) {
            plVar10 = (long *)thunk_FUN_040b4e00(plVar10,*(undefined8 *)PTR_DAT_092860c0);
            if (plVar10 == (long *)0x0) goto LAB_07cefd88;
            lVar8 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_07cefd34;
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_07cefd1c;
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar10;
          lVar8 = *(long *)puVar4;
          uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar8) {
                puVar11 = (undefined8 *)(lVar16 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_07cefc90;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_040b1e00(plVar10,lVar8,1);
LAB_07cefc90:
          plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0();
          }
          FUN_07cf0bb0();
        } while( true );
      }
      lVar8 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar10 = *(long **)(lVar8 + 0x38);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
      puVar5 = PTR_DAT_092e1958;
      puVar4 = PTR_DAT_092860c8;
      do {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar16 = *plVar10;
        lVar8 = *(long *)puVar4;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_07cefa44;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_040b1e00(plVar10,lVar8,0);
LAB_07cefa44:
        uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar3 = PTR_DAT_092860c0;
        if ((uVar9 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_040b4e00(plVar10,*(undefined8 *)PTR_DAT_092860c0);
          if (plVar10 == (long *)0x0) break;
          lVar8 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_07cefb80;
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_07cefb68;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar16 = *plVar10;
        lVar8 = *(long *)puVar4;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_07cefaac;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_040b1e00(plVar10,lVar8,1);
LAB_07cefaac:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0();
        }
        FUN_07cf60bc();
      } while( true );
    }
    goto LAB_07cefe30;
  }
  lVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6ce8(lVar8,*(int *)(lVar8 + 0x50) + -1,0);
  goto LAB_07cefe54;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_07cefd1c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07cefd7c;
    }
  }
LAB_07cefd34:
  puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar3,0);
LAB_07cefd7c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_07cefd88:
  lVar8 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar8 + 0x20) != 0) {
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar13 = *(undefined8 *)(lVar8 + 0x90);
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar17 = *(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x40);
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar6 = FUN_074e37dc(uVar13,uVar17,1,*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x60),0);
    if (iVar6 == 0) {
      if (unaff_x19[2] != 0) {
        uVar7 = FUN_07cd1cc4(*(undefined8 *)(unaff_x19[2] + 0x40),0);
        uVar13 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar7,uVar13);
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  lVar8 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 *)(lVar8 + 0xb0) = 0;
  goto LAB_07cefe30;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_07cf0138:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07cf016c;
    }
  }
LAB_07cf0150:
  puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar3,0);
LAB_07cf016c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_07cf0178:
  if (*(char *)((long)unaff_x19 + 0x7a) != '\0') {
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar8 + 0x98) != 0) {
      lVar8 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(lVar8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(*(long *)(lVar8 + 0x98) + 0x10) == 0) {
        lVar8 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar8 != 0) {
          uVar7 = FUN_07cd0aa0(*(undefined8 *)(lVar8 + 0x90),0);
          uVar13 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar7,uVar13);
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
  }
  lVar8 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(lVar8 + 0x98) = 0;
  thunk_FUN_040ec700((undefined8 *)(lVar8 + 0x98),0);
  goto System_Xml_HtmlEncodedRawTextWriterIndent__WriteEndElement;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_07cefb68:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07cefd50;
    }
  }
LAB_07cefb80:
  puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar3,0);
LAB_07cefd50:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_07cefe30:
  lVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6ce8(lVar8,*(int *)(lVar8 + 0x50) + 1,0);
LAB_07cefe54:
  *(byte *)(unaff_x19 + 0xf) = unaff_w20 & 1;
  lVar8 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6d48(lVar8,0);
  if ((unaff_w20 & 1) != 0) {
    lVar8 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar13 = FUN_07cb02a0(lVar8,0);
    uVar9 = FUN_074e5d94(uVar13,0);
    if ((uVar9 & 1) != 0) {
      lVar8 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar6 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar8,0);
      if (1 < iVar6) {
LAB_07ceff38:
        lVar8 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar10 = (long *)FUN_07cb5de8(lVar8,0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0))
        ;
        puVar5 = PTR_DAT_092ff190;
        puVar4 = PTR_DAT_092860c8;
        lVar8 = 0;
        do {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar10;
          lVar16 = *(long *)puVar4;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar16) {
                puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_07ceffe0;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_040b1e00(plVar10,lVar16,0);
LAB_07ceffe0:
          uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          puVar3 = PTR_DAT_092860c0;
          if ((uVar9 & 1) == 0) {
            plVar10 = (long *)thunk_FUN_040b4e00(plVar10,*(undefined8 *)PTR_DAT_092860c0);
            if (plVar10 == (long *)0x0) goto LAB_07cf0178;
            lVar8 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_07cf0150;
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_07cf0138;
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar10;
          lVar16 = *(long *)puVar4;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar16) {
                puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_07cf0048;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_040b1e00(plVar10,lVar16,1);
LAB_07cf0048:
          plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar12;
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(lVar16 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar12);
          }
          uVar9 = (**(code **)(lVar16 + 0x1d8))(plVar12,*(undefined8 *)(lVar16 + 0x1e0));
          if ((uVar9 & 1) != 0) {
            pcVar1 = *(code **)(*plVar12 + 0x1b8);
            if (lVar8 == 0) {
              lVar8 = (*pcVar1)(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar8 = FUN_07cb02a0(lVar8,0);
            }
            else {
              lVar16 = (*pcVar1)(plVar12);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar13 = FUN_07cb02a0(lVar16,0);
              iVar6 = FUN_074e345c(lVar8,uVar13,4,0);
              if (iVar6 != 0) {
                *(undefined1 *)(unaff_x19 + 0xf) = 0;
                lVar8 = (**(code **)(*unaff_x19 + 0x188))();
                if (lVar8 != 0) {
                  uVar7 = FUN_07cd0c04(*(undefined8 *)(lVar8 + 0x90),0);
                  uVar13 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar7,uVar13);
                }
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
            }
          }
        } while( true );
      }
      lVar8 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar6 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar8,0);
      if (0 < iVar6) {
        lVar8 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar10 = *(long **)(*(long *)(lVar8 + 0x20) + 0x30);
        uVar13 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar13,uVar13);
        }
        uVar9 = (**(code **)(*plVar10 + 0x248))(plVar10,uVar13,*(undefined8 *)(*plVar10 + 0x250));
        if ((uVar9 & 1) == 0) goto LAB_07ceff38;
      }
    }
  }
System_Xml_HtmlEncodedRawTextWriterIndent__WriteEndElement:
  lVar8 = *unaff_x23;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar8 = *unaff_x23;
  }
  if (**(long **)(lVar8 + 0xb8) != 0) {
    FUN_0760fa08(**(long **)(lVar8 + 0xb8),3,uVar7,0);
    return;
  }
LAB_07cf0270:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


