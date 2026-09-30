/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$AddCollider
ENTRY_POINT: 0146fdac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01470154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MRUtilityKit_EffectMesh__AddCollider
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  float fVar9;
  undefined4 uVar10;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(PTR_DAT_033f45c0);
  thunk_FUN_00d48444(Method_System_Globalization_CompareInfo_IndexOfCore__);
  thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__);
  thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__);
  thunk_FUN_00d48444(Method_System_Activator_CreateInstance__);
  thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
  thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_8885);
  thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_12470);
  thunk_FUN_00d48444(
                    Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                    );
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                    );
  *(undefined1 *)(unaff_x22 + 0xafb) = 1;
  puVar2 = StringLiteral_302;
  if (unaff_x20 != 0) {
    iVar8 = *(int *)(unaff_x19 + 0x18);
    uVar5 = FUN_0267e21c();
    if (iVar8 == 0) {
      if ((uVar5 & 1) != 0) {
        fVar9 = (float)FUN_0267f5a0();
        uVar10 = 2;
        if (fVar9 != 0.0) {
          uVar10 = 1;
        }
        *(undefined4 *)(unaff_x19 + 0x18) = uVar10;
      }
    }
    else if ((uVar5 & 1) != 0) {
      fVar9 = (float)FUN_0267f5a0();
      puVar1 = Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter_TypeInfo;
      iVar8 = 2;
      if (fVar9 != 0.0) {
        iVar8 = 1;
      }
      if (iVar8 != *(int *)(unaff_x19 + 0x18)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)puVar1,0);
      }
    }
    iVar8 = *(int *)(unaff_x19 + 0x1c);
    uVar5 = FUN_0267e21c();
    if (iVar8 == 0) {
      if ((uVar5 & 1) != 0) {
        fVar9 = (float)FUN_0267f5a0();
        uVar10 = 2;
        if (fVar9 != 0.0) {
          uVar10 = 1;
        }
        *(undefined4 *)(unaff_x19 + 0x1c) = uVar10;
      }
    }
    else if ((uVar5 & 1) != 0) {
      fVar9 = (float)FUN_0267f5a0();
      puVar1 = PTR_DAT_033f7148;
      iVar8 = 2;
      if (fVar9 != 0.0) {
        iVar8 = 1;
      }
      if (iVar8 != *(int *)(unaff_x19 + 0x1c)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)puVar1,0);
      }
    }
    if (unaff_x21 != 0) {
      uVar5 = FUN_015fe250();
      puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if ((uVar5 & 1) != 0) {
        *(undefined4 *)(unaff_x19 + 0x70) = 0;
        uVar5 = FUN_0267e21c();
        if ((uVar5 & 1) == 0) {
          *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x7c);
          *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x74);
        }
        else {
          uVar10 = FUN_0267d928();
          *(undefined4 *)(unaff_x19 + 0x20) = uVar10;
          *(undefined4 *)(unaff_x19 + 0x24) = param_2;
          *(undefined4 *)(unaff_x19 + 0x28) = param_3;
          *(undefined4 *)(unaff_x19 + 0x2c) = param_4;
        }
        uVar5 = FUN_0267e21c();
        if (((((uVar5 & 1) != 0) && (uVar5 = FUN_0267e21c(), (uVar5 & 1) != 0)) &&
            (uVar5 = FUN_0267e21c(), (uVar5 & 1) != 0)) &&
           ((fVar9 = (float)FUN_0267f5a0(), fVar9 == 1.0 &&
            (fVar9 = (float)FUN_0267f5a0(), fVar9 == 1.0)))) {
          *(undefined1 *)(unaff_x19 + 0x30) = 1;
          fVar9 = (float)FUN_0267f5a0();
          if (fVar9 < _LAB_028aa024) {
            fVar9 = _LAB_028aa024;
          }
          *(float *)(unaff_x19 + 0x34) = fVar9;
          return;
        }
        *(undefined1 *)(unaff_x19 + 0x30) = 0;
        *(undefined4 *)(unaff_x19 + 0x34) = 0x3f000000;
        return;
      }
      uVar5 = FUN_015fe250();
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_015fe250();
        if ((uVar5 & 1) == 0) {
          uVar5 = FUN_015fe250();
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_015fe250();
            if ((uVar5 & 1) == 0) {
              *(undefined4 *)(unaff_x19 + 0x70) = 5;
              return;
            }
            *(undefined4 *)(unaff_x19 + 0x70) = 3;
            bVar4 = FUN_0267e394();
            *(byte *)(unaff_x19 + 0x5c) = bVar4 & 1;
            uVar5 = FUN_0267e21c();
            if ((uVar5 & 1) != 0) {
              uVar10 = FUN_0267d928();
              *(undefined4 *)(unaff_x19 + 0x60) = uVar10;
              *(undefined4 *)(unaff_x19 + 100) = param_2;
              *(undefined4 *)(unaff_x19 + 0x68) = param_3;
              *(undefined4 *)(unaff_x19 + 0x6c) = param_4;
              return;
            }
            *(undefined8 *)(unaff_x19 + 0x7c) = *(undefined8 *)(unaff_x19 + 0xe8);
            *(undefined8 *)(unaff_x19 + 0x74) = *(undefined8 *)(unaff_x19 + 0xe0);
            return;
          }
          *(undefined4 *)(unaff_x19 + 0x70) = 4;
          uVar5 = FUN_0267e21c();
          if ((uVar5 & 1) == 0) {
            *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x19 + 0xa0);
            return;
          }
          uVar5 = FUN_0267e21c();
          if ((uVar5 & 1) == 0) {
            return;
          }
          uVar10 = FUN_0267f5a0();
          *(undefined4 *)(unaff_x19 + 0x58) = uVar10;
          return;
        }
        *(undefined4 *)(unaff_x19 + 0x70) = 2;
        uVar6 = FUN_0267dbbc();
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
        }
        bVar4 = FUN_02681b9c(uVar6,0,0);
        *(byte *)(unaff_x19 + 0x54) = bVar4 & 1;
        uVar5 = FUN_0267e21c();
        uVar10 = 0;
        if ((uVar5 & 1) != 0) {
          uVar10 = FUN_0267f5a0();
        }
        *(undefined4 *)(unaff_x19 + 0x50) = uVar10;
        uVar5 = FUN_0267e21c();
        bVar3 = *(int *)(unaff_x19 + 0x18) == 1;
        if ((uVar5 & 1) == 0) {
          if (!bVar3) {
            return;
          }
          *(undefined4 *)(unaff_x19 + 0x38) = 0;
          return;
        }
      }
      else {
        *(undefined4 *)(unaff_x19 + 0x70) = 1;
        *(undefined8 *)(unaff_x19 + 0x44) = *(undefined8 *)(unaff_x19 + 0x90);
        *(undefined8 *)(unaff_x19 + 0x3c) = *(undefined8 *)(unaff_x19 + 0x88);
        uVar6 = FUN_0267dbbc();
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
        }
        bVar4 = FUN_02681b9c(uVar6,0,0);
        *(byte *)(unaff_x19 + 0x4c) = bVar4 & 1;
        uVar5 = FUN_0267e21c();
        if ((uVar5 & 1) == 0) {
          param_4 = 0x3f800000;
          uVar10 = 0;
          param_2 = 0;
          param_3 = 0;
        }
        else {
          uVar10 = FUN_0267d928();
        }
        *(undefined4 *)(unaff_x19 + 0x3c) = uVar10;
        *(undefined4 *)(unaff_x19 + 0x40) = param_2;
        *(undefined4 *)(unaff_x19 + 0x44) = param_3;
        *(undefined4 *)(unaff_x19 + 0x48) = param_4;
        uVar5 = FUN_0267e21c();
        bVar3 = *(int *)(unaff_x19 + 0x18) == 2;
        if ((uVar5 & 1) == 0) {
          if (!bVar3) {
            return;
          }
          *(undefined4 *)(unaff_x19 + 0x38) = 0x3f800000;
          return;
        }
      }
      if (bVar3) {
        uVar10 = FUN_0267f5a0();
        *(undefined4 *)(unaff_x19 + 0x38) = uVar10;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


