/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vabal_high_u8
ENTRY_POINT: 056c7c5c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Unity_Burst_Intrinsics_Arm_Neon__vabal_high_u8(void)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int *unaff_x19;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  auVar9 = ZEXT816(0);
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  iVar2 = *unaff_x19;
  lVar6 = *(long *)(unaff_x19 + 10);
  if (iVar2 == 0) {
    _uStack0000000000000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
LAB_056c7d38:
    lVar7 = FUN_0467d60c(&stack0x00000010,
                         *(undefined8 *)
                          UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2,_FloatField,_float>_TypeInfo
                        );
    plVar8 = (long *)(unaff_x19 + 0xc);
    *plVar8 = lVar7;
    thunk_FUN_02dd37b4(plVar8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_056c74cc(lVar6);
    *(long *)(lVar6 + 0x60) = *plVar8;
    thunk_FUN_02dd37b4();
    if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *plVar8;
    uVar3 = FUN_0506c044(*(long *)(lVar6 + 0x38),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(uVar3,uVar3);
    }
    lVar7 = FUN_056c81f0(lVar7);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    _uStack0000000000000000 = FUN_0507b064(lVar7,0,0);
    uVar4 = FUN_04f2d31c();
    auVar9 = _uStack0000000000000010;
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = _uStack0000000000000000;
      thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
      FUN_032f8c1c(unaff_x19 + 2);
      return;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        _uStack0000000000000000 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
        unaff_x19[0x14] = 0;
        unaff_x19[0x15] = 0;
        unaff_x19[0x16] = 0;
        unaff_x19[0x17] = 0;
        *unaff_x19 = -1;
        _uStack0000000000000010 = ZEXT816(0);
        goto FUN_056c7e84;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_056c74cc(lVar6);
      if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *(long *)(lVar6 + 0x18);
      uVar3 = FUN_0506c044(*(long *)(lVar6 + 0x38),0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = FUN_057aad9c(lVar7,lVar6,uVar3,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      _uStack0000000000000010 =
           FUN_042a90e8(lVar7,0,*(undefined8 *)
                                 UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3,_FloatField,_float>_TypeInfo
                       );
      uVar4 = FUN_0467d5c0(&stack0x00000010,
                           *(undefined8 *)
                            UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
                          );
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = _uStack0000000000000010;
        thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
        FUN_032f4c28(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      goto LAB_056c7d38;
    }
    _uStack0000000000000000 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
  }
  _uStack0000000000000010 = auVar9;
  FUN_04f2d338();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_056c74cc(lVar6);
  if (*(long *)(lVar6 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_045bbf28(*(long *)(lVar6 + 0x40),*(undefined8 *)(unaff_x19 + 0xc),
               *(undefined8 *)System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
  uVar3 = *(undefined8 *)(unaff_x19 + 0xc);
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                              UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
                            );
  Unity_Burst_Intrinsics_Arm_Neon__vqrshld_s64(lVar7,uVar3);
  plVar8 = (long *)(unaff_x19 + 0xe);
  *plVar8 = lVar7;
  thunk_FUN_02dd37b4(plVar8,lVar7);
  *(long *)(lVar6 + 0x68) = *plVar8;
  thunk_FUN_02dd37b4();
  if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar7 = *plVar8;
  uVar3 = FUN_0506c044(*(long *)(lVar6 + 0x38),0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8(uVar3,uVar3);
  }
  lVar7 = FUN_056c8380(lVar7);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar9 = FUN_0507b064(lVar7,0,0);
  _uStack0000000000000000 = auVar9;
  uVar4 = FUN_04f2d31c();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _uStack0000000000000000;
    thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
    FUN_032f8c1c(unaff_x19 + 2);
    return;
  }
FUN_056c7e84:
  FUN_04f2d338();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(lVar6 + 0x50) != 0) {
    piVar1 = unaff_x19 + 0xe;
    FUN_045bbf28(*(long *)(lVar6 + 0x50),*(undefined8 *)piVar1,
                 *(undefined8 *)
                  UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3Int,_IntegerField,_int>_TypeInfo
                );
    piVar5 = unaff_x19 + 0xc;
    piVar5[0] = 0;
    piVar5[1] = 0;
    thunk_FUN_02dd37b4(piVar5,0);
    piVar1[0] = 0;
    piVar1[1] = 0;
    thunk_FUN_02dd37b4(piVar1,0);
    *unaff_x19 = -2;
    FUN_04f2d474(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


