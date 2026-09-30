/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmin_f64
ENTRY_POINT: 056c7d74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Unity_Burst_Intrinsics_Arm_Neon__vmin_f64(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  *(undefined8 *)(param_1 + 0x60) = param_2;
  thunk_FUN_02dd37b4();
  if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = *unaff_x21;
  uVar2 = FUN_0506c044(*(long *)(unaff_x20 + 0x38),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8(uVar2,uVar2);
  }
  lVar4 = FUN_056c81f0(lVar4);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar6 = FUN_0507b064(lVar4,0,0);
  uVar3 = FUN_04f2d31c();
  if ((uVar3 & 1) == 0) {
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
    uVar2 = *(undefined8 *)(unaff_x19 + 0xc);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
                              );
    Unity_Burst_Intrinsics_Arm_Neon__vqrshld_s64(lVar4,uVar2);
    plVar5 = (long *)(unaff_x19 + 0xe);
    *plVar5 = lVar4;
    thunk_FUN_02dd37b4(plVar5,lVar4);
    *(long *)(unaff_x20 + 0x68) = *plVar5;
    thunk_FUN_02dd37b4();
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *plVar5;
    uVar2 = FUN_0506c044(*(long *)(unaff_x20 + 0x38),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(uVar2,uVar2);
    }
    lVar4 = FUN_056c8380(lVar4);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar6 = FUN_0507b064(lVar4,0,0);
    uVar3 = FUN_04f2d31c();
    if ((uVar3 & 1) == 0) {
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
  return;
}


