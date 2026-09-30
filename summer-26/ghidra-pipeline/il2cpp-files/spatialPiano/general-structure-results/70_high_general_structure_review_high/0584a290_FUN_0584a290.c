/*
FUNCTION_NAME: FUN_0584a290
ENTRY_POINT: 0584a290
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0584a87c) */

void FUN_0584a290(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  
  if ((DAT_06bc0fb0 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067cb558);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__);
    FUN_02f08768(
                Method_Unity_Burst_FunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>_get_Value__
                );
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
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_FixedBuffer2<LayoutValue>_get_Item__);
    FUN_02f08768(
                Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_FixedBuffer4<FilterParameter>_get_Item__);
    DAT_06bc0fb0 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar14 = *(long **)(param_2 + 0x18);
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar10 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_067cb558) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0584a3c4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067cb558,0);
LAB_0584a3c4:
  plVar14 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
  puVar6 = Method_UnityEngine_UIElements_Layout_FixedBuffer4<FilterParameter>_get_Item__;
  puVar5 = Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Feature__
  ;
  puVar4 = PTR_DAT_067c9338;
  puVar3 = PTR_DAT_067c91b8;
  do {
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0584a458;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar14,lVar10,0);
LAB_0584a458:
    uVar12 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    puVar2 = PTR_DAT_067c91b0;
    if ((uVar12 & 1) == 0) {
      plVar14 = (long *)thunk_FUN_02f45174(plVar14,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar14 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_0584a800;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0584a4c0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar14,lVar10,1);
LAB_0584a4c0:
    plVar8 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar8);
      }
    }
    uVar12 = FUN_0584a998(param_1,plVar8,param_3,param_4 & 1);
    if ((uVar12 & 1) != 0) {
      lVar10 = FUN_0584abb8(uVar12,plVar8,param_3,param_4 & 1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar9 = thunk_FUN_02f1863c(plVar8,0);
      uVar15 = *(undefined8 *)puVar6;
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar15 = FUN_050e4454(uVar15,0);
      uVar12 = FUN_050ed374(uVar9,uVar15,0);
      if ((uVar12 & 1) == 0) {
        uVar15 = *(undefined8 *)
                  Method_UnityEngine_UIElements_Layout_FixedBuffer2<LayoutValue>_get_Item__;
        if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar15 = FUN_050e4454(uVar15,0);
        uVar12 = FUN_050ed374(uVar9,uVar15,0);
        if ((uVar12 & 1) == 0) {
          uVar15 = *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_get_size__
          ;
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar15 = FUN_050e4454(uVar15,0);
          uVar12 = FUN_050ed374(uVar9,uVar15,0);
          if ((uVar12 & 1) == 0) {
            uVar15 = *(undefined8 *)
                      Method_Unity_Burst_FunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>_get_Value__
            ;
            if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar15 = FUN_050e4454(uVar15,0);
            uVar12 = FUN_050ed374(uVar9,uVar15,0);
            if ((uVar12 & 1) == 0) {
              uVar15 = *(undefined8 *)
                        Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_Clear__
              ;
              if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar15 = FUN_050e4454(uVar15,0);
              uVar12 = FUN_050ed374(uVar9,uVar15,0);
              if ((uVar12 & 1) == 0) {
                thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
                uVar9 = thunk_FUN_02f45270();
                uVar15 = thunk_FUN_02f6ef30(
                                           Method_UnityEngine_UIElements_Layout_FixedBuffer9<LayoutValue>_get_Item__
                                           );
                FUN_050d5404(uVar9,uVar15,0);
                uVar15 = thunk_FUN_02f6ef30(
                                           Method_Unity_Burst_FunctionPointer<BurstLerpUtility_BounceOutLerp_0000034C_PostfixBurstDelegate>_get_Value__
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar9,uVar15);
              }
              uVar9 = FUN_0584c61c(plVar8,param_3,lVar10);
              FUN_0584b304(param_1,uVar9,lVar10);
            }
          }
          else if (lVar10 != 0) {
            bVar1 = *(byte *)(*(long *)
                               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_get_Mode__
                             + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_get_Mode__
               )) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar8);
            }
            FUN_0584c03c(param_1,plVar8,lVar10);
          }
        }
        else if (lVar10 != 0) {
          bVar1 = *(byte *)(*(long *)
                             Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
                           + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_set_Mode__
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar8);
          }
          FUN_0584b894(param_1,param_3,plVar8[5],plVar8[0x10],lVar10,0);
        }
      }
      else {
        plVar8 = (long *)FUN_0584b2a0(plVar8);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x2f0));
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__ +
                           0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar8);
          }
        }
        FUN_0584b304(param_1,plVar8,lVar10);
      }
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0584a81c;
    }
  }
LAB_0584a800:
  puVar7 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar2,0);
LAB_0584a81c:
  (*(code *)*puVar7)(plVar14,puVar7[1]);
  return;
}


