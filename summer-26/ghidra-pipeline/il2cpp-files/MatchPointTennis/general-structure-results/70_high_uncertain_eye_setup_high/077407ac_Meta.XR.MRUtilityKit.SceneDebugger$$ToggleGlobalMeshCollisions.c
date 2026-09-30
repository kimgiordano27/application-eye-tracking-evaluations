/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ToggleGlobalMeshCollisions
ENTRY_POINT: 077407ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SceneDebugger__ToggleGlobalMeshCollisions(undefined8 *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *unaff_x19;
  int unaff_w20;
  long *plVar15;
  ulong unaff_x23;
  uint unaff_w24;
  long *unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  ulong unaff_x29;
  ulong in_stack_00000030;
  ulong in_stack_00000040;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000060;
  ulong in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined8 in_stack_00000118;
  long *in_stack_00000128;
  byte in_stack_00000198;
  byte in_stack_000001a0;
  byte in_stack_000001a8;
  byte in_stack_000001b0;
  long in_stack_000001d8;
  
  uVar8 = (*(code *)*param_1)();
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31d00,0);
  }
  plVar15 = in_stack_00000128;
  if ((in_stack_00000040 & 0x100000000) != 0) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_0774086c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,2);
LAB_0774086c:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    plVar15 = in_stack_00000128;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31d10,0);
      plVar15 = in_stack_00000128;
    }
  }
  in_stack_00000128 = plVar15;
  if ((unaff_x27 & 1) != 0) {
    if (plVar15 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *plVar15;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_07740918;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f30ab8,8);
LAB_07740918:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31d28,0);
    }
  }
  if (((unaff_x29 & 1) != 0) &&
     (uVar8 = FUN_0775dc68(&stack0x00000128,0), plVar15 = in_stack_00000128, (uVar8 & 1) == 0)) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
          goto LAB_077409ec;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,0x16);
LAB_077409ec:
    in_stack_000000b0 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    in_stack_000000a0 = *(undefined8 *)PTR_DAT_09f31c68;
    in_stack_000000a8 = 0xffffffffffffffff;
    uVar10 = FUN_07a742b0(&stack0x000000a0,0);
    uVar10 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c88,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c6b48(uVar10,0);
  }
  plVar15 = in_stack_00000128;
  if ((in_stack_00000078 & 0x100000000) != 0) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
          goto LAB_07740ad0;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,10);
LAB_07740ad0:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31c90,0);
    }
  }
  plVar15 = in_stack_00000128;
  if ((in_stack_00000040 & 1) != 0) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
          goto LAB_07740b7c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,0xc);
LAB_07740b7c:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31c80,0);
    }
  }
  plVar15 = in_stack_00000128;
  if ((in_stack_00000198 & 1) != 0) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_07740c28;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,0xe);
LAB_07740c28:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31ce0,0);
    }
  }
  plVar15 = in_stack_00000128;
  if ((in_stack_000001a0 & 1) != 0) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x10) * 0x10 + 0x138);
          goto LAB_07740cd4;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,0x10);
LAB_07740cd4:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31c98,0);
    }
  }
  plVar15 = in_stack_00000128;
  if ((in_stack_000001a8 & 1) != 0) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x12) * 0x10 + 0x138);
          goto LAB_07740d80;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,0x12);
LAB_07740d80:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31cd0,0);
    }
  }
  plVar15 = in_stack_00000128;
  if ((in_stack_000001b0 & 1) != 0) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
          goto LAB_07740e2c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,0x14);
LAB_07740e2c:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31cb0,0);
    }
  }
  if ((unaff_x23 & 1) != 0) {
    plVar15 = (long *)unaff_x19[0x3a];
    if (plVar15 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *plVar15;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
          goto LAB_07740ed8;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f312c0,0xc);
LAB_07740ed8:
    (*(code *)*puVar9)(plVar15,puVar9[1]);
  }
  plVar15 = in_stack_00000128;
  puVar4 = PTR_DAT_09f30ab8;
  if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
  lVar12 = *in_stack_00000128;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x2a) * 0x10 + 0x138);
        goto LAB_07740f44;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_07740f44:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
  if (unaff_x26 == (long *)0x0) goto LAB_07741c30;
  lVar12 = *unaff_x26;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
        goto LAB_07740fb4;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac();
LAB_07740fb4:
  (*(code *)*puVar9)();
  lVar12 = *unaff_x26;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_07741044;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac();
LAB_07741044:
  (*(code *)*puVar9)();
  uVar6 = uStack0000000000000110;
  uVar11 = CONCAT44(uStack000000000000010c,uStack0000000000000108);
  uVar10 = CONCAT44(uStack0000000000000104,uStack0000000000000100);
  lVar12 = *unaff_x26;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
        goto LAB_077410bc;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac();
LAB_077410bc:
  in_stack_000000b0 = uVar6;
  in_stack_000000a0 = uVar10;
  in_stack_000000a8 = uVar11;
  (*(code *)*puVar9)();
  puVar3 = PTR_DAT_09f1f008;
  lVar12 = *unaff_x26;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f1f008) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0774113c;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac();
LAB_0774113c:
  (*(code *)*puVar9)();
  if ((unaff_w24 & 1) != 0) {
    if ((in_stack_00000050 == (long *)0x0) ||
       (lVar12 = FUN_095258d0(in_stack_00000050,0), lVar12 == 0)) goto LAB_07741c30;
    FUN_09539e3c(uStack0000000000000104,uStack0000000000000108,uStack000000000000010c,lVar12,0);
  }
  if (unaff_w20 != 0) {
    uVar10 = (**(code **)(*unaff_x19 + 0x498))();
    uVar11 = (**(code **)(*unaff_x19 + 0x4d8))();
    FUN_07730994(uVar10,uVar11,in_stack_00000118,uStack0000000000000114,0);
  }
  plVar15 = in_stack_00000128;
  if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
  lVar12 = *in_stack_00000128;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
        goto LAB_0774121c;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x24);
LAB_0774121c:
  iVar5 = (*(code *)*puVar9)(plVar15,puVar9[1]);
  plVar15 = in_stack_00000128;
  if (iVar5 == 1) {
LAB_077412ec:
    plVar15 = in_stack_00000128;
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
          goto LAB_07741344;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x24);
LAB_07741344:
    iVar5 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    plVar15 = in_stack_00000128;
    if (iVar5 == 1) {
      if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
      lVar12 = *in_stack_00000128;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
            goto LAB_077413b0;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x16);
LAB_077413b0:
      iVar5 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      bVar2 = false;
      if ((unaff_w28 < 2) || (iVar5 != 3)) goto LAB_0774150c;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c33b0(*(undefined8 *)PTR_DAT_09f31cc8,0);
    }
    bVar2 = false;
  }
  else {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
          goto LAB_07741288;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x16);
LAB_07741288:
    iVar5 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    lVar12 = in_stack_000001d8;
    plVar15 = in_stack_00000128;
    if (iVar5 != 3) goto LAB_077412ec;
    if (in_stack_000001d8 == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31d30,0);
    }
    else {
      if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
      lVar13 = *in_stack_00000128;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x18) * 0x10 + 0x138);
            goto LAB_07741444;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x18);
LAB_07741444:
      uVar10 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      plVar15 = in_stack_00000128;
      if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
      lVar13 = *in_stack_00000128;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x1a) * 0x10 + 0x138);
            goto LAB_077414ac;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x1a);
LAB_077414ac:
      uVar11 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      (**(code **)(lVar12 + 0x18))
                (uVar10,uVar11,*(undefined8 *)(lVar12 + 0x40),in_stack_00000070,
                 *(undefined8 *)(lVar12 + 0x28));
      if (4 < unaff_w28) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c652c(*(undefined8 *)PTR_DAT_09f31ca0,0);
      }
    }
    bVar2 = true;
  }
LAB_0774150c:
  plVar15 = in_stack_00000128;
  if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
  lVar12 = *in_stack_00000128;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
        goto LAB_07741564;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x24);
LAB_07741564:
  iVar5 = (*(code *)*puVar9)(plVar15,puVar9[1]);
  plVar15 = in_stack_00000128;
  if (iVar5 != 1) {
    if (in_stack_00000128 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
          goto LAB_077415d0;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x16);
LAB_077415d0:
    iVar5 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if (!bVar2 && iVar5 == 3) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31d08,0);
    }
  }
  if ((unaff_x23 & 1) != 0) {
    plVar15 = (long *)unaff_x19[0x3a];
    if (plVar15 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *plVar15;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
          goto LAB_0774167c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f312c0,0xd);
LAB_0774167c:
    (*(code *)*puVar9)(plVar15);
    plVar15 = (long *)unaff_x19[0x3a];
    if (plVar15 == (long *)0x0) goto LAB_07741c30;
    lVar12 = *plVar15;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_077416e8;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar15,*(long *)puVar3,0);
LAB_077416e8:
    (*(code *)*puVar9)(plVar15,puVar9[1]);
    unaff_x19[0x3a] = 0;
    thunk_FUN_044bb4b4(unaff_x19 + 0x3a,0);
  }
  if ((in_stack_00000030 & 0x100000000) != 0) {
    if ((unaff_x19[0x3b] == 0) ||
       (FUN_07732224(unaff_x19[0x3b],0), plVar15 = in_stack_00000128,
       in_stack_00000128 == (long *)0x0)) goto LAB_07741c30;
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x28) * 0x10 + 0x138);
          goto LAB_07741778;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x28);
LAB_07741778:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if (unaff_x19[0x38] == 0) goto LAB_07741c30;
    lVar12 = unaff_x19[0x3b];
    uVar6 = FUN_094f3ae4(unaff_x19[0x38],0);
    if (lVar12 == 0) goto LAB_07741c30;
    plVar15 = unaff_x19 + 0x3b;
    if ((uVar8 & 1) == 0) {
      FUN_07731814(lVar12,uVar6,0);
    }
    else {
      FUN_077325a4();
    }
    if (*plVar15 == 0) goto LAB_07741c30;
    FUN_07726788(*plVar15,0);
    *plVar15 = 0;
    thunk_FUN_044bb4b4(plVar15,0);
  }
  if (((in_stack_00000058 & 0x100000000) != 0) || ((in_stack_00000068 & 0x100000000) != 0)) {
    if (4 < unaff_w28) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(*(undefined8 *)PTR_DAT_09f31cf8,0);
    }
    if (in_stack_00000070 == 0) goto LAB_07741c30;
    FUN_094fb008(in_stack_00000070,0);
  }
  plVar15 = in_stack_00000128;
  if (in_stack_00000128 != (long *)0x0) {
    lVar12 = *in_stack_00000128;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x1c) * 0x10 + 0x138);
          goto LAB_0774188c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x1c);
LAB_0774188c:
    uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar8 = FUN_094bbcfc(0);
      if ((uVar8 & 1) == 0) {
        FUN_0771fecc(in_stack_00000070,0);
      }
    }
    FUN_0772fb0c();
    plVar15 = in_stack_00000128;
    if (in_stack_00000128 != (long *)0x0) {
      lVar12 = *in_stack_00000128;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
            goto LAB_07741934;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)puVar4,0x24);
LAB_07741934:
      iVar5 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      if (iVar5 == 1) {
        if (unaff_x19[0x38] == 0) goto LAB_07741c30;
        iVar5 = FUN_094f3ae4(unaff_x19[0x38],0);
        if (iVar5 == 0) {
          if (3 < unaff_w28) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c652c(*(undefined8 *)PTR_DAT_09f31c70,0);
          }
          if (in_stack_00000050 == (long *)0x0) goto LAB_07741c30;
          FUN_094da31c(in_stack_00000050,0,0);
        }
        else {
          if (in_stack_00000050 == (long *)0x0) goto LAB_07741c30;
          FUN_094da31c(in_stack_00000050,1,0);
          bVar1 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
          if ((*(byte *)(*in_stack_00000050 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*in_stack_00000050 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_09f31428)) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(in_stack_00000050);
          }
          uVar7 = FUN_094ed840(in_stack_00000050,0);
          FUN_094ed8f4(in_stack_00000050,1,0);
          FUN_094ed8f4(in_stack_00000050,uVar7 & 1,0);
          FUN_094edf40(in_stack_00000050,0,0);
          FUN_094edf40(in_stack_00000050,in_stack_00000070,0);
          FUN_094eddac(in_stack_00000050,unaff_x19[0x33],0);
          if (3 < unaff_w28) {
            if (unaff_x19[0x33] == 0) goto LAB_07741c30;
            in_stack_000000f8._4_4_ = (undefined4)*(undefined8 *)(unaff_x19[0x33] + 0x18);
            uVar10 = FUN_07a3b850((long)&stack0x000000f8 + 4,0);
            uVar10 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31ce8,uVar10,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar10,0);
          }
          FUN_07714ef8(unaff_x19[0x1f],in_stack_00000050,0);
        }
      }
      unaff_x19[0x3a] = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0x3a,0);
      if (3 < unaff_w28) {
        if (in_stack_00000060 == 0) goto LAB_07741c30;
        in_stack_000000f0 = FUN_087dad08(in_stack_00000060,0);
        uVar10 = FUN_07a3c8f0(&stack0x000000f0,0);
        if (in_stack_00000070 == 0) goto LAB_07741c30;
        in_stack_000000f8._4_4_ = FUN_094f3ae4(in_stack_00000070,0);
        uVar11 = FUN_07a3b850((long)&stack0x000000f8 + 4,0);
        uVar10 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31d20,uVar10,*(undefined8 *)PTR_DAT_09f31ca8
                              ,uVar11,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c652c(uVar10,0);
      }
      plVar15 = in_stack_00000128;
      *(undefined4 *)(unaff_x19 + 2) = 0;
      if (in_stack_00000128 != (long *)0x0) {
        lVar12 = *in_stack_00000128;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x22) * 0x10 + 0x138);
              goto LAB_07741be4;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000128,*(long *)PTR_DAT_09f30ab8,0x22);
LAB_07741be4:
        uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
        if ((uVar8 & 1) != 0) {
          (**(code **)(*unaff_x19 + 0x7b8))();
        }
        return 1;
      }
    }
  }
LAB_07741c30:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


