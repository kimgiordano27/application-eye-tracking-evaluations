/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-PokeInteractor.SurfaceHitCache.HitInfo>$$System.Collections.ICollection.CopyTo
ENTRY_POINT: 06e7efc8
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


void System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_ICollection_CopyTo
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *unaff_x26;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092bcf28);
    FUN_04077588(PTR_DAT_092bcf30);
    FUN_04077588(PTR_DAT_092b9ef8);
    FUN_04077588(PTR_DAT_092bcf18);
    FUN_04077588(PTR_DAT_092a64e8);
    FUN_04077588(PTR_DAT_092bcf20);
    FUN_04077588(PTR_DAT_092a91b0);
    *(undefined1 *)(unaff_x21 + 0xbfc) = 1;
  }
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar4 = Newtonsoft_Json_JsonSerializer__set_Culture(0);
  if (lVar4 != 0) {
    FUN_06c98f30(lVar4,param_2,&stack0x00000008,*(undefined8 *)PTR_DAT_092bcf30);
    if (in_stack_00000008 == 0) {
      return;
    }
    uVar2 = FUN_07574b28(in_stack_00000008,*(undefined8 *)PTR_DAT_092a91b0,0);
    if (in_stack_00000008 != 0) {
      iVar3 = FUN_07574b28(in_stack_00000008,*(undefined8 *)PTR_DAT_092bcf18,0);
      lVar4 = in_stack_00000008;
      puVar1 = PTR_DAT_09285980;
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
      }
      uVar8 = FUN_0768890c(uVar8,0);
      if (lVar4 != 0) {
        lVar4 = FUN_07572704(lVar4,*(undefined8 *)PTR_DAT_092a64e8,uVar8,0);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_040b1acc(lVar9);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_040b4e00(lVar4,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(lVar4,lVar9);
          }
        }
        lVar9 = *(long *)(unaff_x20 + 0x20);
        *(long *)(param_2 + 0x30) = lVar5;
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_040b1acc(lVar9);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_040b4e00(lVar4,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(lVar4,lVar9);
          }
        }
        thunk_FUN_040ec700((long *)(param_2 + 0x30),lVar5);
        if (iVar3 == 0) {
          *(undefined8 *)(param_2 + 0x10) = 0;
          thunk_FUN_040ec700((undefined8 *)(param_2 + 0x10),0);
        }
        else {
          FUN_06e7e9f8(param_2,iVar3,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
          lVar4 = in_stack_00000008;
          uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar8 = FUN_0768890c(uVar8,0);
          if (lVar4 == 0) goto LAB_06e7f328;
          lVar4 = FUN_07572704(lVar4,*(undefined8 *)PTR_DAT_092bcf20,uVar8,0);
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_040b1acc(lVar9);
          }
          if (lVar4 == 0) {
            FUN_0769ae58(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar5 = thunk_FUN_040b4e00(lVar4,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(lVar4,lVar9);
          }
          if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
            uVar7 = 0;
            uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
            puVar10 = (undefined8 *)(lVar5 + 0x24);
            do {
              if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              in_stack_00000010 = *puVar10;
              uStack0000000000000024 = *(undefined8 *)((long)puVar10 + 0x14);
              uStack0000000000000018 = (undefined4)puVar10[1];
              uStack000000000000001c = (undefined4)*(undefined8 *)((long)puVar10 + 0xc);
              uStack0000000000000020 =
                   (undefined4)((ulong)*(undefined8 *)((long)puVar10 + 0xc) >> 0x20);
              FUN_06e7ead8(param_2,*(undefined4 *)((long)puVar10 + -4),&stack0x00000010,2,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                    0xc0) + 0x80) + 0x20) + 0xc0) +
                            0x110));
              uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
              uVar7 = uVar7 + 1;
              puVar10 = puVar10 + 4;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
          }
        }
        lVar4 = *unaff_x26;
        *(undefined4 *)(param_2 + 0x2c) = uVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar4 = Newtonsoft_Json_JsonSerializer__set_Culture(0);
        if (lVar4 != 0) {
          FUN_06c98cd0(lVar4,param_2,*(undefined8 *)PTR_DAT_092bcf28);
          return;
        }
      }
    }
  }
LAB_06e7f328:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


