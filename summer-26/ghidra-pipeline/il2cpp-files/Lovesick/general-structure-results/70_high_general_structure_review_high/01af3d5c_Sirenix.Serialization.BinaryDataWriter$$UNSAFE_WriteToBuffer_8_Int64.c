/*
FUNCTION_NAME: Sirenix.Serialization.BinaryDataWriter$$UNSAFE_WriteToBuffer_8_Int64
ENTRY_POINT: 01af3d5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Sirenix_Serialization_BinaryDataWriter__UNSAFE_WriteToBuffer_8_Int64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined8 uVar11;
  long unaff_x19;
  long *unaff_x20;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar6 = FUN_0266752c(0);
  *(undefined4 *)(unaff_x19 + 0x90) = uVar6;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377a363 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377a363 = '\x01';
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x20;
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  *(long *)(unaff_x19 + 0x68) = lVar7;
  if (lVar7 == 0) goto LAB_01af40fc;
  uVar6 = *(undefined4 *)(lVar7 + 100);
  *(undefined8 *)(unaff_x19 + 0x74) = *(undefined8 *)(lVar7 + 0x5c);
  *(undefined4 *)(unaff_x19 + 0x7c) = uVar6;
  uVar11 = *(undefined8 *)(lVar7 + 0x50);
  uVar6 = *(undefined4 *)(lVar7 + 0x58);
  *(undefined1 *)(unaff_x19 + 0x8d) = 1;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar11;
  *(undefined4 *)(unaff_x19 + 0x88) = uVar6;
  *(undefined1 *)(unaff_x19 + 0x70) = 0;
  bVar4 = FUN_01af4100();
  if ((bVar4 & 1) == 0) {
    if (*(char *)(unaff_x19 + 0x70) != '\0') {
      FUN_02667554(*(undefined4 *)(unaff_x19 + 0x90),0);
      lVar7 = *(long *)(unaff_x19 + 0x68);
      if (lVar7 == 0) goto LAB_01af40fc;
      uVar6 = *(undefined4 *)(lVar7 + 100);
      *(undefined8 *)(unaff_x19 + 0x74) = *(undefined8 *)(lVar7 + 0x5c);
      *(undefined4 *)(unaff_x19 + 0x7c) = uVar6;
      uVar6 = *(undefined4 *)(lVar7 + 0x58);
      *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(lVar7 + 0x50);
      *(undefined4 *)(unaff_x19 + 0x88) = uVar6;
      if (*(char *)(unaff_x19 + 0x1c) != '\0') {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        puVar9 = *(undefined4 **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8);
        FUN_01afff7c(*puVar9,puVar9[1],puVar9[2],lVar7,0);
        lVar7 = *(long *)(unaff_x19 + 0x68);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar7 == 0) goto LAB_01af40fc;
        puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        FUN_01affe88(*puVar9,puVar9[1],puVar9[2],lVar7,0);
      }
    }
  }
  else {
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      uVar6 = FUN_0266752c(0);
      *(undefined4 *)(unaff_x19 + 0x90) = uVar6;
      FUN_02667554(1,0);
      if ((*(char *)(unaff_x19 + 0x70) == '\0') && (*(char *)(unaff_x19 + 0x1c) != '\0')) {
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_01af40fc;
        FUN_01afff7c(*(undefined4 *)(unaff_x19 + 0x74),*(undefined4 *)(unaff_x19 + 0x78),
                     *(undefined4 *)(unaff_x19 + 0x7c),*(long *)(unaff_x19 + 0x68),0);
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_01af40fc;
        FUN_01affe88(*(undefined4 *)(unaff_x19 + 0x80),*(undefined4 *)(unaff_x19 + 0x84),
                     *(undefined4 *)(unaff_x19 + 0x88),*(long *)(unaff_x19 + 0x68),0);
      }
    }
    puVar3 = Method_System_Xml_Linq_XComment__ctor__;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_get_Task__
    ;
    puVar1 = System_TimeZoneInfo_TypeInfo;
    bVar5 = FUN_026e813c(2,0);
    fVar12 = (float)FUN_026e804c(*(undefined8 *)puVar2,0);
    fVar13 = (float)FUN_026e804c(*(undefined8 *)puVar1,0);
    fVar14 = (float)FUN_026e804c(*(undefined8 *)puVar3,0);
    lVar7 = *(long *)(unaff_x19 + 0x68);
    if ((bVar5 & *(byte *)(unaff_x19 + 0x1d) & 1) == 0) {
      if (lVar7 == 0) goto LAB_01af40fc;
      FUN_01afff7c(*(undefined4 *)(lVar7 + 0x5c),fVar12 + *(float *)(lVar7 + 0x60),
                   *(undefined4 *)(lVar7 + 100),lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0x68);
      if (lVar7 == 0) goto LAB_01af40fc;
      fVar12 = *(float *)(lVar7 + 0x50);
      fVar15 = *(float *)(lVar7 + 0x54);
      fVar16 = *(float *)(lVar7 + 0x58);
      uVar8 = FUN_01af4190();
      if ((uVar8 & 1) == 0) {
        fVar12 = fVar14 + fVar14 + fVar12;
        fVar15 = fVar15 - (fVar13 + fVar13);
      }
      else {
        fVar16 = fVar16 - (fVar13 + fVar13);
      }
      lVar7 = *(long *)(unaff_x19 + 0x68);
      if (lVar7 == 0) goto LAB_01af40fc;
    }
    else {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      if (lVar7 == 0) {
LAB_01af40fc:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      puVar9 = *(undefined4 **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8);
      FUN_01afff7c(*puVar9,puVar9[1],puVar9[2],lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0x68);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar7 == 0) goto LAB_01af40fc;
      pfVar10 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar12 = *pfVar10;
      fVar15 = pfVar10[1];
      fVar16 = pfVar10[2];
    }
    FUN_01affe88(fVar12,fVar15,fVar16,lVar7,0);
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
  }
  *(byte *)(unaff_x19 + 0x70) = bVar4 & 1;
  return;
}


