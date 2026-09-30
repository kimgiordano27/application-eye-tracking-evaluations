/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-int>$$OnDeserialization
ENTRY_POINT: 02a63438
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a63730) */

void System_Collections_Generic_Dictionary<object,_int>__OnDeserialization(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((int)unaff_x22[3] - param_1 < (long)(ulong)unaff_w21) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<SplineInstantiate,_int>__);
    FUN_034f6754(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5);
  }
  plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78)
                   )();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02a634cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_02a634cc:
    uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_02a63638;
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_02a63610;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02a63544;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar7 = FUN_01ecb238(plVar3,lVar7,0);
LAB_02a63544:
    *(void **)(unaff_x29 + -0x10) = unaff_x24;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar3,unaff_x29 + -0x10);
    if (*(uint *)(unaff_x22 + 3) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar8 = (long)(int)unaff_w21;
    memcpy((void *)((long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * lVar8 + 0x20),unaff_x24
           ,unaff_x23);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    unaff_w21 = unaff_w21 + 1;
    FUN_01f087b0(lVar7,(long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * lVar8 + 0x20);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02a6362c;
    }
  }
LAB_02a63610:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_02a6362c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_02a63638:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


