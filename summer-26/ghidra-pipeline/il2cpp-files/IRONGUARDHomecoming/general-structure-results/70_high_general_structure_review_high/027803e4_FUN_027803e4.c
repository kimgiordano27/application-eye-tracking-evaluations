/*
FUNCTION_NAME: FUN_027803e4
ENTRY_POINT: 027803e4
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


void FUN_027803e4(long *param_1,long param_2)

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
  
                    /* try { // try from 027803f8 to 0288045b has its CatchHandler @ 02780508 */
  if ((DAT_0483042e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Flush__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Read__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_ReadInternal__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Seek__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_EndWrite__);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_EndRead__);
    thunk_FUN_01efb3a4(Method_Mono_Unity_Debug_CheckAndThrow__);
                    /* try { // try from 02780470 to 028804b3 has its CatchHandler @ 0278050c */
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_SetLength__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    DAT_0483042e = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__;
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  lVar11 = *(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__;
  *(undefined8 *)((long)param_1 + 0x3e4) = **(undefined8 **)(lVar11 + 0xb8);
  lVar11 = **(long **)(lVar11 + 0xb8);
                    /* try { // try from 027804dc to 028804df has its CatchHandler @ 02780504 */
  *(undefined4 *)(param_1 + 0x7f) = 2;
                    /* try { // try from 027804e0 to 028804f3 has its CatchHandler @ 02780510 */
  param_1[0x7e] = lVar11;
  puVar2 = Method_Mono_Unity_Debug_CheckAndThrow__;
                    /* try { // try from 027804f4 to 02880527 has its CatchHandler @ 027800e4 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027804dc with catch @ 02780504
                        */
  FUN_04228304(param_1,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027803f8 with catch @ 02780508
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02780470 with catch @ 0278050c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027804e0 with catch @ 02780510
                        */
  FUN_041e7144(param_1,1,0);
  lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                    /* try { // try from 02780528 to 0288053f has its CatchHandler @ 02780574 */
  FUN_042490ec(lVar11,0);
  plVar10 = param_1 + 0x79;
  param_1[0x79] = lVar11;
  thunk_FUN_01f51358(plVar10,lVar11);
                    /* try { // try from 02780540 to 02880563 has its CatchHandler @ 027800e4 */
  if (param_1[0x79] != 0) {
    FUN_042495d4(param_1[0x79],0,0);
                    /* try { // try from 02780564 to 02880573 has its CatchHandler @ 02780574 */
    if ((*plVar10 == 0) ||
       (plVar4 = (long *)FUN_04246170(*plVar10,0),
       puVar1 = Method_System_IO_Compression_DeflateStream_EndRead__, plVar4 == (long *)0x0))
    goto LAB_02780fc4;
    lVar11 = *plVar4;
                    /* catch() { ... } // from try @ 02780528 with catch @ 02780574
                       catch() { ... } // from try @ 02780564 with catch @ 02780574 */
                    /* try { // try from 02780578 to 0288057b has its CatchHandler @ 02780584 */
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* try { // try from 0278057c to 02880587 has its CatchHandler @ 027800e4 */
    if (uVar12 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02780578 with catch @ 02780584
                        */
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)Method_System_IO_Compression_DeflateStream_EndRead__
           ) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_027805c4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_System_IO_Compression_DeflateStream_EndRead__,1);
LAB_027805c4:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
    if ((*plVar10 == 0) ||
       (plVar4 = (long *)FUN_042448f0(*plVar10,0),
       puVar2 = Method_System_IO_Compression_DeflateStream_EndWrite__, plVar4 == (long *)0x0))
    goto LAB_02780fc4;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_System_IO_Compression_DeflateStream_EndWrite__) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_02780644;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_System_IO_Compression_DeflateStream_EndWrite__,3);
LAB_02780644:
    (*(code *)*puVar5)(plVar4,0,puVar5[1]);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_042448f0(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_02780fc4;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1f) * 0x10 + 0x138);
          goto LAB_027806bc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x1f);
LAB_027806bc:
    (*(code *)*puVar5)(plVar4,0,puVar5[1]);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_042448f0(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_02780fc4;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
          goto LAB_02780734;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x1b);
LAB_02780734:
    (*(code *)*puVar5)(plVar4,0,puVar5[1]);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_04246170(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_02780fc4;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_027807ac;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,1);
LAB_027807ac:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
    if (*plVar10 == 0) goto LAB_02780fc4;
    FUN_042495ac(*plVar10,0,0);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_04246170(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_02780fc4;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
          goto LAB_02780838;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0x10);
LAB_02780838:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
    if ((*plVar10 == 0) || (plVar4 = (long *)FUN_04246170(*plVar10,0), plVar4 == (long *)0x0))
    goto LAB_02780fc4;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x12) * 0x10 + 0x138);
          goto LAB_027808b0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0x12);
LAB_027808b0:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
    lVar11 = *plVar10;
    if (lVar11 == 0) goto LAB_02780fc4;
    *(undefined4 *)(lVar11 + 0x24) = 0;
    plVar4 = (long *)FUN_042448f0(lVar11,0);
    puVar1 = Method_System_IO_Compression_DeflateStream_Seek__;
    if (plVar4 == (long *)0x0) goto LAB_02780fc4;
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
          goto LAB_02780934;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0xb);
LAB_02780934:
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
      if (lVar8 == 0) goto LAB_02780ad8;
    }
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar14) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
          goto LAB_027809f0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar14,0xc);
LAB_027809f0:
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
            goto LAB_02780a70;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0xd);
LAB_02780a70:
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
LAB_02780ad8:
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
            goto LAB_02780b38;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar14,0xe);
LAB_02780b38:
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
              goto LAB_02780bb8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0xf);
LAB_02780bb8:
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
                goto LAB_02780c68;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x10);
LAB_02780c68:
          (*(code *)*puVar5)(plVar4,plVar9,puVar5[1]);
          if ((*plVar10 == 0) || (plVar4 = (long *)FUN_042448f0(*plVar10,0), plVar4 == (long *)0x0))
          goto LAB_02780fc4;
          lVar11 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x11) * 0x10 + 0x138);
                goto LAB_02780ce0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x11);
LAB_02780ce0:
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
                  goto LAB_02780d90;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0x12);
LAB_02780d90:
            (*(code *)*puVar5)(plVar4,plVar9,puVar5[1]);
            if ((*plVar10 == 0) ||
               (plVar10 = (long *)FUN_042448f0(*plVar10,0), plVar10 == (long *)0x0))
            goto LAB_02780fc4;
            lVar11 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x13) * 0x10 + 0x138);
                  goto LAB_02780e08;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0x13);
LAB_02780e08:
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
                    goto LAB_02780eb8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0x14);
LAB_02780eb8:
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
              FUN_02780ff4(param_1,*(undefined8 *)
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
LAB_02780fc4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


