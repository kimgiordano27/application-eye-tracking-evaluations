/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<KeyValuePair<Scene,-object>>
ENTRY_POINT: 023e623c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint System_Array__InternalArray__ICollection_CopyTo<KeyValuePair<Scene,_object>>(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x29;
  undefined *puVar5;
  
  if (unaff_x21 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCaptureOutEvent>__
                              );
    FUN_034efd20(uVar2,uVar3,0);
    goto LAB_023e63fc;
  }
  uVar7 = (uint)unaff_x22[3];
  if (unaff_x22[3] == 0) {
    if (unaff_w20 != 0xffffffff) goto LAB_023e6334;
LAB_023e6254:
    if ((-1 < unaff_w25) && (iVar1 = unaff_w20 - unaff_w25, -2 < iVar1)) {
      if (0 < unaff_w25) {
        if (unaff_w20 < uVar7) {
          do {
            memcpy(unaff_x24,
                   (void *)((long)unaff_x22 +
                           (ulong)*(uint *)(*unaff_x22 + 0x104) * (long)(int)unaff_w20 + 0x20),
                   unaff_x23);
            puVar8 = unaff_x24;
            if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x10) + 0x28)) {
              puVar8 = (undefined8 *)*unaff_x24;
            }
            puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
            uVar2 = *puVar6;
            *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
            (*(code *)puVar6[2])(uVar2);
            if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_023e62f8;
            unaff_w20 = unaff_w20 - 1;
            if ((int)unaff_w20 <= iVar1)
            goto 
            System_Array__InternalArray__ICollection_CopyTo<KeyValuePair<uint,_GlyphPairAdjustmentRecord>>
            ;
          } while (unaff_w20 < *(uint *)(unaff_x22 + 3));
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
System_Array__InternalArray__ICollection_CopyTo<KeyValuePair<uint,_GlyphPairAdjustmentRecord>>:
      unaff_w20 = 0xffffffff;
LAB_023e62f8:
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return unaff_w20;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
    puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  }
  else {
    if ((-1 < (int)unaff_w20) && ((int)unaff_w20 < (int)uVar7)) goto LAB_023e6254;
LAB_023e6334:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
    puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar5);
  FUN_034f3578(uVar2,uVar3,uVar4,0);
LAB_023e63fc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2);
}


