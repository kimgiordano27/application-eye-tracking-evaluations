/*
FUNCTION_NAME: System.Array$$LastIndexOf<ValueTuple<bool,-GradientFill>>
ENTRY_POINT: 02135818
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02135b78) */

undefined8
System_Array__LastIndexOf<ValueTuple<bool,_GradientFill>>(undefined8 param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte in_w8;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *puVar9;
  undefined8 *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  do {
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_01ecaf44(param_2);
    }
    lVar6 = *unaff_x27;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_2) {
          lVar6 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02135870;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar6 = FUN_01ecb238();
LAB_02135870:
    *(void **)(unaff_x29 + -0x28) = unaff_x24;
    (**(code **)(*(long *)(lVar6 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 8) + 8));
    memcpy(unaff_x22,unaff_x24,unaff_x23);
    puVar9 = *(undefined8 **)(unaff_x29 + -0x48);
    memcpy(puVar9,unaff_x22,unaff_x23);
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar9;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x28;
    (*(code *)puVar5[2])(uVar2,puVar5,*(undefined8 *)(unaff_x29 + -0x38),unaff_x29 + -0x28);
    if (*(long *)(unaff_x29 + -0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar6 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uVar2 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x20);
    lVar6 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    puVar9 = unaff_x28;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x28;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar9;
    *(undefined1 *)(unaff_x29 + -0xc) = 1;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    (**(code **)(lVar6 + 0x10))
              (uVar2,lVar6,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x28,unaff_x29 + -0x18);
    puVar9 = *(undefined8 **)(unaff_x29 + -0x50);
    lVar6 = *(long *)(unaff_x29 + -0x18);
    memcpy(puVar9,unaff_x22,unaff_x23);
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar9;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
    (*(code *)puVar5[2])(uVar2,puVar5,*(undefined8 *)(unaff_x29 + -0x40),unaff_x29 + -0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_01ecaf44();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar2 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x38);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_01ecaf44();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    puVar9 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar9;
    (**(code **)(lVar3 + 0x10))(uVar2,lVar3,lVar6,unaff_x29 + -0x28);
    lVar6 = *unaff_x27;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_021357fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_021357fc:
    uVar7 = (*(code *)*puVar9)();
    if ((uVar7 & 1) == 0) break;
    param_2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    in_w8 = *(byte *)(param_2 + 0x135);
  } while( true );
  if (unaff_x27 != (long *)0x0) {
    lVar6 = *unaff_x27;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02135af0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02135af0:
    (*(code *)*puVar9)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return *(undefined8 *)(unaff_x29 + -0x30);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


