/*
FUNCTION_NAME: FUN_0675a394
ENTRY_POINT: 0675a394
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_10
*/


void FUN_0675a394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_List<InvocationContext>>_MoveNext__
  ;
  if ((DAT_076e082a & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_List<InvocationContext>>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_get_Current__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<UsageHint>_Dispose__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
    thunk_FUN_032e1da0(PTR_DAT_0728bd40);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_List<InvocationContext>>_MoveNext__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<TypeName>_MoveNext__);
    DAT_076e082a = 1;
  }
  lVar5 = *(long *)puVar2;
  local_68[0] = 0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *(long *)puVar2;
  }
  FUN_066c3340(local_68,0,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),0);
  if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_04ffa6b0(*(long *)(param_1 + 0x18),
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_MoveNext__
              );
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_04ff723c(*(long *)(param_1 + 0x30),
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_get_Current__
              );
  puVar2 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
  lVar5 = *(long *)(param_1 + 0x100);
  if (lVar5 != 0) {
    lVar9 = 0;
    uVar11 = 0;
    iVar12 = 0;
    do {
      puVar1 = PTR_DAT_0728bd40;
      if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar11) {
        if (0 < *(int *)(lVar5 + 0x18)) {
          iVar12 = 0;
          do {
            lVar5 = FUN_041e29a8(lVar5,iVar12,*(undefined8 *)puVar2);
            local_78 = 0;
            uStack_70 = 0;
            FUN_0445a6b4(&local_78,8,2,1,*(undefined8 *)puVar1);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            *(undefined8 *)(lVar5 + 0x50) = uStack_70;
            *(undefined8 *)(lVar5 + 0x48) = local_78;
            if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar5 = FUN_041e29a8(*(long *)(param_1 + 0x100),iVar12,*(undefined8 *)puVar2);
            local_88 = 0;
            uStack_80 = 0;
            FUN_0445a6b4(&local_88,8,2,1,*(undefined8 *)puVar1);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            *(undefined8 *)(lVar5 + 0x60) = uStack_80;
            *(undefined8 *)(lVar5 + 0x58) = local_88;
            lVar5 = *(long *)(param_1 + 0x100);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(lVar5 + 0x18));
        }
        FUN_066c3344(local_68,0);
        return;
      }
      lVar5 = FUN_041e29a8(lVar5,uVar11 & 0xffffffff,*(undefined8 *)puVar2);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar10 = (int)uVar11;
      *(int *)(lVar5 + 0x44) = iVar10;
      if (((*(char *)(lVar5 + 0x42) != '\0') && (*(char *)(lVar5 + 0x70) != '\0')) &&
         (*(char *)(param_1 + 0x1a4) != '\0')) {
        auVar14 = FUN_0675aabc(param_1,param_2);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<TypeName>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        auVar15 = FUN_0675ad30(auVar14._0_8_,auVar14._8_8_,iVar12);
        uVar8 = auVar15._8_8_;
        uVar7 = auVar15._0_8_;
        lVar5 = *(long *)(param_1 + 0x28);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined1 (*) [16])(lVar5 + lVar9 + 0x20) = auVar15;
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar6 = FUN_04ffa71c(*(long *)(param_1 + 0x18),uVar7,uVar8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_Dispose__
                            );
        lVar5 = *(long *)(param_1 + 0x18);
        if ((uVar6 & 1) == 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = *(long *)(param_1 + 0x20);
          uVar4 = FUN_04ffa1b4(lVar5,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_MoveNext__
                              );
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          FUN_04ffa510(lVar5,uVar7,uVar8,*(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20),
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_Dispose__
                      );
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_04ff709c(*(long *)(param_1 + 0x30),uVar7,uVar8,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_List<InvocationContext>>_get_Current__
                      );
        }
        else {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar5 = FUN_04ffa464(lVar5,uVar7,uVar8,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_get_Current__
                              );
          if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = FUN_04ffa464(*(long *)(param_1 + 0x18),uVar7,uVar8,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_get_Current__
                              );
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<TypeName>_MoveNext__ +
                      0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          iVar3 = FUN_0675adc0(uVar7);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar5 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          if (iVar10 + -1 != *(int *)(lVar5 + (long)(int)(iVar3 - 1U) * 4 + 0x20)) {
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<TypeName>_MoveNext__ +
                        0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            iVar12 = iVar12 + 1;
            auVar15 = FUN_0675ad30(auVar14._0_8_,auVar14._8_8_,iVar12);
            lVar5 = *(long *)(param_1 + 0x28);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            *(undefined1 (*) [16])(lVar5 + lVar9 + 0x20) = auVar15;
            lVar5 = *(long *)(param_1 + 0x18);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar13 = *(long *)(param_1 + 0x20);
            uVar4 = FUN_04ffa1b4(lVar5,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_MoveNext__
                                );
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(uint *)(lVar13 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            FUN_04ffa510(lVar5,auVar15._0_8_,auVar15._8_8_,
                         *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20),
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_Dispose__
                        );
            if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_04ff709c(*(long *)(param_1 + 0x30),auVar15._0_8_,auVar15._8_8_,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_List<InvocationContext>>_get_Current__
                        );
          }
        }
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar5 = FUN_04ffa464(*(long *)(param_1 + 0x18),auVar15._0_8_,auVar15._8_8_,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_get_Current__
                            );
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar7 = FUN_04ffa464(*(long *)(param_1 + 0x18),auVar15._0_8_,auVar15._8_8_,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_get_Current__
                            );
        if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<TypeName>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar4 = FUN_0675adc0(uVar7);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(int *)(lVar5 + (long)(int)uVar4 * 4 + 0x20) = iVar10;
      }
      lVar5 = *(long *)(param_1 + 0x100);
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


