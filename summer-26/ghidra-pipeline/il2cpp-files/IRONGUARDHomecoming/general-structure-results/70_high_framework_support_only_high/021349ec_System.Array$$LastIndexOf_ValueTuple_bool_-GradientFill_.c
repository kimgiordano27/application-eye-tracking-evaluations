/*
FUNCTION_NAME: System.Array$$LastIndexOf<ValueTuple<bool,-GradientFill>>
ENTRY_POINT: 021349ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02134be4) */

void System_Array__LastIndexOf<ValueTuple<bool,_GradientFill>>(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x27;
  undefined1 auVar6 [16];
  
code_r0x021349ec:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(), (uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02134a6c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02134a6c:
    auVar6 = (*(code *)*puVar2)();
    (**(code **)(unaff_x23 + 0x18))
              (*(undefined8 *)(unaff_x23 + 0x40),auVar6._0_8_,auVar6._8_8_,
               *(undefined8 *)(unaff_x23 + 0x28));
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    lVar3 = FUN_0329a1b8();
    auVar6 = (**(code **)(unaff_x22 + 0x18))
                       (*(undefined8 *)(unaff_x22 + 0x40),auVar6._0_8_,auVar6._8_8_,
                        *(undefined8 *)(unaff_x22 + 0x28));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    FUN_02e9b910(lVar3,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
    param_1 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x27) goto code_r0x021349ec;
        uVar1 = uVar1 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
  }
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02134b78;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02134b78:
    (*(code *)*puVar2)();
  }
  return;
}


