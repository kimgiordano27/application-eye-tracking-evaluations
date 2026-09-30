/*
FUNCTION_NAME: FUN_01c424ec
ENTRY_POINT: 01c424ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_01c424ec(undefined8 param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_0377eaa1 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4901);
    thunk_FUN_00d48444(StringLiteral_9688);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(StringLiteral_2807);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_MeshUtility_Print__);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                      );
    thunk_FUN_00d48444(System_Security_Cryptography_RSAPKCS1SHA512SignatureDescription_TypeInfo);
    DAT_0377eaa1 = 1;
  }
  puVar5 = StringLiteral_9688;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  if (param_2 != (long *)0x0) {
    lVar13 = *param_2;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_9688) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0x10) * 0x10 + 0x138);
          goto LAB_01c425ec;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_9688,0x10);
LAB_01c425ec:
    puVar4 = StringLiteral_4901;
    cVar6 = (*(code *)*puVar7)(param_2,&local_70,puVar7[1]);
    lVar14 = *param_2;
    lVar13 = *(long *)puVar5;
    uVar1 = *(ushort *)(lVar14 + 0x12a);
    uVar15 = (ulong)uVar1;
    if ((byte)(cVar6 - 3U) < 2) {
      if (uVar1 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x20) * 0x10 + 0x138);
            goto LAB_01c4269c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar13,0x20);
LAB_01c4269c:
      uVar15 = (*(code *)*puVar7)(param_2,&local_68,puVar7[1]);
      uVar10 = local_68;
      uVar11 = local_60;
      if ((uVar15 & 1) != 0) {
LAB_01c429d4:
        if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar10,uVar11);
        }
        return;
      }
      lVar13 = *param_2;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 8) * 0x10 + 0x138);
            goto LAB_01c42968;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar5,8);
LAB_01c42968:
      lVar13 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar13 != 0) && (lVar13 = FUN_01c25128(), puVar5 = StringLiteral_2807, lVar13 != 0)) {
        lVar13 = FUN_01c254c8();
        local_88 = *(undefined8 *)puVar4;
        uStack_80 = 0xffffffffffffffff;
        local_78 = cVar6;
        uVar10 = FUN_017a7f78(&local_88,0);
        uVar10 = FUN_015f5b28(*(undefined8 *)puVar5,uVar10,0);
        if (lVar13 != 0) {
          FUN_01c25764(lVar13,uVar10);
          uVar10 = local_68;
          uVar11 = local_60;
          goto LAB_01c429d4;
        }
      }
    }
    else {
      if (uVar1 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 8) * 0x10 + 0x138);
            goto LAB_01c42700;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar13,8);
LAB_01c42700:
      lVar13 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar13 != 0) && (lVar13 = FUN_01c25128(), puVar3 = PTR_DAT_033ea8a0, lVar13 != 0)) {
        lVar13 = FUN_01c254c8();
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,6);
        puVar3 = 
        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__;
        if (plVar8 != (long *)0x0) {
          if ((*(long *)
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
               != 0) &&
             (lVar14 = thunk_FUN_00d6225c(*(long *)
                                           Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                          ,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)) {
LAB_01c42a08:
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          if ((int)plVar8[3] != 0) {
            plVar8[4] = *(long *)puVar3;
            local_88 = *(undefined8 *)puVar4;
            local_78 = '\x04';
            uStack_80 = 0xffffffffffffffff;
            lVar14 = FUN_017a7f78(&local_88,0);
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_01c42a08;
            puVar3 = System_Security_Cryptography_RSAPKCS1SHA512SignatureDescription_TypeInfo;
            uVar12 = *(uint *)(plVar8 + 3);
            if (1 < uVar12) {
              plVar8[5] = lVar14;
              lVar14 = *(long *)puVar3;
              if (lVar14 != 0) {
                lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar14 == 0) goto LAB_01c42a08;
                uVar12 = *(uint *)(plVar8 + 3);
              }
              if (2 < uVar12) {
                plVar8[6] = *(long *)puVar3;
                local_a0 = *(undefined8 *)puVar4;
                local_90 = 3;
                uStack_98 = 0xffffffffffffffff;
                lVar14 = FUN_017a7f78(&local_a0,0);
                if ((lVar14 != 0) &&
                   (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_01c42a08;
                puVar3 = Method_UnityEngine_ProBuilder_MeshUtility_Print__;
                uVar12 = *(uint *)(plVar8 + 3);
                if (3 < uVar12) {
                  plVar8[7] = lVar14;
                  lVar14 = *(long *)puVar3;
                  if (lVar14 != 0) {
                    lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40));
                    if (lVar14 == 0) goto LAB_01c42a08;
                    uVar12 = *(uint *)(plVar8 + 3);
                  }
                  if (4 < uVar12) {
                    plVar8[8] = *(long *)puVar3;
                    local_b8 = *(undefined8 *)puVar4;
                    uStack_b0 = 0xffffffffffffffff;
                    local_a8 = cVar6;
                    lVar14 = FUN_017a7f78(&local_b8,0);
                    if ((lVar14 != 0) &&
                       (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_01c42a08;
                    if (5 < *(uint *)(plVar8 + 3)) {
                      plVar8[9] = lVar14;
                      uVar10 = FUN_01600844(plVar8,0);
                      puVar4 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
                      if (lVar13 != 0) {
                        FUN_01c25764(lVar13,uVar10);
                        lVar13 = *param_2;
                        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                              puVar7 = (undefined8 *)
                                       (lVar13 + (long)(*piVar16 + 0x25) * 0x10 + 0x138);
                              goto LAB_01c4292c;
                            }
                            uVar15 = uVar15 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar15 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar5,0x25);
LAB_01c4292c:
                        (*(code *)*puVar7)(param_2,puVar7[1]);
                        lVar13 = *(long *)puVar4;
                        if (*(int *)(lVar13 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar13 = *(long *)puVar4;
                        }
                        uVar10 = **(undefined8 **)(lVar13 + 0xb8);
                        uVar11 = (*(undefined8 **)(lVar13 + 0xb8))[1];
                        goto LAB_01c429d4;
                      }
                      goto LAB_01c42a00;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
    }
  }
LAB_01c42a00:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


