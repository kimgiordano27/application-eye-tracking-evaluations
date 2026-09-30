/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPoint
ENTRY_POINT: 0696b480
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPoint(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *unaff_x23;
  long *unaff_x24;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  
  thunk_FUN_03ae8be4();
  uVar1 = FUN_07c9e200();
  if ((uVar1 & 1) == 0) {
    if (*unaff_x23 == 0) goto LAB_0696bba4;
    if ((unaff_w21 & *(char *)(*unaff_x23 + 0x34) != '\0') != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar1 = FUN_07c9e200(uVar4,0,0);
      if ((uVar1 & 1) != 0) goto LAB_0696b854;
      if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_0696bba4;
      uVar4 = FUN_07d1c63c(*(long *)(unaff_x20 + 0x28),0);
      puVar6 = (undefined8 *)(unaff_x20 + 0x48);
      *puVar6 = uVar4;
      thunk_FUN_03afed3c(puVar6,0);
      if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_0696bba4;
      uVar4 = FUN_07d1c660(*(long *)(unaff_x20 + 0x28),0);
      puVar5 = (undefined8 *)(unaff_x20 + 0x50);
      *puVar5 = uVar4;
      thunk_FUN_03afed3c(puVar5,0);
      lVar3 = *(long *)(unaff_x20 + 200);
      if (lVar3 == 0) goto LAB_0696bba4;
      uVar11 = *(undefined4 *)(lVar3 + 0x28);
      FUN_07d1d778(&stack0x000001e8,*(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),
                   *(undefined4 *)(lVar3 + 0x24),0);
      in_stack_000001b0 = in_stack_000001e8;
      in_stack_000001b8 = in_stack_000001f0;
      in_stack_000001c0 = in_stack_000001f8;
      in_stack_000001c8 = in_stack_00000200;
      in_stack_000001d0 = in_stack_00000208;
      in_stack_000001d8 = in_stack_00000210;
      in_stack_000001e0 = in_stack_00000218;
      FUN_07d1ce50(puVar6,&stack0x000001b0,0);
      if (*unaff_x23 == 0) goto LAB_0696bba4;
      FUN_07d1d580(&stack0x00000118,*(float *)(*unaff_x23 + 0x30) * *(float *)(unaff_x20 + 0x18),0);
      in_stack_00000198 = in_stack_00000120;
      in_stack_00000190 = in_stack_00000118;
      in_stack_000001a8 = in_stack_00000130;
      in_stack_000001a0 = in_stack_00000128;
      FUN_07d1cbc4(puVar6,&stack0x00000190,0);
      if (((*(long *)(unaff_x20 + 200) == 0) || (*(long *)(unaff_x20 + 0x78) == 0)) ||
         (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 == (long *)0x0))
      goto LAB_0696bba4;
      fVar12 = *(float *)(*(long *)(unaff_x20 + 200) + 0x4c);
      fVar7 = (float)(**(code **)(*plVar2 + 0x4c8))(plVar2,*(undefined8 *)(*plVar2 + 0x4d0));
      if (*unaff_x23 == 0) goto LAB_0696bba4;
      fVar12 = fVar12 / fVar7;
      fVar7 = *(float *)(*unaff_x23 + 0x48);
      if (fVar12 <= fVar7) {
        fVar7 = fVar12;
      }
      fVar8 = 2.0;
      if (2.0 <= fVar12) {
        fVar8 = fVar7;
      }
      FUN_07d1d580(&stack0x00000170,fVar8,0);
      in_stack_00000158 = in_stack_00000178;
      in_stack_00000150 = in_stack_00000170;
      in_stack_00000168 = in_stack_00000188;
      in_stack_00000160 = in_stack_00000180;
      FUN_07d1c798(puVar6,&stack0x00000150,0);
      if (*unaff_x23 == 0) goto LAB_0696bba4;
      lVar3 = *(long *)(unaff_x20 + 0x78);
      if (*(int *)(*unaff_x23 + 0x18) != 0) {
        if ((lVar3 == 0) || (plVar2 = *(long **)(lVar3 + 0x80), plVar2 == (long *)0x0))
        goto LAB_0696bba4;
        uVar1 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
        fVar7 = 0.0;
        if ((uVar1 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
          fVar7 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
          if (*unaff_x23 == 0) goto LAB_0696bba4;
          fVar8 = fVar7 * 0.125 + DAT_015c5aec;
          fVar12 = 1.0;
          if (fVar8 <= 1.0) {
            fVar12 = fVar8;
          }
          fVar7 = 0.0;
          if (0.0 <= fVar8) {
            fVar7 = fVar12;
          }
          fVar7 = fVar7 * *(float *)(*unaff_x23 + 0x2c);
        }
        FUN_07d1cd00(&stack0x000001e8,puVar6,0);
        uVar9 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                          (&stack0x00000220,0);
        *(undefined4 *)(unaff_x20 + 0x80) = uVar9;
        *(int *)(unaff_x20 + 0x84) = (int)in_stack_000001f8;
        *(int *)(unaff_x20 + 0x88) = (int)in_stack_00000208;
        *(undefined4 *)(unaff_x20 + 0x8c) = uVar11;
        FUN_07d1cd00(&stack0x00000118,puVar6,0);
        *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000120;
        *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000118;
        *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000130;
        *(undefined8 *)(unaff_x20 + 0xa0) = in_stack_00000128;
        *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000140;
        *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000138;
        *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000148;
        thunk_FUN_03afed3c(unaff_x20 + 0x98,0);
        if (*(long *)(unaff_x20 + 200) != 0) {
          fVar8 = fVar7 + fVar7;
          fVar12 = 1.0;
          if (fVar8 <= 1.0) {
            fVar12 = fVar8;
          }
          fVar10 = 0.0;
          if (0.0 <= fVar8) {
            fVar10 = fVar12;
          }
          FUN_07d1d76c(*(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84),
                       *(undefined4 *)(unaff_x20 + 0x88),
                       fVar10 * *(float *)(*(long *)(unaff_x20 + 200) + 0x44),unaff_x20 + 0x90,0);
          in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x98);
          in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x90);
          in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0xa8);
          in_stack_00000050 = *(undefined8 *)(unaff_x20 + 0xa0);
          in_stack_00000068 = *(undefined8 *)(unaff_x20 + 0xb8);
          in_stack_00000060 = *(undefined8 *)(unaff_x20 + 0xb0);
          in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0xc0);
          FUN_07d1ce50(puVar6,&stack0x00000040,0);
          FUN_07d1d580(&stack0x00000170,0,0);
          in_stack_00000028 = in_stack_00000178;
          in_stack_00000020 = in_stack_00000170;
          in_stack_00000038 = in_stack_00000188;
          in_stack_00000030 = in_stack_00000180;
          FUN_07d1d0d8(puVar5,&stack0x00000020,0);
          FUN_07d1d580(&stack0x000000a0,fVar7 * *(float *)(unaff_x20 + 0x1c),0);
          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                    (puVar5);
          goto LAB_0696b854;
        }
        goto LAB_0696bba4;
      }
      if ((lVar3 == 0) || (plVar2 = *(long **)(lVar3 + 0x80), plVar2 == (long *)0x0))
      goto LAB_0696bba4;
      uVar1 = (**(code **)(*plVar2 + 0x518))(plVar2,*(undefined8 *)(*plVar2 + 0x520));
      if ((uVar1 & 1) == 0) {
        if ((*(long *)(unaff_x20 + 0x78) == 0) ||
           (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 == (long *)0x0))
        goto LAB_0696bba4;
        uVar1 = (**(code **)(*plVar2 + 0x4d8))(plVar2,*(undefined8 *)(*plVar2 + 0x4e0));
        if ((uVar1 & 1) == 0) goto LAB_0696b84c;
      }
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
      fVar7 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
      if (fVar7 < 0.5) {
        if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
        if (*(float *)(*(long *)(unaff_x20 + 0x70) + 0xa4) < 0.5) goto LAB_0696b84c;
      }
      lVar3 = *(long *)(unaff_x20 + 0x78);
      if (*(char *)(unaff_x20 + 0x20) == '\0') {
        if ((lVar3 == 0) || (plVar2 = *(long **)(lVar3 + 0x80), plVar2 == (long *)0x0))
        goto LAB_0696bba4;
        uVar1 = (**(code **)(*plVar2 + 0x518))(plVar2,*(undefined8 *)(*plVar2 + 0x520));
        fVar7 = 0.0;
        if ((uVar1 & 1) != 0) {
          if ((*(long *)(unaff_x20 + 0x78) == 0) ||
             (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 == (long *)0x0))
          goto LAB_0696bba4;
          fVar7 = (float)(**(code **)(*plVar2 + 0x528))(plVar2,*(undefined8 *)(*plVar2 + 0x530));
          fVar7 = fVar7 * *(float *)(unaff_x20 + 0x10);
        }
        if ((*(long *)(unaff_x20 + 0x78) == 0) ||
           (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 == (long *)0x0))
        goto LAB_0696bba4;
        uVar1 = (**(code **)(*plVar2 + 0x4d8))(plVar2,*(undefined8 *)(*plVar2 + 0x4e0));
        fVar12 = 0.0;
        if ((uVar1 & 1) != 0) {
          if ((*(long *)(unaff_x20 + 0x78) == 0) ||
             (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 == (long *)0x0))
          goto LAB_0696bba4;
          fVar12 = (float)(**(code **)(*plVar2 + 0x4e8))(plVar2,*(undefined8 *)(*plVar2 + 0x4f0));
          fVar12 = fVar12 * *(float *)(unaff_x20 + 0x14);
        }
        if (*unaff_x23 == 0) goto LAB_0696bba4;
        fVar7 = fVar7 + fVar12;
        uVar11 = 0;
        fVar12 = 1.0;
        if (fVar7 <= 1.0) {
          fVar12 = fVar7;
        }
        fVar10 = *(float *)(unaff_x19 + 0x28);
        fVar8 = 0.0;
        if (0.0 <= fVar7) {
          fVar8 = fVar12;
        }
        fVar7 = 1.0;
        if (fVar10 <= 1.0) {
          fVar7 = fVar10;
        }
        fVar12 = 0.0;
        if (0.0 <= fVar10) {
          fVar12 = fVar7;
        }
        fVar7 = *(float *)(unaff_x20 + 0xd0) +
                (fVar8 * *(float *)(*unaff_x23 + 0x2c) - *(float *)(unaff_x20 + 0xd0)) * fVar12;
      }
      else {
        if ((lVar3 == 0) || (plVar2 = *(long **)(lVar3 + 0x80), plVar2 == (long *)0x0))
        goto LAB_0696bba4;
        uVar1 = (**(code **)(*plVar2 + 0x518))(plVar2,*(undefined8 *)(*plVar2 + 0x520));
        fVar12 = 0.0;
        if ((uVar1 & 1) != 0) {
          fVar12 = *(float *)(unaff_x20 + 0x10);
        }
        if ((*(long *)(unaff_x20 + 0x78) == 0) ||
           (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 == (long *)0x0))
        goto LAB_0696bba4;
        uVar1 = (**(code **)(*plVar2 + 0x4d8))(plVar2,*(undefined8 *)(*plVar2 + 0x4e0));
        fVar7 = 0.0;
        if ((uVar1 & 1) != 0) {
          fVar7 = *(float *)(unaff_x20 + 0x14);
        }
        if (*unaff_x23 == 0) goto LAB_0696bba4;
        fVar12 = fVar12 + fVar7;
        fVar8 = 1.0;
        if (fVar12 <= 1.0) {
          fVar8 = fVar12;
        }
        fVar7 = 0.0;
        if (0.0 <= fVar12) {
          fVar7 = fVar8;
        }
        fVar7 = fVar7 * *(float *)(*unaff_x23 + 0x2c);
      }
      *(float *)(unaff_x20 + 0xd0) = fVar7;
      FUN_07d1cd00(&stack0x000001e8,puVar6,0);
      uVar9 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                        (&stack0x00000220,0);
      *(undefined4 *)(unaff_x20 + 0x80) = uVar9;
      *(int *)(unaff_x20 + 0x84) = (int)in_stack_000001f8;
      *(int *)(unaff_x20 + 0x88) = (int)in_stack_00000208;
      *(undefined4 *)(unaff_x20 + 0x8c) = uVar11;
      FUN_07d1cd00(&stack0x00000118,puVar6,0);
      *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000120;
      *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000118;
      *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000130;
      *(undefined8 *)(unaff_x20 + 0xa0) = in_stack_00000128;
      *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000140;
      *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000138;
      *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000148;
      thunk_FUN_03afed3c(unaff_x20 + 0x98,0);
      if (*(long *)(unaff_x20 + 200) == 0) {
LAB_0696bba4:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      fVar12 = *(float *)(unaff_x20 + 0xd0);
      fVar7 = 1.0;
      if (fVar12 <= 1.0) {
        fVar7 = fVar12;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar12) {
        fVar8 = fVar7;
      }
      FUN_07d1d76c(*(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84),
                   *(undefined4 *)(unaff_x20 + 0x88),
                   fVar8 * *(float *)(*(long *)(unaff_x20 + 200) + 0x44),unaff_x20 + 0x90,0);
      in_stack_000000e8 = *(undefined8 *)(unaff_x20 + 0x98);
      in_stack_000000e0 = *(undefined8 *)(unaff_x20 + 0x90);
      in_stack_000000f8 = *(undefined8 *)(unaff_x20 + 0xa8);
      in_stack_000000f0 = *(undefined8 *)(unaff_x20 + 0xa0);
      in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0xb8);
      in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0xb0);
      in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0xc0);
      FUN_07d1ce50(puVar6,&stack0x000000e0,0);
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
      fVar12 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
      fVar12 = fVar12 * DAT_015c58f8;
      fVar7 = 1.0;
      if (fVar12 <= 1.0) {
        fVar7 = fVar12;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar12) {
        fVar8 = fVar7;
      }
      fVar7 = *(float *)(unaff_x20 + 0xd0) * fVar8;
      *(float *)(unaff_x20 + 0x60) = fVar7;
      *(float *)(unaff_x20 + 100) = *(float *)(unaff_x20 + 0xd0) * (1.0 - fVar8);
      FUN_07d1d580(&stack0x00000170,*(float *)(unaff_x20 + 0x1c) * fVar7,0);
      in_stack_000000c8 = in_stack_00000178;
      in_stack_000000c0 = in_stack_00000170;
      in_stack_000000d8 = in_stack_00000188;
      in_stack_000000d0 = in_stack_00000180;
      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                (puVar5,&stack0x000000c0,0);
      FUN_07d1d580(&stack0x000000a0,*(float *)(unaff_x20 + 100) * *(float *)(unaff_x20 + 0x1c),0);
      in_stack_00000088 = in_stack_000000a8;
      in_stack_00000080 = in_stack_000000a0;
      in_stack_00000098 = in_stack_000000b8;
      in_stack_00000090 = in_stack_000000b0;
      FUN_07d1d0d8(puVar5,&stack0x00000080,0);
      goto LAB_0696b854;
    }
  }
LAB_0696b84c:
  FUN_0696acf0();
LAB_0696b854:
  uVar11 = *(undefined4 *)(unaff_x19 + 0x28);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
  FUN_07ca4ee0(uVar11,uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar4);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return;
}


