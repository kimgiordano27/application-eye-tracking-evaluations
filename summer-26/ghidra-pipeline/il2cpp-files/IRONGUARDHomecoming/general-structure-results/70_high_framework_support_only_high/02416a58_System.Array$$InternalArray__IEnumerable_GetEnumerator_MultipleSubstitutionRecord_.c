/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<MultipleSubstitutionRecord>
ENTRY_POINT: 02416a58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long System_Array__InternalArray__IEnumerable_GetEnumerator<MultipleSubstitutionRecord>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x02416a58:
  if (!(bool)in_ZR) goto LAB_02416a44;
LAB_02416a5c:
  puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,param_3,0);
  do {
    (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    do {
      if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(unaff_x26);
      }
      if (((unaff_w22 != 6) && (unaff_w22 != 0)) || ((unaff_w24 & 1) != 0)) {
        return unaff_x27;
      }
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0241689c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0241689c:
      unaff_x25 = (long *)(*(code *)*puVar2)();
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar3 = *unaff_x25;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x29) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_024168fc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x29,0);
LAB_024168fc:
        uVar5 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
        if ((uVar5 & 1) == 0) {
          unaff_w24 = 1;
          goto joined_r0x02416a20;
        }
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar4 = *unaff_x25;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02416970;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,lVar3,0);
LAB_02416970:
        uVar1 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
        lVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),uVar1,*(undefined8 *)(unaff_x20 + 0x28)
                          );
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = FUN_034127bc(lVar3,0);
        uVar5 = thunk_FUN_0340e318(uVar1,unaff_x23,0);
      } while ((uVar5 & 1) == 0);
      in_stack_00000008._4_4_ = unaff_w28;
      uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,(long)&stack0x00000008 + 4);
      unaff_x27 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__
                               ,in_stack_00000000,uVar1,0);
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x23 = FUN_034127bc(unaff_x27,0);
      unaff_w24 = 0;
      unaff_w28 = unaff_w28 + 1;
joined_r0x02416a20:
      unaff_w22 = 6;
      unaff_x26 = 0;
    } while (unaff_x25 == (long *)0x0);
    unaff_x26 = 0;
    unaff_w22 = 6;
    param_1 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (in_x9 == 0) goto LAB_02416a5c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02416a44:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x02416a58;
    }
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


