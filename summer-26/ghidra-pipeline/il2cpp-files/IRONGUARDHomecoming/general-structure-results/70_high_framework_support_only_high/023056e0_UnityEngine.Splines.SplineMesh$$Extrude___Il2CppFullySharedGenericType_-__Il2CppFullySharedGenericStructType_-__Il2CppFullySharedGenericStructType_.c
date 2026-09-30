/*
FUNCTION_NAME: UnityEngine.Splines.SplineMesh$$Extrude<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericStructType,-__Il2CppFullySharedGenericStructType>
ENTRY_POINT: 023056e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023059f4) */
/* WARNING: Removing unreachable block (ram,0x02305a00) */

void UnityEngine_Splines_SplineMesh__Extrude<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>
               (long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x29;
  
code_r0x023056e0:
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44(lVar1);
  }
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar1) {
        lVar1 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
        goto LAB_02305760;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar1 = FUN_01ecb238();
LAB_02305760:
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
  (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = *(long **)(unaff_x21 + 0x38);
  lVar1 = *plVar4;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44(lVar1);
    plVar4 = *(long **)(unaff_x21 + 0x38);
  }
  puVar7 = unaff_x23;
  puVar8 = unaff_x24;
  if (-1 < *(int *)(plVar4[8] + 0x28)) {
    puVar7 = (undefined8 *)*unaff_x23;
    puVar8 = (undefined8 *)*unaff_x24;
  }
  lVar3 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar1) {
        lVar1 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
        goto LAB_02305804;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar1 = FUN_01ecb238();
LAB_02305804:
  *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
  (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    lVar1 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar7 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0230560c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_0230560c:
    uVar5 = (*(code *)*puVar7)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar1 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 == 0) goto LAB_0230586c;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      goto LAB_02305854;
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar7 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0230566c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_0230566c:
    uVar5 = (*(code *)*puVar7)();
    if ((uVar5 & 1) == 0) goto LAB_02305828;
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44(lVar1);
    }
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar1) {
          param_1 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
          goto code_r0x023056e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    param_1 = FUN_01ecb238();
    goto code_r0x023056e0;
  }
LAB_02305828:
  iVar2 = 0xc;
  goto joined_r0x023058a8;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_02305854:
    if (*(long *)(piVar6 + -2) == *unaff_x26) {
      puVar7 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_02305888;
    }
  }
LAB_0230586c:
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02305888:
  uVar5 = (*(code *)*puVar7)();
  iVar2 = 0xc;
  if ((uVar5 & 1) == 0) {
    iVar2 = 0xe;
  }
joined_r0x023058a8:
  if (unaff_x20 != (long *)0x0) {
    lVar1 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02305900;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02305900:
    (*(code *)*puVar7)();
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar1 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0230597c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_0230597c:
    (*(code *)*puVar7)();
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0xc);
}


