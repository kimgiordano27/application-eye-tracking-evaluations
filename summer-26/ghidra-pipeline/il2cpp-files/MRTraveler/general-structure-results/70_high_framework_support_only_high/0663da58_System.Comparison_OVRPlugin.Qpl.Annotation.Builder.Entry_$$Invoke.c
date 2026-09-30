/*
FUNCTION_NAME: System.Comparison<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 0663da58
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0663deb0) */
/* WARNING: Removing unreachable block (ram,0x0663df70) */
/* WARNING: Removing unreachable block (ram,0x0663df78) */

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
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar17;
  long *unaff_x22;
  undefined8 uVar18;
  undefined8 *unaff_x23;
  long *plVar19;
  long unaff_x25;
  undefined1 auVar20 [16];
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
  
  thunk_FUN_03d233cc();
  lVar11 = FUN_04767184(*unaff_x23);
  plVar19 = unaff_x20 + 3;
  *plVar19 = lVar11;
                    /* try { // try from 0663da70 to 0673da73 has its CatchHandler @ 0663dab8 */
                    /* try { // try from 0663da74 to 0673dacf has its CatchHandler @ 0663da4c */
  thunk_FUN_03d233cc(plVar19,lVar11);
  lVar11 = *unaff_x19;
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03cf1244();
  }
  uVar12 = FUN_04766bc4(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x68));
  unaff_x20[4] = uVar12;
  thunk_FUN_03d233cc();
  plVar17 = unaff_x20 + 5;
  *plVar17 = unaff_x25;
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0663da70 with catch @ 0663dab8
                        */
  thunk_FUN_03d233cc(plVar17);
  lVar11 = *plVar17;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar13 = *unaff_x19;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    FUN_03cf1244();
    lVar13 = *unaff_x19;
  }
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  in_stack_00000080 = 0;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03cf1244();
  }
  FUN_05084fdc(&stack0x00000080,&stack0x00000208,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x78));
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  in_stack_00000178 = FUN_0476566c();
  lVar11 = *unaff_x19;
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03cf1244();
  }
  FUN_056cd464(&stack0x00000080,&stack0x00000178,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xa0));
  puVar4 = PTR_DAT_08e86f88;
  puVar3 = PTR_DAT_08e84e98;
  memcpy(&stack0x00000180,&stack0x00000080,0x80);
  while( true ) {
    lVar11 = *unaff_x19;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03cf1244();
    }
    uVar14 = FUN_04784adc(&stack0x00000180,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xe0));
    if ((uVar14 & 1) == 0) {
      lVar11 = *unaff_x19;
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03cf1244();
      }
      FUN_06c07188(&stack0x00000180,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xe8));
      if (in_stack_00000208 != 0) {
        if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        if (*(int *)(in_stack_00000208 + 0x18) == 0) {
          lVar11 = *unaff_x19;
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_03cf1244();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x50);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_03cf1244();
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          FUN_05702eac();
        }
        else {
          if (in_stack_00000208 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar11 = *unaff_x19;
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_03cf1244();
          }
          FUN_05108274(&stack0x00000080,in_stack_00000208,
                       *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xf8));
          in_stack_00000158 = in_stack_00000088;
          in_stack_00000150 = in_stack_00000080;
          in_stack_00000168 = in_stack_00000098;
          in_stack_00000160 = in_stack_00000090;
          while( true ) {
            lVar11 = *unaff_x19;
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_03cf1244();
            }
            uVar14 = FUN_06c06610(&stack0x00000150,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x140)
                                 );
            if ((uVar14 & 1) == 0) break;
            lVar11 = *unaff_x19;
            uVar1 = *(ushort *)(lVar11 + 0x135);
            if ((uVar1 & 1) == 0) {
              FUN_03cf1244();
              lVar11 = *unaff_x19;
              uVar1 = *(ushort *)(lVar11 + 0x135);
            }
            in_stack_00000148 = in_stack_00000168;
            in_stack_00000140 = in_stack_00000160;
            if ((uVar1 & 1) == 0) {
              lVar11 = FUN_03cf1244();
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x120);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_03cf1244();
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            lVar11 = *unaff_x19;
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_03cf1244();
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x120);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_03cf1244();
            }
            uVar18 = **(undefined8 **)(lVar11 + 0xb8);
            in_stack_00000108 = in_stack_00000148;
            in_stack_00000100 = in_stack_00000140;
            in_stack_00000128 = unaff_x20[3];
            in_stack_00000120 = unaff_x20[2];
            in_stack_00000138 = unaff_x20[5];
            in_stack_00000130 = unaff_x20[4];
            in_stack_00000118 = unaff_x20[1];
            in_stack_00000110 = *unaff_x20;
            thunk_FUN_03d233cc(&stack0x00000120,0);
            uVar10 = in_stack_00000138;
            uVar9 = in_stack_00000130;
            uVar8 = in_stack_00000128;
            uVar7 = in_stack_00000120;
            uVar6 = in_stack_00000118;
            uVar5 = in_stack_00000110;
            uVar15 = in_stack_00000108;
            uVar12 = in_stack_00000100;
            lVar11 = *unaff_x19;
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_03cf1244();
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x138);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_03cf1244();
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            lVar11 = *unaff_x19;
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_03cf1244();
            }
            in_stack_00000088 = uVar15;
            in_stack_00000080 = uVar12;
            in_stack_00000098 = uVar6;
            in_stack_00000090 = uVar5;
            in_stack_000000a8 = uVar8;
            in_stack_000000a0 = uVar7;
            in_stack_000000b8 = uVar10;
            in_stack_000000b0 = uVar9;
            FUN_046d4194(&stack0x00000140,uVar18,&stack0x00000080,
                         *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x130));
          }
          lVar11 = *unaff_x19;
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_03cf1244();
          }
          FUN_06c0660c(&stack0x00000150,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x148));
        }
        lVar11 = *unaff_x19;
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03cf1244();
        }
        FUN_050850a4(&stack0x00000200,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x150));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar11 = *unaff_x19;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03cf1244();
    }
    auVar20 = FUN_04784898(&stack0x00000180,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xb8));
    uVar15 = auVar20._8_8_;
    uVar12 = auVar20._0_8_;
    if (in_stack_00000208 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar11 = *unaff_x19;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03cf1244();
    }
    lVar13 = *(long *)(in_stack_00000208 + 0x10);
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0xd8);
    *(int *)(in_stack_00000208 + 0x1c) = *(int *)(in_stack_00000208 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(uint *)(in_stack_00000208 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(in_stack_00000208 + 0x18) = uVar2 + 1;
      *(undefined1 (*) [16])(lVar13 + (long)(int)uVar2 * 0x10 + 0x20) = auVar20;
    }
    else {
      FUN_05107838(in_stack_00000208,uVar12,uVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_04e23f74(*unaff_x22,uVar12,uVar15,*(undefined8 *)puVar3);
    lVar11 = *plVar19;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar13 = *(long *)(lVar11 + 0x10);
    lVar16 = *(long *)puVar4;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      *(undefined1 (*) [16])(lVar13 + (long)(int)uVar2 * 0x10 + 0x20) = auVar20;
    }
    else {
      FUN_051b3148(lVar11,uVar12,uVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


