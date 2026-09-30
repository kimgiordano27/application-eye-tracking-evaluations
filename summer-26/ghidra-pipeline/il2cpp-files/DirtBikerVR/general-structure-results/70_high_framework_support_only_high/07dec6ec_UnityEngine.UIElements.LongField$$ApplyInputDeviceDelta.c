/*
FUNCTION_NAME: UnityEngine.UIElements.LongField$$ApplyInputDeviceDelta
ENTRY_POINT: 07dec6ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_11;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


void UnityEngine_UIElements_LongField__ApplyInputDeviceDelta(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 in_w8;
  int *piVar12;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x24;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 uStack0000000000000110;
  undefined1 *puStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  undefined4 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined1 *puStack0000000000000158;
  undefined4 uStack0000000000000160;
  undefined8 uStack0000000000000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined4 uStack0000000000000180;
  undefined4 uStack0000000000000184;
  undefined4 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined1 *puStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001b0;
  undefined1 *puStack00000000000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001d0;
  undefined1 *puStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  undefined4 in_stack_00000268;
  undefined4 in_stack_0000026c;
  undefined4 in_stack_00000270;
  undefined4 in_stack_00000274;
  long in_stack_000002a8;
  
  *(undefined1 *)(unaff_x21 + 0x1de) = in_w8;
  puVar2 = PTR_DAT_08486738;
  uStack00000000000001b0 = 0;
  puStack00000000000001b8 = (undefined1 *)0x0;
  uStack00000000000001c0 = 0;
  puStack00000000000001d8 = (undefined1 *)0x0;
  uStack00000000000001d0 = 0;
  uStack00000000000001e8 = 0;
  uStack00000000000001e0 = 0;
  uStack0000000000000190 = 0;
  puStack0000000000000198 = (undefined1 *)0x0;
  uStack00000000000001a0 = 0;
  uStack0000000000000170 = 0;
  uStack0000000000000178 = 0;
  uStack000000000000017c = 0;
  uStack0000000000000188 = 0;
  uStack0000000000000180 = 0;
  uStack0000000000000184 = 0;
  uStack0000000000000150 = 0;
  puStack0000000000000158 = (undefined1 *)0x0;
  uStack0000000000000160 = 0;
  uStack0000000000000130 = 0;
  uStack0000000000000138 = 0;
  uStack000000000000013c = 0;
  uStack0000000000000148 = 0;
  uStack0000000000000140 = 0;
  uStack0000000000000144 = 0;
  uStack0000000000000110 = 0;
  puStack0000000000000118 = (undefined1 *)0x0;
  uStack0000000000000120 = 0;
  if (*(long *)(unaff_x20 + 0x20) == 0) {
LAB_07ded140:
    lVar8 = *(long *)(unaff_x24 + 0x28);
  }
  else {
    lVar8 = FUN_07e13e44(&stack0x00000238,0);
    if (lVar8 == 0) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07ea20f8(0);
    }
    else {
      FUN_07dfdfd8(lVar8,0);
      FUN_07dfdfd8(lVar8,0);
    }
    uVar13 = *(undefined8 *)(unaff_x20 + 0x120);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_07c9c218(uVar13,0,0);
    puVar2 = OVRPlugin_PoseStatef_TypeInfo;
    if ((uVar9 & 1) != 0) {
      lVar8 = *(long *)OVRPlugin_PoseStatef_TypeInfo;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar8 = *(long *)puVar2;
      }
      if (*(long *)(unaff_x20 + 0x128) != 0) {
        uVar14 = *(undefined8 *)(unaff_x20 + 0x120);
        lVar8 = **(long **)(lVar8 + 0xb8);
        uVar13 = FUN_07e2d9a0(*(long *)(unaff_x20 + 0x128),0);
        if (lVar8 != 0) {
          FUN_07eaf1d0(0x3f800000,lVar8,uVar14,uVar13,*(undefined8 *)(unaff_x20 + 0x130),0);
          FUN_07f6f240();
          goto LAB_07dec84c;
        }
      }
      goto LAB_07ded140;
    }
LAB_07dec84c:
    puVar6 = OVRPlugin_Posef_TypeInfo;
    puVar5 = OVRPlugin_OVRP_1_98_0_TypeInfo;
    puVar4 = OVRPlugin_OVRP_1_97_0_TypeInfo;
    puVar3 = OVRPlugin_OVRP_1_95_0_TypeInfo;
    puVar2 = PTR_DAT_08492790;
    if (*(long *)(unaff_x20 + 0x10) == 0) {
LAB_07ded148:
      lVar8 = *(long *)(unaff_x24 + 0x28);
    }
    else {
      FUN_04e9b100(&stack0x00000258,*(long *)(unaff_x20 + 0x10),
                   *(undefined8 *)OVRPlugin_Quatf_TypeInfo);
      puVar1 = &stack0x00000280;
      while (uVar9 = FUN_061dc36c(&stack0x00000280,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
        FUN_07f708b8();
      }
      FUN_061dc368(&stack0x00000280,*(undefined8 *)puVar3);
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        FUN_04e9de50(&stack0x00000258,*(long *)(unaff_x20 + 0x18),*(undefined8 *)puVar6);
        puVar1 = &stack0x00000210;
        while (uVar9 = FUN_061dc5b8(&stack0x00000210,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
          FUN_07f71834();
        }
        FUN_061dc5b4(&stack0x00000210,*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo);
      }
      uVar13 = 0;
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07ded148;
      plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0);
      if (plVar10 != (long *)0x0) {
        lVar8 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x2e) * 0x10 + 0x138);
              goto LAB_07dec9d0;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x2e);
LAB_07dec9d0:
        (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
        iVar7 = FUN_07e243d0(&stack0x000001f0,0);
        if (iVar7 != 1) {
          if ((*(long *)(unaff_x20 + 0x20) == 0) ||
             (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar10 == (long *)0x0)
             ) goto LAB_07ded12c;
          lVar8 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x2e) * 0x10 + 0x138);
                goto LAB_07deca64;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x2e);
LAB_07deca64:
          (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
          FUN_07e24360(&stack0x000000d0,&stack0x000001f0,0);
          in_stack_000000f8 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
          in_stack_00000100 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
          in_stack_000000f0 = in_stack_000000d0;
          FUN_07f71c88();
        }
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar10 != (long *)0x0))
        {
          lVar8 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x6c) * 0x10 + 0x138);
                goto LAB_07decb14;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x6c);
LAB_07decb14:
          (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
          uStack00000000000001e8 = CONCAT44(in_stack_00000274,in_stack_00000270);
          uStack00000000000001e0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
          uStack00000000000001d0 = uVar13;
          puStack00000000000001d8 = puVar1;
          iVar7 = FUN_07e25948(&stack0x000001d0,0);
          if (iVar7 != 1) {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0),
               plVar10 == (long *)0x0)) goto LAB_07ded12c;
            lVar8 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x6c) * 0x10 + 0x138);
                  goto LAB_07decba8;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x6c);
LAB_07decba8:
            (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
            uStack00000000000001e8 = CONCAT44(in_stack_00000274,in_stack_00000270);
            uStack00000000000001e0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            uStack00000000000001d0 = uVar13;
            puStack00000000000001d8 = puVar1;
            FUN_07e258dc(&stack0x000000d0,&stack0x000001d0,0);
            FUN_07f71cf4();
          }
          if ((*(long *)(unaff_x20 + 0x20) != 0) &&
             (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar10 != (long *)0x0)
             ) {
            lVar8 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x98) * 0x10 + 0x138);
                  goto LAB_07decc58;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x98);
LAB_07decc58:
            (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
            uStack00000000000001c0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            uStack00000000000001b0 = uVar13;
            puStack00000000000001b8 = puVar1;
            iVar7 = FUN_07e331a4(&stack0x000001b0,0);
            if (iVar7 != 1) {
              if ((*(long *)(unaff_x20 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar8 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x98) * 0x10 + 0x138);
                    goto LAB_07deccf4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x98);
LAB_07deccf4:
              (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
              uStack00000000000001c0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
              uStack00000000000001b0 = uVar13;
              puStack00000000000001b8 = puVar1;
              FUN_07e33148(&stack0x000000d0,&stack0x000001b0,0);
              FUN_07f71d64();
            }
            if (*(char *)(unaff_x20 + 0x90) != '\0') {
              if ((*(long *)(unaff_x20 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar8 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x70) * 0x10 + 0x138);
                    goto LAB_07decdb4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x70);
LAB_07decdb4:
              (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
              uStack00000000000001a0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
              uStack0000000000000190 = uVar13;
              puStack0000000000000198 = puVar1;
              FUN_07e25b9c(&stack0x000000d0,&stack0x00000190,0);
              FUN_07f80d64();
            }
            if (*(char *)(unaff_x20 + 0xac) != '\0') {
              if ((*(long *)(unaff_x20 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar8 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x7a) * 0x10 + 0x138);
                    goto LAB_07dece74;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x7a);
LAB_07dece74:
              (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
              uStack0000000000000170 = uVar13;
              uStack0000000000000180 = in_stack_00000268;
              uStack0000000000000184 = in_stack_0000026c;
              uStack0000000000000188 = in_stack_00000270;
              _uStack0000000000000178 = puVar1;
              FUN_07e25f3c(&stack0x000000d0,&stack0x00000170,0);
              FUN_07f80dcc();
            }
            if (*(char *)(unaff_x20 + 0xec) != '\0') {
              if ((*(long *)(unaff_x20 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar8 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x68) * 0x10 + 0x138);
                    goto LAB_07decf34;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x68);
LAB_07decf34:
              (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
              uStack0000000000000150 = uVar13;
              puStack0000000000000158 = puVar1;
              uStack0000000000000160 = in_stack_00000268;
              FUN_07e255c0(&stack0x00000150,0);
              FUN_07f80e9c();
            }
            if (*(char *)(unaff_x20 + 0xcc) != '\0') {
              if ((*(long *)(unaff_x20 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar8 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x66) * 0x10 + 0x138);
                    goto LAB_07decfec;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x66);
LAB_07decfec:
              (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
              uStack0000000000000130 = uVar13;
              uStack0000000000000140 = in_stack_00000268;
              uStack0000000000000144 = in_stack_0000026c;
              uStack0000000000000148 = in_stack_00000270;
              _uStack0000000000000138 = puVar1;
              FUN_07e251f4(&stack0x000000d0,&stack0x00000130,0);
              FUN_07f80e34();
            }
            if (*(char *)(unaff_x20 + 0x104) != '\0') {
              if ((*(long *)(unaff_x20 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0),
                 plVar10 == (long *)0x0)) goto LAB_07ded12c;
              lVar8 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
                    goto LAB_07ded0ac;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0x10);
LAB_07ded0ac:
              (*(code *)*puVar11)(&stack0x00000258,plVar10,puVar11[1]);
              uStack0000000000000120 = CONCAT44(in_stack_0000026c,in_stack_00000268);
              uStack0000000000000110 = uVar13;
              puStack0000000000000118 = puVar1;
              FUN_07e23dcc(&stack0x000000d0,&stack0x00000110,0);
              FUN_07f80efc();
            }
            if (*(long *)(unaff_x24 + 0x28) == in_stack_000002a8) {
              return;
            }
            goto LAB_07ded224;
          }
        }
      }
LAB_07ded12c:
      lVar8 = *(long *)(unaff_x24 + 0x28);
    }
  }
  if (lVar8 == in_stack_000002a8) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_07ded224:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


