/*
FUNCTION_NAME: DG.Tweening.DOTweenModulePhysics2D.<>c__DisplayClass0_0$$.ctor
ENTRY_POINT: 00e4bc8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 182
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass0_0___ctor(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x19;
  int iVar13;
  long unaff_x20;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float unaff_s8;
  float unaff_s9;
  float fVar23;
  short sStack0000000000000000;
  undefined2 uStack000000000000004c;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xe30));
  thunk_FUN_00d48444(StringLiteral_4992);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<CatchAssistData>_get_Item__);
  thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_152>_SliceWithStride<Vector4>__
                    );
  thunk_FUN_00d48444(StringLiteral_9119);
  *(undefined1 *)(unaff_x20 + 0xd63) = 1;
  uStack000000000000004c = 0;
  *(undefined8 *)(unaff_x19 + 0x260) = 0;
  *(undefined8 *)(unaff_x19 + 0x424) = 0;
  puVar5 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  puVar4 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  lVar10 = *(long *)(unaff_x19 + 0x78);
  if (lVar10 == 0) {
LAB_00e4c300:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar2 = *(int *)(lVar10 + 0x10);
  if (iVar2 < 1) {
    *(undefined4 *)(unaff_x19 + 0x420) = 0;
  }
  else {
    iVar13 = 0;
    plVar1 = (long *)(unaff_x19 + 0x3e0);
    do {
      if (lVar10 == 0) goto LAB_00e4c300;
      if (*(int *)(lVar10 + 0x10) != iVar2) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e4c300;
      FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar13);
      *(long *)(unaff_x19 + 0x418) = _sStack0000000000000000;
      if (_sStack0000000000000000 == 0) goto LAB_00e4c300;
      uVar14 = *(undefined8 *)(_sStack0000000000000000 + 0xf8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_02681b9c(uVar14,0,0);
      plVar11 = (long *)(unaff_x19 + 0x80);
      if ((uVar9 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x418) == 0) ||
           (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x418) + 0xf8), lVar10 == 0))
        goto LAB_00e4c300;
        plVar11 = (long *)(lVar10 + 0x18);
      }
      lVar10 = *plVar11;
      *(long *)(unaff_x19 + 0x3d8) = lVar10;
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e4c300;
      uStack000000000000004c = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar14 = FUN_01731954(0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar14 = FUN_016f8fb8(&stack0x0000004c,uVar14,0);
      uVar7 = FUN_00e4b938(uVar14,*(undefined8 *)(unaff_x19 + 0x3d8),
                           *(undefined8 *)(unaff_x19 + 0x418));
      if ((*(long *)(unaff_x19 + 0x418) == 0) || (lVar10 == 0)) goto LAB_00e4c300;
      FUN_0272bfb4(lVar10,uVar14,uVar7,*(undefined4 *)(*(long *)(unaff_x19 + 0x418) + 0x3c),0);
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e4c300;
      lVar10 = *(long *)(unaff_x19 + 0x3d8);
      uVar9 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
      uVar7 = FUN_00e4b938(uVar9,*(undefined8 *)(unaff_x19 + 0x3d8),
                           *(undefined8 *)(unaff_x19 + 0x418));
      if ((*(long *)(unaff_x19 + 0x418) == 0) || (lVar10 == 0)) goto LAB_00e4c300;
      uVar9 = FUN_0272bf48(lVar10,uVar9 & 0xffffffff,plVar1,uVar7,
                           *(undefined4 *)(*(long *)(unaff_x19 + 0x418) + 0x3c),0);
      if ((uVar9 & 1) == 0) {
        lVar10 = __start_il2cpp();
        if (lVar10 == 0) goto LAB_00e4c300;
        lVar10 = *(long *)(lVar10 + 0x110);
        *(long *)(unaff_x19 + 0x3d8) = lVar10;
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e4c300;
        uVar9 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
        uVar7 = FUN_00e4b938(uVar9,*(undefined8 *)(unaff_x19 + 0x3d8),
                             *(undefined8 *)(unaff_x19 + 0x418));
        if ((*(long *)(unaff_x19 + 0x418) == 0) || (lVar10 == 0)) goto LAB_00e4c300;
        uVar9 = FUN_0272bf48(lVar10,uVar9 & 0xffffffff,plVar1,uVar7,
                             *(undefined4 *)(*(long *)(unaff_x19 + 0x418) + 0x3c),0);
        if ((uVar9 & 1) != 0) {
          lVar16 = *(long *)(unaff_x19 + 0x418);
          lVar10 = __start_il2cpp();
          if (lVar10 != 0) {
            uVar14 = *(undefined8 *)(lVar10 + 0x110);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_152>_SliceWithStride<Vector4>__
                                       );
            if ((lVar10 != 0) && (FUN_00e5d9dc(lVar10,uVar14,0), lVar16 != 0)) {
              *(long *)(lVar16 + 0xf8) = lVar10;
              uVar22 = *(undefined8 *)(unaff_x19 + 0x3f8);
              uVar21 = *(undefined8 *)(unaff_x19 + 0x3f0);
              uVar19 = *(undefined8 *)(unaff_x19 + 0x408);
              uVar14 = *(undefined8 *)(unaff_x19 + 0x400);
              uVar20 = *(undefined8 *)(unaff_x19 + 1000);
              _sStack0000000000000000 = *plVar1;
              lVar10 = *(long *)(unaff_x19 + 0x418);
              if (lVar10 != 0) {
                *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(unaff_x19 + 0x410);
                *(undefined8 *)(lVar10 + 0x28) = uVar22;
                *(undefined8 *)(lVar10 + 0x20) = uVar21;
                *(undefined8 *)(lVar10 + 0x38) = uVar19;
                *(undefined8 *)(lVar10 + 0x30) = uVar14;
                *(undefined8 *)(lVar10 + 0x18) = uVar20;
                *(long *)(lVar10 + 0x10) = _sStack0000000000000000;
                lVar10 = *(long *)(unaff_x19 + 0x418);
                if (lVar10 != 0) goto LAB_00e4bfe4;
              }
            }
          }
          goto LAB_00e4c300;
        }
      }
      else {
        uVar22 = *(undefined8 *)(unaff_x19 + 0x3f8);
        uVar21 = *(undefined8 *)(unaff_x19 + 0x3f0);
        uVar19 = *(undefined8 *)(unaff_x19 + 0x408);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x400);
        uVar20 = *(undefined8 *)(unaff_x19 + 1000);
        _sStack0000000000000000 = *plVar1;
        lVar10 = *(long *)(unaff_x19 + 0x418);
        if (lVar10 == 0) goto LAB_00e4c300;
        *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(unaff_x19 + 0x410);
        *(undefined8 *)(lVar10 + 0x28) = uVar22;
        *(undefined8 *)(lVar10 + 0x20) = uVar21;
        *(undefined8 *)(lVar10 + 0x38) = uVar19;
        *(undefined8 *)(lVar10 + 0x30) = uVar14;
        *(undefined8 *)(lVar10 + 0x18) = uVar20;
        *(long *)(lVar10 + 0x10) = _sStack0000000000000000;
        lVar10 = *(long *)(unaff_x19 + 0x418);
        if (lVar10 == 0) goto LAB_00e4c300;
LAB_00e4bfe4:
        FUN_00e5eb18(lVar10,*(undefined1 *)(unaff_x19 + 0x37d),0);
      }
      lVar10 = *(long *)(unaff_x19 + 0x78);
      iVar13 = iVar13 + 1;
    } while (iVar2 != iVar13);
    *(undefined4 *)(unaff_x19 + 0x420) = 0;
    if (lVar10 == 0) goto LAB_00e4c300;
  }
  puVar4 = StringLiteral_9119;
  piVar15 = (int *)(unaff_x19 + 0x420);
  iVar2 = *(int *)(lVar10 + 0x10);
  if (0 < iVar2) {
    iVar13 = 0;
    do {
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e4c300;
      FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar13);
      *(long *)(unaff_x19 + 0x418) = _sStack0000000000000000;
      if (_sStack0000000000000000 == 0) goto LAB_00e4c300;
      uVar14 = *(undefined8 *)(_sStack0000000000000000 + 0xf8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_02681b9c(uVar14,0,0);
      puVar12 = (undefined8 *)(unaff_x19 + 0x80);
      if ((uVar9 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x418) == 0) ||
           (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x418) + 0xf8), lVar10 == 0))
        goto LAB_00e4c300;
        puVar12 = (undefined8 *)(lVar10 + 0x18);
      }
      uVar14 = *puVar12;
      *(undefined8 *)(unaff_x19 + 0x3d8) = uVar14;
      iVar8 = FUN_00e4b938(uVar9,uVar14,*(undefined8 *)(unaff_x19 + 0x418));
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e4c300;
      sVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
      if (sVar6 == 10) {
        if ((*(long *)(unaff_x19 + 0x418) == 0) ||
           (lVar10 = *(long *)(unaff_x19 + 0x58), lVar10 == 0)) goto LAB_00e4c300;
        iVar8 = *piVar15;
        unaff_s9 = *(float *)(*(long *)(unaff_x19 + 0x418) + 0x74);
        if (iVar8 < *(int *)(lVar10 + 0x18)) {
          FUN_0132138c(lVar10,iVar8 + 1);
          iVar8 = *piVar15;
          unaff_s8 = unaff_s8 - _sStack0000000000000000;
        }
        *piVar15 = iVar8 + 1;
      }
      else {
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e4c300;
        sVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
        if (sVar6 == 0xd) {
          if (*(long *)(unaff_x19 + 0x418) == 0) goto LAB_00e4c300;
          unaff_s9 = *(float *)(*(long *)(unaff_x19 + 0x418) + 0x74);
        }
        else {
          if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e4c300;
          fVar23 = (float)iVar8;
          sVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
          lVar10 = *(long *)(unaff_x19 + 0x418);
          if (sVar6 == 9) {
            if (lVar10 == 0) goto LAB_00e4c300;
            fVar17 = fVar23 * 0.5 * *(float *)(unaff_x19 + 0x138) *
                     (*(float *)(lVar10 + 0x80) / fVar23);
            fVar18 = *(float *)(unaff_x19 + 0x424) + fVar17;
          }
          else {
            if (lVar10 == 0) goto LAB_00e4c300;
            fVar17 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar23,lVar10,0);
            if (*(long *)(unaff_x19 + 0x418) == 0) goto LAB_00e4c300;
            fVar18 = *(float *)(unaff_x19 + 0x424);
            fVar23 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar23,
                                         *(long *)(unaff_x19 + 0x418),0);
            fVar18 = fVar18 + fVar23;
          }
          unaff_s9 = unaff_s9 + fVar17;
          *(float *)(unaff_x19 + 0x424) = fVar18;
        }
      }
      iVar8 = 0;
      while( true ) {
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar4;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_00e4c300;
        if (*(int *)(lVar10 + 0x18) <= iVar8) break;
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e4c300;
        sVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar10);
          lVar10 = *(long *)puVar4;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_00e4c300;
        FUN_0132138c(lVar10,iVar8);
        if (sStack0000000000000000 == sVar6) {
          *(undefined4 *)(unaff_x19 + 0x424) = 0;
        }
        iVar8 = iVar8 + 1;
      }
      fVar23 = *(float *)(unaff_x19 + 0x260);
      if (*(float *)(unaff_x19 + 0x260) <= unaff_s9) {
        fVar23 = unaff_s9;
      }
      iVar13 = iVar13 + 1;
      *(float *)(unaff_x19 + 0x260) = fVar23;
      fVar23 = *(float *)(unaff_x19 + 0x264);
      if (unaff_s8 <= *(float *)(unaff_x19 + 0x264)) {
        fVar23 = unaff_s8;
      }
      *(float *)(unaff_x19 + 0x264) = fVar23;
      fVar23 = *(float *)(unaff_x19 + 0x428);
      if (*(float *)(unaff_x19 + 0x428) <= *(float *)(unaff_x19 + 0x424)) {
        fVar23 = *(float *)(unaff_x19 + 0x424);
      }
      *(float *)(unaff_x19 + 0x428) = fVar23;
    } while (iVar13 != iVar2);
  }
  return;
}


