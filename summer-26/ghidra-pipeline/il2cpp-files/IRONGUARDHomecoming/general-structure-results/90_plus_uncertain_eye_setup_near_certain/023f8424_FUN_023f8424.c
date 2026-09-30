/*
FUNCTION_NAME: FUN_023f8424
ENTRY_POINT: 023f8424
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f8884) */

void FUN_023f8424(long *****param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long **__dest;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long ****local_80;
  long **local_78;
  long *plStack_70;
  long local_68;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f8274 with catch @ 023f8424
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f8238 with catch @ 023f8428
                        */
                    /* try { // try from 023f8440 to 024f8443 has its CatchHandler @ 023f8458 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_4 + 0x38);
  local_80 = (long ****)param_1;
  if (lVar6 == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    lVar6 = *(long *)(param_4 + 0x38);
    if (lVar6 == 0) {
      FUN_01ecafa0(param_4);
      lVar6 = *(long *)(param_4 + 0x38);
    }
  }
  uVar10 = (ulong)*(uint *)(*(long *)(lVar6 + 0x10) + 0xfc);
  __dest = (long **)((long)&local_80 - (uVar10 + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  puVar2 = Method_System_Configuration_ConfigurationElement_Reset__;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto System_Array__InternalArray__ICollection_Remove<HashSet_Slot<uint>>;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(param_2,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,5)
  ;
System_Array__InternalArray__ICollection_Remove<HashSet_Slot<uint>>:
  lVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar6 + 0x40) = plVar3[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0394f2dc(0);
  if ((uVar7 & 1) == 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03579868(uVar11,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_0390bc14(uVar11,0);
    lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6))
      {
        lVar6 = *(long *)(param_4 + 0x38);
        if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
          param_1 = &local_80;
        }
        memcpy(__dest,param_1,uVar10);
        puVar4 = *(undefined8 **)(lVar6 + 0x18);
        if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
          __dest = (long **)*__dest;
        }
        local_78 = __dest;
        plStack_70 = param_2;
        (*(code *)puVar4[2])(*puVar4,puVar4,plVar5,&local_78,param_2);
        goto LAB_023f8720;
      }
    }
    lVar6 = *(long *)(param_4 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
      param_1 = &local_80;
    }
    memcpy(__dest,param_1,uVar10);
    uVar11 = thunk_FUN_01f113fc(*(undefined8 *)(lVar6 + 0x10),__dest);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar11,uVar11);
    }
    FUN_0390f94c(plVar5,uVar11,param_2,0);
  }
  else {
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = (**(code **)**(undefined8 **)(param_4 + 0x38))();
    lVar9 = *(long *)(param_4 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar9 + 0x10) + 0x28)) {
      param_1 = &local_80;
    }
    memcpy(__dest,param_1,uVar10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar4 = *(undefined8 **)(lVar9 + 0x18);
    if (-1 < *(int *)(*(long *)(lVar9 + 0x10) + 0x28)) {
      __dest = (long **)*__dest;
    }
    local_78 = __dest;
    plStack_70 = param_2;
    (*(code *)puVar4[2])(*puVar4,puVar4,lVar6,&local_78,param_2);
  }
LAB_023f8720:
  lVar6 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto 
        System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
        ;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar2,8);

  System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
  :
  (*(code *)*puVar4)(param_2,puVar4[1]);
  if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *param_3 = *(undefined8 *)(plVar3[3] + 0x18);
  thunk_FUN_01f51358(param_3);
  lVar6 = *plVar3;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023f87ec;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f87ec:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


