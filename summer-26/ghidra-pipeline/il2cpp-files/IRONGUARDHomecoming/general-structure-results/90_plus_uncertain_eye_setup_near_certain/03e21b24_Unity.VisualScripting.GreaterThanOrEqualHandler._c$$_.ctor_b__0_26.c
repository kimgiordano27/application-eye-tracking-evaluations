/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_26
ENTRY_POINT: 03e21b24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8 Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_26(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  long in_stack_00000018;
  
                    /* catch() { ... } // from try @ 03e210a8 with catch @ 03e21b24 */
                    /* catch() { ... } // from try @ 03e2186c with catch @ 03e21b28 */
                    /* catch() { ... } // from try @ 03e21868 with catch @ 03e21b2c */
  thunk_FUN_01efb3a4(PTR_DAT_04579908);
                    /* catch() { ... } // from try @ 03e210d8 with catch @ 03e21b30 */
                    /* catch() { ... } // from try @ 03e21864 with catch @ 03e21b34 */
                    /* catch() { ... } // from try @ 03e21860 with catch @ 03e21b38 */
  thunk_FUN_01efb3a4(PTR_DAT_04579910);
                    /* catch() { ... } // from try @ 03e212d4 with catch @ 03e21b3c */
                    /* catch() { ... } // from try @ 03e2185c with catch @ 03e21b40 */
  *(undefined1 *)(unaff_x20 + 0x814) = 1;
                    /* catch() { ... } // from try @ 03e21110 with catch @ 03e21b44 */
                    /* catch() { ... } // from try @ 03e20e7c with catch @ 03e21b48 */
                    /* catch() { ... } // from try @ 03e21858 with catch @ 03e21b4c */
                    /* catch() { ... } // from try @ 03e21854 with catch @ 03e21b50 */
                    /* catch() { ... } // from try @ 03e21728 with catch @ 03e21b54 */
  if (*(uint *)(unaff_x19 + 0x10) < 5) {
                    /* catch() { ... } // from try @ 03e21850 with catch @ 03e21b58 */
    lVar8 = *(long *)(unaff_x19 + 0x28);
                    /* catch() { ... } // from try @ 03e2184c with catch @ 03e21b5c */
                    /* catch() { ... } // from try @ 03e216e8 with catch @ 03e21b60 */
                    /* catch() { ... } // from try @ 03e21004 with catch @ 03e21b64 */
                    /* catch() { ... } // from try @ 03e21848 with catch @ 03e21b68 */
                    /* catch() { ... } // from try @ 03e216d4 with catch @ 03e21b6c */
                    /* catch() { ... } // from try @ 03e21844 with catch @ 03e21b70 */
    switch(*(uint *)(unaff_x19 + 0x10)) {
    case 0:
                    /* catch() { ... } // from try @ 03e21840 with catch @ 03e21b74 */
                    /* catch() { ... } // from try @ 03e2183c with catch @ 03e21b78 */
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
                    /* catch() { ... } // from try @ 03e216a4 with catch @ 03e21b7c */
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* catch() { ... } // from try @ 03e21348 with catch @ 03e21b80 */
                    /* catch() { ... } // from try @ 03e21838 with catch @ 03e21b84 */
      if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* catch() { ... } // from try @ 03e21834 with catch @ 03e21b88 */
      uVar2 = FUN_02728254(*(long *)(lVar8 + 0x38),*(undefined8 *)PTR_DAT_045798f8);
      *(undefined8 *)(in_stack_00000018 + 0x30) = uVar2;
      thunk_FUN_01f51358();
      unaff_x19 = in_stack_00000018;
      break;
    case 2:
      goto switchD_03e21b70_caseD_2;
    case 3:
      goto switchD_03e21b70_caseD_3;
    case 4:
      goto switchD_03e21b70_caseD_4;
    }
    plVar7 = *(long **)(unaff_x19 + 0x30);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
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
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e21c10;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03e21c10:
    uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar5 & 1) != 0) {
      plVar7 = *(long **)(in_stack_00000018 + 0x30);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798e0) {
            puVar1 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03e21fd0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798e0,0);
LAB_03e21fd0:
      lVar8 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      if (lVar8 != 0) {
        *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        thunk_FUN_01f51358();
        *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03e221e8();
    *(undefined8 *)(in_stack_00000018 + 0x30) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x30),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar8 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = FUN_02729794(*(long *)(lVar8 + 0x40),*(undefined8 *)PTR_DAT_04579908);
    *(undefined8 *)(in_stack_00000018 + 0x38) = uVar2;
    thunk_FUN_01f51358();
    unaff_x19 = in_stack_00000018;
switchD_03e21b70_caseD_2:
    plVar7 = *(long **)(unaff_x19 + 0x38);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
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
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e21d20;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03e21d20:
    uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      FUN_03e22298();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = FUN_0272ada8(*(long *)(lVar8 + 0x48),*(undefined8 *)PTR_DAT_04579910);
      *(undefined8 *)(in_stack_00000018 + 0x40) = uVar2;
      thunk_FUN_01f51358();
      unaff_x19 = in_stack_00000018;
switchD_03e21b70_caseD_3:
      plVar7 = *(long **)(unaff_x19 + 0x40);
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffb;
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
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03e21e30;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_03e21e30:
      uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      if ((uVar5 & 1) == 0) {
        FUN_03e22348();
        *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
        thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar8 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = FUN_02728cf4(*(long *)(lVar8 + 0x50),*(undefined8 *)PTR_DAT_04579900);
        *(undefined8 *)(in_stack_00000018 + 0x48) = uVar2;
        thunk_FUN_01f51358();
        unaff_x19 = in_stack_00000018;
switchD_03e21b70_caseD_4:
        plVar7 = *(long **)(unaff_x19 + 0x48);
        *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffa;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar1 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03e21f40;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_03e21f40:
        uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
        if ((uVar5 & 1) == 0) {
          FUN_03e223f8();
          *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
          thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x48),0);
          goto LAB_03e21fbc;
        }
        plVar7 = *(long **)(in_stack_00000018 + 0x48);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798d8) {
              puVar1 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03e2207c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798d8,0);
LAB_03e2207c:
        lVar8 = (*(code *)*puVar1)(plVar7,puVar1[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        thunk_FUN_01f51358();
        uVar4 = 4;
      }
      else {
        plVar7 = *(long **)(in_stack_00000018 + 0x40);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798e8) {
              puVar1 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
              goto Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_38;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798e8,0);
Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_38:
        lVar8 = (*(code *)*puVar1)(plVar7,puVar1[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
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
      lVar8 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798f0) {
            puVar1 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03e2200c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798f0,0);
LAB_03e2200c:
      lVar8 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      thunk_FUN_01f51358();
      uVar4 = 2;
    }
    *(undefined4 *)(in_stack_00000018 + 0x10) = uVar4;
    uVar2 = 1;
  }
  else {
LAB_03e21fbc:
    uVar2 = 0;
  }
  return uVar2;
}


