/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARTrackable<XRTrackedImage,-object>$$get_sessionRelativePose
ENTRY_POINT: 04f14bd0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x04f1566c) */
/* WARNING: Removing unreachable block (ram,0x04f156a0) */
/* WARNING: Removing unreachable block (ram,0x04f15674) */
/* WARNING: Removing unreachable block (ram,0x04f15104) */
/* WARNING: Removing unreachable block (ram,0x04f14e40) */
/* WARNING: Removing unreachable block (ram,0x04f15698) */
/* WARNING: Removing unreachable block (ram,0x04f15688) */
/* WARNING: Removing unreachable block (ram,0x04f15690) */
/* WARNING: Removing unreachable block (ram,0x04f1567c) */
/* WARNING: Removing unreachable block (ram,0x04f15124) */
/* WARNING: Removing unreachable block (ram,0x04f153b4) */
/* WARNING: Removing unreachable block (ram,0x04f14e60) */
/* WARNING: Removing unreachable block (ram,0x04f153e0) */
/* WARNING: Removing unreachable block (ram,0x04f153d4) */

void UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_object>__get_sessionRelativePose
               (long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong *unaff_x23;
  long unaff_x24;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  int in_stack_000000f8;
  int in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000238;
  int in_stack_00000240;
  int in_stack_00000248;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000318;
  long in_stack_00000330;
  long *in_stack_00000338;
  
  lVar5 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
  lVar5 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
    lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
  }
  FUN_04f15bf0(**(undefined8 **)(lVar5 + 0xb8),in_stack_000002f8,*(undefined8 *)(lVar7 + 0x120));
  *(undefined8 *)(unaff_x24 + 0xa0) = *(undefined8 *)(unaff_x24 + 0xc0);
  *(undefined8 *)(unaff_x24 + 0x98) = *(undefined8 *)(unaff_x24 + 0xb8);
  FUN_044ff1b4(&stack0x00000030,&stack0x000002d0,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x128));
  memcpy(&stack0x00000238,&stack0x00000030,0x98);
  iVar11 = in_stack_00000248 + 1;
  lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x160);
  if (iVar11 < in_stack_00000240) {
    do {
      if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      memmove(&stack0x00000030,(void *)(in_stack_00000238 + (long)iVar11 * 0x80),0x80);
      memcpy(&stack0x00000250,&stack0x00000030,0x80);
      lVar5 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
      memcpy(&stack0x000001b0,&stack0x00000250,0x80);
      lVar5 = *(long *)(lVar5 + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar7 + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
        lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
      }
      uVar12 = *(undefined8 *)(lVar7 + 0x150);
      lVar5 = **(long **)(lVar5 + 0xb8);
      memcpy(&stack0x00000340,&stack0x000001b0,0x80);
      uVar12 = FUN_04f164f0(in_stack_00000338,&stack0x00000340,uVar12);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x158);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
        thunk_FUN_0333a630();
      }
      else {
        FUN_041e2c78(lVar5,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar11 = iVar11 + 1;
      lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x160);
    } while (iVar11 < in_stack_00000240);
  }
  *(undefined8 *)(unaff_x24 + 0x90) = 0;
  *(undefined8 *)(unaff_x24 + 0x88) = 0;
  *(undefined8 *)(unaff_x24 + 0x80) = 0;
  *(undefined8 *)(unaff_x24 + 0x78) = 0;
  *(undefined8 *)(unaff_x24 + 0x70) = 0;
  *(undefined8 *)(unaff_x24 + 0x68) = 0;
  *(undefined8 *)(unaff_x24 + 0x60) = 0;
  *(undefined8 *)(unaff_x24 + 0x58) = 0;
  *(undefined8 *)(unaff_x24 + 0x50) = 0;
  *(undefined8 *)(unaff_x24 + 0x48) = 0;
  *(undefined8 *)(unaff_x24 + 0x40) = 0;
  *(undefined8 *)(unaff_x24 + 0x38) = 0;
  *(undefined8 *)(unaff_x24 + 0x30) = 0;
  *(undefined8 *)(unaff_x24 + 0x28) = 0;
  *(undefined8 *)(unaff_x24 + 0x20) = 0;
  *(undefined8 *)(unaff_x24 + 0x18) = 0;
  FUN_052e7418(&stack0x00000238,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x168));
  FUN_06a4939c(&stack0x000002e8,0);
  in_stack_00000030 = 0;
  FUN_06a49394(&stack0x00000030,*(undefined8 *)PTR_DAT_07285a88,0);
  lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
  lVar5 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
    lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
  }
  FUN_04f15bf0(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),in_stack_00000308,
               *(undefined8 *)(lVar7 + 0x120));
  *(undefined8 *)(unaff_x24 + 0xa0) = *(undefined8 *)(unaff_x24 + 0xd0);
  *(undefined8 *)(unaff_x24 + 0x98) = *(undefined8 *)(unaff_x24 + 200);
  FUN_044ff1b4(&stack0x00000030,&stack0x000002d0,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x128));
  memcpy(&stack0x00000238,&stack0x00000030,0x98);
  iVar11 = iVar11 + 1;
  lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x160);
  if (iVar11 < in_stack_00000240) {
    do {
      if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      memmove(&stack0x00000030,(void *)(in_stack_00000238 + (long)iVar11 * 0x80),0x80);
      memcpy(&stack0x00000250,&stack0x00000030,0x80);
      lVar5 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
      memcpy(&stack0x00000130,&stack0x00000250,0x80);
      lVar5 = *(long *)(lVar5 + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar7 + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
        lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
      }
      uVar12 = *(undefined8 *)(lVar7 + 0x150);
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      memcpy(&stack0x00000030,&stack0x00000130,0x80);
      uVar12 = FUN_04f164f0(in_stack_00000338,&stack0x00000030,uVar12);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x158);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
        thunk_FUN_0333a630();
      }
      else {
        FUN_041e2c78(lVar5,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar11 = iVar11 + 1;
      lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x160);
    } while (iVar11 < in_stack_00000240);
  }
  *(undefined8 *)(unaff_x24 + 0x90) = 0;
  *(undefined8 *)(unaff_x24 + 0x88) = 0;
  *(undefined8 *)(unaff_x24 + 0x80) = 0;
  *(undefined8 *)(unaff_x24 + 0x78) = 0;
  *(undefined8 *)(unaff_x24 + 0x70) = 0;
  *(undefined8 *)(unaff_x24 + 0x68) = 0;
  *(undefined8 *)(unaff_x24 + 0x60) = 0;
  *(undefined8 *)(unaff_x24 + 0x58) = 0;
  *(undefined8 *)(unaff_x24 + 0x50) = 0;
  *(undefined8 *)(unaff_x24 + 0x48) = 0;
  *(undefined8 *)(unaff_x24 + 0x40) = 0;
  *(undefined8 *)(unaff_x24 + 0x38) = 0;
  *(undefined8 *)(unaff_x24 + 0x30) = 0;
  *(undefined8 *)(unaff_x24 + 0x28) = 0;
  *(undefined8 *)(unaff_x24 + 0x20) = 0;
  *(undefined8 *)(unaff_x24 + 0x18) = 0;
  FUN_052e7418(&stack0x00000238,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x168));
  FUN_06a4939c(&stack0x000002e8,0);
  in_stack_00000008 = in_stack_00000008 & 0xffffffffffffff00;
  FUN_06a49394(&stack0x00000008,*(undefined8 *)PTR_DAT_07285a80,0);
  lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
  lVar5 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
    lVar7 = *(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0);
  }
  FUN_04f15bf0(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),in_stack_00000318,
               *(undefined8 *)(lVar7 + 0x120));
  puVar3 = PTR_DAT_07285380;
  uVar6 = *(ulong *)(unaff_x24 + 0xd8);
  unaff_x23[7] = *(ulong *)(unaff_x24 + 0xe0);
  unaff_x23[6] = uVar6;
  FUN_044bf4d0(&stack0x00000008,&stack0x00000120,*(undefined8 *)puVar3);
  unaff_x23[1] = (ulong)in_stack_00000010;
  *unaff_x23 = in_stack_00000008;
  unaff_x23[3] = (ulong)in_stack_00000020;
  unaff_x23[2] = (ulong)in_stack_00000018;
  puVar4 = PTR_DAT_07285358;
  puVar3 = PTR_DAT_072794f0;
  in_stack_00000110 = in_stack_00000028;
  iVar11 = in_stack_00000100 + 1;
  lVar5 = *(long *)PTR_DAT_07285358;
  in_stack_00000100 = iVar11;
  if (iVar11 < in_stack_000000f8) {
    do {
      lVar7 = in_stack_000000f0;
      in_stack_00000100 = iVar11;
      if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      puVar8 = (undefined8 *)(lVar7 + (long)iVar11 * 0x10);
      uVar12 = *puVar8;
      uVar10 = puVar8[1];
      in_stack_00000108 = uVar12;
      in_stack_00000110 = uVar10;
      if (in_stack_00000338[7] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar6 = FUN_0516f910(in_stack_00000338[7],uVar12,uVar10,&stack0x000000e8,
                           *(undefined8 *)
                            (*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x180));
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000338[7] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_0516f288(in_stack_00000338[7],uVar12,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 400));
        uVar12 = in_stack_000000e8;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar6 = FUN_06becf70(uVar12,0);
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_032934b8();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_032934b8();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x158);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
            *puVar8 = in_stack_000000e8;
            thunk_FUN_0333a630(puVar8);
          }
          else {
            FUN_041e2c78(lVar5,in_stack_000000e8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      lVar5 = *(long *)puVar4;
      iVar11 = in_stack_00000100 + 1;
      in_stack_00000100 = iVar11;
    } while (iVar11 < in_stack_000000f8);
  }
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  FUN_052de224(&stack0x000000f0,*(undefined8 *)PTR_DAT_07285350);
  FUN_06a4939c(&stack0x000002e8,0);
  FUN_04aab90c(&stack0x000002f0,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 0x198));
  FUN_06a4939c(&stack0x00000328,0);
  in_stack_00000010 = &stack0x00000330;
  in_stack_00000018 = &stack0x000000d0;
  in_stack_00000020 = &stack0x000000c8;
  in_stack_00000008 = 0;
  in_stack_00000028 = &stack0x00000338;
  lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) < 1) {
    lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(int *)(lVar5 + 0x18) < 1) {
      lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_032934b8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(int *)(lVar5 + 0x18) < 1) goto Unity_VisualScripting_Absolute<Vector2>__get_input;
    }
  }
  lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar5 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_032934b8();
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
    uVar1 = *(ushort *)(lVar7 + 0x135);
  }
  uVar12 = **(undefined8 **)(lVar5 + 0xb8);
  lVar5 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_032934b8();
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000330 + 0x20) + 0xc0) + 8);
    uVar1 = *(ushort *)(lVar7 + 0x135);
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_032934b8();
  }
  (**(code **)(*in_stack_00000338 + 0x208))
            (in_stack_00000338,uVar12,uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),
             *(undefined8 *)(*in_stack_00000338 + 0x210));
Unity_VisualScripting_Absolute<Vector2>__get_input:
  FUN_02e8ee80(&stack0x00000008);
  return;
}


