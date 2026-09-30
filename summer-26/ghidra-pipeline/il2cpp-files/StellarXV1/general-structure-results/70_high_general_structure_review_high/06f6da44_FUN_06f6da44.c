/*
FUNCTION_NAME: FUN_06f6da44
ENTRY_POINT: 06f6da44
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void FUN_06f6da44(long param_1,undefined8 param_2,long param_3)

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
  long *plVar11;
  long local_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  
  puVar2 = PTR_DAT_092b9ef8;
  if ((DAT_0988eea9 & 1) == 0) {
    FUN_04077588(PTR_DAT_092bcf28);
    FUN_04077588(PTR_DAT_092bcf30);
    FUN_04077588(PTR_DAT_092b9ef8);
    FUN_04077588(PTR_DAT_092bcf18);
    FUN_04077588(PTR_DAT_092a64e8);
    FUN_04077588(PTR_DAT_092bcf20);
    FUN_04077588(PTR_DAT_092a91b0);
    DAT_0988eea9 = 1;
  }
  local_88 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar5 = Newtonsoft_Json_JsonSerializer__set_Culture(0);
  if (lVar5 != 0) {
    FUN_06c98f30(lVar5,param_1,&local_88,*(undefined8 *)PTR_DAT_092bcf30);
    if (local_88 == 0) {
      return;
    }
    uVar3 = FUN_07574b28(local_88,*(undefined8 *)PTR_DAT_092a91b0,0);
    if (local_88 != 0) {
      iVar4 = FUN_07574b28(local_88,*(undefined8 *)PTR_DAT_092bcf18,0);
      lVar5 = local_88;
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
          System_Array_EmptyInternalEnumerator<Dictionary_Entry<int,_ValueTuple<Int32Enum,_object>>>__Dispose
                    (param_1,iVar4,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
          lVar5 = local_88;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar9 = FUN_0768890c(uVar9,0);
          if (lVar5 == 0) goto LAB_06f6ddf8;
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
            plVar11 = (long *)(lVar6 + 0x20);
            do {
              if (uVar7 <= uVar8) {
LAB_06f6ddf4:
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              if (*plVar11 == 0) {
                FUN_0769ae58(0x11,0);
                uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
              }
              if (uVar7 <= uVar8) goto LAB_06f6ddf4;
              lStack_78 = plVar11[2];
              local_80 = plVar11[1];
              lStack_68 = plVar11[4];
              lStack_70 = plVar11[3];
              local_60 = plVar11[5];
              FUN_06f6d594(param_1,*plVar11,&local_80,2,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) +
                                                                    0xc0) + 0x80) + 0x20) + 0xc0) +
                            0x110));
              uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar8 = uVar8 + 1;
              plVar11 = plVar11 + 6;
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
LAB_06f6ddf8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


