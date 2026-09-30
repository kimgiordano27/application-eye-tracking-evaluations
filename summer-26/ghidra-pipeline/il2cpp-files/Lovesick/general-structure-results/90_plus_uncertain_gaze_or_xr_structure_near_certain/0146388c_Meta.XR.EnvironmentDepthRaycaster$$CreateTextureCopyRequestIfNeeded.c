/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$CreateTextureCopyRequestIfNeeded
ENTRY_POINT: 0146388c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_EnvironmentDepthRaycaster__CreateTextureCopyRequestIfNeeded
          (undefined1 param_1 [16],float param_2)

{
  uint uVar1;
  char cVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *unaff_x19;
  int unaff_w20;
  long *plVar15;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar16;
  uint uVar17;
  long unaff_x28;
  float fVar18;
  long in_stack_00000018;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_System_Diagnostics_Process_Start__);
  thunk_FUN_00d48444(StringLiteral_4094);
  thunk_FUN_00d48444(Method_Meta_Voice_NLayer_MpegFrameDecoder_DecodeFrame__);
  thunk_FUN_00d48444(
                    Field_<PrivateImplementationDetails>_E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F
                    );
  thunk_FUN_00d48444(StringLiteral_10857);
  thunk_FUN_00d48444(Method_System_Net_WebCompletionSource<object>_TrySetCanceled__);
  thunk_FUN_00d48444(UnityEngine_XR_MeshTransform_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<IntVec3,_List<int>>__ctor__);
  thunk_FUN_00d48444(PTR_DAT_033f66a0);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<SubmeshData>_Add__);
  thunk_FUN_00d48444(StringLiteral_12796);
  *(undefined1 *)(unaff_x24 + 0xaae) = 1;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_02681b9c();
  if ((uVar10 & 1) == 0) {
    return 1;
  }
  if (unaff_x21 != 0) {
    uVar11 = FUN_02666a34();
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x19);
    }
    uVar10 = FUN_02681b9c(uVar11,0,0);
    if ((uVar10 & 1) == 0) {
      return 1;
    }
    lVar12 = FUN_02666a34();
    if (lVar12 != 0) {
      iVar8 = FUN_0267d4b8(lVar12,0);
      puVar6 = StringLiteral_4094;
      fVar3 = DAT_028aa020;
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          iVar9 = FUN_0267d53c(lVar12,iVar8,0);
          if (iVar9 == 4) {
            uVar11 = FUN_0267d4f4(lVar12,iVar8,0);
            fVar18 = (float)FUN_0267de74(unaff_x21,uVar11,0);
            if ((1 < unaff_w20) && (param_2 = param_2 * param_2, fVar3 <= fVar18 * fVar18 + param_2)
               ) {
              uVar13 = FUN_01600424(*(undefined8 *)UnityEngine_XR_MeshTransform_TypeInfo,uVar11,
                                    *(undefined8 *)StringLiteral_12796,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661754(uVar13,0);
            }
            fVar18 = (float)FUN_0267e074(unaff_x21,uVar11,0);
            if ((1 < unaff_w20) &&
               (param_2 = (param_2 + -1.0) * (param_2 + -1.0),
               fVar3 <= (fVar18 + -1.0) * (fVar18 + -1.0) + param_2)) {
              uVar13 = FUN_015f5b28(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<IntVec3,_List<int>>__ctor__
                                    ,uVar11,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661754(uVar13,0);
            }
            if (unaff_x23 == 0) goto LAB_01463ed4;
            uVar1 = *(uint *)(unaff_x23 + 0x18);
            if ((int)uVar1 < 1) {
              lVar16 = 0;
            }
            else {
              uVar17 = 0;
              lVar16 = 0;
              do {
                if (uVar1 <= uVar17) {
LAB_01463ed8:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar15 = (long *)(unaff_x23 + (long)(int)uVar17 * 8 + 0x20);
                lVar14 = *plVar15;
                if (lVar14 == 0) goto LAB_01463ed4;
                uVar10 = thunk_FUN_015fe514(*(undefined8 *)(lVar14 + 0x10),uVar11,0);
                if ((uVar10 & 1) != 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar17) goto LAB_01463ed8;
                  lVar16 = *plVar15;
                  if (lVar16 == 0) goto LAB_01463ed4;
                  cVar2 = *(char *)(lVar16 + 0x18);
                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                  if (lVar16 == 0) goto LAB_01463ed4;
                  FUN_0143e30c(lVar16,uVar11,cVar2 != '\0',0);
                }
                uVar1 = *(uint *)(unaff_x23 + 0x18);
                uVar17 = uVar17 + 1;
              } while ((int)uVar17 < (int)uVar1);
            }
            if (unaff_x22 == 0) goto LAB_01463ed4;
            if (0 < *(int *)(unaff_x22 + 0x18)) {
              iVar9 = 0;
              do {
                FUN_0132138c();
                if (in_stack_00000018 == 0) goto LAB_01463ed4;
                uVar10 = thunk_FUN_015fe514(*(undefined8 *)(in_stack_00000018 + 0x10),uVar11,0);
                if ((uVar10 & 1) != 0) {
                  FUN_0132138c();
                  if (in_stack_00000018 == 0) goto LAB_01463ed4;
                  cVar2 = *(char *)(in_stack_00000018 + 0x18);
                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                  if (lVar16 == 0) goto LAB_01463ed4;
                  FUN_0143e30c(lVar16,uVar11,cVar2 != '\0',0);
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(unaff_x22 + 0x18));
            }
            if (lVar16 == 0) {
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
              if (lVar16 == 0) goto LAB_01463ed4;
              FUN_0143e340(lVar16,uVar11,0,1,0);
            }
            if (unaff_x28 == 0) goto LAB_01463ed4;
            FUN_00bc12a0(unaff_x28,lVar16,*(undefined8 *)PTR_DAT_033f0378);
          }
          iVar8 = iVar8 + 1;
          iVar9 = FUN_0267d4b8(lVar12,0);
        } while (iVar8 < iVar9);
      }
      puVar6 = Method_System_Net_WebCompletionSource<object>_TrySetCanceled__;
      iVar8 = FUN_01463edc();
      lVar16 = *(long *)puVar6;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar16);
        lVar16 = *(long *)puVar6;
      }
      puVar7 = Method_System_Diagnostics_Process_Start__;
      lVar14 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar14 == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar16);
          lVar16 = *(long *)puVar6;
        }
        uVar11 = **(undefined8 **)(lVar16 + 0xb8);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
        if (lVar14 == 0) goto LAB_01463ed4;
        FUN_0136b58c(lVar14,uVar11,
                     *(undefined8 *)Method_Meta_Voice_NLayer_MpegFrameDecoder_DecodeFrame__,0);
        *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8) = lVar14;
      }
      puVar5 = Method_System_Collections_Generic_List<SpaceShipShieldModule_Round>_GetEnumerator__;
      puVar4 = Method_System_Collections_Generic_List<LineRenderer>_get_Count__;
      if (unaff_x28 != 0) {
        iVar9 = FUN_01322f74(unaff_x28,lVar14,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<LineRenderer>_get_Count__);
        if (iVar8 == 3) {
          lVar12 = FUN_0268b6ac(lVar12,0);
          if (lVar12 != 0) {
            uVar10 = FUN_015fe854(lVar12,*(undefined8 *)
                                          Method_System_Collections_Generic_List<SubmeshData>_Add__,
                                  0);
            if (iVar9 == -1) {
              return 1;
            }
            if ((uVar10 & 1) == 0) {
              return 1;
            }
            lVar12 = *(long *)puVar6;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar12 = *(long *)puVar6;
            }
            lVar16 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
            if (lVar16 == 0) {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar12 = *(long *)puVar6;
              }
              uVar11 = **(undefined8 **)(lVar12 + 0xb8);
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
              if (lVar16 == 0) goto LAB_01463ed4;
              FUN_0136b58c(lVar16,uVar11,*(undefined8 *)StringLiteral_10857,0);
              *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18) = lVar16;
            }
            goto LAB_01463e84;
          }
        }
        else {
          if (iVar8 != 2) {
            return 1;
          }
          lVar12 = FUN_0268b6ac(lVar12,0);
          if (lVar12 != 0) {
            uVar10 = FUN_015fe854(lVar12,*(undefined8 *)PTR_DAT_033f66a0,0);
            if (iVar9 == -1) {
              return 1;
            }
            if ((uVar10 & 1) == 0) {
              return 1;
            }
            lVar12 = *(long *)puVar6;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar12 = *(long *)puVar6;
            }
            lVar16 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
            if (lVar16 == 0) {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar12 = *(long *)puVar6;
              }
              uVar11 = **(undefined8 **)(lVar12 + 0xb8);
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
              if (lVar16 == 0) goto LAB_01463ed4;
              FUN_0136b58c(lVar16,uVar11,
                           *(undefined8 *)
                            Field_<PrivateImplementationDetails>_E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F
                           ,0);
              *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = lVar16;
            }
LAB_01463e84:
            iVar8 = FUN_01322f74(unaff_x28,lVar16,*(undefined8 *)puVar4);
            if (iVar8 == -1) {
              return 1;
            }
            FUN_01324ac8(unaff_x28,iVar9,*(undefined8 *)puVar5);
            return 1;
          }
        }
      }
    }
  }
LAB_01463ed4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


