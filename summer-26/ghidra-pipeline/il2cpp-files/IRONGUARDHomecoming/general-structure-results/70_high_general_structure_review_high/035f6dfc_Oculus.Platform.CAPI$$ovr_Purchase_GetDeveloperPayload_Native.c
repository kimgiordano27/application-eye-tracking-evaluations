/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Purchase_GetDeveloperPayload_Native
ENTRY_POINT: 035f6dfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined4 Oculus_Platform_CAPI__ovr_Purchase_GetDeveloperPayload_Native(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  
  uVar1 = FUN_040766fc(param_1,0);
  if (3 < *(uint *)(unaff_x23 + -0x18)) {
    *(undefined8 *)(unaff_x21 + 0x38) = uVar1;
    thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x38),uVar1);
    if (4 < *(uint *)(unaff_x21 + 0x18)) {
      *(undefined8 *)(unaff_x21 + 0x40) =
           *(undefined8 *)Method_Unity_VisualScripting_ExclusiveOrHandler_<>c_<_ctor>b__0_17__;
      thunk_FUN_01f51358();
      if (*(long *)(unaff_x22 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000008._4_4_ = FUN_04034428(*(long *)(unaff_x22 + 0x30),0);
      uVar1 = FUN_0357d06c((long)&stack0x00000008 + 4,0);
      if (5 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x48) = uVar1;
        thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x48),uVar1);
        if (6 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined8 *)(unaff_x21 + 0x50) =
               *(undefined8 *)Method_Unity_VisualScripting_ExclusiveOrHandler_<>c_<_ctor>b__0_18__;
          thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x50));
          uVar1 = FUN_0357d06c((long)&stack0x00000048 + 4,0);
          if (7 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined8 *)(unaff_x21 + 0x58) = uVar1;
            thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x58),uVar1);
            if (8 < *(uint *)(unaff_x21 + 0x18)) {
              *(undefined8 *)(unaff_x21 + 0x60) =
                   *(undefined8 *)
                    Method_Unity_VisualScripting_ExclusiveOrHandler_<>c_<_ctor>b__0_19__;
              thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x60));
              in_stack_00000008._4_4_ = FUN_0407a2ec(0);
              uVar1 = FUN_0357d06c((long)&stack0x00000008 + 4,0);
              if (9 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined8 *)(unaff_x21 + 0x68) = uVar1;
                thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x68),uVar1);
                if (10 < *(uint *)(unaff_x21 + 0x18)) {
                  *(undefined8 *)(unaff_x21 + 0x70) =
                       *(undefined8 *)
                        Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__;
                  thunk_FUN_01f51358();
                  uVar1 = FUN_0340efe8();
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                      == 0) {
                    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__
                                      );
                  }
                  FUN_0403ea2c(uVar1,0);
                  if (fStack000000000000004c <= 0.0) {
                    FUN_04034704();
                  }
                  else {
                    FUN_04034744(fStack000000000000004c);
                  }
                  return uStack0000000000000048;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


