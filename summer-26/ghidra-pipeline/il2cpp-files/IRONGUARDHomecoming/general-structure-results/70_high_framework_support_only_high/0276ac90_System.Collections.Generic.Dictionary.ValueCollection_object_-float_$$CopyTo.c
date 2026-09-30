/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-float>$$CopyTo
ENTRY_POINT: 0276ac90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0276af18) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_float>__CopyTo
               (long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  do {
    uVar2 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 0276aca0 to 0286ace3 has its CatchHandler @ 0276ad3c */
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20) = param_2;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4();
    }
    iVar1 = in_stack_00000008._4_4_ + 1;
    in_stack_00000008._4_4_ = iVar1;
    iVar7 = (**(code **)(*unaff_x19 + 0x618))();
    iVar6 = in_stack_00000008._4_4_;
    if (iVar7 <= iVar1) {
                    /* try { // try from 0276ad24 to 0286ad57 has its CatchHandler @ 0276a900 */
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58) + 0x135) & 1)
          == 0) {
        FUN_01ecaf44();
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0276ad0c with catch @ 0276ad34
                        */
      thunk_FUN_01f117cc();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0276ac14 with catch @ 0276ad38
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0276aca0 with catch @ 0276ad3c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0276ad10 with catch @ 0276ad40
                        */
      FUN_02e6cf0c();
                    /* try { // try from 0276ad58 to 0286ad6f has its CatchHandler @ 0276ada4 */
      lVar8 = FUN_02444ec0();
                    /* try { // try from 0276ad70 to 0286ad93 has its CatchHandler @ 0276a900 */
      if (lVar8 != 0) {
        lVar8 = FUN_03fe3c18(lVar8,0);
        unaff_x19[0x14] = lVar8;
        thunk_FUN_01f51358(unaff_x19 + 0x14,lVar8);
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if (unaff_x19[0x13] != 0) {
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
      break;
    }
    FUN_035683d0((long)&stack0x00000008 + 4,0);
    if (iVar6 == 0) {
      param_2 = FUN_02443f1c();
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar11 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0276ac54;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238();
LAB_0276ac54:
      (*(code *)*puVar10)();
      param_2 = FUN_024443bc();
    }
    param_1 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0276adc8:
  lVar8 = *plVar9;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
        puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0276ae14;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_0276ae14:
  uVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  if ((uVar12 & 1) == 0) goto LAB_0276ae94;
  lVar8 = *plVar9;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
        puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0276ae70;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_0276ae70:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  thunk_FUN_03fe9acc();
  goto LAB_0276adc8;
LAB_0276ae94:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0276aee8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0276aee8:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  return;
}


