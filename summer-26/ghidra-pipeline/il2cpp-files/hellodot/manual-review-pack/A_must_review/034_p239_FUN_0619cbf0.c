/*
FUNCTION_NAME: FUN_0619cbf0
ENTRY_POINT: 0619cbf0
PROGRAM: hellodot-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0619d014) */
/* WARNING: Removing unreachable block (ram,0x0619d22c) */

void FUN_0619cbf0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = OVRPlugin_BodyJointSet_TypeInfo;
  if ((DAT_06a83d3c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1f90);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_BodyTrackingFidelity2_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06602f80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df900);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_EyeTextureFormat_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_GUID_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt64LiftedToNull_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df908);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ed330);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ed338);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_NotInstruction_NotByte_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Hand_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_HandStatus_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_VFX_SDF_MeshToSDFBaker_ShaderProperties_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc880);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_LayerLayout_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_LogLevel_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Media_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_BodyJointSet_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Mesh_TypeInfo);
    DAT_06a83d3c = 1;
  }
  lVar8 = *(long *)puVar1;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar8 = *(long *)puVar1;
  }
  puVar1 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
  lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
  if (lVar14 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar8 = *(long *)OVRPlugin_BodyJointSet_TypeInfo;
    }
    puVar2 = OVRPlugin_BodyJointSet_TypeInfo;
    uVar15 = **(undefined8 **)(lVar8 + 0xb8);
    lVar14 = thunk_FUN_02cea894(*(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    FUN_04a5701c(lVar14,uVar15,*(undefined8 *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar14;
  }
  plVar9 = (long *)FUN_033eb504(uVar13,lVar14,*(undefined8 *)puVar1);
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065ed330) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0619ce74;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ed330,0);
LAB_0619ce74:
    puVar1 = PTR_DAT_065c8a48;
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar6 = OVRPlugin_Mesh_TypeInfo;
    puVar5 = UnityEngine_VFX_SDF_MeshToSDFBaker_ShaderProperties_TypeInfo;
    puVar4 = PTR_DAT_065ed338;
    puVar3 = PTR_DAT_065dc880;
    puVar2 = PTR_DAT_065c8d08;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar8 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0619cf04;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar2,0);
LAB_0619cf04:
      uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar11 & 1) == 0) goto LAB_0619cfa4;
      lVar8 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0619cf60;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar4,0);
LAB_0619cf60:
      uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_0353b038(uVar13,*(undefined8 *)puVar5);
      FUN_0615dd3c(uVar7 & 1,*(undefined8 *)puVar6,uVar13,0);
    } while( true );
  }
  goto LAB_0619d224;
LAB_0619cfa4:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0619cffc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,0);
LAB_0619cffc:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  puVar6 = OVRPlugin_HandStatus_TypeInfo;
  puVar5 = OVRPlugin_GUID_TypeInfo;
  puVar4 = System_Linq_Expressions_Interpreter_NotInstruction_NotByte_TypeInfo;
  puVar3 = 
  System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo;
  puVar2 = PTR_DAT_06602f80;
  puVar1 = PTR_DAT_065df900;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03968dbc(&local_98,*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_Hand_TypeInfo);
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    plVar9 = (long *)OVRPlugin_BodyJointSet_TypeInfo;
    while( true ) {
      uVar11 = FUN_0481f4e4(&local_80,*(undefined8 *)puVar5);
      if ((uVar11 & 1) == 0) {
        FUN_0481f4e0(&local_80,*(undefined8 *)OVRPlugin_EyeTextureFormat_TypeInfo);
        return;
      }
      lVar8 = thunk_FUN_02cea894(*(undefined8 *)OVRPlugin_Media_TypeInfo);
      FUN_04f7383c(lVar8,0);
      if (lVar8 == 0) break;
      *(undefined8 *)(lVar8 + 0x10) = local_70;
      uVar15 = *(undefined8 *)(param_1 + 0x28);
      uVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065df908);
      FUN_04a5632c(uVar13,lVar8,*(undefined8 *)OVRPlugin_LogLevel_TypeInfo,0);
      uVar13 = UnityEngine_Rendering_RenderPipeline__IsRenderRequestSupported<__Il2CppFullySharedGenericType>
                         (uVar15,uVar13,*(undefined8 *)puVar1);
      lVar14 = *plVar9;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar14);
        lVar14 = *plVar9;
      }
      lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x20);
      if (lVar16 == 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar14);
          lVar14 = *plVar9;
        }
        uVar15 = **(undefined8 **)(lVar14 + 0xb8);
        lVar16 = thunk_FUN_02cea894(*(undefined8 *)
                                     System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt64LiftedToNull_TypeInfo
                                   );
        FUN_04a56ab8(lVar16,uVar15,*(undefined8 *)OVRPlugin_LayerLayout_TypeInfo,0);
        plVar9 = (long *)OVRPlugin_BodyJointSet_TypeInfo;
        *(long *)(*(long *)(*(long *)OVRPlugin_BodyJointSet_TypeInfo + 0xb8) + 0x20) = lVar16;
      }
      uVar13 = FUN_033eac28(uVar13,lVar16,*(undefined8 *)puVar3);
      uVar13 = ModestTree_ReflectionUtil__ToDebugString<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>
                         (uVar13,*(undefined8 *)puVar2);
      auVar17 = FUN_03469bdc(uVar13,*(undefined8 *)puVar4);
      uVar15 = auVar17._8_8_;
      if ((auVar17._0_8_ & 1) == 0) {
        uVar13 = FUN_033d87b4(uVar13,*(undefined8 *)PTR_DAT_065e1f90);
        auVar17 = FUN_033f2110(uVar13,*(undefined8 *)
                                       System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16_TypeInfo
                              );
        uVar15 = auVar17._8_8_;
        uVar11 = auVar17._0_8_ & 0xffffffff;
      }
      else {
        uVar11 = 0;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(0,uVar15,uVar11);
      }
      FUN_04037b90(*(long *)(param_1 + 0x40),*(undefined8 *)(lVar8 + 0x10),uVar11,
                   *(undefined8 *)puVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
LAB_0619d224:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


