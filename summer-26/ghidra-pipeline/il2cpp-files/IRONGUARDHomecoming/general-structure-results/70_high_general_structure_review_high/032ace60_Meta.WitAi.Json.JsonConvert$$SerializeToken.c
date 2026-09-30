/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken
ENTRY_POINT: 032ace60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Meta_WitAi_Json_JsonConvert__SerializeToken(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar5;
  long *in_stack_00000020;
  
  lVar1 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  uVar2 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                            );
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar1 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    uVar5 = **(undefined8 **)(lVar1 + 0xb8);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Contains<Spline>__);
    uVar3 = thunk_FUN_01f117cc();
    FUN_02e6c748(uVar3,uVar5,*(undefined8 *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x48),0);
    lVar4 = *(long *)(*in_stack_00000020 + 0xc0);
    lVar1 = *(long *)(lVar4 + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
      lVar4 = *(long *)(*in_stack_00000020 + 0xc0);
    }
    *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10) = uVar3;
    lVar1 = *(long *)(lVar4 + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    thunk_FUN_01f51358(*(long *)(lVar1 + 0xb8) + 0x10,uVar3);
  }
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ThenBy<KerningPair,_uint>__);
  uVar3 = FUN_02300e64();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_System_Linq_Enumerable_ThenBy<MarkToBaseAdjustmentRecord,_uint>__
                            );
  uVar3 = FUN_02308ab0(uVar3,uVar5);
  uVar2 = FUN_0340f714(uVar2,uVar3,0);
  if (5 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + 0x48) = uVar2;
    thunk_FUN_01f51358((undefined8 *)(unaff_x23 + 0x48),uVar2);
    uVar2 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<NameAndParameters>__);
    if (6 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x50) = uVar2;
      thunk_FUN_01f51358();
      if (unaff_x21 == (long *)0x0) {
LAB_032ad478:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = FUN_035a1da8();
      lVar1 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_0392f7cc(uVar2,0);
      if (7 < *(uint *)(unaff_x23 + 0x18)) {
        *(undefined8 *)(unaff_x23 + 0x58) = uVar2;
        thunk_FUN_01f51358((undefined8 *)(unaff_x23 + 0x58),uVar2);
        uVar2 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<OVRGLTFAnimatinonNode>__);
        if (8 < *(uint *)(unaff_x23 + 0x18)) {
          *(undefined8 *)(unaff_x23 + 0x60) = uVar2;
          thunk_FUN_01f51358((undefined8 *)(unaff_x23 + 0x60),uVar2);
          uVar2 = (**(code **)(*unaff_x21 + 0x188))();
          if (9 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined8 *)(unaff_x23 + 0x68) = uVar2;
            thunk_FUN_01f51358();
            FUN_0340efe8();
            if (unaff_x20 != 0) {
              FUN_0390b988();
              return;
            }
            goto LAB_032ad478;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


