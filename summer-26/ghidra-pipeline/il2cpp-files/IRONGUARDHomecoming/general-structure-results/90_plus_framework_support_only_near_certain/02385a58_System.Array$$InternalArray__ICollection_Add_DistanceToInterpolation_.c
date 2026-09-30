/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<DistanceToInterpolation>
ENTRY_POINT: 02385a58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02385cd4) */

void System_Array__InternalArray__ICollection_Add<DistanceToInterpolation>
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  byte unaff_w25;
  long unaff_x26;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_01ecaf44(param_3);
  }
  lVar6 = *unaff_x22;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto FUN_02385ab0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
FUN_02385ab0:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02385b20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_02385b20:
    uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar8 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02385b94;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar3,lVar6,0);
LAB_02385b94:
    *(undefined8 **)(unaff_x29 + -0x38) = unaff_x24;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar3,unaff_x29 + -0x38);
    puVar2 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x48) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x24;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58);
    uVar4 = *puVar5;
    *(byte *)(unaff_x29 + -0xc) = unaff_w25 & 1;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar2;
    *(undefined8 *)(unaff_x29 + -0x30) = unaff_x21;
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    (*(code *)puVar5[2])(uVar4,puVar5,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02385c54;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02385c54:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x60))();
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


