/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit$$OnRequestFirstResponse
ENTRY_POINT: 032bce54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_TTS_Integrations_TTSWit__OnRequestFirstResponse
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined1 in_ZR;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar13;
  undefined8 *unaff_x25;
  long *plVar14;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x10) * 0x10 + 0x138);
      goto LAB_032bce78;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_032bce78:
  cVar4 = (*(code *)*puVar5)();
  if (cVar4 == '\f') {
    plVar14 = *(long **)(unaff_x23 + 0x10);
    if (plVar14 == (long *)0x0) {
LAB_032bd5ec:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
          goto FUN_032bcf30;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x27,0xd);
FUN_032bcf30:
    (*(code *)*puVar5)(plVar14,(long *)(unaff_x23 + 0x28),puVar5[1]);
    plVar14 = (long *)*unaff_x19;
    if (plVar14 == (long *)0x0) goto LAB_032bd5ec;
    lVar6 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
          goto LAB_032bcf98;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x27,0x10);
LAB_032bcf98:
    cVar4 = (*(code *)*puVar5)(plVar14);
    if ((cVar4 == '\x01') &&
       (uVar10 = FUN_0340e600(*unaff_x25,
                              *(undefined8 *)
                               Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString64Bytes,_FixedString128Bytes>__
                              ,0), (uVar10 & 1) == 0)) {
      plVar14 = (long *)*unaff_x19;
      if (plVar14 == (long *)0x0) goto LAB_032bd5ec;
      lVar6 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
            goto LAB_032bd074;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x27,0x16);
LAB_032bd074:
      (*(code *)*puVar5)(plVar14,&stack0x00000018,puVar5[1]);
      lVar6 = in_stack_00000018;
      lVar7 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__,1)
      ;
      if (lVar7 == 0) goto LAB_032bd5ec;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_032bd4e4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined2 *)(lVar7 + 0x20) = 0x7c;
      if ((lVar6 == 0) || (lVar6 = FUN_03411150(lVar6,lVar7,0), lVar6 == 0)) goto LAB_032bd5ec;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (**(int **)(lVar7 + 0xb8) == *(int *)(lVar6 + 0x18)) {
        lVar7 = FUN_01f08890(*(undefined8 *)
                              Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
          if (lVar7 == 0) goto LAB_032bd5ec;
        }
        else {
          uVar10 = 0;
          uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar10) goto LAB_032bd4e4;
            uVar8 = FUN_03568ae4(*(undefined8 *)(lVar6 + 0x20 + uVar10 * 8),
                                 (long)&stack0x00000010 + 4,0);
            if ((uVar8 & 1) == 0) {
              *unaff_x22 = 0;
              plVar14 = (long *)*unaff_x19;
              if (plVar14 == (long *)0x0) goto LAB_032bd5ec;
              lVar7 = *plVar14;
              lVar6 = *unaff_x27;
              uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar10 == 0) goto LAB_032bd00c;
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_032bd310;
            }
            if (lVar7 == 0) goto LAB_032bd5ec;
            if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_032bd4e4;
            *(undefined4 *)(lVar7 + 0x20 + uVar10 * 4) = in_stack_00000010._4_4_;
            uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        iVar9 = (int)*(ulong *)(lVar7 + 0x18);
        if (iVar9 == 0) goto LAB_032bd4e4;
        lVar6 = (long)*(int *)(lVar7 + 0x20);
        if (1 < iVar9) {
          lVar11 = 0;
          do {
            if ((*(ulong *)(lVar7 + 0x18) & 0xffffffff) - 1 == lVar11) goto LAB_032bd4e4;
            lVar1 = lVar11 * 4;
            lVar2 = lVar11 + 2;
            lVar11 = lVar11 + 1;
            lVar6 = lVar6 * *(int *)(lVar7 + 0x24 + lVar1);
          } while (lVar2 < iVar9);
        }
        if (lVar6 == *(long *)(unaff_x23 + 0x28)) {
          uVar13 = *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          lVar6 = FUN_0358ccb0(uVar13,lVar7,0);
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44(lVar7);
          }
          if (lVar6 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = thunk_FUN_01f116d0(lVar6,lVar7);
            if (lVar11 == 0) goto LAB_032bd3a8;
          }
          *unaff_x22 = lVar11;
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44(lVar7);
          }
          if ((lVar6 != 0) && (lVar11 = thunk_FUN_01f116d0(lVar6,lVar7), lVar11 == 0)) {
LAB_032bd3a8:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar6,lVar7);
          }
          thunk_FUN_01f51358();
          if (unaff_x20 != 0) {
            FUN_02984264(unaff_x20,*unaff_x22,*(undefined8 *)(unaff_x23 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58));
            *(undefined4 *)(unaff_x23 + 0x20) = 0;
            plVar14 = (long *)*unaff_x22;
            if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68) + 0x135)
                & 1) == 0) {
              FUN_01ecaf44();
            }
            uVar13 = thunk_FUN_01f117cc();
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70))();
            if (plVar14 != (long *)0x0) {
              bVar3 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                               + 0x130);
              if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
                  *(long *)
                   Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                 )) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar14);
              }
            }
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78))
                      (unaff_x20,plVar14,uVar13);
            plVar14 = (long *)*unaff_x19;
            if (plVar14 != (long *)0x0) {
              lVar6 = *plVar14;
              uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar10 != 0) {
                piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *unaff_x27) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
                    goto LAB_032bd4d4;
                  }
                  uVar10 = uVar10 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar10 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x27,0xe);
LAB_032bd4d4:
              (*(code *)*puVar5)(plVar14,puVar5[1]);
              return;
            }
          }
          goto LAB_032bd5ec;
        }
        *unaff_x22 = 0;
        plVar14 = (long *)*unaff_x19;
        if (plVar14 == (long *)0x0) goto LAB_032bd5ec;
        lVar7 = *plVar14;
        lVar6 = *unaff_x27;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) goto LAB_032bd32c;
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
      }
      else {
        *unaff_x22 = 0;
        plVar14 = (long *)*unaff_x19;
        if (plVar14 == (long *)0x0) goto LAB_032bd5ec;
        lVar7 = *plVar14;
        lVar6 = *unaff_x27;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) goto LAB_032bd32c;
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
      }
    }
    else {
      *unaff_x22 = 0;
      plVar14 = (long *)*unaff_x19;
      if (plVar14 == (long *)0x0) goto LAB_032bd5ec;
      lVar7 = *plVar14;
      lVar6 = *unaff_x27;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar6) goto LAB_032bd32c;
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
    }
  }
  else {
    *unaff_x22 = 0;
    plVar14 = (long *)*unaff_x19;
    if (plVar14 == (long *)0x0) goto LAB_032bd5ec;
    lVar7 = *plVar14;
    lVar6 = *unaff_x27;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) goto LAB_032bd32c;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
  }
  goto LAB_032bd00c;
LAB_032bd32c:
  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
  goto LAB_032bd33c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_032bd310:
    if (*(long *)(piVar12 + -2) == lVar6) goto LAB_032bd32c;
  }
LAB_032bd00c:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar14,lVar6,0x25);
LAB_032bd33c:
  (*(code *)*puVar5)(plVar14,puVar5[1]);
  return;
}


