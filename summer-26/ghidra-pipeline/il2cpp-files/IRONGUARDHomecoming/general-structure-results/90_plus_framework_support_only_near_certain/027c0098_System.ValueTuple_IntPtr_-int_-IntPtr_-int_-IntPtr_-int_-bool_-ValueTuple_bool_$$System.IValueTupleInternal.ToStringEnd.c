/*
FUNCTION_NAME: System.ValueTuple<IntPtr,-int,-IntPtr,-int,-IntPtr,-int,-bool,-ValueTuple<bool>>$$System.IValueTupleInternal.ToStringEnd
ENTRY_POINT: 027c0098
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x027c006c) */
/* WARNING: Removing unreachable block (ram,0x027c01ec) */

undefined8
System_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>__System_IValueTupleInternal_ToStringEnd
          (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long lVar7;
  long *unaff_x21;
  
  if (param_2 != 1) {
    if (unaff_x21 != (long *)0x0) {
      lVar7 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x027c01d4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
code_r0x027c01d4:
      (*(code *)*puVar2)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar7 = *plVar3;
  __cxa_end_catch();
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_027bfe00;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_027bfe00:
    (*(code *)*puVar2)();
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar7);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
  }
  plVar3 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar7) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_027bfec4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar7,0);
LAB_027bfec4:
  plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_027bff2c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_027bff2c:
    uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return 1;
      }
      lVar7 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 == 0) goto LAB_027c0008;
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar7) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_027bffa4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar7,0);
LAB_027bffa4:
    lVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0358d1e4(lVar7,0,*(undefined4 *)(lVar7 + 0x18),0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_027c0024;
    }
  }
LAB_027c0008:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027c0024:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return 1;
}


