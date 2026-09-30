/*
FUNCTION_NAME: System.Linq.Enumerable.<TakeIterator>d__25<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 029a5448
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Linq_Enumerable_<TakeIterator>d__25<__Il2CppFullySharedGenericType>__System_Collections_IEnumerable_GetEnumerator
          (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  *(undefined1 *)(unaff_x21 + 0xda7) = 1;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)unaff_x19 + 0x14) != 2) {
    if (*(int *)((long)unaff_x19 + 0x14) != 1) {
      return 0;
    }
    plVar8 = (long *)unaff_x19[4];
    if (plVar8 == (long *)0x0) goto LAB_029a56b4;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_029a54e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_029a54e8:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    unaff_x19[7] = lVar4;
    thunk_FUN_01f51358(unaff_x19 + 7,lVar4);
    *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  }
  do {
    plVar8 = (long *)unaff_x19[7];
    if (plVar8 == (long *)0x0) goto LAB_029a56b4;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_029a5564;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_029a5564:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_029a56b4;
    }
    plVar8 = (long *)unaff_x19[7];
    if (plVar8 == (long *)0x0) goto LAB_029a56b4;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_029a55e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_029a55e4:
    (*(code *)*puVar3)(&stack0x00000098,plVar8,puVar3[1]);
    memcpy(&stack0x00000050,&stack0x00000098,0x48);
    lVar4 = unaff_x19[5];
    if (lVar4 == 0) break;
    pcVar10 = *(code **)(lVar4 + 0x18);
    uVar9 = *(undefined8 *)(lVar4 + 0x40);
    memcpy(&stack0x00000098,&stack0x00000050,0x48);
    uVar6 = (*pcVar10)(uVar9,&stack0x00000098,*(undefined8 *)(lVar4 + 0x28));
  } while ((uVar6 & 1) == 0);
  lVar4 = unaff_x19[6];
  memcpy(&stack0x00000008,&stack0x00000050,0x48);
  if (lVar4 != 0) {
    pcVar10 = *(code **)(lVar4 + 0x18);
    uVar9 = *(undefined8 *)(lVar4 + 0x40);
    memcpy(&stack0x00000098,&stack0x00000008,0x48);
    uVar2 = (*pcVar10)(uVar9,&stack0x00000098,*(undefined8 *)(lVar4 + 0x28));
    *(undefined4 *)(unaff_x19 + 3) = uVar2;
    return 1;
  }
LAB_029a56b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


