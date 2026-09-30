/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03a86d6c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<OVRPlugin_SpaceQueryResult>
               (long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long in_x9;
  long in_x10;
  undefined8 in_x11;
  void *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  long *plVar6;
  void *pvVar7;
  void *unaff_x24;
  long *plVar8;
  void *unaff_x26;
  size_t unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  *(long *)(unaff_x29 + -0x80) = param_1 - in_x9;
  *(undefined8 *)(unaff_x29 + -0x78) = in_x11;
  *(ulong *)(unaff_x29 + -0xa0) = (param_1 - in_x9) - (in_x10 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = in_x10;
  lVar1 = FUN_05fc572c(*(undefined8 *)(unaff_x29 + -0x38),0);
  if (lVar1 != 0) {
    plVar6 = *(long **)(unaff_x20 + 0x38);
    plVar8 = *(long **)(lVar1 + 0x38);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x24,unaff_x21,unaff_x28);
    lVar2 = thunk_FUN_032a52d0(*plVar6);
    if (plVar8 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0)) {
LAB_03a8709c:
        uVar4 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar4,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar2;
        thunk_FUN_0333a630(plVar8 + 4,lVar2);
        lVar2 = *(long *)(unaff_x20 + 0x38);
        plVar6 = *(long **)(lVar1 + 0x38);
        pvVar5 = *(void **)(unaff_x29 + -0x40);
        if (-1 < *(int *)(*(long *)(lVar2 + 8) + 0x28)) {
          pvVar5 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x19,pvVar5,unaff_x27);
        lVar2 = thunk_FUN_032a52d0(*(undefined8 *)(lVar2 + 8));
        if (plVar6 == (long *)0x0) goto LAB_03a87094;
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
        goto LAB_03a8709c;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = lVar2;
          thunk_FUN_0333a630(plVar6 + 5,lVar2);
          lVar2 = *(long *)(unaff_x20 + 0x38);
          plVar6 = *(long **)(lVar1 + 0x38);
          pvVar5 = *(void **)(unaff_x29 + -0x48);
          if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -0x20);
          }
          memcpy(unaff_x26,pvVar5,*(size_t *)(unaff_x29 + -0x50));
          lVar2 = thunk_FUN_032a52d0(*(undefined8 *)(lVar2 + 0x10));
          if (plVar6 == (long *)0x0) goto LAB_03a87094;
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
          goto LAB_03a8709c;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar2;
            thunk_FUN_0333a630(plVar6 + 6,lVar2);
            lVar2 = *(long *)(unaff_x20 + 0x38);
            pvVar7 = *(void **)(unaff_x29 + -0x68);
            plVar6 = *(long **)(lVar1 + 0x38);
            pvVar5 = *(void **)(unaff_x29 + -0x58);
            if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
              pvVar5 = (void *)(unaff_x29 + -0x28);
            }
            memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0x60));
            lVar2 = thunk_FUN_032a52d0(*(undefined8 *)(lVar2 + 0x18),pvVar7);
            if (plVar6 == (long *)0x0) goto LAB_03a87094;
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
            goto LAB_03a8709c;
            if (3 < *(uint *)(plVar6 + 3)) {
              plVar6[7] = lVar2;
              thunk_FUN_0333a630(plVar6 + 7,lVar2);
              lVar2 = *(long *)(unaff_x20 + 0x38);
              pvVar7 = *(void **)(unaff_x29 + -0x80);
              plVar6 = *(long **)(lVar1 + 0x38);
              pvVar5 = *(void **)(unaff_x29 + -0x70);
              if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
                pvVar5 = (void *)(unaff_x29 + -0x30);
              }
              memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0x78));
              lVar2 = thunk_FUN_032a52d0(*(undefined8 *)(lVar2 + 0x20),pvVar7);
              if (plVar6 == (long *)0x0) goto LAB_03a87094;
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
              goto LAB_03a8709c;
              if (4 < *(uint *)(plVar6 + 3)) {
                plVar6[8] = lVar2;
                thunk_FUN_0333a630(plVar6 + 8,lVar2);
                uVar4 = FUN_05fb2df0(lVar1,0);
                lVar2 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x18);
                if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                FUN_05fb3740(lVar2,lVar1,0);
                FUN_05fb2e6c(lVar1,uVar4,0);
                uVar4 = FUN_05fa802c(lVar1,0);
                lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
                if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                  lVar1 = FUN_032934b8(lVar1);
                }
                pvVar5 = (void *)FUN_032d5de0(uVar4,lVar1,*(undefined8 *)(unaff_x29 + -0xa0));
                memcpy(*(void **)(unaff_x29 + -0x88),pvVar5,*(size_t *)(unaff_x29 + -0x98));
                if (*(long *)(*(long *)(unaff_x29 + -0x90) + 0x28) == *(long *)(unaff_x29 + -8)) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
LAB_03a87094:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


