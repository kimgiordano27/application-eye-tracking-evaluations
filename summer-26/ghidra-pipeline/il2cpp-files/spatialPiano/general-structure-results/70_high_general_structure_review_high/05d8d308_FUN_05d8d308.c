/*
FUNCTION_NAME: FUN_05d8d308
ENTRY_POINT: 05d8d308
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05d8d91c) */

void FUN_05d8d308(undefined1 param_1 [16],float param_2,long param_3,long param_4,undefined8 param_5
                 ,undefined8 *param_6,undefined1 (*param_7) [16])

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  float extraout_s0;
  float extraout_s0_00;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 local_120;
  long **pplStack_118;
  long local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar3 = Method_System_IO_Path_InsecureGetFullPath__;
  if ((DAT_06bc3a68 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_XR_ARFoundation_PoseExtensions_InverseTransformPositions__);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_Oculus_Interaction_Body_PoseDetection_PoseFromBody_Body_WhenBodyUpdated__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
    FUN_02f08768(Method_System_IO_Path_InsecureGetFullPath__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(Method_UnityEngine_Rendering_Universal_PostProcessPass_CalcBloomResolution__);
    FUN_02f08768(Method_System_Globalization_DateTimeFormatInfo_GetMonthName__);
    FUN_02f08768(Method_UnityEngine_Rendering_Universal_PostProcessPass_SetupBloom__);
    FUN_02f08768(
                Method_UnityEngine_PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__
                );
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__);
    FUN_02f08768(Method_UnityEngine_InputSystem_Utilities_PredictiveParser_ExpectInt__);
    FUN_02f08768(Method_UnityEngine_InputSystem_Utilities_PredictiveParser_ExpectSingleChar__);
    DAT_06bc3a68 = 1;
  }
  puVar4 = Method_UnityEngine_InputSystem_Utilities_PredictiveParser_ExpectSingleChar__;
  puVar2 = Method_System_Globalization_DateTimeFormatInfo_GetMonthName__;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  auVar18 = FUN_05d887b8(param_4,param_6,*(undefined8 *)puVar4,1,1);
  *param_7 = auVar18;
  uStack_88 = param_6[1];
  local_90 = *param_6;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05ce0534(&local_120,&local_90,param_4,0);
  if ((*(long *)(param_3 + 0x1d8) != 0) &&
     (plVar5 = *(long **)(*(long *)(param_3 + 0x1d8) + 0x38), plVar5 != (long *)0x0)) {
    uVar6 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
    uVar6 = FUN_05d883ac(uVar6,param_5,local_120._4_4_,pplStack_118._0_4_);
    fVar14 = param_2;
    fVar13 = (float)FUN_05d883ac(uVar6,param_5,local_120._4_4_,pplStack_118._0_4_);
    puVar3 = Method_System_Net_Sockets_NetworkStream_Close__;
    fVar15 = 1.0 / SQRT(fVar13 * fVar13 + 1.0);
    fVar16 = (extraout_s0 + 1.0) / (extraout_s0 + fVar15);
    fVar13 = (fVar13 * fVar15 * fVar16) / extraout_s0_00;
    fVar14 = (fVar14 * fVar15 * fVar16) / param_2;
    if (fVar14 <= fVar13) {
      fVar13 = fVar14;
    }
    fVar14 = 1.0;
    if (fVar13 <= 1.0) {
      fVar14 = fVar13;
    }
    if ((*(long *)(param_3 + 0x1d8) != 0) &&
       (plVar5 = *(long **)(*(long *)(param_3 + 0x1d8) + 0x40), plVar5 != (long *)0x0)) {
      fVar16 = (float)(**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
      fVar15 = 1.0;
      if (fVar16 <= 1.0) {
        fVar15 = fVar16;
      }
      fVar17 = 0.0;
      if (0.0 <= fVar16) {
        fVar17 = fVar15;
      }
      fVar15 = -1.0;
      if (0.0 <= fVar13) {
        fVar15 = fVar14 + -1.0;
      }
      uVar6 = FUN_034dac00(0x18,*(undefined8 *)puVar3);
      if (param_4 != 0) {
        plVar5 = (long *)FUN_03523990(param_4,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_PredictiveParser_ExpectInt__
                                      ,&local_a0,uVar6,
                                      *(undefined8 *)
                                       Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__
                                      ,899,*(undefined8 *)
                                            Method_UnityEngine_Rendering_Universal_PostProcessPass_CalcBloomResolution__
                                     );
        puVar3 = 
        Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__;
        pplStack_118 = &local_98;
        local_120 = 0;
        local_98 = plVar5;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)
                 Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
               ) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
              goto LAB_05d8d618;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02f421d0(plVar5,*(long *)
                                      Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                              ,0xc);
LAB_05d8d618:
        (*(code *)*puVar7)(plVar5,1,puVar7[1]);
        plVar5 = local_98;
        if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = *(undefined8 *)*param_7;
        *(undefined8 *)(local_a0 + 0x18) = *(undefined8 *)(*param_7 + 8);
        *(undefined8 *)(local_a0 + 0x10) = uVar6;
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar8 = *local_98;
        uVar6 = *(undefined8 *)*param_7;
        uVar1 = *(undefined8 *)(*param_7 + 8);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05d8d698;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02f421d0(local_98,*(long *)
                                        Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__
                              ,0);
LAB_05d8d698:
        (*(code *)*puVar7)(plVar5,uVar6,uVar1,0,2,puVar7[1]);
        plVar5 = local_98;
        if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = *param_6;
        *(undefined8 *)(local_a0 + 0x28) = param_6[1];
        *(undefined8 *)(local_a0 + 0x20) = uVar6;
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar8 = *local_98;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05d8d718;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(local_98,*(long *)puVar3,0);
LAB_05d8d718:
        (*(code *)*puVar7)(plVar5,param_6,1,puVar7[1]);
        plVar5 = local_98;
        if (*(long *)(param_3 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x1b0) + 0x48);
        *(float *)(local_a0 + 0x38) = extraout_s0_00;
        *(undefined8 *)(local_a0 + 0x30) = uVar6;
        puVar3 = 
        Method_UnityEngine_PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__
        ;
        *(float *)(local_a0 + 0x3c) = param_2;
        *(float *)(local_a0 + 0x40) = extraout_s0;
        lVar8 = *(long *)puVar3;
        *(float *)(local_a0 + 0x44) = fVar15 * fVar17 + 1.0;
        *(bool *)(local_a0 + 0x48) = 1.4013e-45 < 1.0 - ABS(extraout_s0);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar8 = *(long *)puVar3;
        }
        puVar7 = *(undefined8 **)(lVar8 + 0xb8);
        lVar11 = puVar7[0xc];
        if (lVar11 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar6 = *puVar7;
          lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_UnityEngine_XR_ARFoundation_PoseExtensions_InverseTransformPositions__
                                     );
          FUN_04237db8(lVar11,uVar6,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_PostProcessPass_SetupBloom__,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60) = lVar11;
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar8 = *plVar5;
        lVar12 = *(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_PoseFromBody_Body_WhenBodyUpdated__;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)(lVar12 + 0x20)) {
              lVar8 = lVar8 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                      0x138;
              goto LAB_05d8d854;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        lVar8 = FUN_02f421d0(plVar5);
LAB_05d8d854:
        lVar8 = thunk_FUN_02f2742c(*(undefined8 *)(lVar8 + 8),lVar12);
        (**(code **)(lVar8 + 8))(plVar5,lVar11,lVar8);
        plVar5 = local_98;
        if (local_98 != (long *)0x0) {
          lVar8 = *local_98;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05d8d8d8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(local_98,*(long *)PTR_DAT_067c91b0,0);
LAB_05d8d8d8:
          (*(code *)*puVar7)(plVar5,puVar7[1]);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


