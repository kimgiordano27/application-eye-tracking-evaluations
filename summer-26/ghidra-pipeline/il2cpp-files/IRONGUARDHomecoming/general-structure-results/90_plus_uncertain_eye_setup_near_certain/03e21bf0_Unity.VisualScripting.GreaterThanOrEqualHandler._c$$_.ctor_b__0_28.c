/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_28
ENTRY_POINT: 03e21bf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8
Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_28
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long *plVar7;
  long unaff_x21;
  long in_stack_00000018;
  
                    /* catch() { ... } // from try @ 03e20150 with catch @ 03e21bf0 */
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
                    /* catch() { ... } // from try @ 03e1fd18 with catch @ 03e21c04 */
                    /* catch() { ... } // from try @ 03e2180c with catch @ 03e21c08 */
                    /* catch() { ... } // from try @ 03e21808 with catch @ 03e21c0c */
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03e21c10;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
                    /* catch() { ... } // from try @ 03e2174c with catch @ 03e21bf4 */
                    /* catch() { ... } // from try @ 03e21134 with catch @ 03e21bf8 */
                    /* catch() { ... } // from try @ 03e20660 with catch @ 03e21bfc */
  puVar1 = (undefined8 *)FUN_01ecb238();
                    /* catch() { ... } // from try @ 03e1fde8 with catch @ 03e21c00 */
LAB_03e21c10:
                    /* catch() { ... } // from try @ 03e21804 with catch @ 03e21c10 */
                    /* catch() { ... } // from try @ 03e21800 with catch @ 03e21c14 */
                    /* catch() { ... } // from try @ 03e1fe50 with catch @ 03e21c18 */
  uVar2 = (*(code *)*puVar1)();
                    /* catch() { ... } // from try @ 03e1fd38 with catch @ 03e21c1c */
                    /* catch() { ... } // from try @ 03e1ff10 with catch @ 03e21c20 */
                    /* catch() { ... } // from try @ 03e217fc with catch @ 03e21c24 */
  if ((uVar2 & 1) == 0) {
    FUN_03e221e8();
    *(undefined8 *)(in_stack_00000018 + 0x30) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x30),0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_02729794(*(long *)(unaff_x21 + 0x40),*(undefined8 *)PTR_DAT_04579908);
    *(undefined8 *)(in_stack_00000018 + 0x38) = uVar3;
    thunk_FUN_01f51358();
    plVar7 = *(long **)(in_stack_00000018 + 0x38);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e21d20;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03e21d20:
    uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      FUN_03e22298();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(unaff_x21 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = FUN_0272ada8(*(long *)(unaff_x21 + 0x48),*(undefined8 *)PTR_DAT_04579910);
      *(undefined8 *)(in_stack_00000018 + 0x40) = uVar3;
      thunk_FUN_01f51358();
      plVar7 = *(long **)(in_stack_00000018 + 0x40);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffb;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03e21e30;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_03e21e30:
      uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      if ((uVar2 & 1) == 0) {
        FUN_03e22348();
        *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
        thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(unaff_x21 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = FUN_02728cf4(*(long *)(unaff_x21 + 0x50),*(undefined8 *)PTR_DAT_04579900);
        *(undefined8 *)(in_stack_00000018 + 0x48) = uVar3;
        thunk_FUN_01f51358();
        plVar7 = *(long **)(in_stack_00000018 + 0x48);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffa;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03e21f40;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_03e21f40:
        uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
        if ((uVar2 & 1) == 0) {
          FUN_03e223f8();
          *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
          thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x48),0);
          return 0;
        }
        plVar7 = *(long **)(in_stack_00000018 + 0x48);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798d8) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03e2207c;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798d8,0);
LAB_03e2207c:
        lVar4 = (*(code *)*puVar1)(plVar7,puVar1[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
        thunk_FUN_01f51358();
        uVar5 = 4;
      }
      else {
        plVar7 = *(long **)(in_stack_00000018 + 0x40);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798e8) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_38;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798e8,0);
Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_38:
        lVar4 = (*(code *)*puVar1)(plVar7,puVar1[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
        thunk_FUN_01f51358();
        uVar5 = 3;
      }
    }
    else {
      plVar7 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798f0) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03e2200c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798f0,0);
LAB_03e2200c:
      lVar4 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
      thunk_FUN_01f51358();
      uVar5 = 2;
    }
    *(undefined4 *)(in_stack_00000018 + 0x10) = uVar5;
  }
  else {
                    /* catch() { ... } // from try @ 03e1fef8 with catch @ 03e21c28 */
    plVar7 = *(long **)(in_stack_00000018 + 0x30);
                    /* catch() { ... } // from try @ 03e1fe34 with catch @ 03e21c2c */
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* catch() { ... } // from try @ 03e217f8 with catch @ 03e21c30 */
                    /* catch() { ... } // from try @ 03e1fdb8 with catch @ 03e21c34 */
    lVar4 = *plVar7;
                    /* catch() { ... } // from try @ 03e1fda8 with catch @ 03e21c38 */
                    /* catch() { ... } // from try @ 03e20664 with catch @ 03e21c3c */
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 03e1fd00 with catch @ 03e21c40 */
                    /* catch() { ... } // from try @ 03e1fe04 with catch @ 03e21c44 */
    if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 03e1fd1c with catch @ 03e21c48 */
                    /* catch() { ... } // from try @ 03e217f4 with catch @ 03e21c4c */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 03e20638 with catch @ 03e21c50 */
                    /* catch() { ... } // from try @ 03e1fcbc with catch @ 03e21c54 */
                    /* catch() { ... } // from try @ 03e217f0 with catch @ 03e21c58 */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798e0) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e21fd0;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798e0,0);
LAB_03e21fd0:
    lVar4 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
    thunk_FUN_01f51358();
    *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  }
  return 1;
}


