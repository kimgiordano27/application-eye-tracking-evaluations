/*
FUNCTION_NAME: OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
ENTRY_POINT: 02db80a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_11;validity_or_gating_hits_15;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
          (int param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *pSVar10;
  TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 *pTVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int local_28;
  undefined1 local_21;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_lane_s16__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_F4F4DE8A35DF6B497B7687E26364B9EC785E932F1C32F562AA8E29C7F526C143
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
              );
    OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  iVar5 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  local_28 = param_1;
  if ((iVar5 == 3) && (param_1 == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    local_28 = -1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  if ((bVar4 & 1) == 0) {
    local_21 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    iVar5 = OVRP_1_44_0_ovrp_GetHandState_m3CF995811315C6E1334DB59C7DC39C1A67A64682
                      (local_28,param_2,lVar8 + 0x80,0);
    if (iVar5 == 0) {
      if ((*(long *)(param_3 + 8) == 0) ||
         (pvVar9 = *(void **)(param_3 + 8), NullCheck(pvVar9),
         (int)*(undefined8 *)((long)pvVar9 + 0x18) != 0x18)) {
        pvVar9 = (void *)SZArrayNew(*(Il2CppClass **)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_lane_s16__,0x18);
        *(void **)(param_3 + 8) = pvVar9;
        Il2CppCodeGenWriteBarrier((void **)(param_3 + 8),pvVar9);
      }
      if ((*(long *)(param_3 + 0xc) == 0) ||
         (pvVar9 = *(void **)(param_3 + 0xc), NullCheck(pvVar9),
         (int)*(undefined8 *)((long)pvVar9 + 0x18) != 5)) {
        pvVar9 = (void *)SZArrayNew(*(Il2CppClass **)
                                     Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__
                                    ,5);
        *(void **)(param_3 + 0xc) = pvVar9;
        Il2CppCodeGenWriteBarrier((void **)(param_3 + 0xc),pvVar9);
      }
      if ((*(long *)(param_3 + 0x18) == 0) ||
         (pvVar9 = *(void **)(param_3 + 0x18), NullCheck(pvVar9),
         (int)*(undefined8 *)((long)pvVar9 + 0x18) != 5)) {
        pvVar9 = (void *)SZArrayNew(*(Il2CppClass **)
                                     Field_<PrivateImplementationDetails>_F4F4DE8A35DF6B497B7687E26364B9EC785E932F1C32F562AA8E29C7F526C143
                                    ,5);
        *(void **)(param_3 + 0x18) = pvVar9;
        Il2CppCodeGenWriteBarrier((void **)(param_3 + 0x18),pvVar9);
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      *param_3 = *(undefined4 *)(lVar8 + 0x80);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar6 = *(undefined8 *)(lVar8 + 0x84);
      uStack_128 = (undefined4)*(undefined8 *)(lVar8 + 0x8c);
      uVar13 = *(undefined8 *)(lVar8 + 0x98);
      uVar12 = *(undefined8 *)(lVar8 + 0x90);
      uStack_124 = (undefined4)uVar12;
      *(ulong *)(param_3 + 3) = CONCAT44(uStack_124,uStack_128);
      *(undefined8 *)(param_3 + 1) = uVar6;
      *(undefined8 *)(param_3 + 6) = uVar13;
      *(undefined8 *)(param_3 + 4) = uVar12;
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0xa8);
      uVar6 = *(undefined8 *)(lVar8 + 0xa0);
      NullCheck(pvVar9);
      uStack_154 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_158 = (undefined4)uVar12;
      uStack_15c = (undefined4)((ulong)uVar6 >> 0x20);
      local_160 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_160,uStack_15c,uStack_158,uStack_154,pvVar9);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0xb8);
      uVar6 = *(undefined8 *)(lVar8 + 0xb0);
      NullCheck(pvVar9);
      uStack_184 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_188 = (undefined4)uVar12;
      uStack_18c = (undefined4)((ulong)uVar6 >> 0x20);
      local_190 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_190,uStack_18c,uStack_188,uStack_184,pvVar9);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 200);
      uVar6 = *(undefined8 *)(lVar8 + 0xc0);
      NullCheck(pvVar9);
      uStack_1b4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_1b8 = (undefined4)uVar12;
      uStack_1bc = (undefined4)((ulong)uVar6 >> 0x20);
      local_1c0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_1c0,uStack_1bc,uStack_1b8,uStack_1b4,pvVar9);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0xd8);
      uVar6 = *(undefined8 *)(lVar8 + 0xd0);
      NullCheck(pvVar9);
      uStack_1e4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_1e8 = (undefined4)uVar12;
      uStack_1ec = (undefined4)((ulong)uVar6 >> 0x20);
      local_1f0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_1f0,uStack_1ec,uStack_1e8,uStack_1e4,pvVar9);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0xe8);
      uVar6 = *(undefined8 *)(lVar8 + 0xe0);
      NullCheck(pvVar9);
      uStack_214 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_218 = (undefined4)uVar12;
      uStack_21c = (undefined4)((ulong)uVar6 >> 0x20);
      local_220 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_220,uStack_21c,uStack_218,uStack_214,pvVar9);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0xf8);
      uVar6 = *(undefined8 *)(lVar8 + 0xf0);
      NullCheck(pvVar9);
      uStack_244 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_248 = (undefined4)uVar12;
      uStack_24c = (undefined4)((ulong)uVar6 >> 0x20);
      local_250 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_250,uStack_24c,uStack_248,uStack_244,pvVar9,5);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x108);
      uVar6 = *(undefined8 *)(lVar8 + 0x100);
      NullCheck(pvVar9);
      uStack_274 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_278 = (undefined4)uVar12;
      uStack_27c = (undefined4)((ulong)uVar6 >> 0x20);
      local_280 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_280,uStack_27c,uStack_278,uStack_274,pvVar9,6);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x118);
      uVar6 = *(undefined8 *)(lVar8 + 0x110);
      NullCheck(pvVar9);
      uStack_2a4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_2a8 = (undefined4)uVar12;
      uStack_2ac = (undefined4)((ulong)uVar6 >> 0x20);
      local_2b0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_2b0,uStack_2ac,uStack_2a8,uStack_2a4,pvVar9,7);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x128);
      uVar6 = *(undefined8 *)(lVar8 + 0x120);
      NullCheck(pvVar9);
      uStack_2d4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_2d8 = (undefined4)uVar12;
      uStack_2dc = (undefined4)((ulong)uVar6 >> 0x20);
      local_2e0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_2e0,uStack_2dc,uStack_2d8,uStack_2d4,pvVar9,8);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x138);
      uVar6 = *(undefined8 *)(lVar8 + 0x130);
      NullCheck(pvVar9);
      uStack_304 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_308 = (undefined4)uVar12;
      uStack_30c = (undefined4)((ulong)uVar6 >> 0x20);
      local_310 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_310,uStack_30c,uStack_308,uStack_304,pvVar9,9);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x148);
      uVar6 = *(undefined8 *)(lVar8 + 0x140);
      NullCheck(pvVar9);
      uStack_334 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_338 = (undefined4)uVar12;
      uStack_33c = (undefined4)((ulong)uVar6 >> 0x20);
      local_340 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_340,uStack_33c,uStack_338,uStack_334,pvVar9,10);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x158);
      uVar6 = *(undefined8 *)(lVar8 + 0x150);
      NullCheck(pvVar9);
      uStack_364 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_368 = (undefined4)uVar12;
      uStack_36c = (undefined4)((ulong)uVar6 >> 0x20);
      local_370 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_370,uStack_36c,uStack_368,uStack_364,pvVar9,0xb);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x168);
      uVar6 = *(undefined8 *)(lVar8 + 0x160);
      NullCheck(pvVar9);
      uStack_394 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_398 = (undefined4)uVar12;
      uStack_39c = (undefined4)((ulong)uVar6 >> 0x20);
      local_3a0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_3a0,uStack_39c,uStack_398,uStack_394,pvVar9,0xc);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x178);
      uVar6 = *(undefined8 *)(lVar8 + 0x170);
      NullCheck(pvVar9);
      uStack_3c4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_3c8 = (undefined4)uVar12;
      uStack_3cc = (undefined4)((ulong)uVar6 >> 0x20);
      local_3d0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_3d0,uStack_3cc,uStack_3c8,uStack_3c4,pvVar9,0xd);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x188);
      uVar6 = *(undefined8 *)(lVar8 + 0x180);
      NullCheck(pvVar9);
      uStack_3f4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_3f8 = (undefined4)uVar12;
      uStack_3fc = (undefined4)((ulong)uVar6 >> 0x20);
      local_400 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_400,uStack_3fc,uStack_3f8,uStack_3f4,pvVar9,0xe);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x198);
      uVar6 = *(undefined8 *)(lVar8 + 400);
      NullCheck(pvVar9);
      uStack_424 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_428 = (undefined4)uVar12;
      uStack_42c = (undefined4)((ulong)uVar6 >> 0x20);
      local_430 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_430,uStack_42c,uStack_428,uStack_424,pvVar9,0xf);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x1a8);
      uVar6 = *(undefined8 *)(lVar8 + 0x1a0);
      NullCheck(pvVar9);
      uStack_454 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_458 = (undefined4)uVar12;
      uStack_45c = (undefined4)((ulong)uVar6 >> 0x20);
      local_460 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_460,uStack_45c,uStack_458,uStack_454,pvVar9,0x10);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x1b8);
      uVar6 = *(undefined8 *)(lVar8 + 0x1b0);
      NullCheck(pvVar9);
      uStack_484 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_488 = (undefined4)uVar12;
      uStack_48c = (undefined4)((ulong)uVar6 >> 0x20);
      local_490 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_490,uStack_48c,uStack_488,uStack_484,pvVar9,0x11);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x1c8);
      uVar6 = *(undefined8 *)(lVar8 + 0x1c0);
      NullCheck(pvVar9);
      uStack_4b4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_4b8 = (undefined4)uVar12;
      uStack_4bc = (undefined4)((ulong)uVar6 >> 0x20);
      local_4c0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_4c0,uStack_4bc,uStack_4b8,uStack_4b4,pvVar9,0x12);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x1d8);
      uVar6 = *(undefined8 *)(lVar8 + 0x1d0);
      NullCheck(pvVar9);
      uStack_4e4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_4e8 = (undefined4)uVar12;
      uStack_4ec = (undefined4)((ulong)uVar6 >> 0x20);
      local_4f0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_4f0,uStack_4ec,uStack_4e8,uStack_4e4,pvVar9,0x13);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x1e8);
      uVar6 = *(undefined8 *)(lVar8 + 0x1e0);
      NullCheck(pvVar9);
      uStack_514 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_518 = (undefined4)uVar12;
      uStack_51c = (undefined4)((ulong)uVar6 >> 0x20);
      local_520 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_520,uStack_51c,uStack_518,uStack_514,pvVar9,0x14);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x1f8);
      uVar6 = *(undefined8 *)(lVar8 + 0x1f0);
      NullCheck(pvVar9);
      uStack_544 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_548 = (undefined4)uVar12;
      uStack_54c = (undefined4)((ulong)uVar6 >> 0x20);
      local_550 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_550,uStack_54c,uStack_548,uStack_544,pvVar9,0x15);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x208);
      uVar6 = *(undefined8 *)(lVar8 + 0x200);
      NullCheck(pvVar9);
      uStack_574 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_578 = (undefined4)uVar12;
      uStack_57c = (undefined4)((ulong)uVar6 >> 0x20);
      local_580 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_580,uStack_57c,uStack_578,uStack_574,pvVar9,0x16);
      pvVar9 = *(void **)(param_3 + 8);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar12 = *(undefined8 *)(lVar8 + 0x218);
      uVar6 = *(undefined8 *)(lVar8 + 0x210);
      NullCheck(pvVar9);
      uStack_5a4 = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_5a8 = (undefined4)uVar12;
      uStack_5ac = (undefined4)((ulong)uVar6 >> 0x20);
      local_5b0 = (undefined4)uVar6;
      QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
                (local_5b0,uStack_5ac,uStack_5a8,uStack_5a4,pvVar9,0x17);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      param_3[10] = *(undefined4 *)(lVar8 + 0x220);
      pSVar10 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(param_3 + 0xc);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      fVar1 = *(float *)(lVar8 + 0x224);
      NullCheck(pSVar10);
      SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar10,0,fVar1);
      pSVar10 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(param_3 + 0xc);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      fVar1 = *(float *)(lVar8 + 0x228);
      NullCheck(pSVar10);
      SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar10,1,fVar1);
      pSVar10 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(param_3 + 0xc);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      fVar1 = *(float *)(lVar8 + 0x22c);
      NullCheck(pSVar10);
      SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar10,2,fVar1);
      pSVar10 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(param_3 + 0xc);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      fVar1 = *(float *)(lVar8 + 0x230);
      NullCheck(pSVar10);
      SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar10,3,fVar1);
      pSVar10 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(param_3 + 0xc);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      fVar1 = *(float *)(lVar8 + 0x234);
      NullCheck(pSVar10);
      SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar10,4,fVar1);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar6 = *(undefined8 *)(lVar8 + 0x238);
      uStack_658 = (undefined4)*(undefined8 *)(lVar8 + 0x240);
      uVar13 = *(undefined8 *)(lVar8 + 0x24c);
      uVar12 = *(undefined8 *)(lVar8 + 0x244);
      uStack_654 = (undefined4)uVar12;
      *(ulong *)(param_3 + 0x10) = CONCAT44(uStack_654,uStack_658);
      *(undefined8 *)(param_3 + 0xe) = uVar6;
      *(undefined8 *)(param_3 + 0x13) = uVar13;
      *(undefined8 *)(param_3 + 0x11) = uVar12;
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      param_3[0x15] = *(undefined4 *)(lVar8 + 0x254);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      param_3[0x16] = *(undefined4 *)(lVar8 + 600);
      pTVar11 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
                 (param_3 + 0x18);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      iVar5 = *(int *)(lVar8 + 0x25c);
      NullCheck(pTVar11);
      TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt(pTVar11,0,iVar5);
      pTVar11 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
                 (param_3 + 0x18);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      iVar5 = *(int *)(lVar8 + 0x260);
      NullCheck(pTVar11);
      TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt(pTVar11,1,iVar5);
      pTVar11 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
                 (param_3 + 0x18);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      iVar5 = *(int *)(lVar8 + 0x264);
      NullCheck(pTVar11);
      TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt(pTVar11,2,iVar5);
      pTVar11 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
                 (param_3 + 0x18);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      iVar5 = *(int *)(lVar8 + 0x268);
      NullCheck(pTVar11);
      TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt(pTVar11,3,iVar5);
      pTVar11 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
                 (param_3 + 0x18);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      iVar5 = *(int *)(lVar8 + 0x26c);
      NullCheck(pTVar11);
      TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt(pTVar11,4,iVar5);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      *(undefined8 *)(param_3 + 0x1a) = *(undefined8 *)(lVar8 + 0x270);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)(lVar8 + 0x278);
      local_21 = 1;
    }
    else {
      local_21 = 0;
    }
  }
  return local_21;
}


