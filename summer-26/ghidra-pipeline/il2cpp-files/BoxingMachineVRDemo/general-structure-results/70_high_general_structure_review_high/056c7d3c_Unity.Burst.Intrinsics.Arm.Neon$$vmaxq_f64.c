/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmaxq_f64
ENTRY_POINT: 056c7d3c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Unity_Burst_Intrinsics_Arm_Neon__vmaxq_f64(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined1 auVar6 [16];
  
  lVar2 = FUN_0467d60c(&stack0x00000010,**(undefined8 **)(param_1 + 0x450));
  plVar5 = (long *)(unaff_x19 + 0xc);
  *plVar5 = lVar2;
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
  lVar2 = *plVar5;
  uVar3 = FUN_0506c044(*(long *)(unaff_x20 + 0x38),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8(uVar3,uVar3);
  }
  lVar2 = FUN_056c81f0(lVar2);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar6 = FUN_0507b064(lVar2,0,0);
  uVar4 = FUN_04f2d31c();
  if ((uVar4 & 1) == 0) {
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
    uVar3 = *(undefined8 *)(unaff_x19 + 0xc);
    lVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
                              );
    Unity_Burst_Intrinsics_Arm_Neon__vqrshld_s64(lVar2,uVar3);
    plVar5 = (long *)(unaff_x19 + 0xe);
    *plVar5 = lVar2;
    thunk_FUN_02dd37b4(plVar5,lVar2);
    *(long *)(unaff_x20 + 0x68) = *plVar5;
    thunk_FUN_02dd37b4();
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar2 = *plVar5;
    uVar3 = FUN_0506c044(*(long *)(unaff_x20 + 0x38),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(uVar3,uVar3);
    }
    lVar2 = FUN_056c8380(lVar2);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar6 = FUN_0507b064(lVar2,0,0);
    uVar4 = FUN_04f2d31c();
    if ((uVar4 & 1) == 0) {
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


