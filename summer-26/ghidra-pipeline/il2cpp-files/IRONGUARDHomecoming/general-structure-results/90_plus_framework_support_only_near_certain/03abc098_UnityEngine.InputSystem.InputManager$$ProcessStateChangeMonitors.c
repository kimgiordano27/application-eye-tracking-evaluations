/*
FUNCTION_NAME: UnityEngine.InputSystem.InputManager$$ProcessStateChangeMonitors
ENTRY_POINT: 03abc098
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03abc1a4) */
/* WARNING: Removing unreachable block (ram,0x03abc23c) */

void UnityEngine_InputSystem_InputManager__ProcessStateChangeMonitors(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
code_r0x03abc098:
  plVar3 = (long *)(*(code *)*param_1)(unaff_x20,param_1[1]);
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    lVar5 = *unaff_x23;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if ((bVar1 <= *(byte *)(lVar7 + 0x130)) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) == lVar5)) {
      if (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar3 = (long *)0x0;
      }
      if (plVar3[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = FUN_03584c60(plVar3[2],*unaff_x28,0x18,0);
      uVar4 = FUN_01f08890(*unaff_x29,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_034b2bf4(lVar5,0,uVar4,0);
      do {
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03abc03c;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(unaff_x20,*unaff_x26,0);
LAB_03abc03c:
        uVar6 = (*(code *)*puVar2)(unaff_x20,puVar2[1]);
        if ((uVar6 & 1) != 0) goto code_r0x03abc04c;
        if (unaff_x20 != (long *)0x0) {
          lVar5 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_03abc18c;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)
                   FUN_01ecb238(unaff_x20,
                                *(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_03abc18c:
          (*(code *)*puVar2)(unaff_x20,puVar2[1]);
        }
        unaff_x24 = unaff_x24 + 1;
        if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x24) {
          return;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar4 = FUN_034b9218(*(undefined8 *)(unaff_x19 + unaff_x24 * 8 + 0x20),0);
        lVar5 = *unaff_x25;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar5);
          lVar5 = *unaff_x25;
        }
        lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar7 == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar5);
            lVar5 = *unaff_x25;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_9005);
          FUN_02e6c0a0(lVar7,uVar9,*(undefined8 *)StringLiteral_9027,0);
          plVar3 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
          *plVar3 = lVar7;
          thunk_FUN_01f51358(plVar3,lVar7);
        }
        plVar3 = (long *)FUN_0230b6f4(uVar4,lVar7,*(undefined8 *)StringLiteral_9025);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03abbfdc;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                              ,0);
LAB_03abbfdc:
        unaff_x20 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x03abc04c:
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        param_1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto code_r0x03abc098;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  param_1 = (undefined8 *)FUN_01ecb238(unaff_x20,*unaff_x27,0);
  goto code_r0x03abc098;
}


