/*
FUNCTION_NAME: UnityEngine.UI.InputField$$InPlaceEditingChanged
ENTRY_POINT: 06cea0f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_14
*/


void UnityEngine_UI_InputField__InPlaceEditingChanged(ulong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *in_x4;
  undefined8 *in_x5;
  ulong in_x6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  ulong *unaff_x29;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  while ((param_1 = FUN_06ceb21c(param_1,unaff_x28,unaff_w23,unaff_w24,in_x4,in_x5,in_x6),
         (param_1 & 1) == 0 && (*(long *)(unaff_x28 + 0x28) != 0))) {
    in_x6 = (ulong)(unaff_w26 & 1);
    in_x4 = &stack0x000000b0;
    in_x5 = &stack0x00000090;
    unaff_x28 = *(long *)(unaff_x28 + 0x28);
  }
  if (in_stack_00000090._4_4_ == 0) {
    iVar3 = *(int *)(unaff_x20 + 0x30) << 1;
    *(int *)(unaff_x20 + 0x30) = iVar3;
    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar9 = FUN_05924754(iVar3,unaff_w23 << 1,0);
    *(int *)(unaff_x20 + 0x30) = (int)uVar9;
    uVar7 = FUN_0592489c(uVar9,*(undefined4 *)(unaff_x20 + 0xa8),0);
    *(uint *)(unaff_x20 + 0x30) = uVar7;
    uVar8 = FUN_05924754((int)(*(float *)(unaff_x20 + 0x38) * (float)uVar7 + 0.5),unaff_w24 << 1,0);
    if (unaff_x28 == 0) {
      bVar6 = true;
    }
    else {
      bVar6 = *(long *)(unaff_x28 + 0x28) == 0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb33bc(bVar6,0);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x30);
    uVar2 = *(undefined1 *)(unaff_x20 + 0x10);
    unaff_x28 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory5__
                                  );
    FUN_06ceb4e8(unaff_x28,uVar1,uVar8,4,uVar2);
    if (unaff_x28 == 0) goto LAB_06cea5d4;
    *(undefined8 *)(unaff_x28 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
    thunk_FUN_0333a630();
    *unaff_x27 = unaff_x28;
    thunk_FUN_0333a630();
    unaff_x21 = (long *)PTR_DAT_072798f8;
    if ((*(long *)(unaff_x28 + 0x18) == 0) ||
       (lVar10 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x40), lVar10 == 0)) goto LAB_06cea5d4;
    FUN_06ceb338(&stack0x00000070,lVar10,unaff_w23,unaff_w26 & 1);
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000b0 = in_stack_00000070;
    if ((*(long *)(unaff_x28 + 0x20) == 0) ||
       (lVar10 = *(long *)(*(long *)(unaff_x28 + 0x20) + 0x40), lVar10 == 0)) goto LAB_06cea5d4;
    FUN_06ceb338(&stack0x00000058,lVar10,unaff_w24,unaff_w26 & 1);
    in_stack_00000098 = in_stack_00000060;
    in_stack_00000090 = in_stack_00000058;
    in_stack_000000a0 = in_stack_00000068;
    FUN_06bb33bc(in_stack_000000b0._4_4_ != 0,0);
    FUN_06bb33bc(in_stack_00000090._4_4_ != 0,0);
  }
  puVar5 = Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemListID__;
  puVar4 = Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemId__;
  iVar3 = in_stack_000000b0._4_4_;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06bb34ec(iVar3 == unaff_w23,*(undefined8 *)puVar4,0);
  FUN_06bb34ec(in_stack_00000090._4_4_ == unaff_w24,*(undefined8 *)puVar5,0);
  if ((in_stack_000000b0._4_4_ != unaff_w23) || (in_stack_00000090._4_4_ != unaff_w24)) {
    if (in_stack_000000b8 != 0) {
      if ((unaff_x28 == 0) || (*(long *)(unaff_x28 + 0x18) == 0)) goto LAB_06cea5d4;
      lVar10 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x40);
      in_stack_00000078 = in_stack_000000b8;
      in_stack_00000070 = in_stack_000000b0;
      in_stack_00000080 = in_stack_000000c0;
      if (lVar10 == 0) goto LAB_06cea5d4;
      in_stack_00000048 = in_stack_000000b8;
      in_stack_00000040 = in_stack_000000b0;
      in_stack_00000050 = in_stack_000000c0;
      FUN_06ceb464(lVar10,&stack0x00000040);
    }
    if (in_stack_00000098 != 0) {
      if ((unaff_x28 == 0) || (*(long *)(unaff_x28 + 0x18) == 0)) goto LAB_06cea5d4;
      lVar10 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x40);
      in_stack_00000078 = in_stack_00000098;
      in_stack_00000070 = in_stack_00000090;
      in_stack_00000080 = in_stack_000000a0;
      if (lVar10 == 0) goto LAB_06cea5d4;
      in_stack_00000028 = in_stack_00000098;
      in_stack_00000020 = in_stack_00000090;
      in_stack_00000030 = in_stack_000000a0;
      FUN_06ceb464(lVar10,&stack0x00000020);
    }
    unaff_w23 = 0;
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000b0 = 0;
  }
  if ((unaff_x28 != 0) && (*(long *)(unaff_x28 + 0x18) != 0)) {
    FUN_04ef0f78(*(long *)(unaff_x28 + 0x18),in_stack_000000b0 & 0xffffffff,unaff_w23,
                 *(undefined8 *)
                  Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory__);
    if (*(long *)(unaff_x28 + 0x20) != 0) {
      System_Collections_Generic_Dictionary<HandExpressionName,_NativeArray<XRHandJoint>>__System_Collections_Generic_IDictionary<TKey,TValue>_get_Values
                (*(long *)(unaff_x28 + 0x20),in_stack_00000090 & 0xffffffff,in_stack_00000090._4_4_,
                 *(undefined8 *)
                  Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory2__);
      lVar10 = *(long *)(unaff_x28 + 0x18);
      if (lVar10 != 0) {
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_046237b8(&stack0x00000070,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28),
                     in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                     *(undefined8 *)
                      Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory3__);
        unaff_x29[1] = in_stack_00000078;
        *unaff_x29 = in_stack_00000070;
        lVar10 = *(long *)(unaff_x28 + 0x20);
        if (lVar10 != 0) {
          in_stack_00000058 = 0;
          in_stack_00000060 = 0;
          FUN_046217d8(&stack0x00000058,*(undefined8 *)(lVar10 + 0x20),
                       *(undefined8 *)(lVar10 + 0x28),in_stack_00000090 & 0xffffffff,
                       in_stack_00000090._4_4_,
                       *(undefined8 *)
                        Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory4__);
          unaff_x22[1] = in_stack_00000060;
          *unaff_x22 = in_stack_00000058;
          if (unaff_x19 != 0) {
            *(long *)(unaff_x19 + 0x50) = unaff_x28;
            thunk_FUN_0333a630((long *)(unaff_x19 + 0x50),unaff_x28);
            *(undefined8 *)(unaff_x19 + 0x28) = in_stack_000000c0;
            *(ulong *)(unaff_x19 + 0x20) = in_stack_000000b8;
            *(ulong *)(unaff_x19 + 0x18) = in_stack_000000b0;
            thunk_FUN_0333a630(unaff_x19 + 0x20,0);
            *(undefined8 *)(unaff_x19 + 0x40) = in_stack_000000a0;
            *(ulong *)(unaff_x19 + 0x38) = in_stack_00000098;
            *(ulong *)(unaff_x19 + 0x30) = in_stack_00000090;
            thunk_FUN_0333a630(unaff_x19 + 0x38,0);
            *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x20 + 0x60);
            return;
          }
        }
      }
    }
  }
LAB_06cea5d4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


