/*
FUNCTION_NAME: FUN_0356e288
ENTRY_POINT: 0356e288
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


uint FUN_0356e288(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
                    /* try { // try from 0356e29c to 0366e29f has its CatchHandler @ 0356e2a4 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0356e284 with catch @ 0356e2a0
                       try { // try from 0356e2a0 to 0366e2bf has its CatchHandler @ 0356e254 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0356e29c with catch @ 0356e2a4
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0356e26c with catch @ 0356e2a8
                        */
  if ((DAT_0412dfd0 & 1) == 0) {
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
                    /* try { // try from 0356e2c0 to 0366e2d7 has its CatchHandler @ 0356e338 */
    FUN_01ab69ac(Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo)
    ;
                    /* try { // try from 0356e2d8 to 0366e327 has its CatchHandler @ 0356e254 */
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_01ab69ac(_Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                );
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_0_TypeInfo)
    ;
    FUN_01ab69ac(Fusion_OrderSorter_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc45b0);
    DAT_0412dfd0 = 1;
  }
  local_78 = 0;
  local_70 = 0;
  FUN_0356f120(param_1);
  lVar14 = *(long *)(param_1 + 0xd8);
  if (lVar14 != 0) {
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(param_1 + 0xe0)) {
LAB_0356e630:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar15 = *(undefined8 *)(param_1 + 0x1e8);
    uVar12 = *(undefined4 *)(param_1 + 0x110);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    uVar3 = *(undefined4 *)(param_1 + 0x114);
    uVar18 = *(undefined8 *)(lVar14 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_03777f70(uVar15,uVar12,0,uVar2,uVar1,uVar3,uVar18,&local_70,0);
    puVar10 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_0_TypeInfo;
    puVar9 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo;
    puVar8 = System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo;
    puVar7 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
    puVar6 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
    puVar5 = 
    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
    ;
    puVar4 = PTR_DAT_03cc45b0;
    if (local_70 != 0) {
      lVar14 = 0;
      do {
        if ((int)*(uint *)(local_70 + 0x18) <= (int)(uint)lVar14) {
LAB_0356e4b4:
          lVar14 = *(long *)(param_1 + 0x1e8);
          if (lVar14 != 0) {
            lVar17 = *(long *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
            ;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            uVar13 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200))
            ;
            if ((uVar13 & 1) == 0) {
              *(undefined4 *)(lVar14 + 0x18) = 0;
            }
            else {
              iVar16 = *(int *)(lVar14 + 0x18);
              *(undefined4 *)(lVar14 + 0x18) = 0;
              if (0 < iVar16) {
                FUN_02793a34(*(undefined8 *)(lVar14 + 0x10),0,iVar16,0);
              }
            }
            puVar6 = 
            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
            ;
            lVar14 = *(long *)(param_1 + 0x1f8);
            if (lVar14 != 0) {
              iVar16 = 0;
              goto LAB_0356e524;
            }
          }
          break;
        }
        if (*(uint *)(local_70 + 0x18) <= (uint)lVar14) goto LAB_0356e630;
        lVar17 = *(long *)(local_70 + lVar14 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_0356e4b4;
        uVar12 = FUN_03776e5c(lVar17,0);
        FUN_03776ec0(lVar17,*(undefined4 *)(param_1 + 0xe0),0);
        if (*(long *)(param_1 + 0xb0) == 0) break;
        FUN_01b5f01c(*(long *)(param_1 + 0xb0),lVar17,*(undefined8 *)puVar6);
        if (*(long *)(param_1 + 0xb8) == 0) break;
        local_68 = uVar12;
        FUN_0219b9a4(*(long *)(param_1 + 0xb8),&local_68,lVar17,*(undefined8 *)puVar7);
        if (*(long *)(param_1 + 0x1e0) == 0) break;
        local_68 = uVar12;
        FUN_01b5f01c(*(long *)(param_1 + 0x1e0),&local_68,*(undefined8 *)puVar5);
        if (*(long *)(param_1 + 0x1d8) == 0) break;
        local_68 = uVar12;
        FUN_01b5f01c(*(long *)(param_1 + 0x1d8),&local_68,*(undefined8 *)puVar5);
        lVar14 = lVar14 + 1;
      } while (local_70 != 0);
    }
  }
  goto LAB_0356e604;
  while( true ) {
    local_68 = *(undefined4 *)(lVar14 + 0x28);
    uVar13 = FUN_0219f8b8(*(long *)(param_1 + 0xb8),&local_68,&local_78,*(undefined8 *)puVar9);
    if ((uVar13 & 1) == 0) {
      if (*(long *)(param_1 + 0x1e8) == 0) break;
      local_68 = *(undefined4 *)(lVar14 + 0x28);
      FUN_01b5f01c(*(long *)(param_1 + 0x1e8),&local_68,*(undefined8 *)puVar5);
    }
    else {
      *(undefined8 *)(lVar14 + 0x20) = local_78;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(long *)(lVar14 + 0x18) = param_1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar14 + 0x18),param_1);
      if (*(long *)(param_1 + 0xc0) == 0) break;
      FUN_01b5f01c(*(long *)(param_1 + 0xc0),lVar14,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 200) == 0) break;
      local_68 = *(undefined4 *)(lVar14 + 0x14);
      FUN_0219b9a4(*(long *)(param_1 + 200),&local_68,lVar14,*(undefined8 *)puVar8);
      if (*(long *)(param_1 + 0x1f8) == 0) break;
      FUN_022190f4(*(long *)(param_1 + 0x1f8),iVar16,*(undefined8 *)puVar10);
      iVar16 = iVar16 + -1;
    }
    lVar14 = *(long *)(param_1 + 0x1f8);
    iVar16 = iVar16 + 1;
    if (lVar14 == 0) break;
LAB_0356e524:
    if (*(int *)(lVar14 + 0x18) <= iVar16) {
      return uVar11 & 1;
    }
    FUN_02215a88(lVar14,iVar16,&local_68,*(undefined8 *)puVar4);
    lVar14 = CONCAT44(uStack_64,local_68);
    if ((lVar14 == 0) || (*(long *)(param_1 + 0xb8) == 0)) break;
  }
LAB_0356e604:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


