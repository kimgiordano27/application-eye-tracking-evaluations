/*
FUNCTION_NAME: Sirenix.Serialization.BinaryDataWriter$$BeginReferenceNode
ENTRY_POINT: 01af3e94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Sirenix_Serialization_BinaryDataWriter__BeginReferenceNode(float param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  long unaff_x19;
  byte unaff_w20;
  long lVar7;
  byte unaff_w22;
  undefined8 *unaff_x24;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = (float)FUN_026e804c(param_2,0);
  fVar9 = (float)FUN_026e804c(*unaff_x24,0);
  lVar7 = *(long *)(unaff_x19 + 0x68);
  if ((unaff_w22 & *(byte *)(unaff_x19 + 0x1d) & 1) == 0) {
    if (lVar7 != 0) {
      FUN_01afff7c(*(undefined4 *)(lVar7 + 0x5c),param_1 + *(float *)(lVar7 + 0x60),
                   *(undefined4 *)(lVar7 + 100),lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0x68);
      if (lVar7 != 0) {
        fVar10 = *(float *)(lVar7 + 0x50);
        fVar11 = *(float *)(lVar7 + 0x54);
        fVar12 = *(float *)(lVar7 + 0x58);
        uVar4 = FUN_01af4190();
        if ((uVar4 & 1) == 0) {
          fVar10 = fVar9 + fVar9 + fVar10;
          fVar11 = fVar11 - (fVar8 + fVar8);
        }
        else {
          fVar12 = fVar12 - (fVar8 + fVar8);
        }
        lVar7 = *(long *)(unaff_x19 + 0x68);
        if (lVar7 != 0) goto LAB_01af4068;
      }
    }
  }
  else {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    if (lVar7 != 0) {
      puVar5 = *(undefined4 **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8);
      FUN_01afff7c(*puVar5,puVar5[1],puVar5[2],lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0x68);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar7 != 0) {
        pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar10 = *pfVar6;
        fVar11 = pfVar6[1];
        fVar12 = pfVar6[2];
LAB_01af4068:
        FUN_01affe88(fVar10,fVar11,fVar12,lVar7,0);
        puVar3 = Method_Meta_XR_MRUtilityKit_SpaceMapGPU_UpdateBuffer__;
        puVar2 = Method_UnityEngine_Rendering_AsyncGPUReadback_RequestIntoNativeArray<float>__;
        puVar1 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
        if (*(char *)(unaff_x19 + 0x8c) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_033f02a8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01b1eeb0(*(undefined8 *)puVar2,*(undefined8 *)puVar3,*(undefined8 *)puVar1,0);
          *(undefined1 *)(unaff_x19 + 0x8c) = 1;
        }
        *(byte *)(unaff_x19 + 0x70) = unaff_w20 & 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


