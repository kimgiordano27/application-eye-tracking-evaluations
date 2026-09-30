/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit$$RequestStreamFromWeb
ENTRY_POINT: 032bd040
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_TTS_Integrations_TTSWit__RequestStreamFromWeb
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long in_x9;
  int *in_x10;
  long lVar9;
  int *piVar10;
  long in_x11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar11;
  long unaff_x23;
  long *unaff_x24;
  undefined8 uVar12;
  long *unaff_x27;
  ulong uVar13;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_01ecb238();
      goto LAB_032bd074;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x16) * 0x10 + 0x138);
LAB_032bd074:
  (*(code *)*puVar4)();
  lVar6 = in_stack_00000018;
  lVar5 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__,1);
  if (lVar5 == 0) {
LAB_032bd5ec:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_032bd4e4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined2 *)(lVar5 + 0x20) = 0x7c;
  if ((lVar6 == 0) || (lVar6 = FUN_03411150(lVar6,lVar5,0), lVar6 == 0)) goto LAB_032bd5ec;
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  if (**(int **)(lVar5 + 0xb8) == *(int *)(lVar6 + 0x18)) {
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
      if (lVar5 == 0) goto LAB_032bd5ec;
    }
    else {
      uVar13 = 0;
      uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar13) goto LAB_032bd4e4;
        uVar7 = FUN_03568ae4(*(undefined8 *)(lVar6 + 0x20 + uVar13 * 8),(long)&stack0x00000010 + 4,0
                            );
        if ((uVar7 & 1) == 0) {
          *unaff_x22 = 0;
          plVar11 = (long *)*unaff_x19;
          if (plVar11 == (long *)0x0) goto LAB_032bd5ec;
          lVar5 = *plVar11;
          lVar6 = *unaff_x27;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar13 == 0) goto LAB_032bd00c;
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_032bd310;
        }
        if (lVar5 == 0) goto LAB_032bd5ec;
        if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_032bd4e4;
        *(undefined4 *)(lVar5 + 0x20 + uVar13 * 4) = in_stack_00000010._4_4_;
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    iVar8 = (int)*(ulong *)(lVar5 + 0x18);
    if (iVar8 == 0) goto LAB_032bd4e4;
    lVar6 = (long)*(int *)(lVar5 + 0x20);
    if (1 < iVar8) {
      lVar9 = 0;
      do {
        if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) - 1 == lVar9) goto LAB_032bd4e4;
        lVar1 = lVar9 * 4;
        lVar2 = lVar9 + 2;
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 * *(int *)(lVar5 + 0x24 + lVar1);
                    /* try { // try from 032bd224 to 033bd26f has its CatchHandler @ 032bd224
                       catch() { ... } // from try @ 032bd224 with catch @ 032bd224
                       catch() { ... } // from try @ 032bd2a0 with catch @ 032bd224
                       catch() { ... } // from try @ 032bd2dc with catch @ 032bd224
                       catch() { ... } // from try @ 032bd30c with catch @ 032bd224
                       catch() { ... } // from try @ 032bd38c with catch @ 032bd224 */
      } while (lVar2 < iVar8);
    }
    if (lVar6 == *unaff_x24) {
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03579868(uVar12,0);
      lVar6 = FUN_0358ccb0(uVar12,lVar5,0);
                    /* try { // try from 032bd270 to 033bd29f has its CatchHandler @ 032bd2dc */
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      if (lVar6 == 0) {
        lVar9 = 0;
      }
      else {
                    /* try { // try from 032bd2a0 to 033bd2ab has its CatchHandler @ 032bd224 */
        lVar9 = thunk_FUN_01f116d0(lVar6,lVar5);
        if (lVar9 == 0) goto LAB_032bd3a8;
      }
      *unaff_x22 = lVar9;
                    /* try { // try from 032bd374 to 033bd383 has its CatchHandler @ 032bd384 */
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 032bd2f4 with catch @ 032bd384
                       catch() { ... } // from try @ 032bd374 with catch @ 032bd384 */
                    /* try { // try from 032bd388 to 033bd38b has its CatchHandler @ 032bd394 */
        lVar5 = FUN_01ecaf44(lVar5);
                    /* try { // try from 032bd38c to 033bd397 has its CatchHandler @ 032bd224 */
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032bd388 with catch @ 032bd394
                        */
      if ((lVar6 != 0) && (lVar9 = thunk_FUN_01f116d0(lVar6,lVar5), lVar9 == 0)) {
LAB_032bd3a8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar6,lVar5);
      }
      thunk_FUN_01f51358();
      if (unaff_x20 != 0) {
        FUN_02984264(unaff_x20,*unaff_x22,*(undefined8 *)(unaff_x23 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58));
        *(undefined4 *)(unaff_x23 + 0x20) = 0;
        plVar11 = (long *)*unaff_x22;
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68) + 0x135) & 1)
            == 0) {
          FUN_01ecaf44();
        }
        uVar12 = thunk_FUN_01f117cc();
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70))();
        if (plVar11 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                           + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar11);
          }
        }
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78))
                  (unaff_x20,plVar11,uVar12);
        plVar11 = (long *)*unaff_x19;
        if (plVar11 != (long *)0x0) {
          lVar6 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x27) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                goto LAB_032bd4d4;
              }
              uVar13 = uVar13 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar13 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x27,0xe);
LAB_032bd4d4:
          (*(code *)*puVar4)(plVar11,puVar4[1]);
          return;
        }
      }
      goto LAB_032bd5ec;
    }
                    /* try { // try from 032bd2ac to 033bd2db has its CatchHandler @ 032bd2dc */
    *unaff_x22 = 0;
    plVar11 = (long *)*unaff_x19;
    if (plVar11 == (long *)0x0) goto LAB_032bd5ec;
    lVar5 = *plVar11;
    lVar6 = *unaff_x27;
    uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) goto LAB_032bd32c;
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
  }
  else {
    *unaff_x22 = 0;
    plVar11 = (long *)*unaff_x19;
    if (plVar11 == (long *)0x0) goto LAB_032bd5ec;
    lVar5 = *plVar11;
    lVar6 = *unaff_x27;
    uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) goto LAB_032bd32c;
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
  }
  goto LAB_032bd00c;
LAB_032bd32c:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x25) * 0x10 + 0x138);
  goto LAB_032bd33c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar10 = piVar10 + 4;
    if (uVar13 == 0) break;
LAB_032bd310:
    if (*(long *)(piVar10 + -2) == lVar6) goto LAB_032bd32c;
  }
LAB_032bd00c:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0x25);
LAB_032bd33c:
  (*(code *)*puVar4)(plVar11,puVar4[1]);
  return;
}


