/*
FUNCTION_NAME: FUN_0279a18c
ENTRY_POINT: 0279a18c
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


void FUN_0279a18c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  
                    /* try { // try from 0279a19c to 0289a1df has its CatchHandler @ 0279a238 */
  if ((DAT_048304b3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Flush__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Read__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_ReadInternal__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Seek__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_EndWrite__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_EndRead__);
                    /* try { // try from 0279a208 to 0289a20b has its CatchHandler @ 0279a230 */
                    /* try { // try from 0279a20c to 0289a21f has its CatchHandler @ 0279a23c */
    thunk_FUN_01efb3a4(Method_Mono_Unity_Debug_CheckAndThrow__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_SetLength__);
                    /* try { // try from 0279a220 to 0289a253 has its CatchHandler @ 02799df4 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0279a208 with catch @ 0279a230
                        */
    DAT_048304b3 = 1;
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0279a108 with catch @ 0279a234
                        */
  puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0279a19c with catch @ 0279a238
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0279a20c with catch @ 0279a23c
                        */
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  lVar11 = *(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__;
  *(undefined8 *)((long)param_1 + 0x3e4) = **(undefined8 **)(lVar11 + 0xb8);
  lVar11 = **(long **)(lVar11 + 0xb8);
  *(undefined4 *)(param_1 + 0x7f) = 2;
  param_1[0x7e] = lVar11;
  puVar2 = Method_Mono_Unity_Debug_CheckAndThrow__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_04228304(param_1,0);
  FUN_041e7144(param_1,1,0);
  lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_042490ec(lVar11,0);
  plVar10 = param_1 + 0x79;
  param_1[0x79] = lVar11;
  thunk_FUN_01f51358(plVar10,lVar11);
  if (param_1[0x79] != 0) {
    FUN_042495d4(param_1[0x79],0,0);
    if ((*plVar10 == 0) ||
       (plVar4 = (long *)FUN_04246170(*plVar10,0),
       puVar1 = Method_System_IO_Compression_DeflateStream_EndRead__, plVar4 == (long *)0x0))
    goto LAB_0279ad6c;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)Method_System_IO_Compression_DeflateStream_EndRead__
           ) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0279a36c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_System_IO_Compression_DeflateStream_EndRead__,1);
LAB_0279a36c:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
    if ((*plVar10 == 0) ||
       (plVar4 = (long *)FUN_042448f0(*plVar10,0),
       puVar2 = Method_System_IO_Compression_DeflateStream_EndWrite__, plVar4 == (long *)0x0))
    goto LAB_0279ad6c;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_System_IO_Compression_DeflateStream_EndWrite__) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_0279a3ec;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_System_IO_Compression_DeflateStream_EndWrite__,3);
LAB_0279a3ec:
    (*(code *)*puVar5)(plVar4,0,puVar5[1]);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_042448f0(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_0279ad6c;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1f) * 0x10 + 0x138);
          goto LAB_0279a464;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x1f);
LAB_0279a464:
    (*(code *)*puVar5)(plVar4,0,puVar5[1]);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_042448f0(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_0279ad6c;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
          goto System_ValueTuple<uint,_uint>__ToString;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x1b);
System_ValueTuple<uint,_uint>__ToString:
    (*(code *)*puVar5)(plVar4,0,puVar5[1]);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_04246170(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_0279ad6c;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0279a554;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,1);
LAB_0279a554:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
    if (*plVar10 == 0) goto LAB_0279ad6c;
    FUN_042495ac(*plVar10,0,0);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_04246170(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_0279ad6c;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
          goto LAB_0279a5e0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0x10);
LAB_0279a5e0:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_04246170(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_0279ad6c;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x12) * 0x10 + 0x138);
          goto LAB_0279a658;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0x12);
LAB_0279a658:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
    lVar11 = *plVar10;
    if (lVar11 == 0) goto LAB_0279ad6c;
    *(undefined4 *)(lVar11 + 0x24) = 0;
    plVar4 = (long *)FUN_042448f0(lVar11,0);
    puVar1 = Method_System_IO_Compression_DeflateStream_Seek__;
    if (plVar4 == (long *)0x0) goto LAB_0279ad6c;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
          goto LAB_0279a6dc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0xb);
LAB_0279a6dc:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02e670b4(uVar7,param_1,*(undefined8 *)(*param_1 + 0x7b0),0);
    lVar11 = FUN_035afb04(uVar6,uVar7,0);
    lVar14 = *(long *)puVar2;
    if (lVar11 == 0) {
      lVar8 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar8 = thunk_FUN_01f116d0(lVar11,uVar6);
      if (lVar8 == 0) goto LAB_0279a880;
    }
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar14) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
          goto LAB_0279a798;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar14,0xc);
LAB_0279a798:
    (*(code *)*puVar5)(plVar4,lVar8,puVar5[1]);
    if ((*plVar10 != 0) &&
       (plVar4 = (long *)FUN_042448f0(*plVar10,0),
       puVar1 = Method_System_IO_Compression_DeflateStream_Flush__, plVar4 != (long *)0x0)) {
      lVar11 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
            goto LAB_0279a818;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0xd);
LAB_0279a818:
      uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_02aaed08(uVar7,param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50)
                   ,0);
      lVar11 = FUN_035afb04(uVar6,uVar7,0);
      lVar14 = *(long *)puVar2;
      if (lVar11 == 0) {
        lVar8 = 0;
      }
      else {
        uVar6 = *(undefined8 *)puVar1;
        lVar8 = thunk_FUN_01f116d0(lVar11,uVar6);
        if (lVar8 == 0) {
LAB_0279a880:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,uVar6);
        }
      }
      lVar11 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar14) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_0279a8e0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar14,0xe);
LAB_0279a8e0:
      (*(code *)*puVar5)(plVar4,lVar8,puVar5[1]);
      if ((*plVar10 != 0) &&
         (plVar4 = (long *)FUN_042448f0(*plVar10,0),
         puVar1 = 
         Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
         , plVar4 != (long *)0x0)) {
        lVar11 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
              goto LAB_0279a960;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0xf);
LAB_0279a960:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
        FUN_034f6024(uVar7,param_1,
                     *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58),0);
        plVar9 = (long *)FUN_035afb04(uVar6,uVar7,0);
        if ((plVar9 == (long *)0x0) || (lVar11 = *(long *)puVar1, *plVar9 == lVar11)) {
          lVar11 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
                goto LAB_0279aa10;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x10);
LAB_0279aa10:
          (*(code *)*puVar5)(plVar4,plVar9,puVar5[1]);
          if ((*plVar10 == 0) || (plVar4 = (long *)FUN_042448f0(*plVar10,0), plVar4 == (long *)0x0))
          goto LAB_0279ad6c;
          lVar11 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x11) * 0x10 + 0x138);
                goto LAB_0279aa88;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x11);
LAB_0279aa88:
          uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_034f6024(uVar7,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x60),0);
          plVar9 = (long *)FUN_035afb04(uVar6,uVar7,0);
          if ((plVar9 == (long *)0x0) || (lVar11 = *(long *)puVar1, *plVar9 == lVar11)) {
            lVar11 = *plVar4;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x12) * 0x10 + 0x138);
                  goto LAB_0279ab38;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x12);
LAB_0279ab38:
            (*(code *)*puVar5)(plVar4,plVar9,puVar5[1]);
            if ((*plVar10 == 0) ||
               (plVar10 = (long *)FUN_042448f0(*plVar10,0), plVar10 == (long *)0x0))
            goto LAB_0279ad6c;
            lVar11 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x13) * 0x10 + 0x138);
                  goto LAB_0279abb0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0x13);
LAB_0279abb0:
            uVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            FUN_034f6024(uVar7,param_1,
                         *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68),0);
            plVar9 = (long *)FUN_035afb04(uVar6,uVar7,0);
            if ((plVar9 == (long *)0x0) || (lVar11 = *(long *)puVar1, *plVar9 == lVar11)) {
              lVar11 = *plVar10;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x14) * 0x10 + 0x138);
                    goto LAB_0279ac60;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0x14);
LAB_0279ac60:
              (*(code *)*puVar5)(plVar10,plVar9,puVar5[1]);
              lVar11 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01ecaf44();
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              puVar1 = Method_System_IO_Compression_DeflateStream_SetLength__;
              lVar11 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01ecaf44();
              }
              puVar3 = Method_System_IO_Compression_DeflateStream_ReadInternal__;
              puVar2 = Method_System_IO_Compression_DeflateStream_Read__;
              FUN_0422aa74(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x20),0);
              lVar11 = *(long *)puVar1;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar11 = *(long *)puVar1;
              }
              FUN_04227fd8(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48),0);
              FUN_0279ad9c(param_1,*(undefined8 *)
                                    (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80));
              uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
              FUN_02df9810(uVar6,param_1,
                           *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x88),0);
              FUN_022c2090(param_1,uVar6,0,*(undefined8 *)puVar2);
              *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9,lVar11);
      }
    }
  }
LAB_0279ad6c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


