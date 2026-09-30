/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-float>$$GetEnumerator
ENTRY_POINT: 0276ac6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0276af18) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_float>__GetEnumerator(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
code_r0x0276ac6c:
  uVar8 = FUN_024443bc();
LAB_0276ac78:
  lVar12 = *(long *)(unaff_x22 + 0x10);
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
  if (lVar12 != 0) {
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4();
    }
    iVar1 = in_stack_00000008._4_4_ + 1;
    in_stack_00000008._4_4_ = iVar1;
    iVar7 = (**(code **)(*unaff_x19 + 0x618))();
    iVar6 = in_stack_00000008._4_4_;
    if (iVar1 < iVar7) {
      FUN_035683d0((long)&stack0x00000008 + 4,0);
      if (iVar6 != 0) goto code_r0x0276abe0;
      uVar8 = FUN_02443f1c();
      goto LAB_0276ac78;
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) ==
        0) {
      FUN_01ecaf44();
    }
    thunk_FUN_01f117cc();
    FUN_02e6cf0c();
    lVar12 = FUN_02444ec0();
    if (lVar12 != 0) {
      lVar12 = FUN_03fe3c18(lVar12,0);
      unaff_x19[0x14] = lVar12;
      thunk_FUN_01f51358(unaff_x19 + 0x14,lVar12);
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if (unaff_x19[0x13] == 0) goto LAB_0276af10;
      plVar9 = (long *)FUN_0265d924(unaff_x19[0x13],
                                    *(undefined8 *)
                                     Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      goto LAB_0276adc8;
    }
  }
LAB_0276af10:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x0276abe0:
  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  lVar11 = *unaff_x21;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar12) {
        puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0276ac54;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238();
LAB_0276ac54:
  (*(code *)*puVar10)();
  goto code_r0x0276ac6c;
LAB_0276adc8:
  lVar12 = *plVar9;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
        puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0276ae14;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_0276ae14:
  uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  if ((uVar13 & 1) == 0) goto LAB_0276ae94;
  lVar12 = *plVar9;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
        puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0276ae70;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_0276ae70:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  thunk_FUN_03fe9acc();
  goto LAB_0276adc8;
LAB_0276ae94:
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0276aee8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0276aee8:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  return;
}


