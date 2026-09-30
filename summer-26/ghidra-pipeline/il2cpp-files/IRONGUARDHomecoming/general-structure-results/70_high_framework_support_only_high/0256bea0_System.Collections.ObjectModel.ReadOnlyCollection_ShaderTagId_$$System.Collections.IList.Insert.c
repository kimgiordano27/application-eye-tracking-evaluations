/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<ShaderTagId>$$System.Collections.IList.Insert
ENTRY_POINT: 0256bea0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_ObjectModel_ReadOnlyCollection<ShaderTagId>__System_Collections_IList_Insert
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long *plVar7;
  long in_stack_00000020;
  long in_stack_00000028;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_01ecb238();
      goto LAB_0256becc;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0256becc:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
    FUN_0256c220();
    *(undefined8 *)(in_stack_00000028 + 0x48) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x48),0);
    plVar7 = *(long **)(in_stack_00000028 + 0x38);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0256c010;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar4,0);
LAB_0256c010:
    uVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    *(undefined8 *)(in_stack_00000028 + 0x48) = uVar3;
    thunk_FUN_01f51358();
    plVar7 = *(long **)(in_stack_00000028 + 0x48);
    *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffc;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0256c094;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0256c094:
    uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      FUN_0256c2d0();
      *(undefined8 *)(in_stack_00000028 + 0x48) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x48),0);
      uVar3 = 0;
    }
    else {
      plVar7 = *(long **)(in_stack_00000028 + 0x48);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar4) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0256c13c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar4,0);
LAB_0256c13c:
      uVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      *(undefined8 *)(in_stack_00000028 + 0x18) = uVar3;
      thunk_FUN_01f51358();
      uVar3 = 1;
      *(undefined4 *)(in_stack_00000028 + 0x10) = 2;
    }
  }
  else {
    plVar7 = *(long **)(in_stack_00000028 + 0x48);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0256bfd8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar4,0);
LAB_0256bfd8:
    uVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    *(undefined8 *)(in_stack_00000028 + 0x18) = uVar3;
    thunk_FUN_01f51358();
    uVar3 = 1;
    *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
  }
  return uVar3;
}


