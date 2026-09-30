/*
FUNCTION_NAME: Unity.VisualScripting.ConnectionCollectionBase<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$Clear
ENTRY_POINT: 02968da8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_VisualScripting_ConnectionCollectionBase<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__Clear
          (ulong param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined1 auVar8 [16];
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x21 + 0xc6a) = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_2 + 0x14) != 2) {
    if (*(int *)((long)param_2 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_2[5];
    if (plVar7 == (long *)0x0) goto LAB_02968fd8;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02968e50;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02968e50:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_2[8] = lVar3;
    thunk_FUN_01f51358(param_2 + 8,lVar3);
    *(undefined4 *)((long)param_2 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_2[8];
    if (plVar7 == (long *)0x0) goto LAB_02968fd8;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02968ecc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_02968ecc:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
        return 0;
      }
      goto LAB_02968fd8;
    }
    plVar7 = (long *)param_2[8];
    if (plVar7 == (long *)0x0) goto LAB_02968fd8;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02968f4c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02968f4c:
                    /* try { // try from 02968f4c to 02a690fb has its CatchHandler @ 02968f4c
                       catch() { ... } // from try @ 02968f4c with catch @ 02968f4c
                       catch() { ... } // from try @ 02969184 with catch @ 02968f4c
                       catch() { ... } // from try @ 02969198 with catch @ 02968f4c
                       catch() { ... } // from try @ 029691d4 with catch @ 02968f4c
                       catch() { ... } // from try @ 02969210 with catch @ 02968f4c */
    auVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar3 = param_2[6];
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)(lVar3 + 0x28)), (uVar5 & 1) == 0));
  lVar3 = param_2[7];
  if (lVar3 != 0) {
    auVar8 = (**(code **)(lVar3 + 0x18))
                       (*(undefined8 *)(lVar3 + 0x40),auVar8._0_8_,auVar8._8_8_,
                        *(undefined8 *)(lVar3 + 0x28));
    *(undefined1 (*) [16])(param_2 + 3) = auVar8;
    return 1;
  }
LAB_02968fd8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


