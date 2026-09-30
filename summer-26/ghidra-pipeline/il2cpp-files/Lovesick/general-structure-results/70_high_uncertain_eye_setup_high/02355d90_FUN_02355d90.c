/*
FUNCTION_NAME: FUN_02355d90
ENTRY_POINT: 02355d90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_02355d90(undefined1 param_1 [16],float param_2,float param_3,long *param_4,long param_5,
                 long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_94;
  
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
  ;
  if ((DAT_03781d2c & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadByte__);
    thunk_FUN_00d48444(StringLiteral_8053);
    thunk_FUN_00d48444(Meta_Conduit_InvocationContext_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(StringLiteral_6588);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(StringLiteral_11214);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                      );
    thunk_FUN_00d48444(StringLiteral_5259);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_IntSizedArray_IncreaseCapacity__
                      );
    DAT_03781d2c = 1;
  }
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  puVar5 = StringLiteral_3715;
  if (lVar9 != 0) {
    FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_11214);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    if (((lVar10 != 0) && (FUN_022fb2d8(lVar10,0), param_5 != 0)) && (param_6 != 0)) {
      uVar17 = *(ulong *)(param_5 + 0x10);
      uVar1 = *(undefined8 *)(param_5 + 0x18);
      uVar14 = *(undefined8 *)(param_6 + 0x10);
      uVar2 = *(undefined8 *)(param_6 + 0x18);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo)
      ;
      if ((lVar11 != 0) &&
         (FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033ee588), puVar4 = StringLiteral_6588,
         puVar5 = OVRManager_XrApi_TypeInfo, param_4 != (long *)0x0)) {
        lVar15 = *param_4;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_6588) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02355f9c;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_6588,0);
LAB_02355f9c:
        uVar13 = (*(code *)*puVar12)(param_4,uVar17 & 0xffffffff,puVar12[1]);
        FUN_00ca0af8(lVar11,uVar13,*(undefined8 *)puVar5);
        lVar15 = *param_4;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0235600c;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar4,0);
LAB_0235600c:
        uVar13 = (*(code *)*puVar12)(param_4,uVar17 >> 0x20,puVar12[1]);
        FUN_00ca0af8(lVar11,uVar13,*(undefined8 *)puVar5);
        lVar15 = *param_4;
        iVar20 = (int)uVar1;
        iVar22 = (int)uVar2;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
        uVar21 = (undefined4)uVar14;
        uVar19 = (undefined4)((ulong)uVar14 >> 0x20);
        uVar3 = uVar21;
        if (iVar20 != iVar22) {
          uVar3 = uVar19;
        }
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02356084;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar4,0);
LAB_02356084:
        uVar14 = (*(code *)*puVar12)(param_4,uVar3,puVar12[1]);
        FUN_00ca0af8(lVar11,uVar14,*(undefined8 *)puVar5);
        lVar15 = *param_4;
        if (iVar20 != iVar22) {
          uVar19 = uVar21;
        }
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_023560fc;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar4,0);
LAB_023560fc:
        uVar14 = (*(code *)*puVar12)(param_4,uVar19,puVar12[1]);
        FUN_00ca0af8(lVar11,uVar14,*(undefined8 *)puVar5);
        *(long *)(lVar10 + 0x18) = lVar11;
        puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
        puVar4 = 
        Method_System_Runtime_Serialization_Formatters_Binary_IntSizedArray_IncreaseCapacity__;
        puVar5 = Meta_Conduit_InvocationContext_TypeInfo;
        if (*(long *)(param_5 + 0x20) != 0) {
          fVar23 = (float)FUN_02302500(param_4,*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x10),0);
          lVar11 = *(long *)puVar5;
          uVar14 = *(undefined8 *)(lVar10 + 0x18);
          fVar25 = param_2;
          fVar26 = param_3;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar5;
          }
          fVar24 = (float)FUN_02302500(uVar14,**(undefined8 **)(lVar11 + 0xb8),0);
          uVar14 = FUN_00da4fb8(*(undefined8 *)puVar6,6);
          FUN_016a34e8(uVar14,*(undefined8 *)puVar4,0);
          if (param_3 * fVar26 + fVar23 * fVar24 + param_2 * fVar25 < 0.0) {
            FUN_010afef0(uVar14,*(undefined8 *)StringLiteral_8053);
          }
          puVar5 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__;
          if (*(long *)(param_5 + 0x20) != 0) {
            uVar3 = *(undefined4 *)(*(long *)(param_5 + 0x20) + 0x48);
            FUN_022eff8c(&local_e0,0);
            uStack_b8 = uStack_d8;
            local_c0 = local_e0;
            uStack_a8 = uStack_c8;
            uStack_b0 = uStack_d0;
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            puVar4 = Method_TMPro_TMP_Dropdown_SetAlpha__;
            puVar5 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
            if (lVar11 != 0) {
              uStack_f8 = uStack_b8;
              local_100 = local_c0;
              uStack_e8 = uStack_a8;
              uStack_f0 = uStack_b0;
              FUN_022f986c(lVar11,uVar14,uVar3,&local_100,0xffffffff,0xffffffff,0xffffffff,0,0);
              *(long *)(lVar10 + 0x10) = lVar11;
              FUN_00ca11d0(lVar9,lVar10,*(undefined8 *)puVar4);
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              puVar8 = StringLiteral_5259;
              puVar7 = StringLiteral_4747;
              puVar6 = Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadByte__;
              puVar4 = PTR_DAT_033f6e48;
              if (lVar11 != 0) {
                FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033f6e48);
                FUN_00ac20f0(lVar11,0,*(undefined8 *)puVar7);
                FUN_00ac20f0(lVar11,2,*(undefined8 *)puVar7);
                local_110 = 0;
                uStack_108 = 0;
                FUN_013a23f0(&local_110,lVar10,lVar11,*(undefined8 *)puVar8);
                local_e0 = local_110;
                uStack_d8 = uStack_108;
                local_120 = CONCAT44(local_120._4_4_,iVar20);
                FUN_010b6ab0(param_7,&local_120,&local_e0,*(undefined8 *)puVar6);
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                if (lVar11 != 0) {
                  FUN_01320e50(lVar11,*(undefined8 *)puVar4);
                  FUN_00ac20f0(lVar11,1,*(undefined8 *)puVar7);
                  FUN_00ac20f0(lVar11,3,*(undefined8 *)puVar7);
                  local_120 = 0;
                  uStack_118 = 0;
                  FUN_013a23f0(&local_120,lVar10,lVar11,*(undefined8 *)puVar8);
                  local_e0 = local_120;
                  uStack_d8 = uStack_118;
                  local_94 = (undefined4)((ulong)uVar1 >> 0x20);
                  FUN_010b6ab0(param_7,&local_94,&local_e0,*(undefined8 *)puVar6);
                  return lVar9;
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


