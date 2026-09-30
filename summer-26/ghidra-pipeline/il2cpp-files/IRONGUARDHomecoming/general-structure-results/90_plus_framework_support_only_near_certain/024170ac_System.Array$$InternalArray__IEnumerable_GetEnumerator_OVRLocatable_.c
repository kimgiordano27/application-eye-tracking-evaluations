/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRLocatable>
ENTRY_POINT: 024170ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_14;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


long System_Array__InternalArray__IEnumerable_GetEnumerator<OVRLocatable>
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long in_x12;
  int in_w14;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x21;
  uint unaff_w22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  undefined8 uVar9;
  long *unaff_x28;
  long *plVar10;
  long unaff_x29;
  
code_r0x024170ac:
  puVar2 = (undefined8 *)FUN_01ecb238(param_1,param_2,param_3);
  param_1 = unaff_x28;
  do {
    (*(code *)*puVar2)(param_1,puVar2[1]);
    uVar8 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x28);
    do {
      if (in_x12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(in_x12);
      }
      plVar10 = *(long **)(unaff_x29 + -0x30);
      if (((in_w14 != 6) && (in_w14 != 0)) || ((unaff_w22 & 1) != 0)) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return unaff_x21;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02416e74;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar10,lVar3,0);
LAB_02416e74:
      param_1 = (long *)(*(code *)*puVar2)(plVar10,puVar2[1]);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar3 = *param_1;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02416edc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(param_1,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_02416edc:
        uVar6 = (*(code *)*puVar2)(param_1,puVar2[1]);
        if ((uVar6 & 1) == 0) {
          unaff_w22 = 1;
          plVar10 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
          ;
          goto joined_r0x02417064;
        }
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar5 = *param_1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              lVar3 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
              goto LAB_02416f50;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        lVar3 = FUN_01ecb238(param_1,lVar3,0);
LAB_02416f50:
        *(void **)(unaff_x29 + -0x18) = unaff_x24;
        lVar3 = *(long *)(lVar3 + 8);
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,param_1,unaff_x29 + -0x18);
        memcpy(unaff_x26,unaff_x24,unaff_x23);
        memcpy(unaff_x25,unaff_x26,unaff_x23);
        puVar2 = unaff_x25;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x28)) {
          puVar2 = (undefined8 *)*unaff_x25;
        }
        puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
        uVar1 = *puVar4;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
        (*(code *)puVar4[2])(uVar1,puVar4,uVar8,unaff_x29 + -0x18,unaff_x29 + -0x10);
        if (*(long *)(unaff_x29 + -0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = FUN_034127bc(*(long *)(unaff_x29 + -0x10),0);
        uVar6 = thunk_FUN_0340e318(uVar1,uVar9,0);
      } while ((uVar6 & 1) == 0);
      uVar9 = *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x1c);
      uVar9 = thunk_FUN_01f113fc(uVar9,unaff_x29 + -0x10);
      unaff_x21 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__
                               ,*(undefined8 *)(unaff_x29 + -0x40),uVar9,0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = FUN_034127bc(unaff_x21,0);
      unaff_w22 = 0;
      *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
      plVar10 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
joined_r0x02417064:
      in_w14 = 6;
      in_x12 = 0;
      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__ =
           (undefined *)plVar10;
    } while (param_1 == (long *)0x0);
    in_w14 = 6;
    in_x12 = 0;
    lVar3 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar9;
    param_2 = *plVar10;
    if (uVar6 == 0) break;
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != param_2) {
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
      if (uVar6 == 0) goto LAB_024170a4;
    }
    in_w14 = 6;
    in_x12 = 0;
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
LAB_024170a4:
  param_3 = 0;
  unaff_x28 = param_1;
  goto code_r0x024170ac;
}


