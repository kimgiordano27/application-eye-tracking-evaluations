/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<Dictionary.Entry<Int32Enum,-Int32Enum>>
ENTRY_POINT: 02393ccc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02393f8c) */

int System_Array__InternalArray__ICollection_Contains<Dictionary_Entry<Int32Enum,_Int32Enum>>
              (ulong param_1,undefined8 param_2,long param_3)

{
  void *__src;
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int iVar9;
  void *unaff_x27;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_01ecaf44(param_3);
  }
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02393d24;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02393d24:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = 0;
  do {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02393d90;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02393d90:
    uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      iVar9 = -1;
      if (plVar2 == (long *)0x0) goto LAB_02393f44;
      goto LAB_02393ee4;
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02393e04;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238(plVar2,lVar4,0);
LAB_02393e04:
    *(void **)(unaff_x29 + -0x20) = unaff_x23;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar2,unaff_x29 + -0x20);
    memcpy(unaff_x27,unaff_x23,unaff_x22);
    plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x28))();
    memcpy(unaff_x24,unaff_x27,unaff_x22);
    lVar4 = *(long *)(unaff_x20 + 0x38);
    __src = *(void **)(unaff_x29 + -0x30);
    if (-1 < *(int *)(*(long *)(lVar4 + 0x20) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x25,__src,unaff_x22);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar1 = unaff_x24;
    puVar7 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x20) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x24;
      puVar7 = (undefined8 *)*unaff_x25;
    }
    lVar4 = *plVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar1;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    lVar4 = *(long *)(lVar4 + 0x1c0);
    (**(code **)(lVar4 + 0x10))
              (*(undefined8 *)(lVar4 + 8),lVar4,plVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    iVar9 = iVar9 + 1;
  } while( true );
  if (plVar2 != (long *)0x0) {
LAB_02393ee4:
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02393f38;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02393f38:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
LAB_02393f44:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


