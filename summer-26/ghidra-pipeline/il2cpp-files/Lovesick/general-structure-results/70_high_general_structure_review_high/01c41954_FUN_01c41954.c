/*
FUNCTION_NAME: FUN_01c41954
ENTRY_POINT: 01c41954
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1 FUN_01c41954(undefined8 param_1,long *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_5c [4];
  long local_58;
  
  if ((DAT_0377ea9b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4901);
    thunk_FUN_00d48444(StringLiteral_9688);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(UnityEngine_Rendering_LODParameters_TypeInfo);
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_string>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12066);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                      );
    DAT_0377ea9b = 1;
  }
  puVar3 = StringLiteral_9688;
  local_58 = 0;
  local_5c[0] = 0;
  if (param_2 != (long *)0x0) {
    lVar12 = *param_2;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x10) * 0x10 + 0x138);
          goto LAB_01c41a3c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_9688,0x10);
LAB_01c41a3c:
    puVar5 = StringLiteral_4901;
    puVar4 = Method_System_Tuple<TextWriter,_string>__ctor__;
    cVar6 = (*(code *)*puVar7)(param_2,&local_58,puVar7[1]);
    lVar13 = *param_2;
    lVar12 = *(long *)puVar3;
    uVar1 = *(ushort *)(lVar13 + 0x12a);
    uVar14 = (ulong)uVar1;
    if (cVar6 == '\x03') {
      if (uVar1 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x1c) * 0x10 + 0x138);
            goto LAB_01c41af0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar12,0x1c);
LAB_01c41af0:
      uVar14 = (*(code *)*puVar7)(param_2,local_5c,puVar7[1]);
      if ((uVar14 & 1) != 0) {
        return local_5c[0];
      }
      lVar12 = *param_2;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_01c41d74;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,8);
LAB_01c41d74:
      lVar12 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar12 != 0) &&
         (lVar12 = FUN_01c25128(), puVar3 = UnityEngine_Rendering_LODParameters_TypeInfo,
         lVar12 != 0)) {
        lVar13 = FUN_01c254c8();
        lVar12 = local_58;
        local_78 = *(undefined8 *)puVar5;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 3;
        uVar10 = FUN_017a7f78(&local_78,0);
        uVar10 = FUN_0160073c(*(undefined8 *)puVar3,lVar12,*(undefined8 *)puVar4,uVar10,0);
        if (lVar13 != 0) {
          FUN_01c25764(lVar13,uVar10);
          return local_5c[0];
        }
      }
    }
    else {
      if (uVar1 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_01c41b54;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar12,8);
LAB_01c41b54:
      lVar12 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar12 != 0) && (lVar12 = FUN_01c25128(), puVar2 = PTR_DAT_033ea8a0, lVar12 != 0)) {
        lVar12 = FUN_01c254c8();
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,6);
        puVar2 = 
        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__;
        if (plVar8 != (long *)0x0) {
          if ((*(long *)
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
               != 0) &&
             (lVar13 = thunk_FUN_00d6225c(*(long *)
                                           Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                          ,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
LAB_01c41e14:
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          if ((int)plVar8[3] != 0) {
            plVar8[4] = *(long *)puVar2;
            local_78 = *(undefined8 *)puVar5;
            local_68 = 3;
            uStack_70 = 0xffffffffffffffff;
            lVar13 = FUN_017a7f78(&local_78,0);
            if ((lVar13 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_01c41e14;
            puVar2 = StringLiteral_12066;
            uVar11 = *(uint *)(plVar8 + 3);
            if (1 < uVar11) {
              plVar8[5] = lVar13;
              lVar13 = *(long *)puVar2;
              if (lVar13 != 0) {
                lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar13 == 0) goto LAB_01c41e14;
                uVar11 = *(uint *)(plVar8 + 3);
              }
              lVar13 = local_58;
              if (2 < uVar11) {
                plVar8[6] = *(long *)puVar2;
                if (local_58 != 0) {
                  lVar9 = thunk_FUN_00d6225c(local_58,*(undefined8 *)(*plVar8 + 0x40));
                  if (lVar9 == 0) goto LAB_01c41e14;
                  uVar11 = *(uint *)(plVar8 + 3);
                }
                if (3 < uVar11) {
                  plVar8[7] = lVar13;
                  if (*(long *)puVar4 != 0) {
                    lVar13 = thunk_FUN_00d6225c(*(long *)puVar4,*(undefined8 *)(*plVar8 + 0x40));
                    if (lVar13 == 0) goto LAB_01c41e14;
                    uVar11 = *(uint *)(plVar8 + 3);
                  }
                  if (4 < uVar11) {
                    plVar8[8] = *(long *)puVar4;
                    local_90 = *(undefined8 *)puVar5;
                    uStack_88 = 0xffffffffffffffff;
                    local_80 = cVar6;
                    lVar13 = FUN_017a7f78(&local_90,0);
                    if ((lVar13 != 0) &&
                       (lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_01c41e14;
                    if (5 < *(uint *)(plVar8 + 3)) {
                      plVar8[9] = lVar13;
                      uVar10 = FUN_01600844(plVar8,0);
                      if (lVar12 != 0) {
                        FUN_01c25764(lVar12,uVar10);
                        lVar12 = *param_2;
                        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                        if (uVar14 != 0) {
                          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                              puVar7 = (undefined8 *)
                                       (lVar12 + (long)(*piVar15 + 0x25) * 0x10 + 0x138);
                              goto LAB_01c41d50;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,0x25);
LAB_01c41d50:
                        (*(code *)*puVar7)(param_2,puVar7[1]);
                        return 0;
                      }
                      goto LAB_01c41e0c;
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
LAB_01c41e0c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


