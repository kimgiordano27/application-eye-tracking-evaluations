/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Quatf>
ENTRY_POINT: 031955c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Quatf>(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  undefined4 in_stack_00000010;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000028;
  
  uVar2 = thunk_FUN_02dfd288();
  lVar3 = FUN_02d966a4(uVar2,6);
  if (lVar3 != 0) {
    uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0c9d8);
    FUN_0297c314(lVar3,uVar2);
    uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0c9d8);
    FUN_02978e90(lVar3,0,uVar2);
    if (unaff_x26 != 0) {
      uVar2 = thunk_FUN_06354368();
      FUN_0297c314(lVar3,uVar2);
      FUN_02978e90(lVar3,1,uVar2);
      uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0c9e0);
      FUN_0297c314(lVar3,uVar2);
      uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0c9e0);
      FUN_02978e90(lVar3,2,uVar2);
      if (*(long *)(unaff_x26 + 0x2d8) != 0) {
        uVar2 = thunk_FUN_06354368(*(long *)(unaff_x26 + 0x2d8),0);
        FUN_0297c314(lVar3,uVar2);
        FUN_02978e90(lVar3,3,uVar2);
        uVar2 = thunk_FUN_02dfd288();
        FUN_0297c314(lVar3,uVar2);
        uVar2 = thunk_FUN_02dfd288();
        FUN_02978e90(lVar3,4,uVar2);
        uStack000000000000001c = *(undefined4 *)(unaff_x26 + 0x2e8);
        uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x29 + 0x48),&stack0x0000001c);
        FUN_0297c314(lVar3,uVar2);
        FUN_02978e90(lVar3,5,uVar2);
        uVar2 = System_Globalization_NumberFormatInfo__VerifyWritable(lVar3,0);
        lVar3 = thunk_FUN_02dfd288();
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630b598(uVar2,0);
        in_stack_00000028 = in_stack_00000010;
        while( true ) {
          do {
            do {
              uVar2 = *(undefined8 *)(unaff_x26 + 0x2e0);
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar1 = FUN_0634eb94(uVar2,0,0);
              if ((uVar1 & 1) != 0) {
                if (*(long *)(unaff_x26 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar3 = *(long *)(*(long *)(unaff_x26 + 0x2e0) + 0x20);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(int *)(unaff_x26 + 0x2f0) < *(int *)(lVar3 + 0x18)) {
                  lVar3 = FUN_0400ff1c(lVar3,*(int *)(unaff_x26 + 0x2f0),*unaff_x21);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  *(long *)(lVar3 + 0x138) = unaff_x26;
                  LeanTween__value(lVar3 + 0x138,unaff_x26);
                  if (*(long *)(unaff_x26 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar3 = *(long *)(*(long *)(unaff_x26 + 0x2e0) + 0x20);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar3 = FUN_0400ff1c(lVar3,*(undefined4 *)(unaff_x26 + 0x2f0),*unaff_x21);
                  if (*(long *)(unaff_x26 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  *(int *)(lVar3 + 0x140) = *(int *)(*(long *)(unaff_x26 + 0x60) + 0x18) + -1;
                }
              }
              unaff_x20 = unaff_x20 + 1;
              if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
                return;
              }
              if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              unaff_x26 = *(long *)(unaff_x22 + unaff_x20 * 8);
              if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar2 = *(undefined8 *)(unaff_x26 + 0x2d8);
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar1 = FUN_0634eb94(uVar2,0,0);
            } while ((uVar1 & 1) == 0);
            if (*(long *)(unaff_x26 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar3 = *(long *)(*(long *)(unaff_x26 + 0x2d8) + 0x20);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
          } while (*(int *)(lVar3 + 0x18) <= *(int *)(unaff_x26 + 0x2e8));
          lVar3 = FUN_0400ff1c(lVar3,*(int *)(unaff_x26 + 0x2e8),*unaff_x21);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(long *)(lVar3 + 0x138) = unaff_x26;
          LeanTween__value(lVar3 + 0x138,unaff_x26);
          if (*(long *)(unaff_x26 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar3 = *(long *)(*(long *)(unaff_x26 + 0x2d8) + 0x20);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar3 = FUN_0400ff1c(lVar3,*(undefined4 *)(unaff_x26 + 0x2e8),*unaff_x21);
          if (lVar3 == 0) break;
          *(undefined4 *)(lVar3 + 0x140) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


