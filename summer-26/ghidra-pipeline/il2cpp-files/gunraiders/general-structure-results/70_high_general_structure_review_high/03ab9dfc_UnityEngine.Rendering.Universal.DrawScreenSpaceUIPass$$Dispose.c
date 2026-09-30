/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass$$Dispose
ENTRY_POINT: 03ab9dfc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03aba3a4) */
/* WARNING: Removing unreachable block (ram,0x03abaa74) */

undefined8
UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass__Dispose(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  int iVar15;
  long lVar16;
  long unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar17;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 uStack00000000000000c0;
  long lStack00000000000000d0;
  
  puVar2 = StringLiteral_214;
                    /* catch() { ... } // from try @ 03ab9d64 with catch @ 03ab9e00
                       catch() { ... } // from try @ 03ab9df0 with catch @ 03ab9e00 */
                    /* try { // try from 03ab9e04 to 03bb9e07 has its CatchHandler @ 03ab9e10 */
                    /* try { // try from 03ab9e08 to 03bb9e13 has its CatchHandler @ 03ab9ae0 */
  uStack00000000000000c0 = param_2;
  lStack00000000000000d0 = param_1;
                    /* catch() { ... } // from try @ 03ab9d44 with catch @ 03ab9e10
                       catch() { ... } // from try @ 03ab9e04 with catch @ 03ab9e10 */
  while (uVar6 = FUN_029fd614(&stack0x000000c0,*unaff_x20), lVar11 = lStack00000000000000d0,
        (uVar6 & 1) != 0) {
    if (lStack00000000000000d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (2 < *(int *)(lStack00000000000000d0 + 0x20)) {
      if (*(int *)(lStack00000000000000d0 + 0x20) == 3) {
        lVar16 = *(long *)(in_stack_00000030 + 0x20);
        if (lVar16 == 0) {
          lVar16 = thunk_FUN_01c496e0(*unaff_x21);
          FUN_02b66d24(lVar16,in_stack_00000030,*unaff_x27,0);
          *(long *)(in_stack_00000030 + 0x20) = lVar16;
        }
        uVar7 = FUN_0234dcec(lVar11,lVar16,*unaff_x28);
        uVar7 = FUN_023574bc(uVar7,*unaff_x29);
        uVar7 = FUN_03a81208(in_stack_00000020,uVar7,0);
        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_<CreatePostProcessing>b__3__
                                  );
        FUN_02d4f99c(uVar8,uVar7,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_<CreatePostProcessing>b__2__
                    );
        uVar7 = FUN_03ab3b10(uVar8,1);
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar11 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        }
        else {
          FUN_02d5004c();
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_03aac9bc();
        lVar11 = *(long *)(in_stack_00000030 + 0x28);
        if (lVar11 == 0) {
          lVar11 = thunk_FUN_01c496e0(*unaff_x21);
          FUN_02b66d24(lVar11,in_stack_00000030,*(undefined8 *)puVar2,0);
          *(long *)(in_stack_00000030 + 0x28) = lVar11;
        }
        uVar7 = FUN_0234dcec(uVar7,lVar11,*unaff_x28);
        uVar7 = FUN_023574bc(uVar7,*unaff_x29);
        uVar7 = FUN_03a81208(in_stack_00000020,uVar7,0);
        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_<CreatePostProcessing>b__3__
                                  );
        FUN_02d4f99c(uVar8,uVar7,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_<CreatePostProcessing>b__2__
                    );
        uVar7 = FUN_03ab4e1c(uVar8);
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(uVar7,uVar7);
        }
        FUN_02d50250();
      }
    }
  }
  FUN_029fd610(&stack0x000000c0,*(undefined8 *)StringLiteral_171);
  FUN_03a6efd4();
  uVar7 = FUN_03a9fa28(*(undefined8 *)(in_stack_00000020 + 0x58),0);
  FUN_03a850cc(in_stack_00000020,uVar7,0);
  puVar2 = StringLiteral_219;
  lVar11 = *(long *)StringLiteral_219;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar11 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar11 + 0xb8) + 0x20) == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar11 + 0xb8);
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_186);
    FUN_02b6841c(uVar7,uVar8,*(undefined8 *)StringLiteral_210,0);
    *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = uVar7;
  }
  uVar7 = FUN_0234eea4();
  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                               Field_<PrivateImplementationDetails>_18689A54C1FF754BE58500B2ED77A6C75B025BE96F6D01FEF89C42DA1C953F34
                             );
  FUN_02b9ab38(lVar11,uVar7,*(undefined8 *)StringLiteral_189);
  if (in_stack_00000028 != 0) {
    FUN_02d50250();
    lVar16 = *(long *)puVar2;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar16 = *(long *)puVar2;
    }
    lVar14 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x28);
    if (lVar14 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar16 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar16 + 0xb8);
      lVar14 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_186);
      FUN_02b6841c(lVar14,uVar7,*(undefined8 *)StringLiteral_211,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = lVar14;
    }
    uVar7 = FUN_0234eea4(in_stack_00000028,lVar14,*(undefined8 *)StringLiteral_165);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Field_<PrivateImplementationDetails>_BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
                        );
    }
    lVar16 = FUN_03aacdbc(in_stack_00000020,uVar7,0);
    puVar5 = StringLiteral_188;
    puVar4 = StringLiteral_14;
    puVar3 = 
    Field_<PrivateImplementationDetails>_C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2
    ;
    puVar2 = 
    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__3__
    ;
    if (lVar16 != 0) {
      if (0 < *(int *)(lVar16 + 0x18)) {
        iVar15 = 0;
        do {
          if (lVar11 == 0) goto LAB_03aba628;
          if (*(int *)(lVar11 + 0x20) < 1) break;
          lVar14 = FUN_02d4fd88(lVar16,iVar15,*(undefined8 *)puVar4);
          if (lVar14 == 0) goto LAB_03aba628;
          uVar6 = FUN_02b9b0fc(lVar11,*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)puVar2);
          if ((uVar6 & 1) != 0) {
            FUN_02b9b2c8(lVar11,*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)puVar5);
            plVar9 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar3);
            FUN_03313b6c(plVar9,0);
            plVar9[2] = lVar14;
            plVar9[3] = 0;
            while( true ) {
              lVar14 = plVar9[2];
              plVar9[3] = lVar14;
              if (lVar14 == 0) break;
              while( true ) {
                if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                uVar6 = FUN_02b9b0fc(lVar11,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x20),
                                     *(undefined8 *)puVar2);
                if ((uVar6 & 1) == 0) {
                  if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  lVar17 = *(long *)(lVar14 + 0x20);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  *(undefined4 *)(lVar17 + 0x48) = *(undefined4 *)(lVar12 + 0x48);
                  in_stack_00000068 = *(undefined8 *)(lVar12 + 0x34);
                  in_stack_00000060 = *(undefined8 *)(lVar12 + 0x2c);
                  in_stack_00000058 = *(undefined8 *)(lVar12 + 0x24);
                  in_stack_00000050 = *(undefined8 *)(lVar12 + 0x1c);
                  in_stack_00000078 = 0;
                  in_stack_00000070 = 0;
                  in_stack_00000088 = 0;
                  in_stack_00000080 = 0;
                  in_stack_00000090 = in_stack_00000050;
                  in_stack_00000098 = in_stack_00000058;
                  in_stack_000000a0 = in_stack_00000060;
                  in_stack_000000a8 = in_stack_00000068;
                  FUN_03a64198(&stack0x00000070,&stack0x00000050,0);
                  *(undefined8 *)(lVar17 + 0x34) = in_stack_00000088;
                  *(undefined8 *)(lVar17 + 0x2c) = in_stack_00000080;
                  *(undefined8 *)(lVar17 + 0x24) = in_stack_00000078;
                  *(undefined8 *)(lVar17 + 0x1c) = in_stack_00000070;
                  FUN_03ad9548(*(undefined8 *)(lVar14 + 0x38),0);
                  goto UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass__RenderOffscreen;
                }
                if (plVar9[3] == 0) break;
                lVar14 = *(long *)(plVar9[3] + 0x28);
                plVar9[3] = lVar14;
                if ((lVar14 == 0) || (lVar14 == plVar9[2]))
                goto UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass__RenderOffscreen;
              }
            }
UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass__RenderOffscreen:
            lVar14 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0422fce8) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_03aba38c;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar10 = (undefined8 *)FUN_01c72498(plVar9,*(long *)PTR_DAT_0422fce8,0);
LAB_03aba38c:
            (*(code *)*puVar10)(plVar9,puVar10[1]);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(lVar16 + 0x18));
      }
      FUN_03a87650(in_stack_00000020,0,0);
      return in_stack_00000018;
    }
  }
LAB_03aba628:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


