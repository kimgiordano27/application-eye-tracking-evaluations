/*
FUNCTION_NAME: FUN_038fb4f4
ENTRY_POINT: 038fb4f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_038fb4f4(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_048381b9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Add<CommandBuilder_BoxData>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_2868);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(StringLiteral_3244);
    thunk_FUN_01efb3a4(StringLiteral_3245);
    DAT_048381b9 = 1;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_0392f7cc(uVar4,0);
    puVar1 = StringLiteral_2868;
    lVar5 = *(long *)StringLiteral_2868;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    plVar10 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = (**(code **)(*plVar10 + 0x178))
                      (plVar10,*(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(*plVar10 + 0x180));
    uVar4 = FUN_0340eee0(uVar4,*(undefined8 *)StringLiteral_3245,uVar3,
                         *(undefined8 *)StringLiteral_3244,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_01f51358();
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  case 1:
    plVar10 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (**(code **)(*plVar10 + 0x3c8))(plVar10,*(undefined8 *)(*plVar10 + 0x3d0));
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    plVar10 = *(long **)(param_1 + 0x28);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = (**(code **)(*plVar10 + 0x478))(plVar10,*(undefined8 *)(*plVar10 + 0x480));
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    thunk_FUN_01f51358();
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    goto LAB_038fb888;
  case 2:
    plVar10 = *(long **)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (**(code **)(*plVar10 + 0x3c8))(plVar10,*(undefined8 *)(*plVar10 + 0x3d0));
    if ((uVar7 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      if (*(int *)(*(long *)Method_Drawing_CommandBuilder_Add<CommandBuilder_BoxData>__ + 0xe0) == 0
         ) {
        thunk_FUN_01ee6d7c();
      }
      plVar10 = (long *)FUN_038fa0dc(uVar4);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_038fb768;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,
                            0);
LAB_038fb768:
      uVar4 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      *(undefined8 *)(param_1 + 0x50) = uVar4;
      thunk_FUN_01f51358();
      goto switchD_038fb5a0_caseD_3;
    }
    break;
  case 3:
switchD_038fb5a0_caseD_3:
    plVar10 = *(long **)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_038fb7ec;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_038fb7ec:
    uVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((uVar7 & 1) != 0) {
      plVar10 = *(long **)(param_1 + 0x50);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Collections_Generic_Stack<Tween>_Pop__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_038fb990;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)Method_System_Collections_Generic_Stack<Tween>_Pop__,0)
      ;
LAB_038fb990:
      uVar4 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_01f51358();
      uVar6 = 3;
      goto LAB_038fb9b4;
    }
    FUN_038fbabc();
    *(undefined8 *)(param_1 + 0x50) = 0;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50),0);
    break;
  default:
    goto switchD_038fb5a0_default;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48),0);
  uVar8 = *(int *)(param_1 + 0x40) + 1;
  *(uint *)(param_1 + 0x40) = uVar8;
LAB_038fb888:
  plVar10 = (long *)(param_1 + 0x38);
  lVar5 = *plVar10;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar8) {
    *plVar10 = 0;
    thunk_FUN_01f51358(plVar10,0);
switchD_038fb5a0_default:
    return 0;
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48));
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_0392f7cc(uVar4,0);
  puVar1 = StringLiteral_2868;
  lVar5 = *(long *)StringLiteral_2868;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar1;
  }
  plVar10 = (long *)**(long **)(lVar5 + 0xb8);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = (**(code **)(*plVar10 + 0x178))
                    (plVar10,*(undefined8 *)(param_1 + 0x48),0,*(undefined8 *)(*plVar10 + 0x180));
  uVar4 = FUN_0340eee0(uVar4,*(undefined8 *)StringLiteral_3245,uVar3,
                       *(undefined8 *)StringLiteral_3244,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_01f51358();
  uVar6 = 2;
LAB_038fb9b4:
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return 1;
}


