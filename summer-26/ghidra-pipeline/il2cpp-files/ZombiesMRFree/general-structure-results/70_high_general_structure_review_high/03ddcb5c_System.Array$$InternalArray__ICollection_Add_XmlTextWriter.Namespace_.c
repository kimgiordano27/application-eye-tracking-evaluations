/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<XmlTextWriter.Namespace>
ENTRY_POINT: 03ddcb5c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Add<XmlTextWriter_Namespace>(void)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  FUN_05afde1c();
  if (*(int *)(*(long *)PTR_DAT_06f9a428 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f9a428);
  }
  uVar3 = FUN_0697dd2c(*(undefined8 *)(*unaff_x25 + 0xb8));
  lVar5 = in_stack_00000018;
  if ((uVar3 & 1) != 0) {
    lVar10 = *(long *)(*unaff_x23 + 0x18);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4(lVar10);
    }
    if (lVar5 == 0) goto LAB_03ddd4ac;
    lVar4 = thunk_FUN_03010710(lVar5,lVar10);
    if (lVar4 == 0) {
LAB_03ddd4b0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(lVar5,lVar10);
    }
    lVar10 = *(long *)(*unaff_x23 + 0x18);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4(lVar10);
    }
    lVar4 = thunk_FUN_03010710(lVar5,lVar10);
    if (lVar4 == 0) goto LAB_03ddd4b0;
    lVar5 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
    *unaff_x19 = lVar5;
    goto LAB_03ddd2b0;
  }
  uVar9 = *(undefined8 *)*unaff_x23;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar5 = FUN_05afde1c(uVar9,0);
  if (lVar5 == 0) goto LAB_03ddd4ac;
  uVar3 = FUN_05b092bc(lVar5,0);
  puVar8 = (undefined8 *)*unaff_x23;
  if ((uVar3 & 1) == 0) {
System_Array__InternalArray__ICollection_Add<c6_a>:
    lVar5 = puVar8[9];
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar10 = *(long *)(*unaff_x23 + 0x40);
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    lVar10 = *(long *)(*unaff_x23 + 0x58);
    cVar1 = *(char *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar10 = *(long *)(*unaff_x23 + 0x50);
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    cVar2 = *(char *)(*(long *)(lVar5 + 0xb8) + 8);
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
LAB_03ddcf8c:
        lVar5 = *(long *)(*unaff_x23 + 0x48);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar10 = *(long *)(*unaff_x23 + 0x68);
        lVar5 = *(long *)(lVar10 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar5 = *(long *)(lVar10 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 0xf) != '\0') {
          uVar9 = *unaff_x20;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar3 = FUN_03e11c68(uVar9);
          if ((uVar3 & 1) != 0) {
            return 1;
          }
        }
        lVar5 = *(long *)(*unaff_x23 + 0x48);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar10 = *(long *)(*unaff_x23 + 0x78);
        lVar5 = *(long *)(lVar10 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar5 = *(long *)(lVar10 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 6) != '\0') {
          uVar9 = *(undefined8 *)*unaff_x23;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar9 = FUN_05afde1c(uVar9,0);
          uVar6 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f80908,0);
          uVar3 = FUN_05b0716c(uVar9,uVar6,0);
          if ((uVar3 & 1) != 0) {
            uVar9 = ((undefined8 *)*unaff_x23)[1];
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar9 = FUN_05afde1c(uVar9,0);
            in_stack_00000008 = *unaff_x20;
            plVar7 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008)
            ;
            if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_06f6df20)) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe9884(plVar7);
            }
            lVar5 = FUN_05b22e6c(uVar9,plVar7,0);
            lVar10 = *(long *)(*unaff_x23 + 0x30);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_02feb2c4(lVar10);
            }
            if (lVar5 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = thunk_FUN_03010710(lVar5,lVar10);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe9884(lVar5,lVar10);
              }
            }
            *unaff_x19 = lVar4;
            lVar10 = *(long *)(*unaff_x23 + 0x30);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_02feb2c4(lVar10);
            }
            if ((lVar5 != 0) && (lVar4 = thunk_FUN_03010710(lVar5,lVar10), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe9884(lVar5,lVar10);
            }
            thunk_FUN_03048534();
            return 1;
          }
          uVar9 = *(undefined8 *)*unaff_x23;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar9 = FUN_05afde1c(uVar9,0);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*unaff_x25);
          }
          uVar3 = FUN_0697e274(uVar9,0);
          if ((uVar3 & 1) != 0) goto LAB_03ddccac;
        }
        uVar6 = *unaff_x20;
        in_stack_00000008 = uVar6;
        uVar9 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
        lVar5 = *(long *)(*unaff_x23 + 0x30);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4(lVar5);
        }
        lVar5 = thunk_FUN_03010710(uVar9,lVar5);
        if (lVar5 != 0) {
          in_stack_00000008 = uVar6;
          uVar9 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
          lVar5 = *(long *)(*unaff_x23 + 0x30);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02feb2c4(lVar5);
          }
          lVar10 = thunk_FUN_03010710(uVar9,lVar5);
          lVar4 = *(long *)(*unaff_x23 + 0x30);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02feb2c4(lVar4);
          }
          if (lVar10 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = thunk_FUN_03010710(lVar10,lVar4);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe9884(lVar10,lVar4);
            }
          }
          goto LAB_03ddccbc;
        }
        uVar9 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        plVar7 = (long *)FUN_05afde1c(uVar9,0);
        uVar9 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
        if (plVar7 == (long *)0x0) {
LAB_03ddd4ac:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar3 = (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x2c0));
        if ((uVar3 & 1) == 0) {
LAB_03ddce38:
          *unaff_x19 = 0;
          return 0;
        }
      }
      else {
        uVar9 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05afde1c(uVar9,0);
        uVar6 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
        uVar6 = FUN_05af18ac(uVar6,0);
        uVar3 = FUN_05b0716c(uVar9,uVar6,0);
        if ((uVar3 & 1) == 0) goto LAB_03ddcf8c;
      }
      in_stack_00000008 = *unaff_x20;
      lVar5 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
    }
    else {
      if (cVar2 != '\0') {
        uVar9 = *(undefined8 *)(*unaff_x23 + 8);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05afde1c(uVar9,0);
        uVar9 = FUN_05af18ac(uVar9,0);
        uVar6 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
        uVar6 = FUN_05af18ac(uVar6,0);
        uVar3 = FUN_05b07f44(uVar9,uVar6,0);
        if ((uVar3 & 1) != 0) goto LAB_03ddce38;
      }
      uVar9 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_05afde1c(uVar9,0);
      plVar7 = (long *)FUN_05af18ac(uVar9,0);
      if (plVar7 == (long *)0x0) goto LAB_03ddd4ac;
      uVar3 = (**(code **)(*plVar7 + 0x5a8))(plVar7,*(undefined8 *)(*plVar7 + 0x5b0));
      if ((uVar3 & 1) == 0) {
        in_stack_00000008 = *unaff_x20;
        uVar9 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
        if (*(int *)(*(long *)PTR_DAT_06f7a4f8 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f7a4f8);
        }
        lVar5 = FUN_05a6d944(uVar9,plVar7,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05b238cc(plVar7,0);
        in_stack_00000008 = *unaff_x20;
        uVar6 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
        if (*(int *)(*(long *)PTR_DAT_06f7a4f8 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f7a4f8);
        }
        uVar9 = FUN_05a6d944(uVar6,uVar9,0);
        lVar5 = FUN_05b23990(plVar7,uVar9,0);
      }
    }
    lVar10 = *(long *)(*unaff_x23 + 0x30);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4(lVar10);
    }
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_03010710(lVar5,lVar10);
      if (lVar4 == 0) goto LAB_03ddd2a0;
    }
    *unaff_x19 = lVar4;
    lVar10 = *(long *)(*unaff_x23 + 0x30);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4(lVar10);
    }
    if ((lVar5 != 0) && (lVar4 = thunk_FUN_03010710(lVar5,lVar10), lVar4 == 0)) {
LAB_03ddd2a0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(lVar5,lVar10);
    }
  }
  else {
    uVar9 = *puVar8;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar9 = FUN_05afde1c(uVar9,0);
    uVar6 = FUN_05afde1c(*(undefined8 *)(*unaff_x23 + 8),0);
    uVar3 = FUN_05b0716c(uVar9,uVar6,0);
    puVar8 = (undefined8 *)*unaff_x23;
    if ((uVar3 & 1) == 0) goto System_Array__InternalArray__ICollection_Add<c6_a>;
LAB_03ddccac:
    plVar7 = (long *)FUN_03e4cf34();
    lVar5 = *plVar7;
LAB_03ddccbc:
    *unaff_x19 = lVar5;
  }
LAB_03ddd2b0:
  thunk_FUN_03048534();
  return 1;
}


