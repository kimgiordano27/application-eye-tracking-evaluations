/*
FUNCTION_NAME: FullSerializer.Internal.fsDictionaryConverter$$GetKeyValueTypes
ENTRY_POINT: 00e39b4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 207
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void FullSerializer_Internal_fsDictionaryConverter__GetKeyValueTypes(void)

{
  ulong *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long unaff_x19;
  int unaff_w20;
  int iVar16;
  ulong *unaff_x21;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined **unaff_x24;
  long *plVar22;
  undefined8 uVar23;
  undefined8 *unaff_x25;
  long lVar24;
  int unaff_w26;
  long lVar25;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong uVar33;
  undefined8 uVar34;
  float fVar35;
  float unaff_s9;
  float fVar36;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 in_stack_000001d0;
  float fStack00000000000001e0;
  ulong in_stack_000001e8;
  long in_stack_00000218;
  
code_r0x00e39b4c:
  plVar22 = (long *)unaff_x24[0xeb];
  lVar10 = *(long *)(unaff_x19 + 0x500);
  while (lVar10 != 0) {
    FUN_00e5eb18(lVar10,*(undefined1 *)(unaff_x19 + 0x37d),0);
    while( true ) {
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w26 == unaff_w20) {
                    /* try { // try from 00e39b70 to 00f39be7 has its CatchHandler @ 00e39ff8 */
        if (*(int *)(unaff_x19 + 0x4f8) < 1) goto LAB_00e3ac14;
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x000001e0,*unaff_x27),
           fVar35 = DAT_028aa02c, _fStack00000000000001e0 == 0)) goto LAB_00e3b024;
        if (*(int *)(unaff_x19 + 0x4f8) < 1) goto LAB_00e3ac14;
        fVar36 = *(float *)(_fStack00000000000001e0 + 0x74);
        plVar22 = (long *)(unaff_x19 + 0x48c);
        uVar17 = 0;
        puVar1 = (ulong *)(unaff_x19 + 0x4c0);
        uVar19 = 0xffffffff;
        goto LAB_00e39bd0;
      }
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
      FUN_0132138c(*(long *)(unaff_x19 + 0x48),unaff_w20,&stack0x000001e0,*unaff_x27);
      *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
      if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
      uVar23 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02681b9c(uVar23,0,0);
      puVar14 = unaff_x25;
      if ((uVar11 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x500) == 0) ||
           (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar10 == 0))
        goto LAB_00e3b024;
        puVar14 = (undefined8 *)(lVar10 + 0x18);
      }
      uVar23 = *puVar14;
      *(undefined8 *)(unaff_x19 + 0x450) = uVar23;
      if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_00e3b024;
      uVar11 = FUN_01322618(*(long *)(unaff_x19 + 0x368),uVar23,
                            *(undefined8 *)Method_System_Globalization_CultureInfo__ctor__);
      if ((uVar11 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_00e3b024;
        FUN_00ac1f00(*(long *)(unaff_x19 + 0x368),*(undefined8 *)(unaff_x19 + 0x450),
                     *(undefined8 *)UnityEngine_InputSystem_Utilities_NameAndParameters_<>c_TypeInfo
                    );
      }
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
      lVar10 = *(long *)(unaff_x19 + 0x450);
      FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
      if (*(int *)(*plVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar22);
      }
      uVar23 = FUN_01731954(0);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
      }
      uVar23 = FUN_016f8fb8(&stack0x00000214,uVar23,0);
      uVar7 = FUN_00e4b938(uVar23,*(undefined8 *)(unaff_x19 + 0x450),
                           *(undefined8 *)(unaff_x19 + 0x500));
      if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar10 == 0)) goto LAB_00e3b024;
      FUN_0272bfb4(lVar10,uVar23,uVar7,*(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x3c),0);
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
      lVar10 = *(long *)(unaff_x19 + 0x450);
      uVar11 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
      FUN_00e4b938(uVar11,*(undefined8 *)(unaff_x19 + 0x450),*(undefined8 *)(unaff_x19 + 0x500));
      if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar10 == 0)) goto LAB_00e3b024;
      uVar11 = FUN_0272bf48(lVar10,uVar11 & 0xffffffff);
      if ((uVar11 & 1) != 0) break;
      lVar10 = __start_il2cpp();
      if (lVar10 == 0) goto LAB_00e3b024;
      lVar10 = *(long *)(lVar10 + 0x110);
      *(long *)(unaff_x19 + 0x450) = lVar10;
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
      uVar11 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w20,0);
      FUN_00e4b938(uVar11,*(undefined8 *)(unaff_x19 + 0x450),*(undefined8 *)(unaff_x19 + 0x500));
      if ((*(long *)(unaff_x19 + 0x500) == 0) || (lVar10 == 0)) goto LAB_00e3b024;
      uVar11 = FUN_0272bf48(lVar10,uVar11 & 0xffffffff);
      if ((uVar11 & 1) != 0) {
        lVar13 = *(long *)(unaff_x19 + 0x500);
        lVar10 = __start_il2cpp();
        if (lVar10 == 0) goto LAB_00e3b024;
        uVar23 = *(undefined8 *)(lVar10 + 0x110);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_152>_SliceWithStride<Vector4>__
                                   );
        if ((lVar10 == 0) || (FUN_00e5d9dc(lVar10,uVar23,0), lVar13 == 0)) goto LAB_00e3b024;
        *(long *)(lVar13 + 0xf8) = lVar10;
        uVar33 = unaff_x21[3];
        uVar31 = unaff_x21[2];
        uVar29 = unaff_x21[5];
        uVar11 = unaff_x21[4];
        in_stack_000001e8 = unaff_x21[1];
        _fStack00000000000001e0 = *unaff_x21;
        lVar10 = *(long *)(unaff_x19 + 0x500);
        if (lVar10 == 0) goto LAB_00e3b024;
        unaff_x24 = &Method_System_Xml_Schema_XmlListConverter_ToArray<long>__;
        *(int *)(lVar10 + 0x40) = (int)unaff_x21[6];
        *(ulong *)(lVar10 + 0x28) = uVar33;
        *(ulong *)(lVar10 + 0x20) = uVar31;
        *(ulong *)(lVar10 + 0x38) = uVar29;
        *(ulong *)(lVar10 + 0x30) = uVar11;
        *(ulong *)(lVar10 + 0x18) = in_stack_000001e8;
        *(ulong *)(lVar10 + 0x10) = _fStack00000000000001e0;
        goto code_r0x00e39b4c;
      }
    }
    uVar33 = unaff_x21[3];
    uVar31 = unaff_x21[2];
    uVar29 = unaff_x21[5];
    uVar11 = unaff_x21[4];
    in_stack_000001e8 = unaff_x21[1];
    _fStack00000000000001e0 = *unaff_x21;
    lVar10 = *(long *)(unaff_x19 + 0x500);
    if (lVar10 == 0) break;
    *(int *)(lVar10 + 0x40) = (int)unaff_x21[6];
    *(ulong *)(lVar10 + 0x28) = uVar33;
    *(ulong *)(lVar10 + 0x20) = uVar31;
    *(ulong *)(lVar10 + 0x38) = uVar29;
    *(ulong *)(lVar10 + 0x30) = uVar11;
    *(ulong *)(lVar10 + 0x18) = in_stack_000001e8;
    *(ulong *)(lVar10 + 0x10) = _fStack00000000000001e0;
    lVar10 = *(long *)(unaff_x19 + 0x500);
  }
  goto LAB_00e3b024;
LAB_00e39bd0:
  do {
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar17,&stack0x000001e0,*unaff_x27);
                    /* try { // try from 00e39be8 to 00f39c37 has its CatchHandler @ 00e39860 */
    *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
    if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
    uVar23 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_02681b9c(uVar23,0,0);
    plVar12 = (long *)(unaff_x19 + 0x80);
    if ((uVar11 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x500) == 0) ||
         (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar10 == 0)) goto LAB_00e3b024;
                    /* try { // try from 00e39c38 to 00f39caf has its CatchHandler @ 00e39fe8 */
      plVar12 = (long *)(lVar10 + 0x18);
    }
    lVar10 = *plVar12;
    *(long *)(unaff_x19 + 0x450) = lVar10;
    uVar7 = FUN_00e4b938(uVar11,lVar10,*(undefined8 *)(unaff_x19 + 0x500));
    if (lVar10 == 0) goto LAB_00e3b024;
    uVar23 = FUN_0272bf48(lVar10,10,puVar1,uVar7,*(undefined4 *)(unaff_x19 + 0x11c),0);
    lVar10 = *(long *)(unaff_x19 + 0x450);
    uVar7 = FUN_00e4b938(uVar23,lVar10,*(undefined8 *)(unaff_x19 + 0x500));
    if (lVar10 == 0) goto LAB_00e3b024;
    uVar23 = FUN_0272bfb4(lVar10,*(undefined8 *)
                                  Method_System_Xml_XsdValidatingReader_MoveToAttribute__,uVar7,
                          *(undefined4 *)(unaff_x19 + 0x11c),0);
    lVar10 = *(long *)(unaff_x19 + 0x450);
    uVar7 = FUN_00e4b938(uVar23,lVar10,*(undefined8 *)(unaff_x19 + 0x500));
    if (lVar10 == 0) goto LAB_00e3b024;
    FUN_0272bf48(lVar10,0xad,plVar22,uVar7,*(undefined4 *)(unaff_x19 + 0x11c),0);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
    sVar5 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),uVar17,0);
    if (sVar5 == 10) {
LAB_00e39d14:
      lVar10 = *(long *)(unaff_x19 + 0x500);
      if (lVar10 == 0) goto LAB_00e3b024;
      fVar36 = *(float *)(lVar10 + 0x74);
      *(float *)(lVar10 + 0x44) = fVar36;
    }
    else {
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      sVar5 = FUN_015fa29c(*unaff_x28,uVar17,0);
      if (sVar5 == 0xd) goto LAB_00e39d14;
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      sVar5 = FUN_015fa29c(*unaff_x28,uVar17,0);
      lVar10 = *(long *)(unaff_x19 + 0x500);
      if (lVar10 == 0) goto LAB_00e3b024;
      *(float *)(lVar10 + 0x44) = fVar36;
      if (sVar5 == 9) {
        fVar26 = *(float *)(unaff_x19 + 0x138) * unaff_s9 * *(float *)(lVar10 + 0x80);
        fVar27 = *(float *)(unaff_x19 + 0x25c) + fVar26;
      }
      else {
        fVar26 = (float)FUN_00e5ef60(*(undefined4 *)(unaff_x19 + 0x134),lVar10,0);
        if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
        fVar27 = *(float *)(unaff_x19 + 0x25c);
        fVar28 = (float)FUN_00e5ef60(*(undefined4 *)(unaff_x19 + 0x134),*(long *)(unaff_x19 + 0x500)
                                     ,0);
        fVar27 = fVar27 + fVar28;
      }
      fVar36 = fVar36 + fVar26;
      *(float *)(unaff_x19 + 0x25c) = fVar27;
    }
    if ((*(float *)(unaff_x19 + 0x4f4) < fVar36) && (iVar16 = uVar19 + 1, iVar16 < (int)uVar17)) {
      lVar10 = *unaff_x29;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *unaff_x29;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_00e3b024;
      uVar23 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                            *(undefined4 *)(lVar10 + 0x18));
      uVar11 = 0;
      *(undefined8 *)(unaff_x19 + 0x438) = uVar23;
      while( true ) {
        lVar10 = *unaff_x29;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *unaff_x29;
        }
        lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar13 == 0) goto LAB_00e3b024;
        lVar25 = *(long *)(unaff_x19 + 0x438);
        if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar11) break;
        lVar24 = *unaff_x28;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar13 = *(long *)(*(long *)(*unaff_x29 + 0xb8) + 8);
          if (lVar13 == 0) goto LAB_00e3b024;
        }
        FUN_0132138c(lVar13,uVar11 & 0xffffffff,&stack0x000001e0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<CatchAssistData>_get_Item__);
        if ((lVar24 == 0) ||
           (uVar7 = FUN_01605170(lVar24,_fStack00000000000001e0 & 0xffff,uVar17,0), lVar25 == 0))
        goto LAB_00e3b024;
        if (*(uint *)(lVar25 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar10 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar25 + lVar10 + 0x20) = uVar7;
      }
      if (lVar25 == 0) goto LAB_00e3b024;
      iVar8 = (int)*(ulong *)(lVar25 + 0x18);
      if (iVar8 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(uint *)(lVar25 + 0x20);
        if (1 < iVar8) {
          lVar10 = (*(ulong *)(lVar25 + 0x18) & 0xffffffff) - 1;
          puVar15 = (uint *)(lVar25 + 0x24);
          uVar21 = uVar20;
          do {
            uVar20 = *puVar15;
            if ((int)*puVar15 <= (int)uVar21) {
              uVar20 = uVar21;
            }
            lVar10 = lVar10 + -1;
            puVar15 = puVar15 + 1;
            uVar21 = uVar20;
          } while (lVar10 != 0);
        }
      }
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      iVar8 = FUN_01605170(*unaff_x28,10,uVar17,0);
      if (((iVar8 < (int)uVar20) && (uVar20 != 0xffffffff)) &&
         (*(char *)(unaff_x19 + 0x142) == '\0')) {
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        sVar5 = FUN_015fa29c(*unaff_x28,uVar20,0);
        if (sVar5 != 0x20) {
          if (*unaff_x28 == 0) goto LAB_00e3b024;
          sVar5 = FUN_015fa29c(*unaff_x28,uVar20,0);
          if (sVar5 != 0x3000) {
            if (*unaff_x28 == 0) goto LAB_00e3b024;
            sVar5 = FUN_015fa29c(*unaff_x28,uVar20,0);
            if (sVar5 != 0x200b) {
              if (*(char *)(unaff_x19 + 0x143) != '\0') {
                if (*unaff_x28 == 0) goto LAB_00e3b024;
                sVar5 = FUN_015fa29c(*unaff_x28,uVar20,0);
                if (sVar5 != 0x2d) {
                  if (*unaff_x28 != 0) {
                    iVar16 = uVar20 + 1;
                    uVar23 = FUN_01600e54(*unaff_x28,iVar16,*(undefined8 *)PTR_DAT_033f0398,0);
                    lVar10 = *(long *)(unaff_x19 + 0x48);
                    *(undefined8 *)(unaff_x19 + 0x78) = uVar23;
                    if (lVar10 != 0) {
                      FUN_0132138c(lVar10,uVar20,&stack0x000001e0,*unaff_x27);
                      uVar11 = _fStack00000000000001e0;
                      uVar34 = *(undefined8 *)(unaff_x19 + 0x4d8);
                      uVar32 = *(undefined8 *)(unaff_x19 + 0x4d0);
                      uVar30 = *(undefined8 *)(unaff_x19 + 0x4e8);
                      uVar23 = *(undefined8 *)(unaff_x19 + 0x4e0);
                      uVar7 = *(undefined4 *)(unaff_x19 + 0x4f0);
                      in_stack_000001e8 = *(ulong *)(unaff_x19 + 0x4c8);
                      _fStack00000000000001e0 = *puVar1;
                      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                                 );
                      if (lVar13 != 0) {
                        in_stack_000001a8 = in_stack_000001e8;
                        in_stack_000001a0 = _fStack00000000000001e0;
                        in_stack_000001b0 = uVar32;
                        in_stack_000001b8 = uVar34;
                        in_stack_000001c0 = uVar23;
                        in_stack_000001c8 = uVar30;
                        in_stack_000001d0 = uVar7;
                        FUN_00e5f6e0(lVar13,uVar11,&stack0x000001a0,0);
                        FUN_01323a14(lVar10,iVar16,lVar13,
                                     *(undefined8 *)
                                      Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                                    );
                        *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
                        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x00000160,
                                         *unaff_x27), in_stack_00000160 != 0)) {
                          FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
                          lVar10 = *(long *)(unaff_x19 + 0x48);
                          if (lVar10 != 0) {
                            FUN_0132138c(lVar10,uVar20,&stack0x00000160,*unaff_x27);
                            lVar13 = in_stack_00000160;
                            in_stack_00000178 = *(undefined8 *)(unaff_x19 + 0x4a4);
                            in_stack_00000170 = *(undefined8 *)(unaff_x19 + 0x49c);
                            in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0x4b4);
                            in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0x4ac);
                            in_stack_00000190 = *(undefined4 *)(unaff_x19 + 0x4bc);
                            in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0x494);
                            in_stack_00000160 = *plVar22;
                            lVar25 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                  
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                                  );
                            if (lVar25 != 0) {
                              in_stack_00000128 = in_stack_00000168;
                              in_stack_00000120 = in_stack_00000160;
                              in_stack_00000138 = in_stack_00000178;
                              in_stack_00000130 = in_stack_00000170;
                              in_stack_00000148 = in_stack_00000188;
                              in_stack_00000140 = in_stack_00000180;
                              in_stack_00000150 = in_stack_00000190;
                              FUN_00e5f6e0(lVar25,lVar13,&stack0x00000120,0);
                              FUN_01323a14(lVar10,iVar16,lVar25,
                                           *(undefined8 *)
                                            Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                                          );
                              *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
                              if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                                 (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x00000218,
                                               *unaff_x27), in_stack_00000218 != 0)) {
                                FUN_00e5eb18(in_stack_00000218,*(undefined1 *)(unaff_x19 + 0x37d),0)
                                ;
                                uVar20 = uVar20 + 2;
                                uVar17 = uVar20;
                                goto LAB_00e3a5f8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_00e3b024;
                }
              }
              lVar10 = *unaff_x28;
              if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0)
                  == 0) {
                thunk_FUN_00d32864();
              }
              uVar23 = FUN_01731954(0);
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
              }
              uVar23 = FUN_016f8fb8(&stack0x00000214,uVar23,0);
              if (lVar10 != 0) {
                uVar17 = uVar20 + 1;
                uVar23 = FUN_01600e54(lVar10,uVar17,uVar23,0);
                lVar10 = *(long *)(unaff_x19 + 0x48);
                *(undefined8 *)(unaff_x19 + 0x78) = uVar23;
                if (lVar10 != 0) {
                  FUN_0132138c(lVar10,uVar20,&stack0x000001e0,*unaff_x27);
                  uVar11 = _fStack00000000000001e0;
                  uVar34 = *(undefined8 *)(unaff_x19 + 0x4d8);
                  uVar32 = *(undefined8 *)(unaff_x19 + 0x4d0);
                  uVar30 = *(undefined8 *)(unaff_x19 + 0x4e8);
                  uVar23 = *(undefined8 *)(unaff_x19 + 0x4e0);
                  uVar7 = *(undefined4 *)(unaff_x19 + 0x4f0);
                  in_stack_000001e8 = *(ulong *)(unaff_x19 + 0x4c8);
                  _fStack00000000000001e0 = *puVar1;
                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                               DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                             );
                  if (lVar13 != 0) {
                    in_stack_000000e8 = in_stack_000001e8;
                    in_stack_000000e0 = _fStack00000000000001e0;
                    in_stack_000000f0 = uVar32;
                    in_stack_000000f8 = uVar34;
                    in_stack_00000100 = uVar23;
                    in_stack_00000108 = uVar30;
                    in_stack_00000110 = uVar7;
                    FUN_00e5f6e0(lVar13,uVar11,&stack0x000000e0,0);
                    FUN_01323a14(lVar10,uVar17,lVar13,
                                 *(undefined8 *)
                                  Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                                );
                    *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
                    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                       (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar17,&stack0x00000160,*unaff_x27)
                       , in_stack_00000160 != 0)) {
                      FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
                      uVar20 = uVar17;
                      goto LAB_00e3a5f8;
                    }
                  }
                }
              }
              goto LAB_00e3b024;
            }
          }
        }
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        lVar10 = FUN_01601ad8(*unaff_x28,uVar20,1,0);
        *unaff_x28 = lVar10;
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar23 = FUN_01731954(0);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
        }
        uVar23 = FUN_016f8fb8(&stack0x00000214,uVar23,0);
        if (lVar10 == 0) goto LAB_00e3b024;
        uVar23 = FUN_01600e54(lVar10,uVar20,uVar23,0);
        *(undefined8 *)(unaff_x19 + 0x78) = uVar23;
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x000001e0,*unaff_x27),
           _fStack00000000000001e0 == 0)) goto LAB_00e3b024;
        FUN_00e5eb18(_fStack00000000000001e0,*(undefined1 *)(unaff_x19 + 0x37d),0);
        uVar17 = uVar20;
      }
      else {
        uVar20 = uVar19;
        uVar19 = uVar17;
        if (0 < (int)uVar17) {
          do {
            lVar10 = *unaff_x29;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar10 = *unaff_x29;
            }
            if (*unaff_x28 == 0) goto LAB_00e3b024;
            uVar20 = uVar19 - 1;
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
            uVar6 = FUN_015fa29c(*unaff_x28,uVar20,0);
            if (lVar10 == 0) goto LAB_00e3b024;
            _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
            uVar11 = FUN_01322618(lVar10,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
            if ((uVar11 & 1) == 0) {
              lVar10 = *unaff_x28;
              if (lVar10 == 0) goto LAB_00e3b024;
              if ((int)uVar19 < *(int *)(lVar10 + 0x10)) {
                lVar13 = *unaff_x29;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar13);
                  lVar10 = *unaff_x28;
                  if (lVar10 == 0) goto LAB_00e3b024;
                  lVar13 = *unaff_x29;
                }
                lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
                uVar6 = FUN_015fa29c(lVar10,uVar19,0);
                if (lVar13 == 0) goto LAB_00e3b024;
                _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
                uVar11 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
                uVar21 = uVar19;
                if ((uVar11 & 1) == 0) goto joined_r0x00e3a144;
              }
            }
            uVar19 = uVar20;
          } while (iVar16 < (int)uVar20);
          uVar19 = 0xffffffff;
          uVar21 = uVar19;
joined_r0x00e3a144:
          do {
            do {
              do {
                do {
                  do {
                    do {
                      uVar2 = uVar21;
                      if ((int)uVar2 <= iVar16) goto LAB_00e3a2c0;
                      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
                      uVar21 = uVar2 - 1;
                      FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar21,&stack0x000001e0,*unaff_x27);
                      if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
                    } while (*(float *)(_fStack00000000000001e0 + 0x44) /
                             *(float *)(unaff_x19 + 0x4f4) <= fVar35);
                    lVar10 = *unaff_x28;
                    if (lVar10 == 0) goto LAB_00e3b024;
                  } while (*(int *)(lVar10 + 0x10) <= (int)uVar2);
                  lVar13 = *unaff_x29;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_00d32864(lVar13);
                    lVar10 = *unaff_x28;
                    if (lVar10 == 0) goto LAB_00e3b024;
                    lVar13 = *unaff_x29;
                  }
                  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
                  uVar6 = FUN_015fa29c(lVar10,uVar2,0);
                  if (lVar13 == 0) goto LAB_00e3b024;
                  _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
                  uVar11 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
                } while ((uVar11 & 1) == 0);
                lVar10 = *unaff_x29;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar10 = *unaff_x29;
                }
                if (*unaff_x28 == 0) goto LAB_00e3b024;
                lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                uVar6 = FUN_015fa29c(*unaff_x28,uVar21,0);
                if (lVar10 == 0) goto LAB_00e3b024;
                _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
                uVar11 = FUN_01322618(lVar10,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
              } while ((uVar11 & 1) != 0);
              lVar10 = *unaff_x28;
              if (lVar10 == 0) goto LAB_00e3b024;
            } while (*(int *)(lVar10 + 0x10) <= (int)uVar2);
            lVar13 = *unaff_x29;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar13);
              lVar10 = *unaff_x28;
              if (lVar10 == 0) goto LAB_00e3b024;
              lVar13 = *unaff_x29;
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
            uVar6 = FUN_015fa29c(lVar10,uVar2,0);
            if (lVar13 == 0) goto LAB_00e3b024;
            _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
            uVar11 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
          } while ((uVar11 & 1) != 0);
          if ((int)(uVar2 | uVar19) < 0) {
LAB_00e3a2c0:
            uVar20 = uVar17;
            if (-1 < (int)uVar19) {
              uVar20 = uVar19;
            }
          }
          else {
            uVar20 = uVar19;
            if ((int)uVar2 <= (int)uVar19) {
              uVar20 = uVar2;
            }
          }
          lVar10 = *(long *)(unaff_x19 + 0x78);
          if (*(char *)(unaff_x19 + 0x143) == '\0') {
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar23 = FUN_01731954(0);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
            }
            uVar23 = FUN_016f8fb8(&stack0x00000214,uVar23,0);
            if (lVar10 == 0) goto LAB_00e3b024;
            uVar23 = FUN_01600e54(lVar10,uVar20,uVar23,0);
            lVar10 = *(long *)(unaff_x19 + 0x48);
            *(undefined8 *)(unaff_x19 + 0x78) = uVar23;
            if (lVar10 == 0) goto LAB_00e3b024;
            FUN_0132138c(lVar10,uVar20,&stack0x000001e0,*unaff_x27);
            uVar11 = _fStack00000000000001e0;
            uVar34 = *(undefined8 *)(unaff_x19 + 0x4d8);
            uVar32 = *(undefined8 *)(unaff_x19 + 0x4d0);
            uVar30 = *(undefined8 *)(unaff_x19 + 0x4e8);
            uVar23 = *(undefined8 *)(unaff_x19 + 0x4e0);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x4f0);
            in_stack_000001e8 = *(ulong *)(unaff_x19 + 0x4c8);
            _fStack00000000000001e0 = *puVar1;
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar13 == 0) goto LAB_00e3b024;
            in_stack_00000028 = in_stack_000001e8;
            in_stack_00000020 = _fStack00000000000001e0;
            in_stack_00000030 = uVar32;
            in_stack_00000038 = uVar34;
            in_stack_00000040 = uVar23;
            in_stack_00000048 = uVar30;
            in_stack_00000050 = uVar7;
            FUN_00e5f6e0(lVar13,uVar11,&stack0x00000020,0);
            FUN_01323a14(lVar10,uVar20,lVar13,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x00000160,*unaff_x27),
               in_stack_00000160 == 0)) goto LAB_00e3b024;
            FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
          }
          else {
            if (lVar10 == 0) goto LAB_00e3b024;
            uVar23 = FUN_01600e54(lVar10,uVar20,
                                  *(undefined8 *)
                                   UnityEngine_ProBuilder_EdgeLookup_<>c__DisplayClass16_0_TypeInfo,
                                  0);
            lVar10 = *(long *)(unaff_x19 + 0x48);
            *(undefined8 *)(unaff_x19 + 0x78) = uVar23;
            if (lVar10 == 0) goto LAB_00e3b024;
            FUN_0132138c(lVar10,uVar20,&stack0x000001e0,*unaff_x27);
            uVar11 = _fStack00000000000001e0;
            uVar34 = *(undefined8 *)(unaff_x19 + 0x4d8);
            uVar32 = *(undefined8 *)(unaff_x19 + 0x4d0);
            uVar30 = *(undefined8 *)(unaff_x19 + 0x4e8);
            uVar23 = *(undefined8 *)(unaff_x19 + 0x4e0);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x4f0);
            in_stack_000001e8 = *(ulong *)(unaff_x19 + 0x4c8);
            _fStack00000000000001e0 = *puVar1;
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar13 == 0) goto LAB_00e3b024;
            in_stack_000000a8 = in_stack_000001e8;
            in_stack_000000a0 = _fStack00000000000001e0;
            in_stack_000000b0 = uVar32;
            in_stack_000000b8 = uVar34;
            in_stack_000000c0 = uVar23;
            in_stack_000000c8 = uVar30;
            in_stack_000000d0 = uVar7;
            FUN_00e5f6e0(lVar13,uVar11,&stack0x000000a0,0);
            FUN_01323a14(lVar10,uVar20,lVar13,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x00000160,*unaff_x27),
               in_stack_00000160 == 0)) goto LAB_00e3b024;
            FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
            lVar10 = *(long *)(unaff_x19 + 0x48);
            if (lVar10 == 0) goto LAB_00e3b024;
            FUN_0132138c(lVar10,uVar20,&stack0x00000160,*unaff_x27);
            lVar13 = in_stack_00000160;
            in_stack_00000178 = *(undefined8 *)(unaff_x19 + 0x4a4);
            in_stack_00000170 = *(undefined8 *)(unaff_x19 + 0x49c);
            in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0x4b4);
            in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0x4ac);
            in_stack_00000190 = *(undefined4 *)(unaff_x19 + 0x4bc);
            in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0x494);
            in_stack_00000160 = *plVar22;
            lVar25 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar25 == 0) goto LAB_00e3b024;
            in_stack_00000068 = in_stack_00000168;
            in_stack_00000060 = in_stack_00000160;
            in_stack_00000078 = in_stack_00000178;
            in_stack_00000070 = in_stack_00000170;
            in_stack_00000088 = in_stack_00000188;
            in_stack_00000080 = in_stack_00000180;
            in_stack_00000090 = in_stack_00000190;
            FUN_00e5f6e0(lVar25,lVar13,&stack0x00000060,0);
            FUN_01323a14(lVar10,uVar20,lVar25,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x00000218,*unaff_x27),
               in_stack_00000218 == 0)) goto LAB_00e3b024;
            FUN_00e5eb18(in_stack_00000218,*(undefined1 *)(unaff_x19 + 0x37d),0);
            uVar20 = uVar20 + 1;
          }
        }
      }
LAB_00e3a5f8:
      if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
      fVar36 = *(float *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      uVar19 = uVar20;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < *(int *)(unaff_x19 + 0x4f8));
LAB_00e3ac14:
  if (*(char *)(unaff_x19 + 0x370) != '\0') {
    uVar23 = FUN_00e47070();
    *(undefined8 *)(unaff_x19 + 0x78) = uVar23;
  }
  FUN_00e4c428();
  puVar4 = StringLiteral_4747;
  puVar3 = OVREyeGaze_TypeInfo;
  if (*(int *)(unaff_x19 + 0x4f8) < 1) {
    uVar7 = 0;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x000001e0,*unaff_x27),
       _fStack00000000000001e0 == 0)) goto LAB_00e3b024;
    uVar7 = *(undefined4 *)(_fStack00000000000001e0 + 0x74);
  }
  lVar10 = *(long *)(unaff_x19 + 0x58);
  *(undefined4 *)(unaff_x19 + 0x440) = uVar7;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) < 1) {
      fVar35 = *(float *)(unaff_x19 + 0x104);
    }
    else {
      FUN_0132138c(lVar10,0,&stack0x000001e0,*(undefined8 *)puVar3);
      fVar35 = fStack00000000000001e0;
    }
    *(float *)(unaff_x19 + 0x444) = -fVar35;
    if (*(long *)(unaff_x19 + 0x78) != 0) {
      iVar16 = *(int *)(*(long *)(unaff_x19 + 0x78) + 0x10);
      if (0 < iVar16) {
        iVar8 = 0;
        iVar18 = 0;
        do {
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
          FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar18,&stack0x000001e0,*unaff_x27);
          *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
          if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
          uVar23 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_02681b9c(uVar23,0,0);
          puVar14 = (undefined8 *)(unaff_x19 + 0x80);
          if ((uVar11 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x500) == 0) ||
               (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar10 == 0))
            goto LAB_00e3b024;
            puVar14 = (undefined8 *)(lVar10 + 0x18);
          }
          uVar23 = *puVar14;
          *(undefined8 *)(unaff_x19 + 0x450) = uVar23;
          iVar9 = FUN_00e4b938(uVar11,uVar23,*(undefined8 *)(unaff_x19 + 0x500));
          lVar10 = *(long *)(unaff_x19 + 0x500);
          if (lVar10 == 0) goto LAB_00e3b024;
          *(undefined8 *)(lVar10 + 0x44) = *(undefined8 *)(unaff_x19 + 0x440);
          *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)(unaff_x19 + 0x448);
          if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
          sVar5 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar18,0);
          if (sVar5 == 10) {
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
            iVar9 = 0;
            if (iVar18 != 0) {
              iVar9 = iVar18 + -1;
            }
            FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar9,*(undefined8 *)puVar4);
            if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
            lVar10 = *(long *)(unaff_x19 + 0x58);
            *(undefined4 *)(unaff_x19 + 0x440) =
                 *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
            if (lVar10 == 0) goto LAB_00e3b024;
            if (iVar8 < *(int *)(lVar10 + 0x18)) {
              fVar35 = *(float *)(unaff_x19 + 0x444);
              iVar8 = iVar8 + 1;
              FUN_0132138c(lVar10,iVar8,&stack0x000001e0,*(undefined8 *)puVar3);
              *(float *)(unaff_x19 + 0x444) = fVar35 - fStack00000000000001e0;
            }
            else {
              iVar8 = iVar8 + 1;
            }
          }
          else {
            if (*unaff_x28 == 0) goto LAB_00e3b024;
            sVar5 = FUN_015fa29c(*unaff_x28,iVar18,0);
            if (sVar5 == 0xd) {
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
              iVar9 = 0;
              if (iVar18 != 0) {
                iVar9 = iVar18 + -1;
              }
              FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar9,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
              *(undefined4 *)(unaff_x19 + 0x440) =
                   *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
            }
            else if (iVar18 - iVar16 == -1) {
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
              FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar16 + -1,*(undefined8 *)puVar4);
            }
            else {
              if (*unaff_x28 == 0) goto LAB_00e3b024;
              fVar35 = (float)iVar9;
              sVar5 = FUN_015fa29c(*unaff_x28,iVar18,0);
              fVar36 = *(float *)(unaff_x19 + 0x440);
              lVar10 = *(long *)(unaff_x19 + 0x500);
              if (sVar5 == 9) {
                if (lVar10 == 0) goto LAB_00e3b024;
                fVar35 = fVar35 * unaff_s9 * *(float *)(unaff_x19 + 0x138) *
                         (*(float *)(lVar10 + 0x80) / fVar35);
              }
              else {
                if (lVar10 == 0) goto LAB_00e3b024;
                fVar35 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar35,lVar10,0);
              }
              *(float *)(unaff_x19 + 0x440) = fVar36 + fVar35;
            }
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 != iVar16);
      }
      uVar23 = FUN_010d96e0(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_033eb5c8);
      uVar23 = FUN_010dfe04(uVar23,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                           );
      *(undefined8 *)(unaff_x19 + 0x50) = uVar23;
      FUN_00e4c7d0();
      fVar35 = DAT_028aa030;
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
      lVar10 = *unaff_x28;
      if (lVar10 != 0) {
        iVar16 = 0;
        while( true ) {
          if (*(int *)(lVar10 + 0x10) <= iVar16) {
            FUN_00e38100();
            goto LAB_00e3b030;
          }
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
             _fStack00000000000001e0 == 0)) break;
          *(float *)(_fStack00000000000001e0 + 0x84) =
               *(float *)(_fStack00000000000001e0 + 0x84) *
               (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar35;
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
             _fStack00000000000001e0 == 0)) break;
          *(float *)(_fStack00000000000001e0 + 0x48) =
               *(float *)(_fStack00000000000001e0 + 0x48) *
               (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar35;
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
             _fStack00000000000001e0 == 0)) break;
          iVar16 = iVar16 + 1;
          *(float *)(_fStack00000000000001e0 + 0x54) =
               *(float *)(_fStack00000000000001e0 + 0x54) *
               (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar35;
          lVar10 = *(long *)(unaff_x19 + 0x78);
          if (lVar10 == 0) break;
        }
      }
    }
  }
LAB_00e3b024:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


