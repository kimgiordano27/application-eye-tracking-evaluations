/*
FUNCTION_NAME: FUN_020e7b04
ENTRY_POINT: 020e7b04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_020e7b04(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined4 *puVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float local_ac;
  float fStack_a8;
  uint local_a4;
  
  puVar7 = Method_System_Array_Empty<VoiceServiceRequestOptions_QueryParam>__;
  puVar6 = Method_System_Array_Empty<ShapeRecognizer_FingerFeatureConfig>__;
  puVar5 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if ((DAT_0482fa99 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float2>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_System_Array_Empty<ShapeRecognizer_FingerFeatureConfig>__);
    thunk_FUN_01efb3a4(Method_System_Array_Empty<VoiceServiceRequestOptions_QueryParam>__);
    DAT_0482fa99 = 1;
  }
  local_a4 = *(uint *)(param_4 + 0xa4) & ((int)*(uint *)(param_4 + 0xa4) >> 0x1f ^ 0xffffffffU);
  uVar9 = FUN_035683d0(&local_a4,0);
  uVar9 = FUN_0340ebc0(*(undefined8 *)puVar6,uVar9,*(undefined8 *)puVar7,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar5);
  }
  FUN_0403ea2c(uVar9,0);
  if ((*(long *)(param_4 + 0x38) != 0) &&
     (lVar10 = FUN_04073258(*(long *)(param_4 + 0x38),0), lVar10 != 0)) {
    fVar20 = (float)FUN_0407d3c8(lVar10,0);
    puVar8 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__;
    puVar7 = Method_Unity_Collections_NativeArray<float2>__ctor__;
    puVar6 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    puVar5 = Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__;
    fVar4 = DAT_00c92a9c;
    fVar3 = DAT_00c925e8;
    fVar2 = DAT_00c92340;
    iVar16 = *(int *)(param_4 + 0xa0);
    if (0 < iVar16) {
      iVar12 = *(int *)(param_4 + 0x9c);
      iVar18 = 0;
      do {
        if (0 < iVar12) {
          uVar19 = 0;
          do {
            fVar23 = 1.5;
            if ((uVar19 & 1) != 0) {
              fVar23 = 1.0;
            }
            sincosf(((float)(int)uVar19 * fVar2 + (float)(int)uVar19 * fVar2) / (float)iVar12,
                    &fStack_a8,&local_ac);
            fVar22 = fStack_a8;
            fVar21 = local_ac;
            fVar24 = *(float *)(param_4 + 0x94);
            fVar29 = *(float *)(param_4 + 0x98);
            uVar9 = *(undefined8 *)(param_4 + 0x78);
            if (DAT_0482ee0f == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee0f = '\x01';
            }
            puVar13 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
            uVar28 = *puVar13;
            uVar27 = puVar13[1];
            uVar26 = puVar13[2];
            uVar25 = puVar13[3];
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar10 = FUN_023aaa3c(fVar20 + fVar23 * fVar21 * fVar24,fVar29 * (float)iVar18 + 0.5,
                                  param_3 + fVar23 * fVar22 * fVar24,uVar28,uVar27,uVar26,uVar25,
                                  uVar9,*(undefined8 *)puVar7);
            if ((lVar10 == 0) || (lVar11 = FUN_04073258(lVar10,0), lVar11 == 0)) goto LAB_020e7e98;
            fVar22 = 0.5;
            fVar23 = param_3;
            FUN_0407e634(fVar20,0x3f000000,param_3,lVar11,0);
            FUN_0407bae8(lVar11,0);
            fVar21 = (float)FUN_04067364(0);
            fVar22 = fVar22 * fVar4;
            fVar23 = fVar23 * fVar4;
            FUN_04067a1c(fVar21 * fVar4,fVar22,fVar23,0);
            FUN_040672cc(0,fVar22 * fVar3,fVar23 * fVar3,0);
            FUN_0407d5e8(lVar11,0);
            lVar11 = *(long *)(param_4 + 0xa8);
            if (lVar11 == 0) goto LAB_020e7e98;
            lVar14 = *(long *)(lVar11 + 0x10);
            lVar17 = *(long *)puVar8;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_020e7e98;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              plVar15 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
              *plVar15 = lVar10;
              thunk_FUN_01f51358(plVar15,lVar10);
            }
            else {
              FUN_030f2bb4(lVar11,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            iVar12 = *(int *)(param_4 + 0x9c);
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < iVar12);
          iVar16 = *(int *)(param_4 + 0xa0);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar16);
    }
    return;
  }
LAB_020e7e98:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


