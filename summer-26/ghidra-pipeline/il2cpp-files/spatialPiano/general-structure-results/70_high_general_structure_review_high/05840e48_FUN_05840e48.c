/*
FUNCTION_NAME: FUN_05840e48
ENTRY_POINT: 05840e48
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

void FUN_05840e48(long *param_1,long param_2,undefined8 param_3,byte param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  undefined8 uVar25;
  uint uVar26;
  long lVar27;
  int iVar28;
  undefined *puVar29;
  long local_d8;
  long *local_c8;
  long *local_b0;
  
  if ((DAT_06bc0f79 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d23f0);
    FUN_02f08768(Method_UnityEngine_Rendering_DebugUI_Field<uint>_get_getter__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_Item__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_size__
                );
    FUN_02f08768(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>_GetValue__);
    FUN_02f08768(PTR_DAT_067ca018);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067cb890);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_Add__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_Clear__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_get_Item__
                );
    FUN_02f08768(Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_get_size__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_get_Mode__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_Clear__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_FixedBuffer2<LayoutValue>_get_Item__);
    FUN_02f08768(
                Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_FixedBuffer4<FilterParameter>_get_Item__);
    FUN_02f08768(PTR_DAT_067cd6c0);
    DAT_06bc0f79 = 1;
  }
  FUN_05840a58(param_1,param_2,param_3,param_4 & 1);
  if ((param_4 & 1) == 0) {
    plVar9 = (long *)param_1[3];
    if (plVar9 == (long *)0x0) goto LAB_05842b50;
    (**(code **)(*plVar9 + 0x438))(plVar9,*(undefined8 *)(*plVar9 + 0x440));
    plVar9 = (long *)param_1[3];
    if (plVar9 == (long *)0x0) goto LAB_05842b50;
    uVar10 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if ((uVar10 & 1) != 0) {
      FUN_05843f90(param_1,param_2,param_3,0);
      return;
    }
    plVar9 = (long *)param_1[3];
    if (plVar9 == (long *)0x0) goto LAB_05842b50;
    (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
  }
  puVar29 = PTR_DAT_067d23f0;
  if (param_2 == 0) goto LAB_05842b50;
  plVar9 = *(long **)(param_2 + 0x18);
  if (plVar9 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar19 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar10 != 0) {
      piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_067ca018) {
          puVar11 = (undefined8 *)(lVar19 + (long)(*piVar24 + 1) * 0x10 + 0x138);
          goto FUN_058410ac;
        }
        uVar10 = uVar10 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067ca018,1);
FUN_058410ac:
    uVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
  }
  lVar19 = FUN_02f0880c(*(undefined8 *)puVar29,uVar6);
  if (((param_4 & 1) == 0) || ((int)param_1[0x1b] != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = *(long *)(param_2 + 0x70) != 0;
  }
  plVar9 = (long *)param_1[3];
  if (plVar9 == (long *)0x0) goto LAB_05842b50;
  (**(code **)(*plVar9 + 0x538))(plVar9,*(undefined8 *)(*plVar9 + 0x540));
  if ((param_5 & 1) == 0) {
    iVar7 = 0x7fffffff;
  }
  else {
    plVar9 = *(long **)(param_2 + 0x18);
    if (plVar9 == (long *)0x0) {
      iVar7 = -1;
    }
    else {
      lVar20 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_067ca018) {
            puVar11 = (undefined8 *)(lVar20 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_05841180;
          }
          uVar10 = uVar10 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067ca018,1);
LAB_05841180:
      iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
    }
  }
  plVar9 = *(long **)(param_2 + 0x30);
  if (plVar9 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    lVar20 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cb890,uVar6);
    plVar9 = *(long **)(param_2 + 0x30);
    if (plVar9 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
      puVar29 = PTR_DAT_067c9648;
      plVar9 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,uVar6);
      plVar21 = *(long **)(param_2 + 0x30);
      if (plVar21 != (long *)0x0) {
        plVar21 = (long *)(**(code **)(*plVar21 + 0x388))(plVar21,*(undefined8 *)(*plVar21 + 0x390))
        ;
        puVar4 = PTR_DAT_067c91b8;
        local_b0 = (long *)0x0;
        do {
          if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar22 = *plVar21;
          lVar18 = *(long *)puVar4;
          uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar10 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar18) {
                puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_05841290;
              }
              uVar10 = uVar10 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar21,lVar18,0);
LAB_05841290:
          uVar10 = (*(code *)*puVar11)(plVar21,puVar11[1]);
          puVar3 = PTR_DAT_067c91b0;
          if ((uVar10 & 1) == 0) {
            plVar21 = (long *)thunk_FUN_02f45174(plVar21,*(undefined8 *)PTR_DAT_067c91b0);
            if (plVar21 == (long *)0x0) goto System_Net_HttpWebRequest__<GetRewriteHandler>b__271_0;
            lVar18 = *plVar21;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar10 == 0) goto LAB_05841550;
            piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            goto LAB_05841538;
          }
          if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar22 = *plVar21;
          lVar18 = *(long *)puVar4;
          uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar10 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar18) {
                puVar11 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_058412f8;
              }
              uVar10 = uVar10 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar21,lVar18,1);
LAB_058412f8:
          plVar12 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
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
          uVar10 = FUN_058440d4(plVar12,plVar12,plVar12[5],param_3,param_4 & 1);
          if ((uVar10 & 1) == 0) {
            if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar18 = *(long *)(plVar12[5] + 0x10);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar10 = FUN_050eed48(lVar18,0);
            if ((uVar10 & 1) == 0) {
              plVar14 = (long *)FUN_05849970(plVar12,param_3,0);
              plVar13 = plVar14;
              if (plVar14 == (long *)0x0) {
                plVar13 = (long *)FUN_05844138(0,plVar12[5]);
                plVar14 = (long *)FUN_05843a60(plVar13,plVar12,param_3,plVar13,param_4 & 1);
              }
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar26 = *(uint *)(plVar12 + 0xf);
              if ((plVar13 != (long *)0x0) &&
                 (plVar14 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)(*plVar9 + 0x40)),
                 plVar14 == (long *)0x0)) {
                uVar17 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar17,0);
              }
              if (*(uint *)(plVar9 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
            }
            else {
              uVar26 = *(uint *)(plVar12 + 0xf);
              plVar13 = (long *)FUN_05844138(uVar10,plVar12[5]);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar14 = (long *)0x0;
              if ((plVar13 != (long *)0x0) &&
                 (plVar14 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)(*plVar9 + 0x40)),
                 plVar14 == (long *)0x0)) {
                uVar17 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar17,0);
              }
              if (*(uint *)(plVar9 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
            }
          }
          else {
            uVar26 = *(uint *)(plVar12 + 0xf);
            plVar13 = (long *)FUN_05849970(plVar12,param_3,0);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            plVar14 = (long *)0x0;
            if ((plVar13 != (long *)0x0) &&
               (plVar14 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)(*plVar9 + 0x40)),
               plVar14 == (long *)0x0)) {
              uVar17 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
              FUN_02f0888c(uVar17,0);
            }
            if (*(uint *)(plVar9 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
          plVar9[(long)(int)uVar26 + 4] = (long)plVar13;
          if (plVar12[0xc] != 0) {
            if (local_b0 == (long *)0x0) {
              plVar14 = *(long **)(param_2 + 0x30);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar6 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
              plVar14 = (long *)FUN_02f0880c(*(undefined8 *)puVar29,uVar6);
              local_b0 = plVar14;
            }
            uVar26 = *(uint *)(plVar12 + 0xf);
            lVar18 = FUN_05844138(plVar14,plVar12[0xe]);
            if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if ((lVar18 != 0) &&
               (lVar22 = thunk_FUN_02f45174(lVar18,*(undefined8 *)(*local_b0 + 0x40)), lVar22 == 0))
            {
              uVar17 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
              FUN_02f0888c(uVar17,0);
            }
            if (*(uint *)(local_b0 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            local_b0[(long)(int)uVar26 + 4] = lVar18;
          }
        } while( true );
      }
    }
    goto LAB_05842b50;
  }
  local_b0 = (long *)0x0;
  plVar9 = (long *)0x0;
  lVar20 = 0;
  goto System_Net_HttpWebRequest__<GetRewriteHandler>b__271_0;
joined_r0x058425d0:
  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar18 = *plVar21;
  lVar19 = *(long *)puVar4;
  uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar10 != 0) {
    piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == lVar19) {
        puVar11 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_0584262c;
      }
      uVar10 = uVar10 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar10 != 0);
  }
  puVar11 = (undefined8 *)FUN_02f421d0(plVar21,lVar19,0);
LAB_0584262c:
  uVar10 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  puVar3 = PTR_DAT_067c91b0;
  if ((uVar10 & 1) == 0) {
    plVar9 = (long *)thunk_FUN_02f45174(plVar21,*(undefined8 *)PTR_DAT_067c91b0);
    if (plVar9 == (long *)0x0) goto LAB_05842884;
    lVar19 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar10 == 0) goto LAB_0584284c;
    piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    goto LAB_05842834;
  }
  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar18 = *plVar21;
  lVar19 = *(long *)puVar4;
  uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar10 != 0) {
    piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == lVar19) {
        puVar11 = (undefined8 *)(lVar18 + (long)(*piVar24 + 1) * 0x10 + 0x138);
        goto LAB_05842694;
      }
      uVar10 = uVar10 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar10 != 0);
  }
  puVar11 = (undefined8 *)FUN_02f421d0(plVar21,lVar19,1);
LAB_05842694:
  plVar12 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
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
  if (*(uint *)(plVar9 + 3) <= *(uint *)(plVar12 + 0xf)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar19 = *(long *)(plVar12[5] + 0x10);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar14 = (long *)plVar9[(long)(int)*(uint *)(plVar12 + 0xf) + 4];
  plVar13 = (long *)FUN_050eed48(lVar19,0);
  if (((ulong)plVar13 & 1) != 0) {
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar20 + 0x18) <= *(uint *)(plVar12 + 0xf)) {
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
    uVar6 = *(undefined4 *)(lVar20 + (long)(int)*(uint *)(plVar12 + 0xf) * 4 + 0x20);
    uVar17 = (**(code **)(*plVar13 + 0x418))(plVar13,*(undefined8 *)(*plVar13 + 0x420));
    if (plVar14 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)(puVar29 + 0xa0) + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(puVar29 + 0xa0))
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar14);
      }
    }
    plVar13 = (long *)FUN_0583f95c(uVar17,plVar14,uVar6,uVar17,1);
    plVar14 = plVar13;
  }
  uVar10 = FUN_058440d4(plVar13,plVar12,plVar12[5],param_3,param_4 & 1);
  if ((uVar10 & 1) == 0) {
    if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar19 = *(long *)(plVar12[5] + 0x10);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar10 = FUN_050eed48(lVar19,0);
    if ((uVar10 & 1) != 0) {
      FUN_05843a60(uVar10,plVar12,param_3,plVar14,param_4 & 1);
    }
  }
  goto joined_r0x058425d0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar24 = piVar24 + 4;
    if (uVar10 == 0) break;
LAB_05842834:
    if (*(long *)(piVar24 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_05842868;
    }
  }
LAB_0584284c:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,0);
LAB_05842868:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_05842884:
  if (local_b0 != (long *)0x0) {
    plVar9 = *(long **)(param_2 + 0x30);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      puVar4 = PTR_DAT_067c91b8;
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar18 = *plVar9;
        lVar19 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar10 != 0) {
          piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar19) {
              puVar11 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_05842918;
            }
            uVar10 = uVar10 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_02f421d0(plVar9,lVar19,0);
LAB_05842918:
        uVar10 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        puVar3 = PTR_DAT_067c91b0;
        if ((uVar10 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_02f45174(plVar9,*(undefined8 *)PTR_DAT_067c91b0);
          if (plVar9 == (long *)0x0) goto LAB_05842b18;
          lVar19 = *plVar9;
          uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar10 == 0) goto LAB_05842ae0;
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto LAB_05842ac8;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar18 = *plVar9;
        lVar19 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar10 != 0) {
          piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar19) {
              puVar11 = (undefined8 *)(lVar18 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto LAB_05842980;
            }
            uVar10 = uVar10 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_02f421d0(plVar9,lVar19,1);
LAB_05842980:
        plVar21 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                         + 0x130);
        if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar21);
        }
        uVar26 = *(uint *)(plVar21 + 0xf);
        if (*(uint *)(local_b0 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar12 = (long *)local_b0[(long)(int)uVar26 + 4];
        if (plVar12 != (long *)0x0) {
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(uint *)(lVar20 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (plVar21[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar14 = *(long **)(plVar21[0xe] + 0x10);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar6 = *(undefined4 *)(lVar20 + (long)(int)uVar26 * 4 + 0x20);
          uVar17 = (**(code **)(*plVar14 + 0x418))(plVar14,*(undefined8 *)(*plVar14 + 0x420));
          bVar1 = *(byte *)(*(long *)(puVar29 + 0xa0) + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)(puVar29 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar12);
          }
          uVar17 = FUN_0583f95c(uVar17,plVar12,uVar6,uVar17,1);
          FUN_05850888(param_3,plVar21[0xc],uVar17,0);
        }
      } while( true );
    }
    goto LAB_05842b50;
  }
  goto LAB_05842b18;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar24 = piVar24 + 4;
    if (uVar10 == 0) break;
LAB_05842ac8:
    if (*(long *)(piVar24 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_05842afc;
    }
  }
LAB_05842ae0:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,0);
LAB_05842afc:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_05842b18:
  FUN_05843f90(param_1,param_2,param_3,param_4 & 1);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar24 = piVar24 + 4;
    if (uVar10 == 0) break;
LAB_05841538:
    if (*(long *)(piVar24 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_0584157c;
    }
  }
LAB_05841550:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar21,*(long *)puVar3,0);
LAB_0584157c:
  (*(code *)*puVar11)(plVar21,puVar11[1]);
System_Net_HttpWebRequest__<GetRewriteHandler>b__271_0:
  if (((int)param_1[0x1b] == 0) && (*(long *)(param_2 + 0x18) != 0)) {
    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_size__
                               );
    FUN_05116b38(lVar18,0);
    puVar29 = 
    Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_Clear__
    ;
    *(byte *)(lVar18 + 0x20) = param_4 & 1;
    uVar17 = *(undefined8 *)puVar29;
    *(long **)(lVar18 + 0x10) = param_1;
    *(long *)(lVar18 + 0x18) = param_2;
    uVar17 = thunk_FUN_02f45270(uVar17);
    FUN_0583b758(uVar17,lVar18,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_Item__
                );
    plVar21 = *(long **)(param_2 + 0x18);
    if (plVar21 == (long *)0x0) goto LAB_05842b50;
    lVar18 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar10 != 0) {
      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_067ca018) {
          puVar11 = (undefined8 *)(lVar18 + (long)(*piVar24 + 1) * 0x10 + 0x138);
          goto LAB_05841674;
        }
        uVar10 = uVar10 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar21,*(long *)PTR_DAT_067ca018,1);
LAB_05841674:
    uVar6 = (*(code *)*puVar11)(plVar21,puVar11[1]);
    local_d8 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_DebugUI_Field<Vector2>_GetValue__);
    FUN_0583fd40(local_d8,param_3,uVar17,uVar6);
    FUN_0583be44(param_1,local_d8);
  }
  else {
    local_d8 = 0;
  }
  plVar21 = (long *)param_1[3];
  if (plVar21 != (long *)0x0) {
    lVar18 = lVar20 + 0x20;
    iVar28 = -1;
    local_c8 = (long *)0x0;
    puVar29 = PTR_DAT_067c9338;
    while (iVar8 = (**(code **)(*plVar21 + 0x198))(plVar21,*(undefined8 *)(*plVar21 + 0x1a0)),
          iVar8 != 0xf && iVar28 < iVar7 + -1) {
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)0x0) goto LAB_05842b50;
      iVar8 = (**(code **)(*plVar21 + 0x198))(plVar21,*(undefined8 *)(*plVar21 + 0x1a0));
      if (iVar8 == 1) {
        if ((param_5 & 1) == 0) {
          if (!bVar5) {
            uVar10 = FUN_0585314c(param_2,0);
            plVar21 = (long *)param_1[3];
            if ((uVar10 & 1) == 0) {
              if (plVar21 == (long *)0x0) goto LAB_05842b50;
              uVar17 = (**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
              plVar21 = (long *)param_1[3];
              if (plVar21 == (long *)0x0) goto LAB_05842b50;
              uVar15 = (**(code **)(*plVar21 + 0x1c8))(plVar21,*(undefined8 *)(*plVar21 + 0x1d0));
              plVar21 = (long *)FUN_05852de4(param_2,uVar17,uVar15,0);
            }
            else {
              if (plVar21 == (long *)0x0) goto LAB_05842b50;
              uVar17 = (**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
              plVar21 = (long *)param_1[3];
              if (plVar21 == (long *)0x0) goto LAB_05842b50;
              uVar15 = (**(code **)(*plVar21 + 0x1c8))(plVar21,*(undefined8 *)(*plVar21 + 0x1d0));
              plVar21 = (long *)FUN_05852a38(param_2,uVar17,uVar15,iVar28,0);
            }
            bVar5 = false;
            goto LAB_05841aa0;
          }
          plVar21 = *(long **)(param_2 + 0x70);
          if (plVar21 == (long *)0x0) goto LAB_05842b50;
          bVar1 = *(byte *)(*(long *)
                             Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                           + 0x130);
          if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
             )) goto LAB_05842bf4;
          plVar21 = (long *)FUN_0584b2a0(plVar21,0);
          if (plVar21 == (long *)0x0) goto LAB_05842b50;
          plVar21 = (long *)(**(code **)(*plVar21 + 0x2e8))
                                      (plVar21,0,*(undefined8 *)(*plVar21 + 0x2f0));
          if (plVar21 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__
                             + 0x130);
            if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__))
            goto LAB_05842b98;
            bVar5 = false;
            goto LAB_05841aa8;
          }
          bVar5 = false;
LAB_05841ad0:
          lVar22 = *(long *)(param_2 + 0x50);
          if (lVar22 == 0) {
            (**(code **)(*param_1 + 0x1e8))(param_1,param_3,*(undefined8 *)(*param_1 + 0x1f0));
          }
          else {
            if (*(long *)(lVar22 + 0x28) == 0) goto LAB_05842b50;
            uVar10 = FUN_0582ae1c(*(long *)(lVar22 + 0x28),0);
            lVar27 = *(long *)(lVar22 + 0x28);
            if ((uVar10 & 1) == 0) {
              uVar17 = FUN_05844444(param_1,lVar27,0);
              FUN_05843a60(uVar17,lVar22,param_3,uVar17,param_4 & 1);
            }
            else {
              if ((plVar9 == (long *)0x0) || (lVar20 == 0)) goto LAB_05842b50;
              uVar26 = *(uint *)(lVar22 + 0x78);
              lVar22 = (long)(int)uVar26;
              if (*(uint *)(lVar20 + 0x18) <= uVar26) {
LAB_05842b6c:
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              iVar8 = *(int *)(lVar18 + lVar22 * 4);
              *(int *)(lVar18 + lVar22 * 4) = iVar8 + 1;
              if (lVar27 == 0) goto LAB_05842b50;
              uVar17 = FUN_0582baa8(lVar27,0);
              uVar17 = FUN_05844444(param_1,uVar17,0);
              if (*(uint *)(plVar9 + 3) <= uVar26) goto LAB_05842b6c;
LAB_05841b4c:
              FUN_05843cbc(uVar17,lVar27,plVar9 + lVar22 + 4,iVar8,uVar17,1);
            }
          }
        }
        else {
          plVar21 = (long *)param_1[3];
          if (plVar21 == (long *)0x0) goto LAB_05842b50;
          uVar17 = (**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
          plVar21 = (long *)param_1[3];
          if (plVar21 == (long *)0x0) goto LAB_05842b50;
          uVar15 = (**(code **)(*plVar21 + 0x1c8))(plVar21,*(undefined8 *)(*plVar21 + 0x1d0));
          plVar21 = (long *)FUN_05852a38(param_2,uVar17,uVar15,iVar28,0);
LAB_05841aa0:
          if (plVar21 == (long *)0x0) goto LAB_05841ad0;
LAB_05841aa8:
          plVar12 = (long *)plVar21[5];
          if ((plVar12 == (long *)0x0) || (lVar19 == 0)) goto LAB_05842b50;
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(plVar12 + 3)) goto LAB_05842b6c;
          if (*(char *)(lVar19 + (int)*(uint *)(plVar12 + 3) + 0x20) != '\0') goto LAB_05841ad0;
          if (plVar12 != local_c8) {
            iVar28 = *(int *)((long)plVar21 + 0x54);
            bVar1 = *(byte *)(*(long *)
                               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                             + 0x130);
            local_c8 = plVar12;
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
               )) {
              iVar28 = iVar28 + 1;
            }
          }
          uVar17 = thunk_FUN_02f1863c(plVar12,0);
          uVar15 = *(undefined8 *)
                    Method_UnityEngine_UIElements_Layout_FixedBuffer4<FilterParameter>_get_Item__;
          if (*(int *)(*(long *)(puVar29 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(puVar29 + 0xe0));
          }
          uVar15 = FUN_050e4454(uVar15,0);
          uVar10 = FUN_050ed374(uVar17,uVar15,0);
          if ((uVar10 & 1) == 0) {
            if (plVar21[5] == 0) goto LAB_05842b50;
            uVar17 = thunk_FUN_02f1863c(plVar21[5],0);
            uVar15 = *(undefined8 *)
                      Method_UnityEngine_UIElements_Layout_FixedBuffer2<LayoutValue>_get_Item__;
            if (*(int *)(*(long *)(puVar29 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)(puVar29 + 0xe0));
            }
            uVar15 = FUN_050e4454(uVar15,0);
            uVar10 = FUN_050ed374(uVar17,uVar15,0);
            plVar12 = (long *)plVar21[5];
            if ((uVar10 & 1) == 0) {
              if (plVar12 == (long *)0x0) goto LAB_05842b50;
              uVar17 = thunk_FUN_02f1863c(plVar12,0);
              uVar15 = *(undefined8 *)
                        Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_get_size__
              ;
              if (*(int *)(*(long *)(puVar29 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)(puVar29 + 0xe0));
              }
              uVar15 = FUN_050e4454(uVar15,0);
              uVar10 = FUN_050ed374(uVar17,uVar15,0);
              plVar12 = (long *)plVar21[5];
              if ((uVar10 & 1) != 0) {
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
                    uVar10 = FUN_0582ae1c(plVar12[5],0);
                    lVar27 = plVar12[5];
                    if ((uVar10 & 1) == 0) {
                      uVar16 = FUN_05844444(param_1,lVar27,0);
                      uVar10 = uVar16;
                      goto LAB_05842474;
                    }
                    if ((plVar9 != (long *)0x0) && (lVar20 != 0)) {
                      uVar26 = *(uint *)(plVar12 + 0xf);
                      lVar22 = (long)(int)uVar26;
                      if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05842b6c;
                      iVar8 = *(int *)(lVar18 + lVar22 * 4);
                      *(int *)(lVar18 + lVar22 * 4) = iVar8 + 1;
                      if (lVar27 != 0) {
                        uVar17 = FUN_0582baa8(lVar27,0);
                        uVar17 = FUN_05844444(param_1,uVar17,0);
                        if (*(uint *)(plVar9 + 3) <= uVar26) goto LAB_05842b6c;
                        goto LAB_05841b4c;
                      }
                    }
                  }
                }
                goto LAB_05842b50;
              }
              if (plVar12 == (long *)0x0) goto LAB_05842b50;
              uVar17 = thunk_FUN_02f1863c(plVar12,0);
              uVar15 = *(undefined8 *)
                        Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_Clear__
              ;
              if (*(int *)(*(long *)(puVar29 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)(puVar29 + 0xe0));
              }
              uVar15 = FUN_050e4454(uVar15,0);
              uVar10 = FUN_050ed374(uVar17,uVar15,0);
              if ((uVar10 & 1) == 0) {
                thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
                uVar17 = thunk_FUN_02f45270();
                uVar15 = thunk_FUN_02f6ef30(
                                           Method_UnityEngine_UIElements_Layout_FixedBuffer9<LayoutValue>_get_Item__
                                           );
                FUN_050d5404(uVar17,uVar15,0);
LAB_05842cac:
                uVar15 = thunk_FUN_02f6ef30(
                                           Method_Unity_Collections_FixedList32Bytes<int>_get_Capacity__
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar17,uVar15);
              }
              lVar22 = plVar21[5];
              if (lVar22 == 0) goto LAB_05842b50;
              uVar26 = *(uint *)(lVar22 + 0x18);
              lVar27 = (long)(int)uVar26;
              if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05842b6c;
              *(undefined1 *)(lVar19 + lVar27 + 0x20) = 1;
              if ((int)param_1[0x1b] == 0) {
                lVar22 = *(long *)(lVar22 + 0x28);
                if (lVar22 == 0) goto LAB_05842b50;
                if (*(int *)(lVar22 + 0x20) == 1) {
                  if ((local_d8 == 0) || (lVar23 = *(long *)(local_d8 + 0x18), lVar23 == 0))
                  goto LAB_05842b50;
                  if (*(uint *)(lVar23 + 0x18) <= uVar26) goto LAB_05842b6c;
                  uVar10 = FUN_0583f098(param_1,*(undefined8 *)(lVar22 + 0x18),
                                        *(undefined8 *)PTR_DAT_067cd6c0,0,lVar23 + lVar27 * 8 + 0x20
                                       );
                }
                else {
                  if ((local_d8 == 0) || (lVar22 = *(long *)(local_d8 + 0x18), lVar22 == 0))
                  goto LAB_05842b50;
                  if (*(uint *)(lVar22 + 0x18) <= uVar26) goto LAB_05842b6c;
                  uVar10 = FUN_0583f034(param_1,lVar22 + lVar27 * 8 + 0x20);
                }
                uVar16 = FUN_0584ffcc(plVar21,0);
                if ((uVar16 & 1) == 0) {
                  if (uVar10 != 0) {
                    plVar12 = (long *)plVar21[5];
LAB_05842474:
                    FUN_05843a60(uVar16,plVar12,param_3,uVar10,param_4 & 1);
                  }
                  goto LAB_05841ba8;
                }
                plVar12 = (long *)plVar21[5];
                if ((plVar12 == (long *)0x0) || (lVar22 = *(long *)(local_d8 + 0x18), lVar22 == 0))
                goto LAB_05842b50;
                if (*(uint *)(lVar22 + 0x18) <= *(uint *)(plVar12 + 3)) goto LAB_05842b6c;
                if (*(long *)(lVar22 + (long)(int)*(uint *)(plVar12 + 3) * 8 + 0x20) == 0)
                goto LAB_05842474;
              }
              else {
                uVar17 = FUN_0584429c(param_1,plVar21);
                FUN_05843a60(uVar17,lVar22,param_3,uVar17,param_4 & 1);
                if (plVar21[6] != 0) {
                  plVar12 = (long *)plVar21[5];
                  if (plVar12 == (long *)0x0) goto LAB_05842b50;
                  bVar1 = *(byte *)(*(long *)
                                     Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                                   + 0x130);
                  if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)
                       Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                     )) {
LAB_05842bf4:
                    /* WARNING: Subroutine does not return */
                    FUN_02f08d48();
                  }
                  FUN_05850dc0(plVar12,param_3,plVar21[6],0);
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
              if ((plVar9 == (long *)0x0) || (lVar20 == 0)) goto LAB_05842b50;
              uVar26 = *(uint *)(plVar12 + 0xf);
              lVar22 = (long)(int)uVar26;
              if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05842b6c;
              lVar27 = plVar12[5];
              iVar8 = *(int *)(lVar18 + lVar22 * 4);
              *(int *)(lVar18 + lVar22 * 4) = iVar8 + 1;
              uVar17 = FUN_0584429c(param_1,plVar21);
              uVar15 = FUN_058440d4(uVar17,plVar21[5],plVar21[9],param_3,param_4 & 1);
              if (*(uint *)(plVar9 + 3) <= uVar26) goto LAB_05842b6c;
              uVar17 = FUN_05843cbc(uVar15,lVar27,plVar9 + lVar22 + 4,iVar8,uVar17,
                                    ((uint)uVar15 ^ 0xffffffff) & 1);
              puVar29 = PTR_DAT_067c9338;
              if (plVar12[0xc] != 0) {
                if (local_b0 != (long *)0x0) {
                  uVar26 = *(uint *)(plVar12 + 0xf);
                  if ((*(uint *)(lVar20 + 0x18) <= uVar26) || (*(uint *)(local_b0 + 3) <= uVar26))
                  goto LAB_05842b6c;
                  FUN_05843cbc(uVar17,plVar12[0xe],local_b0 + (long)(int)uVar26 + 4,
                               *(int *)(lVar20 + (long)(int)uVar26 * 4 + 0x20) + -1,plVar21[6],1);
                  goto LAB_05841ba8;
                }
                goto LAB_05842b50;
              }
            }
          }
          else {
            if (((int)param_1[0x1b] == 0) && (uVar10 = FUN_0584ffcc(plVar21,0), (uVar10 & 1) != 0))
            {
              if (((local_d8 == 0) || (plVar21[5] == 0)) ||
                 (lVar22 = *(long *)(local_d8 + 0x18), lVar22 == 0)) goto LAB_05842b50;
              uVar26 = *(uint *)(plVar21[5] + 0x18);
              if (*(uint *)(lVar22 + 0x18) <= uVar26) goto LAB_05842b6c;
              uVar17 = FUN_0583f034(param_1,lVar22 + (long)(int)uVar26 * 8 + 0x20);
              lVar22 = plVar21[5];
              if ((lVar22 == 0) || (lVar27 = *(long *)(local_d8 + 0x18), lVar27 == 0))
              goto LAB_05842b50;
              if (*(uint *)(lVar27 + 0x18) <= *(uint *)(lVar22 + 0x18)) goto LAB_05842b6c;
              if (*(long *)(lVar27 + (long)(int)*(uint *)(lVar22 + 0x18) * 8 + 0x20) == 0) {
                uVar10 = FUN_058440d4(uVar17,lVar22,plVar21[9],param_3,param_4 & 1);
                if ((uVar10 & 1) != 0) {
                  FUN_02a7da48(plVar21);
                  lVar19 = plVar21[9];
                  uVar17 = FUN_02a7da48(lVar19);
                  uVar17 = FUN_0583c1d4(uVar17,*(undefined8 *)(lVar19 + 0x38));
                  goto LAB_05842cac;
                }
                FUN_05843a60(uVar10,plVar21[5],param_3,uVar17,param_4 & 1);
              }
              else {
                if (((plVar21[8] == 0) || (lVar22 = *(long *)(plVar21[8] + 0x58), lVar22 == 0)) ||
                   (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_05842b50;
                uVar10 = FUN_050eed48(lVar22,0);
                if ((uVar10 & 1) == 0) {
                  uVar10 = FUN_058440d4(uVar10,plVar21[5],plVar21[9],param_3,param_4 & 1);
                  if ((uVar10 & 1) == 0) {
                    if ((plVar21[8] == 0) || (lVar22 = *(long *)(plVar21[8] + 0x58), lVar22 == 0))
                    goto LAB_05842b50;
                    uVar17 = FUN_05844200(uVar10,*(undefined8 *)(lVar22 + 0x10));
                    FUN_05843a60(uVar17,plVar21[5],param_3,uVar17,param_4 & 1);
                  }
                  else {
                    uVar17 = FUN_05843bec(uVar10,plVar21[5],param_3,param_4 & 1);
                  }
                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                               Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_Add__
                                             );
                  FUN_0583b640(uVar15,param_1,
                               *(undefined8 *)
                                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_get_Item__
                              );
                  if ((plVar21[5] == 0) || (lVar22 = *(long *)(local_d8 + 0x18), lVar22 == 0))
                  goto LAB_05842b50;
                  uVar26 = *(uint *)(plVar21[5] + 0x18);
                  if (*(uint *)(lVar22 + 0x18) <= uVar26) goto LAB_05842b6c;
                  uVar25 = *(undefined8 *)(lVar22 + (long)(int)uVar26 * 8 + 0x20);
                  lVar22 = thunk_FUN_02f45270(*(undefined8 *)
                                               Method_UnityEngine_Rendering_DebugUI_Field<uint>_get_getter__
                                             );
                  FUN_05116b38(lVar22,0);
                  *(undefined8 *)(lVar22 + 0x10) = uVar15;
                  *(undefined8 *)(lVar22 + 0x18) = uVar17;
                  *(undefined8 *)(lVar22 + 0x28) = uVar25;
                  FUN_0583bd8c(param_1,lVar22);
                  if ((plVar21[5] == 0) || (lVar22 = *(long *)(local_d8 + 0x18), lVar22 == 0))
                  goto LAB_05842b50;
                  uVar26 = *(uint *)(plVar21[5] + 0x18);
                  if (*(uint *)(lVar22 + 0x18) <= uVar26) goto LAB_05842b6c;
                  *(undefined8 *)(lVar22 + (long)(int)uVar26 * 8 + 0x20) = 0;
                }
              }
            }
            else {
              uVar10 = FUN_058440d4(uVar10,plVar21[5],plVar21[9],param_3,param_4 & 1);
              lVar22 = plVar21[8];
              if ((uVar10 & 1) == 0) {
                if (((lVar22 == 0) || (*(long *)(lVar22 + 0x58) == 0)) ||
                   (lVar22 = *(long *)(*(long *)(lVar22 + 0x58) + 0x10), lVar22 == 0))
                goto LAB_05842b50;
                uVar10 = FUN_050eed48(lVar22,0);
                if ((uVar10 & 1) == 0) {
                  lVar22 = FUN_05843bec(uVar10,plVar21[5],param_3,param_4 & 1);
                  if (lVar22 == 0) {
                    if ((plVar21[8] == 0) || (lVar22 = *(long *)(plVar21[8] + 0x58), lVar22 == 0))
                    goto LAB_05842b50;
                    lVar22 = FUN_05844200(0,*(undefined8 *)(lVar22 + 0x10));
                    FUN_05843a60(lVar22,plVar21[5],param_3,lVar22,param_4 & 1);
                  }
                  FUN_05842f7c(param_1,plVar21[8],0,lVar22,1);
                }
                else {
                  lVar22 = FUN_05842f7c(param_1,plVar21[8],0,0,1);
                  if ((lVar22 != 0) || ((char)plVar21[7] != '\0')) {
                    FUN_05843a60(lVar22,plVar21[5],param_3,lVar22,param_4 & 1);
                  }
                }
              }
              else {
                uVar17 = FUN_05843bec(uVar10,plVar21[5],param_3,param_4 & 1);
                FUN_05842f7c(param_1,lVar22,0,uVar17,0);
              }
            }
            if (plVar21[5] == 0) goto LAB_05842b50;
            uVar26 = *(uint *)(plVar21[5] + 0x18);
            if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05842b6c;
            *(undefined1 *)(lVar19 + (int)uVar26 + 0x20) = 1;
          }
        }
      }
      else {
        plVar21 = (long *)param_1[3];
        if (plVar21 == (long *)0x0) goto LAB_05842b50;
        iVar8 = (**(code **)(*plVar21 + 0x198))(plVar21,*(undefined8 *)(*plVar21 + 0x1a0));
        if (iVar8 == 3) {
LAB_058417b8:
          plVar21 = *(long **)(param_2 + 0x68);
          if (plVar21 == (long *)0x0) goto LAB_058418e4;
          lVar22 = *plVar21;
          bVar1 = *(byte *)(lVar22 + 0x130);
          bVar2 = *(byte *)(*(long *)
                             Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                           + 0x130);
          if ((bVar2 <= bVar1) &&
             (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)
               Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
             )) {
            bVar2 = *(byte *)(*(long *)
                               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                             + 0x130);
            if ((bVar1 < bVar2) ||
               (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)
                 Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
               )) {
              if (plVar21[5] == 0) goto LAB_05842b50;
              lVar22 = FUN_0582baa8(plVar21[5],0);
            }
            else {
              if ((plVar21[0x10] == 0) || (lVar22 = FUN_05853b18(plVar21[0x10],0), lVar22 == 0))
              goto LAB_05842b50;
              lVar22 = *(long *)(lVar22 + 0x48);
            }
            if (lVar22 != 0) {
              uVar17 = *(undefined8 *)(lVar22 + 0x10);
              lVar27 = *(long *)(puVar29 + 0x90);
              if (*(int *)(*(long *)(puVar29 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar15 = FUN_050e4454(lVar27 + 0x20,0);
              uVar10 = FUN_050ed374(uVar17,uVar15,0);
              if ((uVar10 & 1) == 0) {
                uVar17 = FUN_05844444(param_1,lVar22,0);
              }
              else {
                plVar12 = (long *)param_1[3];
                if (plVar12 == (long *)0x0) goto LAB_05842b50;
                uVar17 = (**(code **)(*plVar12 + 0x528))(plVar12,*(undefined8 *)(*plVar12 + 0x530));
              }
              if ((plVar9 != (long *)0x0) && (lVar20 != 0)) {
                uVar26 = *(uint *)(plVar21 + 0xf);
                lVar22 = (long)(int)uVar26;
                if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05842b6c;
                lVar27 = plVar21[5];
                iVar8 = *(int *)(lVar18 + lVar22 * 4);
                *(int *)(lVar18 + lVar22 * 4) = iVar8 + 1;
                if (*(uint *)(plVar9 + 3) <= uVar26) goto LAB_05842b6c;
                FUN_05843cbc(uVar17,lVar27,plVar9 + lVar22 + 4,iVar8,uVar17,1);
                goto LAB_05841ba8;
              }
            }
            goto LAB_05842b50;
          }
          bVar2 = *(byte *)(*(long *)
                             Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
                           + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
             )) {
LAB_05842b98:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar21);
          }
          plVar12 = (long *)FUN_0584b2a0(plVar21,0);
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
          uVar17 = *(undefined8 *)(plVar12[9] + 0x10);
          lVar22 = *(long *)(puVar29 + 0x90);
          if (*(int *)(*(long *)(puVar29 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar15 = FUN_050e4454(lVar22 + 0x20,0);
          uVar10 = FUN_050ed374(uVar17,uVar15,0);
          plVar14 = (long *)param_1[3];
          if ((uVar10 & 1) == 0) {
            if (plVar14 == (long *)0x0) goto LAB_05842b50;
            uVar17 = (**(code **)(*plVar14 + 0x528))(plVar14,*(undefined8 *)(*plVar14 + 0x530));
            uVar17 = FUN_05843938(param_1,uVar17,plVar12[9],plVar12[8]);
          }
          else {
            if (plVar14 == (long *)0x0) goto LAB_05842b50;
            uVar17 = (**(code **)(*plVar14 + 0x528))(plVar14,*(undefined8 *)(*plVar14 + 0x530));
          }
          FUN_05843a60(uVar17,plVar21,param_3,uVar17,param_4 & 1);
        }
        else {
          plVar21 = (long *)param_1[3];
          if (plVar21 == (long *)0x0) goto LAB_05842b50;
          iVar8 = (**(code **)(*plVar21 + 0x198))(plVar21,*(undefined8 *)(*plVar21 + 0x1a0));
          if (iVar8 == 4) goto LAB_058417b8;
LAB_058418e4:
          uVar17 = FUN_0583f7d8(param_1,0);
          FUN_0583f560(param_1,uVar17,param_3,0);
        }
      }
LAB_05841ba8:
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)0x0) goto LAB_05842b50;
      (**(code **)(*plVar21 + 0x538))(plVar21,*(undefined8 *)(*plVar21 + 0x540));
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)0x0) goto LAB_05842b50;
    }
    if (plVar9 == (long *)0x0) goto LAB_05842884;
    plVar21 = *(long **)(param_2 + 0x30);
    if (plVar21 != (long *)0x0) {
      plVar21 = (long *)(**(code **)(*plVar21 + 0x388))(plVar21,*(undefined8 *)(*plVar21 + 0x390));
      puVar4 = PTR_DAT_067c91b8;
      goto joined_r0x058425d0;
    }
  }
LAB_05842b50:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


