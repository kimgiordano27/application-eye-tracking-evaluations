/*
FUNCTION_NAME: System.Array$$LastIndexOf<ValueTuple<bool,-DashStyle>>
ENTRY_POINT: 021356b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02135b78) */

undefined8 System_Array__LastIndexOf<ValueTuple<bool,_DashStyle>>(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  code *pcVar11;
  undefined8 *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar2 = thunk_FUN_01f117cc();
  lVar8 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x20;
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar6 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_01ecaf44(lVar6);
  }
  (*pcVar11)(*(undefined8 *)(unaff_x29 + -0x30));
  lVar6 = **(long **)(unaff_x19 + 0x38);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar8 = *unaff_x27;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02135794;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02135794:
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_021357fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_021357fc:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_02135afc;
      lVar6 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_02135ad4;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          lVar6 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02135870;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar6 = FUN_01ecb238(plVar4,lVar6,0);
LAB_02135870:
    *(void **)(unaff_x29 + -0x28) = unaff_x24;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar4,unaff_x29 + -0x28);
    memcpy(unaff_x22,unaff_x24,unaff_x23);
    puVar3 = *(undefined8 **)(unaff_x29 + -0x48);
    memcpy(puVar3,unaff_x22,unaff_x23);
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    puVar7 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38);
    uVar2 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x28;
    (*(code *)puVar7[2])(uVar2,puVar7,*(undefined8 *)(unaff_x29 + -0x38),unaff_x29 + -0x28);
    if (*(long *)(unaff_x29 + -0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar6 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
    }
    uVar2 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x20);
    lVar6 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    puVar3 = unaff_x28;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x28;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    *(undefined1 *)(unaff_x29 + -0xc) = 1;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    (**(code **)(lVar6 + 0x10))
              (uVar2,lVar6,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x28,unaff_x29 + -0x18);
    puVar3 = *(undefined8 **)(unaff_x29 + -0x50);
    lVar6 = *(long *)(unaff_x29 + -0x18);
    memcpy(puVar3,unaff_x22,unaff_x23);
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    puVar7 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40);
    uVar2 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
    (*(code *)puVar7[2])(uVar2,puVar7,*(undefined8 *)(unaff_x29 + -0x40),unaff_x29 + -0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar8 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_01ecaf44();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar2 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_01ecaf44();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    puVar3 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    (**(code **)(lVar8 + 0x10))(uVar2,lVar8,lVar6,unaff_x29 + -0x28);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02135af0;
    }
  }
LAB_02135ad4:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02135af0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_02135afc:
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return *(undefined8 *)(unaff_x29 + -0x30);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


