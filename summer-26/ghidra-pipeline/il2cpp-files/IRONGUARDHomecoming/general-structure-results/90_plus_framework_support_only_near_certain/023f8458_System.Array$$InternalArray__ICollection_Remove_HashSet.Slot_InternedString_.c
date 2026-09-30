/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<HashSet.Slot<InternedString>>
ENTRY_POINT: 023f8458
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f8884) */

void System_Array__InternalArray__ICollection_Remove<HashSet_Slot<InternedString>>
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x20;
  void *unaff_x22;
  undefined8 *puVar9;
  long unaff_x24;
  long lVar10;
  ulong uVar11;
  long unaff_x27;
  long unaff_x29;
  
                    /* catch() { ... } // from try @ 023f8440 with catch @ 023f8458 */
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(undefined8 *)(unaff_x29 + -0x20) = param_2;
  lVar6 = *(long *)(param_5 + 0x38);
  if (lVar6 == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__);
                    /* try { // try from 023f8498 to 024f84bf has its CatchHandler @ 023f84d4 */
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    lVar6 = *(long *)(unaff_x24 + 0x38);
    if (lVar6 == 0) {
      FUN_01ecafa0();
      lVar6 = *(long *)(unaff_x24 + 0x38);
    }
  }
  uVar11 = (ulong)*(uint *)(*(long *)(lVar6 + 0x10) + 0xfc);
  puVar9 = (undefined8 *)(&stack0x00000000 + -(uVar11 + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar2 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  puVar1 = Method_System_Configuration_ConfigurationElement_Reset__;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *param_3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto System_Array__InternalArray__ICollection_Remove<HashSet_Slot<uint>>;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(param_3,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,5)
  ;
System_Array__InternalArray__ICollection_Remove<HashSet_Slot<uint>>:
  lVar6 = (*(code *)*puVar3)(param_3,puVar3[1]);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar6 + 0x40) = plVar2[3];
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0394f2dc(0);
  if ((uVar7 & 1) == 0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x24 + 0x38) + 0x20);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03579868(uVar4,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_0390bc14(uVar4,0);
    lVar6 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6))
      {
        lVar6 = *(long *)(unaff_x24 + 0x38);
        if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
          unaff_x22 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(puVar9,unaff_x22,uVar11);
        puVar3 = *(undefined8 **)(lVar6 + 0x18);
        uVar4 = *puVar3;
        if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
          puVar9 = (undefined8 *)*puVar9;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
        *(long **)(unaff_x29 + -0x10) = param_3;
        (*(code *)puVar3[2])(uVar4,puVar3,plVar5,unaff_x29 + -0x18,param_3);
        goto LAB_023f8720;
      }
    }
    lVar6 = *(long *)(unaff_x24 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(puVar9,unaff_x22,uVar11);
    uVar4 = thunk_FUN_01f113fc(*(undefined8 *)(lVar6 + 0x10),puVar9);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar4,uVar4);
    }
    FUN_0390f94c(plVar5,uVar4,param_3,0);
  }
  else {
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = (**(code **)**(undefined8 **)(unaff_x24 + 0x38))();
    lVar10 = *(long *)(unaff_x24 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar10 + 0x10) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(puVar9,unaff_x22,uVar11);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar3 = *(undefined8 **)(lVar10 + 0x18);
    uVar4 = *puVar3;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x10) + 0x28)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    *(long **)(unaff_x29 + -0x10) = param_3;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar6,unaff_x29 + -0x18,param_3);
  }
LAB_023f8720:
  lVar6 = *param_3;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto 
        System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
        ;
      }
      uVar11 = uVar11 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,8);

  System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_StyleData<Color>>
  :
  (*(code *)*puVar9)(param_3,puVar9[1]);
  if (plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *unaff_x20 = *(undefined8 *)(plVar2[3] + 0x18);
  thunk_FUN_01f51358();
  lVar6 = *plVar2;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023f87ec;
      }
      uVar11 = uVar11 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f87ec:
  (*(code *)*puVar9)(plVar2,puVar9[1]);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


