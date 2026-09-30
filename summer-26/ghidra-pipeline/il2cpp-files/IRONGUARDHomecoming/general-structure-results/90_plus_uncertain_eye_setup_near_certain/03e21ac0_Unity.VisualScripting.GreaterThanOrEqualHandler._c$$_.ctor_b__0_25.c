/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_25
ENTRY_POINT: 03e21ac0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


undefined8 Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_25(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  long lStack0000000000000018;
  
                    /* catch() { ... } // from try @ 03e20870 with catch @ 03e21ac0 */
                    /* catch() { ... } // from try @ 03e20fd8 with catch @ 03e21ac4 */
                    /* catch() { ... } // from try @ 03e21898 with catch @ 03e21ac8 */
                    /* catch() { ... } // from try @ 03e21894 with catch @ 03e21acc */
  lStack0000000000000018 = param_1;
  if ((*(byte *)(unaff_x20 + 0x814) & 1) == 0) {
                    /* catch() { ... } // from try @ 03e203e4 with catch @ 03e21ad0 */
                    /* catch() { ... } // from try @ 03e20530 with catch @ 03e21ad4 */
                    /* catch() { ... } // from try @ 03e20ec8 with catch @ 03e21ad8 */
    thunk_FUN_01efb3a4(PTR_DAT_045798d8);
                    /* catch() { ... } // from try @ 03e21890 with catch @ 03e21adc */
                    /* catch() { ... } // from try @ 03e20b18 with catch @ 03e21ae0 */
                    /* catch() { ... } // from try @ 03e2188c with catch @ 03e21ae4 */
    thunk_FUN_01efb3a4(PTR_DAT_045798e0);
                    /* catch() { ... } // from try @ 03e21888 with catch @ 03e21ae8 */
                    /* catch() { ... } // from try @ 03e20208 with catch @ 03e21aec */
                    /* catch() { ... } // from try @ 03e21884 with catch @ 03e21af0 */
    thunk_FUN_01efb3a4(PTR_DAT_045798e8);
                    /* catch() { ... } // from try @ 03e21880 with catch @ 03e21af4 */
                    /* catch() { ... } // from try @ 03e2038c with catch @ 03e21af8 */
                    /* catch() { ... } // from try @ 03e2187c with catch @ 03e21afc */
    thunk_FUN_01efb3a4(PTR_DAT_045798f0);
                    /* catch() { ... } // from try @ 03e201f8 with catch @ 03e21b00 */
                    /* catch() { ... } // from try @ 03e21878 with catch @ 03e21b04 */
                    /* catch() { ... } // from try @ 03e2037c with catch @ 03e21b08 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* catch() { ... } // from try @ 03e214b0 with catch @ 03e21b0c */
                    /* catch() { ... } // from try @ 03e201a4 with catch @ 03e21b10 */
                    /* catch() { ... } // from try @ 03e21874 with catch @ 03e21b14 */
    thunk_FUN_01efb3a4(PTR_DAT_045798f8);
                    /* catch() { ... } // from try @ 03e1ff58 with catch @ 03e21b18 */
                    /* catch() { ... } // from try @ 03e21870 with catch @ 03e21b1c */
                    /* catch() { ... } // from try @ 03e21074 with catch @ 03e21b20 */
    thunk_FUN_01efb3a4(PTR_DAT_04579900);
    thunk_FUN_01efb3a4(PTR_DAT_04579908);
    thunk_FUN_01efb3a4(PTR_DAT_04579910);
    *(undefined1 *)(unaff_x20 + 0x814) = 1;
  }
  if (*(uint *)(param_1 + 0x10) < 5) {
    lVar8 = *(long *)(param_1 + 0x28);
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = FUN_02728254(*(long *)(lVar8 + 0x38),*(undefined8 *)PTR_DAT_045798f8);
      *(undefined8 *)(lStack0000000000000018 + 0x30) = uVar2;
      thunk_FUN_01f51358();
      param_1 = lStack0000000000000018;
      break;
    case 2:
      goto switchD_03e21b70_caseD_2;
    case 3:
      goto switchD_03e21b70_caseD_3;
    case 4:
      goto switchD_03e21b70_caseD_4;
    }
    plVar7 = *(long **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
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
      plVar7 = *(long **)(lStack0000000000000018 + 0x30);
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
        *(undefined8 *)(lStack0000000000000018 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        thunk_FUN_01f51358();
        *(undefined4 *)(lStack0000000000000018 + 0x10) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03e221e8();
    *(undefined8 *)(lStack0000000000000018 + 0x30) = 0;
    thunk_FUN_01f51358((undefined8 *)(lStack0000000000000018 + 0x30),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar8 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = FUN_02729794(*(long *)(lVar8 + 0x40),*(undefined8 *)PTR_DAT_04579908);
    *(undefined8 *)(lStack0000000000000018 + 0x38) = uVar2;
    thunk_FUN_01f51358();
    param_1 = lStack0000000000000018;
switchD_03e21b70_caseD_2:
    plVar7 = *(long **)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
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
      *(undefined8 *)(lStack0000000000000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(lStack0000000000000018 + 0x38),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = FUN_0272ada8(*(long *)(lVar8 + 0x48),*(undefined8 *)PTR_DAT_04579910);
      *(undefined8 *)(lStack0000000000000018 + 0x40) = uVar2;
      thunk_FUN_01f51358();
      param_1 = lStack0000000000000018;
switchD_03e21b70_caseD_3:
      plVar7 = *(long **)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffb;
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
        *(undefined8 *)(lStack0000000000000018 + 0x40) = 0;
        thunk_FUN_01f51358((undefined8 *)(lStack0000000000000018 + 0x40),0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar8 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = FUN_02728cf4(*(long *)(lVar8 + 0x50),*(undefined8 *)PTR_DAT_04579900);
        *(undefined8 *)(lStack0000000000000018 + 0x48) = uVar2;
        thunk_FUN_01f51358();
        param_1 = lStack0000000000000018;
switchD_03e21b70_caseD_4:
        plVar7 = *(long **)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffa;
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
          *(undefined8 *)(lStack0000000000000018 + 0x48) = 0;
          thunk_FUN_01f51358((undefined8 *)(lStack0000000000000018 + 0x48),0);
          goto LAB_03e21fbc;
        }
        plVar7 = *(long **)(lStack0000000000000018 + 0x48);
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
        *(undefined8 *)(lStack0000000000000018 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        thunk_FUN_01f51358();
        uVar4 = 4;
      }
      else {
        plVar7 = *(long **)(lStack0000000000000018 + 0x40);
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
        *(undefined8 *)(lStack0000000000000018 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        thunk_FUN_01f51358();
        uVar4 = 3;
      }
    }
    else {
      plVar7 = *(long **)(lStack0000000000000018 + 0x38);
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
      *(undefined8 *)(lStack0000000000000018 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      thunk_FUN_01f51358();
      uVar4 = 2;
    }
    *(undefined4 *)(lStack0000000000000018 + 0x10) = uVar4;
    uVar2 = 1;
  }
  else {
LAB_03e21fbc:
    uVar2 = 0;
  }
  return uVar2;
}


