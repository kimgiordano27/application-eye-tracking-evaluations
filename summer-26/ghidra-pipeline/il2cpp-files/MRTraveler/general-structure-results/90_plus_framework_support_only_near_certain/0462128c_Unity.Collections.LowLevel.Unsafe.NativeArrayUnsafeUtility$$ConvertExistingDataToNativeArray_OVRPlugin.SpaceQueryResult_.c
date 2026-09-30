/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0462128c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0462167c) */

undefined1  [16]
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
          (long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e6a290);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_03cf12a0(param_2);
    }
  }
  if (param_1 == (long *)0x0) {
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e806f0);
    uVar5 = FUN_07770944(uVar5,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    plVar3 = (long *)thunk_FUN_03cf5138(param_1,lVar6);
    if (plVar3 == (long *)0x0) {
      lVar6 = **(long **)(param_2 + 0x38);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244(lVar6);
      }
      lVar7 = *param_1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>
            ;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(param_1,lVar6,0);

      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>
      :
      plVar3 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
      puVar1 = PTR_DAT_08e6a290;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e6a290) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_046214bc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e6a290,0);
LAB_046214bc:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        iVar10 = 6;
        iVar2 = 6;
        uVar12 = 0;
        uVar5 = 0;
      }
      else {
        do {
          lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 0x38);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03cf1244(lVar6);
          }
          lVar7 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto FUN_04621530;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348(plVar3,lVar6,0);
FUN_04621530:
          auVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          uVar5 = auVar11._8_8_;
          uVar12 = auVar11._0_8_;
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto 
                Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeBufferPointerWithoutChecks<float>
                ;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)puVar1,0);

          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeBufferPointerWithoutChecks<float>
          :
          uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        } while ((uVar8 & 1) != 0);
        iVar10 = 9;
        iVar2 = 9;
      }
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e6a288) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<CAPI_ovrAvatar2JointInfo>
              ;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e6a288,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<CAPI_ovrAvatar2JointInfo>:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
        iVar2 = iVar10;
      }
      auVar11._8_8_ = uVar5;
      auVar11._0_8_ = uVar12;
      if ((iVar2 != 6) && (iVar2 != 0)) {
        return auVar11;
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244(lVar6);
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto FUN_046213b4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar3,lVar6,0);
FUN_046213b4:
      iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0 < iVar2) {
        lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03cf1244(lVar6);
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0462142c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar3,lVar6,0);
LAB_0462142c:
        auVar11 = (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
        return auVar11;
      }
    }
    uVar5 = System_Data_UniqueConstraint__NonVirtualCheckState(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar5,param_2);
}


