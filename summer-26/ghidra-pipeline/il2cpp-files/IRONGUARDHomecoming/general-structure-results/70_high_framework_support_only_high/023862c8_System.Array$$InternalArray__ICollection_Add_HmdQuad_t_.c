/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<HmdQuad_t>
ENTRY_POINT: 023862c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0238636c) */

void System_Array__InternalArray__ICollection_Add<HmdQuad_t>(undefined8 param_1,int param_2)

{
  void *__src;
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x23;
  long lVar7;
  long *unaff_x26;
  long lVar8;
  long unaff_x29;
  
  if (param_2 != 1) {
    if (unaff_x26 != (long *)0x0) {
      lVar7 = *unaff_x26;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x02386354;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x02386354:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar7 = *plVar3;
  __cxa_end_catch();
  lVar8 = *(long *)(unaff_x29 + -0x58);
  if (unaff_x26 != (long *)0x0) {
    lVar4 = *unaff_x26;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02386204;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02386204:
    (*(code *)*puVar1)();
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar7);
  }
  lVar7 = *(long *)(unaff_x20 + 0x38);
  __src = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar7 + 8) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x21,__src,unaff_x23);
  if (unaff_x19 != 0) {
    puVar1 = *(undefined8 **)(lVar7 + 0x60);
    uVar2 = *puVar1;
    if (-1 < *(int *)(*(long *)(lVar7 + 8) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    (*(code *)puVar1[2])(uVar2);
    if (*(long *)(lVar8 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


