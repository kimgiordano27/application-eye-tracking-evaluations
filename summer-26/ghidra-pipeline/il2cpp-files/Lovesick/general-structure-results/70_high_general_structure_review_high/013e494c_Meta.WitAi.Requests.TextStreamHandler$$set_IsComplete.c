/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$set_IsComplete
ENTRY_POINT: 013e494c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


undefined8
Meta_WitAi_Requests_TextStreamHandler__set_IsComplete
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((int)unaff_x22[3] != 0) {
    unaff_x22[4] = unaff_x21;
    lVar2 = thunk_FUN_00d61fa0(*unaff_x20,&stack0x00000024);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
LAB_013e4bac:
      uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar4,0);
    }
    puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    if (1 < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[5] = lVar2;
      uStack0000000000000018 = FUN_0269f6b0();
      uStack000000000000001c = param_2;
      in_stack_00000020 = param_3;
      lVar2 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000018);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
      goto LAB_013e4bac;
      if (2 < *(uint *)(unaff_x22 + 3)) {
        unaff_x22[6] = lVar2;
        puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          in_stack_00000010._4_4_ = FUN_026841b8(*(long *)(unaff_x19 + 0x28),0);
          lVar2 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
          goto LAB_013e4bac;
          if (*(uint *)(unaff_x22 + 3) < 4) goto LAB_013e4ba8;
          unaff_x22[7] = lVar2;
          puVar1 = StringLiteral_12992;
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000028._4_4_ = FUN_02684384(*(long *)(unaff_x19 + 0x28),0);
            lVar2 = FUN_017841b4((long)&stack0x00000028 + 4,*(undefined8 *)puVar1,0);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
            goto LAB_013e4bac;
            puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_6__;
            if (*(uint *)(unaff_x22 + 3) < 5) goto LAB_013e4ba8;
            unaff_x22[8] = lVar2;
            uVar4 = FUN_01600be4(*(undefined8 *)puVar1);
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x25);
            }
            FUN_02660dac(uVar4,0);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              FUN_02685a6c(*(long *)(unaff_x19 + 0x28),0);
              *(undefined1 *)(unaff_x19 + 0x36) = 0;
              FUN_0142deac(*(undefined8 *)(unaff_x19 + 0x18),0);
              FUN_0142deac(*(undefined8 *)(unaff_x19 + 0x20),0);
              puVar1 = Method_System_Collections_Generic_List<TeleportPoint>_IndexOf__;
              if (3 < *(int *)(unaff_x19 + 0x10)) {
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660dac(*(undefined8 *)puVar1,0);
              }
              uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
              *(undefined8 *)(unaff_x19 + 0x60) = 0;
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar5 = FUN_0268b4e0(uVar4,0,0);
              puVar1 = Method_System_Span<Vector3>__ctor__;
              if ((uVar5 & 1) != 0) {
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_026610e4(*(undefined8 *)puVar1,0);
              }
              return uVar4;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
  }
LAB_013e4ba8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


