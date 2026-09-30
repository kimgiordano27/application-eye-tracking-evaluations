/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<ProbeVolumeSceneData.SerializableBoundItem>
ENTRY_POINT: 022d17fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d1c1c) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ProbeVolumeSceneData_SerializableBoundItem>
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long in_x9;
  int *piVar9;
  uint in_w11;
  undefined4 unaff_w19;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  int iVar10;
  undefined8 unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if ((in_w11 < *(byte *)(param_1 + 0x130)) ||
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1)) {
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = FUN_0424f664(0);
    puVar2 = Method_System_Char_ConvertToUtf32__;
    if (lVar3 == 0) goto LAB_022d1c18;
    iVar10 = *(int *)(lVar3 + 0x18) + -1;
    if (iVar10 < 0) {
      unaff_x25 = (long *)0x0;
    }
    else {
      do {
        unaff_x25 = (long *)FUN_030f28e4(lVar3,iVar10,*(undefined8 *)puVar2);
        if (unaff_x25 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((((bVar1 <= *(byte *)(*unaff_x25 + 0x130)) &&
               (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x24)) &&
              (((unaff_x26 & 0xff) == 0 || ((int)unaff_x25[0x3b] == (int)(unaff_x26 >> 0x20))))) &&
             ((uVar6 = FUN_041f75ac(unaff_x25,&stack0x00000028,&stack0x00000020,0,0),
              (uVar6 & 1) != 0 &&
              (lVar7 = (**(code **)(*unaff_x25 + 0x418))
                                 (uStack0000000000000028,uStack000000000000002c,unaff_x25,
                                  *(undefined8 *)(*unaff_x25 + 0x420)), lVar7 != 0))))
          goto LAB_022d194c;
        }
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
      unaff_x25 = (long *)0x0;
    }
  }
  else {
    FUN_041f75ac();
  }
LAB_022d194c:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar4 == (long *)0x0) {
LAB_022d1988:
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) goto LAB_022d1988;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24) {
      plVar4 = (long *)0x0;
    }
  }
  if (plVar4 == unaff_x25) {
    if (unaff_x25 == (long *)0x0) goto LAB_022d1ae0;
  }
  else {
    if (plVar4 != (long *)0x0) {
      FUN_041f7574(plVar4,0);
      FUN_041f76d0(plVar4,unaff_w19,0);
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
  if (unaff_x23 != 0) {
    plVar4 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (uStack0000000000000028,uStack000000000000002c,0,
                                uStack0000000000000020,uStack0000000000000024,0,
                                *(undefined8 *)(unaff_x23 + 0x40),unaff_x29,in_stack_00000018,
                                *(undefined8 *)(unaff_x23 + 0x28));
    plVar5 = (long *)(**(code **)(*unaff_x25 + 0x398))
                               (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x3a0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar5 + 0x198))(plVar5,plVar4,*(undefined8 *)(*plVar5 + 0x1a0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_041d84e4(plVar4,0);
    if ((uVar6 & 1) != 0) {
      FUN_041c73ec(in_stack_00000010,unaff_x25,0);
    }
    lVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar3 == lVar7) {
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,unaff_x25,0);
    }
    else {
      lVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar3 == lVar7) {
        if (*plVar4 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar4);
        }
        if ((int)plVar4[0x16] == 0) {
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(unaff_w19,0,0);
        }
      }
    }
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022d1bb8;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d1bb8:
    (*(code *)*puVar8)(plVar4,puVar8[1]);
    return;
  }
LAB_022d1c18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


