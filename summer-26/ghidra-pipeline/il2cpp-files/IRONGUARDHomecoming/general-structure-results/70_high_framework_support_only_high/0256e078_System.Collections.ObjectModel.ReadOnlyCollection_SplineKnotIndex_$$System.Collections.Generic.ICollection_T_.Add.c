/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<SplineKnotIndex>$$System.Collections.Generic.ICollection<T>.Add
ENTRY_POINT: 0256e078
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_ObjectModel_ReadOnlyCollection<SplineKnotIndex>__System_Collections_Generic_ICollection<T>_Add
          (ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x21;
  long lStack0000000000000020;
  long lStack0000000000000028;
  
  lStack0000000000000020 = param_3;
  lStack0000000000000028 = param_2;
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x21 + 0xdfe) = 1;
  }
  if (*(int *)(param_2 + 0x10) != 1) {
    if (*(int *)(param_2 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18) + 0x135) & 1) == 0)
    {
      FUN_01ecaf44();
    }
    uVar2 = thunk_FUN_01f117cc();
    FUN_02712524(uVar2,uVar8,
                 *(undefined8 *)(*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0x20))
    ;
    *(undefined8 *)(lStack0000000000000028 + 0x48) = uVar2;
    thunk_FUN_01f51358((undefined8 *)(lStack0000000000000028 + 0x48),uVar2);
    plVar9 = *(long **)(lStack0000000000000028 + 0x38);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0256e188;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_0256e188:
    uVar8 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    *(undefined8 *)(lStack0000000000000028 + 0x50) = uVar8;
    thunk_FUN_01f51358();
    param_2 = lStack0000000000000028;
  }
  plVar9 = *(long **)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x10) = 0xfffffffd;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0256e20c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_0256e20c:
    uVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      FUN_0256e3bc();
      *(undefined8 *)(lStack0000000000000028 + 0x50) = 0;
      thunk_FUN_01f51358((undefined8 *)(lStack0000000000000028 + 0x50),0);
      return 0;
    }
    plVar9 = *(long **)(lStack0000000000000028 + 0x50);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0256e298;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_0256e298:
    uVar8 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if (*(long *)(lStack0000000000000028 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_027125fc(*(long *)(lStack0000000000000028 + 0x48),uVar8,
                         *(undefined8 *)
                          (*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0x50));
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(lStack0000000000000028 + 0x18) = uVar8;
      thunk_FUN_01f51358((undefined8 *)(lStack0000000000000028 + 0x18),uVar8);
      *(undefined4 *)(lStack0000000000000028 + 0x10) = 1;
      return 1;
    }
    plVar9 = *(long **)(lStack0000000000000028 + 0x50);
  } while( true );
}


