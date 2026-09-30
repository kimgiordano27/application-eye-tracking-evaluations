/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OvrAvatarComputeSkinnedPrimitive.UInt32Wrapper>
ENTRY_POINT: 046212e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0462167c) */

undefined1  [16]
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrAvatarComputeSkinnedPrimitive_UInt32Wrapper>
          (void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_03cf1244();
  plVar3 = (long *)thunk_FUN_03cf5138();
  if (plVar3 == (long *)0x0) {
    lVar5 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>
          ;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>
    :
    plVar3 = (long *)(*(code *)*puVar4)();
    puVar1 = PTR_DAT_08e6a290;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a290) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_046214bc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e6a290,0);
LAB_046214bc:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      iVar9 = 6;
      iVar2 = 6;
      uVar11 = 0;
      uVar12 = 0;
    }
    else {
      do {
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03cf1244(lVar5);
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto FUN_04621530;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar3,lVar5,0);
FUN_04621530:
        auVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        uVar12 = auVar10._8_8_;
        uVar11 = auVar10._0_8_;
        lVar5 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeBufferPointerWithoutChecks<float>
              ;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)puVar1,0);

        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeBufferPointerWithoutChecks<float>
        :
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      } while ((uVar7 & 1) != 0);
      iVar9 = 9;
      iVar2 = 9;
    }
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<CAPI_ovrAvatar2JointInfo>
            ;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e6a288,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<CAPI_ovrAvatar2JointInfo>:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      iVar2 = iVar9;
    }
    auVar10._8_8_ = uVar12;
    auVar10._0_8_ = uVar11;
    if ((iVar2 == 6) || (iVar2 == 0)) {
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceQueryResult>
      :
      System_Data_UniqueConstraint__NonVirtualCheckState(0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc();
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_046213b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,lVar5,0);
FUN_046213b4:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar2 < 1)
    goto 
    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceQueryResult>
    ;
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0462142c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,lVar5,0);
LAB_0462142c:
    auVar10 = (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
  }
  return auVar10;
}


