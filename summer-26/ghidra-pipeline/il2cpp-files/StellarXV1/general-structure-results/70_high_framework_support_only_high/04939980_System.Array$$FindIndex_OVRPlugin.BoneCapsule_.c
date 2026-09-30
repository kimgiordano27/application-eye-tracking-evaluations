/*
FUNCTION_NAME: System.Array$$FindIndex<OVRPlugin.BoneCapsule>
ENTRY_POINT: 04939980
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


void System_Array__FindIndex<OVRPlugin_BoneCapsule>(ulong param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
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
  
  if ((param_1 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_049399d4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_049399d4:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = FUN_048bfa68();
    uVar8 = FUN_04931960(uVar8,*(undefined8 *)PTR_DAT_092a77b0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4f40;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939a6c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939a6c:
    (*(code *)*puVar6)(plVar7,uVar17,uVar8,puVar6[1]);
  }
  uVar15 = FUN_048bfb60();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939ae0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939ae0:
    plVar7 = (long *)(*(code *)*puVar6)();
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x108);
    FUN_06015574(&stack0x00000028,*(undefined8 *)PTR_DAT_0928f1b8);
    uVar8 = FUN_049318b0();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4f50;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939b7c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939b7c:
    (*(code *)*puVar6)(plVar7,uVar17,uVar8,puVar6[1]);
  }
  puVar2 = PTR_DAT_092af568;
  FUN_048bfb9c();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar2);
  }
  FUN_0485d408();
  uVar15 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>__AwaitUnsafeOnCompleted<TaskAwaiter<object>,_BuiltInRepository_<Get>d__2>
                     ();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939c2c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939c2c:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = *(undefined8 *)(unaff_x19 + 0x118);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar12 = FUN_047933f4(uVar8,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b4fc0;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939cfc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939cfc:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048bfc98();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939d70;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939d70:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = *(undefined8 *)(unaff_x19 + 0x120);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar12 = FUN_047933f4(uVar8,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b4fa0;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939e40;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939e40:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048bfda8();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939eb4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939eb4:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = FUN_048bfcf8();
    uVar8 = FUN_04931960(uVar8,*(undefined8 *)PTR_DAT_092a77b0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b5010;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939f4c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_04939f4c:
    (*(code *)*puVar6)(plVar7,uVar17,uVar8,puVar6[1]);
  }
  uVar15 = FUN_048bfdf4();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_04939fc0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_04939fc0:
    plVar7 = (long *)(*(code *)*puVar6)();
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x138);
    FUN_06015574(&stack0x00000028,*(undefined8 *)PTR_DAT_0928f1b8);
    uVar8 = FUN_049318b0();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4f58;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a05c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a05c:
    (*(code *)*puVar6)(plVar7,uVar17,uVar8,puVar6[1]);
  }
  uVar15 = FUN_048bfe48();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a0d0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a0d0:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar12 = FUN_047933f4(uVar8,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b5048;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a1a0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a1a0:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048bfec0();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a214;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a214:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar12 = FUN_047933f4(uVar8,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b5040;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a2e4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a2e4:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048bff38();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a358;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a358:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar12 = *(long *)(unaff_x19 + 0x150);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b5008;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a3fc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a3fc:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048bff70();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a470;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a470:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = *(undefined8 *)(unaff_x19 + 0x158);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar12 = FUN_047933f4(uVar8,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b4f78;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a540;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a540:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048c0054();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a5b4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a5b4:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = *(undefined8 *)(unaff_x19 + 0x160);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar12 = FUN_047933f4(uVar8,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b5018;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a684;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a684:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048c0138();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a6f8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a6f8:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar12 = *(long *)(unaff_x19 + 0x168);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b4fc8;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a79c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a79c:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048c0170();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a810;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a810:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar12 = *(long *)(unaff_x19 + 0x170);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b4ff8;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a8b4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a8b4:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048c01a8();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a928;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493a928:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar8 = *(undefined8 *)(unaff_x19 + 0x178);
    if (*(int *)(*(long *)PTR_DAT_092a53c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092a53c0);
    }
    lVar12 = FUN_047933f4(uVar8,0);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b4f48;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493a9f8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493a9f8:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048c0218();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493aa6c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493aa6c:
    plVar7 = (long *)(*(code *)*puVar6)();
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x180);
    FUN_06015574(&stack0x00000028,*(undefined8 *)PTR_DAT_0928f1b8);
    uVar8 = FUN_049318b0();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4f70;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493ab08;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493ab08:
    (*(code *)*puVar6)(plVar7,uVar17,uVar8,puVar6[1]);
  }
  uVar15 = FUN_048c026c();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493ab7c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493ab7c:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar12 = *(long *)(unaff_x19 + 0x188);
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b5030;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493ac20;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493ac20:
    (*(code *)*puVar6)(plVar7,uVar8,lVar13,puVar6[1]);
  }
  uVar15 = FUN_048c0330();
  if ((uVar15 & 1) != 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493ac94;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493ac94:
    plVar7 = (long *)(*(code *)*puVar6)();
    uVar5 = FUN_048c028c();
    uVar8 = FUN_04931a7c(uVar5 & 1);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_092b4fd8;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493ad24;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493ad24:
    (*(code *)*puVar6)(plVar7,uVar17,uVar8,puVar6[1]);
  }
  if (*(long *)(unaff_x19 + 0x198) == 0) {
    uVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092872c8);
    FUN_07624adc(uVar8,0);
  }
  lVar12 = *unaff_x20;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0x19) * 0x10 + 0x138);
        goto LAB_0493adac;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493adac:
  puVar2 = PTR_DAT_0928de30;
  (*(code *)*puVar6)();
  uVar15 = FUN_048bf7b4();
  if ((uVar15 & 1) != 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xb8);
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xb0);
    in_stack_00000020 = FUN_06015cb8(&stack0x00000010,*(undefined8 *)PTR_DAT_092a8af0);
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493ae84;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493ae84:
    plVar7 = (long *)(*(code *)*puVar6)();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar2);
    }
    uVar8 = FUN_076060c0(0);
    uVar8 = FUN_07678018(&stack0x00000020,uVar8,0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar13 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    lVar12 = *(long *)PTR_DAT_092a5ae8;
    uVar17 = *(undefined8 *)PTR_DAT_092a9788;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) goto LAB_0493b150;
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
LAB_0493b140:
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,lVar12,1);
    goto LAB_0493b160;
  }
  lVar12 = *unaff_x20;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0x18) * 0x10 + 0x138);
        goto LAB_0493af20;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493af20:
  plVar7 = (long *)(*(code *)*puVar6)();
  if (plVar7 == (long *)0x0) goto LAB_0493b500;
  uVar9 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
  lVar12 = *unaff_x20;
  uVar1 = *(ushort *)(lVar12 + 0x12e);
  uVar15 = (ulong)uVar1;
  if ((uVar9 & 1) != 0) {
    if (uVar1 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493afc4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493afc4:
    plVar7 = (long *)(*(code *)*puVar6)();
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0x18) * 0x10 + 0x138);
          goto LAB_0493b0a8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b0a8:
    plVar10 = (long *)(*(code *)*puVar6)();
    if (plVar10 == (long *)0x0) goto LAB_0493b500;
    in_stack_00000008 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar2);
    }
    uVar8 = FUN_076060c0(0);
    uVar8 = FUN_07678018(&stack0x00000008,uVar8,0);
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar13 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    lVar12 = *(long *)PTR_DAT_092a5ae8;
    uVar17 = *(undefined8 *)PTR_DAT_092a9788;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) goto LAB_0493b150;
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    goto LAB_0493b140;
  }
  if (uVar1 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
        goto LAB_0493b024;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b024:
  plVar7 = (long *)(*(code *)*puVar6)();
  if (plVar7 == (long *)0x0) goto LAB_0493b500;
  lVar12 = *plVar7;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  uVar17 = *(undefined8 *)PTR_DAT_092ab798;
  uVar8 = *(undefined8 *)PTR_DAT_092ab7a0;
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
        goto LAB_0493b184;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493b184:
  pcVar14 = (code *)*puVar6;
  uVar11 = puVar6[1];
  goto LAB_0493b194;
LAB_0493b150:
  puVar6 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
LAB_0493b160:
  pcVar14 = (code *)*puVar6;
  uVar11 = puVar6[1];
LAB_0493b194:
  (*pcVar14)(plVar7,uVar17,uVar8,uVar11);
  in_stack_00000000._4_2_ = 0;
  FUN_0600dc38((long)&stack0x00000000 + 4,1,*(undefined8 *)PTR_DAT_092872d8);
  lVar12 = *unaff_x20;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x24) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0x2a) * 0x10 + 0x138);
        goto LAB_0493b208;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b208:
  (*(code *)*puVar6)();
  uVar15 = FUN_048bf830();
  if ((uVar15 & 1) == 0) {
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493b278;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b278:
    plVar7 = (long *)(*(code *)*puVar6)();
    if (plVar7 == (long *)0x0) goto LAB_0493b500;
    lVar12 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092b5038;
    uVar17 = *(undefined8 *)PTR_DAT_092b4fd0;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092a5ae8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0493b2fc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092a5ae8,1);
LAB_0493b2fc:
    (*(code *)*puVar6)(plVar7,uVar8,uVar17,puVar6[1]);
  }
  puVar4 = PTR_DAT_092b4f28;
  puVar3 = PTR_DAT_092b4f18;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_092ac5c0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar8 = FUN_048194b0(uVar8,0);
  lVar12 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
  FUN_05ed3410(lVar12,uVar8,*(undefined8 *)puVar3);
  if (lVar12 != 0) {
    uVar8 = *(undefined8 *)(lVar12 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_092abe30 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar15 = FUN_04809e98(uVar8,0);
    if ((uVar15 & 1) == 0) {
      thunk_FUN_040dedf8(PTR_DAT_092a0a40);
      uVar8 = thunk_FUN_040b4efc();
      uVar17 = thunk_FUN_040dedf8(PTR_DAT_092b5088);
      FUN_0485a4ec(uVar8,uVar17,0);
      uVar17 = thunk_FUN_040dedf8(PTR_DAT_092b5090);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar8,uVar17);
    }
    FUN_074d875c(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)PTR_DAT_09287410,0);
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0x24) * 0x10 + 0x138);
          goto LAB_0493b404;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b404:
    puVar3 = PTR_DAT_092b4f80;
    (*(code *)*puVar6)();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar2 = PTR_DAT_092a8170;
    uVar8 = FUN_076060c0(0);
    lVar12 = *(long *)puVar3;
    if ((*(byte *)(unaff_x26 + 0x3c7) & 1) == 0) {
      FUN_04077588(PTR_DAT_09285978);
      *(undefined1 *)(unaff_x26 + 0x3c7) = 1;
    }
    lVar13 = *unaff_x25;
    if (lVar12 != 0) {
      lVar13 = lVar12;
    }
    FUN_074e75d4(uVar8,*(undefined8 *)puVar2,lVar13,0);
    lVar12 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0xe) * 0x10 + 0x138);
          goto LAB_0493b4d0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0493b4d0:
    (*(code *)*puVar6)();
    return;
  }
LAB_0493b500:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


