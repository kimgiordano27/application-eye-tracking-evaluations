/*
FUNCTION_NAME: FUN_03e5daa4
ENTRY_POINT: 03e5daa4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_03e5daa4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar9 = PTR_DAT_0457a600;
  puVar8 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
  if ((DAT_0483a998 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<ContextualMenuPopulateEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0457a618);
    thunk_FUN_01efb3a4(PTR_DAT_0457a620);
    thunk_FUN_01efb3a4(PTR_DAT_0457a628);
    thunk_FUN_01efb3a4(PTR_DAT_0457a630);
    thunk_FUN_01efb3a4(PTR_DAT_0457a638);
    thunk_FUN_01efb3a4(PTR_DAT_0457a640);
    thunk_FUN_01efb3a4(PTR_DAT_0457a648);
    thunk_FUN_01efb3a4(PTR_DAT_0457a088);
    thunk_FUN_01efb3a4(PTR_DAT_0457a650);
    thunk_FUN_01efb3a4(PTR_DAT_0457a658);
    thunk_FUN_01efb3a4(PTR_DAT_0457a660);
    thunk_FUN_01efb3a4(PTR_DAT_0457a668);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(PTR_DAT_0457a028);
    thunk_FUN_01efb3a4(PTR_DAT_0457a5f8);
    thunk_FUN_01efb3a4(PTR_DAT_0457a670);
    thunk_FUN_01efb3a4(PTR_DAT_0457a600);
    thunk_FUN_01efb3a4(PTR_DAT_0457a678);
    thunk_FUN_01efb3a4(PTR_DAT_0457a680);
    thunk_FUN_01efb3a4(PTR_DAT_0457a688);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
    thunk_FUN_01efb3a4(PTR_DAT_0457a690);
    DAT_0483a998 = 1;
  }
  puVar21 = (undefined8 *)(param_1 + 0x30);
  *puVar21 = *(undefined8 *)puVar9;
  thunk_FUN_01f51358(puVar21);
  lVar12 = FUN_01f08890(*(undefined8 *)puVar8,5);
  if (lVar12 == 0) goto LAB_03e5e458;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_03e5e6e4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_0457a678;
  thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x20));
  uVar13 = FUN_040766fc(param_1,0);
  if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_03e5e6e4;
  *(undefined8 *)(lVar12 + 0x28) = uVar13;
  thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x28),uVar13);
  if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_03e5e6e4;
  *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_0457a680;
  thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x30));
  if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_03e5e6e4;
  *(undefined8 *)(lVar12 + 0x38) = *puVar21;
  thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x38));
  puVar8 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_03e5e6e4;
  *(undefined8 *)(lVar12 + 0x40) =
       *(undefined8 *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
  thunk_FUN_01f51358();
  uVar13 = FUN_0340efe8(lVar12,0);
  lVar12 = *(long *)puVar8;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar12);
  }
  FUN_0403eb34(uVar13,param_1,0);
  puVar9 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  lVar12 = param_1 + 0x50;
  FUN_040ced58(lVar12,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x10),0);
  FUN_040ced68(lVar12,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  fVar24 = *(float *)(*(long *)(param_1 + 0xf8) + 0x18);
  iVar23 = -0x80000000;
  if (fVar24 != INFINITY) {
    iVar23 = (int)fVar24;
  }
  FUN_040ced78(lVar12,iVar23,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040ced88(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x1c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040ced98(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x24),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040ceda8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x2c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cedb8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x30),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cedc8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x38),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cedd8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x28),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cede8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x34),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cedf8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x3c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cee08(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cee18(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x40),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cee28(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cee38(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x48),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cee48(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x4c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cee58(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x50),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cee60(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x54),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e5e458;
  FUN_040cee70(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x58),lVar12,0);
  plVar22 = (long *)(param_1 + 0xd8);
  lVar14 = *plVar22;
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) {
    lVar14 = FUN_01f08890(*(undefined8 *)PTR_DAT_0457a5f8,1);
    *plVar22 = lVar14;
    thunk_FUN_01f51358(plVar22,lVar14);
    lVar14 = *plVar22;
    if (lVar14 == 0) goto LAB_03e5e458;
  }
  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03e5e6e4;
  *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(param_1 + 0x100);
  thunk_FUN_01f51358();
  lVar14 = *(long *)(param_1 + 0xf8);
  if (lVar14 == 0) goto LAB_03e5e458;
  fVar24 = (float)*(undefined8 *)(lVar14 + 0x60);
  fVar25 = (float)((ulong)*(undefined8 *)(lVar14 + 0x60) >> 0x20);
  uVar16 = CONCAT44((int)fVar25,(int)fVar24);
  *(ulong *)(param_1 + 0x108) =
       uVar16 ^ (uVar16 ^ 0x8000000080000000) &
                CONCAT44(-(uint)(fVar25 == INFINITY),-(uint)(fVar24 == INFINITY));
  uVar6 = *(uint *)(param_1 + 400);
  iVar23 = -0x80000000;
  if (*(float *)(lVar14 + 0x5c) != INFINITY) {
    iVar23 = (int)*(float *)(lVar14 + 0x5c);
  }
  *(int *)(param_1 + 0x110) = iVar23;
  if ((uVar6 < 8) && ((0xcfU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(&DAT_00d4bd5c + (long)(int)uVar6 * 4);
  }
  lVar14 = *(long *)(param_1 + 0x1a0);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar14 + 0x18) < 5) goto LAB_03e5e6e4;
    lVar15 = *(long *)(param_1 + 0x198);
    if (lVar15 == 0) goto LAB_03e5e458;
    if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_03e5e6e4;
    uVar13 = *(undefined8 *)(lVar14 + 0x60);
    *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(lVar14 + 0x68);
    *(undefined8 *)(lVar15 + 0x60) = uVar13;
    thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x60),0);
    lVar14 = *(long *)(param_1 + 0x1a0);
    if (lVar14 == 0) goto LAB_03e5e458;
    if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_03e5e6e4;
    lVar15 = *(long *)(param_1 + 0x198);
    if (lVar15 == 0) goto LAB_03e5e458;
    if (*(uint *)(lVar15 + 0x18) < 8) goto LAB_03e5e6e4;
    uVar13 = *(undefined8 *)(lVar14 + 0x90);
    *(undefined8 *)(lVar15 + 0x98) = *(undefined8 *)(lVar14 + 0x98);
    *(undefined8 *)(lVar15 + 0x90) = uVar13;
    thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x90),0);
  }
  lVar14 = *(long *)(param_1 + 0x130);
  if ((lVar14 != 0) && (iVar23 = *(int *)(lVar14 + 0x18), 0 < iVar23)) {
    if (*(long *)(param_1 + 0x138) == 0) {
      uVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457a668);
      FUN_030f23f0(uVar13,iVar23,*(undefined8 *)PTR_DAT_0457a648);
      *(undefined8 *)(param_1 + 0x138) = uVar13;
      thunk_FUN_01f51358((long *)(param_1 + 0x138),uVar13);
      lVar14 = *(long *)(param_1 + 0x130);
      if (lVar14 == 0) goto LAB_03e5e458;
    }
    puVar11 = PTR_DAT_0457a658;
    puVar10 = PTR_DAT_0457a628;
    iVar23 = 0;
    do {
      if (*(int *)(lVar14 + 0x18) <= iVar23) goto LAB_03e5e160;
      lVar15 = *(long *)(param_1 + 0x138);
      uVar13 = FUN_030f28e4(lVar14,iVar23,*(undefined8 *)puVar11);
      if (lVar15 == 0) break;
      lVar14 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)puVar10;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar14 == 0) break;
      uVar6 = *(uint *)(lVar15 + 0x18);
      if (uVar6 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar6 + 1;
        *(undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20) = uVar13;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4(lVar15,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *(long *)(param_1 + 0x130);
      iVar23 = iVar23 + 1;
    } while (lVar14 != 0);
    goto LAB_03e5e458;
  }
LAB_03e5e160:
  lVar14 = *(long *)(param_1 + 0x148);
  if (lVar14 == 0) {
    uVar16 = FUN_0340e600(0,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
    if ((uVar16 & 1) != 0) {
      lVar14 = *(long *)(param_1 + 0x148);
      goto LAB_03e5e188;
    }
    uVar13 = FUN_040766fc(param_1,0);
    uVar13 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_0457a670,uVar13,*(undefined8 *)PTR_DAT_0457a688,0);
    lVar14 = *(long *)puVar8;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar14);
    }
    FUN_0403f3d4(uVar13,param_1,0);
  }
  else {
LAB_03e5e188:
    *(long *)(param_1 + 0x38) = lVar14;
    thunk_FUN_01f51358();
  }
  lVar14 = *(long *)(param_1 + 0xb0);
  if (lVar14 != 0) {
    iVar23 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar23) {
      FUN_0358d1e4(*(undefined8 *)(lVar14 + 0x10),0,iVar23,0);
    }
    lVar14 = *(long *)(param_1 + 0xc0);
    if (lVar14 != 0) {
      iVar23 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (0 < iVar23) {
        FUN_0358d1e4(*(undefined8 *)(lVar14 + 0x10),0,iVar23,0);
      }
      puVar9 = PTR_DAT_0457a660;
      puVar8 = PTR_DAT_0457a618;
      lVar14 = *(long *)(param_1 + 0x118);
      if (lVar14 != 0) {
        bVar7 = false;
        iVar23 = 0;
        do {
          if (*(int *)(lVar14 + 0x18) <= iVar23) {
            if (!bVar7) {
              uVar13 = FUN_040766fc(param_1,0);
              uVar13 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_0457a690,uVar13,
                                    *(undefined8 *)
                                     Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                                    ,0);
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
              }
              FUN_0403ea2c(uVar13,0);
              fVar24 = (float)FUN_040ceda0(lVar12,0);
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0;
              FUN_040cf0dc(0,0,0,0,fVar24 / 5.0,&local_98,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<ContextualMenuPopulateEvent>__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              auVar27 = FUN_040cee98(0);
              uVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
              uStack_c8 = uStack_90;
              local_d0 = local_98;
              local_c0 = local_88;
              FUN_040cf39c(0x3f800000,uVar13,0,&local_d0,auVar27._0_8_,auVar27._8_8_,0,0);
              lVar12 = *(long *)(param_1 + 0xb0);
              if (lVar12 == 0) break;
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar15 = *(long *)PTR_DAT_0457a620;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) break;
              uVar6 = *(uint *)(lVar12 + 0x18);
              if (uVar6 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar6 + 1;
                puVar21 = (undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
                *puVar21 = uVar13;
                thunk_FUN_01f51358(puVar21,uVar13);
              }
              else {
                FUN_030f2bb4(lVar12,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *(long *)(param_1 + 0xc0);
              uVar17 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457a028);
              FUN_03e56b7c(uVar17,0x20,param_1,uVar13);
              if (lVar12 == 0) break;
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar15 = *(long *)PTR_DAT_0457a630;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) break;
              uVar6 = *(uint *)(lVar12 + 0x18);
              if (uVar6 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar6 + 1;
                puVar21 = (undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
                *puVar21 = uVar17;
                thunk_FUN_01f51358(puVar21,uVar17);
              }
              else {
                FUN_030f2bb4(lVar12,uVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_03e5d014(param_1);
            return;
          }
          lVar14 = FUN_030f28e4(lVar14,iVar23,*(undefined8 *)puVar9);
          lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
          FUN_040cf2e8(lVar15,0);
          if (lVar15 == 0) break;
          iVar23 = iVar23 + 1;
          FUN_040cf284(lVar15,iVar23,0);
          if (lVar14 == 0) break;
          fVar24 = *(float *)(lVar14 + 0x18) + *(float *)(lVar14 + 0x20) + 0.5;
          fVar25 = *(float *)(lVar14 + 0x1c) + 0.5;
          iVar5 = -0x80000000;
          if (*(float *)(lVar14 + 0x14) != INFINITY) {
            iVar5 = (int)*(float *)(lVar14 + 0x14);
          }
          fVar26 = *(float *)(lVar14 + 0x20) + 0.5;
          iVar1 = -0x80000000;
          if (fVar24 != INFINITY) {
            iVar1 = (int)fVar24;
          }
          iVar2 = -0x80000000;
          if (fVar25 != INFINITY) {
            iVar2 = (int)fVar25;
          }
          iVar3 = -0x80000000;
          if (fVar26 != INFINITY) {
            iVar3 = (int)fVar26;
          }
          local_80 = 0;
          uStack_78 = 0;
          FUN_040ceef0(&local_80,iVar5,*(int *)(param_1 + 0x10c) - iVar1,iVar2,iVar3,0);
          FUN_040cf2c0(lVar15,local_80,uStack_78,0);
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          FUN_040cf0dc(*(undefined4 *)(lVar14 + 0x1c),*(undefined4 *)(lVar14 + 0x20),
                       *(undefined4 *)(lVar14 + 0x24),*(undefined4 *)(lVar14 + 0x28),
                       *(undefined4 *)(lVar14 + 0x2c),&local_98,0);
          uStack_a8 = uStack_90;
          local_b0 = local_98;
          local_a0 = local_88;
          FUN_040cf2a0(lVar15,&local_b0,0);
          FUN_040cf2d0(*(undefined4 *)(lVar14 + 0x30),lVar15,0);
          FUN_040cf2e0(lVar15,0,0);
          lVar19 = *(long *)(param_1 + 0xb0);
          if (lVar19 == 0) break;
          lVar18 = *(long *)(lVar19 + 0x10);
          lVar20 = *(long *)PTR_DAT_0457a620;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar18 == 0) break;
          uVar6 = *(uint *)(lVar19 + 0x18);
          if (uVar6 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar6 + 1;
            plVar22 = (long *)(lVar18 + (long)(int)uVar6 * 8 + 0x20);
            *plVar22 = lVar15;
            thunk_FUN_01f51358(plVar22,lVar15);
          }
          else {
            FUN_030f2bb4(lVar19,lVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          uVar4 = *(undefined4 *)(lVar14 + 0x10);
          uVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457a028);
          FUN_03e56b7c(uVar13,uVar4,param_1,lVar15);
          iVar5 = *(int *)(lVar14 + 0x10);
          lVar14 = *(long *)(param_1 + 0xc0);
          if (lVar14 == 0) break;
          lVar15 = *(long *)(lVar14 + 0x10);
          lVar19 = *(long *)PTR_DAT_0457a630;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar15 == 0) break;
          uVar6 = *(uint *)(lVar14 + 0x18);
          if (uVar6 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar6 + 1;
            puVar21 = (undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
            *puVar21 = uVar13;
            thunk_FUN_01f51358(puVar21,uVar13);
          }
          else {
            FUN_030f2bb4(lVar14,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = *(long *)(param_1 + 0x118);
          bVar7 = (bool)(bVar7 | iVar5 == 0x20);
        } while (lVar14 != 0);
      }
    }
  }
LAB_03e5e458:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


