/*
FUNCTION_NAME: FUN_05b77254
ENTRY_POINT: 05b77254
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05b7767c) */

void FUN_05b77254(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_Dispose__
  ;
  local_50 = param_3;
  uStack_48 = param_4;
  if ((DAT_06b81c98 & 1) == 0) {
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_get_Current__
                );
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                );
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSpatialAnchor>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSpatialAnchor>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSpatialAnchor>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<HandExpressionName,_NativeArray<XRHandJoint>>_Dispose__
                );
    DAT_06b81c98 = 1;
  }
  local_58 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar1 = PTR_DAT_0675f3d0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar3 = (long *)FUN_03526ed8(param_1,param_5,&local_58,**(undefined8 **)(*(long *)puVar2 + 0xb8),
                                param_6,param_7,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSpatialAnchor>_MoveNext__
                               );
  if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined4 *)(local_58 + 0x20) = param_2;
  *(undefined8 *)(local_58 + 0x18) = uStack_48;
  *(undefined8 *)(local_58 + 0x10) = local_50;
  puVar2 = 
  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
  ;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05b773bc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02d9a5d4(plVar3,*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                        ,0);
LAB_05b773bc:
  (*(code *)*puVar4)(plVar3,&local_50,1,puVar4[1]);
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_05b77420;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar2,0xb);
LAB_05b77420:
  (*(code *)*puVar4)(plVar3,0,puVar4[1]);
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_05b77480;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar2,0xc);
LAB_05b77480:
  (*(code *)*puVar4)(plVar3,1,puVar4[1]);
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_05b774e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar2,3);
LAB_05b774e0:
  (*(code *)*puVar4)(plVar3,&local_50,param_2,puVar4[1]);
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<HandExpressionName,_NativeArray<XRHandJoint>>_Dispose__
  ;
  lVar6 = *(long *)
           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<HandExpressionName,_NativeArray<XRHandJoint>>_Dispose__
  ;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar2;
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar2;
    }
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_get_Current__
                              );
    FUN_04180bc0(lVar9,uVar10,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSpatialAnchor>_get_Current__
                 ,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar9;
    thunk_FUN_02dd37b4(plVar5,lVar9);
  }
  lVar6 = *plVar3;
  lVar11 = *(long *)
            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSpatialAnchor>_Dispose__
  ;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_05b775d8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_02d9a5d4(plVar3);
LAB_05b775d8:
  lVar6 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar6 + 8),lVar11);
  (**(code **)(lVar6 + 8))(plVar3,lVar9,lVar6);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05b7764c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar1,0);
LAB_05b7764c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


