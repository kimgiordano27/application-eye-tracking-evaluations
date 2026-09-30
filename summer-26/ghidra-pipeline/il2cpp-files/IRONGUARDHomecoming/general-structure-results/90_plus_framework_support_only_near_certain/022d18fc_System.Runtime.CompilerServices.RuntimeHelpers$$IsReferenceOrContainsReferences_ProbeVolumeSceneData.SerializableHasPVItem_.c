/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<ProbeVolumeSceneData.SerializableHasPVItem>
ENTRY_POINT: 022d18fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d1c1c) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ProbeVolumeSceneData_SerializableHasPVItem>
               (long param_1,ulong param_2,ulong param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined4 unaff_w19;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  char unaff_w26;
  int unaff_w28;
  int unaff_w29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  
  while (lVar2 = (**(code **)(param_1 + 0x418))
                           (param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x420)), lVar2 == 0) {
    do {
      do {
        unaff_w28 = unaff_w28 + -1;
        if (unaff_w28 < 0) {
          unaff_x25 = (long *)0x0;
          goto LAB_022d1914;
        }
        param_4 = (long *)FUN_030f28e4();
      } while (param_4 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
    } while ((((*(byte *)(*param_4 + 0x130) < bVar1) ||
              (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) ||
             ((unaff_w26 != '\0' && ((int)param_4[0x3b] != unaff_w29)))) ||
            (uVar5 = FUN_041f75ac(param_4,&stack0x00000028,&stack0x00000020,0,0), (uVar5 & 1) == 0))
    ;
    param_1 = *param_4;
    param_2 = (ulong)uStack0000000000000028;
    param_3 = (ulong)uStack000000000000002c;
    unaff_x25 = param_4;
  }
LAB_022d1914:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar3 == (long *)0x0) {
LAB_022d1988:
    plVar3 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if (*(byte *)(*plVar3 + 0x130) < bVar1) goto LAB_022d1988;
    if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24) {
      plVar3 = (long *)0x0;
    }
  }
  if (plVar3 == unaff_x25) {
    if (unaff_x25 == (long *)0x0) goto LAB_022d1ae0;
  }
  else {
    if (plVar3 != (long *)0x0) {
      FUN_041f7574(plVar3,0);
      FUN_041f76d0(plVar3,unaff_w19,0);
    }
    if (unaff_x25 == (long *)0x0) {
LAB_022d1ae0:
      if ((in_stack_00000008 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000010,0,0);
      return;
    }
    FUN_041f7788(uStack0000000000000028,uStack000000000000002c,unaff_x25,unaff_w19,0);
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)(**(code **)(unaff_x23 + 0x18))
                             (uStack0000000000000028,uStack000000000000002c,0,uStack0000000000000020
                              ,uStack0000000000000024,0,*(undefined8 *)(unaff_x23 + 0x40));
  plVar4 = (long *)(**(code **)(*unaff_x25 + 0x398))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x3a0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar4 + 0x198))(plVar4,plVar3,*(undefined8 *)(*plVar4 + 0x1a0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = FUN_041d84e4(plVar3,0);
  if ((uVar5 & 1) != 0) {
    FUN_041c73ec(in_stack_00000010,unaff_x25,0);
  }
  lVar2 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar2 == lVar6) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19,unaff_x25,0);
  }
  else {
    lVar2 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar2 == lVar6) {
      if (*plVar3 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar3);
      }
      if ((int)plVar3[0x16] == 0) {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar2 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar7 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_022d1bb8;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d1bb8:
  (*(code *)*puVar7)(plVar3,puVar7[1]);
  return;
}


