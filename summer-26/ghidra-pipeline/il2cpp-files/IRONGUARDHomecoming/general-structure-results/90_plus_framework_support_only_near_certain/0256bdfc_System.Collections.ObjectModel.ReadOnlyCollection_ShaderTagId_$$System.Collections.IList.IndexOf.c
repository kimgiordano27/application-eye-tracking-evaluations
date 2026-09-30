/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<ShaderTagId>$$System.Collections.IList.IndexOf
ENTRY_POINT: 0256bdfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Collections_ObjectModel_ReadOnlyCollection<ShaderTagId>__System_Collections_IList_IndexOf
          (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *plVar7;
  long in_stack_00000020;
  long in_stack_00000028;
  
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_1) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0256be48;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0256be48:
  uVar2 = (*(code *)*puVar1)();
  *(undefined8 *)(in_stack_00000028 + 0x48) = uVar2;
  thunk_FUN_01f51358();
  plVar7 = *(long **)(in_stack_00000028 + 0x48);
  *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffd;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0256becc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_0256becc:
  uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
  if ((uVar5 & 1) == 0) {
    FUN_0256c220();
    *(undefined8 *)(in_stack_00000028 + 0x48) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x48),0);
    plVar7 = *(long **)(in_stack_00000028 + 0x38);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0256c010;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0256c010:
    uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    *(undefined8 *)(in_stack_00000028 + 0x48) = uVar2;
    thunk_FUN_01f51358();
    plVar7 = *(long **)(in_stack_00000028 + 0x48);
    *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffc;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0256c094;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0256c094:
    uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      FUN_0256c2d0();
      *(undefined8 *)(in_stack_00000028 + 0x48) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x48),0);
      uVar2 = 0;
    }
    else {
      plVar7 = *(long **)(in_stack_00000028 + 0x48);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0256c13c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0256c13c:
      uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      *(undefined8 *)(in_stack_00000028 + 0x18) = uVar2;
      thunk_FUN_01f51358();
      uVar2 = 1;
      *(undefined4 *)(in_stack_00000028 + 0x10) = 2;
    }
  }
  else {
    plVar7 = *(long **)(in_stack_00000028 + 0x48);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0256bfd8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0256bfd8:
    uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    *(undefined8 *)(in_stack_00000028 + 0x18) = uVar2;
    thunk_FUN_01f51358();
    uVar2 = 1;
    *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
  }
  return uVar2;
}


