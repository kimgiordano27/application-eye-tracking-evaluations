/*
FUNCTION_NAME: FUN_025abb48
ENTRY_POINT: 025abb48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_025abb48(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long local_70;
  long lStack_68;
  
  if ((DAT_03783030 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eb500);
    thunk_FUN_00d48444(StringLiteral_9592);
    thunk_FUN_00d48444(Oculus_Interaction_DebugTree_ITreeNode<IInteractor>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_KdTree_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_GetHighest__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ed170);
    thunk_FUN_00d48444(PTR_DAT_033ef120);
    thunk_FUN_00d48444(System_Data_IFilter_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_67_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f15e8);
    DAT_03783030 = 1;
  }
  FUN_02595a68(param_1,param_2,0);
  puVar5 = PTR_DAT_033f15e8;
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    return;
  }
  if (param_2 != 0) {
    plVar8 = (long *)FUN_025abe90(param_2);
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *(long *)puVar5;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      lVar13 = *(long *)
                Method_UnityEngine_ProBuilder_KdTree_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_GetHighest__
      ;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        }
      }
      if (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__
               ) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_025abd00;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_00d59724(plVar8,*(long *)
                                       Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__
                               ,6);
LAB_025abd00:
        lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        if (lVar11 != 0) {
          FUN_010c3548(lVar11,1,**(undefined8 **)(*(long *)puVar5 + 0xb8),
                       *(undefined8 *)StringLiteral_9592);
          lVar11 = **(long **)(*(long *)puVar5 + 0xb8);
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x18) == 0) {
              return;
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar11 = **(long **)(*(long *)puVar5 + 0xb8);
              if (lVar11 == 0) goto LAB_025abe88;
            }
            puVar7 = OVRPlugin_OVRP_1_67_0_TypeInfo;
            puVar6 = Oculus_Interaction_DebugTree_ITreeNode<IInteractor>_TypeInfo;
            puVar4 = PTR_DAT_033ef120;
            puVar3 = PTR_DAT_033eb500;
            lVar11 = FUN_00da4fb8(*(undefined8 *)System_Data_IFilter_TypeInfo,
                                  *(undefined4 *)(lVar11 + 0x18));
            uVar9 = 0;
            while( true ) {
              lVar13 = *(long *)puVar5;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar13 = *(long *)puVar5;
              }
              lVar12 = **(long **)(lVar13 + 0xb8);
              if (lVar12 == 0) goto LAB_025abe88;
              if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar9) break;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar12 = **(long **)(*(long *)puVar5 + 0xb8);
                if (lVar12 == 0) goto LAB_025abe88;
              }
              FUN_0132138c(lVar12,uVar9 & 0xffffffff,&local_70,*(undefined8 *)puVar4);
              lVar13 = local_70;
              if (local_70 == 0) goto LAB_025abe88;
              FUN_010c2c5c(local_70,&local_70,*(undefined8 *)puVar3);
              lVar12 = local_70;
              local_70 = 0;
              lStack_68 = 0;
              FUN_011e70d8(&local_70,lVar13,lVar12,*(undefined8 *)puVar7);
              if (lVar11 == 0) goto LAB_025abe88;
              if (*(uint *)(lVar11 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar2 = (long *)(lVar11 + 0x20 + uVar9 * 0x10);
              plVar2[1] = lStack_68;
              *plVar2 = local_70;
              uVar9 = uVar9 + 1;
            }
            if (*(long *)(param_1 + 0x208) != 0) {
              FUN_0129a054(*(long *)(param_1 + 0x208),plVar8,lVar11,*(undefined8 *)puVar6);
              return;
            }
          }
        }
      }
    }
  }
LAB_025abe88:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


