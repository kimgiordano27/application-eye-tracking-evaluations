/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<Dictionary.Entry<Int32Enum,-object>>
ENTRY_POINT: 02393e30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02393f8c) */

int System_Array__InternalArray__ICollection_Contains<Dictionary_Entry<Int32Enum,_object>>(void)

{
  void *__src;
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  void *unaff_x27;
  long unaff_x29;
  
  do {
    plVar1 = (long *)(*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x28))();
    memcpy(unaff_x24,unaff_x27,unaff_x22);
    lVar7 = *(long *)(unaff_x20 + 0x38);
    __src = *(void **)(unaff_x29 + -0x30);
    if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x25,__src,unaff_x22);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar3 = unaff_x24;
    puVar5 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x24;
      puVar5 = (undefined8 *)*unaff_x25;
    }
    lVar7 = *plVar1;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    lVar7 = *(long *)(lVar7 + 0x1c0);
    (**(code **)(lVar7 + 0x10))
              (*(undefined8 *)(lVar7 + 8),lVar7,plVar1,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') goto joined_r0x02393ee0;
    unaff_w26 = unaff_w26 + 1;
    lVar7 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02393d90;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02393d90:
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar7) {
          lVar7 = lVar2 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_02393e04;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    lVar7 = FUN_01ecb238();
LAB_02393e04:
    *(void **)(unaff_x29 + -0x20) = unaff_x23;
    (**(code **)(*(long *)(lVar7 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar7 + 8) + 8));
    memcpy(unaff_x27,unaff_x23,unaff_x22);
  } while( true );
  unaff_w26 = -1;
joined_r0x02393ee0:
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02393f38;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02393f38:
    (*(code *)*puVar3)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


