/*
FUNCTION_NAME: Unity.XR.CompositionLayers.Extensions.TexturesExtension$$set_RightEyeSourceRect
ENTRY_POINT: 05deee58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 151
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05def638) */

undefined1  [16]
Unity_XR_CompositionLayers_Extensions_TexturesExtension__set_RightEyeSourceRect(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined2 in_stack_00000190;
  ushort uStack0000000000000192;
  undefined4 uStack0000000000000194;
  undefined8 in_stack_00000198;
  long in_stack_000001a8;
  long *in_stack_000001b8;
  
  FUN_02f08768(Method_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBuffer__);
  FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
  FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
  FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
  FUN_02f08768(Method_Unity_IO_LowLevel_Unsafe_ReadHandle_Dispose__);
  FUN_02f08768(
              Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
              );
  FUN_02f08768(PTR_DAT_067c91b0);
  FUN_02f08768(Method_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync__);
  FUN_02f08768(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
  FUN_02f08768(
              Method_UnityEngine_ScriptableObject_CreateInstance<FurthestTeleportationAnchorFilter>__
              );
  FUN_02f08768(Method_UnityEngine_Rendering_Universal_ScriptableRenderPass_Blit__);
  FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_Encode_v15__);
  FUN_02f08768(Method_System_Globalization_DateTimeFormatInfo_GetMonthName__);
  FUN_02f08768(Method_UnityEngine_Rendering_Universal_ScriptableRenderPass_ConfigureTarget__);
  FUN_02f08768(Method_UnityEngine_Rendering_Universal_ScriptableRenderPass_ConfigureTarget__);
  FUN_02f08768(Method_System_Data_NewDiffgramGen_GenerateColumn__);
  FUN_02f08768(Method_UnityEngine_ScriptableObject_CreateInstance<TMP_FontAsset>__);
  FUN_02f08768(Method_UnityEngine_Rendering_Universal_ScriptableRenderPass_ConfigureTarget__);
  *(undefined1 *)(unaff_x22 + 0xd7b) = 1;
  in_stack_000001b8 = (long *)0x0;
  in_stack_000001a8 = 0;
  in_stack_00000190 = 0;
  uStack0000000000000192 = 0;
  uStack0000000000000194 = 0;
  in_stack_00000198 = 0;
  if (unaff_x21 == 0) {
LAB_05def634:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = FUN_05d4c208();
  FUN_05d4c208();
  FUN_05d4c208();
  FUN_05d4c208();
  FUN_05d4d060();
  if (unaff_x19 == 0) goto LAB_05def634;
  in_stack_000001b8 = (long *)FUN_03523990();
  FUN_05dedc20();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05dedcd8();
  puVar4 = Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
  ;
  if (*(char *)(unaff_x20 + 200) == '\0') {
    lVar6 = *(long *)(unaff_x20 + 0x120);
    if (lVar6 != 0) {
      uVar11 = 0;
      do {
        plVar5 = in_stack_000001b8;
        if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar11) {
          in_stack_00000008 = (undefined4)*(undefined8 *)(unaff_x20 + 0x140);
          in_stack_00000000._4_4_ = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x138) >> 0x20);
          if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          auVar14 = FUN_05dcb930();
          plVar5 = in_stack_000001b8;
          uVar12 = auVar14._8_8_;
          in_stack_00000190 = auVar14._0_2_;
          uStack0000000000000192 = auVar14._2_2_;
          uStack0000000000000194 = auVar14._4_4_;
          in_stack_00000198 = uVar12;
          if (in_stack_000001b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar6 = *in_stack_000001b8;
          uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar11 == 0)
          goto Unity_XR_CompositionLayers_Emulation_EmulatedLayerData__InitializeLayerData;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto Unity_XR_CompositionLayers_Emulation_EmulatedCompositionLayer__get_EmulatedLayerData;
        }
        if (in_stack_000001a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar6 = *(long *)(in_stack_000001a8 + 0x90);
        if ((lVar6 == 0) || (in_stack_000001b8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar9 = *in_stack_000001b8;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_05def10c;
            }
            uVar10 = uVar10 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(in_stack_000001b8,*(long *)puVar4,9);
LAB_05def10c:
        (*(code *)*puVar7)(plVar5,lVar6 + uVar11 * 0xc + 0x20,puVar7[1]);
        lVar6 = *(long *)(unaff_x20 + 0x120);
        uVar11 = uVar11 + 1;
      } while (lVar6 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = *(long *)(unaff_x19 + 0x58);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  in_stack_00000198 = *(undefined8 *)(lVar6 + 0xc0);
  uVar12 = *(undefined8 *)(lVar6 + 0xb8);
  in_stack_00000190 = (undefined2)uVar12;
  uStack0000000000000192 = (ushort)((ulong)uVar12 >> 0x10);
  uStack0000000000000194 = (undefined4)((ulong)uVar12 >> 0x20);
  goto LAB_05def2b4;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar8 = piVar8 + 4;
    if (uVar11 == 0) break;
Unity_XR_CompositionLayers_Emulation_EmulatedCompositionLayer__get_EmulatedLayerData:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
      goto LAB_05def29c;
    }
  }
Unity_XR_CompositionLayers_Emulation_EmulatedLayerData__InitializeLayerData:
  puVar7 = (undefined8 *)
           FUN_02f421d0(in_stack_000001b8,
                        *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__,4);
LAB_05def29c:
  (*(code *)*puVar7)(plVar5,auVar14._0_8_,uVar12,2,puVar7[1]);
LAB_05def2b4:
  if (*(int *)(*(long *)Method_System_Globalization_DateTimeFormatInfo_GetMonthName__ + 0xe4) == 0)
  {
    thunk_FUN_02f6670c();
  }
  FUN_05ce0534(&stack0x00000190);
  plVar5 = in_stack_000001b8;
  if (in_stack_000001a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(ulong *)(in_stack_000001a8 + 0x58) = CONCAT44(in_stack_00000008,in_stack_00000000._4_4_);
  if (in_stack_000001b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = *in_stack_000001b8;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_05def348;
      }
      uVar11 = uVar11 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_02f421d0(in_stack_000001b8,*(long *)puVar4,0xc);
LAB_05def348:
  (*(code *)*puVar7)(plVar5,1,puVar7[1]);
  if (DAT_06bc2ec1 == '\0') {
    FUN_02f08768(PTR_DAT_067ce608);
    DAT_06bc2ec1 = '\x01';
  }
  puVar3 = PTR_DAT_067ce608;
  if (*(int *)(*(long *)PTR_DAT_067ce608 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc2ec2 == '\0') {
    FUN_02f08768(PTR_DAT_067ce608);
    DAT_06bc2ec2 = '\x01';
  }
  uVar2 = (uint)uStack0000000000000192;
  if (uStack0000000000000192 != 0) {
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar3;
    }
    piVar8 = *(int **)(lVar6 + 0xb8);
    if (uVar2 << 0x10 != *piVar8) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        piVar8 = *(int **)(*(long *)puVar3 + 0xb8);
      }
      if (uVar2 << 0x10 != piVar8[1]) goto LAB_05def490;
    }
    plVar5 = in_stack_000001b8;
    puVar3 = Method_UnityEngine_ScriptableObject_CreateInstance<VolumeProfile>__;
    lVar6 = *(long *)Method_UnityEngine_ScriptableObject_CreateInstance<VolumeProfile>__;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar3;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (uVar11 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_05def47c;
        }
        uVar11 = uVar11 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar4,3);
LAB_05def47c:
    (*(code *)*puVar7)(plVar5,&stack0x00000190,uVar1,puVar7[1]);
  }
LAB_05def490:
  plVar5 = in_stack_000001b8;
  puVar4 = Method_UnityEngine_Rendering_Universal_ScriptableRenderPass_ConfigureTarget__;
  lVar6 = *(long *)Method_UnityEngine_Rendering_Universal_ScriptableRenderPass_ConfigureTarget__;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar7[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBuffer__
                              );
    FUN_04237db8(lVar9,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_ScriptableRenderPass_ConfigureTarget__,0);
    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar9;
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = *plVar5;
  lVar13 = *(long *)Method_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync__
  ;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto LAB_05def56c;
      }
      uVar11 = uVar11 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar11 != 0);
  }
  lVar6 = FUN_02f421d0(plVar5);
LAB_05def56c:
  lVar6 = thunk_FUN_02f2742c(*(undefined8 *)(lVar6 + 8),lVar13);
  (**(code **)(lVar6 + 8))(plVar5,lVar9,lVar6);
  plVar5 = in_stack_000001b8;
  auVar14._2_2_ = uStack0000000000000192;
  auVar14._0_2_ = in_stack_00000190;
  auVar14._4_4_ = uStack0000000000000194;
  auVar14._8_8_ = in_stack_00000198;
  if (in_stack_000001b8 != (long *)0x0) {
    lVar6 = *in_stack_000001b8;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05def5f4;
        }
        uVar11 = uVar11 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(in_stack_000001b8,*(long *)PTR_DAT_067c91b0,0);
LAB_05def5f4:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  }
  return auVar14;
}


