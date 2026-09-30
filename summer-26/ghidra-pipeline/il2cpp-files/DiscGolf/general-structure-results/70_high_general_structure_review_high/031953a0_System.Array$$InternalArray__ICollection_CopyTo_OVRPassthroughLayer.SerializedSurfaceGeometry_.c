/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 031953a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  int in_stack_00000028;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar3 = thunk_FUN_02df8d3c(*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)*puVar2);
  iVar1 = in_stack_00000028;
  if ((uVar3 & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_PTR_066567d8,0);
  }
  *(undefined8 *)(&stack0x00000020 + (long)in_stack_00000028 * 8) = *puVar2;
  in_stack_00000028 = in_stack_00000028 + 1;
  __cxa_end_catch();
  uVar4 = thunk_FUN_02dfd288(PTR_DAT_069fc180);
  lVar5 = FUN_02d966a4(uVar4,6);
  if (lVar5 != 0) {
    uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0c9d8);
    FUN_0297c314(lVar5,uVar4);
    uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0c9d8);
    FUN_02978e90(lVar5,0,uVar4);
    if (unaff_x26 != 0) {
      uVar4 = thunk_FUN_06354368();
      FUN_0297c314(lVar5,uVar4);
      FUN_02978e90(lVar5,1,uVar4);
      uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0c9e0);
      FUN_0297c314(lVar5,uVar4);
      uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0c9e0);
      FUN_02978e90(lVar5,2,uVar4);
      if (*(long *)(unaff_x26 + 0x2d8) != 0) {
        uVar4 = thunk_FUN_06354368(*(long *)(unaff_x26 + 0x2d8),0);
        FUN_0297c314(lVar5,uVar4);
        FUN_02978e90(lVar5,3,uVar4);
        uVar4 = thunk_FUN_02dfd288();
        FUN_0297c314(lVar5,uVar4);
        uVar4 = thunk_FUN_02dfd288();
        FUN_02978e90(lVar5,4,uVar4);
        uStack000000000000001c = *(undefined4 *)(unaff_x26 + 0x2e8);
        uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x29 + 0x48),&stack0x0000001c);
        FUN_0297c314(lVar5,uVar4);
        FUN_02978e90(lVar5,5,uVar4);
        uVar4 = System_Globalization_NumberFormatInfo__VerifyWritable(lVar5,0);
        lVar5 = thunk_FUN_02dfd288();
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630b598(uVar4,0);
        in_stack_00000028 = iVar1;
        while( true ) {
          do {
            do {
              uVar4 = *(undefined8 *)(unaff_x26 + 0x2e0);
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar3 = FUN_0634eb94(uVar4,0,0);
              if ((uVar3 & 1) != 0) {
                if (*(long *)(unaff_x26 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar5 = *(long *)(*(long *)(unaff_x26 + 0x2e0) + 0x20);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(int *)(unaff_x26 + 0x2f0) < *(int *)(lVar5 + 0x18)) {
                  lVar5 = FUN_0400ff1c(lVar5,*(int *)(unaff_x26 + 0x2f0),*unaff_x21);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  *(long *)(lVar5 + 0x138) = unaff_x26;
                  LeanTween__value(lVar5 + 0x138,unaff_x26);
                  if (*(long *)(unaff_x26 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar5 = *(long *)(*(long *)(unaff_x26 + 0x2e0) + 0x20);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar5 = FUN_0400ff1c(lVar5,*(undefined4 *)(unaff_x26 + 0x2f0),*unaff_x21);
                  if (*(long *)(unaff_x26 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  *(int *)(lVar5 + 0x140) = *(int *)(*(long *)(unaff_x26 + 0x60) + 0x18) + -1;
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
              uVar4 = *(undefined8 *)(unaff_x26 + 0x2d8);
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar3 = FUN_0634eb94(uVar4,0,0);
            } while ((uVar3 & 1) == 0);
            if (*(long *)(unaff_x26 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar5 = *(long *)(*(long *)(unaff_x26 + 0x2d8) + 0x20);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
          } while (*(int *)(lVar5 + 0x18) <= *(int *)(unaff_x26 + 0x2e8));
          lVar5 = FUN_0400ff1c(lVar5,*(int *)(unaff_x26 + 0x2e8),*unaff_x21);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(long *)(lVar5 + 0x138) = unaff_x26;
          LeanTween__value(lVar5 + 0x138,unaff_x26);
          if (*(long *)(unaff_x26 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar5 = *(long *)(*(long *)(unaff_x26 + 0x2d8) + 0x20);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar5 = FUN_0400ff1c(lVar5,*(undefined4 *)(unaff_x26 + 0x2e8),*unaff_x21);
          if (lVar5 == 0) break;
          *(undefined4 *)(lVar5 + 0x140) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


