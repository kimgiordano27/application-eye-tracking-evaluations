/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection$$GetFlattenedMember
ENTRY_POINT: 03ea8284
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection__GetFlattenedMember(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x20 + 0xb76) = in_w8;
  puVar1 = PTR_DAT_0457b5b8;
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0457b5b8) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
          goto LAB_03ea82e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03ea82e4:
    lVar6 = (*(code *)*puVar4)();
    if (lVar6 == 0) {
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03ea8340;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03ea8340:
      iVar3 = (*(code *)*puVar4)();
      puVar2 = PTR_DAT_0457b5f0;
      lVar6 = *(long *)PTR_DAT_0457b5f0;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
        lVar6 = *(long *)puVar2;
      }
      if (iVar3 == *(int *)(*(long *)(lVar6 + 0xb8) + 4)) {
        lVar6 = *(long *)PTR_DAT_0457b778;
      }
      else {
        lVar6 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03ea83dc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03ea83dc:
        in_stack_00000008._4_4_ = (*(code *)*puVar4)();
        uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                   ,(long)&stack0x00000008 + 4);
        lVar6 = FUN_0340eac8(*(undefined8 *)
                              Method_Unity_VisualScripting_Antlr3_Runtime_DFA_NoViableAlt__,uVar5,
                             *(undefined8 *)
                              Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__,0);
      }
      if (lVar6 == 0) goto LAB_03ea84c4;
    }
    lVar6 = FUN_03410770(lVar6,*(undefined8 *)
                                Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__
                         ,*(undefined8 *)PTR_DAT_0457b680,0);
    if ((lVar6 != 0) &&
       (lVar6 = FUN_03410770(lVar6,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                             ,*(undefined8 *)PTR_DAT_0457b698,0),
       puVar1 = 
       Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
       , lVar6 != 0)) {
      uVar5 = FUN_03410770(lVar6,*(undefined8 *)
                                  Method_Unity_VisualScripting_GraphReference_CreateGraphData__,
                           *(undefined8 *)PTR_DAT_0457b688,0);
      FUN_0340ebc0(*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar1,0);
      return;
    }
  }
LAB_03ea84c4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


