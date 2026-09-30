/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_27
ENTRY_POINT: 03e21b8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8
Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_27(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long unaff_x21;
  long in_stack_00000018;
  
                    /* catch() { ... } // from try @ 03e21334 with catch @ 03e21b8c */
                    /* catch() { ... } // from try @ 03e21830 with catch @ 03e21b90 */
                    /* catch() { ... } // from try @ 03e2182c with catch @ 03e21b94 */
  uVar1 = FUN_02728254(param_2,**(undefined8 **)(param_1 + 0x8f8));
                    /* catch() { ... } // from try @ 03e21308 with catch @ 03e21b98 */
                    /* catch() { ... } // from try @ 03e2164c with catch @ 03e21b9c */
                    /* catch() { ... } // from try @ 03e20fb8 with catch @ 03e21ba0 */
  *(undefined8 *)(in_stack_00000018 + 0x30) = uVar1;
                    /* catch() { ... } // from try @ 03e21200 with catch @ 03e21ba4 */
  thunk_FUN_01f51358();
                    /* catch() { ... } // from try @ 03e214d8 with catch @ 03e21ba8 */
                    /* catch() { ... } // from try @ 03e21828 with catch @ 03e21bac */
  plVar7 = *(long **)(in_stack_00000018 + 0x30);
                    /* catch() { ... } // from try @ 03e21824 with catch @ 03e21bb0 */
                    /* catch() { ... } // from try @ 03e212f4 with catch @ 03e21bb4 */
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
                    /* catch() { ... } // from try @ 03e20ea8 with catch @ 03e21bb8 */
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 03e1fd48 with catch @ 03e21bbc */
                    /* catch() { ... } // from try @ 03e21820 with catch @ 03e21bc0 */
  lVar3 = *plVar7;
                    /* catch() { ... } // from try @ 03e1fe88 with catch @ 03e21bc4 */
                    /* catch() { ... } // from try @ 03e206b8 with catch @ 03e21bc8 */
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch() { ... } // from try @ 03e2181c with catch @ 03e21bcc */
                    /* catch() { ... } // from try @ 03e1fd70 with catch @ 03e21bd0 */
  if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 03e1fd58 with catch @ 03e21bd4 */
                    /* catch() { ... } // from try @ 03e1fe68 with catch @ 03e21bd8 */
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 03e21818 with catch @ 03e21bdc */
                    /* catch() { ... } // from try @ 03e21814 with catch @ 03e21be0 */
                    /* catch() { ... } // from try @ 03e20040 with catch @ 03e21be4 */
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03e21c10;
      }
                    /* catch() { ... } // from try @ 03e2018c with catch @ 03e21be8 */
      uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 03e21810 with catch @ 03e21bec */
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03e21c10:
  uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  if ((uVar5 & 1) == 0) {
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
    uVar1 = FUN_02729794(*(long *)(unaff_x21 + 0x40),*(undefined8 *)PTR_DAT_04579908);
    *(undefined8 *)(in_stack_00000018 + 0x38) = uVar1;
    thunk_FUN_01f51358();
    plVar7 = *(long **)(in_stack_00000018 + 0x38);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e21d20;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03e21d20:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
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
      uVar1 = FUN_0272ada8(*(long *)(unaff_x21 + 0x48),*(undefined8 *)PTR_DAT_04579910);
      *(undefined8 *)(in_stack_00000018 + 0x40) = uVar1;
      thunk_FUN_01f51358();
      plVar7 = *(long **)(in_stack_00000018 + 0x40);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffb;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03e21e30;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_03e21e30:
      uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if ((uVar5 & 1) == 0) {
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
        uVar1 = FUN_02728cf4(*(long *)(unaff_x21 + 0x50),*(undefined8 *)PTR_DAT_04579900);
        *(undefined8 *)(in_stack_00000018 + 0x48) = uVar1;
        thunk_FUN_01f51358();
        plVar7 = *(long **)(in_stack_00000018 + 0x48);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffa;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03e21f40;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_03e21f40:
        uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        if ((uVar5 & 1) == 0) {
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
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798d8) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03e2207c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798d8,0);
LAB_03e2207c:
        lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
        thunk_FUN_01f51358();
        uVar4 = 4;
      }
      else {
        plVar7 = *(long **)(in_stack_00000018 + 0x40);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798e8) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_38;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798e8,0);
Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_38:
        lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
        thunk_FUN_01f51358();
        uVar4 = 3;
      }
    }
    else {
      plVar7 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798f0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03e2200c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798f0,0);
LAB_03e2200c:
      lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      thunk_FUN_01f51358();
      uVar4 = 2;
    }
    *(undefined4 *)(in_stack_00000018 + 0x10) = uVar4;
  }
  else {
    plVar7 = *(long **)(in_stack_00000018 + 0x30);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798e0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e21fd0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798e0,0);
LAB_03e21fd0:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
    thunk_FUN_01f51358();
    *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  }
  return 1;
}


