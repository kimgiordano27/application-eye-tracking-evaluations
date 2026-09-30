/*
FUNCTION_NAME: FUN_035695e8
ENTRY_POINT: 035695e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_10
*/


void FUN_035695e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  puVar10 = Method_System_Collections_Generic_Queue<TransformFollower>_Enqueue__;
  puVar9 = Method_System_Collections_Generic_Queue<TransformFollower>_Clear__;
  puVar8 = Method_System_Collections_Generic_Queue<TransformFollower>__ctor__;
  puVar7 = System_Data_NameNode_var;
  puVar6 = PTR_DAT_04239698;
  puVar5 = PTR_DAT_04237a90;
  puVar4 = PTR_DAT_04234aa8;
  puVar3 = PTR_DAT_04234aa0;
  if ((DAT_04537939 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<TransformFollower>_GetEnumerator__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<TransformFollower>_get_Count__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<Vector3>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<Vector3>_Dequeue__);
    FUN_01c5d288(PTR_DAT_04234aa8);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<Vector3>_Enqueue__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<TransformFollower>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<TransformFollower>_Clear__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<TransformFollower>_Enqueue__);
    FUN_01c5d288(PTR_DAT_04234aa0);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(PTR_DAT_04232bd8);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<Vector3>_Peek__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<Vector3>_get_Count__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<WebRequestQueueOperation>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Contains__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Dequeue__);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Enqueue__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Peek__);
    FUN_01c5d288(PTR_DAT_04239698);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_04537939 = 1;
  }
  puVar11 = Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Dequeue__;
  puVar1 = PTR_DAT_042303a0;
  lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
  *(undefined8 *)(lVar13 + 0x2c) = DAT_00b912d8;
  uVar12 = DAT_00b918c8;
  *(undefined4 *)(lVar13 + 0x10) = 1000;
  *(undefined8 *)(lVar13 + 0x20) = 0;
  *(undefined1 *)(lVar13 + 0x28) = 0;
  *(undefined4 *)(lVar13 + 0x34) = 0x3c23d70a;
  *(undefined1 *)(lVar13 + 0x38) = 0;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(undefined1 *)(lVar13 + 0x48) = 0;
  *(undefined8 *)(lVar13 + 0x4c) = uVar12;
  *(undefined1 *)(lVar13 + 0x54) = 1;
  *(undefined4 *)(lVar13 + 0x70) = 0xbf800000;
  *(undefined8 *)(lVar13 + 0x78) = 0;
  puVar2 = PTR_DAT_04230910;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02b9aa54(uVar12,*(undefined8 *)puVar4);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
  FUN_0350971c(uVar12,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
  FUN_03559a7c(uVar12,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x90) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar9);
  FUN_02b854b0(uVar12,*(undefined8 *)puVar8);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar9);
  FUN_02b854b0(uVar12,*(undefined8 *)puVar8);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa0) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar10);
  FUN_02b9aa54(uVar12,*(undefined8 *)Method_System_Collections_Generic_Queue<Vector3>_Enqueue__);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa8) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                               Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Contains__
                             );
  FUN_02f17044(uVar12,0x1d,
               *(undefined8 *)
                Method_System_Collections_Generic_Queue<WebRequestQueueOperation>__ctor__);
  lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
  *(undefined8 *)(lVar13 + 0xb0) = uVar12;
  *(undefined2 *)(lVar13 + 0xd0) = 0;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                               Method_System_Collections_Generic_Queue<Vector3>_Dequeue__);
  FUN_0290bee4(uVar12,*(undefined8 *)
                       Method_System_Collections_Generic_Queue<TransformFollower>_get_Count__);
  lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
  *(undefined8 *)(lVar13 + 0xe8) = uVar12;
  *(undefined1 *)(lVar13 + 0xf8) = 1;
  *(undefined4 *)(lVar13 + 0x108) = 0;
  uVar12 = *(undefined8 *)Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Peek__;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar12 = FUN_032e04b8(uVar12,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x110) = uVar12;
  uVar12 = FUN_032e04b8(*(undefined8 *)puVar11,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x118) = uVar12;
  local_64[0] = 0;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_64);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x120) = uVar12;
  local_68[0] = 1;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_68);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x128) = uVar12;
  local_6c[0] = 2;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_6c);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x130) = uVar12;
  local_70[0] = 3;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_70);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x138) = uVar12;
  local_74[0] = 4;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_74);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x140) = uVar12;
  local_78[0] = 5;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_78);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x148) = uVar12;
  local_7c[0] = 6;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_7c);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x150) = uVar12;
  local_80[0] = 7;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_80);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x158) = uVar12;
  local_84[0] = 8;
  uVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_84);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x160) = uVar12;
  uVar12 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x168) = uVar12;
  uVar12 = FUN_01c5d2fc(*(undefined8 *)puVar2,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x170) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                               Method_System_Collections_Generic_Queue<Vector3>_get_Count__);
  FUN_02d4f880(uVar12,*(undefined8 *)Method_System_Collections_Generic_Queue<Vector3>_Peek__);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x178) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
  FUN_0350971c(uVar12,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x180) = uVar12;
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
  FUN_0350971c(uVar12,0);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x188) = uVar12;
  lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
  FUN_03559a7c(lVar13,0);
  if (lVar13 != 0) {
    *(undefined1 *)(lVar13 + 0x10) = 6;
    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 400) = lVar13;
    lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
    FUN_03559a7c(lVar13,0);
    if (lVar13 != 0) {
      *(undefined1 *)(lVar13 + 0x20) = 1;
      *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x198) = lVar13;
      lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
      FUN_03559a7c(lVar13,0);
      if (lVar13 != 0) {
        *(undefined1 *)(lVar13 + 0x20) = 0;
        *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1a0) = lVar13;
        puVar3 = PTR_DAT_04232bd8;
        lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
        FUN_03559a7c(lVar13,0);
        uVar12 = FUN_01c5d2fc(*(undefined8 *)puVar3,1);
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x18) = uVar12;
          *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1a8) = lVar13;
          uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
          FUN_0350971c(uVar12,0);
          *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1b0) = uVar12;
          lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
          FUN_03559a7c(lVar13,0);
          if (lVar13 != 0) {
            *(undefined1 *)(lVar13 + 0x10) = 6;
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1b8) = lVar13;
            puVar8 = Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Enqueue__;
            puVar4 = Method_System_Collections_Generic_Queue<Vector3>__ctor__;
            puVar3 = Method_System_Collections_Generic_Queue<TransformFollower>_GetEnumerator__;
            uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
            FUN_0350971c(uVar12,0);
            *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c0) = uVar12;
            uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
            FUN_03559a7c(uVar12,0);
            lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
            *(undefined8 *)(lVar13 + 0x1c8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1d0) = 0x14;
            lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar8);
            FUN_03313b6c(lVar13,0);
            *(undefined1 *)(lVar13 + 0x24) = 1;
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1d8) = lVar13;
            lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar8);
            FUN_03313b6c(lVar13,0);
            *(undefined1 *)(lVar13 + 0x24) = 0;
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1e0) = lVar13;
            uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
            FUN_03559a7c(uVar12,0);
            *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1e8) = uVar12;
            uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
            FUN_02985e2c(uVar12,*(undefined8 *)puVar3);
            *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1f0) = uVar12;
            FUN_03569d98();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


