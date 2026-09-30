/*
FUNCTION_NAME: UnityEngine.UIElements.MinMaxSlider$$SetValueWithoutNotify
ENTRY_POINT: 07ded1b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UIElements_MinMaxSlider__SetValueWithoutNotify(undefined8 param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar6;
  long unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined8 uStack0000000000000144;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined4 uStack0000000000000180;
  undefined8 uStack0000000000000184;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000260;
  undefined4 in_stack_00000268;
  undefined4 in_stack_0000026c;
  long in_stack_000002a8;
  
  if (param_2 != 1) {
    FUN_03a784e0(&stack0x00000258);
    if (*(long *)(unaff_x25 + 0x28) == in_stack_000002a8) {
                    /* WARNING: Subroutine does not return */
      FUN_03b79cbc(param_1);
    }
    goto LAB_07ded224;
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar6 = *plVar4;
  __cxa_end_catch();
  FUN_061dc368(in_stack_00000260,*unaff_x22);
  if (lVar6 != 0) {
    if (*(long *)(unaff_x25 + 0x28) == in_stack_000002a8) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8(lVar6);
    }
    goto LAB_07ded224;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_04e9de50(&stack0x00000258,*(long *)(unaff_x20 + 0x18),*unaff_x29);
    while (uVar2 = FUN_061dc5b8(&stack0x00000210,*unaff_x28), (uVar2 & 1) != 0) {
      FUN_07f71834();
    }
    FUN_061dc5b4(&stack0x00000210,*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo);
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    lVar6 = *(long *)(unaff_x25 + 0x28);
  }
  else {
    plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x2e) * 0x10 + 0x138);
            goto LAB_07dec9d0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x2e);
LAB_07dec9d0:
      (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
      iVar1 = FUN_07e243d0(&stack0x000001f0,0);
      if (iVar1 != 1) {
        if ((*(long *)(unaff_x20 + 0x20) == 0) ||
           (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 == (long *)0x0))
        goto LAB_07ded12c;
        lVar6 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x2e) * 0x10 + 0x138);
              goto LAB_07deca64;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x2e);
LAB_07deca64:
        (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
        FUN_07e24360(&stack0x000000d0,&stack0x000001f0,0);
        in_stack_000000f8 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_00000100 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
        in_stack_000000f0 = in_stack_000000d0;
        FUN_07f71c88();
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 != (long *)0x0)) {
        lVar6 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x6c) * 0x10 + 0x138);
              goto LAB_07decb14;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x6c);
LAB_07decb14:
        (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
        in_stack_000001d8 = unaff_x23[1];
        in_stack_000001d0 = *unaff_x23;
        in_stack_000001e8 = unaff_x23[3];
        in_stack_000001e0 = unaff_x23[2];
        iVar1 = FUN_07e25948(&stack0x000001d0,0);
        if (iVar1 != 1) {
          if ((*(long *)(unaff_x20 + 0x20) == 0) ||
             (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 == (long *)0x0))
          goto LAB_07ded12c;
          lVar6 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x27) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x6c) * 0x10 + 0x138);
                goto LAB_07decba8;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x6c);
LAB_07decba8:
          (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
          in_stack_000001d8 = unaff_x23[1];
          in_stack_000001d0 = *unaff_x23;
          in_stack_000001e8 = unaff_x23[3];
          in_stack_000001e0 = unaff_x23[2];
          FUN_07e258dc(&stack0x000000d0,&stack0x000001d0,0);
          FUN_07f71cf4();
        }
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 != (long *)0x0)) {
          lVar6 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x27) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x98) * 0x10 + 0x138);
                goto LAB_07decc58;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x98);
LAB_07decc58:
          (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
          in_stack_000001b8 = unaff_x23[1];
          in_stack_000001b0 = *unaff_x23;
          in_stack_000001c0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
          iVar1 = FUN_07e331a4(&stack0x000001b0,0);
          if (iVar1 != 1) {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 == (long *)0x0)
               ) goto LAB_07ded12c;
            lVar6 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x27) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x98) * 0x10 + 0x138);
                  goto LAB_07deccf4;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x98);
LAB_07deccf4:
            (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
            in_stack_000001c0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_000001b8 = unaff_x23[1];
            in_stack_000001b0 = *unaff_x23;
            FUN_07e33148(&stack0x000000d0,&stack0x000001b0,0);
            FUN_07f71d64();
          }
          if (*(char *)(unaff_x20 + 0x90) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 == (long *)0x0)
               ) goto LAB_07ded12c;
            lVar6 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x27) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x70) * 0x10 + 0x138);
                  goto LAB_07decdb4;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x70);
LAB_07decdb4:
            (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
            in_stack_000001a0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_00000198 = unaff_x23[1];
            in_stack_00000190 = *unaff_x23;
            FUN_07e25b9c(&stack0x000000d0,&stack0x00000190,0);
            FUN_07f80d64();
          }
          if (*(char *)(unaff_x20 + 0xac) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 == (long *)0x0)
               ) goto LAB_07ded12c;
            lVar6 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x27) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x7a) * 0x10 + 0x138);
                  goto LAB_07dece74;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x7a);
LAB_07dece74:
            (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
            in_stack_00000170 = *unaff_x23;
            uStack0000000000000184 = *(undefined8 *)((long)unaff_x23 + 0x14);
            uStack0000000000000178 = (undefined4)unaff_x23[1];
            uStack000000000000017c = (undefined4)*(undefined8 *)((long)unaff_x23 + 0xc);
            uStack0000000000000180 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x23 + 0xc) >> 0x20);
            FUN_07e25f3c(&stack0x000000d0,&stack0x00000170,0);
            FUN_07f80dcc();
          }
          if (*(char *)(unaff_x20 + 0xec) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 == (long *)0x0)
               ) goto LAB_07ded12c;
            lVar6 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x27) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x68) * 0x10 + 0x138);
                  goto LAB_07decf34;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x68);
LAB_07decf34:
            (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
            in_stack_00000158 = unaff_x23[1];
            in_stack_00000150 = *unaff_x23;
            in_stack_00000160 = in_stack_00000268;
            FUN_07e255c0(&stack0x00000150,0);
            FUN_07f80e9c();
          }
          if (*(char *)(unaff_x20 + 0xcc) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 == (long *)0x0)
               ) goto LAB_07ded12c;
            lVar6 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x27) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x66) * 0x10 + 0x138);
                  goto LAB_07decfec;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x66);
LAB_07decfec:
            (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
            in_stack_00000130 = *unaff_x23;
            uStack0000000000000144 = *(undefined8 *)((long)unaff_x23 + 0x14);
            uStack0000000000000138 = (undefined4)unaff_x23[1];
            uStack000000000000013c = (undefined4)*(undefined8 *)((long)unaff_x23 + 0xc);
            uStack0000000000000140 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x23 + 0xc) >> 0x20);
            FUN_07e251f4(&stack0x000000d0,&stack0x00000130,0);
            FUN_07f80e34();
          }
          if (*(char *)(unaff_x20 + 0x104) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar4 = (long *)FUN_07e05b1c(*(long *)(unaff_x20 + 0x20),0), plVar4 == (long *)0x0)
               ) goto LAB_07ded12c;
            lVar6 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x27) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x10) * 0x10 + 0x138);
                  goto LAB_07ded0ac;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x27,0x10);
LAB_07ded0ac:
            (*(code *)*puVar3)(&stack0x00000258,plVar4,puVar3[1]);
            in_stack_00000120 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_00000118 = unaff_x23[1];
            in_stack_00000110 = *unaff_x23;
            FUN_07e23dcc(&stack0x000000d0,&stack0x00000110,0);
            FUN_07f80efc();
          }
          if (*(long *)(unaff_x25 + 0x28) == in_stack_000002a8) {
            return;
          }
          goto LAB_07ded224;
        }
      }
    }
LAB_07ded12c:
    lVar6 = *(long *)(unaff_x25 + 0x28);
  }
  if (lVar6 == in_stack_000002a8) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_07ded224:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


