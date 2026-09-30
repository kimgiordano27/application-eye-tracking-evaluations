/*
FUNCTION_NAME: FUN_03f65d84
ENTRY_POINT: 03f65d84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f6626c) */

long * FUN_03f65d84(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *local_48;
  char local_34 [4];
  
  puVar2 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  if ((DAT_0483b545 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04580ee8);
    thunk_FUN_01efb3a4(PTR_DAT_04580ef0);
    thunk_FUN_01efb3a4(Method_System_IO_FileStream_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(PTR_DAT_0457bcf0);
    thunk_FUN_01efb3a4(PTR_DAT_04580ef8);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__);
    thunk_FUN_01efb3a4(PTR_DAT_04580f00);
    thunk_FUN_01efb3a4(PTR_DAT_04580f08);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_CharEnumerator_get_Current__);
    DAT_0483b545 = 1;
  }
  puVar1 = Method_System_CharEnumerator_get_Current__;
  local_48 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = FUN_03ec8718(*(undefined8 *)puVar1,0);
  puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_022df844(lVar3,param_1,*(undefined8 *)Method_System_IO_FileStream_Dispose__);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  local_34[0] = '\0';
  FUN_035ce230(uVar10,local_34,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                    (**(long **)(lVar3 + 0xb8),param_1,&local_48,*(undefined8 *)PTR_DAT_04580ef0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03f66568(param_1);
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04580f00);
      FUN_03f665bc(plVar5,param_1);
      if (plVar5 == (long *)0x0) goto LAB_03f66298;
    }
    else {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_034b140c(param_1,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)PTR_DAT_04580ef8;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_03579868(uVar11,0);
        plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                       Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                      ,2);
        lVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((lVar3 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar10,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar6[4] = lVar3;
        thunk_FUN_01f51358(plVar6 + 4,lVar3);
        lVar3 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
        if ((lVar3 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar10,0);
        }
        if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar6[5] = lVar3;
        thunk_FUN_01f51358(plVar6 + 5,lVar3);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = (**(code **)(*plVar5 + 0x928))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x930));
      }
      else {
        uVar11 = *(undefined8 *)PTR_DAT_04580f08;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_03579868(uVar11,0);
        plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                       Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                      ,1);
        lVar3 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((lVar3 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar10,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar6[4] = lVar3;
        thunk_FUN_01f51358(plVar6 + 4,lVar3);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = (**(code **)(*plVar5 + 0x928))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x930));
      }
      plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,1);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar3 == 0) {
        uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar5[4] = (long)param_1;
      thunk_FUN_01f51358(plVar5 + 4,param_1);
      lVar3 = FUN_035949e4(uVar11,plVar5,0);
      if (lVar3 == 0) {
LAB_03f66298:
        local_48 = (long *)0x0;
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = *(undefined8 *)PTR_DAT_0457bcf0;
      plVar5 = (long *)thunk_FUN_01f116d0(lVar3,uVar11);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar3,uVar11);
      }
    }
    lVar3 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    local_48 = plVar5;
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0457bcf0) {
          puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f661e8;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)PTR_DAT_0457bcf0,0);
LAB_03f661e8:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b6b2e4(**(long **)(lVar3 + 0xb8),param_1,local_48,*(undefined8 *)PTR_DAT_04580ee8);
  }
  plVar5 = local_48;
  if (local_34[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar10,0);
  }
  return plVar5;
}


