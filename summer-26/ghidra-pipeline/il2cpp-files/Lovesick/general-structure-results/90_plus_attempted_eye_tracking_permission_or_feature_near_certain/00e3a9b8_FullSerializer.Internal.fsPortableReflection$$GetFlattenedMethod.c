/*
FUNCTION_NAME: FullSerializer.Internal.fsPortableReflection$$GetFlattenedMethod
ENTRY_POINT: 00e3a9b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 197
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void FullSerializer_Internal_fsPortableReflection__GetFlattenedMethod(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  int unaff_w20;
  int iVar11;
  int iVar12;
  long *unaff_x21;
  int iVar13;
  undefined8 unaff_x22;
  long *unaff_x24;
  long lVar14;
  int unaff_w26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float fStack00000000000001e0;
  long in_stack_000001e8;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
                    /* try { // try from 00e3a9c4 to 00f3a9d3 has its CatchHandler @ 00e3ad0c */
    uVar6 = FUN_02681b9c(unaff_x22,0,0);
    plVar9 = unaff_x29;
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x500) == 0) ||
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar8 == 0)) goto LAB_00e3b024;
      plVar9 = (long *)(lVar8 + 0x18);
    }
    lVar8 = *plVar9;
                    /* try { // try from 00e3a9f8 to 00f3a9ff has its CatchHandler @ 00e3ad18 */
    *(long *)(unaff_x19 + 0x450) = lVar8;
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
    FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
                    /* try { // try from 00e3aa0c to 00f3aa1f has its CatchHandler @ 00e3ad04 */
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar7 = FUN_01731954(0);
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
    }
    uVar7 = FUN_016f8fb8(&stack0x00000214,uVar7,0);
                    /* try { // try from 00e3aa68 to 00f3aadb has its CatchHandler @ 00e3ad18 */
    uVar4 = FUN_00e4b938(uVar7,*(undefined8 *)(unaff_x19 + 0x450),*(undefined8 *)(unaff_x19 + 0x500)
                        );
    if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar8 == 0)) goto LAB_00e3b024;
    FUN_0272bfb4(lVar8,uVar7,uVar4,*(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x3c),0);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
    lVar8 = *(long *)(unaff_x19 + 0x450);
    uVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
    FUN_00e4b938(uVar6,*(undefined8 *)(unaff_x19 + 0x450),*(undefined8 *)(unaff_x19 + 0x500));
    if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar8 == 0)) goto LAB_00e3b024;
    uVar6 = FUN_0272bf48(lVar8,uVar6 & 0xffffffff);
    if ((uVar6 & 1) == 0) {
      lVar8 = __start_il2cpp();
      if (lVar8 == 0) goto LAB_00e3b024;
      lVar8 = *(long *)(lVar8 + 0x110);
      *(long *)(unaff_x19 + 0x450) = lVar8;
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
      uVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
      FUN_00e4b938(uVar6,*(undefined8 *)(unaff_x19 + 0x450),*(undefined8 *)(unaff_x19 + 0x500));
      if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar8 == 0)) goto LAB_00e3b024;
      uVar6 = FUN_0272bf48(lVar8,uVar6 & 0xffffffff);
      if ((uVar6 & 1) != 0) {
        lVar14 = *(long *)(unaff_x19 + 0x500);
        lVar8 = __start_il2cpp();
        if (lVar8 != 0) {
          uVar7 = *(undefined8 *)(lVar8 + 0x110);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_152>_SliceWithStride<Vector4>__
                                    );
          if ((lVar8 != 0) && (FUN_00e5d9dc(lVar8,uVar7,0), lVar14 != 0)) {
            *(long *)(lVar14 + 0xf8) = lVar8;
            goto LAB_00e3ab80;
          }
        }
        goto LAB_00e3b024;
      }
    }
    else {
LAB_00e3ab80:
      lVar17 = unaff_x21[3];
      lVar16 = unaff_x21[2];
      lVar15 = unaff_x21[5];
      lVar14 = unaff_x21[4];
      in_stack_000001e8 = unaff_x21[1];
      _fStack00000000000001e0 = *unaff_x21;
      lVar8 = *(long *)(unaff_x19 + 0x500);
      if (lVar8 == 0) goto LAB_00e3b024;
      *(int *)(lVar8 + 0x40) = (int)unaff_x21[6];
      *(long *)(lVar8 + 0x28) = lVar17;
      *(long *)(lVar8 + 0x20) = lVar16;
      *(long *)(lVar8 + 0x38) = lVar15;
      *(long *)(lVar8 + 0x30) = lVar14;
      *(long *)(lVar8 + 0x18) = in_stack_000001e8;
      *(long *)(lVar8 + 0x10) = _fStack00000000000001e0;
      if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
      FUN_00e5eb18(*(long *)(unaff_x19 + 0x500),*(undefined1 *)(unaff_x19 + 0x37d),0);
    }
    if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_00e3b024;
    uVar6 = FUN_01322618(*(long *)(unaff_x19 + 0x368),*(undefined8 *)(unaff_x19 + 0x450),
                         *(undefined8 *)Method_System_Globalization_CultureInfo__ctor__);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_00e3b024;
      FUN_00ac1f00(*(long *)(unaff_x19 + 0x368),*(undefined8 *)(unaff_x19 + 0x450),
                   *(undefined8 *)UnityEngine_InputSystem_Utilities_NameAndParameters_<>c_TypeInfo);
    }
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w26 == unaff_w20) {
      if (*(char *)(unaff_x19 + 0x370) != '\0') {
        uVar7 = FUN_00e47070();
        *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
      }
      FUN_00e4c428();
      puVar2 = StringLiteral_4747;
      puVar1 = OVREyeGaze_TypeInfo;
      if (*(int *)(unaff_x19 + 0x4f8) < 1) {
        uVar4 = 0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x000001e0,*unaff_x27),
           _fStack00000000000001e0 == 0)) goto LAB_00e3b024;
        uVar4 = *(undefined4 *)(_fStack00000000000001e0 + 0x74);
      }
      lVar8 = *(long *)(unaff_x19 + 0x58);
      *(undefined4 *)(unaff_x19 + 0x440) = uVar4;
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) < 1) {
          fVar18 = *(float *)(unaff_x19 + 0x104);
        }
        else {
          FUN_0132138c(lVar8,0,&stack0x000001e0,*(undefined8 *)puVar1);
          fVar18 = fStack00000000000001e0;
        }
        *(float *)(unaff_x19 + 0x444) = -fVar18;
        if (*(long *)(unaff_x19 + 0x78) != 0) {
          iVar11 = *(int *)(*(long *)(unaff_x19 + 0x78) + 0x10);
          if (iVar11 < 1) goto LAB_00e3aef4;
          iVar12 = 0;
          iVar13 = 0;
          break;
        }
      }
      goto LAB_00e3b024;
    }
                    /* try { // try from 00e3a984 to 00f3a997 has its CatchHandler @ 00e3ad10 */
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),unaff_w20,&stack0x000001e0,*unaff_x27);
    *(long *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
    if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3a9b0 to 00f3a9b3 has its CatchHandler @ 00e3acf8 */
    unaff_x22 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
    param_1 = *(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  } while( true );
  while( true ) {
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar13,&stack0x000001e0,*unaff_x27);
    *(long *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
    if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
    uVar7 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_02681b9c(uVar7,0,0);
    puVar10 = (undefined8 *)(unaff_x19 + 0x80);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x500) == 0) ||
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar8 == 0)) goto LAB_00e3b024;
      puVar10 = (undefined8 *)(lVar8 + 0x18);
    }
    uVar7 = *puVar10;
    *(undefined8 *)(unaff_x19 + 0x450) = uVar7;
    iVar5 = FUN_00e4b938(uVar6,uVar7,*(undefined8 *)(unaff_x19 + 0x500));
    lVar8 = *(long *)(unaff_x19 + 0x500);
    if (lVar8 == 0) goto LAB_00e3b024;
    *(undefined8 *)(lVar8 + 0x44) = *(undefined8 *)(unaff_x19 + 0x440);
    *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(unaff_x19 + 0x448);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
    sVar3 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar13,0);
    if (sVar3 == 10) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
      iVar5 = 0;
      if (iVar13 != 0) {
        iVar5 = iVar13 + -1;
      }
      FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar5,*(undefined8 *)puVar2);
      if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
      lVar8 = *(long *)(unaff_x19 + 0x58);
      *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      if (lVar8 == 0) goto LAB_00e3b024;
      if (iVar12 < *(int *)(lVar8 + 0x18)) {
        fVar18 = *(float *)(unaff_x19 + 0x444);
        iVar12 = iVar12 + 1;
        FUN_0132138c(lVar8,iVar12,&stack0x000001e0,*(undefined8 *)puVar1);
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
        iVar5 = 0;
        if (iVar13 != 0) {
          iVar5 = iVar13 + -1;
        }
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar5,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
        *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      }
      else if (iVar13 - iVar11 == -1) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar11 + -1,*(undefined8 *)puVar2);
      }
      else {
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        fVar18 = (float)iVar5;
        sVar3 = FUN_015fa29c(*unaff_x28,iVar13,0);
        fVar19 = *(float *)(unaff_x19 + 0x440);
        lVar8 = *(long *)(unaff_x19 + 0x500);
        if (sVar3 == 9) {
          if (lVar8 == 0) goto LAB_00e3b024;
          fVar18 = fVar18 * unaff_s9 * *(float *)(unaff_x19 + 0x138) *
                   (*(float *)(lVar8 + 0x80) / fVar18);
        }
        else {
          if (lVar8 == 0) goto LAB_00e3b024;
          fVar18 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar18,lVar8,0);
        }
        *(float *)(unaff_x19 + 0x440) = fVar19 + fVar18;
      }
    }
    iVar13 = iVar13 + 1;
    if (iVar13 == iVar11) break;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
  }
LAB_00e3aef4:
  uVar7 = FUN_010d96e0(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_033eb5c8);
  uVar7 = FUN_010dfe04(uVar7,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
  *(undefined8 *)(unaff_x19 + 0x50) = uVar7;
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
  lVar8 = *unaff_x28;
  if (lVar8 != 0) {
    iVar11 = 0;
    while( true ) {
      if (*(int *)(lVar8 + 0x10) <= iVar11) {
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
      lVar8 = *(long *)(unaff_x19 + 0x78);
      if (lVar8 == 0) break;
    }
  }
LAB_00e3b024:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


