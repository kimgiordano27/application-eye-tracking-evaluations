/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 04938540
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_Qpl_Annotation>(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar15 = *(long *)(unaff_x19 + 0x48);
  if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
    FUN_04077588(PTR_DAT_09285978);
    *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
  }
  lVar11 = *unaff_x25;
  if (lVar15 != 0) {
    lVar11 = lVar15;
  }
  if (param_1 == (long *)0x0) goto LAB_0493b500;
  lVar15 = *param_1;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  uVar16 = *(undefined8 *)PTR_DAT_092b4fe0;
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_049385d8;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(param_1,*(long *)PTR_DAT_092a5ae8,1);
LAB_049385d8:
  (*(code *)*puVar6)(param_1,uVar16,lVar11,puVar6[1]);
  uVar13 = FUN_048bf5a4();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493864c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493864c:
    plVar7 = (long *)(*(code *)*puVar6)();
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x50);
    FUN_06015574(&stack0x00000028,*(undefined8 *)PTR_DAT_0928f1b8);
    uVar16 = FUN_049318b0();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4ff0;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_049386e8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_049386e8:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  uVar13 = FUN_048bf5f0();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493875c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493875c:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x58);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4f88;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938800;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04938800:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf620();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938874;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04938874:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x60);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4f98;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938918;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04938918:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf650();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493898c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493898c:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x68);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4f38;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938a30;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04938a30:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf670();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938aa4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04938aa4:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x70);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4f60;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938b48;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04938b48:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf6a0();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938bbc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04938bbc:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x78);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5000;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938c60;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04938c60:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf6c0();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938cd4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04938cd4:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x80);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5050;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938d78;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04938d78:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf6e0();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938dec;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04938dec:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x88);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4f90;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938e90;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04938e90:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf700();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto FUN_04938f04;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
FUN_04938f04:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x90);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4fa8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04938fa8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04938fa8:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf720();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493901c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493901c:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x98);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4fb0;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_049390c0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_049390c0:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf750();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939134;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939134:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0xa0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4f68;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_049391d8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_049391d8:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf780();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493924c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493924c:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0xa8);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4fe8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_049392f0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_049392f0:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf800();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939364;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939364:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0xc0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4fb8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939408;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939408:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf830();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493947c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493947c:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 200);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5038;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939520;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939520:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf8f4();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939594;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939594:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar5 = FUN_048bf850();
    uVar16 = FUN_04931a7c(uVar5 & 1);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b5060;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939624;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939624:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  uVar13 = FUN_048bf940();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939698;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939698:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0xd8);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5020;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493973c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493973c:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bf9fc();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_049397b0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_049397b0:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = FUN_048bf950();
    uVar16 = FUN_04931960(uVar16,*(undefined8 *)PTR_DAT_092a77b0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b5028;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939848;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939848:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  uVar13 = FUN_048bfa48();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_049398bc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_049398bc:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0xf0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5058;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939960;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939960:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bfb14();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_049399d4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_049399d4:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = FUN_048bfa68();
    uVar16 = FUN_04931960(uVar16,*(undefined8 *)PTR_DAT_092a77b0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4f40;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939a6c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939a6c:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  uVar13 = FUN_048bfb60();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939ae0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939ae0:
    plVar7 = (long *)(*(code *)*puVar6)();
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x108);
    FUN_06015574(&stack0x00000028,*(undefined8 *)PTR_DAT_0928f1b8);
    uVar16 = FUN_049318b0();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4f50;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939b7c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939b7c:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  puVar2 = PTR_DAT_092af568;
  FUN_048bfb9c();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar2);
  }
  FUN_0485d408();
  uVar13 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>__AwaitUnsafeOnCompleted<TaskAwaiter<object>,_BuiltInRepository_<Get>d__2>
                     ();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939c2c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939c2c:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = *(undefined8 *)(unaff_x19 + 0x118);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar15 = FUN_047933f4(uVar16,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4fc0;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939cfc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939cfc:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bfc98();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939d70;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939d70:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = *(undefined8 *)(unaff_x19 + 0x120);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar15 = FUN_047933f4(uVar16,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4fa0;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939e40;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939e40:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bfda8();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939eb4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939eb4:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = FUN_048bfcf8();
    uVar16 = FUN_04931960(uVar16,*(undefined8 *)PTR_DAT_092a77b0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b5010;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939f4c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939f4c:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  uVar13 = FUN_048bfdf4();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_04939fc0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939fc0:
    plVar7 = (long *)(*(code *)*puVar6)();
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x138);
    FUN_06015574(&stack0x00000028,*(undefined8 *)PTR_DAT_0928f1b8);
    uVar16 = FUN_049318b0();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4f58;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a05c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a05c:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  uVar13 = FUN_048bfe48();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a0d0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a0d0:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar15 = FUN_047933f4(uVar16,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5048;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a1a0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a1a0:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bfec0();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a214;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a214:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar15 = FUN_047933f4(uVar16,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5040;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a2e4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a2e4:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bff38();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a358;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a358:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x150);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5008;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a3fc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a3fc:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048bff70();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a470;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a470:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = *(undefined8 *)(unaff_x19 + 0x158);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar15 = FUN_047933f4(uVar16,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4f78;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a540;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a540:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048c0054();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a5b4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a5b4:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = *(undefined8 *)(unaff_x19 + 0x160);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar15 = FUN_047933f4(uVar16,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5018;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a684;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a684:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048c0138();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a6f8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a6f8:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x168);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4fc8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a79c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a79c:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048c0170();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a810;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a810:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x170);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4ff8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a8b4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a8b4:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048c01a8();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a928;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a928:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar16 = *(undefined8 *)(unaff_x19 + 0x178);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar15 = FUN_047933f4(uVar16,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b4f48;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493a9f8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a9f8:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048c0218();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493aa6c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493aa6c:
    plVar7 = (long *)(*(code *)*puVar6)();
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x180);
    FUN_06015574(&stack0x00000028,*(undefined8 *)PTR_DAT_0928f1b8);
    uVar16 = FUN_049318b0();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4f70;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493ab08;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493ab08:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  uVar13 = FUN_048c026c();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493ab7c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493ab7c:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *(long *)(unaff_x19 + 0x188);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5030;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493ac20;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493ac20:
    (*(code *)*puVar6)(plVar7,uVar16,lVar11,puVar6[1]);
  }
  uVar13 = FUN_048c0330();
  if ((uVar13 & 1) != 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493ac94;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493ac94:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar5 = FUN_048c028c();
    uVar16 = FUN_04931a7c(uVar5 & 1);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4fd8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493ad24;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493ad24:
    (*(code *)*puVar6)(plVar7,uVar17,uVar16,puVar6[1]);
  }
  if (*(long *)(unaff_x19 + 0x198) == 0) {
    uVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092872c8);
    FUN_07624adc(uVar16,0);
  }
  lVar15 = *unaff_x20;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
        goto LAB_0493adac;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493adac:
  puVar2 = PTR_DAT_0928de30;
  (*(code *)*puVar6)();
  uVar13 = FUN_048bf7b4();
  if ((uVar13 & 1) != 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xb8);
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xb0);
    in_stack_00000020 = FUN_06015cb8(&stack0x00000010,*(undefined8 *)PTR_DAT_092a8af0);
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493ae84;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493ae84:
    plVar7 = (long *)(*(code *)*puVar6)();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar2);
    }
    uVar16 = FUN_076060c0(0);
    uVar16 = FUN_07678018(&stack0x00000020,uVar16,0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    lVar15 = *(long *)PTR_DAT_092a5ae8;
    uVar17 = *(undefined8 *)PTR_DAT_092a9788;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar15) goto LAB_0493b150;
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
LAB_0493b140:
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,lVar15,1);
    goto LAB_0493b160;
  }
  lVar15 = *unaff_x20;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x18) * 0x10 + 0x138);
        goto LAB_0493af20;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493af20:
  plVar7 = (long *)(*(code *)*puVar6)();
  if (plVar7 == (long *)0x0) goto LAB_0493b500;
  uVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
  lVar15 = *unaff_x20;
  uVar1 = *(ushort *)(lVar15 + 0x12e);
  uVar13 = (ulong)uVar1;
  if ((uVar8 & 1) != 0) {
    if (uVar1 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493afc4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493afc4:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x18) * 0x10 + 0x138);
          goto LAB_0493b0a8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b0a8:
    plVar9 = (long *)(*(code *)*puVar6)();
    if (plVar9 == (long *)0x0) goto LAB_0493b500;
    in_stack_00000008 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar2);
    }
    uVar16 = FUN_076060c0(0);
    uVar16 = FUN_07678018(&stack0x00000008,uVar16,0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    lVar15 = *(long *)PTR_DAT_092a5ae8;
    uVar17 = *(undefined8 *)PTR_DAT_092a9788;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar15) goto LAB_0493b150;
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    goto LAB_0493b140;
  }
  if (uVar1 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_0493b024;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b024:
  plVar7 = (long *)(*(code *)*puVar6)();
  if (plVar7 == (long *)0x0) goto LAB_0493b500;
  lVar15 = *plVar7;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  uVar17 = *(undefined8 *)PTR_DAT_092ab798;
  uVar16 = *(undefined8 *)PTR_DAT_092ab7a0;
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_0493b184;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493b184:
  pcVar12 = (code *)*puVar6;
  uVar10 = puVar6[1];
LAB_0493b194:
  (*pcVar12)(plVar7,uVar17,uVar16,uVar10);
  in_stack_00000000._4_2_ = 0;
  FUN_0600dc38((long)&stack0x00000000 + 4,1,*(undefined8 *)PTR_DAT_092872d8);
  lVar15 = *unaff_x20;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x2a) * 0x10 + 0x138);
        goto LAB_0493b208;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b208:
  (*(code *)*puVar6)();
  uVar13 = FUN_048bf830();
  if ((uVar13 & 1) == 0) {
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493b278;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b278:
    plVar7 = (long *)(*(code *)*puVar6)();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar16 = *(undefined8 *)PTR_DAT_092b5038;
    uVar17 = *(undefined8 *)PTR_DAT_092b4fd0;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0493b2fc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493b2fc:
    (*(code *)*puVar6)(plVar7,uVar16,uVar17,puVar6[1]);
  }
  puVar4 = PTR_DAT_092b4f28;
  puVar3 = PTR_DAT_092b4f18;
  uVar16 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_092ac5c0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar16 = FUN_048194b0(uVar16,0);
  lVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
  FUN_05ed3410(lVar15,uVar16,*(undefined8 *)puVar3);
  if (lVar15 != 0) {
    uVar16 = *(undefined8 *)(lVar15 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_092abe30 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar13 = FUN_04809e98(uVar16,0);
    if ((uVar13 & 1) == 0) {
      thunk_FUN_040dedf8(PTR_DAT_092a0a40);
      uVar16 = thunk_FUN_040b4efc();
      uVar17 = thunk_FUN_040dedf8(PTR_DAT_092b5088);
      FUN_0485a4ec(uVar16,uVar17,0);
      uVar17 = thunk_FUN_040dedf8(PTR_DAT_092b5090);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar16,uVar17);
    }
    FUN_074d875c(*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)PTR_DAT_09287410,0);
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
          goto LAB_0493b404;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b404:
    puVar3 = PTR_DAT_092b4f80;
    (*(code *)*puVar6)();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar2 = PTR_DAT_092a8170;
    uVar16 = FUN_076060c0(0);
    lVar15 = *(long *)puVar3;
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar11 = *unaff_x25;
    if (lVar15 != 0) {
      lVar11 = lVar15;
    }
    FUN_074e75d4(uVar16,*(undefined8 *)puVar2,lVar11,0);
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_0493b4d0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b4d0:
    (*(code *)*puVar6)();
    return;
  }
LAB_0493b500:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_0493b150:
  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
LAB_0493b160:
  pcVar12 = (code *)*puVar6;
  uVar10 = puVar6[1];
  goto LAB_0493b194;
}


