/*
FUNCTION_NAME: FUN_0279dd78
ENTRY_POINT: 0279dd78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void FUN_0279dd78(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  
                    /* try { // try from 0279dd88 to 0289ddbb has its CatchHandler @ 0279d964 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0279dd70 with catch @ 0279dd98
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0279dc78 with catch @ 0279dd9c
                        */
  if ((DAT_048304c6 & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0279dd04 with catch @ 0279dda0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0279dd74 with catch @ 0279dda4
                        */
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Flush__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
                    /* try { // try from 0279ddbc to 0289ddd3 has its CatchHandler @ 0279de08 */
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Read__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_ReadInternal__);
                    /* try { // try from 0279ddd4 to 0289ddf7 has its CatchHandler @ 0279d964 */
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Seek__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_EndWrite__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_EndRead__);
                    /* try { // try from 0279ddf8 to 0289de07 has its CatchHandler @ 0279de08 */
    thunk_FUN_01efb3a4(Method_Mono_Unity_Debug_CheckAndThrow__);
                    /* catch() { ... } // from try @ 0279ddbc with catch @ 0279de08
                       catch() { ... } // from try @ 0279ddf8 with catch @ 0279de08 */
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_SetLength__);
                    /* try { // try from 0279de0c to 0289de0f has its CatchHandler @ 0279de18 */
                    /* try { // try from 0279de10 to 0289de1b has its CatchHandler @ 0279d964 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0279de0c with catch @ 0279de18
                        */
    DAT_048304c6 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__;
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  lVar10 = *(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__;
  *(undefined8 *)((long)param_1 + 0x3e4) = **(undefined8 **)(lVar10 + 0xb8);
  lVar10 = **(long **)(lVar10 + 0xb8);
  *(undefined4 *)(param_1 + 0x7f) = 2;
  param_1[0x7e] = lVar10;
  puVar2 = Method_Mono_Unity_Debug_CheckAndThrow__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_04228304(param_1,0);
  FUN_041e7144(param_1,1,0);
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_042490ec(uVar4,0);
  plVar13 = (long *)(param_2 + 0x20);
  (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x40))(param_1,uVar4);
  lVar10 = (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 8))(param_1);
  if (lVar10 != 0) {
    FUN_042495d4(lVar10,0,0);
    lVar10 = (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 8))(param_1);
    if ((lVar10 == 0) ||
       (plVar5 = (long *)FUN_04246170(lVar10,0),
       puVar1 = Method_System_IO_Compression_DeflateStream_EndRead__, plVar5 == (long *)0x0))
    goto LAB_0279ea14;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_System_IO_Compression_DeflateStream_EndRead__
           ) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0279df88;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)Method_System_IO_Compression_DeflateStream_EndRead__,1);
LAB_0279df88:
    (*(code *)*puVar6)(plVar5,1,puVar6[1]);
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x38))(param_1);
    puVar2 = Method_System_IO_Compression_DeflateStream_EndWrite__;
    if (plVar5 == (long *)0x0) goto LAB_0279ea14;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_IO_Compression_DeflateStream_EndWrite__) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0279e010;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)Method_System_IO_Compression_DeflateStream_EndWrite__,3);
LAB_0279e010:
    (*(code *)*puVar6)(plVar5,0,puVar6[1]);
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x38))(param_1);
    if (plVar5 == (long *)0x0) goto LAB_0279ea14;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1f) * 0x10 + 0x138);
          goto LAB_0279e090;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0x1f);
LAB_0279e090:
    (*(code *)*puVar6)(plVar5,0,puVar6[1]);
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x38))(param_1);
    if (plVar5 == (long *)0x0) goto LAB_0279ea14;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1b) * 0x10 + 0x138);
          goto LAB_0279e110;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0x1b);
LAB_0279e110:
    (*(code *)*puVar6)(plVar5,0,puVar6[1]);
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x10))(param_1);
    if (plVar5 == (long *)0x0) goto LAB_0279ea14;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0279e190;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,1);
LAB_0279e190:
    (*(code *)*puVar6)(plVar5,1,puVar6[1]);
    lVar10 = (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 8))(param_1);
    if (lVar10 == 0) goto LAB_0279ea14;
    FUN_042495ac(lVar10,0,0);
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x10))(param_1);
    if (plVar5 == (long *)0x0) goto LAB_0279ea14;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
          goto LAB_0279e238;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0x10);
LAB_0279e238:
    (*(code *)*puVar6)(plVar5,1,puVar6[1]);
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x10))(param_1);
    if (plVar5 == (long *)0x0) goto LAB_0279ea14;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x12) * 0x10 + 0x138);
          goto LAB_0279e2b8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0x12);
LAB_0279e2b8:
    (*(code *)*puVar6)(plVar5,1,puVar6[1]);
    lVar10 = (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 8))(param_1);
    if (lVar10 == 0) goto LAB_0279ea14;
    *(undefined4 *)(lVar10 + 0x24) = 0;
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x38))(param_1);
    puVar1 = Method_System_IO_Compression_DeflateStream_Seek__;
    if (plVar5 == (long *)0x0) goto LAB_0279ea14;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
          goto LAB_0279e360;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0xb);
LAB_0279e360:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02e670b4(uVar7,param_1,*(undefined8 *)(*param_1 + 0x7b0),0);
    lVar10 = FUN_035afb04(uVar4,uVar7,0);
    lVar14 = *(long *)puVar2;
    if (lVar10 == 0) {
      lVar8 = 0;
    }
    else {
      uVar4 = *(undefined8 *)puVar1;
      lVar8 = thunk_FUN_01f116d0(lVar10,uVar4);
      if (lVar8 == 0) goto LAB_0279e50c;
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
          goto LAB_0279e41c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar14,0xc);
LAB_0279e41c:
    (*(code *)*puVar6)(plVar5,lVar8,puVar6[1]);
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x38))(param_1);
    puVar1 = Method_System_IO_Compression_DeflateStream_Flush__;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
            goto LAB_0279e4a4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0xd);
LAB_0279e4a4:
      uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_02aaed08(uVar7,param_1,*(undefined8 *)(*(long *)(*plVar13 + 0xc0) + 0x50),0);
      lVar10 = FUN_035afb04(uVar4,uVar7,0);
      lVar14 = *(long *)puVar2;
      if (lVar10 == 0) {
        lVar8 = 0;
      }
      else {
        uVar4 = *(undefined8 *)puVar1;
        lVar8 = thunk_FUN_01f116d0(lVar10,uVar4);
        if (lVar8 == 0) {
LAB_0279e50c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar10,uVar4);
        }
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
            goto LAB_0279e56c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar14,0xe);
LAB_0279e56c:
      (*(code *)*puVar6)(plVar5,lVar8,puVar6[1]);
      plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x38))(param_1);
      puVar1 = 
      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
      ;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
              goto LAB_0279e5f4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0xf);
LAB_0279e5f4:
        uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
        FUN_034f6024(uVar7,param_1,*(undefined8 *)(*(long *)(*plVar13 + 0xc0) + 0x58),0);
        plVar9 = (long *)FUN_035afb04(uVar4,uVar7,0);
        if ((plVar9 == (long *)0x0) || (lVar10 = *(long *)puVar1, *plVar9 == lVar10)) {
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
                goto LAB_0279e6a4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0x10);
LAB_0279e6a4:
          (*(code *)*puVar6)(plVar5,plVar9,puVar6[1]);
          plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x38))(param_1);
          if (plVar5 == (long *)0x0) goto LAB_0279ea14;
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x11) * 0x10 + 0x138);
                goto LAB_0279e724;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0x11);
LAB_0279e724:
          uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_034f6024(uVar7,param_1,*(undefined8 *)(*(long *)(*plVar13 + 0xc0) + 0x60),0);
          plVar9 = (long *)FUN_035afb04(uVar4,uVar7,0);
          if ((plVar9 == (long *)0x0) || (lVar10 = *(long *)puVar1, *plVar9 == lVar10)) {
            lVar10 = *plVar5;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x12) * 0x10 + 0x138);
                  goto LAB_0279e7d4;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0x12);
LAB_0279e7d4:
            (*(code *)*puVar6)(plVar5,plVar9,puVar6[1]);
            plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x38))
                                       (param_1);
            if (plVar5 == (long *)0x0) goto LAB_0279ea14;
            lVar10 = *plVar5;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
                  goto LAB_0279e854;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0x13);
LAB_0279e854:
            uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            FUN_034f6024(uVar7,param_1,*(undefined8 *)(*(long *)(*plVar13 + 0xc0) + 0x68),0);
            plVar9 = (long *)FUN_035afb04(uVar4,uVar7,0);
            if ((plVar9 == (long *)0x0) || (lVar10 = *(long *)puVar1, *plVar9 == lVar10)) {
              lVar10 = *plVar5;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x14) * 0x10 + 0x138);
                    goto LAB_0279e904;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0x14);
LAB_0279e904:
              (*(code *)*puVar6)(plVar5,plVar9,puVar6[1]);
              lVar10 = *(long *)(*(long *)(*plVar13 + 0xc0) + 0x70);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              puVar1 = Method_System_IO_Compression_DeflateStream_SetLength__;
              lVar10 = *(long *)(*(long *)(*plVar13 + 0xc0) + 0x70);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44();
              }
              puVar3 = Method_System_IO_Compression_DeflateStream_ReadInternal__;
              puVar2 = Method_System_IO_Compression_DeflateStream_Read__;
              FUN_0422aa74(param_1,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20),0);
              lVar10 = *(long *)puVar1;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar10 = *(long *)puVar1;
              }
              FUN_04227fd8(param_1,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x48),0);
              (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x80))(param_1);
              uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
              FUN_02df9810(uVar4,param_1,*(undefined8 *)(*(long *)(*plVar13 + 0xc0) + 0x88),0);
              FUN_022c2090(param_1,uVar4,0,*(undefined8 *)puVar2);
              *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9,lVar10);
      }
    }
  }
LAB_0279ea14:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


