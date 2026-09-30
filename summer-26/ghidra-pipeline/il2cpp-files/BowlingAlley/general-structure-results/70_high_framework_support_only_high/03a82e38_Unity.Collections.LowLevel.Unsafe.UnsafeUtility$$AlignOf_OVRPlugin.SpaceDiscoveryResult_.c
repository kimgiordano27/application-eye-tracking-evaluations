/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$AlignOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03a82e38
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_SpaceDiscoveryResult>
               (void *param_1,undefined8 param_2,size_t param_3)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar4;
  void *pvVar5;
  long unaff_x21;
  void *pvVar6;
  long unaff_x23;
  long unaff_x29;
  
  if (in_NG == in_OV) {
    in_x9 = (void *)(unaff_x29 + 0x60);
  }
  memcpy(param_1,in_x9,param_3);
  lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(unaff_x21 + 0x38));
  if (unaff_x20 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
LAB_03a83050:
      uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar3,0);
    }
    if (7 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[0xb] = lVar1;
      thunk_FUN_0333a630(unaff_x20 + 0xb,lVar1);
      lVar1 = *(long *)(unaff_x19 + 0x38);
      pvVar6 = *(void **)(unaff_x29 + -0xf8);
      plVar4 = *(long **)(unaff_x23 + 0x38);
      pvVar5 = *(void **)(unaff_x29 + -0xe8);
      if (-1 < *(int *)(*(long *)(lVar1 + 0x40) + 0x28)) {
        pvVar5 = (void *)(unaff_x29 + 0x68);
      }
      memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xf0));
      lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x40),pvVar6);
      if (plVar4 == (long *)0x0) goto LAB_03a83048;
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_03a83050;
      if (8 < *(uint *)(plVar4 + 3)) {
        plVar4[0xc] = lVar1;
        thunk_FUN_0333a630(plVar4 + 0xc,lVar1);
        lVar1 = *(long *)(unaff_x19 + 0x38);
        plVar4 = *(long **)(unaff_x23 + 0x38);
        pvVar5 = *(void **)(unaff_x29 + -0x100);
        if (-1 < *(int *)(*(long *)(lVar1 + 0x48) + 0x28)) {
          pvVar5 = (void *)(unaff_x29 + 0x70);
        }
        pvVar6 = *(void **)(unaff_x29 + -0x110);
        memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x108));
        lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x48),pvVar6);
        if (plVar4 == (long *)0x0) goto LAB_03a83048;
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
        goto LAB_03a83050;
        if (9 < *(uint *)(plVar4 + 3)) {
          plVar4[0xd] = lVar1;
          thunk_FUN_0333a630(plVar4 + 0xd,lVar1);
          FUN_05fb2df0();
          lVar1 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_05fb3740(lVar1);
          FUN_05fb2e6c();
          pvVar5 = *(void **)(unaff_x29 + 0x78);
          uVar3 = FUN_05fa802c();
          lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x50);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_032934b8(lVar1);
          }
          pvVar6 = (void *)FUN_032d5de0(uVar3,lVar1,*(undefined8 *)(unaff_x29 + -0x128));
          memcpy(pvVar5,pvVar6,*(size_t *)(unaff_x29 + -0x120));
          if (*(long *)(*(long *)(unaff_x29 + -0x118) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_03a83048:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


