/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-PokeInteractor.SurfaceHitCache.HitInfo>$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly
ENTRY_POINT: 06e7efb0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<TKey,TValue>>_get_IsReadOnly
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  
  puVar2 = PTR_DAT_092b9ef8;
  if ((DAT_0988ebfc & 1) == 0) {
    FUN_04077588(PTR_DAT_092bcf28);
    FUN_04077588(PTR_DAT_092bcf30);
    FUN_04077588(PTR_DAT_092b9ef8);
    FUN_04077588(PTR_DAT_092bcf18);
    FUN_04077588(PTR_DAT_092a64e8);
    FUN_04077588(PTR_DAT_092bcf20);
    FUN_04077588(PTR_DAT_092a91b0);
    DAT_0988ebfc = 1;
  }
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar5 = Newtonsoft_Json_JsonSerializer__set_Culture(0);
  if (lVar5 != 0) {
    FUN_06c98f30(lVar5,param_1,&stack0x00000008,*(undefined8 *)PTR_DAT_092bcf30);
    if (in_stack_00000008 == 0) {
      return;
    }
    uVar3 = FUN_07574b28(in_stack_00000008,*(undefined8 *)PTR_DAT_092a91b0,0);
    if (in_stack_00000008 != 0) {
      iVar4 = FUN_07574b28(in_stack_00000008,*(undefined8 *)PTR_DAT_092bcf18,0);
      lVar5 = in_stack_00000008;
      puVar1 = PTR_DAT_09285980;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x168);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
      }
      uVar9 = FUN_0768890c(uVar9,0);
      if (lVar5 != 0) {
        lVar5 = FUN_07572704(lVar5,*(undefined8 *)PTR_DAT_092a64e8,uVar9,0);
        lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_040b1acc(lVar10);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_040b4e00(lVar5,lVar10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(lVar5,lVar10);
          }
        }
        lVar10 = *(long *)(param_3 + 0x20);
        *(long *)(param_1 + 0x30) = lVar6;
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_040b1acc(lVar10);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_040b4e00(lVar5,lVar10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(lVar5,lVar10);
          }
        }
        thunk_FUN_040ec700((long *)(param_1 + 0x30),lVar6);
        if (iVar4 == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          thunk_FUN_040ec700((undefined8 *)(param_1 + 0x10),0);
        }
        else {
          FUN_06e7e9f8(param_1,iVar4,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
          lVar5 = in_stack_00000008;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar9 = FUN_0768890c(uVar9,0);
          if (lVar5 == 0) goto LAB_06e7f328;
          lVar5 = FUN_07572704(lVar5,*(undefined8 *)PTR_DAT_092bcf20,uVar9,0);
          lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_040b1acc(lVar10);
          }
          if (lVar5 == 0) {
            FUN_0769ae58(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar6 = thunk_FUN_040b4e00(lVar5,lVar10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(lVar5,lVar10);
          }
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar8 = 0;
            uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            puVar11 = (undefined8 *)(lVar6 + 0x24);
            do {
              if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              in_stack_00000010 = *puVar11;
              uStack0000000000000024 = *(undefined8 *)((long)puVar11 + 0x14);
              uStack0000000000000018 = (undefined4)puVar11[1];
              uStack000000000000001c = (undefined4)*(undefined8 *)((long)puVar11 + 0xc);
              uStack0000000000000020 =
                   (undefined4)((ulong)*(undefined8 *)((long)puVar11 + 0xc) >> 0x20);
              FUN_06e7ead8(param_1,*(undefined4 *)((long)puVar11 + -4),&stack0x00000010,2,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) +
                                                                    0xc0) + 0x80) + 0x20) + 0xc0) +
                            0x110));
              uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar8 = uVar8 + 1;
              puVar11 = puVar11 + 4;
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
        }
        lVar5 = *(long *)puVar2;
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar5 = Newtonsoft_Json_JsonSerializer__set_Culture(0);
        if (lVar5 != 0) {
          FUN_06c98cd0(lVar5,param_1,*(undefined8 *)PTR_DAT_092bcf28);
          return;
        }
      }
    }
  }
LAB_06e7f328:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


