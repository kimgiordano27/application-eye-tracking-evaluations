/*
FUNCTION_NAME: FUN_0622bc10
ENTRY_POINT: 0622bc10
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_13;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0622bc10(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_68 [2];
  
  if ((DAT_06b8b6df & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_SetInputProperty<Vector2>__
                );
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(PTR_DAT_06762208);
    FUN_02d6084c(PTR_DAT_067676e8);
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_AttachCustomReticle__
                );
    DAT_06b8b6df = 1;
  }
  puVar7 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_SetInputProperty<Vector2>__
  ;
  local_68[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0622c660:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (param_2 <= param_3) {
    lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    if (lVar19 == 0) goto LAB_0622c660;
    plVar1 = (long *)(param_1 + 0x118);
    plVar2 = (long *)(param_1 + 0x120);
    do {
      lVar10 = FUN_03aac1c4(lVar19,param_2,*(undefined8 *)puVar7);
      puVar6 = PTR_DAT_067676e8;
      if (lVar10 == 0) goto LAB_0622c660;
      switch(*(undefined2 *)(lVar10 + 0x10)) {
      case 0:
        *(undefined4 *)(param_1 + 0xf4) = 0;
        puVar6 = PTR_DAT_067676e8;
        lVar14 = *(long *)PTR_DAT_067676e8;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar14 = *(long *)puVar6;
        }
        uVar8 = **(undefined4 **)(lVar14 + 0xb8);
        goto LAB_0622bedc;
      case 1:
        plVar15 = *(long **)(lVar10 + 0x38);
        lVar14 = *(long *)PTR_DAT_067676e8;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar14 = *(long *)puVar6;
        }
        local_68[0] = **(uint **)(lVar14 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_0606a004(plVar15,0,0);
        if ((uVar11 & 1) == 0) {
          *(undefined4 *)(param_1 + 0xf4) = 0;
        }
        else {
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_0622c660;
          plVar12 = *(long **)(*(long *)(param_1 + 0x18) + 0x110);
          if (plVar12 == (long *)0x0) {
LAB_0622c5a4:
            plVar12 = (long *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
            ;
            *(undefined4 *)(param_1 + 0xf4) = 2;
            if (*(int *)(*plVar12 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              plVar12 = (long *)
                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
              ;
            }
            if (DAT_06b8ae52 == '\0') {
              FUN_02d6084c(plVar12);
              DAT_06b8ae52 = '\x01';
              plVar12 = (long *)
                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
              ;
            }
            lVar14 = *plVar12;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar14 = *(long *)
                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
              ;
            }
            if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_0622c660;
            local_68[0] = FUN_0632cb74(**(long **)(lVar14 + 0xb8),plVar15,0);
            lVar14 = *(long *)(param_1 + 0x18);
            if (lVar14 == 0) goto LAB_0622c660;
            uVar16 = *(undefined8 *)(param_1 + 0x20);
            uVar17 = 0;
          }
          else {
            if (plVar15 == (long *)0x0) {
              plVar18 = (long *)0x0;
            }
            else {
              plVar18 = plVar15;
              if (*plVar15 != *(long *)PTR_DAT_06762208) {
                plVar18 = (long *)0x0;
              }
            }
            uVar11 = (**(code **)(*plVar12 + 0x178))
                               (plVar12,*(undefined8 *)(param_1 + 0x20),plVar18,local_68,&local_80,
                                *(undefined8 *)(*plVar12 + 0x180));
            if ((uVar11 & 1) == 0) goto LAB_0622c5a4;
            *(undefined4 *)(param_1 + 0xf4) = 3;
            auVar21._8_8_ = uStack_78;
            auVar21._0_8_ = local_80;
            lVar14 = *(long *)(param_1 + 0x18);
            *(undefined1 *)(param_1 + 0xf8) = 1;
            auVar21 = NEON_scvtf(auVar21,4);
            *(long *)(param_1 + 0x104) = auVar21._8_8_;
            *(long *)(param_1 + 0xfc) = auVar21._0_8_;
            if (lVar14 == 0) goto LAB_0622c660;
            uVar16 = *(undefined8 *)(param_1 + 0x20);
            uVar17 = 1;
          }
          FUN_0623c1f4(lVar14,uVar16,plVar15,local_68[0],uVar17,0);
        }
        FUN_0622c7d4(param_1,lVar10,local_68[0]);
        *(undefined1 *)(param_1 + 0xf8) = 0;
        break;
      case 2:
        uVar8 = 2;
        goto LAB_0622be28;
      case 3:
        uVar8 = 1;
LAB_0622be28:
        *(undefined4 *)(param_1 + 0xf4) = uVar8;
        if (*(int *)(*(long *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b8ae52 == '\0') {
          FUN_02d6084c(
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
                      );
          DAT_06b8ae52 = '\x01';
        }
        lVar14 = *(long *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
        ;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar14 = *(long *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
          ;
        }
        if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_0622c660;
        uVar8 = FUN_0632cb74(**(long **)(lVar14 + 0xb8),*(undefined8 *)(lVar10 + 0x38),0);
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_0622c660;
        FUN_0623c1f4(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(lVar10 + 0x38),uVar8,0,0);
LAB_0622bedc:
        FUN_0622c7d4(param_1,lVar10,uVar8);
        break;
      case 4:
        *(undefined4 *)(param_1 + 0xf4) = 4;
        puVar6 = PTR_DAT_067676e8;
        if (((*(long *)(param_1 + 0x18) == 0) ||
            (lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x118), lVar14 == 0)) ||
           (lVar14 = FUN_06248a48(lVar14,*(undefined8 *)(lVar10 + 0x48),
                                  *(undefined8 *)(param_1 + 0x20),0), lVar14 == 0))
        goto LAB_0622c660;
        *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(lVar14 + 0x1c);
        lVar13 = *(long *)puVar6;
        iVar4 = *(int *)(lVar14 + 0x38);
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar13 = *(long *)puVar6;
        }
        puVar6 = PTR_DAT_067676e8;
        iVar3 = **(int **)(lVar13 + 0xb8);
        if (DAT_06b8b702 == '\0') {
          FUN_02d6084c(PTR_DAT_067676e8);
          lVar13 = *(long *)puVar6;
          DAT_06b8b702 = '\x01';
        }
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (iVar4 == iVar3) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (DAT_06b8ae52 == '\0') {
            FUN_02d6084c(
                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
                        );
            DAT_06b8ae52 = '\x01';
          }
          lVar14 = *(long *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
          ;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar14 = *(long *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
            ;
          }
          if ((*(long *)(lVar10 + 0x48) == 0) || (**(long **)(lVar14 + 0xb8) == 0))
          goto LAB_0622c660;
          uVar8 = FUN_0632cb74(**(long **)(lVar14 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar10 + 0x48) + 0x20),0);
          if ((*(long *)(lVar10 + 0x48) == 0) || (*(long *)(param_1 + 0x18) == 0))
          goto LAB_0622c660;
          FUN_0623c1f4(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)(*(long *)(lVar10 + 0x48) + 0x20),uVar8,0,0);
        }
        else {
          uVar8 = *(undefined4 *)(lVar14 + 0x38);
        }
        FUN_0622c7d4(param_1,lVar10,uVar8);
        *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
        break;
      case 5:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          uVar8 = 2;
          goto LAB_0622c0a0;
        }
        goto LAB_0622c660;
      case 6:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          uVar8 = 1;
LAB_0622c0a0:
          *(undefined4 *)(lVar14 + 0x34) = uVar8;
          *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(param_1 + 0x20);
          thunk_FUN_02dd37b4();
          *(undefined1 *)(lVar14 + 0x30) = *(undefined1 *)(param_1 + 0x110);
          *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(lVar10 + 0x58);
LAB_0622c3d8:
          thunk_FUN_02dd37b4();
          if (*(long *)(param_1 + 0x118) == 0) {
            *plVar1 = lVar14;
            plVar15 = plVar1;
          }
          else {
            *(long *)(lVar14 + 0x20) = *plVar2;
            thunk_FUN_02dd37b4();
            if (*plVar2 == 0) goto LAB_0622c660;
            plVar15 = (long *)(*plVar2 + 0x28);
            *plVar15 = lVar14;
          }
          thunk_FUN_02dd37b4(plVar15,lVar14);
          *plVar2 = lVar14;
          goto LAB_0622c530;
        }
        goto LAB_0622c660;
      case 7:
      case 0x16:
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_06022b88(0,0);
        break;
      case 8:
        iVar4 = *(int *)(param_1 + 0x28);
        iVar3 = *(int *)(param_1 + 0x2c);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_06022b88(iVar4 == iVar3,0);
        FUN_06022b88(*(char *)(param_1 + 0x58) == '\0',0);
        *(undefined1 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x3c);
        FUN_06022b88(*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x3c),0);
        break;
      case 9:
        cVar5 = *(char *)(param_1 + 0x58);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_06022b88(cVar5 != '\0',0);
        *(undefined1 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x30);
        break;
      case 10:
        iVar4 = *(int *)(param_1 + 0x28);
        iVar3 = *(int *)(param_1 + 0x34);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_06022b88(iVar4 == iVar3 + 1,0);
        FUN_0622cf00(param_1);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
        break;
      case 0xb:
        uVar16 = *(undefined8 *)(param_1 + 0x50);
        goto LAB_0622c1d4;
      case 0xc:
        uVar16 = *(undefined8 *)(param_1 + 0x48);
LAB_0622c1d4:
        *(undefined8 *)(param_1 + 0x40) = uVar16;
        break;
      case 0xd:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          uVar8 = 5;
          goto LAB_0622c4cc;
        }
        goto LAB_0622c660;
      case 0xe:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          uVar8 = 6;
          goto LAB_0622c4cc;
        }
        goto LAB_0622c660;
      case 0xf:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          uVar8 = 3;
          goto LAB_0622c4cc;
        }
        goto LAB_0622c660;
      case 0x10:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          uVar8 = 4;
          goto LAB_0622c4cc;
        }
        goto LAB_0622c660;
      case 0x11:
        iVar4 = *(int *)(param_1 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_06022cb8(iVar4 == 0,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_AttachCustomReticle__
                     ,0);
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          uVar8 = 7;
          goto LAB_0622c4cc;
        }
        goto LAB_0622c660;
      case 0x12:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar10 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar10 != 0)) {
          *(undefined4 *)(lVar10 + 0x34) = 9;
          *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_1 + 0x20);
          thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x18));
          *(undefined1 *)(lVar10 + 0x30) = *(undefined1 *)(param_1 + 0x110);
          if (*(long *)(param_1 + 0x20) != 0) {
            FUN_061cd3a4(*(long *)(param_1 + 0x20),0);
            uVar16 = FUN_0622d2e8();
            puVar20 = (undefined8 *)(lVar10 + 0x38);
            *puVar20 = uVar16;
            thunk_FUN_02dd37b4(puVar20,uVar16);
            uVar16 = *puVar20;
            if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = FUN_0606a004(uVar16,0,0);
            if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
            }
            FUN_06022b88(uVar9 & 1,0);
            if (*plVar1 == 0) {
              *plVar1 = lVar10;
              plVar15 = plVar1;
            }
            else {
              *(long *)(lVar10 + 0x20) = *plVar2;
              thunk_FUN_02dd37b4();
              if (*plVar2 == 0) goto LAB_0622c660;
              plVar15 = (long *)(*plVar2 + 0x28);
              *plVar15 = lVar10;
            }
            thunk_FUN_02dd37b4(plVar15,lVar10);
            *(long *)(param_1 + 0x120) = lVar10;
            thunk_FUN_02dd37b4(plVar2,lVar10);
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
              uVar8 = 8;
              goto LAB_0622c4cc;
            }
          }
        }
        goto LAB_0622c660;
      case 0x13:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          *(undefined4 *)(lVar14 + 0x34) = 10;
          *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(param_1 + 0x20);
          thunk_FUN_02dd37b4();
          *(undefined1 *)(lVar14 + 0x30) = *(undefined1 *)(param_1 + 0x110);
          *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(lVar10 + 0x50);
          goto LAB_0622c3d8;
        }
        goto LAB_0622c660;
      case 0x14:
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 != 0)) {
          uVar8 = 0xb;
          goto LAB_0622c4cc;
        }
        goto LAB_0622c660;
      case 0x15:
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar14 = FUN_0623bc7c(*(long *)(param_1 + 0x18),0), lVar14 == 0)) goto LAB_0622c660;
        uVar8 = 0xe;
LAB_0622c4cc:
        *(undefined4 *)(lVar14 + 0x34) = uVar8;
        *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(param_1 + 0x20);
        thunk_FUN_02dd37b4((undefined8 *)(lVar14 + 0x18));
        *(undefined1 *)(lVar14 + 0x30) = *(undefined1 *)(param_1 + 0x110);
        if (*(long *)(param_1 + 0x118) == 0) {
          *plVar1 = lVar14;
          plVar15 = plVar1;
        }
        else {
          *(long *)(lVar14 + 0x20) = *plVar2;
          thunk_FUN_02dd37b4();
          if (*plVar2 == 0) goto LAB_0622c660;
          plVar15 = (long *)(*plVar2 + 0x28);
          *plVar15 = lVar14;
        }
        thunk_FUN_02dd37b4(plVar15,lVar14);
        *plVar2 = lVar14;
LAB_0622c530:
        thunk_FUN_02dd37b4(plVar2,lVar14);
        break;
      default:
        thunk_FUN_02dc61f4(PTR_DAT_06769758);
        uVar16 = thunk_FUN_02d9d534();
        FUN_05009560(uVar16,0);
        uVar17 = thunk_FUN_02dc61f4(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_GetDistanceSqrToInteractor__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar16,uVar17);
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return;
}


