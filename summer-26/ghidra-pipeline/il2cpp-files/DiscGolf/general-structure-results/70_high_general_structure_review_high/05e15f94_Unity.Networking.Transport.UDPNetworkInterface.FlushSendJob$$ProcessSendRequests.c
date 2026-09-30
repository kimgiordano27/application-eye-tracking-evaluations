/*
FUNCTION_NAME: Unity.Networking.Transport.UDPNetworkInterface.FlushSendJob$$ProcessSendRequests
ENTRY_POINT: 05e15f94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Networking_Transport_UDPNetworkInterface_FlushSendJob__ProcessSendRequests
          (long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long unaff_x23;
  long unaff_x24;
  void *__src;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  int iStack0000000000000060;
  undefined4 uStack0000000000000064;
  uint uStack0000000000000068;
  int iStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  uint uStack00000000000000b0;
  int iStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long lStack0000000000000118;
  
  puVar16 = *(undefined8 **)(unaff_x20 + 0xce8);
  lStack0000000000000118 = param_1;
  if ((*(byte *)(unaff_x23 + 0x819) & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyId>_GetEnumerator__);
    FUN_02d965b8(Method_System_Collections_Generic_List<QDOODOQQDQODD>_get_Count__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyId>_get_Count__);
                    /* try { // try from 05e15fd8 to 05f15fdb has its CatchHandler @ 05e15fec */
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyName>__ctor__);
                    /* try { // try from 05e15fdc to 05f15fe3 has its CatchHandler @ 05e15e44 */
                    /* try { // try from 05e15fe4 to 05f15fe7 has its CatchHandler @ 05e15fe8 */
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyName>__ctor__);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05e15f40 with catch @ 05e15fe8
                       catch(type#1 @ 066567d8) { ... } // from try @ 05e15fe4 with catch @ 05e15fe8
                       try { // try from 05e15fe8 to 05f16007 has its CatchHandler @ 05e15e44 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05e15f20 with catch @ 05e15fec
                       catch(type#1 @ 066567d8) { ... } // from try @ 05e15fd8 with catch @ 05e15fec
                        */
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyName>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyName>_AddRange__);
                    /* try { // try from 05e16008 to 05f1600b has its CatchHandler @ 05e16018 */
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyName>_Clear__);
    FUN_02d965b8(PTR_DAT_06a0dea8);
                    /* catch() { ... } // from try @ 05e16008 with catch @ 05e16018 */
                    /* try { // try from 05e1601c to 05f16023 has its CatchHandler @ 05e1602c */
    FUN_02d965b8(PTR_DAT_06a0dd50);
                    /* try { // try from 05e16024 to 05f1602f has its CatchHandler @ 05e15e44 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e1601c with catch @ 05e1602c
                        */
    FUN_02d965b8(Method_System_Collections_Generic_List<NetworkPrefab>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RaycastResult>_GetEnumerator__);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyName>_GetEnumerator__);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyName>_get_Count__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyId>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyName>_get_Item__);
    FUN_02d965b8(PTR_DAT_06a20740);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyValue>__ctor__);
    FUN_02d965b8(PTR_DAT_069fb9e8);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyValue>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<LogEntry>_RemoveAll__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyValue>_AddRange__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyValue>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyValue>_get_Count__);
    FUN_02d965b8(Method_System_Collections_Generic_List<OVRBoneCapsule>_get_Item__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StylePropertyValue>_get_Item__);
    FUN_02d965b8(PTR_DAT_069fba08);
    FUN_02d965b8(Method_System_Collections_Generic_List<StyleSelector>__ctor__);
    *(undefined1 *)(unaff_x23 + 0x819) = 1;
  }
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b8 = 0;
  _uStack00000000000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  lVar9 = thunk_FUN_02dd3144(*puVar16);
  FUN_05e1a9e8(lVar9,0);
  uVar10 = FUN_0536c9cc(param_3,0);
  puVar2 = Method_System_Collections_Generic_List<StylePropertyValue>_get_Item__;
  uVar18 = 0;
  if ((uVar10 & 1) != 0) {
    uVar10 = FUN_0536ba54(*param_2,*(undefined8 *)
                                    Method_System_Collections_Generic_List<StylePropertyValue>_get_Item__
                          ,0);
    uVar18 = 0;
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<StylePropertyName>_Add__ + 0xe4)
          == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05e16870(&stack0x00000060,param_2);
      uVar15 = in_stack_00000088;
      lVar8 = in_stack_00000080;
      uVar6 = _uStack0000000000000068;
      uVar10 = _iStack0000000000000060;
      iVar3 = iStack0000000000000060;
      uVar4 = uStack0000000000000064;
      uVar5 = uStack0000000000000068;
      iVar7 = iStack000000000000006c;
      in_stack_00000108 = in_stack_00000078;
      in_stack_00000100 = in_stack_00000070;
      _iStack0000000000000060 = FUN_05e1bc84(0);
      uVar18 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                   Method_System_Collections_Generic_List<StylePropertyName>_GetEnumerator__
                                  ,&stack0x00000060);
      in_stack_000000a0 = 0;
      FUN_05e1bf1c(&stack0x000000a0,iVar7,uVar6 & 0xffffffff,0);
      uVar11 = FUN_035fd8ec(uVar18,in_stack_000000a0,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List<StylePropertyId>_GetEnumerator__
                           );
      uVar18 = 0;
      if (((uVar11 & 1) != 0) && (lVar8 != 0)) {
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar11 = 0;
          uVar19 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          __src = (void *)(lVar8 + 0x20);
          do {
            if (uVar19 <= uVar11) {
              if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000118) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              goto LAB_05e1686c;
            }
            memcpy(&stack0x000000b0,__src,0x48);
            if ((uStack00000000000000b0 & 0xfffffffe) == 0x30) {
              if (iStack00000000000000b4 == 1) {
LAB_05e162a0:
                puVar1 = PTR_DAT_069fb9c0;
                uVar18 = *(undefined8 *)
                          Method_System_Collections_Generic_List<StylePropertyName>__ctor__;
                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar12 = FUN_054f73b4(uVar18,0);
                uVar17 = *(undefined8 *)puVar2;
                if ((iVar7 == 1) && ((uVar5 & 0xfffffffe) == 4)) {
                  uVar17 = *(undefined8 *)
                            Method_System_Collections_Generic_List<OVRBoneCapsule>_get_Item__;
                  uVar18 = *(undefined8 *)
                            Method_System_Collections_Generic_List<NetworkPrefab>_Add__;
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar12 = FUN_054f73b4(uVar18,0);
                }
                uVar18 = *(undefined8 *)PTR_DAT_069fba08;
                uVar11 = FUN_0536ba54(uVar17,*(undefined8 *)
                                              Method_System_Collections_Generic_List<OVRBoneCapsule>_get_Item__
                                      ,0);
                if ((uVar11 & 1) != 0) {
                  if (iVar7 == 1) {
                    _iStack0000000000000060 = CONCAT44(uStack0000000000000064,uVar5);
                    uVar18 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                 Method_System_Collections_Generic_List<StylePropertyId>_get_Count__
                                                ,&stack0x00000060);
                    uVar18 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a20740,uVar18,0);
                  }
                  else {
                    _iStack0000000000000060 = CONCAT44(uStack0000000000000064,iVar7);
                    uVar18 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                 Method_System_Collections_Generic_List<StylePropertyName>_get_Item__
                                                ,&stack0x00000060);
                    in_stack_000000a0 = CONCAT44(in_stack_000000a0._4_4_,uVar5);
                    uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48),&stack0x000000a0);
                    uVar18 = FUN_0536e0dc(*(undefined8 *)
                                           Method_System_Collections_Generic_List<StylePropertyValue>__ctor__
                                          ,uVar18,uVar14,0);
                  }
                }
                plVar20 = (long *)PTR_DAT_06a0dea8;
                _uStack0000000000000068 = param_2[1];
                _iStack0000000000000060 = *param_2;
                in_stack_00000078 = param_2[3];
                in_stack_00000070 = param_2[2];
                in_stack_00000088 = param_2[5];
                in_stack_00000080 = param_2[4];
                in_stack_00000090 = param_2[6];
                if (*(int *)(*(long *)PTR_DAT_06a0dea8 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                in_stack_00000028 = _uStack0000000000000068;
                in_stack_00000020 = _iStack0000000000000060;
                in_stack_00000038 = in_stack_00000078;
                in_stack_00000030 = in_stack_00000070;
                in_stack_00000048 = in_stack_00000088;
                in_stack_00000040 = in_stack_00000080;
                in_stack_00000050 = in_stack_00000090;
                in_stack_000000f8 = FUN_05d6d62c(&stack0x00000020,0);
                uVar11 = FUN_0536c9cc(param_2[3],0);
                if (((uVar11 & 1) == 0) && (uVar11 = FUN_0536c9cc(param_2[2],0), (uVar11 & 1) == 0))
                {
                  lVar13 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,5);
                  if (lVar13 != 0) {
                    FUN_02978e90(lVar13,0,*(undefined8 *)
                                           Method_System_Collections_Generic_List<StylePropertyValue>_AddRange__
                                );
                    FUN_02978e90(lVar13,1,param_2[2]);
                    FUN_02978e90(lVar13,2,*(undefined8 *)PTR_DAT_069fb9e8);
                    FUN_02978e90(lVar13,3,param_2[3]);
                    FUN_02978e90(lVar13,4,uVar18);
                    uVar18 = FUN_0536dde4(lVar13,0);
                    goto LAB_05e16670;
                  }
                }
                else {
                  uVar11 = FUN_0536c9cc(param_2[3],0);
                  if ((uVar11 & 1) == 0) {
                    uVar18 = FUN_0536d554(*(undefined8 *)
                                           Method_System_Collections_Generic_List<StylePropertyValue>_AddRange__
                                          ,param_2[3],uVar18,0);
                  }
                  else {
                    if (iVar3 == 0) break;
                    lVar13 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
                    if (lVar13 == 0) goto LAB_05e16858;
                    FUN_0297c314(lVar13,*(undefined8 *)puVar2);
                    FUN_02978e90(lVar13,0,*(undefined8 *)puVar2);
                    _iStack0000000000000060 = CONCAT44(uStack0000000000000064,iVar3);
                    uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                &stack0x00000060);
                    FUN_0297c314(lVar13,uVar14);
                    FUN_02978e90(lVar13,1,uVar14);
                    in_stack_000000a0 = CONCAT44(in_stack_000000a0._4_4_,uVar4);
                    uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                &stack0x000000a0);
                    FUN_0297c314(lVar13,uVar14);
                    FUN_02978e90(lVar13,2,uVar14);
                    FUN_0297c314(lVar13,uVar18);
                    FUN_02978e90(lVar13,3,uVar18);
                    uVar18 = FUN_0536e164(*(undefined8 *)
                                           Method_System_Collections_Generic_List<StyleSelector>__ctor__
                                          ,lVar13,0);
                    if (*(int *)(*(long *)PTR_DAT_06a0dea8 + 0xe4) == 0) {
                      thunk_FUN_02df485c(*(long *)PTR_DAT_06a0dea8);
                    }
                    puVar2 = Method_System_Collections_Generic_List<StylePropertyName>_AddRange__;
                    in_stack_000000a8 =
                         FUN_0367bed4(&stack0x000000f8,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_List<StylePropertyValue>_Add__
                                      ,uVar4,*(undefined8 *)
                                              Method_System_Collections_Generic_List<StylePropertyName>_AddRange__
                                     );
                    in_stack_000000f8 =
                         FUN_0367bed4(&stack0x000000a8,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_List<StylePropertyValue>_get_Count__
                                      ,uVar10 & 0xffffffff,*(undefined8 *)puVar2);
                    plVar20 = (long *)PTR_DAT_06a0dea8;
                  }
LAB_05e16670:
                  if (*(int *)(*plVar20 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  in_stack_000000a8 =
                       FUN_0367bed4(&stack0x000000f8,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_List<LogEntry>_RemoveAll__,
                                    uVar6 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_List<StylePropertyName>_AddRange__
                                   );
                  in_stack_000000f8 =
                       FUN_0367bf8c(&stack0x000000a8,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_List<StylePropertyValue>_Clear__
                                    ,iVar7,*(undefined8 *)
                                            Method_System_Collections_Generic_List<StylePropertyName>_Clear__
                                   );
                  lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Method_System_Collections_Generic_List<StylePropertyName>__ctor__
                                             );
                  FUN_0552aca4(lVar13,0);
                  if (lVar13 != 0) {
                    *(undefined8 *)(lVar13 + 0x10) = param_2[3];
                    LeanTween__value();
                    *(uint *)(lVar13 + 0x20) = uVar5;
                    *(int *)(lVar13 + 0x24) = iVar7;
                    *(undefined8 *)(lVar13 + 0x30) = in_stack_00000108;
                    *(undefined8 *)(lVar13 + 0x28) = in_stack_00000100;
                    *(int *)(lVar13 + 0x18) = iVar3;
                    *(undefined4 *)(lVar13 + 0x1c) = uVar4;
                    *(undefined8 *)(lVar13 + 0x40) = uVar15;
                    *(long *)(lVar13 + 0x38) = lVar8;
                    LeanTween__value((long *)(lVar13 + 0x38),0);
                    *(undefined8 *)(lVar13 + 0x48) = uVar17;
                    LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar17);
                    if (lVar12 == 0) {
                      uVar15 = *(undefined8 *)
                                Method_System_Collections_Generic_List<StylePropertyName>__ctor__;
                      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      lVar12 = FUN_054f73b4(uVar15,0);
                    }
                    *(long *)(lVar13 + 0x50) = lVar12;
                    LeanTween__value((long *)(lVar13 + 0x50),lVar12);
                    if (lVar9 != 0) {
                      *(long *)(lVar9 + 0x10) = lVar13;
                      LeanTween__value((long *)(lVar9 + 0x10),lVar13);
                      uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_List<QDOODOQQDQODD>_get_Count__
                                                 );
                      FUN_03b6fe3c(uVar15,lVar9,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<StylePropertyName>_get_Count__
                                   ,0);
                      _iStack0000000000000060 = 0;
                      _uStack0000000000000068 = 0;
                      FUN_0432eda0(&stack0x00000060,in_stack_000000f8,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<RaycastResult>_GetEnumerator__
                                  );
                      if (*(int *)(*(long *)PTR_DAT_06a0dd50 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      FUN_05d83e14(uVar15,uVar18,uVar17,_iStack0000000000000060,
                                   _uStack0000000000000068,0);
                      goto LAB_05e16810;
                    }
                  }
                }
LAB_05e16858:
                if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000118) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                goto LAB_05e1686c;
              }
            }
            else {
              lVar12 = FUN_05e19010(&stack0x000000b0);
              if (lVar12 != 0) goto LAB_05e162a0;
              uVar19 = (ulong)*(uint *)(lVar8 + 0x18);
            }
            uVar11 = uVar11 + 1;
            __src = (void *)((long)__src + 0x48);
          } while ((long)uVar11 < (long)(int)uVar19);
        }
        uVar18 = 0;
      }
    }
  }
LAB_05e16810:
  if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000118) {
    return uVar18;
  }
LAB_05e1686c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


