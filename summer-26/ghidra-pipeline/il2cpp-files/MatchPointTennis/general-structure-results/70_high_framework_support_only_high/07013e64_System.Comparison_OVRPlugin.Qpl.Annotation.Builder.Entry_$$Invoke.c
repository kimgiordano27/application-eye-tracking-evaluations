/*
FUNCTION_NAME: System.Comparison<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 07013e64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07014264) */
/* WARNING: Removing unreachable block (ram,0x07014324) */
/* WARNING: Removing unreachable block (ram,0x0701432c) */

void System_Comparison<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke(void)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar16;
  long *unaff_x23;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
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
  undefined8 in_stack_00000178;
  long in_stack_00000208;
  
  lVar17 = *unaff_x21;
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar11 = *unaff_x19;
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    FUN_04481fb8();
    lVar11 = *unaff_x19;
  }
  *(undefined4 *)(lVar17 + 0x18) = 0;
  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
  in_stack_00000080 = 0;
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_04481fb8();
  }
  FUN_05954144(&stack0x00000080,&stack0x00000208,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x78));
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  in_stack_00000178 = FUN_04ea23ec();
  lVar17 = *unaff_x19;
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_04481fb8();
  }
  FUN_061520d0(&stack0x00000080,&stack0x00000178,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0xa0));
  puVar4 = PTR_DAT_09f2b3b0;
  puVar3 = PTR_DAT_09f29128;
  memcpy(&stack0x00000180,&stack0x00000080,0x80);
  while( true ) {
    lVar17 = *unaff_x19;
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_04481fb8();
    }
    uVar12 = FUN_04eae68c(&stack0x00000180,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0xe0));
    if ((uVar12 & 1) == 0) {
      lVar17 = *unaff_x19;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_04481fb8();
      }
      FUN_0764d930(&stack0x00000180,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0xe8));
      if (in_stack_00000208 != 0) {
        if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        if (*(int *)(in_stack_00000208 + 0x18) == 0) {
          lVar17 = *unaff_x19;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_04481fb8();
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x50);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_04481fb8();
          }
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_061b7cb4();
        }
        else {
          if (in_stack_00000208 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar17 = *unaff_x19;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_04481fb8();
          }
          FUN_059c7e38(&stack0x00000080,in_stack_00000208,
                       *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0xf8));
          in_stack_00000158 = in_stack_00000088;
          in_stack_00000150 = in_stack_00000080;
          in_stack_00000168 = in_stack_00000098;
          in_stack_00000160 = in_stack_00000090;
          while( true ) {
            lVar17 = *unaff_x19;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_04481fb8();
            }
            uVar12 = FUN_0764cdb8(&stack0x00000150,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x140)
                                 );
            if ((uVar12 & 1) == 0) break;
            lVar17 = *unaff_x19;
            uVar1 = *(ushort *)(lVar17 + 0x135);
            if ((uVar1 & 1) == 0) {
              FUN_04481fb8();
              lVar17 = *unaff_x19;
              uVar1 = *(ushort *)(lVar17 + 0x135);
            }
            in_stack_00000148 = in_stack_00000168;
            in_stack_00000140 = in_stack_00000160;
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_04481fb8();
            }
            lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x120);
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_04481fb8();
            }
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar17 = *unaff_x19;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_04481fb8();
            }
            lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x120);
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_04481fb8();
            }
            uVar16 = **(undefined8 **)(lVar17 + 0xb8);
            in_stack_00000108 = in_stack_00000148;
            in_stack_00000100 = in_stack_00000140;
            in_stack_00000128 = unaff_x20[3];
            in_stack_00000120 = unaff_x20[2];
            in_stack_00000138 = unaff_x20[5];
            in_stack_00000130 = unaff_x20[4];
            in_stack_00000118 = unaff_x20[1];
            in_stack_00000110 = *unaff_x20;
            thunk_FUN_044bb4b4(&stack0x00000120,0);
            uVar10 = in_stack_00000138;
            uVar9 = in_stack_00000130;
            uVar8 = in_stack_00000128;
            uVar7 = in_stack_00000120;
            uVar6 = in_stack_00000118;
            uVar5 = in_stack_00000110;
            uVar14 = in_stack_00000108;
            uVar13 = in_stack_00000100;
            lVar17 = *unaff_x19;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_04481fb8();
            }
            lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x138);
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_04481fb8();
            }
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar17 = *unaff_x19;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_04481fb8();
            }
            in_stack_00000088 = uVar14;
            in_stack_00000080 = uVar13;
            in_stack_00000098 = uVar6;
            in_stack_00000090 = uVar5;
            in_stack_000000a8 = uVar8;
            in_stack_000000a0 = uVar7;
            in_stack_000000b8 = uVar10;
            in_stack_000000b0 = uVar9;
            FUN_04f6ede4(&stack0x00000140,uVar16,&stack0x00000080,
                         *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x130));
          }
          lVar17 = *unaff_x19;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_04481fb8();
          }
          FUN_0764cdb4(&stack0x00000150,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x148));
        }
        lVar17 = *unaff_x19;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_04481fb8();
        }
        FUN_0595420c(&stack0x00000200,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x150));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar17 = *unaff_x19;
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_04481fb8();
    }
    auVar18 = FUN_04eae448(&stack0x00000180,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0xb8));
    uVar14 = auVar18._8_8_;
    uVar13 = auVar18._0_8_;
    if (in_stack_00000208 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar17 = *unaff_x19;
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_04481fb8();
    }
    lVar11 = *(long *)(in_stack_00000208 + 0x10);
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0xd8);
    *(int *)(in_stack_00000208 + 0x1c) = *(int *)(in_stack_00000208 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar2 = *(uint *)(in_stack_00000208 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(in_stack_00000208 + 0x18) = uVar2 + 1;
      *(undefined1 (*) [16])(lVar11 + (long)(int)uVar2 * 0x10 + 0x20) = auVar18;
    }
    else {
      FUN_059c72f8(in_stack_00000208,uVar13,uVar14,
                   *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_05644f60(*unaff_x22,uVar13,uVar14,*(undefined8 *)puVar3);
    lVar17 = *unaff_x23;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar11 = *(long *)(lVar17 + 0x10);
    lVar15 = *(long *)puVar4;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar2 = *(uint *)(lVar17 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar17 + 0x18) = uVar2 + 1;
      *(undefined1 (*) [16])(lVar11 + (long)(int)uVar2 * 0x10 + 0x20) = auVar18;
    }
    else {
      FUN_05ae54b8(lVar17,uVar13,uVar14,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


