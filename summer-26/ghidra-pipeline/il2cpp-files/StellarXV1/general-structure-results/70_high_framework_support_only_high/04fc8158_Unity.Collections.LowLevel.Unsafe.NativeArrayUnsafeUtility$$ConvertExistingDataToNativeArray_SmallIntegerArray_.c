/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<SmallIntegerArray>
ENTRY_POINT: 04fc8158
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_20;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<SmallIntegerArray>
               (long *param_1,uint *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  long **local_60;
  long local_58;
  long *local_48;
  
  lVar5 = *(long *)(param_3 + 0x38);
  if (lVar5 == 0) {
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092860c8);
    lVar5 = *(long *)(param_3 + 0x38);
    if (lVar5 == 0) {
      FUN_040b1b28(param_3);
      lVar5 = *(long *)(param_3 + 0x38);
    }
  }
  local_48 = (long *)0x0;
  local_58 = 0;
  lVar5 = *(long *)(lVar5 + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  plVar3 = (long *)thunk_FUN_040b4e00(param_1,lVar5);
  if (plVar3 == (long *)0x0) {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = **(long **)(param_3 + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar6 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_04fc8378;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(param_1,lVar5,0);
FUN_04fc8378:
    plVar3 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
    puVar1 = PTR_DAT_092860c8;
    local_60 = &local_48;
    local_68 = 0;
    local_48 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c8) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
          ;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092860c8,0);

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
    :
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      lVar5 = FUN_04077674(lVar5,4);
      plVar3 = local_48;
      local_58 = lVar5;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
            ;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar6,0);

      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
      :
      (*(code *)*puVar4)(&local_b0,plVar3,puVar4[1]);
      uStack_88 = uStack_a8;
      local_90 = local_b0;
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar5 + 0x28) = uStack_a8;
      *(undefined8 *)(lVar5 + 0x20) = local_b0;
      *(undefined8 *)(lVar5 + 0x38) = uStack_98;
      *(undefined8 *)(lVar5 + 0x30) = uStack_a0;
      thunk_FUN_040ec700(lVar5 + 0x28,0);
      if (local_48 != (long *)0x0) {
        uVar2 = 1;
        do {
          plVar3 = local_48;
          lVar5 = *local_48;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto 
                Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00(local_48,*(long *)puVar1,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>:
          uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar8 & 1) == 0) {
            *param_2 = uVar2;
            iVar11 = 0xb;
            lVar5 = local_58;
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<NativePassData>
            ;
          }
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (uVar2 == *(uint *)(local_58 + 0x18)) {
            uVar10 = 0x7fefffff;
            if (0x7feffffe < (int)uVar2) {
              uVar10 = uVar2 + 1;
            }
            if (uVar2 << 1 < 0x7ff00000) {
              uVar10 = uVar2 << 1;
            }
            FUN_04da7be0(&local_58,uVar10,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x50));
          }
          plVar3 = local_48;
          lVar5 = local_58;
          if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_040b1acc(lVar6);
          }
          lVar7 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto 
                Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>
                ;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar6,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>:
          (*(code *)*puVar4)(&local_b0,plVar3,puVar4[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar5 = lVar5 + (long)(int)uVar2 * 0x20;
          *(undefined8 *)(lVar5 + 0x28) = uStack_a8;
          *(undefined8 *)(lVar5 + 0x20) = local_b0;
          *(undefined8 *)(lVar5 + 0x38) = uStack_98;
          *(undefined8 *)(lVar5 + 0x30) = uStack_a0;
          thunk_FUN_040ec700(lVar5 + 0x28,0);
          uVar2 = uVar2 + 1;
        } while (local_48 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = 0;
    iVar11 = 3;
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<NativePassData>:
    plVar3 = *local_60;
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092860c0,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if (local_68 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828();
    }
    if ((iVar11 != 3) && (iVar11 != 0)) {
      return lVar5;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_04fc82ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar5,0);
FUN_04fc82ac:
    uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (uVar2 != 0) {
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      lVar5 = FUN_04077674(lVar5,uVar2);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<CAPI_ovrAvatar2Vector4us>
            ;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar6,5);

      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<CAPI_ovrAvatar2Vector4us>
      :
      (*(code *)*puVar4)(plVar3,lVar5,0,puVar4[1]);
      *param_2 = uVar2;
      return lVar5;
    }
  }
  *param_2 = 0;
  lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x60);
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_040b1b28(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc();
  }
  return **(long **)(lVar5 + 0xb8);
}


