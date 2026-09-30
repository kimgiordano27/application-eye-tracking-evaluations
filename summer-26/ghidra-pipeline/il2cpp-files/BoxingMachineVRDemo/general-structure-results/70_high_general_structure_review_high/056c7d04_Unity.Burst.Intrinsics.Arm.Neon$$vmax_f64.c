/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmax_f64
ENTRY_POINT: 056c7d04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Unity_Burst_Intrinsics_Arm_Neon__vmax_f64(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _in_stack_00000010 =
       FUN_042a90e8(param_1,0,
                    *(undefined8 *)
                     UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3,_FloatField,_float>_TypeInfo
                   );
  uVar2 = FUN_0467d5c0(&stack0x00000010,
                       *(undefined8 *)
                        UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
                      );
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
    thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
    FUN_032f4c28(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    lVar3 = FUN_0467d60c(&stack0x00000010,
                         *(undefined8 *)
                          UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2,_FloatField,_float>_TypeInfo
                        );
    plVar5 = (long *)(unaff_x19 + 0xc);
    *plVar5 = lVar3;
    thunk_FUN_02dd37b4(plVar5);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_056c74cc();
    *(long *)(unaff_x20 + 0x60) = *plVar5;
    thunk_FUN_02dd37b4();
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = *plVar5;
    uVar4 = FUN_0506c044(*(long *)(unaff_x20 + 0x38),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(uVar4,uVar4);
    }
    lVar3 = FUN_056c81f0(lVar3);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar6 = FUN_0507b064(lVar3,0,0);
    uVar2 = FUN_04f2d31c();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar6;
      thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
      FUN_032f8c1c(unaff_x19 + 2);
    }
    else {
      FUN_04f2d338();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_056c74cc();
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_045bbf28(*(long *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x19 + 0xc),
                   *(undefined8 *)System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
      uVar4 = *(undefined8 *)(unaff_x19 + 0xc);
      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                  UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
                                );
      Unity_Burst_Intrinsics_Arm_Neon__vqrshld_s64(lVar3,uVar4);
      plVar5 = (long *)(unaff_x19 + 0xe);
      *plVar5 = lVar3;
      thunk_FUN_02dd37b4(plVar5,lVar3);
      *(long *)(unaff_x20 + 0x68) = *plVar5;
      thunk_FUN_02dd37b4();
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar3 = *plVar5;
      uVar4 = FUN_0506c044(*(long *)(unaff_x20 + 0x38),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8(uVar4,uVar4);
      }
      lVar3 = FUN_056c8380(lVar3);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar6 = FUN_0507b064(lVar3,0,0);
      uVar2 = FUN_04f2d31c();
      if ((uVar2 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar6;
        thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
        FUN_032f8c1c(unaff_x19 + 2);
      }
      else {
        FUN_04f2d338();
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        puVar1 = (undefined8 *)(unaff_x19 + 0xe);
        FUN_045bbf28(*(long *)(unaff_x20 + 0x50),*puVar1,
                     *(undefined8 *)
                      UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3Int,_IntegerField,_int>_TypeInfo
                    );
        *(undefined8 *)(unaff_x19 + 0xc) = 0;
        thunk_FUN_02dd37b4(unaff_x19 + 0xc,0);
        *puVar1 = 0;
        thunk_FUN_02dd37b4(puVar1,0);
        *unaff_x19 = 0xfffffffe;
        FUN_04f2d474(unaff_x19 + 2,0);
      }
    }
  }
  return;
}


