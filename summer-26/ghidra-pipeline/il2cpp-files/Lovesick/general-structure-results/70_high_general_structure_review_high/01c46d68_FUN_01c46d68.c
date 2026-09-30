/*
FUNCTION_NAME: FUN_01c46d68
ENTRY_POINT: 01c46d68
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


undefined8 FUN_01c46d68(undefined8 param_1,long *param_2)

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
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  long local_58;
  
  if ((DAT_0377eac1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4901);
    thunk_FUN_00d48444(StringLiteral_9688);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(UnityEngine_Rendering_LODParameters_TypeInfo);
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_string>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12066);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                      );
    thunk_FUN_00d48444(System_Security_Cryptography_RSAPKCS1SHA512SignatureDescription_TypeInfo);
    DAT_0377eac1 = 1;
  }
  puVar5 = StringLiteral_9688;
  local_60 = 0;
  local_58 = 0;
  if (param_2 == (long *)0x0) goto LAB_01c473f8;
  lVar13 = *param_2;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x10) * 0x10 + 0x138);
        goto LAB_01c46e58;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_9688,0x10);
LAB_01c46e58:
  puVar4 = StringLiteral_4901;
  puVar3 = Method_System_Tuple<TextWriter,_string>__ctor__;
  puVar2 = UnityEngine_Rendering_LODParameters_TypeInfo;
  cVar6 = (*(code *)*puVar7)(param_2,&local_58,puVar7[1]);
  if (cVar6 == '\x01') {
    lVar13 = *param_2;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x16) * 0x10 + 0x138);
          goto LAB_01c46f5c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar5,0x16);
LAB_01c46f5c:
    uVar14 = (*(code *)*puVar7)(param_2,&local_60,puVar7[1]);
    if ((uVar14 & 1) == 0) {
      lVar13 = *param_2;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_01c472a8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar5,8);
LAB_01c472a8:
      lVar13 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar13 != 0) && (lVar13 = FUN_01c25128(lVar13,0), lVar13 != 0)) {
        lVar10 = FUN_01c254c8(lVar13,0);
        lVar13 = local_58;
        local_78 = *(undefined8 *)puVar4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 1;
        uVar11 = FUN_017a7f78(&local_78,0);
        uVar11 = FUN_0160073c(*(undefined8 *)puVar2,lVar13,*(undefined8 *)puVar3,uVar11,0);
        if (lVar10 != 0) {
          FUN_01c25764(lVar10,uVar11,0);
          return local_60;
        }
      }
      goto LAB_01c473f8;
    }
  }
  else {
    lVar10 = *param_2;
    lVar13 = *(long *)puVar5;
    uVar1 = *(ushort *)(lVar10 + 0x12a);
    uVar14 = (ulong)uVar1;
    if (cVar6 == '\x06') {
      if (uVar1 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
            goto LAB_01c46fc0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar13,0x24);
LAB_01c46fc0:
      uVar14 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((uVar14 & 1) == 0) {
        lVar13 = *param_2;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
              goto LAB_01c4735c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar5,8);
LAB_01c4735c:
        lVar13 = (*(code *)*puVar7)(param_2,puVar7[1]);
        if ((lVar13 == 0) || (lVar13 = FUN_01c25128(lVar13,0), lVar13 == 0)) goto LAB_01c473f8;
        lVar10 = FUN_01c254c8(lVar13,0);
        lVar13 = local_58;
        local_78 = *(undefined8 *)puVar4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 6;
        uVar11 = FUN_017a7f78(&local_78,0);
        uVar11 = FUN_0160073c(*(undefined8 *)puVar2,lVar13,*(undefined8 *)puVar3,uVar11,0);
        if (lVar10 == 0) goto LAB_01c473f8;
        FUN_01c25764(lVar10,uVar11,0);
      }
    }
    else {
      if (uVar1 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_01c47020;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar13,8);
LAB_01c47020:
      lVar13 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar13 == 0) || (lVar13 = FUN_01c25128(lVar13,0), puVar2 = PTR_DAT_033ea8a0, lVar13 == 0)
         ) {
LAB_01c473f8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar13 = FUN_01c254c8(lVar13,0);
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,8);
      puVar2 = 
      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__;
      if (plVar8 == (long *)0x0) goto LAB_01c473f8;
      if ((*(long *)
            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
           != 0) &&
         (lVar10 = thunk_FUN_00d6225c(*(long *)
                                       Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                      ,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_01c47400:
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
      if ((int)plVar8[3] == 0) goto LAB_01c473fc;
      plVar8[4] = *(long *)puVar2;
      local_78 = *(undefined8 *)puVar4;
      local_68 = 1;
      uStack_70 = 0xffffffffffffffff;
      lVar10 = FUN_017a7f78(&local_78,0);
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01c47400;
      puVar2 = System_Security_Cryptography_RSAPKCS1SHA512SignatureDescription_TypeInfo;
      uVar12 = *(uint *)(plVar8 + 3);
      if (uVar12 < 2) {
LAB_01c473fc:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar8[5] = lVar10;
      lVar10 = *(long *)puVar2;
      if (lVar10 != 0) {
        lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar10 == 0) goto LAB_01c47400;
        uVar12 = *(uint *)(plVar8 + 3);
      }
      if (uVar12 < 3) goto LAB_01c473fc;
      plVar8[6] = *(long *)puVar2;
      local_90 = *(undefined8 *)puVar4;
      local_80 = 6;
      uStack_88 = 0xffffffffffffffff;
      lVar10 = FUN_017a7f78(&local_90,0);
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01c47400;
      puVar2 = StringLiteral_12066;
      uVar12 = *(uint *)(plVar8 + 3);
      if (uVar12 < 4) goto LAB_01c473fc;
      plVar8[7] = lVar10;
      lVar10 = *(long *)puVar2;
      if (lVar10 != 0) {
        lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar10 == 0) goto LAB_01c47400;
        uVar12 = *(uint *)(plVar8 + 3);
      }
      lVar10 = local_58;
      if (uVar12 < 5) goto LAB_01c473fc;
      plVar8[8] = *(long *)puVar2;
      if (local_58 != 0) {
        lVar9 = thunk_FUN_00d6225c(local_58,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) goto LAB_01c47400;
        uVar12 = *(uint *)(plVar8 + 3);
      }
      if (uVar12 < 6) goto LAB_01c473fc;
      plVar8[9] = lVar10;
      if (*(long *)puVar3 != 0) {
        lVar10 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar10 == 0) goto LAB_01c47400;
        uVar12 = *(uint *)(plVar8 + 3);
      }
      if (uVar12 < 7) goto LAB_01c473fc;
      plVar8[10] = *(long *)puVar3;
      local_a8 = *(undefined8 *)puVar4;
      uStack_a0 = 0xffffffffffffffff;
      local_98 = cVar6;
      lVar10 = FUN_017a7f78(&local_a8,0);
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01c47400;
      if (*(uint *)(plVar8 + 3) < 8) goto LAB_01c473fc;
      plVar8[0xb] = lVar10;
      uVar11 = FUN_01600844(plVar8,0);
      if (lVar13 == 0) goto LAB_01c473f8;
      FUN_01c25764(lVar13,uVar11,0);
      lVar13 = *param_2;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x25) * 0x10 + 0x138);
            goto LAB_01c4733c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar5,0x25);
LAB_01c4733c:
      (*(code *)*puVar7)(param_2,puVar7[1]);
    }
    local_60 = 0;
  }
  return local_60;
}


