/*
FUNCTION_NAME: FullSerializer.Internal.fsEnumConverter$$CreateInstance
ENTRY_POINT: 00e3ab84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 232
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo;ordered_structure;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void FullSerializer_Internal_fsEnumConverter__CreateInstance
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x19;
  int unaff_w20;
  int iVar11;
  int iVar12;
  long *unaff_x21;
  int iVar13;
  long *unaff_x24;
  long lVar14;
  int unaff_w26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float fStack00000000000001e0;
  long lStack00000000000001e8;
  
  lVar17 = param_3._8_8_;
  lVar16 = param_3._0_8_;
  lVar14 = param_1._8_8_;
  lVar7 = param_1._0_8_;
  while( true ) {
    lStack00000000000001e8 = unaff_x21[1];
    _fStack00000000000001e0 = *unaff_x21;
    lVar9 = *(long *)(unaff_x19 + 0x500);
                    /* try { // try from 00e3ab9c to 00f3ab9f has its CatchHandler @ 00e3ad14 */
    if (lVar9 == 0) break;
    *(int *)(lVar9 + 0x40) = (int)unaff_x21[6];
    *(long *)(lVar9 + 0x28) = lVar17;
    *(long *)(lVar9 + 0x20) = lVar16;
    *(long *)(lVar9 + 0x38) = lVar14;
    *(long *)(lVar9 + 0x30) = lVar7;
    *(long *)(lVar9 + 0x18) = lStack00000000000001e8;
    *(long *)(lVar9 + 0x10) = _fStack00000000000001e0;
    if (*(long *)(unaff_x19 + 0x500) == 0) break;
    FUN_00e5eb18(*(long *)(unaff_x19 + 0x500),*(undefined1 *)(unaff_x19 + 0x37d),0);
    do {
      if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3abe0 to 00f3abe3 has its CatchHandler @ 00e3ad1c */
      uVar5 = FUN_01322618(*(long *)(unaff_x19 + 0x368),*(undefined8 *)(unaff_x19 + 0x450),
                           *(undefined8 *)Method_System_Globalization_CultureInfo__ctor__);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_00e3b024;
        FUN_00ac1f00(*(long *)(unaff_x19 + 0x368),*(undefined8 *)(unaff_x19 + 0x450),
                     *(undefined8 *)UnityEngine_InputSystem_Utilities_NameAndParameters_<>c_TypeInfo
                    );
      }
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w26 == unaff_w20) {
        if (*(char *)(unaff_x19 + 0x370) != '\0') {
          uVar6 = FUN_00e47070();
          *(undefined8 *)(unaff_x19 + 0x78) = uVar6;
        }
        FUN_00e4c428();
        puVar2 = StringLiteral_4747;
        puVar1 = OVREyeGaze_TypeInfo;
        if (*(int *)(unaff_x19 + 0x4f8) < 1) {
          uVar15 = 0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x000001e0,*unaff_x27),
             _fStack00000000000001e0 == 0)) goto LAB_00e3b024;
          uVar15 = *(undefined4 *)(_fStack00000000000001e0 + 0x74);
        }
        lVar7 = *(long *)(unaff_x19 + 0x58);
        *(undefined4 *)(unaff_x19 + 0x440) = uVar15;
        if (lVar7 == 0) goto LAB_00e3b024;
        if (*(int *)(lVar7 + 0x18) < 1) {
          fVar18 = *(float *)(unaff_x19 + 0x104);
        }
        else {
          FUN_0132138c(lVar7,0,&stack0x000001e0,*(undefined8 *)puVar1);
          fVar18 = fStack00000000000001e0;
        }
        *(float *)(unaff_x19 + 0x444) = -fVar18;
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
        iVar11 = *(int *)(*(long *)(unaff_x19 + 0x78) + 0x10);
        if (iVar11 < 1) goto LAB_00e3aef4;
        iVar12 = 0;
        iVar13 = 0;
        goto LAB_00e3ace0;
      }
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
      FUN_0132138c(*(long *)(unaff_x19 + 0x48),unaff_w20,&stack0x000001e0,*unaff_x27);
      *(long *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
      if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
      uVar6 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_02681b9c(uVar6,0,0);
      plVar8 = unaff_x29;
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x500) == 0) ||
           (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar7 == 0)) goto LAB_00e3b024;
        plVar8 = (long *)(lVar7 + 0x18);
      }
      lVar7 = *plVar8;
      *(long *)(unaff_x19 + 0x450) = lVar7;
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
      FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x24);
      }
      uVar6 = FUN_01731954(0);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
      }
      uVar6 = FUN_016f8fb8(&stack0x00000214,uVar6,0);
      uVar15 = FUN_00e4b938(uVar6,*(undefined8 *)(unaff_x19 + 0x450),
                            *(undefined8 *)(unaff_x19 + 0x500));
      if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar7 == 0)) goto LAB_00e3b024;
      FUN_0272bfb4(lVar7,uVar6,uVar15,*(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x3c),0);
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
      lVar7 = *(long *)(unaff_x19 + 0x450);
      uVar5 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
      FUN_00e4b938(uVar5,*(undefined8 *)(unaff_x19 + 0x450),*(undefined8 *)(unaff_x19 + 0x500));
      if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar7 == 0)) goto LAB_00e3b024;
      uVar5 = FUN_0272bf48(lVar7,uVar5 & 0xffffffff);
      if ((uVar5 & 1) != 0) goto LAB_00e3ab80;
      lVar7 = __start_il2cpp();
      if (lVar7 == 0) goto LAB_00e3b024;
      lVar7 = *(long *)(lVar7 + 0x110);
      *(long *)(unaff_x19 + 0x450) = lVar7;
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
      uVar5 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
      FUN_00e4b938(uVar5,*(undefined8 *)(unaff_x19 + 0x450),*(undefined8 *)(unaff_x19 + 0x500));
      if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar7 == 0)) goto LAB_00e3b024;
      uVar5 = FUN_0272bf48(lVar7,uVar5 & 0xffffffff);
    } while ((uVar5 & 1) == 0);
    lVar14 = *(long *)(unaff_x19 + 0x500);
    lVar7 = __start_il2cpp();
    if (lVar7 == 0) break;
    uVar6 = *(undefined8 *)(lVar7 + 0x110);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_152>_SliceWithStride<Vector4>__
                              );
    if ((lVar7 == 0) || (FUN_00e5d9dc(lVar7,uVar6,0), lVar14 == 0)) break;
    *(long *)(lVar14 + 0xf8) = lVar7;
LAB_00e3ab80:
    lVar17 = unaff_x21[3];
    lVar16 = unaff_x21[2];
    lVar14 = unaff_x21[5];
    lVar7 = unaff_x21[4];
  }
  goto LAB_00e3b024;
  while( true ) {
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar13,&stack0x000001e0,*unaff_x27);
    *(long *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
    if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
    uVar6 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_02681b9c(uVar6,0,0);
    puVar10 = (undefined8 *)(unaff_x19 + 0x80);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x500) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar7 == 0)) goto LAB_00e3b024;
      puVar10 = (undefined8 *)(lVar7 + 0x18);
    }
    uVar6 = *puVar10;
    *(undefined8 *)(unaff_x19 + 0x450) = uVar6;
    iVar4 = FUN_00e4b938(uVar5,uVar6,*(undefined8 *)(unaff_x19 + 0x500));
    lVar7 = *(long *)(unaff_x19 + 0x500);
    if (lVar7 == 0) goto LAB_00e3b024;
    *(undefined8 *)(lVar7 + 0x44) = *(undefined8 *)(unaff_x19 + 0x440);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(unaff_x19 + 0x448);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
    sVar3 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
    if (sVar3 == 10) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
      iVar4 = 0;
      if (iVar13 != 0) {
        iVar4 = iVar13 + -1;
      }
      FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar4,*(undefined8 *)puVar2);
      if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
      lVar7 = *(long *)(unaff_x19 + 0x58);
      *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      if (lVar7 == 0) goto LAB_00e3b024;
      if (iVar12 < *(int *)(lVar7 + 0x18)) {
        fVar18 = *(float *)(unaff_x19 + 0x444);
        iVar12 = iVar12 + 1;
        FUN_0132138c(lVar7,iVar12,&stack0x000001e0,*(undefined8 *)puVar1);
        *(float *)(unaff_x19 + 0x444) = fVar18 - fStack00000000000001e0;
      }
      else {
        iVar12 = iVar12 + 1;
      }
    }
    else {
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      sVar3 = FUN_015fa29c(*unaff_x28,iVar13,0);
      if (sVar3 == 0xd) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        iVar4 = 0;
        if (iVar13 != 0) {
          iVar4 = iVar13 + -1;
        }
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar4,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
        *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      }
      else if (iVar13 - iVar11 == -1) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar11 + -1,*(undefined8 *)puVar2);
      }
      else {
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        fVar18 = (float)iVar4;
        sVar3 = FUN_015fa29c(*unaff_x28,iVar13,0);
        fVar19 = *(float *)(unaff_x19 + 0x440);
        lVar7 = *(long *)(unaff_x19 + 0x500);
        if (sVar3 == 9) {
          if (lVar7 == 0) goto LAB_00e3b024;
          fVar18 = fVar18 * unaff_s9 * *(float *)(unaff_x19 + 0x138) *
                   (*(float *)(lVar7 + 0x80) / fVar18);
        }
        else {
          if (lVar7 == 0) goto LAB_00e3b024;
          fVar18 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar18,lVar7,0);
        }
        *(float *)(unaff_x19 + 0x440) = fVar19 + fVar18;
      }
    }
    iVar13 = iVar13 + 1;
    if (iVar13 == iVar11) break;
LAB_00e3ace0:
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
  }
LAB_00e3aef4:
  uVar6 = FUN_010d96e0(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_033eb5c8);
  uVar6 = FUN_010dfe04(uVar6,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
  *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
  FUN_00e4c7d0();
  fVar18 = DAT_028aa030;
  if ((*(int *)(unaff_x19 + 0x150) != 5) ||
     (-*(float *)(unaff_x19 + 400) <= *(float *)(unaff_x19 + 0x42c))) {
LAB_00e3b030:
    FUN_00e4d29c();
    FUN_00e4d598();
    FUN_00e4d720();
    FUN_00e4da30();
    FUN_00e4de60();
    return;
  }
  lVar7 = *unaff_x28;
  if (lVar7 != 0) {
    iVar11 = 0;
    while( true ) {
      if (*(int *)(lVar7 + 0x10) <= iVar11) {
        FUN_00e38100();
        goto LAB_00e3b030;
      }
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar11,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      *(float *)(_fStack00000000000001e0 + 0x84) =
           *(float *)(_fStack00000000000001e0 + 0x84) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar18;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar11,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      *(float *)(_fStack00000000000001e0 + 0x48) =
           *(float *)(_fStack00000000000001e0 + 0x48) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar18;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar11,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      iVar11 = iVar11 + 1;
      *(float *)(_fStack00000000000001e0 + 0x54) =
           *(float *)(_fStack00000000000001e0 + 0x54) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar18;
      lVar7 = *(long *)(unaff_x19 + 0x78);
      if (lVar7 == 0) break;
    }
  }
LAB_00e3b024:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


