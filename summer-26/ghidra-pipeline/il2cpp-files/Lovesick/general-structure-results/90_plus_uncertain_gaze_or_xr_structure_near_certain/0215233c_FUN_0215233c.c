/*
FUNCTION_NAME: FUN_0215233c
ENTRY_POINT: 0215233c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 248
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215233c(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  int iVar132;
  ulong uVar133;
  long *plVar134;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar8 = Method_Meta_WitAi_WitRuntimeRequestConfiguration_GetServerAccessToken__;
  if ((DAT_0378128c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(StringLiteral_3654);
    thunk_FUN_00d48444(StringLiteral_6114);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Background>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ed1a0);
    thunk_FUN_00d48444(StringLiteral_9728);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_FileStream__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Type[]>_Dispose__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__);
    thunk_FUN_00d48444(Method_AutoExtensions_CanGetComponent<GrabbableObject>__);
    thunk_FUN_00d48444(StringLiteral_5042);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_get_Count__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_37_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eac88);
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_TypeInfo
                      );
    thunk_FUN_00d48444(Method_Meta_WitAi_WitRuntimeRequestConfiguration_GetServerAccessToken__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Bson_BsonWriter_WriteValue__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_LinkedList<WebConnection>_get_Count__);
    DAT_0378128c = 1;
  }
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  FUN_021447f0(param_1);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  lVar15 = FUN_02147858(param_1,0x73,0xf,7);
  uStack_68 = 0;
  local_70 = 0;
  FUN_021f605c(&local_70,*(undefined8 *)puVar8,0);
  puVar13 = Method_Newtonsoft_Json_Bson_BsonWriter_WriteValue__;
  puVar12 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
  puVar11 = Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__;
  puVar10 = Method_System_Collections_Generic_List_Enumerator<Type[]>_Dispose__;
  puVar7 = PTR_DAT_033eac88;
  if (lVar15 != 0) {
    *(undefined8 *)(lVar15 + 0x28) = uStack_68;
    *(undefined8 *)(lVar15 + 0x20) = local_70;
    puVar9 = OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo;
    uStack_68 = 0;
    local_70 = 0;
    FUN_021f605c(&local_70,*(undefined8 *)puVar8,0);
    uVar16 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_70,uStack_68,0);
    uVar17 = DAT_02953b08;
    *(undefined8 *)(lVar15 + 0x40) = uVar16;
    *(undefined8 *)(lVar15 + 0x98) = uVar17;
    uStack_68 = 0;
    local_70 = 0;
    FUN_021f605c(&local_70,*(undefined8 *)puVar8,0);
    *(undefined8 *)(lVar15 + 0x60) = uStack_68;
    *(undefined8 *)(lVar15 + 0x58) = local_70;
    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = _DAT_02953b50;
    *(undefined8 *)(lVar15 + 0x18) = _UNK_02953b58;
    *(undefined8 *)(lVar15 + 0x10) = uVar17;
    FUN_021f605c(&local_80,*(undefined8 *)puVar10,0);
    FUN_021f605c(&local_90,*(undefined8 *)puVar7,0);
    FUN_021f605c(&local_a0,*(undefined8 *)puVar13,0);
    FUN_021f605c(&local_b0,*(undefined8 *)puVar11,0);
    uVar17 = FUN_02155018(param_1,local_80,local_78,param_1);
    lVar18 = FUN_021551cc(param_1,local_90,local_88,param_1);
    lVar19 = FUN_02155398(param_1,local_90,local_88,param_1);
    lVar20 = FUN_02155558(param_1,local_90,local_88,param_1);
    lVar21 = FUN_02155724(param_1,local_90,local_88,param_1);
    lVar22 = FUN_021558e4(param_1,local_90,local_88,param_1);
    lVar23 = FUN_02155aa4(param_1,local_90,local_88,param_1);
    lVar24 = FUN_02155c64(param_1,local_90,local_88,param_1);
    lVar25 = FUN_02155e24(param_1,local_90,local_88,param_1);
    lVar26 = FUN_02155fe4(param_1,local_90,local_88,param_1);
    lVar27 = FUN_021561a4(param_1,local_90,local_88,param_1);
    lVar28 = FUN_02156364(param_1,local_90,local_88,param_1);
    lVar29 = FUN_02156524(param_1,local_90,local_88,param_1);
    lVar30 = FUN_021566e4(param_1,local_90,local_88,param_1);
    lVar31 = FUN_021568a4(param_1,local_90,local_88,param_1);
    lVar32 = FUN_02156a64(param_1,local_90,local_88,param_1);
    lVar33 = FUN_02156c24(param_1,local_90,local_88,param_1);
    lVar34 = FUN_02156de4(param_1,local_90,local_88,param_1);
    lVar35 = FUN_02156fa4(param_1,local_90,local_88,param_1);
    lVar36 = FUN_02157164(param_1,local_90,local_88,param_1);
    lVar37 = FUN_02157324(param_1,local_90,local_88,param_1);
    lVar38 = FUN_021574e4(param_1,local_90,local_88,param_1);
    lVar39 = FUN_021576a4(param_1,local_90,local_88,param_1);
    lVar40 = FUN_02157864(param_1,local_90,local_88,param_1);
    lVar41 = FUN_02157a24(param_1,local_90,local_88,param_1);
    lVar42 = FUN_02157be4(param_1,local_90,local_88,param_1);
    lVar43 = FUN_02157da4(param_1,local_90,local_88,param_1);
    lVar44 = FUN_02157f64(param_1,local_90,local_88,param_1);
    lVar45 = FUN_02158124(param_1,local_90,local_88,param_1);
    lVar46 = FUN_021582e4(param_1,local_90,local_88,param_1);
    lVar47 = Unity_Mathematics_Geometry_Plane__Normalize(param_1,local_90,local_88,param_1);
    lVar48 = FUN_02158664(param_1,local_90,local_88,param_1);
    lVar49 = FUN_02158824(param_1,local_90,local_88,param_1);
    lVar50 = FUN_021589e4(param_1,local_90,local_88,param_1);
    lVar51 = FUN_02158ba4(param_1,local_90,local_88,param_1);
    lVar52 = FUN_02158d64(param_1,local_90,local_88,param_1);
    lVar53 = FUN_02158f24(param_1,local_90,local_88,param_1);
    lVar54 = FUN_021590e4(param_1,local_90,local_88,param_1);
    lVar55 = FUN_021592a4(param_1,local_90,local_88,param_1);
    lVar56 = Unity_Mathematics_bool4x3__op_ExclusiveOr(param_1,local_90,local_88,param_1);
    lVar57 = FUN_02159624(param_1,local_90,local_88,param_1);
    lVar58 = FUN_021597e4(param_1,local_90,local_88,param_1);
    lVar59 = FUN_021599a4(param_1,local_90,local_88,param_1);
    lVar60 = FUN_02159b64(param_1,local_90,local_88,param_1);
    lVar61 = FUN_02159d24(param_1,local_90,local_88,param_1);
    lVar62 = FUN_02159ee4(param_1,local_90,local_88,param_1);
    lVar63 = FUN_0215a0a4(param_1,local_90,local_88,param_1);
    lVar64 = FUN_0215a250(param_1,local_90,local_88,param_1);
    lVar65 = FUN_0215a3fc(param_1,local_90,local_88,param_1);
    lVar66 = FUN_0215a5a8(param_1,local_90,local_88,param_1);
    lVar67 = FUN_0215a754(param_1,local_90,local_88,param_1);
    lVar68 = FUN_0215a900(param_1,local_90,local_88,param_1);
    lVar69 = FUN_0215aaac(param_1,local_90,local_88,param_1);
    lVar70 = FUN_0215ac58(param_1,local_90,local_88,param_1);
    lVar71 = FUN_0215ae04(param_1,local_90,local_88,param_1);
    lVar72 = FUN_0215afb0(param_1,local_90,local_88,param_1);
    lVar73 = FUN_0215b15c(param_1,local_90,local_88,param_1);
    lVar74 = Unity_Mathematics_double2__op_Equality(param_1,local_90,local_88,param_1);
    lVar75 = Unity_Mathematics_double2__get_yyx(param_1,local_a0,local_98,param_1);
    lVar76 = FUN_0215b6cc(param_1,local_90,local_88,param_1);
    lVar77 = FUN_0215b898(param_1,local_90,local_88,param_1);
    lVar78 = FUN_0215ba64(param_1,local_a0,local_98,param_1);
    lVar79 = FUN_0215bc3c(param_1,local_90,local_88,param_1);
    lVar80 = FUN_0215be08(param_1,local_90,local_88,param_1);
    lVar81 = FUN_0215bfd4(param_1,local_a0,local_98,param_1);
    lVar82 = FUN_0215c1ac(param_1,local_90,local_88,param_1);
    lVar83 = FUN_0215c378(param_1,local_90,local_88,param_1);
    lVar84 = FUN_0215c544(param_1,local_90,local_88,param_1);
    lVar85 = FUN_0215c710(param_1,local_90,local_88,param_1);
    lVar86 = FUN_0215c8d0(param_1,local_90,local_88,param_1);
    lVar87 = FUN_0215ca90(param_1,local_90,local_88,param_1);
    lVar88 = FUN_0215cc50(param_1,local_90,local_88,param_1);
    lVar89 = FUN_0215ce10(param_1,local_90,local_88,param_1);
    lVar90 = FUN_0215cfd0(param_1,local_90,local_88,param_1);
    lVar91 = FUN_0215d190(param_1,local_90,local_88,param_1);
    lVar92 = FUN_0215d350(param_1,local_90,local_88,param_1);
    lVar93 = FUN_0215d510(param_1,local_90,local_88,param_1);
    lVar94 = FUN_0215d6d0(param_1,local_90,local_88,param_1);
    lVar95 = FUN_0215d890(param_1,local_90,local_88,param_1);
    lVar96 = FUN_0215da50(param_1,local_90,local_88,param_1);
    lVar97 = FUN_0215dc10(param_1,local_90,local_88,param_1);
    lVar98 = FUN_0215ddd0(param_1,local_90,local_88,param_1);
    lVar99 = FUN_0215df90(param_1,local_90,local_88,param_1);
    lVar100 = FUN_0215e150(param_1,local_90,local_88,param_1);
    lVar101 = FUN_0215e310(param_1,local_90,local_88,param_1);
    lVar102 = FUN_0215e4d0(param_1,local_90,local_88,param_1);
    lVar103 = FUN_0215e690(param_1,local_90,local_88,param_1);
    lVar104 = FUN_0215e850(param_1,local_90,local_88,param_1);
    lVar105 = FUN_0215ea10(param_1,local_90,local_88,param_1);
    lVar106 = FUN_0215ebd0(param_1,local_90,local_88,param_1);
    lVar107 = FUN_0215ed90(param_1,local_90,local_88,param_1);
    lVar108 = FUN_0215ef50(param_1,local_90,local_88,param_1);
    lVar109 = FUN_0215f110(param_1,local_90,local_88,param_1);
    lVar110 = FUN_0215f2d0(param_1,local_90,local_88,param_1);
    lVar111 = FUN_0215f490(param_1,local_90,local_88,param_1);
    lVar112 = FUN_0215f650(param_1,local_90,local_88,param_1);
    lVar113 = FUN_0215f810(param_1,local_90,local_88,param_1);
    lVar114 = FUN_0215f9d0(param_1,local_90,local_88,param_1);
    lVar115 = FUN_0215fb90(param_1,local_90,local_88,param_1);
    lVar116 = FUN_0215fd50(param_1,local_90,local_88,param_1);
    lVar117 = Unity_Mathematics_double3__get_zzxy(param_1,local_90,local_88,param_1);
    lVar118 = FUN_021600d0(param_1,local_90,local_88,param_1);
    lVar119 = FUN_02160290(param_1,local_90,local_88,param_1);
    lVar120 = FUN_02160450(param_1,local_90,local_88,param_1);
    lVar121 = FUN_02160610(param_1,local_90,local_88,param_1);
    lVar122 = Unity_Mathematics_double3x2__op_Multiply(param_1,local_90,local_88,param_1);
    lVar123 = FUN_02160990(param_1,local_90,local_88,param_1);
    lVar124 = FUN_02160b50(param_1,local_90,local_88,param_1);
    lVar125 = FUN_02160d10(param_1,local_90,local_88,param_1);
    lVar126 = FUN_02160ed0(param_1,local_90,local_88,param_1);
    lVar127 = FUN_0216107c(param_1,local_90,local_88,param_1);
    lVar128 = FUN_02161228(param_1,local_90,local_88,param_1);
    lVar129 = FUN_021613d4(param_1,local_90,local_88,param_1);
    lVar130 = FUN_02161580(param_1,local_90,local_88,param_1);
    uVar16 = FUN_0216172c(param_1,local_b0,local_a8,param_1);
    uStack_b8 = 0;
    local_c0 = 0;
    FUN_021f605c(&local_c0,*(undefined8 *)puVar9,0);
    lVar131 = *(long *)(lVar15 + 0x140);
    if (lVar131 != 0) {
      if (*(int *)(lVar131 + 0x18) == 0) goto LAB_02155008;
      *(undefined8 *)(lVar131 + 0x28) = uStack_b8;
      *(undefined8 *)(lVar131 + 0x20) = local_c0;
      plVar134 = *(long **)(lVar15 + 0x148);
      if (plVar134 != (long *)0x0) {
        if ((lVar18 != 0) &&
           (lVar131 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar134 + 0x40)), lVar131 == 0))
        goto LAB_0215500c;
        puVar8 = Method_AutoExtensions_CanGetComponent<GrabbableObject>__;
        if ((int)plVar134[3] == 0) {
LAB_02155008:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar134[4] = lVar18;
        uStack_c8 = 0;
        local_d0 = 0;
        FUN_021f605c(&local_d0,*(undefined8 *)puVar8,0);
        lVar131 = *(long *)(lVar15 + 0x140);
        if (lVar131 != 0) {
          if (*(uint *)(lVar131 + 0x18) < 2) goto LAB_02155008;
          *(undefined8 *)(lVar131 + 0x38) = uStack_c8;
          *(undefined8 *)(lVar131 + 0x30) = local_d0;
          plVar134 = *(long **)(lVar15 + 0x148);
          if (plVar134 != (long *)0x0) {
            if ((lVar18 != 0) &&
               (lVar131 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar134 + 0x40)), lVar131 == 0
               )) goto LAB_0215500c;
            puVar8 = 
            Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
            ;
            if (*(uint *)(plVar134 + 3) < 2) goto LAB_02155008;
            plVar134[5] = lVar18;
            uStack_d8 = 0;
            local_e0 = 0;
            FUN_021f605c(&local_e0,*(undefined8 *)puVar8,0);
            lVar131 = *(long *)(lVar15 + 0x140);
            if (lVar131 != 0) {
              if (*(uint *)(lVar131 + 0x18) < 3) goto LAB_02155008;
              *(undefined8 *)(lVar131 + 0x48) = uStack_d8;
              *(undefined8 *)(lVar131 + 0x40) = local_e0;
              plVar134 = *(long **)(lVar15 + 0x148);
              if (plVar134 != (long *)0x0) {
                if ((lVar20 != 0) &&
                   (lVar131 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar134 + 0x40)),
                   lVar131 == 0)) goto LAB_0215500c;
                puVar8 = 
                UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_TypeInfo;
                if (*(uint *)(plVar134 + 3) < 3) goto LAB_02155008;
                plVar134[6] = lVar20;
                uStack_e8 = 0;
                local_f0 = 0;
                FUN_021f605c(&local_f0,*(undefined8 *)puVar8,0);
                lVar131 = *(long *)(lVar15 + 0x140);
                if (lVar131 != 0) {
                  if (*(uint *)(lVar131 + 0x18) < 4) goto LAB_02155008;
                  *(undefined8 *)(lVar131 + 0x58) = uStack_e8;
                  *(undefined8 *)(lVar131 + 0x50) = local_f0;
                  plVar134 = *(long **)(lVar15 + 0x148);
                  if (plVar134 != (long *)0x0) {
                    if ((lVar73 != 0) &&
                       (lVar131 = thunk_FUN_00d6225c(lVar73,*(undefined8 *)(*plVar134 + 0x40)),
                       lVar131 == 0)) goto LAB_0215500c;
                    if (*(uint *)(plVar134 + 3) < 4) goto LAB_02155008;
                    plVar134[7] = lVar73;
                    uStack_f8 = 0;
                    local_100 = 0;
                    FUN_021f605c(&local_100,*(undefined8 *)puVar8,0);
                    lVar131 = *(long *)(lVar15 + 0x140);
                    if (lVar131 != 0) {
                      if (*(uint *)(lVar131 + 0x18) < 5) goto LAB_02155008;
                      *(undefined8 *)(lVar131 + 0x68) = uStack_f8;
                      *(undefined8 *)(lVar131 + 0x60) = local_100;
                      plVar134 = *(long **)(lVar15 + 0x148);
                      if (plVar134 != (long *)0x0) {
                        if ((lVar74 != 0) &&
                           (lVar131 = thunk_FUN_00d6225c(lVar74,*(undefined8 *)(*plVar134 + 0x40)),
                           lVar131 == 0)) goto LAB_0215500c;
                        if (*(uint *)(plVar134 + 3) < 5) goto LAB_02155008;
                        plVar134[8] = lVar74;
                        uStack_108 = 0;
                        local_110 = 0;
                        FUN_021f605c(&local_110,*(undefined8 *)puVar8,0);
                        lVar131 = *(long *)(lVar15 + 0x140);
                        if (lVar131 != 0) {
                          if (*(uint *)(lVar131 + 0x18) < 6) goto LAB_02155008;
                          *(undefined8 *)(lVar131 + 0x78) = uStack_108;
                          *(undefined8 *)(lVar131 + 0x70) = local_110;
                          plVar134 = *(long **)(lVar15 + 0x148);
                          if (plVar134 != (long *)0x0) {
                            if ((lVar75 != 0) &&
                               (lVar131 = thunk_FUN_00d6225c(lVar75,*(undefined8 *)
                                                                     (*plVar134 + 0x40)),
                               lVar131 == 0)) goto LAB_0215500c;
                            if (*(uint *)(plVar134 + 3) < 6) goto LAB_02155008;
                            plVar134[9] = lVar75;
                            uStack_118 = 0;
                            local_120 = 0;
                            FUN_021f605c(&local_120,*(undefined8 *)puVar8,0);
                            lVar131 = *(long *)(lVar15 + 0x140);
                            if (lVar131 != 0) {
                              if (*(uint *)(lVar131 + 0x18) < 7) goto LAB_02155008;
                              *(undefined8 *)(lVar131 + 0x88) = uStack_118;
                              *(undefined8 *)(lVar131 + 0x80) = local_120;
                              plVar134 = *(long **)(lVar15 + 0x148);
                              if (plVar134 != (long *)0x0) {
                                if ((lVar76 != 0) &&
                                   (lVar131 = thunk_FUN_00d6225c(lVar76,*(undefined8 *)
                                                                         (*plVar134 + 0x40)),
                                   lVar131 == 0)) goto LAB_0215500c;
                                if (*(uint *)(plVar134 + 3) < 7) goto LAB_02155008;
                                plVar134[10] = lVar76;
                                uStack_128 = 0;
                                local_130 = 0;
                                FUN_021f605c(&local_130,*(undefined8 *)puVar8,0);
                                lVar131 = *(long *)(lVar15 + 0x140);
                                if (lVar131 != 0) {
                                  if (*(uint *)(lVar131 + 0x18) < 8) goto LAB_02155008;
                                  *(undefined8 *)(lVar131 + 0x98) = uStack_128;
                                  *(undefined8 *)(lVar131 + 0x90) = local_130;
                                  plVar134 = *(long **)(lVar15 + 0x148);
                                  if (plVar134 != (long *)0x0) {
                                    if ((lVar77 != 0) &&
                                       (lVar131 = thunk_FUN_00d6225c(lVar77,*(undefined8 *)
                                                                             (*plVar134 + 0x40)),
                                       lVar131 == 0)) goto LAB_0215500c;
                                    if (*(uint *)(plVar134 + 3) < 8) goto LAB_02155008;
                                    plVar134[0xb] = lVar77;
                                    uStack_138 = 0;
                                    local_140 = 0;
                                    FUN_021f605c(&local_140,*(undefined8 *)puVar8,0);
                                    lVar131 = *(long *)(lVar15 + 0x140);
                                    if (lVar131 != 0) {
                                      if (*(uint *)(lVar131 + 0x18) < 9) goto LAB_02155008;
                                      *(undefined8 *)(lVar131 + 0xa8) = uStack_138;
                                      *(undefined8 *)(lVar131 + 0xa0) = local_140;
                                      plVar134 = *(long **)(lVar15 + 0x148);
                                      if (plVar134 != (long *)0x0) {
                                        if ((lVar78 != 0) &&
                                           (lVar131 = thunk_FUN_00d6225c(lVar78,*(undefined8 *)
                                                                                 (*plVar134 + 0x40))
                                           , lVar131 == 0)) goto LAB_0215500c;
                                        if (*(uint *)(plVar134 + 3) < 9) goto LAB_02155008;
                                        plVar134[0xc] = lVar78;
                                        uStack_148 = 0;
                                        local_150 = 0;
                                        FUN_021f605c(&local_150,*(undefined8 *)puVar8,0);
                                        lVar131 = *(long *)(lVar15 + 0x140);
                                        if (lVar131 != 0) {
                                          if (*(uint *)(lVar131 + 0x18) < 10) goto LAB_02155008;
                                          *(undefined8 *)(lVar131 + 0xb8) = uStack_148;
                                          *(undefined8 *)(lVar131 + 0xb0) = local_150;
                                          plVar134 = *(long **)(lVar15 + 0x148);
                                          if (plVar134 != (long *)0x0) {
                                            if ((lVar79 != 0) &&
                                               (lVar131 = thunk_FUN_00d6225c(lVar79,*(undefined8 *)
                                                                                     (*plVar134 +
                                                                                     0x40)),
                                               lVar131 == 0)) goto LAB_0215500c;
                                            if (*(uint *)(plVar134 + 3) < 10) goto LAB_02155008;
                                            plVar134[0xd] = lVar79;
                                            uStack_158 = 0;
                                            local_160 = 0;
                                            FUN_021f605c(&local_160,*(undefined8 *)puVar8,0);
                                            lVar131 = *(long *)(lVar15 + 0x140);
                                            if (lVar131 != 0) {
                                              if (*(uint *)(lVar131 + 0x18) < 0xb)
                                              goto LAB_02155008;
                                              *(undefined8 *)(lVar131 + 200) = uStack_158;
                                              *(undefined8 *)(lVar131 + 0xc0) = local_160;
                                              plVar134 = *(long **)(lVar15 + 0x148);
                                              if (plVar134 != (long *)0x0) {
                                                if ((lVar80 != 0) &&
                                                   (lVar131 = thunk_FUN_00d6225c(lVar80,*(undefined8
                                                                                          *)(*
                                                  plVar134 + 0x40)), lVar131 == 0))
                                                goto LAB_0215500c;
                                                if (*(uint *)(plVar134 + 3) < 0xb)
                                                goto LAB_02155008;
                                                plVar134[0xe] = lVar80;
                                                uStack_168 = 0;
                                                local_170 = 0;
                                                FUN_021f605c(&local_170,*(undefined8 *)puVar8,0);
                                                lVar131 = *(long *)(lVar15 + 0x140);
                                                if (lVar131 != 0) {
                                                  if (*(uint *)(lVar131 + 0x18) < 0xc)
                                                  goto LAB_02155008;
                                                  *(undefined8 *)(lVar131 + 0xd8) = uStack_168;
                                                  *(undefined8 *)(lVar131 + 0xd0) = local_170;
                                                  plVar134 = *(long **)(lVar15 + 0x148);
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar81 != 0) &&
                                                       (lVar131 = thunk_FUN_00d6225c(lVar81,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar131 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0xc)
                                                  goto LAB_02155008;
                                                  plVar134[0xf] = lVar81;
                                                  uStack_178 = 0;
                                                  local_180 = 0;
                                                  FUN_021f605c(&local_180,*(undefined8 *)puVar8,0);
                                                  lVar131 = *(long *)(lVar15 + 0x140);
                                                  if (lVar131 != 0) {
                                                    if (*(uint *)(lVar131 + 0x18) < 0xd)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar131 + 0xe8) = uStack_178;
                                                    *(undefined8 *)(lVar131 + 0xe0) = local_180;
                                                    plVar134 = *(long **)(lVar15 + 0x148);
                                                    if (plVar134 != (long *)0x0) {
                                                      if ((lVar82 != 0) &&
                                                         (lVar131 = thunk_FUN_00d6225c(lVar82,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar131 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0xd)
                                                  goto LAB_02155008;
                                                  plVar134[0x10] = lVar82;
                                                  uStack_188 = 0;
                                                  local_190 = 0;
                                                  FUN_021f605c(&local_190,*(undefined8 *)puVar8,0);
                                                  lVar131 = *(long *)(lVar15 + 0x140);
                                                  if (lVar131 != 0) {
                                                    if (*(uint *)(lVar131 + 0x18) < 0xe)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar131 + 0xf8) = uStack_188;
                                                    *(undefined8 *)(lVar131 + 0xf0) = local_190;
                                                    plVar134 = *(long **)(lVar15 + 0x148);
                                                    if (plVar134 != (long *)0x0) {
                                                      if ((lVar83 != 0) &&
                                                         (lVar131 = thunk_FUN_00d6225c(lVar83,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar131 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0xe)
                                                  goto LAB_02155008;
                                                  plVar134[0x11] = lVar83;
                                                  uStack_198 = 0;
                                                  local_1a0 = 0;
                                                  FUN_021f605c(&local_1a0,*(undefined8 *)puVar8,0);
                                                  lVar131 = *(long *)(lVar15 + 0x140);
                                                  if (lVar131 != 0) {
                                                    if (*(uint *)(lVar131 + 0x18) < 0xf)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar131 + 0x108) = uStack_198;
                                                    *(undefined8 *)(lVar131 + 0x100) = local_1a0;
                                                    plVar134 = *(long **)(lVar15 + 0x148);
                                                    if (plVar134 != (long *)0x0) {
                                                      if ((lVar84 != 0) &&
                                                         (lVar131 = thunk_FUN_00d6225c(lVar84,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar131 == 0))
                                                  goto LAB_0215500c;
                                                  puVar8 = StringLiteral_5042;
                                                  if (*(uint *)(plVar134 + 3) < 0xf)
                                                  goto LAB_02155008;
                                                  plVar134[0x12] = lVar84;
                                                  uStack_1a8 = 0;
                                                  local_1b0 = 0;
                                                  FUN_021f605c(&local_1b0,*(undefined8 *)puVar8,0);
                                                  puVar8 = 
                                                  System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                                                  ;
                                                  lVar131 = *(long *)(lVar15 + 0x138);
                                                  if (lVar131 != 0) {
                                                    if (*(int *)(lVar131 + 0x18) == 0)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar131 + 0x28) = uStack_1a8;
                                                    *(undefined8 *)(lVar131 + 0x20) = local_1b0;
                                                    uStack_1b8 = 0;
                                                    local_1c0 = 0;
                                                    FUN_021f605c(&local_1c0,*(undefined8 *)puVar8,0)
                                                    ;
                                                    puVar8 = OVRPlugin_OVRP_1_37_0_TypeInfo;
                                                    lVar131 = *(long *)(lVar15 + 0x138);
                                                    if (lVar131 != 0) {
                                                      if (*(uint *)(lVar131 + 0x18) < 2)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar131 + 0x38) = uStack_1b8;
                                                      *(undefined8 *)(lVar131 + 0x30) = local_1c0;
                                                      uStack_1c8 = 0;
                                                      local_1d0 = 0;
                                                      FUN_021f605c(&local_1d0,*(undefined8 *)puVar8,
                                                                   0);
                                                      puVar8 = 
                                                  Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_get_Count__
                                                  ;
                                                  lVar131 = *(long *)(lVar15 + 0x138);
                                                  if (lVar131 != 0) {
                                                    if (*(uint *)(lVar131 + 0x18) < 3)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar131 + 0x48) = uStack_1c8;
                                                    *(undefined8 *)(lVar131 + 0x40) = local_1d0;
                                                    uStack_1d8 = 0;
                                                    local_1e0 = 0;
                                                    FUN_021f605c(&local_1e0,*(undefined8 *)puVar8,0)
                                                    ;
                                                    puVar8 = 
                                                  Method_System_Collections_Generic_LinkedList<WebConnection>_get_Count__
                                                  ;
                                                  lVar131 = *(long *)(lVar15 + 0x138);
                                                  if (lVar131 != 0) {
                                                    if (*(uint *)(lVar131 + 0x18) < 4)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar131 + 0x58) = uStack_1d8;
                                                    *(undefined8 *)(lVar131 + 0x50) = local_1e0;
                                                    uStack_1e8 = 0;
                                                    local_1f0 = 0;
                                                    FUN_021f605c(&local_1f0,*(undefined8 *)puVar8,0)
                                                    ;
                                                    puVar8 = Method_System_IO_FileStream__ctor__;
                                                    lVar131 = *(long *)(lVar15 + 0x138);
                                                    if (lVar131 != 0) {
                                                      if (*(uint *)(lVar131 + 0x18) < 5)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar131 + 0x68) = uStack_1e8;
                                                      *(undefined8 *)(lVar131 + 0x60) = local_1f0;
                                                      uStack_1f8 = 0;
                                                      local_200 = 0;
                                                      FUN_021f605c(&local_200,*(undefined8 *)puVar8,
                                                                   0);
                                                      puVar8 = 
                                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__
                                                  ;
                                                  lVar131 = *(long *)(lVar15 + 0x138);
                                                  if (lVar131 != 0) {
                                                    if (*(uint *)(lVar131 + 0x18) < 6)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar131 + 0x78) = uStack_1f8;
                                                    *(undefined8 *)(lVar131 + 0x70) = local_200;
                                                    uStack_208 = 0;
                                                    local_210 = 0;
                                                    FUN_021f605c(&local_210,*(undefined8 *)puVar8,0)
                                                    ;
                                                    puVar8 = StringLiteral_3654;
                                                    lVar131 = *(long *)(lVar15 + 0x138);
                                                    if (lVar131 != 0) {
                                                      if (*(uint *)(lVar131 + 0x18) < 7)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar131 + 0x88) = uStack_208;
                                                      *(undefined8 *)(lVar131 + 0x80) = local_210;
                                                      plVar134 = (long *)FUN_00da4fb8(*(undefined8 *
                                                                                       )puVar8,0x6e)
                                                      ;
                                                      *(long **)(param_1 + 0x1b8) = plVar134;
                                                      if (plVar134 != (long *)0x0) {
                                                        if ((lVar19 != 0) &&
                                                           (lVar131 = thunk_FUN_00d6225c(lVar19,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar131 == 0)) {
LAB_0215500c:
                                                    uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da5038(uVar17,0);
                                                  }
                                                  if ((int)plVar134[3] == 0) goto LAB_02155008;
                                                  puVar2 = (undefined8 *)(param_1 + 0x1b8);
                                                  plVar134[4] = lVar19;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar20 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar20,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 2)
                                                  goto LAB_02155008;
                                                  plVar134[5] = lVar20;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar21 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar21,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 3)
                                                  goto LAB_02155008;
                                                  plVar134[6] = lVar21;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar22 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar22,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 4)
                                                  goto LAB_02155008;
                                                  plVar134[7] = lVar22;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar23 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar23,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 5)
                                                  goto LAB_02155008;
                                                  plVar134[8] = lVar23;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar24 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar24,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 6)
                                                  goto LAB_02155008;
                                                  plVar134[9] = lVar24;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar25 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar25,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 7)
                                                  goto LAB_02155008;
                                                  plVar134[10] = lVar25;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar26 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar26,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 8)
                                                  goto LAB_02155008;
                                                  plVar134[0xb] = lVar26;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar27 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar27,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 9)
                                                  goto LAB_02155008;
                                                  plVar134[0xc] = lVar27;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar28 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar28,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 10)
                                                  goto LAB_02155008;
                                                  plVar134[0xd] = lVar28;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar29 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar29,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0xb)
                                                  goto LAB_02155008;
                                                  plVar134[0xe] = lVar29;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar30 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar30,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0xc)
                                                  goto LAB_02155008;
                                                  plVar134[0xf] = lVar30;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar31 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar31,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0xd)
                                                  goto LAB_02155008;
                                                  plVar134[0x10] = lVar31;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar32 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar32,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0xe)
                                                  goto LAB_02155008;
                                                  plVar134[0x11] = lVar32;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar37 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar37,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0xf)
                                                  goto LAB_02155008;
                                                  plVar134[0x12] = lVar37;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar38 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar38,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x10)
                                                  goto LAB_02155008;
                                                  plVar134[0x13] = lVar38;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar39 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar39,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x11)
                                                  goto LAB_02155008;
                                                  plVar134[0x14] = lVar39;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar40 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar40,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x12)
                                                  goto LAB_02155008;
                                                  plVar134[0x15] = lVar40;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar41 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar41,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x13)
                                                  goto LAB_02155008;
                                                  plVar134[0x16] = lVar41;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar42 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar42,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x14)
                                                  goto LAB_02155008;
                                                  plVar134[0x17] = lVar42;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar43 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar43,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x15)
                                                  goto LAB_02155008;
                                                  plVar134[0x18] = lVar43;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar44 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar44,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x16)
                                                  goto LAB_02155008;
                                                  plVar134[0x19] = lVar44;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar45 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar45,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x17)
                                                  goto LAB_02155008;
                                                  plVar134[0x1a] = lVar45;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar46 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar46,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x18)
                                                  goto LAB_02155008;
                                                  plVar134[0x1b] = lVar46;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar47 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar47,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x19)
                                                  goto LAB_02155008;
                                                  plVar134[0x1c] = lVar47;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar48 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar48,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x1a)
                                                  goto LAB_02155008;
                                                  plVar134[0x1d] = lVar48;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar49 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar49,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x1b)
                                                  goto LAB_02155008;
                                                  plVar134[0x1e] = lVar49;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar50 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar50,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x1c)
                                                  goto LAB_02155008;
                                                  plVar134[0x1f] = lVar50;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar51 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar51,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x1d)
                                                  goto LAB_02155008;
                                                  plVar134[0x20] = lVar51;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar52 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar52,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x1e)
                                                  goto LAB_02155008;
                                                  plVar134[0x21] = lVar52;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar53 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar53,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x1f)
                                                  goto LAB_02155008;
                                                  plVar134[0x22] = lVar53;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar54 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar54,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x20)
                                                  goto LAB_02155008;
                                                  plVar134[0x23] = lVar54;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar55 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar55,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x21)
                                                  goto LAB_02155008;
                                                  plVar134[0x24] = lVar55;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar56 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar56,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x22)
                                                  goto LAB_02155008;
                                                  plVar134[0x25] = lVar56;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar57 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar57,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x23)
                                                  goto LAB_02155008;
                                                  plVar134[0x26] = lVar57;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar58 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar58,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x24)
                                                  goto LAB_02155008;
                                                  plVar134[0x27] = lVar58;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar59 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar59,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x25)
                                                  goto LAB_02155008;
                                                  plVar134[0x28] = lVar59;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar60 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar60,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x26)
                                                  goto LAB_02155008;
                                                  plVar134[0x29] = lVar60;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar61 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar61,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x27)
                                                  goto LAB_02155008;
                                                  plVar134[0x2a] = lVar61;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar62 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar62,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x28)
                                                  goto LAB_02155008;
                                                  plVar134[0x2b] = lVar62;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar63 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar63,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x29)
                                                  goto LAB_02155008;
                                                  plVar134[0x2c] = lVar63;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar64 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar64,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x2a)
                                                  goto LAB_02155008;
                                                  plVar134[0x2d] = lVar64;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar65 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar65,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x2b)
                                                  goto LAB_02155008;
                                                  plVar134[0x2e] = lVar65;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar66 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar66,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x2c)
                                                  goto LAB_02155008;
                                                  plVar134[0x2f] = lVar66;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar67 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar67,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x2d)
                                                  goto LAB_02155008;
                                                  plVar134[0x30] = lVar67;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar68 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar68,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x2e)
                                                  goto LAB_02155008;
                                                  plVar134[0x31] = lVar68;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar69 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar69,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x2f)
                                                  goto LAB_02155008;
                                                  plVar134[0x32] = lVar69;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar70 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar70,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x30)
                                                  goto LAB_02155008;
                                                  plVar134[0x33] = lVar70;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar71 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar71,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x31)
                                                  goto LAB_02155008;
                                                  plVar134[0x34] = lVar71;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar72 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar72,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x32)
                                                  goto LAB_02155008;
                                                  plVar134[0x35] = lVar72;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar73 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar73,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x33)
                                                  goto LAB_02155008;
                                                  plVar134[0x36] = lVar73;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar74 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar74,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x34)
                                                  goto LAB_02155008;
                                                  plVar134[0x37] = lVar74;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar76 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar76,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x35)
                                                  goto LAB_02155008;
                                                  plVar134[0x38] = lVar76;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar77 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar77,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x36)
                                                  goto LAB_02155008;
                                                  plVar134[0x39] = lVar77;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar79 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar79,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x37)
                                                  goto LAB_02155008;
                                                  plVar134[0x3a] = lVar79;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar80 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar80,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x38)
                                                  goto LAB_02155008;
                                                  plVar134[0x3b] = lVar80;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar82 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar82,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x39)
                                                  goto LAB_02155008;
                                                  plVar134[0x3c] = lVar82;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar83 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar83,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x3a)
                                                  goto LAB_02155008;
                                                  plVar134[0x3d] = lVar83;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar84 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar84,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x3b)
                                                  goto LAB_02155008;
                                                  plVar134[0x3e] = lVar84;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar18 != 0) &&
                                                       (lVar19 = thunk_FUN_00d6225c(lVar18,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar19 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x3c)
                                                  goto LAB_02155008;
                                                  plVar134[0x3f] = lVar18;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar35 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar35,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x3d)
                                                  goto LAB_02155008;
                                                  plVar134[0x40] = lVar35;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar36 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar36,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x3e)
                                                  goto LAB_02155008;
                                                  plVar134[0x41] = lVar36;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar33 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar33,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x3f)
                                                  goto LAB_02155008;
                                                  plVar134[0x42] = lVar33;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar34 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar34,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x40)
                                                  goto LAB_02155008;
                                                  plVar134[0x43] = lVar34;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar85 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar85,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x41)
                                                  goto LAB_02155008;
                                                  plVar134[0x44] = lVar85;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar86 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar86,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x42)
                                                  goto LAB_02155008;
                                                  plVar134[0x45] = lVar86;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar87 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar87,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x43)
                                                  goto LAB_02155008;
                                                  plVar134[0x46] = lVar87;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar88 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar88,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x44)
                                                  goto LAB_02155008;
                                                  plVar134[0x47] = lVar88;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar89 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar89,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x45)
                                                  goto LAB_02155008;
                                                  plVar134[0x48] = lVar89;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar90 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar90,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x46)
                                                  goto LAB_02155008;
                                                  plVar134[0x49] = lVar90;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar91 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar91,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x47)
                                                  goto LAB_02155008;
                                                  plVar134[0x4a] = lVar91;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar92 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar92,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x48)
                                                  goto LAB_02155008;
                                                  plVar134[0x4b] = lVar92;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar93 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar93,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x49)
                                                  goto LAB_02155008;
                                                  plVar134[0x4c] = lVar93;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar94 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar94,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x4a)
                                                  goto LAB_02155008;
                                                  plVar134[0x4d] = lVar94;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar95 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar95,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x4b)
                                                  goto LAB_02155008;
                                                  plVar134[0x4e] = lVar95;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar96 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar96,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x4c)
                                                  goto LAB_02155008;
                                                  plVar134[0x4f] = lVar96;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar97 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar97,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x4d)
                                                  goto LAB_02155008;
                                                  plVar134[0x50] = lVar97;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar98 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar98,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x4e)
                                                  goto LAB_02155008;
                                                  plVar134[0x51] = lVar98;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar99 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar99,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x4f)
                                                  goto LAB_02155008;
                                                  plVar134[0x52] = lVar99;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar100 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar100,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x50)
                                                  goto LAB_02155008;
                                                  plVar134[0x53] = lVar100;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar101 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar101,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x51)
                                                  goto LAB_02155008;
                                                  plVar134[0x54] = lVar101;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar102 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar102,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x52)
                                                  goto LAB_02155008;
                                                  plVar134[0x55] = lVar102;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar103 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar103,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x53)
                                                  goto LAB_02155008;
                                                  plVar134[0x56] = lVar103;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar113 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar113,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x54)
                                                  goto LAB_02155008;
                                                  plVar134[0x57] = lVar113;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar104 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar104,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x55)
                                                  goto LAB_02155008;
                                                  plVar134[0x58] = lVar104;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar105 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar105,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x56)
                                                  goto LAB_02155008;
                                                  plVar134[0x59] = lVar105;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar106 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar106,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x57)
                                                  goto LAB_02155008;
                                                  plVar134[0x5a] = lVar106;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar107 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar107,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x58)
                                                  goto LAB_02155008;
                                                  plVar134[0x5b] = lVar107;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar108 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar108,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x59)
                                                  goto LAB_02155008;
                                                  plVar134[0x5c] = lVar108;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar109 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar109,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x5a)
                                                  goto LAB_02155008;
                                                  plVar134[0x5d] = lVar109;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar110 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar110,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x5b)
                                                  goto LAB_02155008;
                                                  plVar134[0x5e] = lVar110;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar111 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar111,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x5c)
                                                  goto LAB_02155008;
                                                  plVar134[0x5f] = lVar111;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar112 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar112,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x5d)
                                                  goto LAB_02155008;
                                                  plVar134[0x60] = lVar112;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar114 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar114,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x5e)
                                                  goto LAB_02155008;
                                                  plVar134[0x61] = lVar114;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar115 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar115,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x5f)
                                                  goto LAB_02155008;
                                                  plVar134[0x62] = lVar115;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar116 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar116,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x60)
                                                  goto LAB_02155008;
                                                  plVar134[99] = lVar116;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar117 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar117,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x61)
                                                  goto LAB_02155008;
                                                  plVar134[100] = lVar117;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar118 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar118,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x62)
                                                  goto LAB_02155008;
                                                  plVar134[0x65] = lVar118;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar119 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar119,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 99)
                                                  goto LAB_02155008;
                                                  plVar134[0x66] = lVar119;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar120 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar120,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 100)
                                                  goto LAB_02155008;
                                                  plVar134[0x67] = lVar120;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar121 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar121,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x65)
                                                  goto LAB_02155008;
                                                  plVar134[0x68] = lVar121;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar122 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar122,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x66)
                                                  goto LAB_02155008;
                                                  plVar134[0x69] = lVar122;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar123 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar123,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x67)
                                                  goto LAB_02155008;
                                                  plVar134[0x6a] = lVar123;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar124 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar124,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x68)
                                                  goto LAB_02155008;
                                                  plVar134[0x6b] = lVar124;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar125 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar125,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x69)
                                                  goto LAB_02155008;
                                                  plVar134[0x6c] = lVar125;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar126 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar126,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x6a)
                                                  goto LAB_02155008;
                                                  plVar134[0x6d] = lVar126;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar127 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar127,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x6b)
                                                  goto LAB_02155008;
                                                  plVar134[0x6e] = lVar127;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar128 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar128,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x6c)
                                                  goto LAB_02155008;
                                                  plVar134[0x6f] = lVar128;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar129 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar129,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar134 + 3) < 0x6d)
                                                  goto LAB_02155008;
                                                  plVar134[0x70] = lVar129;
                                                  plVar134 = (long *)*puVar2;
                                                  if (plVar134 != (long *)0x0) {
                                                    if ((lVar130 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(lVar130,*(
                                                  undefined8 *)(*plVar134 + 0x40)), lVar18 == 0))
                                                  goto LAB_0215500c;
                                                  puVar10 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__
                                                  ;
                                                  puVar7 = 
                                                  Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                                                  ;
                                                  puVar8 = PTR_DAT_033ed1a0;
                                                  if (*(uint *)(plVar134 + 3) < 0x6e)
                                                  goto LAB_02155008;
                                                  plVar134[0x71] = lVar130;
                                                  *(undefined8 *)(param_1 + 0x170) = uVar17;
                                                  *(long *)(param_1 + 0x178) = lVar75;
                                                  *(long *)(param_1 + 0x180) = lVar81;
                                                  *(long *)(param_1 + 0x188) = lVar78;
                                                  *(undefined8 *)(param_1 + 400) = uVar16;
                                                  puVar13 = StringLiteral_9728;
                                                  puVar12 = StringLiteral_6114;
                                                  puVar11 = 
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Background>__
                                                  ;
                                                  uVar17 = FUN_00da4fb8(*(undefined8 *)puVar10,0x73)
                                                  ;
                                                  FUN_016a34e8(uVar17,*(undefined8 *)puVar8,0);
                                                  *(undefined8 *)(lVar15 + 0x158) = uVar17;
                                                  lVar18 = FUN_00da4fb8(*(undefined8 *)puVar7,0x627)
                                                  ;
                                                  FUN_016a34e8(lVar18,*(undefined8 *)puVar12,0);
                                                  uVar17 = FUN_00da4fb8(*(undefined8 *)puVar13,0x75)
                                                  ;
                                                  FUN_016a34e8(uVar17,*(undefined8 *)puVar11,0);
                                                  if (DAT_03781303 == '\0') {
                                                    thunk_FUN_00d48444(
                                                  Method_System_Security_Cryptography_RC2Transform__ctor__
                                                  );
                                                  thunk_FUN_00d48444(
                                                  Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_Peek__
                                                  );
                                                  DAT_03781303 = '\x01';
                                                  }
                                                  lVar19 = *(long *)
                                                  Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_Peek__
                                                  ;
                                                  plVar134 = *(long **)(lVar19 + 0x38);
                                                  if (plVar134 == (long *)0x0) {
                                                    FUN_00d59478(lVar19);
                                                    plVar134 = *(long **)(lVar19 + 0x38);
                                                  }
                                                  lVar19 = *plVar134;
                                                  if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                                                    lVar19 = FUN_00d5941c();
                                                  }
                                                  if (*(int *)(lVar19 + 0x28) < 0) {
                                                    iVar14 = thunk_FUN_00d42afc();
                                                    iVar14 = iVar14 + -0x10;
                                                  }
                                                  else {
                                                    iVar14 = 8;
                                                  }
                                                  if (lVar18 != 0) {
                                                    iVar6 = 0;
                                                    if (iVar14 != 0) {
                                                      iVar6 = *(int *)(lVar18 + 0x18) / iVar14;
                                                    }
                                                    lVar20 = FUN_00da4fb8(*(undefined8 *)
                                                                                                                                                      
                                                  Method_System_Security_Cryptography_RC2Transform__ctor__
                                                  ,iVar6);
                                                  *(long *)(lVar15 + 0x160) = lVar20;
                                                  lVar19 = 0;
                                                  if (*(int *)(lVar18 + 0x18) != 0) {
                                                    lVar19 = lVar18 + 0x20;
                                                  }
                                                  if (iVar6 < 1) {
LAB_02154fd8:
                                                    *(undefined8 *)(lVar15 + 0x168) = uVar17;
                                                    *(uint *)(lVar15 + 0xa0) =
                                                         *(uint *)(lVar15 + 0xa0) | 0x20;
                                                    return;
                                                  }
                                                  if (lVar20 != 0) {
                                                    iVar132 = 0;
                                                    uVar133 = 0;
                                                    lVar18 = 0x20;
                                                    do {
                                                      if (*(uint *)(lVar20 + 0x18) <= uVar133)
                                                      goto LAB_02155008;
                                                      puVar1 = (undefined4 *)(lVar19 + iVar132);
                                                      uVar5 = *(undefined1 *)((long)puVar1 + 6);
                                                      uVar4 = *puVar1;
                                                      uVar133 = uVar133 + 1;
                                                      puVar3 = (undefined4 *)(lVar20 + lVar18);
                                                      *(undefined2 *)(puVar3 + 1) =
                                                           *(undefined2 *)(puVar1 + 1);
                                                      *(undefined1 *)((long)puVar3 + 6) = uVar5;
                                                      *puVar3 = uVar4;
                                                      if ((long)iVar6 == uVar133) goto LAB_02154fd8;
                                                      lVar20 = *(long *)(lVar15 + 0x160);
                                                      lVar18 = lVar18 + 7;
                                                      iVar132 = iVar132 + iVar14;
                                                    } while (lVar20 != 0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


