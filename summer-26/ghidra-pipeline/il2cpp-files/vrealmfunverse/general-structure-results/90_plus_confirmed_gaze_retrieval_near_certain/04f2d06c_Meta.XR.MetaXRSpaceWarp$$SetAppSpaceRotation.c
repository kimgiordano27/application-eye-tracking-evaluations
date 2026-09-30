/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpaceRotation
ENTRY_POINT: 04f2d06c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 114
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MetaXRSpaceWarp__SetAppSpaceRotation(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  
  if ((DAT_066c993b & 1) == 0) {
    FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_HierarchyNode>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c993b = 1;
  }
  puVar2 = System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo;
  if (*(char *)(param_1 + 0x80) == '\0') {
    plVar11 = *(long **)(param_1 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_04f2d350;
    lVar6 = *plVar11;
    lVar9 = *(long *)(param_1 + 0x28);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04f2d134;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02b7654c(plVar11,*(long *)
                                   System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                          ,0);
LAB_04f2d134:
    uVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (lVar9 == 0) goto LAB_04f2d350;
    FUN_05c544c8(lVar9,uVar3,0);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  puVar1 = PTR_DAT_06315600;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_04f2d350;
  fVar13 = (float)FUN_05c53aac(*(long *)(param_1 + 0x28),0);
  if (**(float **)(*(long *)puVar1 + 0xb8) < ABS(fVar13 - *(float *)(param_1 + 0x50))) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_04f2d350;
    FUN_05c53b60(*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_04f2d350;
    FUN_05c53ce8(*(undefined4 *)(param_1 + 0x50),*(long *)(param_1 + 0x28),0);
  }
  plVar11 = *(long **)(param_1 + 0x68);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04f2d20c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar2,0);
LAB_04f2d20c:
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    puVar1 = System_Collections_Generic_Dictionary<int,_HierarchyNode>_TypeInfo;
    puVar2 = System_Runtime_Remoting_IRemotingTypeInfo_var;
    if (0 < iVar4) {
      iVar10 = 0;
      do {
        plVar11 = *(long **)(param_1 + 0x68);
        if (plVar11 == (long *)0x0) goto LAB_04f2d350;
        lVar6 = *plVar11;
        plVar12 = *(long **)(param_1 + 0x58);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04f2d290;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar1,0);
LAB_04f2d290:
        uVar3 = (*(code *)*puVar5)(plVar11,iVar10,puVar5[1]);
        if (plVar12 == (long *)0x0) goto LAB_04f2d350;
        lVar6 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_04f2d2f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)puVar2,9);
LAB_04f2d2f8:
        uVar7 = (*(code *)*puVar5)(plVar12,uVar3);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_04f2d350;
          FUN_05c5458c(0,0,0,*(long *)(param_1 + 0x28),iVar10,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar4);
    }
    return;
  }
LAB_04f2d350:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


