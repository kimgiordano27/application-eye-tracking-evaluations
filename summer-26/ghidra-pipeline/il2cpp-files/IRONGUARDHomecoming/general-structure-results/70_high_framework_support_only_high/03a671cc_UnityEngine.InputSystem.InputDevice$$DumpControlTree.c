/*
FUNCTION_NAME: UnityEngine.InputSystem.InputDevice$$DumpControlTree
ENTRY_POINT: 03a671cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a673e0) */
/* WARNING: Removing unreachable block (ram,0x03a67468) */

undefined4
UnityEngine_InputSystem_InputDevice__DumpControlTree(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  undefined4 uVar8;
  long *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03a671f8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03a671f8:
        uVar4 = (*(code *)*puVar3)();
        if ((uVar4 & 1) == 0) {
          uVar8 = 1;
LAB_03a6735c:
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          plVar5 = (long *)thunk_FUN_01f116d0();
          if (plVar5 == (long *)0x0) goto LAB_03a673d4;
          lVar6 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 == 0) goto LAB_03a673ac;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03a67394;
        }
        lVar6 = *unaff_x22;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_03a67258;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03a67258:
        plVar5 = (long *)(*(code *)*puVar3)();
        if ((plVar5 != (long *)0x0) && (*plVar5 != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar5);
        }
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *unaff_x23;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03a672cc;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03a672cc:
        iVar2 = (*(code *)*puVar3)();
        if (iVar2 == 0) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((int)plVar5[4] <= *(int *)(unaff_x20 + 0x20)) {
            plVar5 = *(long **)(unaff_x19 + 0x18);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*plVar5 + 0x2f8))(plVar5,unaff_w21);
          }
          uVar8 = 0;
          goto LAB_03a6735c;
        }
        unaff_w21 = unaff_w21 + 1;
        param_1 = *unaff_x22;
        param_3 = *unaff_x26;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
LAB_03a67394:
    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03a673c8;
    }
  }
LAB_03a673ac:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03a673c8:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
LAB_03a673d4:
  plVar5 = *(long **)(unaff_x19 + 0x18);
  if (plVar5 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
    if (unaff_w21 == iVar2) {
      if (*(long **)(unaff_x19 + 0x18) == (long *)0x0) goto LAB_03a67460;
      (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x308))();
    }
    if (unaff_x20 != 0) {
      if (*(int *)(unaff_x20 + 0x88) != 1) {
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
      }
      return uVar8;
    }
  }
LAB_03a67460:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


