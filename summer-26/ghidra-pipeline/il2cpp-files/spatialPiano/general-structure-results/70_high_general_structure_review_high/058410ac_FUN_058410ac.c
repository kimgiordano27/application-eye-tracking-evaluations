/*
FUNCTION_NAME: FUN_058410ac
ENTRY_POINT: 058410ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05842880) */
/* WARNING: Removing unreachable block (ram,0x05842c38) */
/* WARNING: Removing unreachable block (ram,0x0584159c) */
/* WARNING: Removing unreachable block (ram,0x05842b14) */
/* WARNING: Removing unreachable block (ram,0x05842c40) */
/* WARNING: Removing unreachable block (ram,0x05842c2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_058410ac(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar23;
  long *unaff_x22;
  uint uVar24;
  long lVar25;
  int iVar26;
  undefined *puVar27;
  long lStack0000000000000008;
  long *plStack0000000000000018;
  long *plStack0000000000000030;
  ulong in_stack_00000050;
  
  uVar6 = (*(code *)*param_1)();
  lVar9 = FUN_02f0880c(*unaff_x20,uVar6);
  if (((in_stack_00000050 & 0x100000000) == 0) || ((int)unaff_x22[0x1b] != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = *(long *)(unaff_x21 + 0x70) != 0;
  }
  plVar10 = (long *)unaff_x22[3];
  if (plVar10 == (long *)0x0) goto LAB_05842b50;
  (**(code **)(*plVar10 + 0x538))(plVar10,*(undefined8 *)(*plVar10 + 0x540));
  if ((in_stack_00000050 & 1) == 0) {
    iVar7 = 0x7fffffff;
  }
  else {
    plVar10 = *(long **)(unaff_x21 + 0x18);
    if (plVar10 == (long *)0x0) {
      iVar7 = -1;
    }
    else {
      lVar18 = *plVar10;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_067ca018) {
            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_05841180;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067ca018,1);
LAB_05841180:
      iVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    }
  }
  plVar10 = *(long **)(unaff_x21 + 0x30);
  if (plVar10 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
    lVar18 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cb890,uVar6);
    plVar10 = *(long **)(unaff_x21 + 0x30);
    if (plVar10 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
      puVar27 = PTR_DAT_067c9648;
      plVar10 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,uVar6);
      plVar19 = *(long **)(unaff_x21 + 0x30);
      if (plVar19 != (long *)0x0) {
        plVar19 = (long *)(**(code **)(*plVar19 + 0x388))(plVar19,*(undefined8 *)(*plVar19 + 0x390))
        ;
        puVar4 = PTR_DAT_067c91b8;
        plStack0000000000000030 = (long *)0x0;
        do {
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar20 = *plVar19;
          lVar17 = *(long *)puVar4;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar17) {
                puVar11 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_05841290;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar19,lVar17,0);
LAB_05841290:
          uVar21 = (*(code *)*puVar11)(plVar19,puVar11[1]);
          puVar3 = PTR_DAT_067c91b0;
          if ((uVar21 & 1) == 0) {
            plVar19 = (long *)thunk_FUN_02f45174(plVar19,*(undefined8 *)PTR_DAT_067c91b0);
            if (plVar19 == (long *)0x0) goto System_Net_HttpWebRequest__<GetRewriteHandler>b__271_0;
            lVar17 = *plVar19;
            uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar21 == 0) goto LAB_05841550;
            piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            goto LAB_05841538;
          }
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar20 = *plVar19;
          lVar17 = *(long *)puVar4;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar17) {
                puVar11 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_058412f8;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar19,lVar17,1);
LAB_058412f8:
          plVar12 = (long *)(*(code *)*puVar11)(plVar19,puVar11[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                           + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar12);
          }
          uVar21 = FUN_058440d4(plVar12,plVar12,plVar12[5]);
          if ((uVar21 & 1) == 0) {
            if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar17 = *(long *)(plVar12[5] + 0x10);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar21 = FUN_050eed48(lVar17,0);
            if ((uVar21 & 1) == 0) {
              plVar14 = (long *)FUN_05849970(plVar12);
              plVar13 = plVar14;
              if (plVar14 == (long *)0x0) {
                plVar13 = (long *)FUN_05844138(0,plVar12[5]);
                plVar14 = (long *)FUN_05843a60(plVar13,plVar12);
              }
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar24 = *(uint *)(plVar12 + 0xf);
              if ((plVar13 != (long *)0x0) &&
                 (plVar14 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)(*plVar10 + 0x40)),
                 plVar14 == (long *)0x0)) {
                uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar16,0);
              }
              if (*(uint *)(plVar10 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
            }
            else {
              uVar24 = *(uint *)(plVar12 + 0xf);
              plVar13 = (long *)FUN_05844138(uVar21,plVar12[5]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar14 = (long *)0x0;
              if ((plVar13 != (long *)0x0) &&
                 (plVar14 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)(*plVar10 + 0x40)),
                 plVar14 == (long *)0x0)) {
                uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar16,0);
              }
              if (*(uint *)(plVar10 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
            }
          }
          else {
            uVar24 = *(uint *)(plVar12 + 0xf);
            plVar13 = (long *)FUN_05849970(plVar12);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            plVar14 = (long *)0x0;
            if ((plVar13 != (long *)0x0) &&
               (plVar14 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)(*plVar10 + 0x40)),
               plVar14 == (long *)0x0)) {
              uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
              FUN_02f0888c(uVar16,0);
            }
            if (*(uint *)(plVar10 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
          plVar10[(long)(int)uVar24 + 4] = (long)plVar13;
          if (plVar12[0xc] != 0) {
            if (plStack0000000000000030 == (long *)0x0) {
              plVar14 = *(long **)(unaff_x21 + 0x30);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar6 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
              plVar14 = (long *)FUN_02f0880c(*(undefined8 *)puVar27,uVar6);
              plStack0000000000000030 = plVar14;
            }
            uVar24 = *(uint *)(plVar12 + 0xf);
            lVar17 = FUN_05844138(plVar14,plVar12[0xe]);
            if (plStack0000000000000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if ((lVar17 != 0) &&
               (lVar20 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plStack0000000000000030 + 0x40))
               , lVar20 == 0)) {
              uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
              FUN_02f0888c(uVar16,0);
            }
            if (*(uint *)(plStack0000000000000030 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            plStack0000000000000030[(long)(int)uVar24 + 4] = lVar17;
          }
        } while( true );
      }
    }
    goto LAB_05842b50;
  }
  plStack0000000000000030 = (long *)0x0;
  plVar10 = (long *)0x0;
  lVar18 = 0;
  goto System_Net_HttpWebRequest__<GetRewriteHandler>b__271_0;
joined_r0x058425d0:
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar17 = *plVar19;
  lVar9 = *(long *)puVar4;
  uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == lVar9) {
        puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_0584262c;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_02f421d0(plVar19,lVar9,0);
LAB_0584262c:
  uVar21 = (*(code *)*puVar11)(plVar19,puVar11[1]);
  puVar3 = PTR_DAT_067c91b0;
  if ((uVar21 & 1) == 0) {
    plVar10 = (long *)thunk_FUN_02f45174(plVar19,*(undefined8 *)PTR_DAT_067c91b0);
    if (plVar10 == (long *)0x0) goto LAB_05842884;
    lVar9 = *plVar10;
    uVar21 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar21 == 0) goto LAB_0584284c;
    piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    goto LAB_05842834;
  }
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar17 = *plVar19;
  lVar9 = *(long *)puVar4;
  uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == lVar9) {
        puVar11 = (undefined8 *)(lVar17 + (long)(*piVar22 + 1) * 0x10 + 0x138);
        goto LAB_05842694;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_02f421d0(plVar19,lVar9,1);
LAB_05842694:
  plVar12 = (long *)(*(code *)*puVar11)(plVar19,puVar11[1]);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  bVar1 = *(byte *)(*(long *)
                     Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                   + 0x130);
  if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar12);
  }
  if (*(uint *)(plVar10 + 3) <= *(uint *)(plVar12 + 0xf)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar9 = *(long *)(plVar12[5] + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar14 = (long *)plVar10[(long)(int)*(uint *)(plVar12 + 0xf) + 4];
  uVar21 = FUN_050eed48(lVar9,0);
  if ((uVar21 & 1) != 0) {
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(plVar12 + 0xf)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar13 = *(long **)(plVar12[5] + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(plVar12 + 0xf) * 4 + 0x20);
    uVar16 = (**(code **)(*plVar13 + 0x418))(plVar13,*(undefined8 *)(*plVar13 + 0x420));
    if (plVar14 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)(puVar27 + 0xa0) + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(puVar27 + 0xa0))
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar14);
      }
    }
    uVar21 = FUN_0583f95c(uVar16,plVar14,uVar6,uVar16,1);
  }
  uVar21 = FUN_058440d4(uVar21,plVar12,plVar12[5]);
  if ((uVar21 & 1) == 0) {
    if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *(long *)(plVar12[5] + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar21 = FUN_050eed48(lVar9,0);
    if ((uVar21 & 1) != 0) {
      FUN_05843a60(uVar21,plVar12);
    }
  }
  goto joined_r0x058425d0;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_05842834:
    if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_05842868;
    }
  }
LAB_0584284c:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_05842868:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_05842884:
  if (plStack0000000000000030 != (long *)0x0) {
    plVar10 = *(long **)(unaff_x21 + 0x30);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
      puVar4 = PTR_DAT_067c91b8;
      do {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar10;
        lVar9 = *(long *)puVar4;
        uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar9) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_05842918;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar9,0);
LAB_05842918:
        uVar21 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar3 = PTR_DAT_067c91b0;
        if ((uVar21 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_02f45174(plVar10,*(undefined8 *)PTR_DAT_067c91b0);
          if (plVar10 == (long *)0x0) goto LAB_05842b18;
          lVar9 = *plVar10;
          uVar21 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar21 == 0) goto LAB_05842ae0;
          piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_05842ac8;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar10;
        lVar9 = *(long *)puVar4;
        uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar9) {
              puVar11 = (undefined8 *)(lVar17 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_05842980;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar9,1);
LAB_05842980:
        plVar19 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                         + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar19);
        }
        uVar24 = *(uint *)(plVar19 + 0xf);
        if (*(uint *)(plStack0000000000000030 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar12 = (long *)plStack0000000000000030[(long)(int)uVar24 + 4];
        if (plVar12 != (long *)0x0) {
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (plVar19[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar19 = *(long **)(plVar19[0xe] + 0x10);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar6 = *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20);
          uVar16 = (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
          bVar1 = *(byte *)(*(long *)(puVar27 + 0xa0) + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)(puVar27 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar12);
          }
          FUN_0583f95c(uVar16,plVar12,uVar6,uVar16,1);
          FUN_05850888();
        }
      } while( true );
    }
    goto LAB_05842b50;
  }
  goto LAB_05842b18;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_05842ac8:
    if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_05842afc;
    }
  }
LAB_05842ae0:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_05842afc:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_05842b18:
  FUN_05843f90();
  return;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_05841538:
    if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_0584157c;
    }
  }
LAB_05841550:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)puVar3,0);
LAB_0584157c:
  (*(code *)*puVar11)(plVar19,puVar11[1]);
System_Net_HttpWebRequest__<GetRewriteHandler>b__271_0:
  if (((int)unaff_x22[0x1b] == 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_size__
                               );
    FUN_05116b38(lVar17,0);
    puVar27 = 
    Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_Clear__
    ;
    *(byte *)(lVar17 + 0x20) = in_stack_00000050._4_1_ & 1;
    uVar16 = *(undefined8 *)puVar27;
    *(long **)(lVar17 + 0x10) = unaff_x22;
    *(long *)(lVar17 + 0x18) = unaff_x21;
    uVar16 = thunk_FUN_02f45270(uVar16);
    FUN_0583b758(uVar16,lVar17,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_Item__
                );
    plVar19 = *(long **)(unaff_x21 + 0x18);
    if (plVar19 == (long *)0x0) goto LAB_05842b50;
    lVar17 = *plVar19;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_067ca018) {
          puVar11 = (undefined8 *)(lVar17 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_05841674;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)PTR_DAT_067ca018,1);
LAB_05841674:
    (*(code *)*puVar11)(plVar19,puVar11[1]);
    lStack0000000000000008 =
         thunk_FUN_02f45270(*(undefined8 *)
                             Method_UnityEngine_Rendering_DebugUI_Field<Vector2>_GetValue__);
    FUN_0583fd40();
    FUN_0583be44();
  }
  else {
    lStack0000000000000008 = 0;
  }
  plVar19 = (long *)unaff_x22[3];
  if (plVar19 != (long *)0x0) {
    lVar17 = lVar18 + 0x20;
    iVar26 = -1;
    plStack0000000000000018 = (long *)0x0;
    puVar27 = PTR_DAT_067c9338;
    while (iVar8 = (**(code **)(*plVar19 + 0x198))(plVar19,*(undefined8 *)(*plVar19 + 0x1a0)),
          iVar8 != 0xf && iVar26 < iVar7 + -1) {
      plVar19 = (long *)unaff_x22[3];
      if (plVar19 == (long *)0x0) goto LAB_05842b50;
      iVar8 = (**(code **)(*plVar19 + 0x198))(plVar19,*(undefined8 *)(*plVar19 + 0x1a0));
      if (iVar8 == 1) {
        if ((in_stack_00000050 & 1) == 0) {
          if (!bVar5) {
            uVar21 = FUN_0585314c(unaff_x21,0);
            plVar19 = (long *)unaff_x22[3];
            if ((uVar21 & 1) == 0) {
              if (plVar19 == (long *)0x0) goto LAB_05842b50;
              uVar16 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
              plVar19 = (long *)unaff_x22[3];
              if (plVar19 == (long *)0x0) goto LAB_05842b50;
              uVar15 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
              plVar19 = (long *)FUN_05852de4(unaff_x21,uVar16,uVar15,0);
            }
            else {
              if (plVar19 == (long *)0x0) goto LAB_05842b50;
              uVar16 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
              plVar19 = (long *)unaff_x22[3];
              if (plVar19 == (long *)0x0) goto LAB_05842b50;
              uVar15 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
              plVar19 = (long *)FUN_05852a38(unaff_x21,uVar16,uVar15,iVar26,0);
            }
            bVar5 = false;
            goto LAB_05841aa0;
          }
          plVar19 = *(long **)(unaff_x21 + 0x70);
          if (plVar19 == (long *)0x0) goto LAB_05842b50;
          bVar1 = *(byte *)(*(long *)
                             Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                           + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
             )) goto LAB_05842bf4;
          plVar19 = (long *)FUN_0584b2a0(plVar19,0);
          if (plVar19 == (long *)0x0) goto LAB_05842b50;
          plVar19 = (long *)(**(code **)(*plVar19 + 0x2e8))
                                      (plVar19,0,*(undefined8 *)(*plVar19 + 0x2f0));
          if (plVar19 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__
                             + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__))
            goto LAB_05842b98;
            bVar5 = false;
            goto LAB_05841aa8;
          }
          bVar5 = false;
LAB_05841ad0:
          lVar20 = *(long *)(unaff_x21 + 0x50);
          if (lVar20 == 0) {
            (**(code **)(*unaff_x22 + 0x1e8))();
          }
          else {
            if (*(long *)(lVar20 + 0x28) == 0) goto LAB_05842b50;
            uVar21 = FUN_0582ae1c(*(long *)(lVar20 + 0x28),0);
            lVar25 = *(long *)(lVar20 + 0x28);
            if ((uVar21 & 1) == 0) {
              uVar16 = FUN_05844444();
              FUN_05843a60(uVar16,lVar20);
            }
            else {
              if ((plVar10 == (long *)0x0) || (lVar18 == 0)) goto LAB_05842b50;
              uVar24 = *(uint *)(lVar20 + 0x78);
              lVar20 = (long)(int)uVar24;
              if (*(uint *)(lVar18 + 0x18) <= uVar24) {
LAB_05842b6c:
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              iVar8 = *(int *)(lVar17 + lVar20 * 4);
              *(int *)(lVar17 + lVar20 * 4) = iVar8 + 1;
              if (lVar25 == 0) goto LAB_05842b50;
              FUN_0582baa8(lVar25,0);
              uVar16 = FUN_05844444();
              if (*(uint *)(plVar10 + 3) <= uVar24) goto LAB_05842b6c;
LAB_05841b4c:
              FUN_05843cbc(uVar16,lVar25,plVar10 + lVar20 + 4,iVar8,uVar16,1);
            }
          }
        }
        else {
          plVar19 = (long *)unaff_x22[3];
          if (plVar19 == (long *)0x0) goto LAB_05842b50;
          uVar16 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
          plVar19 = (long *)unaff_x22[3];
          if (plVar19 == (long *)0x0) goto LAB_05842b50;
          uVar15 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
          plVar19 = (long *)FUN_05852a38(unaff_x21,uVar16,uVar15,iVar26,0);
LAB_05841aa0:
          if (plVar19 == (long *)0x0) goto LAB_05841ad0;
LAB_05841aa8:
          plVar12 = (long *)plVar19[5];
          if ((plVar12 == (long *)0x0) || (lVar9 == 0)) goto LAB_05842b50;
          if (*(uint *)(lVar9 + 0x18) <= *(uint *)(plVar12 + 3)) goto LAB_05842b6c;
          if (*(char *)(lVar9 + (int)*(uint *)(plVar12 + 3) + 0x20) != '\0') goto LAB_05841ad0;
          if (plVar12 != plStack0000000000000018) {
            iVar26 = *(int *)((long)plVar19 + 0x54);
            bVar1 = *(byte *)(*(long *)
                               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                             + 0x130);
            plStack0000000000000018 = plVar12;
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
               )) {
              iVar26 = iVar26 + 1;
            }
          }
          uVar16 = thunk_FUN_02f1863c(plVar12,0);
          uVar15 = *(undefined8 *)
                    Method_UnityEngine_UIElements_Layout_FixedBuffer4<FilterParameter>_get_Item__;
          if (*(int *)(*(long *)(puVar27 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(puVar27 + 0xe0));
          }
          uVar15 = FUN_050e4454(uVar15,0);
          uVar21 = FUN_050ed374(uVar16,uVar15,0);
          if ((uVar21 & 1) == 0) {
            if (plVar19[5] == 0) goto LAB_05842b50;
            uVar16 = thunk_FUN_02f1863c(plVar19[5],0);
            uVar15 = *(undefined8 *)
                      Method_UnityEngine_UIElements_Layout_FixedBuffer2<LayoutValue>_get_Item__;
            if (*(int *)(*(long *)(puVar27 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)(puVar27 + 0xe0));
            }
            uVar15 = FUN_050e4454(uVar15,0);
            uVar21 = FUN_050ed374(uVar16,uVar15,0);
            plVar12 = (long *)plVar19[5];
            if ((uVar21 & 1) == 0) {
              if (plVar12 == (long *)0x0) goto LAB_05842b50;
              uVar16 = thunk_FUN_02f1863c(plVar12,0);
              uVar15 = *(undefined8 *)
                        Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_get_size__
              ;
              if (*(int *)(*(long *)(puVar27 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)(puVar27 + 0xe0));
              }
              uVar15 = FUN_050e4454(uVar15,0);
              uVar21 = FUN_050ed374(uVar16,uVar15,0);
              plVar12 = (long *)plVar19[5];
              if ((uVar21 & 1) != 0) {
                if (plVar12 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)
                                     Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_get_Mode__
                                   + 0x130);
                  if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)
                       Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_get_Mode__
                     )) goto LAB_05842bac;
                  if (plVar12[5] != 0) {
                    uVar21 = FUN_0582ae1c(plVar12[5],0);
                    lVar25 = plVar12[5];
                    if ((uVar21 & 1) == 0) {
                      uVar21 = FUN_05844444();
                      goto LAB_05842474;
                    }
                    if ((plVar10 != (long *)0x0) && (lVar18 != 0)) {
                      uVar24 = *(uint *)(plVar12 + 0xf);
                      lVar20 = (long)(int)uVar24;
                      if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_05842b6c;
                      iVar8 = *(int *)(lVar17 + lVar20 * 4);
                      *(int *)(lVar17 + lVar20 * 4) = iVar8 + 1;
                      if (lVar25 != 0) {
                        FUN_0582baa8(lVar25,0);
                        uVar16 = FUN_05844444();
                        if (*(uint *)(plVar10 + 3) <= uVar24) goto LAB_05842b6c;
                        goto LAB_05841b4c;
                      }
                    }
                  }
                }
                goto LAB_05842b50;
              }
              if (plVar12 == (long *)0x0) goto LAB_05842b50;
              uVar16 = thunk_FUN_02f1863c(plVar12,0);
              uVar15 = *(undefined8 *)
                        Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_Clear__
              ;
              if (*(int *)(*(long *)(puVar27 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)(puVar27 + 0xe0));
              }
              uVar15 = FUN_050e4454(uVar15,0);
              uVar21 = FUN_050ed374(uVar16,uVar15,0);
              if ((uVar21 & 1) == 0) {
                thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
                uVar16 = thunk_FUN_02f45270();
                uVar15 = thunk_FUN_02f6ef30(
                                           Method_UnityEngine_UIElements_Layout_FixedBuffer9<LayoutValue>_get_Item__
                                           );
                FUN_050d5404(uVar16,uVar15,0);
LAB_05842cac:
                uVar15 = thunk_FUN_02f6ef30(
                                           Method_Unity_Collections_FixedList32Bytes<int>_get_Capacity__
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar16,uVar15);
              }
              lVar20 = plVar19[5];
              if (lVar20 == 0) goto LAB_05842b50;
              uVar24 = *(uint *)(lVar20 + 0x18);
              if (*(uint *)(lVar9 + 0x18) <= uVar24) goto LAB_05842b6c;
              *(undefined1 *)(lVar9 + (int)uVar24 + 0x20) = 1;
              if ((int)unaff_x22[0x1b] == 0) {
                if (*(long *)(lVar20 + 0x28) == 0) goto LAB_05842b50;
                if (*(int *)(*(long *)(lVar20 + 0x28) + 0x20) == 1) {
                  if ((lStack0000000000000008 == 0) ||
                     (*(long *)(lStack0000000000000008 + 0x18) == 0)) goto LAB_05842b50;
                  if (*(uint *)(*(long *)(lStack0000000000000008 + 0x18) + 0x18) <= uVar24)
                  goto LAB_05842b6c;
                  lVar20 = FUN_0583f098();
                }
                else {
                  if ((lStack0000000000000008 == 0) ||
                     (*(long *)(lStack0000000000000008 + 0x18) == 0)) goto LAB_05842b50;
                  if (*(uint *)(*(long *)(lStack0000000000000008 + 0x18) + 0x18) <= uVar24)
                  goto LAB_05842b6c;
                  lVar20 = FUN_0583f034();
                }
                uVar21 = FUN_0584ffcc(plVar19,0);
                if ((uVar21 & 1) == 0) {
                  if (lVar20 != 0) {
                    plVar12 = (long *)plVar19[5];
LAB_05842474:
                    FUN_05843a60(uVar21,plVar12);
                  }
                  goto LAB_05841ba8;
                }
                plVar12 = (long *)plVar19[5];
                if ((plVar12 == (long *)0x0) ||
                   (lVar20 = *(long *)(lStack0000000000000008 + 0x18), lVar20 == 0))
                goto LAB_05842b50;
                if (*(uint *)(lVar20 + 0x18) <= *(uint *)(plVar12 + 3)) goto LAB_05842b6c;
                if (*(long *)(lVar20 + (long)(int)*(uint *)(plVar12 + 3) * 8 + 0x20) == 0)
                goto LAB_05842474;
              }
              else {
                uVar16 = FUN_0584429c();
                FUN_05843a60(uVar16,lVar20);
                if (plVar19[6] != 0) {
                  if ((long *)plVar19[5] == (long *)0x0) goto LAB_05842b50;
                  lVar20 = *(long *)plVar19[5];
                  bVar1 = *(byte *)(*(long *)
                                     Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                                   + 0x130);
                  if ((*(byte *)(lVar20 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)
                       Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                     )) {
LAB_05842bf4:
                    /* WARNING: Subroutine does not return */
                    FUN_02f08d48();
                  }
                  FUN_05850dc0();
                }
              }
            }
            else {
              if (plVar12 == (long *)0x0) goto LAB_05842b50;
              bVar1 = *(byte *)(*(long *)
                                 Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                               + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)
                   Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                 )) {
LAB_05842bac:
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar12);
              }
              if ((plVar10 == (long *)0x0) || (lVar18 == 0)) goto LAB_05842b50;
              uVar24 = *(uint *)(plVar12 + 0xf);
              lVar20 = (long)(int)uVar24;
              if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_05842b6c;
              lVar25 = plVar12[5];
              iVar8 = *(int *)(lVar17 + lVar20 * 4);
              *(int *)(lVar17 + lVar20 * 4) = iVar8 + 1;
              uVar16 = FUN_0584429c();
              uVar15 = FUN_058440d4(uVar16,plVar19[5],plVar19[9]);
              if (*(uint *)(plVar10 + 3) <= uVar24) goto LAB_05842b6c;
              uVar16 = FUN_05843cbc(uVar15,lVar25,plVar10 + lVar20 + 4,iVar8,uVar16,
                                    ((uint)uVar15 ^ 0xffffffff) & 1);
              puVar27 = PTR_DAT_067c9338;
              if (plVar12[0xc] != 0) {
                if (plStack0000000000000030 != (long *)0x0) {
                  uVar24 = *(uint *)(plVar12 + 0xf);
                  if ((*(uint *)(lVar18 + 0x18) <= uVar24) ||
                     (*(uint *)(plStack0000000000000030 + 3) <= uVar24)) goto LAB_05842b6c;
                  FUN_05843cbc(uVar16,plVar12[0xe],plStack0000000000000030 + (long)(int)uVar24 + 4,
                               *(int *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) + -1,plVar19[6],1);
                  goto LAB_05841ba8;
                }
                goto LAB_05842b50;
              }
            }
          }
          else {
            if (((int)unaff_x22[0x1b] == 0) && (uVar21 = FUN_0584ffcc(plVar19,0), (uVar21 & 1) != 0)
               ) {
              if (((lStack0000000000000008 == 0) || (plVar19[5] == 0)) ||
                 (*(long *)(lStack0000000000000008 + 0x18) == 0)) goto LAB_05842b50;
              if (*(uint *)(*(long *)(lStack0000000000000008 + 0x18) + 0x18) <=
                  *(uint *)(plVar19[5] + 0x18)) goto LAB_05842b6c;
              uVar16 = FUN_0583f034();
              lVar20 = plVar19[5];
              if ((lVar20 == 0) || (lVar25 = *(long *)(lStack0000000000000008 + 0x18), lVar25 == 0))
              goto LAB_05842b50;
              if (*(uint *)(lVar25 + 0x18) <= *(uint *)(lVar20 + 0x18)) goto LAB_05842b6c;
              if (*(long *)(lVar25 + (long)(int)*(uint *)(lVar20 + 0x18) * 8 + 0x20) == 0) {
                uVar21 = FUN_058440d4(uVar16,lVar20,plVar19[9]);
                if ((uVar21 & 1) != 0) {
                  FUN_02a7da48(plVar19);
                  lVar9 = plVar19[9];
                  uVar16 = FUN_02a7da48(lVar9);
                  uVar16 = FUN_0583c1d4(uVar16,*(undefined8 *)(lVar9 + 0x38));
                  goto LAB_05842cac;
                }
                FUN_05843a60(uVar21,plVar19[5]);
              }
              else {
                if (((plVar19[8] == 0) || (lVar20 = *(long *)(plVar19[8] + 0x58), lVar20 == 0)) ||
                   (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0)) goto LAB_05842b50;
                uVar21 = FUN_050eed48(lVar20,0);
                if ((uVar21 & 1) == 0) {
                  uVar21 = FUN_058440d4(uVar21,plVar19[5],plVar19[9]);
                  if ((uVar21 & 1) == 0) {
                    if ((plVar19[8] == 0) || (lVar20 = *(long *)(plVar19[8] + 0x58), lVar20 == 0))
                    goto LAB_05842b50;
                    uVar16 = FUN_05844200(uVar21,*(undefined8 *)(lVar20 + 0x10));
                    FUN_05843a60(uVar16,plVar19[5]);
                  }
                  else {
                    uVar16 = FUN_05843bec(uVar21,plVar19[5]);
                  }
                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                               Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_Add__
                                             );
                  FUN_0583b640();
                  if ((plVar19[5] == 0) ||
                     (lVar20 = *(long *)(lStack0000000000000008 + 0x18), lVar20 == 0))
                  goto LAB_05842b50;
                  uVar24 = *(uint *)(plVar19[5] + 0x18);
                  if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_05842b6c;
                  uVar23 = *(undefined8 *)(lVar20 + (long)(int)uVar24 * 8 + 0x20);
                  lVar20 = thunk_FUN_02f45270(*(undefined8 *)
                                               Method_UnityEngine_Rendering_DebugUI_Field<uint>_get_getter__
                                             );
                  FUN_05116b38(lVar20,0);
                  *(undefined8 *)(lVar20 + 0x10) = uVar15;
                  *(undefined8 *)(lVar20 + 0x18) = uVar16;
                  *(undefined8 *)(lVar20 + 0x28) = uVar23;
                  FUN_0583bd8c();
                  if ((plVar19[5] == 0) ||
                     (lVar20 = *(long *)(lStack0000000000000008 + 0x18), lVar20 == 0))
                  goto LAB_05842b50;
                  uVar24 = *(uint *)(plVar19[5] + 0x18);
                  if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_05842b6c;
                  *(undefined8 *)(lVar20 + (long)(int)uVar24 * 8 + 0x20) = 0;
                }
              }
            }
            else {
              uVar21 = FUN_058440d4(uVar21,plVar19[5],plVar19[9]);
              if ((uVar21 & 1) == 0) {
                if (((plVar19[8] == 0) || (lVar20 = *(long *)(plVar19[8] + 0x58), lVar20 == 0)) ||
                   (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0)) goto LAB_05842b50;
                uVar21 = FUN_050eed48(lVar20,0);
                if ((uVar21 & 1) == 0) {
                  lVar20 = FUN_05843bec(uVar21,plVar19[5]);
                  if (lVar20 == 0) {
                    if ((plVar19[8] == 0) || (lVar20 = *(long *)(plVar19[8] + 0x58), lVar20 == 0))
                    goto LAB_05842b50;
                    uVar16 = FUN_05844200(0,*(undefined8 *)(lVar20 + 0x10));
                    FUN_05843a60(uVar16,plVar19[5]);
                  }
                  FUN_05842f7c();
                }
                else {
                  lVar20 = FUN_05842f7c();
                  if ((lVar20 != 0) || ((char)plVar19[7] != '\0')) {
                    FUN_05843a60(lVar20,plVar19[5]);
                  }
                }
              }
              else {
                FUN_05843bec(uVar21,plVar19[5]);
                FUN_05842f7c();
              }
            }
            if (plVar19[5] == 0) goto LAB_05842b50;
            uVar24 = *(uint *)(plVar19[5] + 0x18);
            if (*(uint *)(lVar9 + 0x18) <= uVar24) goto LAB_05842b6c;
            *(undefined1 *)(lVar9 + (int)uVar24 + 0x20) = 1;
          }
        }
      }
      else {
        plVar19 = (long *)unaff_x22[3];
        if (plVar19 == (long *)0x0) goto LAB_05842b50;
        iVar8 = (**(code **)(*plVar19 + 0x198))(plVar19,*(undefined8 *)(*plVar19 + 0x1a0));
        if (iVar8 == 3) {
LAB_058417b8:
          plVar19 = *(long **)(unaff_x21 + 0x68);
          if (plVar19 == (long *)0x0) goto LAB_058418e4;
          lVar20 = *plVar19;
          bVar1 = *(byte *)(lVar20 + 0x130);
          bVar2 = *(byte *)(*(long *)
                             Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                           + 0x130);
          if ((bVar2 <= bVar1) &&
             (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)
               Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
             )) {
            bVar2 = *(byte *)(*(long *)
                               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                             + 0x130);
            if ((bVar1 < bVar2) ||
               (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)
                 Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
               )) {
              if (plVar19[5] == 0) goto LAB_05842b50;
              lVar20 = FUN_0582baa8(plVar19[5],0);
            }
            else {
              if ((plVar19[0x10] == 0) || (lVar20 = FUN_05853b18(plVar19[0x10],0), lVar20 == 0))
              goto LAB_05842b50;
              lVar20 = *(long *)(lVar20 + 0x48);
            }
            if (lVar20 != 0) {
              uVar16 = *(undefined8 *)(lVar20 + 0x10);
              lVar20 = *(long *)(puVar27 + 0x90);
              if (*(int *)(*(long *)(puVar27 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar15 = FUN_050e4454(lVar20 + 0x20,0);
              uVar21 = FUN_050ed374(uVar16,uVar15,0);
              if ((uVar21 & 1) == 0) {
                uVar16 = FUN_05844444();
              }
              else {
                plVar12 = (long *)unaff_x22[3];
                if (plVar12 == (long *)0x0) goto LAB_05842b50;
                uVar16 = (**(code **)(*plVar12 + 0x528))(plVar12,*(undefined8 *)(*plVar12 + 0x530));
              }
              if ((plVar10 != (long *)0x0) && (lVar18 != 0)) {
                uVar24 = *(uint *)(plVar19 + 0xf);
                lVar20 = (long)(int)uVar24;
                if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_05842b6c;
                lVar25 = plVar19[5];
                iVar8 = *(int *)(lVar17 + lVar20 * 4);
                *(int *)(lVar17 + lVar20 * 4) = iVar8 + 1;
                if (*(uint *)(plVar10 + 3) <= uVar24) goto LAB_05842b6c;
                FUN_05843cbc(uVar16,lVar25,plVar10 + lVar20 + 4,iVar8,uVar16,1);
                goto LAB_05841ba8;
              }
            }
            goto LAB_05842b50;
          }
          bVar2 = *(byte *)(*(long *)
                             Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                           + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
             )) {
LAB_05842b98:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar19);
          }
          plVar12 = (long *)FUN_0584b2a0(plVar19,0);
          if ((plVar12 == (long *)0x0) ||
             (plVar12 = (long *)(**(code **)(*plVar12 + 0x2e8))
                                          (plVar12,0,*(undefined8 *)(*plVar12 + 0x2f0)),
             plVar12 == (long *)0x0)) goto LAB_05842b50;
          bVar1 = *(byte *)(*(long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__ +
                           0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__))
          goto LAB_05842bac;
          if (plVar12[9] == 0) goto LAB_05842b50;
          uVar16 = *(undefined8 *)(plVar12[9] + 0x10);
          lVar20 = *(long *)(puVar27 + 0x90);
          if (*(int *)(*(long *)(puVar27 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar15 = FUN_050e4454(lVar20 + 0x20,0);
          uVar21 = FUN_050ed374(uVar16,uVar15,0);
          plVar12 = (long *)unaff_x22[3];
          if ((uVar21 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_05842b50;
            (**(code **)(*plVar12 + 0x528))(plVar12,*(undefined8 *)(*plVar12 + 0x530));
            uVar16 = FUN_05843938();
          }
          else {
            if (plVar12 == (long *)0x0) goto LAB_05842b50;
            uVar16 = (**(code **)(*plVar12 + 0x528))(plVar12,*(undefined8 *)(*plVar12 + 0x530));
          }
          FUN_05843a60(uVar16,plVar19);
        }
        else {
          plVar19 = (long *)unaff_x22[3];
          if (plVar19 == (long *)0x0) goto LAB_05842b50;
          iVar8 = (**(code **)(*plVar19 + 0x198))(plVar19,*(undefined8 *)(*plVar19 + 0x1a0));
          if (iVar8 == 4) goto LAB_058417b8;
LAB_058418e4:
          FUN_0583f7d8();
          FUN_0583f560();
        }
      }
LAB_05841ba8:
      plVar19 = (long *)unaff_x22[3];
      if (plVar19 == (long *)0x0) goto LAB_05842b50;
      (**(code **)(*plVar19 + 0x538))(plVar19,*(undefined8 *)(*plVar19 + 0x540));
      plVar19 = (long *)unaff_x22[3];
      if (plVar19 == (long *)0x0) goto LAB_05842b50;
    }
    if (plVar10 == (long *)0x0) goto LAB_05842884;
    plVar19 = *(long **)(unaff_x21 + 0x30);
    if (plVar19 != (long *)0x0) {
      plVar19 = (long *)(**(code **)(*plVar19 + 0x388))(plVar19,*(undefined8 *)(*plVar19 + 0x390));
      puVar4 = PTR_DAT_067c91b8;
      goto joined_r0x058425d0;
    }
  }
LAB_05842b50:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


