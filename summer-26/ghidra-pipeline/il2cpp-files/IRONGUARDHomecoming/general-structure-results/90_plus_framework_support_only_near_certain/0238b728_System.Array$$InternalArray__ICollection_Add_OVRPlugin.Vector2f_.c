/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector2f>
ENTRY_POINT: 0238b728
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector2f>
                 (long *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar10;
  long unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x0238b728:
  puVar6 = (undefined8 *)FUN_01ecb238(param_1,param_2,param_3);
  param_1 = unaff_x22;
  do {
    (*(code *)*puVar6)(param_1,puVar6[1]);
    do {
      if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(unaff_x24);
      }
      if ((unaff_w25 != 9) && (unaff_w25 != 0)) {
        return unaff_x23;
      }
      if (unaff_x21 == (long *)0x0) {
LAB_0238b7f0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x888))
                                    (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x890));
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03583338(unaff_x21,0,0);
      if ((uVar3 & 1) == 0) {
        return (long *)0x0;
      }
      if (unaff_x20 == (long *)0x0) goto LAB_0238b7f0;
      lVar7 = **(long **)(unaff_x19 + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0238b524;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0238b524:
      param_1 = (long *)(*(code *)*puVar6)();
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *param_1;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0238b584;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x27,0);
LAB_0238b584:
        uVar3 = (*(code *)*puVar6)(param_1,puVar6[1]);
        if ((uVar3 & 1) == 0) {
          unaff_w25 = 9;
          goto joined_r0x0238b6e4;
        }
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *param_1;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0238b5f8;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(param_1,lVar7,0);
LAB_0238b5f8:
        plVar4 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
        if (plVar4 == (long *)0x0) {
LAB_0238b624:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*unaff_x28 + 0x130);
          if (*(byte *)(*plVar4 + 0x130) < bVar1) goto LAB_0238b624;
          plVar10 = plVar4;
          if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28) {
            plVar10 = (long *)0x0;
          }
        }
        uVar3 = System_Console__SetOut(plVar10,0,0);
        if ((uVar3 & 1) == 0) {
          uVar2 = 0;
        }
        else {
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar2 = FUN_03eed12c(plVar10,unaff_x21,0);
          uVar2 = uVar2 & 1;
        }
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03eece10(plVar4,uVar2,0);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_03582560(uVar5,unaff_x21,0);
      } while ((uVar3 & 1) == 0);
      unaff_w25 = 8;
      unaff_x23 = plVar4;
joined_r0x0238b6e4:
      unaff_x24 = 0;
    } while (param_1 == (long *)0x0);
    unaff_x24 = 0;
    lVar7 = *param_1;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    param_2 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (uVar3 == 0) break;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
      if (uVar3 == 0) goto LAB_0238b720;
    }
    puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
  } while( true );
LAB_0238b720:
  param_3 = 0;
  unaff_x22 = param_1;
  goto code_r0x0238b728;
}


