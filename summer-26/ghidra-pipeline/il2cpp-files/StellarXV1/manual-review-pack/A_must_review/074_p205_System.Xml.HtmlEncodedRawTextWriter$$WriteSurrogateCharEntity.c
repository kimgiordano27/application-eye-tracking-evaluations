/*
FUNCTION_NAME: System.Xml.HtmlEncodedRawTextWriter$$WriteSurrogateCharEntity
ENTRY_POINT: 07cef800
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_4;telemetry_or_network_hits_2;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x07cf0184) */
/* WARNING: Removing unreachable block (ram,0x07cf0340) */
/* WARNING: Removing unreachable block (ram,0x07cefd68) */
/* WARNING: Removing unreachable block (ram,0x07cefd6c) */
/* WARNING: Removing unreachable block (ram,0x07cf0350) */
/* WARNING: Removing unreachable block (ram,0x07cf0360) */

void System_Xml_HtmlEncodedRawTextWriter__WriteSurrogateCharEntity(long param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  ulong unaff_x20;
  long lVar16;
  long *unaff_x23;
  undefined1 unaff_w24;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  
  lVar7 = (**(code **)(param_1 + 0x188))();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar8 = FUN_07cb8ed8(lVar7,0);
  if ((uVar8 & 1) != 0) {
    lVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07cb02a0(lVar7,0);
    FUN_07ceef60();
  }
  lVar7 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *(long *)(lVar7 + 0x48);
  FUN_07cee988();
  lVar16 = unaff_x19[5];
  FUN_07cee988();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = FUN_07ce847c(lVar7,lVar16,unaff_x19[6]);
  if (lVar7 != 0) {
    FUN_07ce67f8();
  }
  FUN_07cf0698();
  if ((unaff_x20 & 1) == 0) {
    lVar7 = unaff_x19[6];
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar9 = *(long **)(lVar7 + 0x20);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar6 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
    if (iVar6 == 4) {
      uVar12 = FUN_07cd0a60(0);
      uVar13 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar12,uVar13);
    }
    lVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar16 = *(long *)(lVar7 + 0x40);
    lVar7 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07ceb6c4(lVar16,*(undefined8 *)(lVar7 + 0x90));
  }
  else {
    lVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar16 = *(long *)(lVar7 + 0x40);
    lVar7 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07ceb504(lVar16,*(undefined8 *)(lVar7 + 0x90),0);
  }
  FUN_07cf0b44();
  if ((unaff_x20 & 1) != 0) {
    FUN_07cef2bc();
    lVar7 = (**(code **)(*unaff_x19 + 0x198))();
    if (lVar7 != 0) {
      lVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
      lVar16 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar7 == lVar16) {
        lVar7 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar9 = *(long **)(lVar7 + 0x38);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        puVar5 = PTR_DAT_092e1958;
        puVar4 = PTR_DAT_092860c8;
        do {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar9;
          lVar7 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar7) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_07cefc28;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_040b1e00(plVar9,lVar7,0);
LAB_07cefc28:
          uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          puVar3 = PTR_DAT_092860c0;
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_040b4e00(plVar9,*(undefined8 *)PTR_DAT_092860c0);
            if (plVar9 == (long *)0x0) goto LAB_07cefd88;
            lVar7 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 == 0) goto LAB_07cefd34;
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_07cefd1c;
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar9;
          lVar7 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar7) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_07cefc90;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_040b1e00(plVar9,lVar7,1);
LAB_07cefc90:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0();
          }
          FUN_07cf0bb0();
        } while( true );
      }
      lVar7 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar9 = *(long **)(lVar7 + 0x38);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
      puVar5 = PTR_DAT_092e1958;
      puVar4 = PTR_DAT_092860c8;
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar16 = *plVar9;
        lVar7 = *(long *)puVar4;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_07cefa44;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00(plVar9,lVar7,0);
LAB_07cefa44:
        uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar3 = PTR_DAT_092860c0;
        if ((uVar8 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_040b4e00(plVar9,*(undefined8 *)PTR_DAT_092860c0);
          if (plVar9 == (long *)0x0) break;
          lVar7 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_07cefb80;
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_07cefb68;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar16 = *plVar9;
        lVar7 = *(long *)puVar4;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_07cefaac;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00(plVar9,lVar7,1);
LAB_07cefaac:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0();
        }
        FUN_07cf60bc();
      } while( true );
    }
    goto LAB_07cefe30;
  }
  lVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6ce8(lVar7,*(int *)(lVar7 + 0x50) + -1,0);
  goto LAB_07cefe54;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_07cefd1c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07cefd7c;
    }
  }
LAB_07cefd34:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar3,0);
LAB_07cefd7c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_07cefd88:
  lVar7 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar7 + 0x20) != 0) {
    lVar7 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar12 = *(undefined8 *)(lVar7 + 0x90);
    lVar7 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x40);
    lVar7 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar6 = FUN_074e37dc(uVar12,uVar13,1,*(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x60),0);
    if (iVar6 == 0) {
      if (unaff_x19[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar12 = FUN_07cd1cc4(*(undefined8 *)(unaff_x19[2] + 0x40),0);
      uVar13 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar12,uVar13);
    }
  }
  lVar7 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 *)(lVar7 + 0xb0) = 0;
  goto LAB_07cefe30;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_07cf0138:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07cf016c;
    }
  }
LAB_07cf0150:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar3,0);
LAB_07cf016c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_07cf0178:
  if (*(char *)((long)unaff_x19 + 0x7a) != '\0') {
    lVar7 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar7 + 0x98) != 0) {
      lVar7 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(lVar7 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(*(long *)(lVar7 + 0x98) + 0x10) == 0) {
        lVar7 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar12 = FUN_07cd0aa0(*(undefined8 *)(lVar7 + 0x90),0);
        uVar13 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar12,uVar13);
      }
    }
  }
  lVar7 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(lVar7 + 0x98) = 0;
  thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x98),0);
  goto System_Xml_HtmlEncodedRawTextWriterIndent__WriteEndElement;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_07cefb68:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07cefd50;
    }
  }
LAB_07cefb80:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar3,0);
LAB_07cefd50:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_07cefe30:
  lVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6ce8(lVar7,*(int *)(lVar7 + 0x50) + 1,0);
LAB_07cefe54:
  *(undefined1 *)(unaff_x19 + 0xf) = unaff_w24;
  lVar7 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_07cb6d48(lVar7,0);
  if ((unaff_x20 & 1) != 0) {
    lVar7 = (**(code **)(*unaff_x19 + 0x188))();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar12 = FUN_07cb02a0(lVar7,0);
    uVar8 = FUN_074e5d94(uVar12,0);
    if ((uVar8 & 1) != 0) {
      lVar7 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar6 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar7,0);
      if (1 < iVar6) {
LAB_07ceff38:
        lVar7 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar9 = (long *)FUN_07cb5de8(lVar7,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        puVar5 = PTR_DAT_092ff190;
        puVar4 = PTR_DAT_092860c8;
        lVar7 = 0;
        do {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar9;
          lVar16 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar16) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_07ceffe0;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_040b1e00(plVar9,lVar16,0);
LAB_07ceffe0:
          uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          puVar3 = PTR_DAT_092860c0;
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_040b4e00(plVar9,*(undefined8 *)PTR_DAT_092860c0);
            if (plVar9 == (long *)0x0) goto LAB_07cf0178;
            lVar7 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 == 0) goto LAB_07cf0150;
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_07cf0138;
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar9;
          lVar16 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar16) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_07cf0048;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_040b1e00(plVar9,lVar16,1);
LAB_07cf0048:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar11;
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(lVar16 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar11);
          }
          uVar8 = (**(code **)(lVar16 + 0x1d8))(plVar11,*(undefined8 *)(lVar16 + 0x1e0));
          if ((uVar8 & 1) != 0) {
            pcVar1 = *(code **)(*plVar11 + 0x1b8);
            if (lVar7 == 0) {
              lVar7 = (*pcVar1)(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar7 = FUN_07cb02a0(lVar7,0);
            }
            else {
              lVar16 = (*pcVar1)(plVar11);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar12 = FUN_07cb02a0(lVar16,0);
              iVar6 = FUN_074e345c(lVar7,uVar12,4,0);
              if (iVar6 != 0) {
                *(undefined1 *)(unaff_x19 + 0xf) = 0;
                lVar7 = (**(code **)(*unaff_x19 + 0x188))();
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar12 = FUN_07cd0c04(*(undefined8 *)(lVar7 + 0x90),0);
                uVar13 = thunk_FUN_040dedf8(PTR_DAT_09300738);
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar12,uVar13);
              }
            }
          }
        } while( true );
      }
      lVar7 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar6 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar7,0);
      if (0 < iVar6) {
        lVar7 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar9 = *(long **)(*(long *)(lVar7 + 0x20) + 0x30);
        uVar12 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar12,uVar12);
        }
        uVar8 = (**(code **)(*plVar9 + 0x248))(plVar9,uVar12,*(undefined8 *)(*plVar9 + 0x250));
        if ((uVar8 & 1) == 0) goto LAB_07ceff38;
      }
    }
  }
System_Xml_HtmlEncodedRawTextWriterIndent__WriteEndElement:
  lVar7 = *unaff_x23;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar7 = *unaff_x23;
  }
  if (**(long **)(lVar7 + 0xb8) != 0) {
    FUN_0760fa08(**(long **)(lVar7 + 0xb8),3,*in_stack_00000028,0);
    if (in_stack_00000020 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


